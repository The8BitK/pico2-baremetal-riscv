#
# Copyright (c) 2026 The8BitK
#
# SPDX-License-Identifier: MIT
#

.include	"include/hardware/regs/addressmap.inc"
.include	"include/hardware/regs/io_bank0.inc"
.include	"include/hardware/regs/rvcsr.inc"
.include	"include/hardware/regs/resets.inc"

.section	.text
.globl	_start_main
_start_main:

	#---------------------------------------------
	# Configure interrupts
	#---------------------------------------------

	call	rvcsr_disable_interrupts		# disable interrupts globally
	call	rvcsr_disable_all_machine_interrupts	# disable all machine-mode interrupts

	la	a0, vector_table_start		# vector table address
	call	rvcsr_set_mtvec_vectored_mode		# set vectored mode interrupts

	li	a0, RVCSR_MIE_MEIE_BITS		# external interrupts only
	call	rvcsr_enable_machine_interrupts	# enable machine interrupts (IRQs only)
	call	rvcsr_enable_interrupts		# enable interrupts globally

	li	a0, 0				# IRQ-0 (Timer0 Alarm0)
	call	rvcsr_enable_irq			# enable IRQ-0

	#---------------------------------------------
	# Activate peripherals
	#---------------------------------------------

	li	a0, RESETS_RESET_IO_BANK0_BITS | RESETS_RESET_PADS_BANK0_BITS | RESETS_RESET_TIMER0_BITS | RESETS_RESET_PLL_SYS_BITS
	call	unreset_subsystems

	#---------------------------------------------
	# GPIO
	#---------------------------------------------

	li	a0, 25				# GPIO 25
	call	sio_gpio_setup_output		# Initialize GPIO pin as SIO-controlled output

	#---------------------------------------------
	# Crystal oscillator (XOSC)
	#---------------------------------------------

	# A STARTUP delay value of 47 (1 ms), as recommended by the
	# datasheet, resulted in intermittent oscillator startup failures
	# on my Pico 2 board. Increasing the delay to 4 ms eliminated
	# the issue.
	# P.S. Pico 2 uses a 12 MHz external crystal

	li	a0, 188				# startup delay: 12 MHz × 4 ms ÷ 256 ≈ 188
	call	xosc_start
	call	clocks_set_clk_ref_source_xosc	# set CLK_REF to XOSC

	#---------------------------------------------
	# PLL
	#---------------------------------------------

	# Divider params for 150 MHz:
	#
	# $ cd pico-sdk
	# $ src/rp2_common/hardware_clocks/scripts/vcocalc.py 150
	#   Requested: 150.0 MHz
	#   Achieved:  150.0 MHz
	#   REFDIV:    1
	#   FBDIV:     125 (VCO = 1500.0 MHz)
	#   PD1:       5
	#   PD2:       2

	li	a0, 1	# REFDIV
	li	a1, 125	# FBDIV
	li	a2, 5	# PD1
	li	a3, 2	# PD2
	call	pll_sys_start

	#---------------------------------------------
	# Clocks: CLK_SYS
	#---------------------------------------------

	call	clocks_set_clk_sys_aux_source_pll_sys
	call	clocks_set_clk_sys_source_aux		# set CLK_SYS to AUXILIARY PLL

	#---------------------------------------------
	# Ticks
	#---------------------------------------------

	# Datasheet 8.5.1:
	# Before changing the cycle count, always stop the tick generator with the TIMER0_CTRL.ENABLE bit.
	# You can re-enable once the tick generator is configured.

	li	a0, 0				# timer 0
	call	ticks_stop_timer			# stop timer

	li	a0, 0				# timer 0
	li	a1, 12				# inc timer every 1 μs: 12 CLK_REF cycles at 12 MHz
	call	ticks_set_timer_increment_cycles	# reconfigure ticks

	li	a0, 0				# timer 0
	call	ticks_start_timer			# start timer

	#---------------------------------------------
	# Timer0
	#---------------------------------------------

	li	a0, TIMER0_BASE
	call	timer_set_source_tick_generator	# timer0 counts ticks

	li	a0, TIMER0_BASE
	li	a1, 0				# alarm 0
	call	timer_enable_alarm_interrupt		# enable timer0 alarm0

	li	a0, 0				# IRQ
	call	rvcsr_trigger_irq			# trigger IRQ-0 once to start counting

	#---------------------------------------------
	# PIO
	#---------------------------------------------

	li	a0, RESETS_RESET_PIO0_BITS		# power up PIO0
	call	unreset_subsystems

	li	a0, PIO0_BASE			# PIOx to use
	li	a1, 2				# GPIO to blink
	call	configure_and_start_blink_program_pio

	#---------------------------------------------
	# Launch core 1
	#---------------------------------------------

	la	a0, vector_table_start
	li	a1, SRAM_END - 4096
	la	a2, .L_core1_entry_point
	call	sio_multicore_launch_core1

	#---------------------------------------------
	# VGA
	#---------------------------------------------

	call	configure_vga

	#---------------------------------------------
	# Constantly toggle GPIO 0
	#---------------------------------------------

	li	a0, 0				# GPIO 0
	call	sio_gpio_setup_output		# Initialize GPIO pin as SIO-controlled output

.L_core0_loop_forever:
	li	a0, 0				# GPIO 0
	call	sio_toggle_gpio
	call	pause
	j	.L_core0_loop_forever

	#=============================================
	# Core 1 entry point
	#=============================================

.L_core1_entry_point:
	li	a0, 1				# GPIO 1
	call	sio_gpio_setup_output		# Initialize GPIO pin as SIO-controlled output

.L_core1_loop_forever:
	li	a0, 1				# GPIO 1
	call	sio_toggle_gpio
	call	pause
	j	.L_core1_loop_forever

	#---------------------------------------------
	# Simple waste cycles loop
	#---------------------------------------------

pause:
	li	t0, 0x400000
.L_waste_cycles_here:
	addi	t0, t0, -1
	bnez	t0, .L_waste_cycles_here
	ret
