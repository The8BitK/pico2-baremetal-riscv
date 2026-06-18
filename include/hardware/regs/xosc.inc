#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : XOSC
# Version        : 1
# Bus type       : apb
# Description    : Controls the crystal oscillator
# =============================================================================
.ifndef	_HARDWARE_REGS_XOSC_H
.set	_HARDWARE_REGS_XOSC_H, 1
# =============================================================================
# Register    : XOSC_CTRL
# Description : Crystal Oscillator Control
.equ	XOSC_CTRL_OFFSET, 0x00000000
.equ	XOSC_CTRL_BITS, 0x00ffffff
.equ	XOSC_CTRL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : XOSC_CTRL_ENABLE
# Description : On power-up this field is initialised to DISABLE and the chip
#               runs from the ROSC.
#               If the chip has subsequently been programmed to run from the
#               XOSC then setting this field to DISABLE may lock-up the chip.
#               If  this is a concern then run the clk_ref from the ROSC and
#               enable the clk_sys RESUS feature.
#               The 12-bit code is intended to give some protection against
#               accidental writes. An invalid setting will retain the previous
#               value. The actual value being used can be read from
#               STATUS_ENABLED
#               0xd1e -> DISABLE
#               0xfab -> ENABLE
.equ	XOSC_CTRL_ENABLE_BITS, 0x00fff000
.equ	XOSC_CTRL_ENABLE_MSB, 23
.equ	XOSC_CTRL_ENABLE_LSB, 12
.equ	XOSC_CTRL_ENABLE_VALUE_DISABLE, 0xd1e
.equ	XOSC_CTRL_ENABLE_VALUE_ENABLE, 0xfab
# -----------------------------------------------------------------------------
# Field       : XOSC_CTRL_FREQ_RANGE
# Description : The 12-bit code is intended to give some protection against
#               accidental writes. An invalid setting will retain the previous
#               value. The actual value being used can be read from
#               STATUS_FREQ_RANGE
#               0xaa0 -> 1_15MHZ
#               0xaa1 -> 10_30MHZ
#               0xaa2 -> 25_60MHZ
#               0xaa3 -> 40_100MHZ
.equ	XOSC_CTRL_FREQ_RANGE_BITS, 0x00000fff
.equ	XOSC_CTRL_FREQ_RANGE_MSB, 11
.equ	XOSC_CTRL_FREQ_RANGE_LSB, 0
.equ	XOSC_CTRL_FREQ_RANGE_VALUE_1_15MHZ, 0xaa0
.equ	XOSC_CTRL_FREQ_RANGE_VALUE_10_30MHZ, 0xaa1
.equ	XOSC_CTRL_FREQ_RANGE_VALUE_25_60MHZ, 0xaa2
.equ	XOSC_CTRL_FREQ_RANGE_VALUE_40_100MHZ, 0xaa3
# =============================================================================
# Register    : XOSC_STATUS
# Description : Crystal Oscillator Status
.equ	XOSC_STATUS_OFFSET, 0x00000004
.equ	XOSC_STATUS_BITS, 0x81001003
.equ	XOSC_STATUS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : XOSC_STATUS_STABLE
# Description : Oscillator is running and stable
.equ	XOSC_STATUS_STABLE_RESET, 0x0
.equ	XOSC_STATUS_STABLE_BITS, 0x80000000
.equ	XOSC_STATUS_STABLE_MSB, 31
.equ	XOSC_STATUS_STABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : XOSC_STATUS_BADWRITE
# Description : An invalid value has been written to CTRL_ENABLE or
#               CTRL_FREQ_RANGE or DORMANT
.equ	XOSC_STATUS_BADWRITE_RESET, 0x0
.equ	XOSC_STATUS_BADWRITE_BITS, 0x01000000
.equ	XOSC_STATUS_BADWRITE_MSB, 24
.equ	XOSC_STATUS_BADWRITE_LSB, 24
# -----------------------------------------------------------------------------
# Field       : XOSC_STATUS_ENABLED
# Description : Oscillator is enabled but not necessarily running and stable,
#               resets to 0
.equ	XOSC_STATUS_ENABLED_BITS, 0x00001000
.equ	XOSC_STATUS_ENABLED_MSB, 12
.equ	XOSC_STATUS_ENABLED_LSB, 12
# -----------------------------------------------------------------------------
# Field       : XOSC_STATUS_FREQ_RANGE
# Description : The current frequency range setting
#               0x0 -> 1_15MHZ
#               0x1 -> 10_30MHZ
#               0x2 -> 25_60MHZ
#               0x3 -> 40_100MHZ
.equ	XOSC_STATUS_FREQ_RANGE_BITS, 0x00000003
.equ	XOSC_STATUS_FREQ_RANGE_MSB, 1
.equ	XOSC_STATUS_FREQ_RANGE_LSB, 0
.equ	XOSC_STATUS_FREQ_RANGE_VALUE_1_15MHZ, 0x0
.equ	XOSC_STATUS_FREQ_RANGE_VALUE_10_30MHZ, 0x1
.equ	XOSC_STATUS_FREQ_RANGE_VALUE_25_60MHZ, 0x2
.equ	XOSC_STATUS_FREQ_RANGE_VALUE_40_100MHZ, 0x3
# =============================================================================
# Register    : XOSC_DORMANT
# Description : Crystal Oscillator pause control
#               This is used to save power by pausing the XOSC
#               On power-up this field is initialised to WAKE
#               An invalid write will also select WAKE
#               Warning: stop the PLLs before selecting dormant mode
#               Warning: setup the irq before selecting dormant mode
#               0x636f6d61 -> dormant
#               0x77616b65 -> WAKE
.equ	XOSC_DORMANT_OFFSET, 0x00000008
.equ	XOSC_DORMANT_BITS, 0xffffffff
.equ	XOSC_DORMANT_MSB, 31
.equ	XOSC_DORMANT_LSB, 0
.equ	XOSC_DORMANT_VALUE_DORMANT, 0x636f6d61
.equ	XOSC_DORMANT_VALUE_WAKE, 0x77616b65
# =============================================================================
# Register    : XOSC_STARTUP
# Description : Controls the startup delay
.equ	XOSC_STARTUP_OFFSET, 0x0000000c
.equ	XOSC_STARTUP_BITS, 0x00103fff
.equ	XOSC_STARTUP_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : XOSC_STARTUP_X4
# Description : Multiplies the startup_delay by 4, just in case. The reset
#               value is controlled by a mask-programmable tiecell and is
#               provided in case we are booting from XOSC and the default
#               startup delay is insufficient. The reset value is 0x0.
.equ	XOSC_STARTUP_X4_BITS, 0x00100000
.equ	XOSC_STARTUP_X4_MSB, 20
.equ	XOSC_STARTUP_X4_LSB, 20
# -----------------------------------------------------------------------------
# Field       : XOSC_STARTUP_DELAY
# Description : in multiples of 256*xtal_period. The reset value of 0xc4
#               corresponds to approx 50 000 cycles.
.equ	XOSC_STARTUP_DELAY_BITS, 0x00003fff
.equ	XOSC_STARTUP_DELAY_MSB, 13
.equ	XOSC_STARTUP_DELAY_LSB, 0
# =============================================================================
# Register    : XOSC_COUNT
# Description : A down counter running at the xosc frequency which counts to
#               zero and stops.
#               Can be used for short software pauses when setting up time
#               sensitive hardware.
#               To start the counter, write a non-zero value. Reads will return
#               1 while the count is running and 0 when it has finished.
#               Minimum count value is 4. Count values <4 will be treated as
#               count value =4.
#               Note that synchronisation to the register clock domain costs 2
#               register clock cycles and the counter cannot compensate for
#               that.
.equ	XOSC_COUNT_OFFSET, 0x00000010
.equ	XOSC_COUNT_BITS, 0x0000ffff
.equ	XOSC_COUNT_RESET, 0x00000000
.equ	XOSC_COUNT_MSB, 15
.equ	XOSC_COUNT_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_XOSC_H
