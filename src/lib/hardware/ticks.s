#
# Copyright (c) 2026 The8BitK
#
# SPDX-License-Identifier: MIT
#

.include	"include/hardware/regs/addressmap.inc"
.include	"include/hardware/regs/ticks.inc"
.include	"include/macros.inc"

# Macro: ticks.timesCtrlBase
# Description:
#   Calculates the address of a register within a TICKS TIMERx block
#   and stores the resulting address in dst register.
#
# Inputs:
#   ticks_base
#   timer_num  = regular register name containing the timer number (0, 1, ...)
#
# Outputs:
#   dst = address of the requested TIMERx register
#
# Formula:
#   dst = ticks_base + (timer_block_stride * timer_num)
#
.macro	ticks.timesCtrlBase dst:req ticks_base:req timer_num:req
	.ifc \dst,\ticks_base
		error "dst and ticks_base must be different registers"
	.endif
	.ifc \dst,\timer_num
		.error "dst and timer_num must be different registers"
	.endif

	li	\dst, TICKS_TIMER1_CTRL_OFFSET - TICKS_TIMER0_CTRL_OFFSET
	mul	\dst, \dst, \timer_num
	add	\dst, \dst, \ticks_base
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
	li	t0, TICKS_BASE
	ticks.timesCtrlBase t1, t0, a0
	sw	a1, TICKS_TIMER0_CYCLES_OFFSET(t1)
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
	li	t0, TICKS_BASE
	ticks.timesCtrlBase t1, t0, a0
	atomic.aliasSetBits t1, t1
	li	t0, TICKS_TIMER0_CTRL_ENABLE_BITS
	sw	t0, TICKS_TIMER0_CTRL_OFFSET(t1)
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
	li	t0, TICKS_BASE
	ticks.timesCtrlBase t1, t0, a0
	atomic.aliasClrBits t1, t1
	li	t0, TICKS_TIMER0_CTRL_ENABLE_BITS
	sw	t0, TICKS_TIMER0_CTRL_OFFSET(t1)
	ret
