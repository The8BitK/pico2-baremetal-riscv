#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : TICKS
# Version        : 1
# Bus type       : apb
# =============================================================================
.ifndef	_HARDWARE_REGS_TICKS_H
.set	_HARDWARE_REGS_TICKS_H, 1
# =============================================================================
# Register    : TICKS_PROC0_CTRL
# Description : Controls the tick generator
.equ	TICKS_PROC0_CTRL_OFFSET, 0x00000000
.equ	TICKS_PROC0_CTRL_BITS, 0x00000003
.equ	TICKS_PROC0_CTRL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : TICKS_PROC0_CTRL_RUNNING
# Description : Is the tick generator running?
.equ	TICKS_PROC0_CTRL_RUNNING_BITS, 0x00000002
.equ	TICKS_PROC0_CTRL_RUNNING_MSB, 1
.equ	TICKS_PROC0_CTRL_RUNNING_LSB, 1
# -----------------------------------------------------------------------------
# Field       : TICKS_PROC0_CTRL_ENABLE
# Description : start / stop tick generation
.equ	TICKS_PROC0_CTRL_ENABLE_RESET, 0x0
.equ	TICKS_PROC0_CTRL_ENABLE_BITS, 0x00000001
.equ	TICKS_PROC0_CTRL_ENABLE_MSB, 0
.equ	TICKS_PROC0_CTRL_ENABLE_LSB, 0
# =============================================================================
# Register    : TICKS_PROC0_CYCLES
# Description : None
#               Total number of clk_tick cycles before the next tick.
.equ	TICKS_PROC0_CYCLES_OFFSET, 0x00000004
.equ	TICKS_PROC0_CYCLES_BITS, 0x000001ff
.equ	TICKS_PROC0_CYCLES_RESET, 0x00000000
.equ	TICKS_PROC0_CYCLES_MSB, 8
.equ	TICKS_PROC0_CYCLES_LSB, 0
# =============================================================================
# Register    : TICKS_PROC0_COUNT
# Description : None
#               Count down timer: the remaining number clk_tick cycles before
#               the next tick is generated.
.equ	TICKS_PROC0_COUNT_OFFSET, 0x00000008
.equ	TICKS_PROC0_COUNT_BITS, 0x000001ff
.equ	TICKS_PROC0_COUNT_MSB, 8
.equ	TICKS_PROC0_COUNT_LSB, 0
# =============================================================================
# Register    : TICKS_PROC1_CTRL
# Description : Controls the tick generator
.equ	TICKS_PROC1_CTRL_OFFSET, 0x0000000c
.equ	TICKS_PROC1_CTRL_BITS, 0x00000003
.equ	TICKS_PROC1_CTRL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : TICKS_PROC1_CTRL_RUNNING
# Description : Is the tick generator running?
.equ	TICKS_PROC1_CTRL_RUNNING_BITS, 0x00000002
.equ	TICKS_PROC1_CTRL_RUNNING_MSB, 1
.equ	TICKS_PROC1_CTRL_RUNNING_LSB, 1
# -----------------------------------------------------------------------------
# Field       : TICKS_PROC1_CTRL_ENABLE
# Description : start / stop tick generation
.equ	TICKS_PROC1_CTRL_ENABLE_RESET, 0x0
.equ	TICKS_PROC1_CTRL_ENABLE_BITS, 0x00000001
.equ	TICKS_PROC1_CTRL_ENABLE_MSB, 0
.equ	TICKS_PROC1_CTRL_ENABLE_LSB, 0
# =============================================================================
# Register    : TICKS_PROC1_CYCLES
# Description : None
#               Total number of clk_tick cycles before the next tick.
.equ	TICKS_PROC1_CYCLES_OFFSET, 0x00000010
.equ	TICKS_PROC1_CYCLES_BITS, 0x000001ff
.equ	TICKS_PROC1_CYCLES_RESET, 0x00000000
.equ	TICKS_PROC1_CYCLES_MSB, 8
.equ	TICKS_PROC1_CYCLES_LSB, 0
# =============================================================================
# Register    : TICKS_PROC1_COUNT
# Description : None
#               Count down timer: the remaining number clk_tick cycles before
#               the next tick is generated.
.equ	TICKS_PROC1_COUNT_OFFSET, 0x00000014
.equ	TICKS_PROC1_COUNT_BITS, 0x000001ff
.equ	TICKS_PROC1_COUNT_MSB, 8
.equ	TICKS_PROC1_COUNT_LSB, 0
# =============================================================================
# Register    : TICKS_TIMER0_CTRL
# Description : Controls the tick generator
.equ	TICKS_TIMER0_CTRL_OFFSET, 0x00000018
.equ	TICKS_TIMER0_CTRL_BITS, 0x00000003
.equ	TICKS_TIMER0_CTRL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : TICKS_TIMER0_CTRL_RUNNING
# Description : Is the tick generator running?
.equ	TICKS_TIMER0_CTRL_RUNNING_BITS, 0x00000002
.equ	TICKS_TIMER0_CTRL_RUNNING_MSB, 1
.equ	TICKS_TIMER0_CTRL_RUNNING_LSB, 1
# -----------------------------------------------------------------------------
# Field       : TICKS_TIMER0_CTRL_ENABLE
# Description : start / stop tick generation
.equ	TICKS_TIMER0_CTRL_ENABLE_RESET, 0x0
.equ	TICKS_TIMER0_CTRL_ENABLE_BITS, 0x00000001
.equ	TICKS_TIMER0_CTRL_ENABLE_MSB, 0
.equ	TICKS_TIMER0_CTRL_ENABLE_LSB, 0
# =============================================================================
# Register    : TICKS_TIMER0_CYCLES
# Description : None
#               Total number of clk_tick cycles before the next tick.
.equ	TICKS_TIMER0_CYCLES_OFFSET, 0x0000001c
.equ	TICKS_TIMER0_CYCLES_BITS, 0x000001ff
.equ	TICKS_TIMER0_CYCLES_RESET, 0x00000000
.equ	TICKS_TIMER0_CYCLES_MSB, 8
.equ	TICKS_TIMER0_CYCLES_LSB, 0
# =============================================================================
# Register    : TICKS_TIMER0_COUNT
# Description : None
#               Count down timer: the remaining number clk_tick cycles before
#               the next tick is generated.
.equ	TICKS_TIMER0_COUNT_OFFSET, 0x00000020
.equ	TICKS_TIMER0_COUNT_BITS, 0x000001ff
.equ	TICKS_TIMER0_COUNT_MSB, 8
.equ	TICKS_TIMER0_COUNT_LSB, 0
# =============================================================================
# Register    : TICKS_TIMER1_CTRL
# Description : Controls the tick generator
.equ	TICKS_TIMER1_CTRL_OFFSET, 0x00000024
.equ	TICKS_TIMER1_CTRL_BITS, 0x00000003
.equ	TICKS_TIMER1_CTRL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : TICKS_TIMER1_CTRL_RUNNING
# Description : Is the tick generator running?
.equ	TICKS_TIMER1_CTRL_RUNNING_BITS, 0x00000002
.equ	TICKS_TIMER1_CTRL_RUNNING_MSB, 1
.equ	TICKS_TIMER1_CTRL_RUNNING_LSB, 1
# -----------------------------------------------------------------------------
# Field       : TICKS_TIMER1_CTRL_ENABLE
# Description : start / stop tick generation
.equ	TICKS_TIMER1_CTRL_ENABLE_RESET, 0x0
.equ	TICKS_TIMER1_CTRL_ENABLE_BITS, 0x00000001
.equ	TICKS_TIMER1_CTRL_ENABLE_MSB, 0
.equ	TICKS_TIMER1_CTRL_ENABLE_LSB, 0
# =============================================================================
# Register    : TICKS_TIMER1_CYCLES
# Description : None
#               Total number of clk_tick cycles before the next tick.
.equ	TICKS_TIMER1_CYCLES_OFFSET, 0x00000028
.equ	TICKS_TIMER1_CYCLES_BITS, 0x000001ff
.equ	TICKS_TIMER1_CYCLES_RESET, 0x00000000
.equ	TICKS_TIMER1_CYCLES_MSB, 8
.equ	TICKS_TIMER1_CYCLES_LSB, 0
# =============================================================================
# Register    : TICKS_TIMER1_COUNT
# Description : None
#               Count down timer: the remaining number clk_tick cycles before
#               the next tick is generated.
.equ	TICKS_TIMER1_COUNT_OFFSET, 0x0000002c
.equ	TICKS_TIMER1_COUNT_BITS, 0x000001ff
.equ	TICKS_TIMER1_COUNT_MSB, 8
.equ	TICKS_TIMER1_COUNT_LSB, 0
# =============================================================================
# Register    : TICKS_WATCHDOG_CTRL
# Description : Controls the tick generator
.equ	TICKS_WATCHDOG_CTRL_OFFSET, 0x00000030
.equ	TICKS_WATCHDOG_CTRL_BITS, 0x00000003
.equ	TICKS_WATCHDOG_CTRL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : TICKS_WATCHDOG_CTRL_RUNNING
# Description : Is the tick generator running?
.equ	TICKS_WATCHDOG_CTRL_RUNNING_BITS, 0x00000002
.equ	TICKS_WATCHDOG_CTRL_RUNNING_MSB, 1
.equ	TICKS_WATCHDOG_CTRL_RUNNING_LSB, 1
# -----------------------------------------------------------------------------
# Field       : TICKS_WATCHDOG_CTRL_ENABLE
# Description : start / stop tick generation
.equ	TICKS_WATCHDOG_CTRL_ENABLE_RESET, 0x0
.equ	TICKS_WATCHDOG_CTRL_ENABLE_BITS, 0x00000001
.equ	TICKS_WATCHDOG_CTRL_ENABLE_MSB, 0
.equ	TICKS_WATCHDOG_CTRL_ENABLE_LSB, 0
# =============================================================================
# Register    : TICKS_WATCHDOG_CYCLES
# Description : None
#               Total number of clk_tick cycles before the next tick.
.equ	TICKS_WATCHDOG_CYCLES_OFFSET, 0x00000034
.equ	TICKS_WATCHDOG_CYCLES_BITS, 0x000001ff
.equ	TICKS_WATCHDOG_CYCLES_RESET, 0x00000000
.equ	TICKS_WATCHDOG_CYCLES_MSB, 8
.equ	TICKS_WATCHDOG_CYCLES_LSB, 0
# =============================================================================
# Register    : TICKS_WATCHDOG_COUNT
# Description : None
#               Count down timer: the remaining number clk_tick cycles before
#               the next tick is generated.
.equ	TICKS_WATCHDOG_COUNT_OFFSET, 0x00000038
.equ	TICKS_WATCHDOG_COUNT_BITS, 0x000001ff
.equ	TICKS_WATCHDOG_COUNT_MSB, 8
.equ	TICKS_WATCHDOG_COUNT_LSB, 0
# =============================================================================
# Register    : TICKS_RISCV_CTRL
# Description : Controls the tick generator
.equ	TICKS_RISCV_CTRL_OFFSET, 0x0000003c
.equ	TICKS_RISCV_CTRL_BITS, 0x00000003
.equ	TICKS_RISCV_CTRL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : TICKS_RISCV_CTRL_RUNNING
# Description : Is the tick generator running?
.equ	TICKS_RISCV_CTRL_RUNNING_BITS, 0x00000002
.equ	TICKS_RISCV_CTRL_RUNNING_MSB, 1
.equ	TICKS_RISCV_CTRL_RUNNING_LSB, 1
# -----------------------------------------------------------------------------
# Field       : TICKS_RISCV_CTRL_ENABLE
# Description : start / stop tick generation
.equ	TICKS_RISCV_CTRL_ENABLE_RESET, 0x0
.equ	TICKS_RISCV_CTRL_ENABLE_BITS, 0x00000001
.equ	TICKS_RISCV_CTRL_ENABLE_MSB, 0
.equ	TICKS_RISCV_CTRL_ENABLE_LSB, 0
# =============================================================================
# Register    : TICKS_RISCV_CYCLES
# Description : None
#               Total number of clk_tick cycles before the next tick.
.equ	TICKS_RISCV_CYCLES_OFFSET, 0x00000040
.equ	TICKS_RISCV_CYCLES_BITS, 0x000001ff
.equ	TICKS_RISCV_CYCLES_RESET, 0x00000000
.equ	TICKS_RISCV_CYCLES_MSB, 8
.equ	TICKS_RISCV_CYCLES_LSB, 0
# =============================================================================
# Register    : TICKS_RISCV_COUNT
# Description : None
#               Count down timer: the remaining number clk_tick cycles before
#               the next tick is generated.
.equ	TICKS_RISCV_COUNT_OFFSET, 0x00000044
.equ	TICKS_RISCV_COUNT_BITS, 0x000001ff
.equ	TICKS_RISCV_COUNT_MSB, 8
.equ	TICKS_RISCV_COUNT_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_TICKS_H
