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
.include	"include/macros.inc"

.section	.rodata

.balign	2
.L_hsync_prg_start:
	.2byte	0x80a0	# 0: pull   block
			# .wrap_target
	.2byte	0xa027	# 1: mov    x, osr
	.2byte	0x0042	# 2: jmp    x--, 2
	.2byte	0xff00	# 3: set    pins, 0                [31]
	.2byte	0xff00	# 4: set    pins, 0                [31]
	.2byte	0xff00	# 5: set    pins, 0                [31]
	.2byte	0xff01	# 6: set    pins, 1                [31]
	.2byte	0xec01	# 7: set    pins, 1                [12]
	.2byte	0xc100	# 8: irq    nowait 0               [1]
			# .wrap
.L_hsync_prg_end:

.L_vsync_prg_start:		# 9+
	.2byte	0x80a0	# 0: pull   block
			# .wrap_target
	.2byte	0xa027	# 1: mov    x, osr
	.2byte	0x20c0	# 2: wait   1 irq, 0
	.2byte	0xc001	# 3: irq    nowait 1
	.2byte	0x0042	# 4: jmp    x--, 2
	.2byte	0xe049	# 5: set    y, 9
	.2byte	0x20c0	# 6: wait   1 irq, 0
	.2byte	0x0086	# 7: jmp    y--, 6
	.2byte	0xe000	# 8: set    pins, 0
	.2byte	0x20c0	# 9: wait   1 irq, 0
	.2byte	0x20c0	# 10: wait   1 irq, 0
	.2byte	0xe05f	# 11: set    y, 31
	.2byte	0x38c0	# 12: wait   1 irq, 0        side 1
	.2byte	0x008c	# 13: jmp    y--, 12
			# .wrap
.L_vsync_prg_end:

.L_color_prg_start:		# 23+
	.2byte	0x80a0	# 0: pull   block
	.2byte	0xa047	# 1: mov    y, osr
			# .wrap_target
	.2byte	0xe000	# 2: set    pins, 0
	.2byte	0xa022	# 3: mov    x, y
	.2byte	0x23c1	# 4: wait   1 irq, 1               [3]
	.2byte	0x80a0	# 5: pull   block
	.2byte	0x6403	# 6: out    pins, 3                [4]
	.2byte	0x6203	# 7: out    pins, 3                [2]
	.2byte	0x0045	# 8: jmp    x--, 5
			# .wrap
.L_color_prg_end:

.section	.text

.globl	configure_vga
configure_vga:
	cm.push	{ra, s0, s1, s2, s3, s4, s5, s6}, -32

	li	a0, RESETS_RESET_PIO1_BITS			# power up PIO1
	call	unreset_subsystems

	li	s0, PIO1_BASE				# PIO1 to use
	li	s1, 6					# GPIO pin number: HSYNC
	li	s2, 7					# GPIO pin number: VSYNC
	li	s3, 8					# GPIO pin number: R
	li	s4, 9					# GPIO pin number: G
	li	s5, 10					# GPIO pin number: B

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
	call	io_bank0_set_gpio_function			# GPIO is controlled by PIO
	call	pads_bank0_enable_pad_output			# enable pad output and remove isolation

	# RGB
	mv	a0, s3					# R
	call	io_bank0_set_gpio_function
	call	pads_bank0_enable_pad_output
	mv	a0, s4					# G
	call	io_bank0_set_gpio_function
	call	pads_bank0_enable_pad_output
	mv	a0, s5					# B
	call	io_bank0_set_gpio_function
	call	pads_bank0_enable_pad_output

	#-------------------------------------
	# Configure PIO SET pin(s)
	#-------------------------------------

	# HSYNC
	mv	a0, s0					# PIO_BASE
	li	a1, 0					# State Machine number
	li	a2, 0					# OUT pins:     none
	ori	a3, s1, 0x100				# SET pins:     derive from s1
	li	a4, 0					# SIDESET pins: none
	li	a5, 0					# IN pins:      none
	call	pio_sm_configure_pins
	li	a2, 1					# SET PINDIRS
	call	pio_sm_configure_pindirs

	# HSYNC
	mv	a0, s0					# PIO_BASE
	li	a1, 1					# State Machine number
	li	a2, 0					# OUT pins:     none
	ori	a3, s2, 0x100				# SET pins:     derive from s2
	ori	a4, s2, 0x100				# SIDESET pins: derive from s2
	li	a5, 0					# IN pins:      none
	call	pio_sm_configure_pins
	li	a2, 1					# SET PINDIRS
	call	pio_sm_configure_pindirs

	# RGB
	mv	a0, s0					# PIO_BASE
	li	a1, 2					# State Machine number
	# mv	a2, s3					# OUT pins:     none
	# ori	a3, s3, 0x100				# SET pins:     derive from s3
