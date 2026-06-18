#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : ROSC
# Version        : 1
# Bus type       : apb
# =============================================================================
.ifndef	_HARDWARE_REGS_ROSC_H
.set	_HARDWARE_REGS_ROSC_H, 1
# =============================================================================
# Register    : ROSC_CTRL
# Description : Ring Oscillator control
.equ	ROSC_CTRL_OFFSET, 0x00000000
.equ	ROSC_CTRL_BITS, 0x00ffffff
.equ	ROSC_CTRL_RESET, 0x00000aa0
# -----------------------------------------------------------------------------
# Field       : ROSC_CTRL_ENABLE
# Description : On power-up this field is initialised to ENABLE
#               The system clock must be switched to another source before
#               setting this field to DISABLE otherwise the chip will lock up
#               The 12-bit code is intended to give some protection against
#               accidental writes. An invalid setting will enable the
#               oscillator.
#               0xd1e -> DISABLE
#               0xfab -> ENABLE
.equ	ROSC_CTRL_ENABLE_BITS, 0x00fff000
.equ	ROSC_CTRL_ENABLE_MSB, 23
.equ	ROSC_CTRL_ENABLE_LSB, 12
.equ	ROSC_CTRL_ENABLE_VALUE_DISABLE, 0xd1e
.equ	ROSC_CTRL_ENABLE_VALUE_ENABLE, 0xfab
# -----------------------------------------------------------------------------
# Field       : ROSC_CTRL_FREQ_RANGE
# Description : Controls the number of delay stages in the ROSC ring
#               LOW uses stages 0 to 7
#               MEDIUM uses stages 2 to 7
#               HIGH uses stages 4 to 7
#               TOOHIGH uses stages 6 to 7 and should not be used because its
#               frequency exceeds design specifications
#               The clock output will not glitch when changing the range up one
#               step at a time
#               The clock output will glitch when changing the range down
#               Note: the values here are gray coded which is why HIGH comes
#               before TOOHIGH
#               0xfa4 -> LOW
#               0xfa5 -> MEDIUM
#               0xfa7 -> HIGH
#               0xfa6 -> TOOHIGH
.equ	ROSC_CTRL_FREQ_RANGE_RESET, 0xaa0
.equ	ROSC_CTRL_FREQ_RANGE_BITS, 0x00000fff
.equ	ROSC_CTRL_FREQ_RANGE_MSB, 11
.equ	ROSC_CTRL_FREQ_RANGE_LSB, 0
.equ	ROSC_CTRL_FREQ_RANGE_VALUE_LOW, 0xfa4
.equ	ROSC_CTRL_FREQ_RANGE_VALUE_MEDIUM, 0xfa5
.equ	ROSC_CTRL_FREQ_RANGE_VALUE_HIGH, 0xfa7
.equ	ROSC_CTRL_FREQ_RANGE_VALUE_TOOHIGH, 0xfa6
# =============================================================================
# Register    : ROSC_FREQA
# Description : The FREQA & FREQB registers control the frequency by
#               controlling the drive strength of each stage
#               The drive strength has 4 levels determined by the number of
#               bits set
#               Increasing the number of bits set increases the drive strength
#               and increases the oscillation frequency
#               0 bits set is the default drive strength
#               1 bit set doubles the drive strength
#               2 bits set triples drive strength
#               3 bits set quadruples drive strength
#               For frequency randomisation set both DS0_RANDOM=1 &
#               DS1_RANDOM=1
.equ	ROSC_FREQA_OFFSET, 0x00000004
.equ	ROSC_FREQA_BITS, 0xffff77ff
.equ	ROSC_FREQA_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : ROSC_FREQA_PASSWD
# Description : Set to 0x9696 to apply the settings
#               Any other value in this field will set all drive strengths to 0
#               0x9696 -> PASS
.equ	ROSC_FREQA_PASSWD_RESET, 0x0000
.equ	ROSC_FREQA_PASSWD_BITS, 0xffff0000
.equ	ROSC_FREQA_PASSWD_MSB, 31
.equ	ROSC_FREQA_PASSWD_LSB, 16
.equ	ROSC_FREQA_PASSWD_VALUE_PASS, 0x9696
# -----------------------------------------------------------------------------
# Field       : ROSC_FREQA_DS3
# Description : Stage 3 drive strength
.equ	ROSC_FREQA_DS3_RESET, 0x0
.equ	ROSC_FREQA_DS3_BITS, 0x00007000
.equ	ROSC_FREQA_DS3_MSB, 14
.equ	ROSC_FREQA_DS3_LSB, 12
# -----------------------------------------------------------------------------
# Field       : ROSC_FREQA_DS2
# Description : Stage 2 drive strength
.equ	ROSC_FREQA_DS2_RESET, 0x0
.equ	ROSC_FREQA_DS2_BITS, 0x00000700
.equ	ROSC_FREQA_DS2_MSB, 10
.equ	ROSC_FREQA_DS2_LSB, 8
# -----------------------------------------------------------------------------
# Field       : ROSC_FREQA_DS1_RANDOM
# Description : Randomises the stage 1 drive strength
.equ	ROSC_FREQA_DS1_RANDOM_RESET, 0x0
.equ	ROSC_FREQA_DS1_RANDOM_BITS, 0x00000080
.equ	ROSC_FREQA_DS1_RANDOM_MSB, 7
.equ	ROSC_FREQA_DS1_RANDOM_LSB, 7
# -----------------------------------------------------------------------------
# Field       : ROSC_FREQA_DS1
# Description : Stage 1 drive strength
.equ	ROSC_FREQA_DS1_RESET, 0x0
.equ	ROSC_FREQA_DS1_BITS, 0x00000070
.equ	ROSC_FREQA_DS1_MSB, 6
.equ	ROSC_FREQA_DS1_LSB, 4
# -----------------------------------------------------------------------------
# Field       : ROSC_FREQA_DS0_RANDOM
# Description : Randomises the stage 0 drive strength
.equ	ROSC_FREQA_DS0_RANDOM_RESET, 0x0
.equ	ROSC_FREQA_DS0_RANDOM_BITS, 0x00000008
.equ	ROSC_FREQA_DS0_RANDOM_MSB, 3
.equ	ROSC_FREQA_DS0_RANDOM_LSB, 3
# -----------------------------------------------------------------------------
# Field       : ROSC_FREQA_DS0
# Description : Stage 0 drive strength
.equ	ROSC_FREQA_DS0_RESET, 0x0
.equ	ROSC_FREQA_DS0_BITS, 0x00000007
.equ	ROSC_FREQA_DS0_MSB, 2
.equ	ROSC_FREQA_DS0_LSB, 0
# =============================================================================
# Register    : ROSC_FREQB
# Description : For a detailed description see freqa register
.equ	ROSC_FREQB_OFFSET, 0x00000008
.equ	ROSC_FREQB_BITS, 0xffff7777
.equ	ROSC_FREQB_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : ROSC_FREQB_PASSWD
# Description : Set to 0x9696 to apply the settings
#               Any other value in this field will set all drive strengths to 0
#               0x9696 -> PASS
.equ	ROSC_FREQB_PASSWD_RESET, 0x0000
.equ	ROSC_FREQB_PASSWD_BITS, 0xffff0000
.equ	ROSC_FREQB_PASSWD_MSB, 31
.equ	ROSC_FREQB_PASSWD_LSB, 16
.equ	ROSC_FREQB_PASSWD_VALUE_PASS, 0x9696
# -----------------------------------------------------------------------------
# Field       : ROSC_FREQB_DS7
# Description : Stage 7 drive strength
.equ	ROSC_FREQB_DS7_RESET, 0x0
.equ	ROSC_FREQB_DS7_BITS, 0x00007000
.equ	ROSC_FREQB_DS7_MSB, 14
.equ	ROSC_FREQB_DS7_LSB, 12
# -----------------------------------------------------------------------------
# Field       : ROSC_FREQB_DS6
# Description : Stage 6 drive strength
.equ	ROSC_FREQB_DS6_RESET, 0x0
.equ	ROSC_FREQB_DS6_BITS, 0x00000700
.equ	ROSC_FREQB_DS6_MSB, 10
.equ	ROSC_FREQB_DS6_LSB, 8
# -----------------------------------------------------------------------------
# Field       : ROSC_FREQB_DS5
# Description : Stage 5 drive strength
.equ	ROSC_FREQB_DS5_RESET, 0x0
.equ	ROSC_FREQB_DS5_BITS, 0x00000070
.equ	ROSC_FREQB_DS5_MSB, 6
.equ	ROSC_FREQB_DS5_LSB, 4
# -----------------------------------------------------------------------------
# Field       : ROSC_FREQB_DS4
# Description : Stage 4 drive strength
.equ	ROSC_FREQB_DS4_RESET, 0x0
.equ	ROSC_FREQB_DS4_BITS, 0x00000007
.equ	ROSC_FREQB_DS4_MSB, 2
.equ	ROSC_FREQB_DS4_LSB, 0
# =============================================================================
# Register    : ROSC_RANDOM
# Description : Loads a value to the LFSR randomiser
.equ	ROSC_RANDOM_OFFSET, 0x0000000c
.equ	ROSC_RANDOM_BITS, 0xffffffff
.equ	ROSC_RANDOM_RESET, 0x3f04b16d
# -----------------------------------------------------------------------------
# Field       : ROSC_RANDOM_SEED
.equ	ROSC_RANDOM_SEED_RESET, 0x3f04b16d
.equ	ROSC_RANDOM_SEED_BITS, 0xffffffff
.equ	ROSC_RANDOM_SEED_MSB, 31
.equ	ROSC_RANDOM_SEED_LSB, 0
# =============================================================================
# Register    : ROSC_DORMANT
# Description : Ring Oscillator pause control
#               This is used to save power by pausing the ROSC
#               On power-up this field is initialised to WAKE
#               An invalid write will also select WAKE
#               Warning: setup the irq before selecting dormant mode
#               0x636f6d61 -> dormant
#               0x77616b65 -> WAKE
.equ	ROSC_DORMANT_OFFSET, 0x00000010
.equ	ROSC_DORMANT_BITS, 0xffffffff
.equ	ROSC_DORMANT_MSB, 31
.equ	ROSC_DORMANT_LSB, 0
.equ	ROSC_DORMANT_VALUE_DORMANT, 0x636f6d61
.equ	ROSC_DORMANT_VALUE_WAKE, 0x77616b65
# =============================================================================
# Register    : ROSC_DIV
# Description : Controls the output divider
#               set to 0xaa00 + div where
#               div = 0 divides by 128
#               div = 1-127 divides by div
#               any other value sets div=128
#               this register resets to div=32
#               0xaa00 -> PASS
.equ	ROSC_DIV_OFFSET, 0x00000014
.equ	ROSC_DIV_BITS, 0x0000ffff
.equ	ROSC_DIV_MSB, 15
.equ	ROSC_DIV_LSB, 0
.equ	ROSC_DIV_VALUE_PASS, 0xaa00
# =============================================================================
# Register    : ROSC_PHASE
# Description : Controls the phase shifted output
.equ	ROSC_PHASE_OFFSET, 0x00000018
.equ	ROSC_PHASE_BITS, 0x00000fff
.equ	ROSC_PHASE_RESET, 0x00000008
# -----------------------------------------------------------------------------
# Field       : ROSC_PHASE_PASSWD
# Description : set to 0xaa
#               any other value enables the output with shift=0
.equ	ROSC_PHASE_PASSWD_RESET, 0x00
.equ	ROSC_PHASE_PASSWD_BITS, 0x00000ff0
.equ	ROSC_PHASE_PASSWD_MSB, 11
.equ	ROSC_PHASE_PASSWD_LSB, 4
# -----------------------------------------------------------------------------
# Field       : ROSC_PHASE_ENABLE
# Description : enable the phase-shifted output
#               this can be changed on-the-fly
.equ	ROSC_PHASE_ENABLE_RESET, 0x1
.equ	ROSC_PHASE_ENABLE_BITS, 0x00000008
.equ	ROSC_PHASE_ENABLE_MSB, 3
.equ	ROSC_PHASE_ENABLE_LSB, 3
# -----------------------------------------------------------------------------
# Field       : ROSC_PHASE_FLIP
# Description : invert the phase-shifted output
#               this is ignored when div=1
.equ	ROSC_PHASE_FLIP_RESET, 0x0
.equ	ROSC_PHASE_FLIP_BITS, 0x00000004
.equ	ROSC_PHASE_FLIP_MSB, 2
.equ	ROSC_PHASE_FLIP_LSB, 2
# -----------------------------------------------------------------------------
# Field       : ROSC_PHASE_SHIFT
# Description : phase shift the phase-shifted output by SHIFT input clocks
#               this can be changed on-the-fly
#               must be set to 0 before setting div=1
.equ	ROSC_PHASE_SHIFT_RESET, 0x0
.equ	ROSC_PHASE_SHIFT_BITS, 0x00000003
.equ	ROSC_PHASE_SHIFT_MSB, 1
.equ	ROSC_PHASE_SHIFT_LSB, 0
# =============================================================================
# Register    : ROSC_STATUS
# Description : Ring Oscillator Status
.equ	ROSC_STATUS_OFFSET, 0x0000001c
.equ	ROSC_STATUS_BITS, 0x81011000
.equ	ROSC_STATUS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : ROSC_STATUS_STABLE
# Description : Oscillator is running and stable
.equ	ROSC_STATUS_STABLE_RESET, 0x0
.equ	ROSC_STATUS_STABLE_BITS, 0x80000000
.equ	ROSC_STATUS_STABLE_MSB, 31
.equ	ROSC_STATUS_STABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : ROSC_STATUS_BADWRITE
# Description : An invalid value has been written to CTRL_ENABLE or
#               CTRL_FREQ_RANGE or FREQA or FREQB or DIV or PHASE or DORMANT
.equ	ROSC_STATUS_BADWRITE_RESET, 0x0
.equ	ROSC_STATUS_BADWRITE_BITS, 0x01000000
.equ	ROSC_STATUS_BADWRITE_MSB, 24
.equ	ROSC_STATUS_BADWRITE_LSB, 24
# -----------------------------------------------------------------------------
# Field       : ROSC_STATUS_DIV_RUNNING
# Description : post-divider is running
#               this resets to 0 but transitions to 1 during chip startup
.equ	ROSC_STATUS_DIV_RUNNING_BITS, 0x00010000
.equ	ROSC_STATUS_DIV_RUNNING_MSB, 16
.equ	ROSC_STATUS_DIV_RUNNING_LSB, 16
# -----------------------------------------------------------------------------
# Field       : ROSC_STATUS_ENABLED
# Description : Oscillator is enabled but not necessarily running and stable
#               this resets to 0 but transitions to 1 during chip startup
.equ	ROSC_STATUS_ENABLED_BITS, 0x00001000
.equ	ROSC_STATUS_ENABLED_MSB, 12
.equ	ROSC_STATUS_ENABLED_LSB, 12
# =============================================================================
# Register    : ROSC_RANDOMBIT
# Description : This just reads the state of the oscillator output so
#               randomness is compromised if the ring oscillator is stopped or
#               run at a harmonic of the bus frequency
.equ	ROSC_RANDOMBIT_OFFSET, 0x00000020
.equ	ROSC_RANDOMBIT_BITS, 0x00000001
.equ	ROSC_RANDOMBIT_RESET, 0x00000001
.equ	ROSC_RANDOMBIT_MSB, 0
.equ	ROSC_RANDOMBIT_LSB, 0
# =============================================================================
# Register    : ROSC_COUNT
# Description : A down counter running at the ROSC frequency which counts to
#               zero and stops.
#               To start the counter write a non-zero value.
#               Can be used for short software pauses when setting up time
#               sensitive hardware.
.equ	ROSC_COUNT_OFFSET, 0x00000024
.equ	ROSC_COUNT_BITS, 0x0000ffff
.equ	ROSC_COUNT_RESET, 0x00000000
.equ	ROSC_COUNT_MSB, 15
.equ	ROSC_COUNT_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_ROSC_H
