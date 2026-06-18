#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : PWM
# Version        : 1
# Bus type       : apb
# Description    : Simple PWM
# =============================================================================
.ifndef	_HARDWARE_REGS_PWM_H
.set	_HARDWARE_REGS_PWM_H, 1
# =============================================================================
# Register    : PWM_CH0_CSR
# Description : Control and status register
.equ	PWM_CH0_CSR_OFFSET, 0x00000000
.equ	PWM_CH0_CSR_BITS, 0x000000ff
.equ	PWM_CH0_CSR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_CH0_CSR_PH_ADV
# Description : Advance the phase of the counter by 1 count, while it is
#               running.
#               Self-clearing. Write a 1, and poll until low. Counter must be
#               running
#               at less than full speed (div_int + div_frac / 16 > 1)
.equ	PWM_CH0_CSR_PH_ADV_RESET, 0x0
.equ	PWM_CH0_CSR_PH_ADV_BITS, 0x00000080
.equ	PWM_CH0_CSR_PH_ADV_MSB, 7
.equ	PWM_CH0_CSR_PH_ADV_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PWM_CH0_CSR_PH_RET
# Description : Retard the phase of the counter by 1 count, while it is
#               running.
#               Self-clearing. Write a 1, and poll until low. Counter must be
#               running.
.equ	PWM_CH0_CSR_PH_RET_RESET, 0x0
.equ	PWM_CH0_CSR_PH_RET_BITS, 0x00000040
.equ	PWM_CH0_CSR_PH_RET_MSB, 6
.equ	PWM_CH0_CSR_PH_RET_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PWM_CH0_CSR_DIVMODE
#               0x0 -> Free-running counting at rate dictated by fractional divider
#               0x1 -> Fractional divider operation is gated by the PWM B pin.
#               0x2 -> Counter advances with each rising edge of the PWM B pin.
#               0x3 -> Counter advances with each falling edge of the PWM B pin.
.equ	PWM_CH0_CSR_DIVMODE_RESET, 0x0
.equ	PWM_CH0_CSR_DIVMODE_BITS, 0x00000030
.equ	PWM_CH0_CSR_DIVMODE_MSB, 5
.equ	PWM_CH0_CSR_DIVMODE_LSB, 4
.equ	PWM_CH0_CSR_DIVMODE_VALUE_DIV, 0x0
.equ	PWM_CH0_CSR_DIVMODE_VALUE_LEVEL, 0x1
.equ	PWM_CH0_CSR_DIVMODE_VALUE_RISE, 0x2
.equ	PWM_CH0_CSR_DIVMODE_VALUE_FALL, 0x3
# -----------------------------------------------------------------------------
# Field       : PWM_CH0_CSR_B_INV
# Description : Invert output B
.equ	PWM_CH0_CSR_B_INV_RESET, 0x0
.equ	PWM_CH0_CSR_B_INV_BITS, 0x00000008
.equ	PWM_CH0_CSR_B_INV_MSB, 3
.equ	PWM_CH0_CSR_B_INV_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PWM_CH0_CSR_A_INV
# Description : Invert output A
.equ	PWM_CH0_CSR_A_INV_RESET, 0x0
.equ	PWM_CH0_CSR_A_INV_BITS, 0x00000004
.equ	PWM_CH0_CSR_A_INV_MSB, 2
.equ	PWM_CH0_CSR_A_INV_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PWM_CH0_CSR_PH_CORRECT
# Description : 1: Enable phase-correct modulation. 0: Trailing-edge
.equ	PWM_CH0_CSR_PH_CORRECT_RESET, 0x0
.equ	PWM_CH0_CSR_PH_CORRECT_BITS, 0x00000002
.equ	PWM_CH0_CSR_PH_CORRECT_MSB, 1
.equ	PWM_CH0_CSR_PH_CORRECT_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PWM_CH0_CSR_EN
# Description : Enable the PWM channel.
.equ	PWM_CH0_CSR_EN_RESET, 0x0
.equ	PWM_CH0_CSR_EN_BITS, 0x00000001
.equ	PWM_CH0_CSR_EN_MSB, 0
.equ	PWM_CH0_CSR_EN_LSB, 0
# =============================================================================
# Register    : PWM_CH0_DIV
# Description : INT and FRAC form a fixed-point fractional number.
#               Counting rate is system clock frequency divided by this number.
#               Fractional division uses simple 1st-order sigma-delta.
.equ	PWM_CH0_DIV_OFFSET, 0x00000004
.equ	PWM_CH0_DIV_BITS, 0x00000fff
.equ	PWM_CH0_DIV_RESET, 0x00000010
# -----------------------------------------------------------------------------
# Field       : PWM_CH0_DIV_INT
.equ	PWM_CH0_DIV_INT_RESET, 0x01
.equ	PWM_CH0_DIV_INT_BITS, 0x00000ff0
.equ	PWM_CH0_DIV_INT_MSB, 11
.equ	PWM_CH0_DIV_INT_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PWM_CH0_DIV_FRAC
.equ	PWM_CH0_DIV_FRAC_RESET, 0x0
.equ	PWM_CH0_DIV_FRAC_BITS, 0x0000000f
.equ	PWM_CH0_DIV_FRAC_MSB, 3
.equ	PWM_CH0_DIV_FRAC_LSB, 0
# =============================================================================
# Register    : PWM_CH0_CTR
# Description : Direct access to the PWM counter
.equ	PWM_CH0_CTR_OFFSET, 0x00000008
.equ	PWM_CH0_CTR_BITS, 0x0000ffff
.equ	PWM_CH0_CTR_RESET, 0x00000000
.equ	PWM_CH0_CTR_MSB, 15
.equ	PWM_CH0_CTR_LSB, 0
# =============================================================================
# Register    : PWM_CH0_CC
# Description : Counter compare values
.equ	PWM_CH0_CC_OFFSET, 0x0000000c
.equ	PWM_CH0_CC_BITS, 0xffffffff
.equ	PWM_CH0_CC_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_CH0_CC_B
.equ	PWM_CH0_CC_B_RESET, 0x0000
.equ	PWM_CH0_CC_B_BITS, 0xffff0000
.equ	PWM_CH0_CC_B_MSB, 31
.equ	PWM_CH0_CC_B_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PWM_CH0_CC_A
.equ	PWM_CH0_CC_A_RESET, 0x0000
.equ	PWM_CH0_CC_A_BITS, 0x0000ffff
.equ	PWM_CH0_CC_A_MSB, 15
.equ	PWM_CH0_CC_A_LSB, 0
# =============================================================================
# Register    : PWM_CH0_TOP
# Description : Counter wrap value
.equ	PWM_CH0_TOP_OFFSET, 0x00000010
.equ	PWM_CH0_TOP_BITS, 0x0000ffff
.equ	PWM_CH0_TOP_RESET, 0x0000ffff
.equ	PWM_CH0_TOP_MSB, 15
.equ	PWM_CH0_TOP_LSB, 0
# =============================================================================
# Register    : PWM_CH1_CSR
# Description : Control and status register
.equ	PWM_CH1_CSR_OFFSET, 0x00000014
.equ	PWM_CH1_CSR_BITS, 0x000000ff
.equ	PWM_CH1_CSR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_CH1_CSR_PH_ADV
# Description : Advance the phase of the counter by 1 count, while it is
#               running.
#               Self-clearing. Write a 1, and poll until low. Counter must be
#               running
#               at less than full speed (div_int + div_frac / 16 > 1)
.equ	PWM_CH1_CSR_PH_ADV_RESET, 0x0
.equ	PWM_CH1_CSR_PH_ADV_BITS, 0x00000080
.equ	PWM_CH1_CSR_PH_ADV_MSB, 7
.equ	PWM_CH1_CSR_PH_ADV_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PWM_CH1_CSR_PH_RET
# Description : Retard the phase of the counter by 1 count, while it is
#               running.
#               Self-clearing. Write a 1, and poll until low. Counter must be
#               running.
.equ	PWM_CH1_CSR_PH_RET_RESET, 0x0
.equ	PWM_CH1_CSR_PH_RET_BITS, 0x00000040
.equ	PWM_CH1_CSR_PH_RET_MSB, 6
.equ	PWM_CH1_CSR_PH_RET_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PWM_CH1_CSR_DIVMODE
#               0x0 -> Free-running counting at rate dictated by fractional divider
#               0x1 -> Fractional divider operation is gated by the PWM B pin.
#               0x2 -> Counter advances with each rising edge of the PWM B pin.
#               0x3 -> Counter advances with each falling edge of the PWM B pin.
.equ	PWM_CH1_CSR_DIVMODE_RESET, 0x0
.equ	PWM_CH1_CSR_DIVMODE_BITS, 0x00000030
.equ	PWM_CH1_CSR_DIVMODE_MSB, 5
.equ	PWM_CH1_CSR_DIVMODE_LSB, 4
.equ	PWM_CH1_CSR_DIVMODE_VALUE_DIV, 0x0
.equ	PWM_CH1_CSR_DIVMODE_VALUE_LEVEL, 0x1
.equ	PWM_CH1_CSR_DIVMODE_VALUE_RISE, 0x2
.equ	PWM_CH1_CSR_DIVMODE_VALUE_FALL, 0x3
# -----------------------------------------------------------------------------
# Field       : PWM_CH1_CSR_B_INV
# Description : Invert output B
.equ	PWM_CH1_CSR_B_INV_RESET, 0x0
.equ	PWM_CH1_CSR_B_INV_BITS, 0x00000008
.equ	PWM_CH1_CSR_B_INV_MSB, 3
.equ	PWM_CH1_CSR_B_INV_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PWM_CH1_CSR_A_INV
# Description : Invert output A
.equ	PWM_CH1_CSR_A_INV_RESET, 0x0
.equ	PWM_CH1_CSR_A_INV_BITS, 0x00000004
.equ	PWM_CH1_CSR_A_INV_MSB, 2
.equ	PWM_CH1_CSR_A_INV_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PWM_CH1_CSR_PH_CORRECT
# Description : 1: Enable phase-correct modulation. 0: Trailing-edge
.equ	PWM_CH1_CSR_PH_CORRECT_RESET, 0x0
.equ	PWM_CH1_CSR_PH_CORRECT_BITS, 0x00000002
.equ	PWM_CH1_CSR_PH_CORRECT_MSB, 1
.equ	PWM_CH1_CSR_PH_CORRECT_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PWM_CH1_CSR_EN
# Description : Enable the PWM channel.
.equ	PWM_CH1_CSR_EN_RESET, 0x0
.equ	PWM_CH1_CSR_EN_BITS, 0x00000001
.equ	PWM_CH1_CSR_EN_MSB, 0
.equ	PWM_CH1_CSR_EN_LSB, 0
# =============================================================================
# Register    : PWM_CH1_DIV
# Description : INT and FRAC form a fixed-point fractional number.
#               Counting rate is system clock frequency divided by this number.
#               Fractional division uses simple 1st-order sigma-delta.
.equ	PWM_CH1_DIV_OFFSET, 0x00000018
.equ	PWM_CH1_DIV_BITS, 0x00000fff
.equ	PWM_CH1_DIV_RESET, 0x00000010
# -----------------------------------------------------------------------------
# Field       : PWM_CH1_DIV_INT
.equ	PWM_CH1_DIV_INT_RESET, 0x01
.equ	PWM_CH1_DIV_INT_BITS, 0x00000ff0
.equ	PWM_CH1_DIV_INT_MSB, 11
.equ	PWM_CH1_DIV_INT_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PWM_CH1_DIV_FRAC
.equ	PWM_CH1_DIV_FRAC_RESET, 0x0
.equ	PWM_CH1_DIV_FRAC_BITS, 0x0000000f
.equ	PWM_CH1_DIV_FRAC_MSB, 3
.equ	PWM_CH1_DIV_FRAC_LSB, 0
# =============================================================================
# Register    : PWM_CH1_CTR
# Description : Direct access to the PWM counter
.equ	PWM_CH1_CTR_OFFSET, 0x0000001c
.equ	PWM_CH1_CTR_BITS, 0x0000ffff
.equ	PWM_CH1_CTR_RESET, 0x00000000
.equ	PWM_CH1_CTR_MSB, 15
.equ	PWM_CH1_CTR_LSB, 0
# =============================================================================
# Register    : PWM_CH1_CC
# Description : Counter compare values
.equ	PWM_CH1_CC_OFFSET, 0x00000020
.equ	PWM_CH1_CC_BITS, 0xffffffff
.equ	PWM_CH1_CC_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_CH1_CC_B
.equ	PWM_CH1_CC_B_RESET, 0x0000
.equ	PWM_CH1_CC_B_BITS, 0xffff0000
.equ	PWM_CH1_CC_B_MSB, 31
.equ	PWM_CH1_CC_B_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PWM_CH1_CC_A
.equ	PWM_CH1_CC_A_RESET, 0x0000
.equ	PWM_CH1_CC_A_BITS, 0x0000ffff
.equ	PWM_CH1_CC_A_MSB, 15
.equ	PWM_CH1_CC_A_LSB, 0
# =============================================================================
# Register    : PWM_CH1_TOP
# Description : Counter wrap value
.equ	PWM_CH1_TOP_OFFSET, 0x00000024
.equ	PWM_CH1_TOP_BITS, 0x0000ffff
.equ	PWM_CH1_TOP_RESET, 0x0000ffff
.equ	PWM_CH1_TOP_MSB, 15
.equ	PWM_CH1_TOP_LSB, 0
# =============================================================================
# Register    : PWM_CH2_CSR
# Description : Control and status register
.equ	PWM_CH2_CSR_OFFSET, 0x00000028
.equ	PWM_CH2_CSR_BITS, 0x000000ff
.equ	PWM_CH2_CSR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_CH2_CSR_PH_ADV
# Description : Advance the phase of the counter by 1 count, while it is
#               running.
#               Self-clearing. Write a 1, and poll until low. Counter must be
#               running
#               at less than full speed (div_int + div_frac / 16 > 1)
.equ	PWM_CH2_CSR_PH_ADV_RESET, 0x0
.equ	PWM_CH2_CSR_PH_ADV_BITS, 0x00000080
.equ	PWM_CH2_CSR_PH_ADV_MSB, 7
.equ	PWM_CH2_CSR_PH_ADV_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PWM_CH2_CSR_PH_RET
# Description : Retard the phase of the counter by 1 count, while it is
#               running.
#               Self-clearing. Write a 1, and poll until low. Counter must be
#               running.
.equ	PWM_CH2_CSR_PH_RET_RESET, 0x0
.equ	PWM_CH2_CSR_PH_RET_BITS, 0x00000040
.equ	PWM_CH2_CSR_PH_RET_MSB, 6
.equ	PWM_CH2_CSR_PH_RET_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PWM_CH2_CSR_DIVMODE
#               0x0 -> Free-running counting at rate dictated by fractional divider
#               0x1 -> Fractional divider operation is gated by the PWM B pin.
#               0x2 -> Counter advances with each rising edge of the PWM B pin.
#               0x3 -> Counter advances with each falling edge of the PWM B pin.
.equ	PWM_CH2_CSR_DIVMODE_RESET, 0x0
.equ	PWM_CH2_CSR_DIVMODE_BITS, 0x00000030
.equ	PWM_CH2_CSR_DIVMODE_MSB, 5
.equ	PWM_CH2_CSR_DIVMODE_LSB, 4
.equ	PWM_CH2_CSR_DIVMODE_VALUE_DIV, 0x0
.equ	PWM_CH2_CSR_DIVMODE_VALUE_LEVEL, 0x1
.equ	PWM_CH2_CSR_DIVMODE_VALUE_RISE, 0x2
.equ	PWM_CH2_CSR_DIVMODE_VALUE_FALL, 0x3
# -----------------------------------------------------------------------------
# Field       : PWM_CH2_CSR_B_INV
# Description : Invert output B
.equ	PWM_CH2_CSR_B_INV_RESET, 0x0
.equ	PWM_CH2_CSR_B_INV_BITS, 0x00000008
.equ	PWM_CH2_CSR_B_INV_MSB, 3
.equ	PWM_CH2_CSR_B_INV_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PWM_CH2_CSR_A_INV
# Description : Invert output A
.equ	PWM_CH2_CSR_A_INV_RESET, 0x0
.equ	PWM_CH2_CSR_A_INV_BITS, 0x00000004
.equ	PWM_CH2_CSR_A_INV_MSB, 2
.equ	PWM_CH2_CSR_A_INV_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PWM_CH2_CSR_PH_CORRECT
# Description : 1: Enable phase-correct modulation. 0: Trailing-edge
.equ	PWM_CH2_CSR_PH_CORRECT_RESET, 0x0
.equ	PWM_CH2_CSR_PH_CORRECT_BITS, 0x00000002
.equ	PWM_CH2_CSR_PH_CORRECT_MSB, 1
.equ	PWM_CH2_CSR_PH_CORRECT_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PWM_CH2_CSR_EN
# Description : Enable the PWM channel.
.equ	PWM_CH2_CSR_EN_RESET, 0x0
.equ	PWM_CH2_CSR_EN_BITS, 0x00000001
.equ	PWM_CH2_CSR_EN_MSB, 0
.equ	PWM_CH2_CSR_EN_LSB, 0
# =============================================================================
# Register    : PWM_CH2_DIV
# Description : INT and FRAC form a fixed-point fractional number.
#               Counting rate is system clock frequency divided by this number.
#               Fractional division uses simple 1st-order sigma-delta.
.equ	PWM_CH2_DIV_OFFSET, 0x0000002c
.equ	PWM_CH2_DIV_BITS, 0x00000fff
.equ	PWM_CH2_DIV_RESET, 0x00000010
# -----------------------------------------------------------------------------
# Field       : PWM_CH2_DIV_INT
.equ	PWM_CH2_DIV_INT_RESET, 0x01
.equ	PWM_CH2_DIV_INT_BITS, 0x00000ff0
.equ	PWM_CH2_DIV_INT_MSB, 11
.equ	PWM_CH2_DIV_INT_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PWM_CH2_DIV_FRAC
.equ	PWM_CH2_DIV_FRAC_RESET, 0x0
.equ	PWM_CH2_DIV_FRAC_BITS, 0x0000000f
.equ	PWM_CH2_DIV_FRAC_MSB, 3
.equ	PWM_CH2_DIV_FRAC_LSB, 0
# =============================================================================
# Register    : PWM_CH2_CTR
# Description : Direct access to the PWM counter
.equ	PWM_CH2_CTR_OFFSET, 0x00000030
.equ	PWM_CH2_CTR_BITS, 0x0000ffff
.equ	PWM_CH2_CTR_RESET, 0x00000000
.equ	PWM_CH2_CTR_MSB, 15
.equ	PWM_CH2_CTR_LSB, 0
# =============================================================================
# Register    : PWM_CH2_CC
# Description : Counter compare values
.equ	PWM_CH2_CC_OFFSET, 0x00000034
.equ	PWM_CH2_CC_BITS, 0xffffffff
.equ	PWM_CH2_CC_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_CH2_CC_B
.equ	PWM_CH2_CC_B_RESET, 0x0000
.equ	PWM_CH2_CC_B_BITS, 0xffff0000
.equ	PWM_CH2_CC_B_MSB, 31
.equ	PWM_CH2_CC_B_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PWM_CH2_CC_A
.equ	PWM_CH2_CC_A_RESET, 0x0000
.equ	PWM_CH2_CC_A_BITS, 0x0000ffff
.equ	PWM_CH2_CC_A_MSB, 15
.equ	PWM_CH2_CC_A_LSB, 0
# =============================================================================
# Register    : PWM_CH2_TOP
# Description : Counter wrap value
.equ	PWM_CH2_TOP_OFFSET, 0x00000038
.equ	PWM_CH2_TOP_BITS, 0x0000ffff
.equ	PWM_CH2_TOP_RESET, 0x0000ffff
.equ	PWM_CH2_TOP_MSB, 15
.equ	PWM_CH2_TOP_LSB, 0
# =============================================================================
# Register    : PWM_CH3_CSR
# Description : Control and status register
.equ	PWM_CH3_CSR_OFFSET, 0x0000003c
.equ	PWM_CH3_CSR_BITS, 0x000000ff
.equ	PWM_CH3_CSR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_CH3_CSR_PH_ADV
# Description : Advance the phase of the counter by 1 count, while it is
#               running.
#               Self-clearing. Write a 1, and poll until low. Counter must be
#               running
#               at less than full speed (div_int + div_frac / 16 > 1)
.equ	PWM_CH3_CSR_PH_ADV_RESET, 0x0
.equ	PWM_CH3_CSR_PH_ADV_BITS, 0x00000080
.equ	PWM_CH3_CSR_PH_ADV_MSB, 7
.equ	PWM_CH3_CSR_PH_ADV_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PWM_CH3_CSR_PH_RET
# Description : Retard the phase of the counter by 1 count, while it is
#               running.
#               Self-clearing. Write a 1, and poll until low. Counter must be
#               running.
.equ	PWM_CH3_CSR_PH_RET_RESET, 0x0
.equ	PWM_CH3_CSR_PH_RET_BITS, 0x00000040
.equ	PWM_CH3_CSR_PH_RET_MSB, 6
.equ	PWM_CH3_CSR_PH_RET_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PWM_CH3_CSR_DIVMODE
#               0x0 -> Free-running counting at rate dictated by fractional divider
#               0x1 -> Fractional divider operation is gated by the PWM B pin.
#               0x2 -> Counter advances with each rising edge of the PWM B pin.
#               0x3 -> Counter advances with each falling edge of the PWM B pin.
.equ	PWM_CH3_CSR_DIVMODE_RESET, 0x0
.equ	PWM_CH3_CSR_DIVMODE_BITS, 0x00000030
.equ	PWM_CH3_CSR_DIVMODE_MSB, 5
.equ	PWM_CH3_CSR_DIVMODE_LSB, 4
.equ	PWM_CH3_CSR_DIVMODE_VALUE_DIV, 0x0
.equ	PWM_CH3_CSR_DIVMODE_VALUE_LEVEL, 0x1
.equ	PWM_CH3_CSR_DIVMODE_VALUE_RISE, 0x2
.equ	PWM_CH3_CSR_DIVMODE_VALUE_FALL, 0x3
# -----------------------------------------------------------------------------
# Field       : PWM_CH3_CSR_B_INV
# Description : Invert output B
.equ	PWM_CH3_CSR_B_INV_RESET, 0x0
.equ	PWM_CH3_CSR_B_INV_BITS, 0x00000008
.equ	PWM_CH3_CSR_B_INV_MSB, 3
.equ	PWM_CH3_CSR_B_INV_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PWM_CH3_CSR_A_INV
# Description : Invert output A
.equ	PWM_CH3_CSR_A_INV_RESET, 0x0
.equ	PWM_CH3_CSR_A_INV_BITS, 0x00000004
.equ	PWM_CH3_CSR_A_INV_MSB, 2
.equ	PWM_CH3_CSR_A_INV_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PWM_CH3_CSR_PH_CORRECT
# Description : 1: Enable phase-correct modulation. 0: Trailing-edge
.equ	PWM_CH3_CSR_PH_CORRECT_RESET, 0x0
.equ	PWM_CH3_CSR_PH_CORRECT_BITS, 0x00000002
.equ	PWM_CH3_CSR_PH_CORRECT_MSB, 1
.equ	PWM_CH3_CSR_PH_CORRECT_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PWM_CH3_CSR_EN
# Description : Enable the PWM channel.
.equ	PWM_CH3_CSR_EN_RESET, 0x0
.equ	PWM_CH3_CSR_EN_BITS, 0x00000001
.equ	PWM_CH3_CSR_EN_MSB, 0
.equ	PWM_CH3_CSR_EN_LSB, 0
# =============================================================================
# Register    : PWM_CH3_DIV
# Description : INT and FRAC form a fixed-point fractional number.
#               Counting rate is system clock frequency divided by this number.
#               Fractional division uses simple 1st-order sigma-delta.
.equ	PWM_CH3_DIV_OFFSET, 0x00000040
.equ	PWM_CH3_DIV_BITS, 0x00000fff
.equ	PWM_CH3_DIV_RESET, 0x00000010
# -----------------------------------------------------------------------------
# Field       : PWM_CH3_DIV_INT
.equ	PWM_CH3_DIV_INT_RESET, 0x01
.equ	PWM_CH3_DIV_INT_BITS, 0x00000ff0
.equ	PWM_CH3_DIV_INT_MSB, 11
.equ	PWM_CH3_DIV_INT_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PWM_CH3_DIV_FRAC
.equ	PWM_CH3_DIV_FRAC_RESET, 0x0
.equ	PWM_CH3_DIV_FRAC_BITS, 0x0000000f
.equ	PWM_CH3_DIV_FRAC_MSB, 3
.equ	PWM_CH3_DIV_FRAC_LSB, 0
# =============================================================================
# Register    : PWM_CH3_CTR
# Description : Direct access to the PWM counter
.equ	PWM_CH3_CTR_OFFSET, 0x00000044
.equ	PWM_CH3_CTR_BITS, 0x0000ffff
.equ	PWM_CH3_CTR_RESET, 0x00000000
.equ	PWM_CH3_CTR_MSB, 15
.equ	PWM_CH3_CTR_LSB, 0
# =============================================================================
# Register    : PWM_CH3_CC
# Description : Counter compare values
.equ	PWM_CH3_CC_OFFSET, 0x00000048
.equ	PWM_CH3_CC_BITS, 0xffffffff
.equ	PWM_CH3_CC_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_CH3_CC_B
.equ	PWM_CH3_CC_B_RESET, 0x0000
.equ	PWM_CH3_CC_B_BITS, 0xffff0000
.equ	PWM_CH3_CC_B_MSB, 31
.equ	PWM_CH3_CC_B_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PWM_CH3_CC_A
.equ	PWM_CH3_CC_A_RESET, 0x0000
.equ	PWM_CH3_CC_A_BITS, 0x0000ffff
.equ	PWM_CH3_CC_A_MSB, 15
.equ	PWM_CH3_CC_A_LSB, 0
# =============================================================================
# Register    : PWM_CH3_TOP
# Description : Counter wrap value
.equ	PWM_CH3_TOP_OFFSET, 0x0000004c
.equ	PWM_CH3_TOP_BITS, 0x0000ffff
.equ	PWM_CH3_TOP_RESET, 0x0000ffff
.equ	PWM_CH3_TOP_MSB, 15
.equ	PWM_CH3_TOP_LSB, 0
# =============================================================================
# Register    : PWM_CH4_CSR
# Description : Control and status register
.equ	PWM_CH4_CSR_OFFSET, 0x00000050
.equ	PWM_CH4_CSR_BITS, 0x000000ff
.equ	PWM_CH4_CSR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_CH4_CSR_PH_ADV
# Description : Advance the phase of the counter by 1 count, while it is
#               running.
#               Self-clearing. Write a 1, and poll until low. Counter must be
#               running
#               at less than full speed (div_int + div_frac / 16 > 1)
.equ	PWM_CH4_CSR_PH_ADV_RESET, 0x0
.equ	PWM_CH4_CSR_PH_ADV_BITS, 0x00000080
.equ	PWM_CH4_CSR_PH_ADV_MSB, 7
.equ	PWM_CH4_CSR_PH_ADV_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PWM_CH4_CSR_PH_RET
# Description : Retard the phase of the counter by 1 count, while it is
#               running.
#               Self-clearing. Write a 1, and poll until low. Counter must be
#               running.
.equ	PWM_CH4_CSR_PH_RET_RESET, 0x0
.equ	PWM_CH4_CSR_PH_RET_BITS, 0x00000040
.equ	PWM_CH4_CSR_PH_RET_MSB, 6
.equ	PWM_CH4_CSR_PH_RET_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PWM_CH4_CSR_DIVMODE
#               0x0 -> Free-running counting at rate dictated by fractional divider
#               0x1 -> Fractional divider operation is gated by the PWM B pin.
#               0x2 -> Counter advances with each rising edge of the PWM B pin.
#               0x3 -> Counter advances with each falling edge of the PWM B pin.
.equ	PWM_CH4_CSR_DIVMODE_RESET, 0x0
.equ	PWM_CH4_CSR_DIVMODE_BITS, 0x00000030
.equ	PWM_CH4_CSR_DIVMODE_MSB, 5
.equ	PWM_CH4_CSR_DIVMODE_LSB, 4
.equ	PWM_CH4_CSR_DIVMODE_VALUE_DIV, 0x0
.equ	PWM_CH4_CSR_DIVMODE_VALUE_LEVEL, 0x1
.equ	PWM_CH4_CSR_DIVMODE_VALUE_RISE, 0x2
.equ	PWM_CH4_CSR_DIVMODE_VALUE_FALL, 0x3
# -----------------------------------------------------------------------------
# Field       : PWM_CH4_CSR_B_INV
# Description : Invert output B
.equ	PWM_CH4_CSR_B_INV_RESET, 0x0
.equ	PWM_CH4_CSR_B_INV_BITS, 0x00000008
.equ	PWM_CH4_CSR_B_INV_MSB, 3
.equ	PWM_CH4_CSR_B_INV_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PWM_CH4_CSR_A_INV
# Description : Invert output A
.equ	PWM_CH4_CSR_A_INV_RESET, 0x0
.equ	PWM_CH4_CSR_A_INV_BITS, 0x00000004
.equ	PWM_CH4_CSR_A_INV_MSB, 2
.equ	PWM_CH4_CSR_A_INV_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PWM_CH4_CSR_PH_CORRECT
# Description : 1: Enable phase-correct modulation. 0: Trailing-edge
.equ	PWM_CH4_CSR_PH_CORRECT_RESET, 0x0
.equ	PWM_CH4_CSR_PH_CORRECT_BITS, 0x00000002
.equ	PWM_CH4_CSR_PH_CORRECT_MSB, 1
.equ	PWM_CH4_CSR_PH_CORRECT_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PWM_CH4_CSR_EN
# Description : Enable the PWM channel.
.equ	PWM_CH4_CSR_EN_RESET, 0x0
.equ	PWM_CH4_CSR_EN_BITS, 0x00000001
.equ	PWM_CH4_CSR_EN_MSB, 0
.equ	PWM_CH4_CSR_EN_LSB, 0
# =============================================================================
# Register    : PWM_CH4_DIV
# Description : INT and FRAC form a fixed-point fractional number.
#               Counting rate is system clock frequency divided by this number.
#               Fractional division uses simple 1st-order sigma-delta.
.equ	PWM_CH4_DIV_OFFSET, 0x00000054
.equ	PWM_CH4_DIV_BITS, 0x00000fff
.equ	PWM_CH4_DIV_RESET, 0x00000010
# -----------------------------------------------------------------------------
# Field       : PWM_CH4_DIV_INT
.equ	PWM_CH4_DIV_INT_RESET, 0x01
.equ	PWM_CH4_DIV_INT_BITS, 0x00000ff0
.equ	PWM_CH4_DIV_INT_MSB, 11
.equ	PWM_CH4_DIV_INT_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PWM_CH4_DIV_FRAC
.equ	PWM_CH4_DIV_FRAC_RESET, 0x0
.equ	PWM_CH4_DIV_FRAC_BITS, 0x0000000f
.equ	PWM_CH4_DIV_FRAC_MSB, 3
.equ	PWM_CH4_DIV_FRAC_LSB, 0
# =============================================================================
# Register    : PWM_CH4_CTR
# Description : Direct access to the PWM counter
.equ	PWM_CH4_CTR_OFFSET, 0x00000058
.equ	PWM_CH4_CTR_BITS, 0x0000ffff
.equ	PWM_CH4_CTR_RESET, 0x00000000
.equ	PWM_CH4_CTR_MSB, 15
.equ	PWM_CH4_CTR_LSB, 0
# =============================================================================
# Register    : PWM_CH4_CC
# Description : Counter compare values
.equ	PWM_CH4_CC_OFFSET, 0x0000005c
.equ	PWM_CH4_CC_BITS, 0xffffffff
.equ	PWM_CH4_CC_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_CH4_CC_B
.equ	PWM_CH4_CC_B_RESET, 0x0000
.equ	PWM_CH4_CC_B_BITS, 0xffff0000
.equ	PWM_CH4_CC_B_MSB, 31
.equ	PWM_CH4_CC_B_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PWM_CH4_CC_A
.equ	PWM_CH4_CC_A_RESET, 0x0000
.equ	PWM_CH4_CC_A_BITS, 0x0000ffff
.equ	PWM_CH4_CC_A_MSB, 15
.equ	PWM_CH4_CC_A_LSB, 0
# =============================================================================
# Register    : PWM_CH4_TOP
# Description : Counter wrap value
.equ	PWM_CH4_TOP_OFFSET, 0x00000060
.equ	PWM_CH4_TOP_BITS, 0x0000ffff
.equ	PWM_CH4_TOP_RESET, 0x0000ffff
.equ	PWM_CH4_TOP_MSB, 15
.equ	PWM_CH4_TOP_LSB, 0
# =============================================================================
# Register    : PWM_CH5_CSR
# Description : Control and status register
.equ	PWM_CH5_CSR_OFFSET, 0x00000064
.equ	PWM_CH5_CSR_BITS, 0x000000ff
.equ	PWM_CH5_CSR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_CH5_CSR_PH_ADV
# Description : Advance the phase of the counter by 1 count, while it is
#               running.
#               Self-clearing. Write a 1, and poll until low. Counter must be
#               running
#               at less than full speed (div_int + div_frac / 16 > 1)
.equ	PWM_CH5_CSR_PH_ADV_RESET, 0x0
.equ	PWM_CH5_CSR_PH_ADV_BITS, 0x00000080
.equ	PWM_CH5_CSR_PH_ADV_MSB, 7
.equ	PWM_CH5_CSR_PH_ADV_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PWM_CH5_CSR_PH_RET
# Description : Retard the phase of the counter by 1 count, while it is
#               running.
#               Self-clearing. Write a 1, and poll until low. Counter must be
#               running.
.equ	PWM_CH5_CSR_PH_RET_RESET, 0x0
.equ	PWM_CH5_CSR_PH_RET_BITS, 0x00000040
.equ	PWM_CH5_CSR_PH_RET_MSB, 6
.equ	PWM_CH5_CSR_PH_RET_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PWM_CH5_CSR_DIVMODE
#               0x0 -> Free-running counting at rate dictated by fractional divider
#               0x1 -> Fractional divider operation is gated by the PWM B pin.
#               0x2 -> Counter advances with each rising edge of the PWM B pin.
#               0x3 -> Counter advances with each falling edge of the PWM B pin.
.equ	PWM_CH5_CSR_DIVMODE_RESET, 0x0
.equ	PWM_CH5_CSR_DIVMODE_BITS, 0x00000030
.equ	PWM_CH5_CSR_DIVMODE_MSB, 5
.equ	PWM_CH5_CSR_DIVMODE_LSB, 4
.equ	PWM_CH5_CSR_DIVMODE_VALUE_DIV, 0x0
.equ	PWM_CH5_CSR_DIVMODE_VALUE_LEVEL, 0x1
.equ	PWM_CH5_CSR_DIVMODE_VALUE_RISE, 0x2
.equ	PWM_CH5_CSR_DIVMODE_VALUE_FALL, 0x3
# -----------------------------------------------------------------------------
# Field       : PWM_CH5_CSR_B_INV
# Description : Invert output B
.equ	PWM_CH5_CSR_B_INV_RESET, 0x0
.equ	PWM_CH5_CSR_B_INV_BITS, 0x00000008
.equ	PWM_CH5_CSR_B_INV_MSB, 3
.equ	PWM_CH5_CSR_B_INV_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PWM_CH5_CSR_A_INV
# Description : Invert output A
.equ	PWM_CH5_CSR_A_INV_RESET, 0x0
.equ	PWM_CH5_CSR_A_INV_BITS, 0x00000004
.equ	PWM_CH5_CSR_A_INV_MSB, 2
.equ	PWM_CH5_CSR_A_INV_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PWM_CH5_CSR_PH_CORRECT
# Description : 1: Enable phase-correct modulation. 0: Trailing-edge
.equ	PWM_CH5_CSR_PH_CORRECT_RESET, 0x0
.equ	PWM_CH5_CSR_PH_CORRECT_BITS, 0x00000002
.equ	PWM_CH5_CSR_PH_CORRECT_MSB, 1
.equ	PWM_CH5_CSR_PH_CORRECT_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PWM_CH5_CSR_EN
# Description : Enable the PWM channel.
.equ	PWM_CH5_CSR_EN_RESET, 0x0
.equ	PWM_CH5_CSR_EN_BITS, 0x00000001
.equ	PWM_CH5_CSR_EN_MSB, 0
.equ	PWM_CH5_CSR_EN_LSB, 0
# =============================================================================
# Register    : PWM_CH5_DIV
# Description : INT and FRAC form a fixed-point fractional number.
#               Counting rate is system clock frequency divided by this number.
#               Fractional division uses simple 1st-order sigma-delta.
.equ	PWM_CH5_DIV_OFFSET, 0x00000068
.equ	PWM_CH5_DIV_BITS, 0x00000fff
.equ	PWM_CH5_DIV_RESET, 0x00000010
# -----------------------------------------------------------------------------
# Field       : PWM_CH5_DIV_INT
.equ	PWM_CH5_DIV_INT_RESET, 0x01
.equ	PWM_CH5_DIV_INT_BITS, 0x00000ff0
.equ	PWM_CH5_DIV_INT_MSB, 11
.equ	PWM_CH5_DIV_INT_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PWM_CH5_DIV_FRAC
.equ	PWM_CH5_DIV_FRAC_RESET, 0x0
.equ	PWM_CH5_DIV_FRAC_BITS, 0x0000000f
.equ	PWM_CH5_DIV_FRAC_MSB, 3
.equ	PWM_CH5_DIV_FRAC_LSB, 0
# =============================================================================
# Register    : PWM_CH5_CTR
# Description : Direct access to the PWM counter
.equ	PWM_CH5_CTR_OFFSET, 0x0000006c
.equ	PWM_CH5_CTR_BITS, 0x0000ffff
.equ	PWM_CH5_CTR_RESET, 0x00000000
.equ	PWM_CH5_CTR_MSB, 15
.equ	PWM_CH5_CTR_LSB, 0
# =============================================================================
# Register    : PWM_CH5_CC
# Description : Counter compare values
.equ	PWM_CH5_CC_OFFSET, 0x00000070
.equ	PWM_CH5_CC_BITS, 0xffffffff
.equ	PWM_CH5_CC_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_CH5_CC_B
.equ	PWM_CH5_CC_B_RESET, 0x0000
.equ	PWM_CH5_CC_B_BITS, 0xffff0000
.equ	PWM_CH5_CC_B_MSB, 31
.equ	PWM_CH5_CC_B_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PWM_CH5_CC_A
.equ	PWM_CH5_CC_A_RESET, 0x0000
.equ	PWM_CH5_CC_A_BITS, 0x0000ffff
.equ	PWM_CH5_CC_A_MSB, 15
.equ	PWM_CH5_CC_A_LSB, 0
# =============================================================================
# Register    : PWM_CH5_TOP
# Description : Counter wrap value
.equ	PWM_CH5_TOP_OFFSET, 0x00000074
.equ	PWM_CH5_TOP_BITS, 0x0000ffff
.equ	PWM_CH5_TOP_RESET, 0x0000ffff
.equ	PWM_CH5_TOP_MSB, 15
.equ	PWM_CH5_TOP_LSB, 0
# =============================================================================
# Register    : PWM_CH6_CSR
# Description : Control and status register
.equ	PWM_CH6_CSR_OFFSET, 0x00000078
.equ	PWM_CH6_CSR_BITS, 0x000000ff
.equ	PWM_CH6_CSR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_CH6_CSR_PH_ADV
# Description : Advance the phase of the counter by 1 count, while it is
#               running.
#               Self-clearing. Write a 1, and poll until low. Counter must be
#               running
#               at less than full speed (div_int + div_frac / 16 > 1)
.equ	PWM_CH6_CSR_PH_ADV_RESET, 0x0
.equ	PWM_CH6_CSR_PH_ADV_BITS, 0x00000080
.equ	PWM_CH6_CSR_PH_ADV_MSB, 7
.equ	PWM_CH6_CSR_PH_ADV_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PWM_CH6_CSR_PH_RET
# Description : Retard the phase of the counter by 1 count, while it is
#               running.
#               Self-clearing. Write a 1, and poll until low. Counter must be
#               running.
.equ	PWM_CH6_CSR_PH_RET_RESET, 0x0
.equ	PWM_CH6_CSR_PH_RET_BITS, 0x00000040
.equ	PWM_CH6_CSR_PH_RET_MSB, 6
.equ	PWM_CH6_CSR_PH_RET_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PWM_CH6_CSR_DIVMODE
#               0x0 -> Free-running counting at rate dictated by fractional divider
#               0x1 -> Fractional divider operation is gated by the PWM B pin.
#               0x2 -> Counter advances with each rising edge of the PWM B pin.
#               0x3 -> Counter advances with each falling edge of the PWM B pin.
.equ	PWM_CH6_CSR_DIVMODE_RESET, 0x0
.equ	PWM_CH6_CSR_DIVMODE_BITS, 0x00000030
.equ	PWM_CH6_CSR_DIVMODE_MSB, 5
.equ	PWM_CH6_CSR_DIVMODE_LSB, 4
.equ	PWM_CH6_CSR_DIVMODE_VALUE_DIV, 0x0
.equ	PWM_CH6_CSR_DIVMODE_VALUE_LEVEL, 0x1
.equ	PWM_CH6_CSR_DIVMODE_VALUE_RISE, 0x2
.equ	PWM_CH6_CSR_DIVMODE_VALUE_FALL, 0x3
# -----------------------------------------------------------------------------
# Field       : PWM_CH6_CSR_B_INV
# Description : Invert output B
.equ	PWM_CH6_CSR_B_INV_RESET, 0x0
.equ	PWM_CH6_CSR_B_INV_BITS, 0x00000008
.equ	PWM_CH6_CSR_B_INV_MSB, 3
.equ	PWM_CH6_CSR_B_INV_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PWM_CH6_CSR_A_INV
# Description : Invert output A
.equ	PWM_CH6_CSR_A_INV_RESET, 0x0
.equ	PWM_CH6_CSR_A_INV_BITS, 0x00000004
.equ	PWM_CH6_CSR_A_INV_MSB, 2
.equ	PWM_CH6_CSR_A_INV_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PWM_CH6_CSR_PH_CORRECT
# Description : 1: Enable phase-correct modulation. 0: Trailing-edge
.equ	PWM_CH6_CSR_PH_CORRECT_RESET, 0x0
.equ	PWM_CH6_CSR_PH_CORRECT_BITS, 0x00000002
.equ	PWM_CH6_CSR_PH_CORRECT_MSB, 1
.equ	PWM_CH6_CSR_PH_CORRECT_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PWM_CH6_CSR_EN
# Description : Enable the PWM channel.
.equ	PWM_CH6_CSR_EN_RESET, 0x0
.equ	PWM_CH6_CSR_EN_BITS, 0x00000001
.equ	PWM_CH6_CSR_EN_MSB, 0
.equ	PWM_CH6_CSR_EN_LSB, 0
# =============================================================================
# Register    : PWM_CH6_DIV
# Description : INT and FRAC form a fixed-point fractional number.
#               Counting rate is system clock frequency divided by this number.
#               Fractional division uses simple 1st-order sigma-delta.
.equ	PWM_CH6_DIV_OFFSET, 0x0000007c
.equ	PWM_CH6_DIV_BITS, 0x00000fff
.equ	PWM_CH6_DIV_RESET, 0x00000010
# -----------------------------------------------------------------------------
# Field       : PWM_CH6_DIV_INT
.equ	PWM_CH6_DIV_INT_RESET, 0x01
.equ	PWM_CH6_DIV_INT_BITS, 0x00000ff0
.equ	PWM_CH6_DIV_INT_MSB, 11
.equ	PWM_CH6_DIV_INT_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PWM_CH6_DIV_FRAC
.equ	PWM_CH6_DIV_FRAC_RESET, 0x0
.equ	PWM_CH6_DIV_FRAC_BITS, 0x0000000f
.equ	PWM_CH6_DIV_FRAC_MSB, 3
.equ	PWM_CH6_DIV_FRAC_LSB, 0
# =============================================================================
# Register    : PWM_CH6_CTR
# Description : Direct access to the PWM counter
.equ	PWM_CH6_CTR_OFFSET, 0x00000080
.equ	PWM_CH6_CTR_BITS, 0x0000ffff
.equ	PWM_CH6_CTR_RESET, 0x00000000
.equ	PWM_CH6_CTR_MSB, 15
.equ	PWM_CH6_CTR_LSB, 0
# =============================================================================
# Register    : PWM_CH6_CC
# Description : Counter compare values
.equ	PWM_CH6_CC_OFFSET, 0x00000084
.equ	PWM_CH6_CC_BITS, 0xffffffff
.equ	PWM_CH6_CC_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_CH6_CC_B
.equ	PWM_CH6_CC_B_RESET, 0x0000
.equ	PWM_CH6_CC_B_BITS, 0xffff0000
.equ	PWM_CH6_CC_B_MSB, 31
.equ	PWM_CH6_CC_B_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PWM_CH6_CC_A
.equ	PWM_CH6_CC_A_RESET, 0x0000
.equ	PWM_CH6_CC_A_BITS, 0x0000ffff
.equ	PWM_CH6_CC_A_MSB, 15
.equ	PWM_CH6_CC_A_LSB, 0
# =============================================================================
# Register    : PWM_CH6_TOP
# Description : Counter wrap value
.equ	PWM_CH6_TOP_OFFSET, 0x00000088
.equ	PWM_CH6_TOP_BITS, 0x0000ffff
.equ	PWM_CH6_TOP_RESET, 0x0000ffff
.equ	PWM_CH6_TOP_MSB, 15
.equ	PWM_CH6_TOP_LSB, 0
# =============================================================================
# Register    : PWM_CH7_CSR
# Description : Control and status register
.equ	PWM_CH7_CSR_OFFSET, 0x0000008c
.equ	PWM_CH7_CSR_BITS, 0x000000ff
.equ	PWM_CH7_CSR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_CH7_CSR_PH_ADV
# Description : Advance the phase of the counter by 1 count, while it is
#               running.
#               Self-clearing. Write a 1, and poll until low. Counter must be
#               running
#               at less than full speed (div_int + div_frac / 16 > 1)
.equ	PWM_CH7_CSR_PH_ADV_RESET, 0x0
.equ	PWM_CH7_CSR_PH_ADV_BITS, 0x00000080
.equ	PWM_CH7_CSR_PH_ADV_MSB, 7
.equ	PWM_CH7_CSR_PH_ADV_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PWM_CH7_CSR_PH_RET
# Description : Retard the phase of the counter by 1 count, while it is
#               running.
#               Self-clearing. Write a 1, and poll until low. Counter must be
#               running.
.equ	PWM_CH7_CSR_PH_RET_RESET, 0x0
.equ	PWM_CH7_CSR_PH_RET_BITS, 0x00000040
.equ	PWM_CH7_CSR_PH_RET_MSB, 6
.equ	PWM_CH7_CSR_PH_RET_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PWM_CH7_CSR_DIVMODE
#               0x0 -> Free-running counting at rate dictated by fractional divider
#               0x1 -> Fractional divider operation is gated by the PWM B pin.
#               0x2 -> Counter advances with each rising edge of the PWM B pin.
#               0x3 -> Counter advances with each falling edge of the PWM B pin.
.equ	PWM_CH7_CSR_DIVMODE_RESET, 0x0
.equ	PWM_CH7_CSR_DIVMODE_BITS, 0x00000030
.equ	PWM_CH7_CSR_DIVMODE_MSB, 5
.equ	PWM_CH7_CSR_DIVMODE_LSB, 4
.equ	PWM_CH7_CSR_DIVMODE_VALUE_DIV, 0x0
.equ	PWM_CH7_CSR_DIVMODE_VALUE_LEVEL, 0x1
.equ	PWM_CH7_CSR_DIVMODE_VALUE_RISE, 0x2
.equ	PWM_CH7_CSR_DIVMODE_VALUE_FALL, 0x3
# -----------------------------------------------------------------------------
# Field       : PWM_CH7_CSR_B_INV
# Description : Invert output B
.equ	PWM_CH7_CSR_B_INV_RESET, 0x0
.equ	PWM_CH7_CSR_B_INV_BITS, 0x00000008
.equ	PWM_CH7_CSR_B_INV_MSB, 3
.equ	PWM_CH7_CSR_B_INV_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PWM_CH7_CSR_A_INV
# Description : Invert output A
.equ	PWM_CH7_CSR_A_INV_RESET, 0x0
.equ	PWM_CH7_CSR_A_INV_BITS, 0x00000004
.equ	PWM_CH7_CSR_A_INV_MSB, 2
.equ	PWM_CH7_CSR_A_INV_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PWM_CH7_CSR_PH_CORRECT
# Description : 1: Enable phase-correct modulation. 0: Trailing-edge
.equ	PWM_CH7_CSR_PH_CORRECT_RESET, 0x0
.equ	PWM_CH7_CSR_PH_CORRECT_BITS, 0x00000002
.equ	PWM_CH7_CSR_PH_CORRECT_MSB, 1
.equ	PWM_CH7_CSR_PH_CORRECT_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PWM_CH7_CSR_EN
# Description : Enable the PWM channel.
.equ	PWM_CH7_CSR_EN_RESET, 0x0
.equ	PWM_CH7_CSR_EN_BITS, 0x00000001
.equ	PWM_CH7_CSR_EN_MSB, 0
.equ	PWM_CH7_CSR_EN_LSB, 0
# =============================================================================
# Register    : PWM_CH7_DIV
# Description : INT and FRAC form a fixed-point fractional number.
#               Counting rate is system clock frequency divided by this number.
#               Fractional division uses simple 1st-order sigma-delta.
.equ	PWM_CH7_DIV_OFFSET, 0x00000090
.equ	PWM_CH7_DIV_BITS, 0x00000fff
.equ	PWM_CH7_DIV_RESET, 0x00000010
# -----------------------------------------------------------------------------
# Field       : PWM_CH7_DIV_INT
.equ	PWM_CH7_DIV_INT_RESET, 0x01
.equ	PWM_CH7_DIV_INT_BITS, 0x00000ff0
.equ	PWM_CH7_DIV_INT_MSB, 11
.equ	PWM_CH7_DIV_INT_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PWM_CH7_DIV_FRAC
.equ	PWM_CH7_DIV_FRAC_RESET, 0x0
.equ	PWM_CH7_DIV_FRAC_BITS, 0x0000000f
.equ	PWM_CH7_DIV_FRAC_MSB, 3
.equ	PWM_CH7_DIV_FRAC_LSB, 0
# =============================================================================
# Register    : PWM_CH7_CTR
# Description : Direct access to the PWM counter
.equ	PWM_CH7_CTR_OFFSET, 0x00000094
.equ	PWM_CH7_CTR_BITS, 0x0000ffff
.equ	PWM_CH7_CTR_RESET, 0x00000000
.equ	PWM_CH7_CTR_MSB, 15
.equ	PWM_CH7_CTR_LSB, 0
# =============================================================================
# Register    : PWM_CH7_CC
# Description : Counter compare values
.equ	PWM_CH7_CC_OFFSET, 0x00000098
.equ	PWM_CH7_CC_BITS, 0xffffffff
.equ	PWM_CH7_CC_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_CH7_CC_B
.equ	PWM_CH7_CC_B_RESET, 0x0000
.equ	PWM_CH7_CC_B_BITS, 0xffff0000
.equ	PWM_CH7_CC_B_MSB, 31
.equ	PWM_CH7_CC_B_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PWM_CH7_CC_A
.equ	PWM_CH7_CC_A_RESET, 0x0000
.equ	PWM_CH7_CC_A_BITS, 0x0000ffff
.equ	PWM_CH7_CC_A_MSB, 15
.equ	PWM_CH7_CC_A_LSB, 0
# =============================================================================
# Register    : PWM_CH7_TOP
# Description : Counter wrap value
.equ	PWM_CH7_TOP_OFFSET, 0x0000009c
.equ	PWM_CH7_TOP_BITS, 0x0000ffff
.equ	PWM_CH7_TOP_RESET, 0x0000ffff
.equ	PWM_CH7_TOP_MSB, 15
.equ	PWM_CH7_TOP_LSB, 0
# =============================================================================
# Register    : PWM_CH8_CSR
# Description : Control and status register
.equ	PWM_CH8_CSR_OFFSET, 0x000000a0
.equ	PWM_CH8_CSR_BITS, 0x000000ff
.equ	PWM_CH8_CSR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_CH8_CSR_PH_ADV
# Description : Advance the phase of the counter by 1 count, while it is
#               running.
#               Self-clearing. Write a 1, and poll until low. Counter must be
#               running
#               at less than full speed (div_int + div_frac / 16 > 1)
.equ	PWM_CH8_CSR_PH_ADV_RESET, 0x0
.equ	PWM_CH8_CSR_PH_ADV_BITS, 0x00000080
.equ	PWM_CH8_CSR_PH_ADV_MSB, 7
.equ	PWM_CH8_CSR_PH_ADV_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PWM_CH8_CSR_PH_RET
# Description : Retard the phase of the counter by 1 count, while it is
#               running.
#               Self-clearing. Write a 1, and poll until low. Counter must be
#               running.
.equ	PWM_CH8_CSR_PH_RET_RESET, 0x0
.equ	PWM_CH8_CSR_PH_RET_BITS, 0x00000040
.equ	PWM_CH8_CSR_PH_RET_MSB, 6
.equ	PWM_CH8_CSR_PH_RET_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PWM_CH8_CSR_DIVMODE
#               0x0 -> Free-running counting at rate dictated by fractional divider
#               0x1 -> Fractional divider operation is gated by the PWM B pin.
#               0x2 -> Counter advances with each rising edge of the PWM B pin.
#               0x3 -> Counter advances with each falling edge of the PWM B pin.
.equ	PWM_CH8_CSR_DIVMODE_RESET, 0x0
.equ	PWM_CH8_CSR_DIVMODE_BITS, 0x00000030
.equ	PWM_CH8_CSR_DIVMODE_MSB, 5
.equ	PWM_CH8_CSR_DIVMODE_LSB, 4
.equ	PWM_CH8_CSR_DIVMODE_VALUE_DIV, 0x0
.equ	PWM_CH8_CSR_DIVMODE_VALUE_LEVEL, 0x1
.equ	PWM_CH8_CSR_DIVMODE_VALUE_RISE, 0x2
.equ	PWM_CH8_CSR_DIVMODE_VALUE_FALL, 0x3
# -----------------------------------------------------------------------------
# Field       : PWM_CH8_CSR_B_INV
# Description : Invert output B
.equ	PWM_CH8_CSR_B_INV_RESET, 0x0
.equ	PWM_CH8_CSR_B_INV_BITS, 0x00000008
.equ	PWM_CH8_CSR_B_INV_MSB, 3
.equ	PWM_CH8_CSR_B_INV_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PWM_CH8_CSR_A_INV
# Description : Invert output A
.equ	PWM_CH8_CSR_A_INV_RESET, 0x0
.equ	PWM_CH8_CSR_A_INV_BITS, 0x00000004
.equ	PWM_CH8_CSR_A_INV_MSB, 2
.equ	PWM_CH8_CSR_A_INV_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PWM_CH8_CSR_PH_CORRECT
# Description : 1: Enable phase-correct modulation. 0: Trailing-edge
.equ	PWM_CH8_CSR_PH_CORRECT_RESET, 0x0
.equ	PWM_CH8_CSR_PH_CORRECT_BITS, 0x00000002
.equ	PWM_CH8_CSR_PH_CORRECT_MSB, 1
.equ	PWM_CH8_CSR_PH_CORRECT_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PWM_CH8_CSR_EN
# Description : Enable the PWM channel.
.equ	PWM_CH8_CSR_EN_RESET, 0x0
.equ	PWM_CH8_CSR_EN_BITS, 0x00000001
.equ	PWM_CH8_CSR_EN_MSB, 0
.equ	PWM_CH8_CSR_EN_LSB, 0
# =============================================================================
# Register    : PWM_CH8_DIV
# Description : INT and FRAC form a fixed-point fractional number.
#               Counting rate is system clock frequency divided by this number.
#               Fractional division uses simple 1st-order sigma-delta.
.equ	PWM_CH8_DIV_OFFSET, 0x000000a4
.equ	PWM_CH8_DIV_BITS, 0x00000fff
.equ	PWM_CH8_DIV_RESET, 0x00000010
# -----------------------------------------------------------------------------
# Field       : PWM_CH8_DIV_INT
.equ	PWM_CH8_DIV_INT_RESET, 0x01
.equ	PWM_CH8_DIV_INT_BITS, 0x00000ff0
.equ	PWM_CH8_DIV_INT_MSB, 11
.equ	PWM_CH8_DIV_INT_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PWM_CH8_DIV_FRAC
.equ	PWM_CH8_DIV_FRAC_RESET, 0x0
.equ	PWM_CH8_DIV_FRAC_BITS, 0x0000000f
.equ	PWM_CH8_DIV_FRAC_MSB, 3
.equ	PWM_CH8_DIV_FRAC_LSB, 0
# =============================================================================
# Register    : PWM_CH8_CTR
# Description : Direct access to the PWM counter
.equ	PWM_CH8_CTR_OFFSET, 0x000000a8
.equ	PWM_CH8_CTR_BITS, 0x0000ffff
.equ	PWM_CH8_CTR_RESET, 0x00000000
.equ	PWM_CH8_CTR_MSB, 15
.equ	PWM_CH8_CTR_LSB, 0
# =============================================================================
# Register    : PWM_CH8_CC
# Description : Counter compare values
.equ	PWM_CH8_CC_OFFSET, 0x000000ac
.equ	PWM_CH8_CC_BITS, 0xffffffff
.equ	PWM_CH8_CC_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_CH8_CC_B
.equ	PWM_CH8_CC_B_RESET, 0x0000
.equ	PWM_CH8_CC_B_BITS, 0xffff0000
.equ	PWM_CH8_CC_B_MSB, 31
.equ	PWM_CH8_CC_B_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PWM_CH8_CC_A
.equ	PWM_CH8_CC_A_RESET, 0x0000
.equ	PWM_CH8_CC_A_BITS, 0x0000ffff
.equ	PWM_CH8_CC_A_MSB, 15
.equ	PWM_CH8_CC_A_LSB, 0
# =============================================================================
# Register    : PWM_CH8_TOP
# Description : Counter wrap value
.equ	PWM_CH8_TOP_OFFSET, 0x000000b0
.equ	PWM_CH8_TOP_BITS, 0x0000ffff
.equ	PWM_CH8_TOP_RESET, 0x0000ffff
.equ	PWM_CH8_TOP_MSB, 15
.equ	PWM_CH8_TOP_LSB, 0
# =============================================================================
# Register    : PWM_CH9_CSR
# Description : Control and status register
.equ	PWM_CH9_CSR_OFFSET, 0x000000b4
.equ	PWM_CH9_CSR_BITS, 0x000000ff
.equ	PWM_CH9_CSR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_CH9_CSR_PH_ADV
# Description : Advance the phase of the counter by 1 count, while it is
#               running.
#               Self-clearing. Write a 1, and poll until low. Counter must be
#               running
#               at less than full speed (div_int + div_frac / 16 > 1)
.equ	PWM_CH9_CSR_PH_ADV_RESET, 0x0
.equ	PWM_CH9_CSR_PH_ADV_BITS, 0x00000080
.equ	PWM_CH9_CSR_PH_ADV_MSB, 7
.equ	PWM_CH9_CSR_PH_ADV_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PWM_CH9_CSR_PH_RET
# Description : Retard the phase of the counter by 1 count, while it is
#               running.
#               Self-clearing. Write a 1, and poll until low. Counter must be
#               running.
.equ	PWM_CH9_CSR_PH_RET_RESET, 0x0
.equ	PWM_CH9_CSR_PH_RET_BITS, 0x00000040
.equ	PWM_CH9_CSR_PH_RET_MSB, 6
.equ	PWM_CH9_CSR_PH_RET_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PWM_CH9_CSR_DIVMODE
#               0x0 -> Free-running counting at rate dictated by fractional divider
#               0x1 -> Fractional divider operation is gated by the PWM B pin.
#               0x2 -> Counter advances with each rising edge of the PWM B pin.
#               0x3 -> Counter advances with each falling edge of the PWM B pin.
.equ	PWM_CH9_CSR_DIVMODE_RESET, 0x0
.equ	PWM_CH9_CSR_DIVMODE_BITS, 0x00000030
.equ	PWM_CH9_CSR_DIVMODE_MSB, 5
.equ	PWM_CH9_CSR_DIVMODE_LSB, 4
.equ	PWM_CH9_CSR_DIVMODE_VALUE_DIV, 0x0
.equ	PWM_CH9_CSR_DIVMODE_VALUE_LEVEL, 0x1
.equ	PWM_CH9_CSR_DIVMODE_VALUE_RISE, 0x2
.equ	PWM_CH9_CSR_DIVMODE_VALUE_FALL, 0x3
# -----------------------------------------------------------------------------
# Field       : PWM_CH9_CSR_B_INV
# Description : Invert output B
.equ	PWM_CH9_CSR_B_INV_RESET, 0x0
.equ	PWM_CH9_CSR_B_INV_BITS, 0x00000008
.equ	PWM_CH9_CSR_B_INV_MSB, 3
.equ	PWM_CH9_CSR_B_INV_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PWM_CH9_CSR_A_INV
# Description : Invert output A
.equ	PWM_CH9_CSR_A_INV_RESET, 0x0
.equ	PWM_CH9_CSR_A_INV_BITS, 0x00000004
.equ	PWM_CH9_CSR_A_INV_MSB, 2
.equ	PWM_CH9_CSR_A_INV_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PWM_CH9_CSR_PH_CORRECT
# Description : 1: Enable phase-correct modulation. 0: Trailing-edge
.equ	PWM_CH9_CSR_PH_CORRECT_RESET, 0x0
.equ	PWM_CH9_CSR_PH_CORRECT_BITS, 0x00000002
.equ	PWM_CH9_CSR_PH_CORRECT_MSB, 1
.equ	PWM_CH9_CSR_PH_CORRECT_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PWM_CH9_CSR_EN
# Description : Enable the PWM channel.
.equ	PWM_CH9_CSR_EN_RESET, 0x0
.equ	PWM_CH9_CSR_EN_BITS, 0x00000001
.equ	PWM_CH9_CSR_EN_MSB, 0
.equ	PWM_CH9_CSR_EN_LSB, 0
# =============================================================================
# Register    : PWM_CH9_DIV
# Description : INT and FRAC form a fixed-point fractional number.
#               Counting rate is system clock frequency divided by this number.
#               Fractional division uses simple 1st-order sigma-delta.
.equ	PWM_CH9_DIV_OFFSET, 0x000000b8
.equ	PWM_CH9_DIV_BITS, 0x00000fff
.equ	PWM_CH9_DIV_RESET, 0x00000010
# -----------------------------------------------------------------------------
# Field       : PWM_CH9_DIV_INT
.equ	PWM_CH9_DIV_INT_RESET, 0x01
.equ	PWM_CH9_DIV_INT_BITS, 0x00000ff0
.equ	PWM_CH9_DIV_INT_MSB, 11
.equ	PWM_CH9_DIV_INT_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PWM_CH9_DIV_FRAC
.equ	PWM_CH9_DIV_FRAC_RESET, 0x0
.equ	PWM_CH9_DIV_FRAC_BITS, 0x0000000f
.equ	PWM_CH9_DIV_FRAC_MSB, 3
.equ	PWM_CH9_DIV_FRAC_LSB, 0
# =============================================================================
# Register    : PWM_CH9_CTR
# Description : Direct access to the PWM counter
.equ	PWM_CH9_CTR_OFFSET, 0x000000bc
.equ	PWM_CH9_CTR_BITS, 0x0000ffff
.equ	PWM_CH9_CTR_RESET, 0x00000000
.equ	PWM_CH9_CTR_MSB, 15
.equ	PWM_CH9_CTR_LSB, 0
# =============================================================================
# Register    : PWM_CH9_CC
# Description : Counter compare values
.equ	PWM_CH9_CC_OFFSET, 0x000000c0
.equ	PWM_CH9_CC_BITS, 0xffffffff
.equ	PWM_CH9_CC_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_CH9_CC_B
.equ	PWM_CH9_CC_B_RESET, 0x0000
.equ	PWM_CH9_CC_B_BITS, 0xffff0000
.equ	PWM_CH9_CC_B_MSB, 31
.equ	PWM_CH9_CC_B_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PWM_CH9_CC_A
.equ	PWM_CH9_CC_A_RESET, 0x0000
.equ	PWM_CH9_CC_A_BITS, 0x0000ffff
.equ	PWM_CH9_CC_A_MSB, 15
.equ	PWM_CH9_CC_A_LSB, 0
# =============================================================================
# Register    : PWM_CH9_TOP
# Description : Counter wrap value
.equ	PWM_CH9_TOP_OFFSET, 0x000000c4
.equ	PWM_CH9_TOP_BITS, 0x0000ffff
.equ	PWM_CH9_TOP_RESET, 0x0000ffff
.equ	PWM_CH9_TOP_MSB, 15
.equ	PWM_CH9_TOP_LSB, 0
# =============================================================================
# Register    : PWM_CH10_CSR
# Description : Control and status register
.equ	PWM_CH10_CSR_OFFSET, 0x000000c8
.equ	PWM_CH10_CSR_BITS, 0x000000ff
.equ	PWM_CH10_CSR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_CH10_CSR_PH_ADV
# Description : Advance the phase of the counter by 1 count, while it is
#               running.
#               Self-clearing. Write a 1, and poll until low. Counter must be
#               running
#               at less than full speed (div_int + div_frac / 16 > 1)
.equ	PWM_CH10_CSR_PH_ADV_RESET, 0x0
.equ	PWM_CH10_CSR_PH_ADV_BITS, 0x00000080
.equ	PWM_CH10_CSR_PH_ADV_MSB, 7
.equ	PWM_CH10_CSR_PH_ADV_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PWM_CH10_CSR_PH_RET
# Description : Retard the phase of the counter by 1 count, while it is
#               running.
#               Self-clearing. Write a 1, and poll until low. Counter must be
#               running.
.equ	PWM_CH10_CSR_PH_RET_RESET, 0x0
.equ	PWM_CH10_CSR_PH_RET_BITS, 0x00000040
.equ	PWM_CH10_CSR_PH_RET_MSB, 6
.equ	PWM_CH10_CSR_PH_RET_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PWM_CH10_CSR_DIVMODE
#               0x0 -> Free-running counting at rate dictated by fractional divider
#               0x1 -> Fractional divider operation is gated by the PWM B pin.
#               0x2 -> Counter advances with each rising edge of the PWM B pin.
#               0x3 -> Counter advances with each falling edge of the PWM B pin.
.equ	PWM_CH10_CSR_DIVMODE_RESET, 0x0
.equ	PWM_CH10_CSR_DIVMODE_BITS, 0x00000030
.equ	PWM_CH10_CSR_DIVMODE_MSB, 5
.equ	PWM_CH10_CSR_DIVMODE_LSB, 4
.equ	PWM_CH10_CSR_DIVMODE_VALUE_DIV, 0x0
.equ	PWM_CH10_CSR_DIVMODE_VALUE_LEVEL, 0x1
.equ	PWM_CH10_CSR_DIVMODE_VALUE_RISE, 0x2
.equ	PWM_CH10_CSR_DIVMODE_VALUE_FALL, 0x3
# -----------------------------------------------------------------------------
# Field       : PWM_CH10_CSR_B_INV
# Description : Invert output B
.equ	PWM_CH10_CSR_B_INV_RESET, 0x0
.equ	PWM_CH10_CSR_B_INV_BITS, 0x00000008
.equ	PWM_CH10_CSR_B_INV_MSB, 3
.equ	PWM_CH10_CSR_B_INV_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PWM_CH10_CSR_A_INV
# Description : Invert output A
.equ	PWM_CH10_CSR_A_INV_RESET, 0x0
.equ	PWM_CH10_CSR_A_INV_BITS, 0x00000004
.equ	PWM_CH10_CSR_A_INV_MSB, 2
.equ	PWM_CH10_CSR_A_INV_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PWM_CH10_CSR_PH_CORRECT
# Description : 1: Enable phase-correct modulation. 0: Trailing-edge
.equ	PWM_CH10_CSR_PH_CORRECT_RESET, 0x0
.equ	PWM_CH10_CSR_PH_CORRECT_BITS, 0x00000002
.equ	PWM_CH10_CSR_PH_CORRECT_MSB, 1
.equ	PWM_CH10_CSR_PH_CORRECT_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PWM_CH10_CSR_EN
# Description : Enable the PWM channel.
.equ	PWM_CH10_CSR_EN_RESET, 0x0
.equ	PWM_CH10_CSR_EN_BITS, 0x00000001
.equ	PWM_CH10_CSR_EN_MSB, 0
.equ	PWM_CH10_CSR_EN_LSB, 0
# =============================================================================
# Register    : PWM_CH10_DIV
# Description : INT and FRAC form a fixed-point fractional number.
#               Counting rate is system clock frequency divided by this number.
#               Fractional division uses simple 1st-order sigma-delta.
.equ	PWM_CH10_DIV_OFFSET, 0x000000cc
.equ	PWM_CH10_DIV_BITS, 0x00000fff
.equ	PWM_CH10_DIV_RESET, 0x00000010
# -----------------------------------------------------------------------------
# Field       : PWM_CH10_DIV_INT
.equ	PWM_CH10_DIV_INT_RESET, 0x01
.equ	PWM_CH10_DIV_INT_BITS, 0x00000ff0
.equ	PWM_CH10_DIV_INT_MSB, 11
.equ	PWM_CH10_DIV_INT_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PWM_CH10_DIV_FRAC
.equ	PWM_CH10_DIV_FRAC_RESET, 0x0
.equ	PWM_CH10_DIV_FRAC_BITS, 0x0000000f
.equ	PWM_CH10_DIV_FRAC_MSB, 3
.equ	PWM_CH10_DIV_FRAC_LSB, 0
# =============================================================================
# Register    : PWM_CH10_CTR
# Description : Direct access to the PWM counter
.equ	PWM_CH10_CTR_OFFSET, 0x000000d0
.equ	PWM_CH10_CTR_BITS, 0x0000ffff
.equ	PWM_CH10_CTR_RESET, 0x00000000
.equ	PWM_CH10_CTR_MSB, 15
.equ	PWM_CH10_CTR_LSB, 0
# =============================================================================
# Register    : PWM_CH10_CC
# Description : Counter compare values
.equ	PWM_CH10_CC_OFFSET, 0x000000d4
.equ	PWM_CH10_CC_BITS, 0xffffffff
.equ	PWM_CH10_CC_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_CH10_CC_B
.equ	PWM_CH10_CC_B_RESET, 0x0000
.equ	PWM_CH10_CC_B_BITS, 0xffff0000
.equ	PWM_CH10_CC_B_MSB, 31
.equ	PWM_CH10_CC_B_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PWM_CH10_CC_A
.equ	PWM_CH10_CC_A_RESET, 0x0000
.equ	PWM_CH10_CC_A_BITS, 0x0000ffff
.equ	PWM_CH10_CC_A_MSB, 15
.equ	PWM_CH10_CC_A_LSB, 0
# =============================================================================
# Register    : PWM_CH10_TOP
# Description : Counter wrap value
.equ	PWM_CH10_TOP_OFFSET, 0x000000d8
.equ	PWM_CH10_TOP_BITS, 0x0000ffff
.equ	PWM_CH10_TOP_RESET, 0x0000ffff
.equ	PWM_CH10_TOP_MSB, 15
.equ	PWM_CH10_TOP_LSB, 0
# =============================================================================
# Register    : PWM_CH11_CSR
# Description : Control and status register
.equ	PWM_CH11_CSR_OFFSET, 0x000000dc
.equ	PWM_CH11_CSR_BITS, 0x000000ff
.equ	PWM_CH11_CSR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_CH11_CSR_PH_ADV
# Description : Advance the phase of the counter by 1 count, while it is
#               running.
#               Self-clearing. Write a 1, and poll until low. Counter must be
#               running
#               at less than full speed (div_int + div_frac / 16 > 1)
.equ	PWM_CH11_CSR_PH_ADV_RESET, 0x0
.equ	PWM_CH11_CSR_PH_ADV_BITS, 0x00000080
.equ	PWM_CH11_CSR_PH_ADV_MSB, 7
.equ	PWM_CH11_CSR_PH_ADV_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PWM_CH11_CSR_PH_RET
# Description : Retard the phase of the counter by 1 count, while it is
#               running.
#               Self-clearing. Write a 1, and poll until low. Counter must be
#               running.
.equ	PWM_CH11_CSR_PH_RET_RESET, 0x0
.equ	PWM_CH11_CSR_PH_RET_BITS, 0x00000040
.equ	PWM_CH11_CSR_PH_RET_MSB, 6
.equ	PWM_CH11_CSR_PH_RET_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PWM_CH11_CSR_DIVMODE
#               0x0 -> Free-running counting at rate dictated by fractional divider
#               0x1 -> Fractional divider operation is gated by the PWM B pin.
#               0x2 -> Counter advances with each rising edge of the PWM B pin.
#               0x3 -> Counter advances with each falling edge of the PWM B pin.
.equ	PWM_CH11_CSR_DIVMODE_RESET, 0x0
.equ	PWM_CH11_CSR_DIVMODE_BITS, 0x00000030
.equ	PWM_CH11_CSR_DIVMODE_MSB, 5
.equ	PWM_CH11_CSR_DIVMODE_LSB, 4
.equ	PWM_CH11_CSR_DIVMODE_VALUE_DIV, 0x0
.equ	PWM_CH11_CSR_DIVMODE_VALUE_LEVEL, 0x1
.equ	PWM_CH11_CSR_DIVMODE_VALUE_RISE, 0x2
.equ	PWM_CH11_CSR_DIVMODE_VALUE_FALL, 0x3
# -----------------------------------------------------------------------------
# Field       : PWM_CH11_CSR_B_INV
# Description : Invert output B
.equ	PWM_CH11_CSR_B_INV_RESET, 0x0
.equ	PWM_CH11_CSR_B_INV_BITS, 0x00000008
.equ	PWM_CH11_CSR_B_INV_MSB, 3
.equ	PWM_CH11_CSR_B_INV_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PWM_CH11_CSR_A_INV
# Description : Invert output A
.equ	PWM_CH11_CSR_A_INV_RESET, 0x0
.equ	PWM_CH11_CSR_A_INV_BITS, 0x00000004
.equ	PWM_CH11_CSR_A_INV_MSB, 2
.equ	PWM_CH11_CSR_A_INV_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PWM_CH11_CSR_PH_CORRECT
# Description : 1: Enable phase-correct modulation. 0: Trailing-edge
.equ	PWM_CH11_CSR_PH_CORRECT_RESET, 0x0
.equ	PWM_CH11_CSR_PH_CORRECT_BITS, 0x00000002
.equ	PWM_CH11_CSR_PH_CORRECT_MSB, 1
.equ	PWM_CH11_CSR_PH_CORRECT_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PWM_CH11_CSR_EN
# Description : Enable the PWM channel.
.equ	PWM_CH11_CSR_EN_RESET, 0x0
.equ	PWM_CH11_CSR_EN_BITS, 0x00000001
.equ	PWM_CH11_CSR_EN_MSB, 0
.equ	PWM_CH11_CSR_EN_LSB, 0
# =============================================================================
# Register    : PWM_CH11_DIV
# Description : INT and FRAC form a fixed-point fractional number.
#               Counting rate is system clock frequency divided by this number.
#               Fractional division uses simple 1st-order sigma-delta.
.equ	PWM_CH11_DIV_OFFSET, 0x000000e0
.equ	PWM_CH11_DIV_BITS, 0x00000fff
.equ	PWM_CH11_DIV_RESET, 0x00000010
# -----------------------------------------------------------------------------
# Field       : PWM_CH11_DIV_INT
.equ	PWM_CH11_DIV_INT_RESET, 0x01
.equ	PWM_CH11_DIV_INT_BITS, 0x00000ff0
.equ	PWM_CH11_DIV_INT_MSB, 11
.equ	PWM_CH11_DIV_INT_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PWM_CH11_DIV_FRAC
.equ	PWM_CH11_DIV_FRAC_RESET, 0x0
.equ	PWM_CH11_DIV_FRAC_BITS, 0x0000000f
.equ	PWM_CH11_DIV_FRAC_MSB, 3
.equ	PWM_CH11_DIV_FRAC_LSB, 0
# =============================================================================
# Register    : PWM_CH11_CTR
# Description : Direct access to the PWM counter
.equ	PWM_CH11_CTR_OFFSET, 0x000000e4
.equ	PWM_CH11_CTR_BITS, 0x0000ffff
.equ	PWM_CH11_CTR_RESET, 0x00000000
.equ	PWM_CH11_CTR_MSB, 15
.equ	PWM_CH11_CTR_LSB, 0
# =============================================================================
# Register    : PWM_CH11_CC
# Description : Counter compare values
.equ	PWM_CH11_CC_OFFSET, 0x000000e8
.equ	PWM_CH11_CC_BITS, 0xffffffff
.equ	PWM_CH11_CC_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_CH11_CC_B
.equ	PWM_CH11_CC_B_RESET, 0x0000
.equ	PWM_CH11_CC_B_BITS, 0xffff0000
.equ	PWM_CH11_CC_B_MSB, 31
.equ	PWM_CH11_CC_B_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PWM_CH11_CC_A
.equ	PWM_CH11_CC_A_RESET, 0x0000
.equ	PWM_CH11_CC_A_BITS, 0x0000ffff
.equ	PWM_CH11_CC_A_MSB, 15
.equ	PWM_CH11_CC_A_LSB, 0
# =============================================================================
# Register    : PWM_CH11_TOP
# Description : Counter wrap value
.equ	PWM_CH11_TOP_OFFSET, 0x000000ec
.equ	PWM_CH11_TOP_BITS, 0x0000ffff
.equ	PWM_CH11_TOP_RESET, 0x0000ffff
.equ	PWM_CH11_TOP_MSB, 15
.equ	PWM_CH11_TOP_LSB, 0
# =============================================================================
# Register    : PWM_EN
# Description : This register aliases the CSR_EN bits for all channels.
#               Writing to this register allows multiple channels to be enabled
#               or disabled simultaneously, so they can run in perfect sync.
#               For each channel, there is only one physical EN register bit,
#               which can be accessed through here or CHx_CSR.
.equ	PWM_EN_OFFSET, 0x000000f0
.equ	PWM_EN_BITS, 0x00000fff
.equ	PWM_EN_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_EN_CH11
.equ	PWM_EN_CH11_RESET, 0x0
.equ	PWM_EN_CH11_BITS, 0x00000800
.equ	PWM_EN_CH11_MSB, 11
.equ	PWM_EN_CH11_LSB, 11
# -----------------------------------------------------------------------------
# Field       : PWM_EN_CH10
.equ	PWM_EN_CH10_RESET, 0x0
.equ	PWM_EN_CH10_BITS, 0x00000400
.equ	PWM_EN_CH10_MSB, 10
.equ	PWM_EN_CH10_LSB, 10
# -----------------------------------------------------------------------------
# Field       : PWM_EN_CH9
.equ	PWM_EN_CH9_RESET, 0x0
.equ	PWM_EN_CH9_BITS, 0x00000200
.equ	PWM_EN_CH9_MSB, 9
.equ	PWM_EN_CH9_LSB, 9
# -----------------------------------------------------------------------------
# Field       : PWM_EN_CH8
.equ	PWM_EN_CH8_RESET, 0x0
.equ	PWM_EN_CH8_BITS, 0x00000100
.equ	PWM_EN_CH8_MSB, 8
.equ	PWM_EN_CH8_LSB, 8
# -----------------------------------------------------------------------------
# Field       : PWM_EN_CH7
.equ	PWM_EN_CH7_RESET, 0x0
.equ	PWM_EN_CH7_BITS, 0x00000080
.equ	PWM_EN_CH7_MSB, 7
.equ	PWM_EN_CH7_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PWM_EN_CH6
.equ	PWM_EN_CH6_RESET, 0x0
.equ	PWM_EN_CH6_BITS, 0x00000040
.equ	PWM_EN_CH6_MSB, 6
.equ	PWM_EN_CH6_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PWM_EN_CH5
.equ	PWM_EN_CH5_RESET, 0x0
.equ	PWM_EN_CH5_BITS, 0x00000020
.equ	PWM_EN_CH5_MSB, 5
.equ	PWM_EN_CH5_LSB, 5
# -----------------------------------------------------------------------------
# Field       : PWM_EN_CH4
.equ	PWM_EN_CH4_RESET, 0x0
.equ	PWM_EN_CH4_BITS, 0x00000010
.equ	PWM_EN_CH4_MSB, 4
.equ	PWM_EN_CH4_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PWM_EN_CH3
.equ	PWM_EN_CH3_RESET, 0x0
.equ	PWM_EN_CH3_BITS, 0x00000008
.equ	PWM_EN_CH3_MSB, 3
.equ	PWM_EN_CH3_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PWM_EN_CH2
.equ	PWM_EN_CH2_RESET, 0x0
.equ	PWM_EN_CH2_BITS, 0x00000004
.equ	PWM_EN_CH2_MSB, 2
.equ	PWM_EN_CH2_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PWM_EN_CH1
.equ	PWM_EN_CH1_RESET, 0x0
.equ	PWM_EN_CH1_BITS, 0x00000002
.equ	PWM_EN_CH1_MSB, 1
.equ	PWM_EN_CH1_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PWM_EN_CH0
.equ	PWM_EN_CH0_RESET, 0x0
.equ	PWM_EN_CH0_BITS, 0x00000001
.equ	PWM_EN_CH0_MSB, 0
.equ	PWM_EN_CH0_LSB, 0
# =============================================================================
# Register    : PWM_INTR
# Description : Raw Interrupts
.equ	PWM_INTR_OFFSET, 0x000000f4
.equ	PWM_INTR_BITS, 0x00000fff
.equ	PWM_INTR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_INTR_CH11
.equ	PWM_INTR_CH11_RESET, 0x0
.equ	PWM_INTR_CH11_BITS, 0x00000800
.equ	PWM_INTR_CH11_MSB, 11
.equ	PWM_INTR_CH11_LSB, 11
# -----------------------------------------------------------------------------
# Field       : PWM_INTR_CH10
.equ	PWM_INTR_CH10_RESET, 0x0
.equ	PWM_INTR_CH10_BITS, 0x00000400
.equ	PWM_INTR_CH10_MSB, 10
.equ	PWM_INTR_CH10_LSB, 10
# -----------------------------------------------------------------------------
# Field       : PWM_INTR_CH9
.equ	PWM_INTR_CH9_RESET, 0x0
.equ	PWM_INTR_CH9_BITS, 0x00000200
.equ	PWM_INTR_CH9_MSB, 9
.equ	PWM_INTR_CH9_LSB, 9
# -----------------------------------------------------------------------------
# Field       : PWM_INTR_CH8
.equ	PWM_INTR_CH8_RESET, 0x0
.equ	PWM_INTR_CH8_BITS, 0x00000100
.equ	PWM_INTR_CH8_MSB, 8
.equ	PWM_INTR_CH8_LSB, 8
# -----------------------------------------------------------------------------
# Field       : PWM_INTR_CH7
.equ	PWM_INTR_CH7_RESET, 0x0
.equ	PWM_INTR_CH7_BITS, 0x00000080
.equ	PWM_INTR_CH7_MSB, 7
.equ	PWM_INTR_CH7_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PWM_INTR_CH6
.equ	PWM_INTR_CH6_RESET, 0x0
.equ	PWM_INTR_CH6_BITS, 0x00000040
.equ	PWM_INTR_CH6_MSB, 6
.equ	PWM_INTR_CH6_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PWM_INTR_CH5
.equ	PWM_INTR_CH5_RESET, 0x0
.equ	PWM_INTR_CH5_BITS, 0x00000020
.equ	PWM_INTR_CH5_MSB, 5
.equ	PWM_INTR_CH5_LSB, 5
# -----------------------------------------------------------------------------
# Field       : PWM_INTR_CH4
.equ	PWM_INTR_CH4_RESET, 0x0
.equ	PWM_INTR_CH4_BITS, 0x00000010
.equ	PWM_INTR_CH4_MSB, 4
.equ	PWM_INTR_CH4_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PWM_INTR_CH3
.equ	PWM_INTR_CH3_RESET, 0x0
.equ	PWM_INTR_CH3_BITS, 0x00000008
.equ	PWM_INTR_CH3_MSB, 3
.equ	PWM_INTR_CH3_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PWM_INTR_CH2
.equ	PWM_INTR_CH2_RESET, 0x0
.equ	PWM_INTR_CH2_BITS, 0x00000004
.equ	PWM_INTR_CH2_MSB, 2
.equ	PWM_INTR_CH2_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PWM_INTR_CH1
.equ	PWM_INTR_CH1_RESET, 0x0
.equ	PWM_INTR_CH1_BITS, 0x00000002
.equ	PWM_INTR_CH1_MSB, 1
.equ	PWM_INTR_CH1_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PWM_INTR_CH0
.equ	PWM_INTR_CH0_RESET, 0x0
.equ	PWM_INTR_CH0_BITS, 0x00000001
.equ	PWM_INTR_CH0_MSB, 0
.equ	PWM_INTR_CH0_LSB, 0
# =============================================================================
# Register    : PWM_IRQ0_INTE
# Description : Interrupt Enable for irq0
.equ	PWM_IRQ0_INTE_OFFSET, 0x000000f8
.equ	PWM_IRQ0_INTE_BITS, 0x00000fff
.equ	PWM_IRQ0_INTE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTE_CH11
.equ	PWM_IRQ0_INTE_CH11_RESET, 0x0
.equ	PWM_IRQ0_INTE_CH11_BITS, 0x00000800
.equ	PWM_IRQ0_INTE_CH11_MSB, 11
.equ	PWM_IRQ0_INTE_CH11_LSB, 11
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTE_CH10
.equ	PWM_IRQ0_INTE_CH10_RESET, 0x0
.equ	PWM_IRQ0_INTE_CH10_BITS, 0x00000400
.equ	PWM_IRQ0_INTE_CH10_MSB, 10
.equ	PWM_IRQ0_INTE_CH10_LSB, 10
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTE_CH9
.equ	PWM_IRQ0_INTE_CH9_RESET, 0x0
.equ	PWM_IRQ0_INTE_CH9_BITS, 0x00000200
.equ	PWM_IRQ0_INTE_CH9_MSB, 9
.equ	PWM_IRQ0_INTE_CH9_LSB, 9
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTE_CH8
.equ	PWM_IRQ0_INTE_CH8_RESET, 0x0
.equ	PWM_IRQ0_INTE_CH8_BITS, 0x00000100
.equ	PWM_IRQ0_INTE_CH8_MSB, 8
.equ	PWM_IRQ0_INTE_CH8_LSB, 8
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTE_CH7
.equ	PWM_IRQ0_INTE_CH7_RESET, 0x0
.equ	PWM_IRQ0_INTE_CH7_BITS, 0x00000080
.equ	PWM_IRQ0_INTE_CH7_MSB, 7
.equ	PWM_IRQ0_INTE_CH7_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTE_CH6
.equ	PWM_IRQ0_INTE_CH6_RESET, 0x0
.equ	PWM_IRQ0_INTE_CH6_BITS, 0x00000040
.equ	PWM_IRQ0_INTE_CH6_MSB, 6
.equ	PWM_IRQ0_INTE_CH6_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTE_CH5
.equ	PWM_IRQ0_INTE_CH5_RESET, 0x0
.equ	PWM_IRQ0_INTE_CH5_BITS, 0x00000020
.equ	PWM_IRQ0_INTE_CH5_MSB, 5
.equ	PWM_IRQ0_INTE_CH5_LSB, 5
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTE_CH4
.equ	PWM_IRQ0_INTE_CH4_RESET, 0x0
.equ	PWM_IRQ0_INTE_CH4_BITS, 0x00000010
.equ	PWM_IRQ0_INTE_CH4_MSB, 4
.equ	PWM_IRQ0_INTE_CH4_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTE_CH3
.equ	PWM_IRQ0_INTE_CH3_RESET, 0x0
.equ	PWM_IRQ0_INTE_CH3_BITS, 0x00000008
.equ	PWM_IRQ0_INTE_CH3_MSB, 3
.equ	PWM_IRQ0_INTE_CH3_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTE_CH2
.equ	PWM_IRQ0_INTE_CH2_RESET, 0x0
.equ	PWM_IRQ0_INTE_CH2_BITS, 0x00000004
.equ	PWM_IRQ0_INTE_CH2_MSB, 2
.equ	PWM_IRQ0_INTE_CH2_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTE_CH1
.equ	PWM_IRQ0_INTE_CH1_RESET, 0x0
.equ	PWM_IRQ0_INTE_CH1_BITS, 0x00000002
.equ	PWM_IRQ0_INTE_CH1_MSB, 1
.equ	PWM_IRQ0_INTE_CH1_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTE_CH0
.equ	PWM_IRQ0_INTE_CH0_RESET, 0x0
.equ	PWM_IRQ0_INTE_CH0_BITS, 0x00000001
.equ	PWM_IRQ0_INTE_CH0_MSB, 0
.equ	PWM_IRQ0_INTE_CH0_LSB, 0
# =============================================================================
# Register    : PWM_IRQ0_INTF
# Description : Interrupt Force for irq0
.equ	PWM_IRQ0_INTF_OFFSET, 0x000000fc
.equ	PWM_IRQ0_INTF_BITS, 0x00000fff
.equ	PWM_IRQ0_INTF_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTF_CH11
.equ	PWM_IRQ0_INTF_CH11_RESET, 0x0
.equ	PWM_IRQ0_INTF_CH11_BITS, 0x00000800
.equ	PWM_IRQ0_INTF_CH11_MSB, 11
.equ	PWM_IRQ0_INTF_CH11_LSB, 11
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTF_CH10
.equ	PWM_IRQ0_INTF_CH10_RESET, 0x0
.equ	PWM_IRQ0_INTF_CH10_BITS, 0x00000400
.equ	PWM_IRQ0_INTF_CH10_MSB, 10
.equ	PWM_IRQ0_INTF_CH10_LSB, 10
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTF_CH9
.equ	PWM_IRQ0_INTF_CH9_RESET, 0x0
.equ	PWM_IRQ0_INTF_CH9_BITS, 0x00000200
.equ	PWM_IRQ0_INTF_CH9_MSB, 9
.equ	PWM_IRQ0_INTF_CH9_LSB, 9
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTF_CH8
.equ	PWM_IRQ0_INTF_CH8_RESET, 0x0
.equ	PWM_IRQ0_INTF_CH8_BITS, 0x00000100
.equ	PWM_IRQ0_INTF_CH8_MSB, 8
.equ	PWM_IRQ0_INTF_CH8_LSB, 8
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTF_CH7
.equ	PWM_IRQ0_INTF_CH7_RESET, 0x0
.equ	PWM_IRQ0_INTF_CH7_BITS, 0x00000080
.equ	PWM_IRQ0_INTF_CH7_MSB, 7
.equ	PWM_IRQ0_INTF_CH7_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTF_CH6
.equ	PWM_IRQ0_INTF_CH6_RESET, 0x0
.equ	PWM_IRQ0_INTF_CH6_BITS, 0x00000040
.equ	PWM_IRQ0_INTF_CH6_MSB, 6
.equ	PWM_IRQ0_INTF_CH6_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTF_CH5
.equ	PWM_IRQ0_INTF_CH5_RESET, 0x0
.equ	PWM_IRQ0_INTF_CH5_BITS, 0x00000020
.equ	PWM_IRQ0_INTF_CH5_MSB, 5
.equ	PWM_IRQ0_INTF_CH5_LSB, 5
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTF_CH4
.equ	PWM_IRQ0_INTF_CH4_RESET, 0x0
.equ	PWM_IRQ0_INTF_CH4_BITS, 0x00000010
.equ	PWM_IRQ0_INTF_CH4_MSB, 4
.equ	PWM_IRQ0_INTF_CH4_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTF_CH3
.equ	PWM_IRQ0_INTF_CH3_RESET, 0x0
.equ	PWM_IRQ0_INTF_CH3_BITS, 0x00000008
.equ	PWM_IRQ0_INTF_CH3_MSB, 3
.equ	PWM_IRQ0_INTF_CH3_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTF_CH2
.equ	PWM_IRQ0_INTF_CH2_RESET, 0x0
.equ	PWM_IRQ0_INTF_CH2_BITS, 0x00000004
.equ	PWM_IRQ0_INTF_CH2_MSB, 2
.equ	PWM_IRQ0_INTF_CH2_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTF_CH1
.equ	PWM_IRQ0_INTF_CH1_RESET, 0x0
.equ	PWM_IRQ0_INTF_CH1_BITS, 0x00000002
.equ	PWM_IRQ0_INTF_CH1_MSB, 1
.equ	PWM_IRQ0_INTF_CH1_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTF_CH0
.equ	PWM_IRQ0_INTF_CH0_RESET, 0x0
.equ	PWM_IRQ0_INTF_CH0_BITS, 0x00000001
.equ	PWM_IRQ0_INTF_CH0_MSB, 0
.equ	PWM_IRQ0_INTF_CH0_LSB, 0
# =============================================================================
# Register    : PWM_IRQ0_INTS
# Description : Interrupt status after masking & forcing for irq0
.equ	PWM_IRQ0_INTS_OFFSET, 0x00000100
.equ	PWM_IRQ0_INTS_BITS, 0x00000fff
.equ	PWM_IRQ0_INTS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTS_CH11
.equ	PWM_IRQ0_INTS_CH11_RESET, 0x0
.equ	PWM_IRQ0_INTS_CH11_BITS, 0x00000800
.equ	PWM_IRQ0_INTS_CH11_MSB, 11
.equ	PWM_IRQ0_INTS_CH11_LSB, 11
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTS_CH10
.equ	PWM_IRQ0_INTS_CH10_RESET, 0x0
.equ	PWM_IRQ0_INTS_CH10_BITS, 0x00000400
.equ	PWM_IRQ0_INTS_CH10_MSB, 10
.equ	PWM_IRQ0_INTS_CH10_LSB, 10
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTS_CH9
.equ	PWM_IRQ0_INTS_CH9_RESET, 0x0
.equ	PWM_IRQ0_INTS_CH9_BITS, 0x00000200
.equ	PWM_IRQ0_INTS_CH9_MSB, 9
.equ	PWM_IRQ0_INTS_CH9_LSB, 9
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTS_CH8
.equ	PWM_IRQ0_INTS_CH8_RESET, 0x0
.equ	PWM_IRQ0_INTS_CH8_BITS, 0x00000100
.equ	PWM_IRQ0_INTS_CH8_MSB, 8
.equ	PWM_IRQ0_INTS_CH8_LSB, 8
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTS_CH7
.equ	PWM_IRQ0_INTS_CH7_RESET, 0x0
.equ	PWM_IRQ0_INTS_CH7_BITS, 0x00000080
.equ	PWM_IRQ0_INTS_CH7_MSB, 7
.equ	PWM_IRQ0_INTS_CH7_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTS_CH6
.equ	PWM_IRQ0_INTS_CH6_RESET, 0x0
.equ	PWM_IRQ0_INTS_CH6_BITS, 0x00000040
.equ	PWM_IRQ0_INTS_CH6_MSB, 6
.equ	PWM_IRQ0_INTS_CH6_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTS_CH5
.equ	PWM_IRQ0_INTS_CH5_RESET, 0x0
.equ	PWM_IRQ0_INTS_CH5_BITS, 0x00000020
.equ	PWM_IRQ0_INTS_CH5_MSB, 5
.equ	PWM_IRQ0_INTS_CH5_LSB, 5
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTS_CH4
.equ	PWM_IRQ0_INTS_CH4_RESET, 0x0
.equ	PWM_IRQ0_INTS_CH4_BITS, 0x00000010
.equ	PWM_IRQ0_INTS_CH4_MSB, 4
.equ	PWM_IRQ0_INTS_CH4_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTS_CH3
.equ	PWM_IRQ0_INTS_CH3_RESET, 0x0
.equ	PWM_IRQ0_INTS_CH3_BITS, 0x00000008
.equ	PWM_IRQ0_INTS_CH3_MSB, 3
.equ	PWM_IRQ0_INTS_CH3_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTS_CH2
.equ	PWM_IRQ0_INTS_CH2_RESET, 0x0
.equ	PWM_IRQ0_INTS_CH2_BITS, 0x00000004
.equ	PWM_IRQ0_INTS_CH2_MSB, 2
.equ	PWM_IRQ0_INTS_CH2_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTS_CH1
.equ	PWM_IRQ0_INTS_CH1_RESET, 0x0
.equ	PWM_IRQ0_INTS_CH1_BITS, 0x00000002
.equ	PWM_IRQ0_INTS_CH1_MSB, 1
.equ	PWM_IRQ0_INTS_CH1_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ0_INTS_CH0
.equ	PWM_IRQ0_INTS_CH0_RESET, 0x0
.equ	PWM_IRQ0_INTS_CH0_BITS, 0x00000001
.equ	PWM_IRQ0_INTS_CH0_MSB, 0
.equ	PWM_IRQ0_INTS_CH0_LSB, 0
# =============================================================================
# Register    : PWM_IRQ1_INTE
# Description : Interrupt Enable for irq1
.equ	PWM_IRQ1_INTE_OFFSET, 0x00000104
.equ	PWM_IRQ1_INTE_BITS, 0x00000fff
.equ	PWM_IRQ1_INTE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTE_CH11
.equ	PWM_IRQ1_INTE_CH11_RESET, 0x0
.equ	PWM_IRQ1_INTE_CH11_BITS, 0x00000800
.equ	PWM_IRQ1_INTE_CH11_MSB, 11
.equ	PWM_IRQ1_INTE_CH11_LSB, 11
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTE_CH10
.equ	PWM_IRQ1_INTE_CH10_RESET, 0x0
.equ	PWM_IRQ1_INTE_CH10_BITS, 0x00000400
.equ	PWM_IRQ1_INTE_CH10_MSB, 10
.equ	PWM_IRQ1_INTE_CH10_LSB, 10
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTE_CH9
.equ	PWM_IRQ1_INTE_CH9_RESET, 0x0
.equ	PWM_IRQ1_INTE_CH9_BITS, 0x00000200
.equ	PWM_IRQ1_INTE_CH9_MSB, 9
.equ	PWM_IRQ1_INTE_CH9_LSB, 9
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTE_CH8
.equ	PWM_IRQ1_INTE_CH8_RESET, 0x0
.equ	PWM_IRQ1_INTE_CH8_BITS, 0x00000100
.equ	PWM_IRQ1_INTE_CH8_MSB, 8
.equ	PWM_IRQ1_INTE_CH8_LSB, 8
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTE_CH7
.equ	PWM_IRQ1_INTE_CH7_RESET, 0x0
.equ	PWM_IRQ1_INTE_CH7_BITS, 0x00000080
.equ	PWM_IRQ1_INTE_CH7_MSB, 7
.equ	PWM_IRQ1_INTE_CH7_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTE_CH6
.equ	PWM_IRQ1_INTE_CH6_RESET, 0x0
.equ	PWM_IRQ1_INTE_CH6_BITS, 0x00000040
.equ	PWM_IRQ1_INTE_CH6_MSB, 6
.equ	PWM_IRQ1_INTE_CH6_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTE_CH5
.equ	PWM_IRQ1_INTE_CH5_RESET, 0x0
.equ	PWM_IRQ1_INTE_CH5_BITS, 0x00000020
.equ	PWM_IRQ1_INTE_CH5_MSB, 5
.equ	PWM_IRQ1_INTE_CH5_LSB, 5
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTE_CH4
.equ	PWM_IRQ1_INTE_CH4_RESET, 0x0
.equ	PWM_IRQ1_INTE_CH4_BITS, 0x00000010
.equ	PWM_IRQ1_INTE_CH4_MSB, 4
.equ	PWM_IRQ1_INTE_CH4_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTE_CH3
.equ	PWM_IRQ1_INTE_CH3_RESET, 0x0
.equ	PWM_IRQ1_INTE_CH3_BITS, 0x00000008
.equ	PWM_IRQ1_INTE_CH3_MSB, 3
.equ	PWM_IRQ1_INTE_CH3_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTE_CH2
.equ	PWM_IRQ1_INTE_CH2_RESET, 0x0
.equ	PWM_IRQ1_INTE_CH2_BITS, 0x00000004
.equ	PWM_IRQ1_INTE_CH2_MSB, 2
.equ	PWM_IRQ1_INTE_CH2_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTE_CH1
.equ	PWM_IRQ1_INTE_CH1_RESET, 0x0
.equ	PWM_IRQ1_INTE_CH1_BITS, 0x00000002
.equ	PWM_IRQ1_INTE_CH1_MSB, 1
.equ	PWM_IRQ1_INTE_CH1_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTE_CH0
.equ	PWM_IRQ1_INTE_CH0_RESET, 0x0
.equ	PWM_IRQ1_INTE_CH0_BITS, 0x00000001
.equ	PWM_IRQ1_INTE_CH0_MSB, 0
.equ	PWM_IRQ1_INTE_CH0_LSB, 0
# =============================================================================
# Register    : PWM_IRQ1_INTF
# Description : Interrupt Force for irq1
.equ	PWM_IRQ1_INTF_OFFSET, 0x00000108
.equ	PWM_IRQ1_INTF_BITS, 0x00000fff
.equ	PWM_IRQ1_INTF_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTF_CH11
.equ	PWM_IRQ1_INTF_CH11_RESET, 0x0
.equ	PWM_IRQ1_INTF_CH11_BITS, 0x00000800
.equ	PWM_IRQ1_INTF_CH11_MSB, 11
.equ	PWM_IRQ1_INTF_CH11_LSB, 11
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTF_CH10
.equ	PWM_IRQ1_INTF_CH10_RESET, 0x0
.equ	PWM_IRQ1_INTF_CH10_BITS, 0x00000400
.equ	PWM_IRQ1_INTF_CH10_MSB, 10
.equ	PWM_IRQ1_INTF_CH10_LSB, 10
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTF_CH9
.equ	PWM_IRQ1_INTF_CH9_RESET, 0x0
.equ	PWM_IRQ1_INTF_CH9_BITS, 0x00000200
.equ	PWM_IRQ1_INTF_CH9_MSB, 9
.equ	PWM_IRQ1_INTF_CH9_LSB, 9
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTF_CH8
.equ	PWM_IRQ1_INTF_CH8_RESET, 0x0
.equ	PWM_IRQ1_INTF_CH8_BITS, 0x00000100
.equ	PWM_IRQ1_INTF_CH8_MSB, 8
.equ	PWM_IRQ1_INTF_CH8_LSB, 8
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTF_CH7
.equ	PWM_IRQ1_INTF_CH7_RESET, 0x0
.equ	PWM_IRQ1_INTF_CH7_BITS, 0x00000080
.equ	PWM_IRQ1_INTF_CH7_MSB, 7
.equ	PWM_IRQ1_INTF_CH7_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTF_CH6
.equ	PWM_IRQ1_INTF_CH6_RESET, 0x0
.equ	PWM_IRQ1_INTF_CH6_BITS, 0x00000040
.equ	PWM_IRQ1_INTF_CH6_MSB, 6
.equ	PWM_IRQ1_INTF_CH6_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTF_CH5
.equ	PWM_IRQ1_INTF_CH5_RESET, 0x0
.equ	PWM_IRQ1_INTF_CH5_BITS, 0x00000020
.equ	PWM_IRQ1_INTF_CH5_MSB, 5
.equ	PWM_IRQ1_INTF_CH5_LSB, 5
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTF_CH4
.equ	PWM_IRQ1_INTF_CH4_RESET, 0x0
.equ	PWM_IRQ1_INTF_CH4_BITS, 0x00000010
.equ	PWM_IRQ1_INTF_CH4_MSB, 4
.equ	PWM_IRQ1_INTF_CH4_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTF_CH3
.equ	PWM_IRQ1_INTF_CH3_RESET, 0x0
.equ	PWM_IRQ1_INTF_CH3_BITS, 0x00000008
.equ	PWM_IRQ1_INTF_CH3_MSB, 3
.equ	PWM_IRQ1_INTF_CH3_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTF_CH2
.equ	PWM_IRQ1_INTF_CH2_RESET, 0x0
.equ	PWM_IRQ1_INTF_CH2_BITS, 0x00000004
.equ	PWM_IRQ1_INTF_CH2_MSB, 2
.equ	PWM_IRQ1_INTF_CH2_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTF_CH1
.equ	PWM_IRQ1_INTF_CH1_RESET, 0x0
.equ	PWM_IRQ1_INTF_CH1_BITS, 0x00000002
.equ	PWM_IRQ1_INTF_CH1_MSB, 1
.equ	PWM_IRQ1_INTF_CH1_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTF_CH0
.equ	PWM_IRQ1_INTF_CH0_RESET, 0x0
.equ	PWM_IRQ1_INTF_CH0_BITS, 0x00000001
.equ	PWM_IRQ1_INTF_CH0_MSB, 0
.equ	PWM_IRQ1_INTF_CH0_LSB, 0
# =============================================================================
# Register    : PWM_IRQ1_INTS
# Description : Interrupt status after masking & forcing for irq1
.equ	PWM_IRQ1_INTS_OFFSET, 0x0000010c
.equ	PWM_IRQ1_INTS_BITS, 0x00000fff
.equ	PWM_IRQ1_INTS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTS_CH11
.equ	PWM_IRQ1_INTS_CH11_RESET, 0x0
.equ	PWM_IRQ1_INTS_CH11_BITS, 0x00000800
.equ	PWM_IRQ1_INTS_CH11_MSB, 11
.equ	PWM_IRQ1_INTS_CH11_LSB, 11
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTS_CH10
.equ	PWM_IRQ1_INTS_CH10_RESET, 0x0
.equ	PWM_IRQ1_INTS_CH10_BITS, 0x00000400
.equ	PWM_IRQ1_INTS_CH10_MSB, 10
.equ	PWM_IRQ1_INTS_CH10_LSB, 10
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTS_CH9
.equ	PWM_IRQ1_INTS_CH9_RESET, 0x0
.equ	PWM_IRQ1_INTS_CH9_BITS, 0x00000200
.equ	PWM_IRQ1_INTS_CH9_MSB, 9
.equ	PWM_IRQ1_INTS_CH9_LSB, 9
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTS_CH8
.equ	PWM_IRQ1_INTS_CH8_RESET, 0x0
.equ	PWM_IRQ1_INTS_CH8_BITS, 0x00000100
.equ	PWM_IRQ1_INTS_CH8_MSB, 8
.equ	PWM_IRQ1_INTS_CH8_LSB, 8
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTS_CH7
.equ	PWM_IRQ1_INTS_CH7_RESET, 0x0
.equ	PWM_IRQ1_INTS_CH7_BITS, 0x00000080
.equ	PWM_IRQ1_INTS_CH7_MSB, 7
.equ	PWM_IRQ1_INTS_CH7_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTS_CH6
.equ	PWM_IRQ1_INTS_CH6_RESET, 0x0
.equ	PWM_IRQ1_INTS_CH6_BITS, 0x00000040
.equ	PWM_IRQ1_INTS_CH6_MSB, 6
.equ	PWM_IRQ1_INTS_CH6_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTS_CH5
.equ	PWM_IRQ1_INTS_CH5_RESET, 0x0
.equ	PWM_IRQ1_INTS_CH5_BITS, 0x00000020
.equ	PWM_IRQ1_INTS_CH5_MSB, 5
.equ	PWM_IRQ1_INTS_CH5_LSB, 5
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTS_CH4
.equ	PWM_IRQ1_INTS_CH4_RESET, 0x0
.equ	PWM_IRQ1_INTS_CH4_BITS, 0x00000010
.equ	PWM_IRQ1_INTS_CH4_MSB, 4
.equ	PWM_IRQ1_INTS_CH4_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTS_CH3
.equ	PWM_IRQ1_INTS_CH3_RESET, 0x0
.equ	PWM_IRQ1_INTS_CH3_BITS, 0x00000008
.equ	PWM_IRQ1_INTS_CH3_MSB, 3
.equ	PWM_IRQ1_INTS_CH3_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTS_CH2
.equ	PWM_IRQ1_INTS_CH2_RESET, 0x0
.equ	PWM_IRQ1_INTS_CH2_BITS, 0x00000004
.equ	PWM_IRQ1_INTS_CH2_MSB, 2
.equ	PWM_IRQ1_INTS_CH2_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTS_CH1
.equ	PWM_IRQ1_INTS_CH1_RESET, 0x0
.equ	PWM_IRQ1_INTS_CH1_BITS, 0x00000002
.equ	PWM_IRQ1_INTS_CH1_MSB, 1
.equ	PWM_IRQ1_INTS_CH1_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PWM_IRQ1_INTS_CH0
.equ	PWM_IRQ1_INTS_CH0_RESET, 0x0
.equ	PWM_IRQ1_INTS_CH0_BITS, 0x00000001
.equ	PWM_IRQ1_INTS_CH0_MSB, 0
.equ	PWM_IRQ1_INTS_CH0_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_PWM_H
