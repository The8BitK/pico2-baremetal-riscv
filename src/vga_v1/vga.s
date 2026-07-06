#
# Copyright (c) 2026 The8BitK
#
# SPDX-License-Identifier: MIT
#

.include	"include/hardware/regs/addressmap.inc"
.include	"include/hardware/regs/dma.inc"
.include	"include/hardware/regs/dreq.inc"
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
	cm.push	{ra, s0, s1, s2, s3, s4, s5, s6, a0, a1, a2, a3}, -48

	li	a0, RESETS_RESET_PIO1_BITS			# power up PIO1
	call	unreset_subsystems

	li	s0, PIO1_BASE				# PIO1 to use
	li	s1, 4					# GPIO pin number: HSYNC
	li	s2, 5					# GPIO pin number: VSYNC
	li	s3, 6					# GPIO pin number: R
	li	s4, 7					# GPIO pin number: G
	li	s5, 8					# GPIO pin number: B

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

	# VSYNC
	mv	a0, s0					# PIO_BASE
	li	a1, 1					# State Machine number
	li	a2, 0					# OUT pins:     none
	ori	a3, s2, 0x100				# SET pins:     derive from s2
	ori	a4, s2, 0x200				# SIDESET pins: derive from s2 (one extra bit to make sideset optional)
	li	a5, 0					# IN pins:      none
	call	pio_sm_configure_pins

	# Make sideset pins optional
	lw	t1, PIO_SM1_EXECCTRL_OFFSET(s0)
	bseti	t1, t1, 30
	sw	t1, PIO_SM1_EXECCTRL_OFFSET(s0)

	li	a2, 1					# SET PINDIRS
	call	pio_sm_configure_pindirs


	# RGB
	mv	a0, s0					# PIO_BASE
	li	a1, 2					# State Machine number
	ori	a2, s3, 0x300				# SET pins:     derive from s3
	ori	a3, s3, 0x300				# SIDESET pins: derive from s3
	li	a4, 0					# SIDESET pins: none
	li	a5, 0					# IN pins:      none
	call	pio_sm_configure_pins
	li	a2, 7					# SET PINDIRS
	call	pio_sm_configure_pindirs

	#-------------------------------------
	# Set PIO StateMachine 0 & 1 clock frequency
	#-------------------------------------

	li	t0, 0x000a0000				# 25 MHz,  INT_DIV: 250/25=10, FRAC_DIV: 0x00
	sw	t0, PIO_SM0_CLKDIV_OFFSET(s0)			# SM0
	sw	t0, PIO_SM1_CLKDIV_OFFSET(s0)			# SM1
	li	t0, 0x00020000				# 125 Mhz
	sw	t0, PIO_SM2_CLKDIV_OFFSET(s0)			# SM1

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
	li	t0, 640 + 16 - 1 				# active + frontporch - 1
	sw	t0, PIO_TXF0_OFFSET(s0)

	# SM1: VSYNC
	mv	a0, s0					# PIOx base
	li	a1, 9					# PIO memory offset
	la	a2, .L_vsync_prg_start			# PIO program start address in RAM
	la	a3, .L_vsync_prg_end - 2			# PIO program end address in RAM
	call	pio_load_program

	# SM1: Prepare X register value by pushing it into FIFO TX queue
	li	t0, 479					# active - 1
	sw	t0, PIO_TXF1_OFFSET(s0)

	# SM2: RGB
	mv	a0, s0					# PIOx base
	li	a1, 23					# PIO memory offset
	la	a2, .L_color_prg_start			# PIO program start address in RAM
	la	a3, .L_color_prg_end - 2			# PIO program end address in RAM
	call	pio_load_program

	# SM2: Prepare X register value by pushing it into FIFO TX queue
	li	t0, 319					# active/2 - 1 (one byte stores 2 pixels)
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

	# SM1: INSTR
	li	t0, 0x0009				# jmp 9
	sw	t0, PIO_SM1_INSTR_OFFSET(s0)

	mv	a0, s0
	li	a1, 2
	li	a2, 25
	li	a3, 31
	call	pio_sm_configure_wrap

	# SM2: INSTR
	li	t0, 0x0017				# jmp 23 (decimal)
	sw	t0, PIO_SM2_INSTR_OFFSET(s0)

	#-------------------------------------
	# DMA-0: rgb data
	#-------------------------------------

	li	a0, RESETS_RESET_DMA_BITS			# power up DMA
	call	unreset_subsystems

	li	a0, DMA_BASE

	# DMA-0 WRITE, READ & TRANSFER (DMA_CH0_READ_ADDR_OFFSET gets configured by DMA-1)

	li	t0, PIO1_BASE + PIO_TXF2_OFFSET
	sw	t0, DMA_CH0_WRITE_ADDR_OFFSET(a0)		# DMA-0: write

	# la	t0, xxx
	# sw	t0, DMA_CH0_READ_ADDR_OFFSET(a0)		# DMA-0: read (pointer)

	la	t0, screen_data_start
	la	t1, screen_data_end
	sub	t0, t1, t0
	sw	t0, DMA_CH0_TRANS_COUNT_OFFSET(a0)		# DMA-0 transfer

	li	t0, 1 << DMA_CH0_CTRL_TRIG_EN_LSB | 1 << DMA_CH0_CTRL_TRIG_INCR_READ_LSB | 1 << DMA_CH0_CTRL_TRIG_CHAIN_TO_LSB | DREQ_PIO1_TX2 << DMA_CH0_CTRL_TRIG_TREQ_SEL_LSB
	sw	t0, DMA_CH0_AL1_CTRL_OFFSET(a0)		# DMA-0 control register

	#-------------------------------------
	# DMA-1: reload DMA-0
	#-------------------------------------

	li	a0, DMA_BASE

	li	t0, DMA_BASE + DMA_CH0_READ_ADDR_OFFSET
	sw	t0, DMA_CH1_WRITE_ADDR_OFFSET(a0)		# DMA-1: write

	la	t0, screen_ptr
	sw	t0, DMA_CH1_READ_ADDR_OFFSET(a0)		# DMA-1: read (pointer)

	li	t0, 1
	sw	t0, DMA_CH1_TRANS_COUNT_OFFSET(a0)		# DMA-1 transfer (1 word)

	li	t0, 1 << DMA_CH0_CTRL_TRIG_EN_LSB | DMA_CH0_CTRL_TRIG_DATA_SIZE_VALUE_SIZE_WORD << DMA_CH0_CTRL_TRIG_DATA_SIZE_LSB
	sw	t0, DMA_CH1_CTRL_TRIG_OFFSET(a0)		# DMA-1 control register

	#-------------------------------------
	# Enable PIO StateMachines
	#-------------------------------------

	atomic.aliasSetBits t0, s0				# PIOx, set bits alias
	li	t1, 0b111					# StateMachine 0, 1, 2
	sw	t1, PIO_CTRL_OFFSET(t0)

	cm.popret	{ra, s0, s1, s2, s3, s4, s5, s6, a0, a1, a2, a3}, 48

.section .rodata

screen_data_start:
	.fill 40, 1, 0b00000000
	.fill 40, 1, 0b00001001
	.fill 40, 1, 0b00010010
	.fill 40, 1, 0b00011011
	.fill 40, 1, 0b00100100
	.fill 40, 1, 0b00101101
	.fill 40, 1, 0b00110110
	.fill 40, 1, 0b00111111
screen_data_end:

screen_ptr:
	.word	screen_data_start
