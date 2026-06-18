#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : WATCHDOG
# Version        : 1
# Bus type       : apb
# =============================================================================
.ifndef	_HARDWARE_REGS_WATCHDOG_H
.set	_HARDWARE_REGS_WATCHDOG_H, 1
# =============================================================================
# Register    : WATCHDOG_CTRL
# Description : Watchdog control
#               The rst_wdsel register determines which subsystems are reset
#               when the watchdog is triggered.
#               The watchdog can be triggered in software.
.equ	WATCHDOG_CTRL_OFFSET, 0x00000000
.equ	WATCHDOG_CTRL_BITS, 0xc7ffffff
.equ	WATCHDOG_CTRL_RESET, 0x07000000
# -----------------------------------------------------------------------------
# Field       : WATCHDOG_CTRL_TRIGGER
# Description : Trigger a watchdog reset
.equ	WATCHDOG_CTRL_TRIGGER_RESET, 0x0
.equ	WATCHDOG_CTRL_TRIGGER_BITS, 0x80000000
.equ	WATCHDOG_CTRL_TRIGGER_MSB, 31
.equ	WATCHDOG_CTRL_TRIGGER_LSB, 31
# -----------------------------------------------------------------------------
# Field       : WATCHDOG_CTRL_ENABLE
# Description : When not enabled the watchdog timer is paused
.equ	WATCHDOG_CTRL_ENABLE_RESET, 0x0
.equ	WATCHDOG_CTRL_ENABLE_BITS, 0x40000000
.equ	WATCHDOG_CTRL_ENABLE_MSB, 30
.equ	WATCHDOG_CTRL_ENABLE_LSB, 30
# -----------------------------------------------------------------------------
# Field       : WATCHDOG_CTRL_PAUSE_DBG1
# Description : Pause the watchdog timer when processor 1 is in debug mode
.equ	WATCHDOG_CTRL_PAUSE_DBG1_RESET, 0x1
.equ	WATCHDOG_CTRL_PAUSE_DBG1_BITS, 0x04000000
.equ	WATCHDOG_CTRL_PAUSE_DBG1_MSB, 26
.equ	WATCHDOG_CTRL_PAUSE_DBG1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : WATCHDOG_CTRL_PAUSE_DBG0
# Description : Pause the watchdog timer when processor 0 is in debug mode
.equ	WATCHDOG_CTRL_PAUSE_DBG0_RESET, 0x1
.equ	WATCHDOG_CTRL_PAUSE_DBG0_BITS, 0x02000000
.equ	WATCHDOG_CTRL_PAUSE_DBG0_MSB, 25
.equ	WATCHDOG_CTRL_PAUSE_DBG0_LSB, 25
# -----------------------------------------------------------------------------
# Field       : WATCHDOG_CTRL_PAUSE_JTAG
# Description : Pause the watchdog timer when JTAG is accessing the bus fabric
.equ	WATCHDOG_CTRL_PAUSE_JTAG_RESET, 0x1
.equ	WATCHDOG_CTRL_PAUSE_JTAG_BITS, 0x01000000
.equ	WATCHDOG_CTRL_PAUSE_JTAG_MSB, 24
.equ	WATCHDOG_CTRL_PAUSE_JTAG_LSB, 24
# -----------------------------------------------------------------------------
# Field       : WATCHDOG_CTRL_TIME
# Description : Indicates the time in usec before a watchdog reset will be
#               triggered
.equ	WATCHDOG_CTRL_TIME_RESET, 0x000000
.equ	WATCHDOG_CTRL_TIME_BITS, 0x00ffffff
.equ	WATCHDOG_CTRL_TIME_MSB, 23
.equ	WATCHDOG_CTRL_TIME_LSB, 0
# =============================================================================
# Register    : WATCHDOG_LOAD
# Description : Load the watchdog timer. The maximum setting is 0xffffff which
#               corresponds to approximately 16 seconds.
.equ	WATCHDOG_LOAD_OFFSET, 0x00000004
.equ	WATCHDOG_LOAD_BITS, 0x00ffffff
.equ	WATCHDOG_LOAD_RESET, 0x00000000
.equ	WATCHDOG_LOAD_MSB, 23
.equ	WATCHDOG_LOAD_LSB, 0
# =============================================================================
# Register    : WATCHDOG_REASON
# Description : Logs the reason for the last reset. Both bits are zero for the
#               case of a hardware reset.
#
#               Additionally, as of RP2350, a debugger warm reset of either
#               core (SYSRESETREQ or hartreset) will also clear the watchdog
#               reason register, so that software loaded under the debugger
#               following a watchdog timeout will not continue to see the
#               timeout condition.
.equ	WATCHDOG_REASON_OFFSET, 0x00000008
.equ	WATCHDOG_REASON_BITS, 0x00000003
.equ	WATCHDOG_REASON_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : WATCHDOG_REASON_FORCE
.equ	WATCHDOG_REASON_FORCE_RESET, 0x0
.equ	WATCHDOG_REASON_FORCE_BITS, 0x00000002
.equ	WATCHDOG_REASON_FORCE_MSB, 1
.equ	WATCHDOG_REASON_FORCE_LSB, 1
# -----------------------------------------------------------------------------
# Field       : WATCHDOG_REASON_TIMER
.equ	WATCHDOG_REASON_TIMER_RESET, 0x0
.equ	WATCHDOG_REASON_TIMER_BITS, 0x00000001
.equ	WATCHDOG_REASON_TIMER_MSB, 0
.equ	WATCHDOG_REASON_TIMER_LSB, 0
# =============================================================================
# Register    : WATCHDOG_SCRATCH0
# Description : Scratch register. Information persists through soft reset of
#               the chip.
.equ	WATCHDOG_SCRATCH0_OFFSET, 0x0000000c
.equ	WATCHDOG_SCRATCH0_BITS, 0xffffffff
.equ	WATCHDOG_SCRATCH0_RESET, 0x00000000
.equ	WATCHDOG_SCRATCH0_MSB, 31
.equ	WATCHDOG_SCRATCH0_LSB, 0
# =============================================================================
# Register    : WATCHDOG_SCRATCH1
# Description : Scratch register. Information persists through soft reset of
#               the chip.
.equ	WATCHDOG_SCRATCH1_OFFSET, 0x00000010
.equ	WATCHDOG_SCRATCH1_BITS, 0xffffffff
.equ	WATCHDOG_SCRATCH1_RESET, 0x00000000
.equ	WATCHDOG_SCRATCH1_MSB, 31
.equ	WATCHDOG_SCRATCH1_LSB, 0
# =============================================================================
# Register    : WATCHDOG_SCRATCH2
# Description : Scratch register. Information persists through soft reset of
#               the chip.
.equ	WATCHDOG_SCRATCH2_OFFSET, 0x00000014
.equ	WATCHDOG_SCRATCH2_BITS, 0xffffffff
.equ	WATCHDOG_SCRATCH2_RESET, 0x00000000
.equ	WATCHDOG_SCRATCH2_MSB, 31
.equ	WATCHDOG_SCRATCH2_LSB, 0
# =============================================================================
# Register    : WATCHDOG_SCRATCH3
# Description : Scratch register. Information persists through soft reset of
#               the chip.
.equ	WATCHDOG_SCRATCH3_OFFSET, 0x00000018
.equ	WATCHDOG_SCRATCH3_BITS, 0xffffffff
.equ	WATCHDOG_SCRATCH3_RESET, 0x00000000
.equ	WATCHDOG_SCRATCH3_MSB, 31
.equ	WATCHDOG_SCRATCH3_LSB, 0
# =============================================================================
# Register    : WATCHDOG_SCRATCH4
# Description : Scratch register. Information persists through soft reset of
#               the chip.
.equ	WATCHDOG_SCRATCH4_OFFSET, 0x0000001c
.equ	WATCHDOG_SCRATCH4_BITS, 0xffffffff
.equ	WATCHDOG_SCRATCH4_RESET, 0x00000000
.equ	WATCHDOG_SCRATCH4_MSB, 31
.equ	WATCHDOG_SCRATCH4_LSB, 0
# =============================================================================
# Register    : WATCHDOG_SCRATCH5
# Description : Scratch register. Information persists through soft reset of
#               the chip.
.equ	WATCHDOG_SCRATCH5_OFFSET, 0x00000020
.equ	WATCHDOG_SCRATCH5_BITS, 0xffffffff
.equ	WATCHDOG_SCRATCH5_RESET, 0x00000000
.equ	WATCHDOG_SCRATCH5_MSB, 31
.equ	WATCHDOG_SCRATCH5_LSB, 0
# =============================================================================
# Register    : WATCHDOG_SCRATCH6
# Description : Scratch register. Information persists through soft reset of
#               the chip.
.equ	WATCHDOG_SCRATCH6_OFFSET, 0x00000024
.equ	WATCHDOG_SCRATCH6_BITS, 0xffffffff
.equ	WATCHDOG_SCRATCH6_RESET, 0x00000000
.equ	WATCHDOG_SCRATCH6_MSB, 31
.equ	WATCHDOG_SCRATCH6_LSB, 0
# =============================================================================
# Register    : WATCHDOG_SCRATCH7
# Description : Scratch register. Information persists through soft reset of
#               the chip.
.equ	WATCHDOG_SCRATCH7_OFFSET, 0x00000028
.equ	WATCHDOG_SCRATCH7_BITS, 0xffffffff
.equ	WATCHDOG_SCRATCH7_RESET, 0x00000000
.equ	WATCHDOG_SCRATCH7_MSB, 31
.equ	WATCHDOG_SCRATCH7_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_WATCHDOG_H