li	a2, 0x308					# OUT pins:     none
li	a3, 0x308					# SET pins:     derive from s3
	li	a4, 0					# SIDESET pins: none
	li	a5, 0					# IN pins:      none
	call	pio_sm_configure_pins
	li	a2, 3					# SET PINDIRS
	call	pio_sm_configure_pindirs

	#-------------------------------------
	# Set PIO StateMachine 0 & 1 clock frequency
	#-------------------------------------

	li	t0, 0x000a0000				# 25 MHz,  INT_DIV: 250/25=10, FRAC_DIV: 0x00
	sw	t0, PIO_SM0_CLKDIV_OFFSET(s0)			# SM0
	sw	t0, PIO_SM1_CLKDIV_OFFSET(s0)			# SM1

	#-------------------------------------
	# Load PIO program into PIO memory
	#-------------------------------------

	# SM0: HSYNC
	mv	a0, s0					# PIOx base
	mv	a1, zero					# PIO memory offset
	la	a2, .L_hsync_prg_start			# PIO program start address in RAM
	la	a3, .L_hsync_prg_end - 2			# PIO program end address in RAM
	call	pio_load_program

	# SM0: Prepare X register value by pushing it into FIFO TX queue
	li	t0, 640 + 16 - 2 				# TODO: check if the numbers are correct
	sw	t0, PIO_TXF0_OFFSET(s0)

	# SM1: VSYNC
	mv	a0, s0					# PIOx base
	li	a1, 9					# PIO memory offset
	la	a2, .L_vsync_prg_start			# PIO program start address in RAM
	la	a3, .L_vsync_prg_end - 2			# PIO program end address in RAM
	call	pio_load_program

	# SM1: Prepare X register value by pushing it into FIFO TX queue
	li	t0, 480
	sw	t0, PIO_TXF1_OFFSET(s0)

	# SM2: RGB
	mv	a0, s0					# PIOx base
	li	a1, 23					# PIO memory offset
	la	a2, .L_color_prg_start			# PIO program start address in RAM
	la	a3, .L_color_prg_start - 2			# PIO program end address in RAM
	call	pio_load_program

	# SM2: Prepare X register value by pushing it into FIFO TX queue
	li	t0, 480
	sw	t0, PIO_TXF2_OFFSET(s0)

	#-------------------------------------
	# Configure wraps
	#-------------------------------------

	mv	a0, s0
	li	a1, 0
	li	a2, 1
	li	a3, 8
	call	pio_sm_configure_wrap

	mv	a0, s0
	li	a1, 1
	li	a2, 10
	li	a3, 22
	call	pio_sm_configure_wrap

	mv	a0, s0
	li	a1, 2
	li	a2, 25
	li	a3, 31
	call	pio_sm_configure_wrap

	# SM1: INSTR
	li	t0, 0x0009				# jmp 9
	sw	t0, PIO_SM1_INSTR_OFFSET(s0)

	# SM2: INSTR
	li	t0, 0x0017				# jmp 23 (decimal)
	sw	t0, PIO_SM2_INSTR_OFFSET(s0)

	#-------------------------------------
	# Enable StateMachines
	#-------------------------------------

	atomic.aliasSetBits t0, s0				# PIOx, set bits alias
	li	t1, 0b111					# StateMachine 0, 1, 2
	sw	t1, PIO_CTRL_OFFSET(t0)

	cm.popret	{ra, s0, s1, s2, s3, s4, s5, s6}, 32
