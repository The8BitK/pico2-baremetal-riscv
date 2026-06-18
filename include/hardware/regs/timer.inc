#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : TIMER
# Version        : 1
# Bus type       : apb
# Description    : Controls time and alarms
#
#                  time is a 64 bit value indicating the time since power-on
#
#                  timeh is the top 32 bits of time & timel is the bottom 32
#                  bits to change time write to timelw before timehw to read
#                  time read from timelr before timehr
#
#                  An alarm is set by setting alarm_enable and writing to the
#                  corresponding alarm register When an alarm is pending, the
#                  corresponding alarm_running signal will be high An alarm can
#                  be cancelled before it has finished by clearing the
#                  alarm_enable When an alarm fires, the corresponding
#                  alarm_irq is set and alarm_running is cleared To clear the
#                  interrupt write a 1 to the corresponding alarm_irq The timer
#                  can be locked to prevent writing
# =============================================================================
.ifndef	_HARDWARE_REGS_TIMER_H
.set	_HARDWARE_REGS_TIMER_H, 1
# =============================================================================
# Register    : TIMER_TIMEHW
# Description : Write to bits 63:32 of time always write timelw before timehw
.equ	TIMER_TIMEHW_OFFSET, 0x00000000
.equ	TIMER_TIMEHW_BITS, 0xffffffff
.equ	TIMER_TIMEHW_RESET, 0x00000000
.equ	TIMER_TIMEHW_MSB, 31
.equ	TIMER_TIMEHW_LSB, 0
# =============================================================================
# Register    : TIMER_TIMELW
# Description : Write to bits 31:0 of time writes do not get copied to time
#               until timehw is written
.equ	TIMER_TIMELW_OFFSET, 0x00000004
.equ	TIMER_TIMELW_BITS, 0xffffffff
.equ	TIMER_TIMELW_RESET, 0x00000000
.equ	TIMER_TIMELW_MSB, 31
.equ	TIMER_TIMELW_LSB, 0
# =============================================================================
# Register    : TIMER_TIMEHR
# Description : Read from bits 63:32 of time always read timelr before timehr
.equ	TIMER_TIMEHR_OFFSET, 0x00000008
.equ	TIMER_TIMEHR_BITS, 0xffffffff
.equ	TIMER_TIMEHR_RESET, 0x00000000
.equ	TIMER_TIMEHR_MSB, 31
.equ	TIMER_TIMEHR_LSB, 0
# =============================================================================
# Register    : TIMER_TIMELR
# Description : Read from bits 31:0 of time
.equ	TIMER_TIMELR_OFFSET, 0x0000000c
.equ	TIMER_TIMELR_BITS, 0xffffffff
.equ	TIMER_TIMELR_RESET, 0x00000000
.equ	TIMER_TIMELR_MSB, 31
.equ	TIMER_TIMELR_LSB, 0
# =============================================================================
# Register    : TIMER_ALARM0
# Description : Arm alarm 0, and configure the time it will fire. Once armed,
#               the alarm fires when TIMER_ALARM0 == TIMELR. The alarm will
#               disarm itself once it fires, and can be disarmed early using
#               the ARMED status register.
.equ	TIMER_ALARM0_OFFSET, 0x00000010
.equ	TIMER_ALARM0_BITS, 0xffffffff
.equ	TIMER_ALARM0_RESET, 0x00000000
.equ	TIMER_ALARM0_MSB, 31
.equ	TIMER_ALARM0_LSB, 0
# =============================================================================
# Register    : TIMER_ALARM1
# Description : Arm alarm 1, and configure the time it will fire. Once armed,
#               the alarm fires when TIMER_ALARM1 == TIMELR. The alarm will
#               disarm itself once it fires, and can be disarmed early using
#               the ARMED status register.
.equ	TIMER_ALARM1_OFFSET, 0x00000014
.equ	TIMER_ALARM1_BITS, 0xffffffff
.equ	TIMER_ALARM1_RESET, 0x00000000
.equ	TIMER_ALARM1_MSB, 31
.equ	TIMER_ALARM1_LSB, 0
# =============================================================================
# Register    : TIMER_ALARM2
# Description : Arm alarm 2, and configure the time it will fire. Once armed,
#               the alarm fires when TIMER_ALARM2 == TIMELR. The alarm will
#               disarm itself once it fires, and can be disarmed early using
#               the ARMED status register.
.equ	TIMER_ALARM2_OFFSET, 0x00000018
.equ	TIMER_ALARM2_BITS, 0xffffffff
.equ	TIMER_ALARM2_RESET, 0x00000000
.equ	TIMER_ALARM2_MSB, 31
.equ	TIMER_ALARM2_LSB, 0
# =============================================================================
# Register    : TIMER_ALARM3
# Description : Arm alarm 3, and configure the time it will fire. Once armed,
#               the alarm fires when TIMER_ALARM3 == TIMELR. The alarm will
#               disarm itself once it fires, and can be disarmed early using
#               the ARMED status register.
.equ	TIMER_ALARM3_OFFSET, 0x0000001c
.equ	TIMER_ALARM3_BITS, 0xffffffff
.equ	TIMER_ALARM3_RESET, 0x00000000
.equ	TIMER_ALARM3_MSB, 31
.equ	TIMER_ALARM3_LSB, 0
# =============================================================================
# Register    : TIMER_ARMED
# Description : Indicates the armed/disarmed status of each alarm. A write to
#               the corresponding ALARMx register arms the alarm. Alarms
#               automatically disarm upon firing, but writing ones here will
#               disarm immediately without waiting to fire.
.equ	TIMER_ARMED_OFFSET, 0x00000020
.equ	TIMER_ARMED_BITS, 0x0000000f
.equ	TIMER_ARMED_RESET, 0x00000000
.equ	TIMER_ARMED_MSB, 3
.equ	TIMER_ARMED_LSB, 0
# =============================================================================
# Register    : TIMER_TIMERAWH
# Description : Raw read from bits 63:32 of time (no side effects)
.equ	TIMER_TIMERAWH_OFFSET, 0x00000024
.equ	TIMER_TIMERAWH_BITS, 0xffffffff
.equ	TIMER_TIMERAWH_RESET, 0x00000000
.equ	TIMER_TIMERAWH_MSB, 31
.equ	TIMER_TIMERAWH_LSB, 0
# =============================================================================
# Register    : TIMER_TIMERAWL
# Description : Raw read from bits 31:0 of time (no side effects)
.equ	TIMER_TIMERAWL_OFFSET, 0x00000028
.equ	TIMER_TIMERAWL_BITS, 0xffffffff
.equ	TIMER_TIMERAWL_RESET, 0x00000000
.equ	TIMER_TIMERAWL_MSB, 31
.equ	TIMER_TIMERAWL_LSB, 0
# =============================================================================
# Register    : TIMER_DBGPAUSE
# Description : Set bits high to enable pause when the corresponding debug
#               ports are active
.equ	TIMER_DBGPAUSE_OFFSET, 0x0000002c
.equ	TIMER_DBGPAUSE_BITS, 0x00000006
.equ	TIMER_DBGPAUSE_RESET, 0x00000007
# -----------------------------------------------------------------------------
# Field       : TIMER_DBGPAUSE_DBG1
# Description : Pause when processor 1 is in debug mode
.equ	TIMER_DBGPAUSE_DBG1_RESET, 0x1
.equ	TIMER_DBGPAUSE_DBG1_BITS, 0x00000004
.equ	TIMER_DBGPAUSE_DBG1_MSB, 2
.equ	TIMER_DBGPAUSE_DBG1_LSB, 2
# -----------------------------------------------------------------------------
# Field       : TIMER_DBGPAUSE_DBG0
# Description : Pause when processor 0 is in debug mode
.equ	TIMER_DBGPAUSE_DBG0_RESET, 0x1
.equ	TIMER_DBGPAUSE_DBG0_BITS, 0x00000002
.equ	TIMER_DBGPAUSE_DBG0_MSB, 1
.equ	TIMER_DBGPAUSE_DBG0_LSB, 1
# =============================================================================
# Register    : TIMER_PAUSE
# Description : Set high to pause the timer
.equ	TIMER_PAUSE_OFFSET, 0x00000030
.equ	TIMER_PAUSE_BITS, 0x00000001
.equ	TIMER_PAUSE_RESET, 0x00000000
.equ	TIMER_PAUSE_MSB, 0
.equ	TIMER_PAUSE_LSB, 0
# =============================================================================
# Register    : TIMER_LOCKED
# Description : Set locked bit to disable write access to timer Once set,
#               cannot be cleared (without a reset)
.equ	TIMER_LOCKED_OFFSET, 0x00000034
.equ	TIMER_LOCKED_BITS, 0x00000001
.equ	TIMER_LOCKED_RESET, 0x00000000
.equ	TIMER_LOCKED_MSB, 0
.equ	TIMER_LOCKED_LSB, 0
# =============================================================================
# Register    : TIMER_SOURCE
# Description : Selects the source for the timer. Defaults to the normal tick
#               configured in the ticks block (typically configured to 1
#               microsecond). Writing to 1 will ignore the tick and count
#               clk_sys cycles instead.
.equ	TIMER_SOURCE_OFFSET, 0x00000038
.equ	TIMER_SOURCE_BITS, 0x00000001
.equ	TIMER_SOURCE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : TIMER_SOURCE_CLK_SYS
#               0x0 -> TICK
#               0x1 -> CLK_SYS
.equ	TIMER_SOURCE_CLK_SYS_RESET, 0x0
.equ	TIMER_SOURCE_CLK_SYS_BITS, 0x00000001
.equ	TIMER_SOURCE_CLK_SYS_MSB, 0
.equ	TIMER_SOURCE_CLK_SYS_LSB, 0
.equ	TIMER_SOURCE_CLK_SYS_VALUE_TICK, 0x0
.equ	TIMER_SOURCE_CLK_SYS_VALUE_CLK_SYS, 0x1
# =============================================================================
# Register    : TIMER_INTR
# Description : Raw Interrupts
.equ	TIMER_INTR_OFFSET, 0x0000003c
.equ	TIMER_INTR_BITS, 0x0000000f
.equ	TIMER_INTR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : TIMER_INTR_ALARM_3
.equ	TIMER_INTR_ALARM_3_RESET, 0x0
.equ	TIMER_INTR_ALARM_3_BITS, 0x00000008
.equ	TIMER_INTR_ALARM_3_MSB, 3
.equ	TIMER_INTR_ALARM_3_LSB, 3
# -----------------------------------------------------------------------------
# Field       : TIMER_INTR_ALARM_2
.equ	TIMER_INTR_ALARM_2_RESET, 0x0
.equ	TIMER_INTR_ALARM_2_BITS, 0x00000004
.equ	TIMER_INTR_ALARM_2_MSB, 2
.equ	TIMER_INTR_ALARM_2_LSB, 2
# -----------------------------------------------------------------------------
# Field       : TIMER_INTR_ALARM_1
.equ	TIMER_INTR_ALARM_1_RESET, 0x0
.equ	TIMER_INTR_ALARM_1_BITS, 0x00000002
.equ	TIMER_INTR_ALARM_1_MSB, 1
.equ	TIMER_INTR_ALARM_1_LSB, 1
# -----------------------------------------------------------------------------
# Field       : TIMER_INTR_ALARM_0
.equ	TIMER_INTR_ALARM_0_RESET, 0x0
.equ	TIMER_INTR_ALARM_0_BITS, 0x00000001
.equ	TIMER_INTR_ALARM_0_MSB, 0
.equ	TIMER_INTR_ALARM_0_LSB, 0
# =============================================================================
# Register    : TIMER_INTE
# Description : Interrupt Enable
.equ	TIMER_INTE_OFFSET, 0x00000040
.equ	TIMER_INTE_BITS, 0x0000000f
.equ	TIMER_INTE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : TIMER_INTE_ALARM_3
.equ	TIMER_INTE_ALARM_3_RESET, 0x0
.equ	TIMER_INTE_ALARM_3_BITS, 0x00000008
.equ	TIMER_INTE_ALARM_3_MSB, 3
.equ	TIMER_INTE_ALARM_3_LSB, 3
# -----------------------------------------------------------------------------
# Field       : TIMER_INTE_ALARM_2
.equ	TIMER_INTE_ALARM_2_RESET, 0x0
.equ	TIMER_INTE_ALARM_2_BITS, 0x00000004
.equ	TIMER_INTE_ALARM_2_MSB, 2
.equ	TIMER_INTE_ALARM_2_LSB, 2
# -----------------------------------------------------------------------------
# Field       : TIMER_INTE_ALARM_1
.equ	TIMER_INTE_ALARM_1_RESET, 0x0
.equ	TIMER_INTE_ALARM_1_BITS, 0x00000002
.equ	TIMER_INTE_ALARM_1_MSB, 1
.equ	TIMER_INTE_ALARM_1_LSB, 1
# -----------------------------------------------------------------------------
# Field       : TIMER_INTE_ALARM_0
.equ	TIMER_INTE_ALARM_0_RESET, 0x0
.equ	TIMER_INTE_ALARM_0_BITS, 0x00000001
.equ	TIMER_INTE_ALARM_0_MSB, 0
.equ	TIMER_INTE_ALARM_0_LSB, 0
# =============================================================================
# Register    : TIMER_INTF
# Description : Interrupt Force
.equ	TIMER_INTF_OFFSET, 0x00000044
.equ	TIMER_INTF_BITS, 0x0000000f
.equ	TIMER_INTF_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : TIMER_INTF_ALARM_3
.equ	TIMER_INTF_ALARM_3_RESET, 0x0
.equ	TIMER_INTF_ALARM_3_BITS, 0x00000008
.equ	TIMER_INTF_ALARM_3_MSB, 3
.equ	TIMER_INTF_ALARM_3_LSB, 3
# -----------------------------------------------------------------------------
# Field       : TIMER_INTF_ALARM_2
.equ	TIMER_INTF_ALARM_2_RESET, 0x0
.equ	TIMER_INTF_ALARM_2_BITS, 0x00000004
.equ	TIMER_INTF_ALARM_2_MSB, 2
.equ	TIMER_INTF_ALARM_2_LSB, 2
# -----------------------------------------------------------------------------
# Field       : TIMER_INTF_ALARM_1
.equ	TIMER_INTF_ALARM_1_RESET, 0x0
.equ	TIMER_INTF_ALARM_1_BITS, 0x00000002
.equ	TIMER_INTF_ALARM_1_MSB, 1
.equ	TIMER_INTF_ALARM_1_LSB, 1
# -----------------------------------------------------------------------------
# Field       : TIMER_INTF_ALARM_0
.equ	TIMER_INTF_ALARM_0_RESET, 0x0
.equ	TIMER_INTF_ALARM_0_BITS, 0x00000001
.equ	TIMER_INTF_ALARM_0_MSB, 0
.equ	TIMER_INTF_ALARM_0_LSB, 0
# =============================================================================
# Register    : TIMER_INTS
# Description : Interrupt status after masking & forcing
.equ	TIMER_INTS_OFFSET, 0x00000048
.equ	TIMER_INTS_BITS, 0x0000000f
.equ	TIMER_INTS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : TIMER_INTS_ALARM_3
.equ	TIMER_INTS_ALARM_3_RESET, 0x0
.equ	TIMER_INTS_ALARM_3_BITS, 0x00000008
.equ	TIMER_INTS_ALARM_3_MSB, 3
.equ	TIMER_INTS_ALARM_3_LSB, 3
# -----------------------------------------------------------------------------
# Field       : TIMER_INTS_ALARM_2
.equ	TIMER_INTS_ALARM_2_RESET, 0x0
.equ	TIMER_INTS_ALARM_2_BITS, 0x00000004
.equ	TIMER_INTS_ALARM_2_MSB, 2
.equ	TIMER_INTS_ALARM_2_LSB, 2
# -----------------------------------------------------------------------------
# Field       : TIMER_INTS_ALARM_1
.equ	TIMER_INTS_ALARM_1_RESET, 0x0
.equ	TIMER_INTS_ALARM_1_BITS, 0x00000002
.equ	TIMER_INTS_ALARM_1_MSB, 1
.equ	TIMER_INTS_ALARM_1_LSB, 1
# -----------------------------------------------------------------------------
# Field       : TIMER_INTS_ALARM_0
.equ	TIMER_INTS_ALARM_0_RESET, 0x0
.equ	TIMER_INTS_ALARM_0_BITS, 0x00000001
.equ	TIMER_INTS_ALARM_0_MSB, 0
.equ	TIMER_INTS_ALARM_0_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_TIMER_H
