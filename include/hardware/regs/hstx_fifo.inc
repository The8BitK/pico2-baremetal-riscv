#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : HSTX_FIFO
# Version        : 1
# Bus type       : ahbl
# Description    : FIFO status and write access for HSTX
# =============================================================================
.ifndef	_HARDWARE_REGS_HSTX_FIFO_H
.set	_HARDWARE_REGS_HSTX_FIFO_H, 1
# =============================================================================
# Register    : HSTX_FIFO_STAT
# Description : FIFO status
.equ	HSTX_FIFO_STAT_OFFSET, 0x00000000
.equ	HSTX_FIFO_STAT_BITS, 0x000007ff
.equ	HSTX_FIFO_STAT_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : HSTX_FIFO_STAT_WOF
# Description : FIFO was written when full. Write 1 to clear.
.equ	HSTX_FIFO_STAT_WOF_RESET, 0x0
.equ	HSTX_FIFO_STAT_WOF_BITS, 0x00000400
.equ	HSTX_FIFO_STAT_WOF_MSB, 10
.equ	HSTX_FIFO_STAT_WOF_LSB, 10
# -----------------------------------------------------------------------------
# Field       : HSTX_FIFO_STAT_EMPTY
.equ	HSTX_FIFO_STAT_EMPTY_BITS, 0x00000200
.equ	HSTX_FIFO_STAT_EMPTY_MSB, 9
.equ	HSTX_FIFO_STAT_EMPTY_LSB, 9
# -----------------------------------------------------------------------------
# Field       : HSTX_FIFO_STAT_FULL
.equ	HSTX_FIFO_STAT_FULL_BITS, 0x00000100
.equ	HSTX_FIFO_STAT_FULL_MSB, 8
.equ	HSTX_FIFO_STAT_FULL_LSB, 8
# -----------------------------------------------------------------------------
# Field       : HSTX_FIFO_STAT_LEVEL
.equ	HSTX_FIFO_STAT_LEVEL_RESET, 0x00
.equ	HSTX_FIFO_STAT_LEVEL_BITS, 0x000000ff
.equ	HSTX_FIFO_STAT_LEVEL_MSB, 7
.equ	HSTX_FIFO_STAT_LEVEL_LSB, 0
# =============================================================================
# Register    : HSTX_FIFO_FIFO
# Description : Write access to FIFO
.equ	HSTX_FIFO_FIFO_OFFSET, 0x00000004
.equ	HSTX_FIFO_FIFO_BITS, 0xffffffff
.equ	HSTX_FIFO_FIFO_RESET, 0x00000000
.equ	HSTX_FIFO_FIFO_MSB, 31
.equ	HSTX_FIFO_FIFO_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_HSTX_FIFO_H
