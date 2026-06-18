#
# Copyright (c) 2026 The8BitK
#
# SPDX-License-Identifier: MIT
#

.include	"include/hardware/regs/addressmap.inc"
.include	"include/hardware/regs/io_bank0.inc"
.include	"include/hardware/regs/pio.inc"

.section	.text

# Function: configure_and_start_blink_program_pio
# Description: Configures PIOx state machine 0 to blink a GPIO pin and starts it.
#
#              Steps performed:
#                1. Configures the GPIO pad and sets its function to PIOx.
#                2. Sets SM0 SET pin to the specified GPIO (SET_BASE = GPIO, SET_COUNT = 1).
#                3. Sets SM0 clock divider to INT_DIV = 0xFFFF (FRAC_DIV = 0), producing
#                   a PIO clock of approximately CLK_SYS / 65535.
#                4. Loads the blink program into PIO instruction memory.
#                5. Enables SM0.
#
# Inputs:
#   a0 = PIOx_BASE
#   a1 = GPIO number
#
# Outputs:
#   none
#
.globl	configure_and_start_blink_program_pio
configure_and_start_blink_program_pio:
	addi	sp, sp, -12
	sw	ra, 0(sp)
	sw	s0, 4(sp)
	sw	s1, 8(sp)

	mv	s0, a0					# keep a copy of PIOx base
	mv	s1, a1					# and GPIO pin number

	#-------------------------------------
	# Configure GPIO pin
	#-------------------------------------

	mv	a0, s1					# GPIO pin number
	srl	a1, s0, 20				# calculate FUNCSEL by PIOx base address:
	andi	a1, a1, 0xF				# FUNCSEL = (PIOx_BASE >> 20) & 0xF + 4
	addi	a1, a1, 4					# PIO0_BASE=0x502xxxxx→2, PIO1_BASE=0x503xxxxx→3, PIO2_BASE=0x504xxxxx→4; FUNCSEL = nibble + 4
	call	io_bank0_set_gpio_function			# GPIO is controlled by PIO

	mv	a0, s1					# GPIO pin number
	call	pads_bank0_enable_pad_output			# enable pad output and remove isolation

	#-------------------------------------
	# Configure PIO SET pin(s)
	#-------------------------------------

	slli	t0, s1, PIO_SM0_PINCTRL_SET_BASE_LSB		# the least significant SET bit is the GPIO number (s1)
	li	t1, 1 << PIO_SM0_PINCTRL_SET_COUNT_LSB		# SET bits count
	or	t0, t0, t1				# combine bits
	sw	t0, PIO_SM0_PINCTRL_OFFSET(s0)		# configure SET bits

	#-------------------------------------
	# Set PIO StateMachine 0 clock frequency
	#-------------------------------------

	li	t0, 0xFFFF0000				# INT_DIV: 0xFFFF, FRAC_DIV: 0x00
	sw	t0, PIO_SM0_CLKDIV_OFFSET(s0)	

	# # SM0_INSTR
	# # P.S. Is required when the State Machine needs
	# # to start from an address different than 0
	# li	t0, 0x1f0c				# "jmp 0x0C" PIO instruction to start the machine at addr 0x0C
	# sw	t0, PIO_SM0_INSTR_OFFSET(s0)

	#-------------------------------------
	# Load PIO program into PIO memory
	#-------------------------------------

	mv	a0, s0					# PIOx base
	mv	a1, zero					# PIO memory offset
	la	a2, .L_start				# PIO program start address in RAM
	la	a3, .L_end - 2				# PIO program end address in RAM
	call	pio_load_program

	#-------------------------------------
	# Enable PIO StateMachine 0
	#-------------------------------------

	li	t0, REG_ALIAS_SET_BITS
	add	t0, t0, s0				# PIOx, StateMachine 0, set bits alias
	li	t1, 1
	sw	t1, PIO_CTRL_OFFSET(t0)

	lw	ra, 0(sp)
	lw	s0, 4(sp)
	lw	s1, 8(sp)
	addi	sp, sp, 12
	ret

.section	.rodata.pio

.L_start:
	.2byte	0xe081	# 0: set    pindirs, 1
	.2byte	0xe03f	# 1: set    x, 31
	.2byte	0xff01	# 2: set    pins, 1                [31]
	.2byte	0xff00	# 3: set    pins, 0                [31]
	.2byte	0xbf41	# 4: mov    y, x                   [31]
	.2byte	0xbf42	# 5: nop                           [31]
	.2byte	0x1f85	# 6: jmp    y--, 5                 [31]
	.2byte	0x1f02	# 7: jmp    2                      [31]
.L_end:
