#
# Copyright (c) 2026 The8BitK
#
# SPDX-License-Identifier: MIT
#

.include	"include/hardware/regs/addressmap.inc"
.include	"include/hardware/regs/dma.inc"
.include	"include/hardware/regs/io_bank0.inc"
.include	"include/hardware/regs/pio.inc"
.include	"include/hardware/regs/resets.inc"


.section	.rodata

.balign	2
.L_hsync_prg_start:
	.2byte	0x80a0	# 0: pull   block
	.2byte	0xe081	# 1: set    pindirs, 1
			# .wrap_target
	.2byte	0xa027	# 2: mov    x, osr
	.2byte	0x0043	# 3: jmp    x--, 3
	.2byte	0xff00	# 4: set    pins, 0                [31]
	.2byte	0xff00	# 5: set    pins, 0                [31]
	.2byte	0xff00	# 6: set    pins, 0                [31]
	.2byte	0xff01	# 7: set    pins, 1                [31]
	.2byte	0xec01	# 8: set    pins, 1                [12]
	.2byte	0xc100	# 9: irq    nowait 0               [1]
			# .wrap
.L_hsync_prg_end:

.L_vsync_prg_start:		# 10+
	.2byte	0x80a0	# 0: pull   block
	.2byte	0xe081	# 1: set    pindirs, 1
			# .wrap_target
	.2byte	0xa027	# 2: mov    x, osr
	.2byte	0x20c0	# 3: wait   1 irq, 0
	.2byte	0xc001	# 4: irq    nowait 1
	.2byte	0x0043	# 5: jmp    x--, 3
	.2byte	0xe041	# 6: set    y, 1
	.2byte	0x20c0	# 7: wait   1 irq, 0
	.2byte	0x0087	# 8: jmp    y--, 7
	.2byte	0xe000	# 9: set    pins, 0
	.2byte	0x20c0	# 10: wait   1 irq, 0
	.2byte	0x20c0	# 11: wait   1 irq, 0
	.2byte	0xe042	# 12: set    y, 2
	.2byte	0x38c0	# 13: wait   1 irq, 0        side 1
	.2byte	0x008d	# 14: jmp    y--, 13
			# .wrap

.L_vsync_prg_end:

color_prg_start:
color_prg_end:


.section	.text

.globl	configure_vga
configure_vga:
	cm.push	{ra, s0, s1, s2}, -16

	li	a0, RESETS_RESET_PIO1_BITS			# power up PIO1
	call	unreset_subsystems

	li	s0, PIO1_BASE				# PIO1 to use
	li	s1, 6					# GPIO pin number: HSYNC
	li	s2, 7					# GPIO pin number: VSYNC

	#-------------------------------------
	# Configure GPIO pins
	#-------------------------------------

	# HSYNC
	mv	a0, s1					# GPIO pin number
	srl	a1, s0, 20				# calculate FUNCSEL by PIOx base address:
	andi	a1, a1, 0xF				# FUNCSEL = (PIOx_BASE >> 20) & 0xF + 4
	addi	a1, a1, 4					# PIO0_BASE=0x502xxxxx→2, PIO1_BASE=0x503xxxxx→3, PIO2_BASE=0x504xxxxx→4; FUNCSEL = nibble + 4
	call	io_bank0_set_gpio_function			# GPIO is controlled by PIO

	mv	a0, s1					# GPIO pin number
	call	pads_bank0_enable_pad_output			# enable pad output and remove isolation

	# VSYNC
	mv	a0, s2					# GPIO pin number
	srl	a1, s0, 20				# calculate FUNCSEL by PIOx base address:
	andi	a1, a1, 0xF				# FUNCSEL = (PIOx_BASE >> 20) & 0xF + 4
	addi	a1, a1, 4					# PIO0_BASE=0x502xxxxx→2, PIO1_BASE=0x503xxxxx→3, PIO2_BASE=0x504xxxxx→4; FUNCSEL = nibble + 4
	call	io_bank0_set_gpio_function			# GPIO is controlled by PIO

	mv	a0, s2					# GPIO pin number
	call	pads_bank0_enable_pad_output			# enable pad output and remove isolation

	#-------------------------------------
	# Configure PIO SET pin(s)
	#-------------------------------------

	# SM0
	slli	t0, s1, PIO_SM0_PINCTRL_SET_BASE_LSB		# the least significant SET bit is the GPIO number
	li	t1, 1 << PIO_SM0_PINCTRL_SET_COUNT_LSB		# SET bits count
	or	t0, t0, t1				# combine bits
	sw	t0, PIO_SM0_PINCTRL_OFFSET(s0)		# configure SET bits

	# SM1
	slli	t0, s2, PIO_SM1_PINCTRL_SET_BASE_LSB		# the least significant SET bit is the GPIO number
	li	t1, 1 << PIO_SM1_PINCTRL_SET_COUNT_LSB		# SET bits count
	slli	t2, s2, PIO_SM1_PINCTRL_SIDESET_BASE_LSB	# the least significant SIDESET bit is the GPIO number
	li	t3, 1 << PIO_SM1_PINCTRL_SIDESET_COUNT_LSB	# SIDESET bits count
	or	t0, t0, t1				# combine bits
	or	t0, t0, t2				# combine bits
	or	t0, t0, t3				# combine bits
	sw	t0, PIO_SM1_PINCTRL_OFFSET(s0)		# configure SET bits

	#-------------------------------------
	# Set PIO StateMachine 0 clock frequency
	#-------------------------------------

	# SM0
	li	t0, 0xFFFF0000				# INT_DIV: 0xFFFF, FRAC_DIV: 0x00
	sw	t0, PIO_SM0_CLKDIV_OFFSET(s0)

	# SM1
	li	t0, 0xFFFF0000				# INT_DIV: 0xFFFF, FRAC_DIV: 0x00
	sw	t0, PIO_SM1_CLKDIV_OFFSET(s0)

	#-------------------------------------
	# Load PIO program into PIO memory
	#-------------------------------------

	# SM0
	mv	a0, s0					# PIOx base
	mv	a1, zero					# PIO memory offset
	la	a2, .L_hsync_prg_start			# PIO program start address in RAM
	la	a3, .L_hsync_prg_end - 2			# PIO program end address in RAM
	call	pio_load_program

	# SM1
	mv	a0, s0					# PIOx base
	li	a1, 10					# PIO memory offset
	la	a2, .L_vsync_prg_start			# PIO program start address in RAM
	la	a3, .L_vsync_prg_end - 2			# PIO program end address in RAM
	call	pio_load_program

	# SM0: Prepare X register value by pushing it into FIFO TX queue
	li	t0, 0x8F
	sw	t0, PIO_TXF0_OFFSET(s0)

	# SM1: Prepare X register value by pushing it into FIFO TX queue
	li	t0, 0x1
	sw	t0, PIO_TXF1_OFFSET(s0)

	#-------------------------------------
	# Configure wraps
	#-------------------------------------

	# SM0
	lw	t0, PIO_SM0_EXECCTRL_OFFSET(s0)
	li	t1, ~(PIO_SM0_EXECCTRL_WRAP_TOP_BITS | PIO_SM0_EXECCTRL_WRAP_BOTTOM_BITS)
	and	t0, t0, t1
	li	t1, (2 << PIO_SM0_EXECCTRL_WRAP_BOTTOM_LSB) | (9 << PIO_SM0_EXECCTRL_WRAP_TOP_LSB)
	or	t0, t0, t1
	sw	t0, PIO_SM0_EXECCTRL_OFFSET(s0)

	# SM1
	lw	t0, PIO_SM1_EXECCTRL_OFFSET(s0)
	li	t1, ~(PIO_SM1_EXECCTRL_WRAP_TOP_BITS | PIO_SM1_EXECCTRL_WRAP_BOTTOM_BITS)
	and	t0, t0, t1
	li	t1, (12 << PIO_SM1_EXECCTRL_WRAP_BOTTOM_LSB) | (24 << PIO_SM1_EXECCTRL_WRAP_TOP_LSB)
	or	t0, t0, t1
	sw	t0, PIO_SM1_EXECCTRL_OFFSET(s0)

	# SM0_INSTR
	# P.S. Is required when the State Machine needs
	# to start from an address different than 0
	li	t0, 0x000a				# jmp 10
	sw	t0, PIO_SM1_INSTR_OFFSET(s0)

	#-------------------------------------
	# Enable PIO StateMachine 0
	#-------------------------------------

	li	t0, REG_ALIAS_SET_BITS
	add	t0, t0, s0				# PIOx, set bits alias
	li	t1, 0b11					# StateMachine 0 & 1
	sw	t1, PIO_CTRL_OFFSET(t0)

	cm.popret	{ra, s0, s1, s2}, 16
