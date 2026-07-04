#
# Copyright (c) 2026 The8BitK
#
# SPDX-License-Identifier: MIT
#

.include	"include/hardware/regs/addressmap.inc"
.include	"include/hardware/regs/timer.inc"
.include	"include/macros.inc"

# Function: timer_set_source_tick_generator
# Description: Selects the TICKS block as the TIMERx clock source.
#
#              When configured, TIMERx increments according to the
#              TIMERx tick generator configuration in the TICKS block.
#
# Inputs:
#   a0 = TIMERx_BASE
#
# Outputs:
#   none
#
# Clobbers:
#   tmp registers
#
.globl	timer_set_source_tick_generator
timer_set_source_tick_generator:
	sw	zero, TIMER_SOURCE_OFFSET(a0)
	ret

# Function: timer_set_alarm_relative
# Description: Sets TIMERx ALARM to trigger after a delay relative
#              to the current TIMERx count.
#
#              The alarm value is calculated as: current_timer_value + delay
#
# Inputs:
#   a0 = TIMERx_BASE
#   a1 = alarm number
#   a2 = delay in TIMERx ticks
#
# Outputs:
#   none
#
# Clobbers:
#   tmp registers
#
.globl	timer_set_alarm_relative
timer_set_alarm_relative:
	lw	t0, TIMER_TIMELR_OFFSET(a0)	# calculate the target alarm time
	add	t0, t0, a2

	sll	t1, a1, 2			# calculate alarm offset by its number
	add	t1, t1, a0

	sw	t0, TIMER_ALARM0_OFFSET(t1)	# program ALARM
	ret

# Function: timer_enable_alarm_interrupt
# Description: Enables the interrupt for a TIMERx alarm.
#
#              The specified alarm bit is set in the TIMERx interrupt
#              enable register (INTE).
#
# Inputs:
#   a0 = TIMERx_BASE
#   a1 = alarm number
#
# Outputs:
#   none
#
# Clobbers:
#   tmp registers
#
.globl	timer_enable_alarm_interrupt
timer_enable_alarm_interrupt:
	atomic.aliasSetBits	t0, a0

	li	t1, 1			# interrupt enable bitmask for the selected alarm
	sll	t1, t1, a1

	sw	t1, TIMER_INTE_OFFSET(t0)	# enable the alarm interrupt
	ret

# Function: timer_clear_alarm_interrupt
# Description: Clears a pending TIMERx alarm interrupt.
#
#              The interrupt is cleared by writing the corresponding alarm bit to
#              the TIMERx interrupt register (INTR).
#
# Inputs:
#   a0 = TIMERx_BASE
#   a1 = alarm number
#
# Outputs:
#   none
#
# Clobbers:
#   tmp registers
#
.globl	timer_clear_alarm_interrupt
timer_clear_alarm_interrupt:
	li	t0, TIMER_INTR_ALARM_0_BITS
	sll	t0, t0, a1		# build the interrupt bitmask for the selected alarm
	sw	t0, TIMER_INTR_OFFSET(a0)
	ret
