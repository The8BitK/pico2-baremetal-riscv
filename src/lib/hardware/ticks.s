#
# Copyright (c) 2026 The8BitK
#
# SPDX-License-Identifier: MIT
#

.include	"include/hardware/regs/addressmap.inc"
.include	"include/hardware/regs/ticks.inc"

# Macro: ticksCalcTimerRegAddr
# Description:
#   Calculates the address of a register within a TICKS TIMERx block
#   and stores the resulting address in dst register.
#
# Inputs:
#   timer = regular register name containing the timer number (0, 1, ...)
#   reg   = register offset within a TIMERx block
#
# Outputs:
#   dst = address of the requested TIMERx register
#
# Clobbers:
#   t1 (unless other tmp register is provided)
#
# Formula:
#   dst = TICKS_BASE + timer_reg + (timer * 12)
#
# Notes:
#   Each TIMERx block occupies 12 bytes (3 registers × 4 bytes).
#
.macro	ticksCalcTimerRegAddr dst:req timer:req timer_reg:req tmp=t1
	li	\dst, TICKS_BASE + \timer_reg
	li	\tmp, 12				# size of one TIMERx register block
	mul	\tmp, \tmp, \timer			# timer * 12
	add	\dst, \dst, \tmp			# address of requested TIMERx register
.endm

# Function: ticks_set_timer_increment_cycles
# Description: Configures the number of tick-generator cycles required
#              before TIMERx increments once.
#
# Datasheet 8.5.1:
# Before changing the cycle count, always stop the tick generator with the TIMER0_CTRL.ENABLE bit.
# You can re-enable once the tick generator is configured.
#
# Inputs:
#   a0 = timer number
#   a1 = number of source clock cycles per TIMERx tick
#
# Outputs:
#   none
#
.globl	ticks_set_timer_increment_cycles
ticks_set_timer_increment_cycles:
	ticksCalcTimerRegAddr t0, a0, TICKS_TIMER0_CYCLES_OFFSET
	sw	a1, 0(t0)
	ret

# Function: ticks_start_timer
# Description: Starts the TIMERx tick generator by enabling its tick
#              source.
#
# Inputs:
#   a0 = timer number
#
# Outputs:
#   none
#
.globl	ticks_start_timer
ticks_start_timer:
	ticksCalcTimerRegAddr t0, a0, TICKS_TIMER0_CTRL_OFFSET + REG_ALIAS_SET_BITS
	li	t1, TICKS_TIMER0_CTRL_ENABLE_BITS	# enable TIMERx tick generation
	sw	t1, 0(t0)
	ret

# Function: ticks_stop_timer
# Description: Stops the TIMERx tick generator by disabling its tick
#              source.
#
# Inputs:
#   a0 = timer number
#
# Outputs:
#   none
#
.globl	ticks_stop_timer
ticks_stop_timer:
	ticksCalcTimerRegAddr t0, a0, TICKS_TIMER0_CTRL_OFFSET + REG_ALIAS_CLR_BITS
	li	t1, TICKS_TIMER0_CTRL_ENABLE_BITS	# disable TIMERx tick generation
	sw	t1, 0(t0)
	ret
