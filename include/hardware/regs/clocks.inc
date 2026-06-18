#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : CLOCKS
# Version        : 1
# Bus type       : apb
# =============================================================================
.ifndef	_HARDWARE_REGS_CLOCKS_H
.set	_HARDWARE_REGS_CLOCKS_H, 1
# =============================================================================
# Register    : CLOCKS_CLK_GPOUT0_CTRL
# Description : Clock control, can be changed on-the-fly (except for auxsrc)
.equ	CLOCKS_CLK_GPOUT0_CTRL_OFFSET, 0x00000000
.equ	CLOCKS_CLK_GPOUT0_CTRL_BITS, 0x10131de0
.equ	CLOCKS_CLK_GPOUT0_CTRL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT0_CTRL_ENABLED
# Description : clock generator is enabled
.equ	CLOCKS_CLK_GPOUT0_CTRL_ENABLED_RESET, 0x0
.equ	CLOCKS_CLK_GPOUT0_CTRL_ENABLED_BITS, 0x10000000
.equ	CLOCKS_CLK_GPOUT0_CTRL_ENABLED_MSB, 28
.equ	CLOCKS_CLK_GPOUT0_CTRL_ENABLED_LSB, 28
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT0_CTRL_NUDGE
# Description : An edge on this signal shifts the phase of the output by 1
#               cycle of the input clock
#               This can be done at any time
.equ	CLOCKS_CLK_GPOUT0_CTRL_NUDGE_RESET, 0x0
.equ	CLOCKS_CLK_GPOUT0_CTRL_NUDGE_BITS, 0x00100000
.equ	CLOCKS_CLK_GPOUT0_CTRL_NUDGE_MSB, 20
.equ	CLOCKS_CLK_GPOUT0_CTRL_NUDGE_LSB, 20
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT0_CTRL_PHASE
# Description : This delays the enable signal by up to 3 cycles of the input
#               clock
#               This must be set before the clock is enabled to have any effect
.equ	CLOCKS_CLK_GPOUT0_CTRL_PHASE_RESET, 0x0
.equ	CLOCKS_CLK_GPOUT0_CTRL_PHASE_BITS, 0x00030000
.equ	CLOCKS_CLK_GPOUT0_CTRL_PHASE_MSB, 17
.equ	CLOCKS_CLK_GPOUT0_CTRL_PHASE_LSB, 16
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT0_CTRL_DC50
# Description : Enables duty cycle correction for odd divisors, can be changed
#               on-the-fly
.equ	CLOCKS_CLK_GPOUT0_CTRL_DC50_RESET, 0x0
.equ	CLOCKS_CLK_GPOUT0_CTRL_DC50_BITS, 0x00001000
.equ	CLOCKS_CLK_GPOUT0_CTRL_DC50_MSB, 12
.equ	CLOCKS_CLK_GPOUT0_CTRL_DC50_LSB, 12
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT0_CTRL_ENABLE
# Description : Starts and stops the clock generator cleanly
.equ	CLOCKS_CLK_GPOUT0_CTRL_ENABLE_RESET, 0x0
.equ	CLOCKS_CLK_GPOUT0_CTRL_ENABLE_BITS, 0x00000800
.equ	CLOCKS_CLK_GPOUT0_CTRL_ENABLE_MSB, 11
.equ	CLOCKS_CLK_GPOUT0_CTRL_ENABLE_LSB, 11
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT0_CTRL_KILL
# Description : Asynchronously kills the clock generator, enable must be set
#               low before deasserting kill
.equ	CLOCKS_CLK_GPOUT0_CTRL_KILL_RESET, 0x0
.equ	CLOCKS_CLK_GPOUT0_CTRL_KILL_BITS, 0x00000400
.equ	CLOCKS_CLK_GPOUT0_CTRL_KILL_MSB, 10
.equ	CLOCKS_CLK_GPOUT0_CTRL_KILL_LSB, 10
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT0_CTRL_AUXSRC
# Description : Selects the auxiliary clock source, will glitch when switching
#               0x0 -> clksrc_pll_sys
#               0x1 -> clksrc_gpin0
#               0x2 -> clksrc_gpin1
#               0x3 -> clksrc_pll_usb
#               0x4 -> clksrc_pll_usb_primary_ref_opcg
#               0x5 -> rosc_clksrc
#               0x6 -> xosc_clksrc
#               0x7 -> lposc_clksrc
#               0x8 -> clk_sys
#               0x9 -> clk_usb
#               0xa -> clk_adc
#               0xb -> clk_ref
#               0xc -> clk_peri
#               0xd -> clk_hstx
#               0xe -> otp_clk2fc
.equ	CLOCKS_CLK_GPOUT0_CTRL_AUXSRC_RESET, 0x0
.equ	CLOCKS_CLK_GPOUT0_CTRL_AUXSRC_BITS, 0x000001e0
.equ	CLOCKS_CLK_GPOUT0_CTRL_AUXSRC_MSB, 8
.equ	CLOCKS_CLK_GPOUT0_CTRL_AUXSRC_LSB, 5
.equ	CLOCKS_CLK_GPOUT0_CTRL_AUXSRC_VALUE_CLKSRC_PLL_SYS, 0x0
.equ	CLOCKS_CLK_GPOUT0_CTRL_AUXSRC_VALUE_CLKSRC_GPIN0, 0x1
.equ	CLOCKS_CLK_GPOUT0_CTRL_AUXSRC_VALUE_CLKSRC_GPIN1, 0x2
.equ	CLOCKS_CLK_GPOUT0_CTRL_AUXSRC_VALUE_CLKSRC_PLL_USB, 0x3
.equ	CLOCKS_CLK_GPOUT0_CTRL_AUXSRC_VALUE_CLKSRC_PLL_USB_PRIMARY_REF_OPCG, 0x4
.equ	CLOCKS_CLK_GPOUT0_CTRL_AUXSRC_VALUE_ROSC_CLKSRC, 0x5
.equ	CLOCKS_CLK_GPOUT0_CTRL_AUXSRC_VALUE_XOSC_CLKSRC, 0x6
.equ	CLOCKS_CLK_GPOUT0_CTRL_AUXSRC_VALUE_LPOSC_CLKSRC, 0x7
.equ	CLOCKS_CLK_GPOUT0_CTRL_AUXSRC_VALUE_CLK_SYS, 0x8
.equ	CLOCKS_CLK_GPOUT0_CTRL_AUXSRC_VALUE_CLK_USB, 0x9
.equ	CLOCKS_CLK_GPOUT0_CTRL_AUXSRC_VALUE_CLK_ADC, 0xa
.equ	CLOCKS_CLK_GPOUT0_CTRL_AUXSRC_VALUE_CLK_REF, 0xb
.equ	CLOCKS_CLK_GPOUT0_CTRL_AUXSRC_VALUE_CLK_PERI, 0xc
.equ	CLOCKS_CLK_GPOUT0_CTRL_AUXSRC_VALUE_CLK_HSTX, 0xd
.equ	CLOCKS_CLK_GPOUT0_CTRL_AUXSRC_VALUE_OTP_CLK2FC, 0xe
# =============================================================================
# Register    : CLOCKS_CLK_GPOUT0_DIV
.equ	CLOCKS_CLK_GPOUT0_DIV_OFFSET, 0x00000004
.equ	CLOCKS_CLK_GPOUT0_DIV_BITS, 0xffffffff
.equ	CLOCKS_CLK_GPOUT0_DIV_RESET, 0x00010000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT0_DIV_INT
# Description : Integer part of clock divisor, 0 -> max+1, can be changed on-
#               the-fly
.equ	CLOCKS_CLK_GPOUT0_DIV_INT_RESET, 0x0001
.equ	CLOCKS_CLK_GPOUT0_DIV_INT_BITS, 0xffff0000
.equ	CLOCKS_CLK_GPOUT0_DIV_INT_MSB, 31
.equ	CLOCKS_CLK_GPOUT0_DIV_INT_LSB, 16
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT0_DIV_FRAC
# Description : Fractional component of the divisor, can be changed on-the-fly
.equ	CLOCKS_CLK_GPOUT0_DIV_FRAC_RESET, 0x0000
.equ	CLOCKS_CLK_GPOUT0_DIV_FRAC_BITS, 0x0000ffff
.equ	CLOCKS_CLK_GPOUT0_DIV_FRAC_MSB, 15
.equ	CLOCKS_CLK_GPOUT0_DIV_FRAC_LSB, 0
# =============================================================================
# Register    : CLOCKS_CLK_GPOUT0_SELECTED
# Description : Indicates which src is currently selected (one-hot)
#               This slice does not have a glitchless mux (only the AUX_SRC
#               field is present, not SRC) so this register is hardwired to
#               0x1.
.equ	CLOCKS_CLK_GPOUT0_SELECTED_OFFSET, 0x00000008
.equ	CLOCKS_CLK_GPOUT0_SELECTED_BITS, 0x00000001
.equ	CLOCKS_CLK_GPOUT0_SELECTED_RESET, 0x00000001
.equ	CLOCKS_CLK_GPOUT0_SELECTED_MSB, 0
.equ	CLOCKS_CLK_GPOUT0_SELECTED_LSB, 0
# =============================================================================
# Register    : CLOCKS_CLK_GPOUT1_CTRL
# Description : Clock control, can be changed on-the-fly (except for auxsrc)
.equ	CLOCKS_CLK_GPOUT1_CTRL_OFFSET, 0x0000000c
.equ	CLOCKS_CLK_GPOUT1_CTRL_BITS, 0x10131de0
.equ	CLOCKS_CLK_GPOUT1_CTRL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT1_CTRL_ENABLED
# Description : clock generator is enabled
.equ	CLOCKS_CLK_GPOUT1_CTRL_ENABLED_RESET, 0x0
.equ	CLOCKS_CLK_GPOUT1_CTRL_ENABLED_BITS, 0x10000000
.equ	CLOCKS_CLK_GPOUT1_CTRL_ENABLED_MSB, 28
.equ	CLOCKS_CLK_GPOUT1_CTRL_ENABLED_LSB, 28
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT1_CTRL_NUDGE
# Description : An edge on this signal shifts the phase of the output by 1
#               cycle of the input clock
#               This can be done at any time
.equ	CLOCKS_CLK_GPOUT1_CTRL_NUDGE_RESET, 0x0
.equ	CLOCKS_CLK_GPOUT1_CTRL_NUDGE_BITS, 0x00100000
.equ	CLOCKS_CLK_GPOUT1_CTRL_NUDGE_MSB, 20
.equ	CLOCKS_CLK_GPOUT1_CTRL_NUDGE_LSB, 20
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT1_CTRL_PHASE
# Description : This delays the enable signal by up to 3 cycles of the input
#               clock
#               This must be set before the clock is enabled to have any effect
.equ	CLOCKS_CLK_GPOUT1_CTRL_PHASE_RESET, 0x0
.equ	CLOCKS_CLK_GPOUT1_CTRL_PHASE_BITS, 0x00030000
.equ	CLOCKS_CLK_GPOUT1_CTRL_PHASE_MSB, 17
.equ	CLOCKS_CLK_GPOUT1_CTRL_PHASE_LSB, 16
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT1_CTRL_DC50
# Description : Enables duty cycle correction for odd divisors, can be changed
#               on-the-fly
.equ	CLOCKS_CLK_GPOUT1_CTRL_DC50_RESET, 0x0
.equ	CLOCKS_CLK_GPOUT1_CTRL_DC50_BITS, 0x00001000
.equ	CLOCKS_CLK_GPOUT1_CTRL_DC50_MSB, 12
.equ	CLOCKS_CLK_GPOUT1_CTRL_DC50_LSB, 12
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT1_CTRL_ENABLE
# Description : Starts and stops the clock generator cleanly
.equ	CLOCKS_CLK_GPOUT1_CTRL_ENABLE_RESET, 0x0
.equ	CLOCKS_CLK_GPOUT1_CTRL_ENABLE_BITS, 0x00000800
.equ	CLOCKS_CLK_GPOUT1_CTRL_ENABLE_MSB, 11
.equ	CLOCKS_CLK_GPOUT1_CTRL_ENABLE_LSB, 11
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT1_CTRL_KILL
# Description : Asynchronously kills the clock generator, enable must be set
#               low before deasserting kill
.equ	CLOCKS_CLK_GPOUT1_CTRL_KILL_RESET, 0x0
.equ	CLOCKS_CLK_GPOUT1_CTRL_KILL_BITS, 0x00000400
.equ	CLOCKS_CLK_GPOUT1_CTRL_KILL_MSB, 10
.equ	CLOCKS_CLK_GPOUT1_CTRL_KILL_LSB, 10
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT1_CTRL_AUXSRC
# Description : Selects the auxiliary clock source, will glitch when switching
#               0x0 -> clksrc_pll_sys
#               0x1 -> clksrc_gpin0
#               0x2 -> clksrc_gpin1
#               0x3 -> clksrc_pll_usb
#               0x4 -> clksrc_pll_usb_primary_ref_opcg
#               0x5 -> rosc_clksrc
#               0x6 -> xosc_clksrc
#               0x7 -> lposc_clksrc
#               0x8 -> clk_sys
#               0x9 -> clk_usb
#               0xa -> clk_adc
#               0xb -> clk_ref
#               0xc -> clk_peri
#               0xd -> clk_hstx
#               0xe -> otp_clk2fc
.equ	CLOCKS_CLK_GPOUT1_CTRL_AUXSRC_RESET, 0x0
.equ	CLOCKS_CLK_GPOUT1_CTRL_AUXSRC_BITS, 0x000001e0
.equ	CLOCKS_CLK_GPOUT1_CTRL_AUXSRC_MSB, 8
.equ	CLOCKS_CLK_GPOUT1_CTRL_AUXSRC_LSB, 5
.equ	CLOCKS_CLK_GPOUT1_CTRL_AUXSRC_VALUE_CLKSRC_PLL_SYS, 0x0
.equ	CLOCKS_CLK_GPOUT1_CTRL_AUXSRC_VALUE_CLKSRC_GPIN0, 0x1
.equ	CLOCKS_CLK_GPOUT1_CTRL_AUXSRC_VALUE_CLKSRC_GPIN1, 0x2
.equ	CLOCKS_CLK_GPOUT1_CTRL_AUXSRC_VALUE_CLKSRC_PLL_USB, 0x3
.equ	CLOCKS_CLK_GPOUT1_CTRL_AUXSRC_VALUE_CLKSRC_PLL_USB_PRIMARY_REF_OPCG, 0x4
.equ	CLOCKS_CLK_GPOUT1_CTRL_AUXSRC_VALUE_ROSC_CLKSRC, 0x5
.equ	CLOCKS_CLK_GPOUT1_CTRL_AUXSRC_VALUE_XOSC_CLKSRC, 0x6
.equ	CLOCKS_CLK_GPOUT1_CTRL_AUXSRC_VALUE_LPOSC_CLKSRC, 0x7
.equ	CLOCKS_CLK_GPOUT1_CTRL_AUXSRC_VALUE_CLK_SYS, 0x8
.equ	CLOCKS_CLK_GPOUT1_CTRL_AUXSRC_VALUE_CLK_USB, 0x9
.equ	CLOCKS_CLK_GPOUT1_CTRL_AUXSRC_VALUE_CLK_ADC, 0xa
.equ	CLOCKS_CLK_GPOUT1_CTRL_AUXSRC_VALUE_CLK_REF, 0xb
.equ	CLOCKS_CLK_GPOUT1_CTRL_AUXSRC_VALUE_CLK_PERI, 0xc
.equ	CLOCKS_CLK_GPOUT1_CTRL_AUXSRC_VALUE_CLK_HSTX, 0xd
.equ	CLOCKS_CLK_GPOUT1_CTRL_AUXSRC_VALUE_OTP_CLK2FC, 0xe
# =============================================================================
# Register    : CLOCKS_CLK_GPOUT1_DIV
.equ	CLOCKS_CLK_GPOUT1_DIV_OFFSET, 0x00000010
.equ	CLOCKS_CLK_GPOUT1_DIV_BITS, 0xffffffff
.equ	CLOCKS_CLK_GPOUT1_DIV_RESET, 0x00010000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT1_DIV_INT
# Description : Integer part of clock divisor, 0 -> max+1, can be changed on-
#               the-fly
.equ	CLOCKS_CLK_GPOUT1_DIV_INT_RESET, 0x0001
.equ	CLOCKS_CLK_GPOUT1_DIV_INT_BITS, 0xffff0000
.equ	CLOCKS_CLK_GPOUT1_DIV_INT_MSB, 31
.equ	CLOCKS_CLK_GPOUT1_DIV_INT_LSB, 16
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT1_DIV_FRAC
# Description : Fractional component of the divisor, can be changed on-the-fly
.equ	CLOCKS_CLK_GPOUT1_DIV_FRAC_RESET, 0x0000
.equ	CLOCKS_CLK_GPOUT1_DIV_FRAC_BITS, 0x0000ffff
.equ	CLOCKS_CLK_GPOUT1_DIV_FRAC_MSB, 15
.equ	CLOCKS_CLK_GPOUT1_DIV_FRAC_LSB, 0
# =============================================================================
# Register    : CLOCKS_CLK_GPOUT1_SELECTED
# Description : Indicates which src is currently selected (one-hot)
#               This slice does not have a glitchless mux (only the AUX_SRC
#               field is present, not SRC) so this register is hardwired to
#               0x1.
.equ	CLOCKS_CLK_GPOUT1_SELECTED_OFFSET, 0x00000014
.equ	CLOCKS_CLK_GPOUT1_SELECTED_BITS, 0x00000001
.equ	CLOCKS_CLK_GPOUT1_SELECTED_RESET, 0x00000001
.equ	CLOCKS_CLK_GPOUT1_SELECTED_MSB, 0
.equ	CLOCKS_CLK_GPOUT1_SELECTED_LSB, 0
# =============================================================================
# Register    : CLOCKS_CLK_GPOUT2_CTRL
# Description : Clock control, can be changed on-the-fly (except for auxsrc)
.equ	CLOCKS_CLK_GPOUT2_CTRL_OFFSET, 0x00000018
.equ	CLOCKS_CLK_GPOUT2_CTRL_BITS, 0x10131de0
.equ	CLOCKS_CLK_GPOUT2_CTRL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT2_CTRL_ENABLED
# Description : clock generator is enabled
.equ	CLOCKS_CLK_GPOUT2_CTRL_ENABLED_RESET, 0x0
.equ	CLOCKS_CLK_GPOUT2_CTRL_ENABLED_BITS, 0x10000000
.equ	CLOCKS_CLK_GPOUT2_CTRL_ENABLED_MSB, 28
.equ	CLOCKS_CLK_GPOUT2_CTRL_ENABLED_LSB, 28
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT2_CTRL_NUDGE
# Description : An edge on this signal shifts the phase of the output by 1
#               cycle of the input clock
#               This can be done at any time
.equ	CLOCKS_CLK_GPOUT2_CTRL_NUDGE_RESET, 0x0
.equ	CLOCKS_CLK_GPOUT2_CTRL_NUDGE_BITS, 0x00100000
.equ	CLOCKS_CLK_GPOUT2_CTRL_NUDGE_MSB, 20
.equ	CLOCKS_CLK_GPOUT2_CTRL_NUDGE_LSB, 20
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT2_CTRL_PHASE
# Description : This delays the enable signal by up to 3 cycles of the input
#               clock
#               This must be set before the clock is enabled to have any effect
.equ	CLOCKS_CLK_GPOUT2_CTRL_PHASE_RESET, 0x0
.equ	CLOCKS_CLK_GPOUT2_CTRL_PHASE_BITS, 0x00030000
.equ	CLOCKS_CLK_GPOUT2_CTRL_PHASE_MSB, 17
.equ	CLOCKS_CLK_GPOUT2_CTRL_PHASE_LSB, 16
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT2_CTRL_DC50
# Description : Enables duty cycle correction for odd divisors, can be changed
#               on-the-fly
.equ	CLOCKS_CLK_GPOUT2_CTRL_DC50_RESET, 0x0
.equ	CLOCKS_CLK_GPOUT2_CTRL_DC50_BITS, 0x00001000
.equ	CLOCKS_CLK_GPOUT2_CTRL_DC50_MSB, 12
.equ	CLOCKS_CLK_GPOUT2_CTRL_DC50_LSB, 12
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT2_CTRL_ENABLE
# Description : Starts and stops the clock generator cleanly
.equ	CLOCKS_CLK_GPOUT2_CTRL_ENABLE_RESET, 0x0
.equ	CLOCKS_CLK_GPOUT2_CTRL_ENABLE_BITS, 0x00000800
.equ	CLOCKS_CLK_GPOUT2_CTRL_ENABLE_MSB, 11
.equ	CLOCKS_CLK_GPOUT2_CTRL_ENABLE_LSB, 11
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT2_CTRL_KILL
# Description : Asynchronously kills the clock generator, enable must be set
#               low before deasserting kill
.equ	CLOCKS_CLK_GPOUT2_CTRL_KILL_RESET, 0x0
.equ	CLOCKS_CLK_GPOUT2_CTRL_KILL_BITS, 0x00000400
.equ	CLOCKS_CLK_GPOUT2_CTRL_KILL_MSB, 10
.equ	CLOCKS_CLK_GPOUT2_CTRL_KILL_LSB, 10
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT2_CTRL_AUXSRC
# Description : Selects the auxiliary clock source, will glitch when switching
#               0x0 -> clksrc_pll_sys
#               0x1 -> clksrc_gpin0
#               0x2 -> clksrc_gpin1
#               0x3 -> clksrc_pll_usb
#               0x4 -> clksrc_pll_usb_primary_ref_opcg
#               0x5 -> rosc_clksrc_ph
#               0x6 -> xosc_clksrc
#               0x7 -> lposc_clksrc
#               0x8 -> clk_sys
#               0x9 -> clk_usb
#               0xa -> clk_adc
#               0xb -> clk_ref
#               0xc -> clk_peri
#               0xd -> clk_hstx
#               0xe -> otp_clk2fc
.equ	CLOCKS_CLK_GPOUT2_CTRL_AUXSRC_RESET, 0x0
.equ	CLOCKS_CLK_GPOUT2_CTRL_AUXSRC_BITS, 0x000001e0
.equ	CLOCKS_CLK_GPOUT2_CTRL_AUXSRC_MSB, 8
.equ	CLOCKS_CLK_GPOUT2_CTRL_AUXSRC_LSB, 5
.equ	CLOCKS_CLK_GPOUT2_CTRL_AUXSRC_VALUE_CLKSRC_PLL_SYS, 0x0
.equ	CLOCKS_CLK_GPOUT2_CTRL_AUXSRC_VALUE_CLKSRC_GPIN0, 0x1
.equ	CLOCKS_CLK_GPOUT2_CTRL_AUXSRC_VALUE_CLKSRC_GPIN1, 0x2
.equ	CLOCKS_CLK_GPOUT2_CTRL_AUXSRC_VALUE_CLKSRC_PLL_USB, 0x3
.equ	CLOCKS_CLK_GPOUT2_CTRL_AUXSRC_VALUE_CLKSRC_PLL_USB_PRIMARY_REF_OPCG, 0x4
.equ	CLOCKS_CLK_GPOUT2_CTRL_AUXSRC_VALUE_ROSC_CLKSRC_PH, 0x5
.equ	CLOCKS_CLK_GPOUT2_CTRL_AUXSRC_VALUE_XOSC_CLKSRC, 0x6
.equ	CLOCKS_CLK_GPOUT2_CTRL_AUXSRC_VALUE_LPOSC_CLKSRC, 0x7
.equ	CLOCKS_CLK_GPOUT2_CTRL_AUXSRC_VALUE_CLK_SYS, 0x8
.equ	CLOCKS_CLK_GPOUT2_CTRL_AUXSRC_VALUE_CLK_USB, 0x9
.equ	CLOCKS_CLK_GPOUT2_CTRL_AUXSRC_VALUE_CLK_ADC, 0xa
.equ	CLOCKS_CLK_GPOUT2_CTRL_AUXSRC_VALUE_CLK_REF, 0xb
.equ	CLOCKS_CLK_GPOUT2_CTRL_AUXSRC_VALUE_CLK_PERI, 0xc
.equ	CLOCKS_CLK_GPOUT2_CTRL_AUXSRC_VALUE_CLK_HSTX, 0xd
.equ	CLOCKS_CLK_GPOUT2_CTRL_AUXSRC_VALUE_OTP_CLK2FC, 0xe
# =============================================================================
# Register    : CLOCKS_CLK_GPOUT2_DIV
.equ	CLOCKS_CLK_GPOUT2_DIV_OFFSET, 0x0000001c
.equ	CLOCKS_CLK_GPOUT2_DIV_BITS, 0xffffffff
.equ	CLOCKS_CLK_GPOUT2_DIV_RESET, 0x00010000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT2_DIV_INT
# Description : Integer part of clock divisor, 0 -> max+1, can be changed on-
#               the-fly
.equ	CLOCKS_CLK_GPOUT2_DIV_INT_RESET, 0x0001
.equ	CLOCKS_CLK_GPOUT2_DIV_INT_BITS, 0xffff0000
.equ	CLOCKS_CLK_GPOUT2_DIV_INT_MSB, 31
.equ	CLOCKS_CLK_GPOUT2_DIV_INT_LSB, 16
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT2_DIV_FRAC
# Description : Fractional component of the divisor, can be changed on-the-fly
.equ	CLOCKS_CLK_GPOUT2_DIV_FRAC_RESET, 0x0000
.equ	CLOCKS_CLK_GPOUT2_DIV_FRAC_BITS, 0x0000ffff
.equ	CLOCKS_CLK_GPOUT2_DIV_FRAC_MSB, 15
.equ	CLOCKS_CLK_GPOUT2_DIV_FRAC_LSB, 0
# =============================================================================
# Register    : CLOCKS_CLK_GPOUT2_SELECTED
# Description : Indicates which src is currently selected (one-hot)
#               This slice does not have a glitchless mux (only the AUX_SRC
#               field is present, not SRC) so this register is hardwired to
#               0x1.
.equ	CLOCKS_CLK_GPOUT2_SELECTED_OFFSET, 0x00000020
.equ	CLOCKS_CLK_GPOUT2_SELECTED_BITS, 0x00000001
.equ	CLOCKS_CLK_GPOUT2_SELECTED_RESET, 0x00000001
.equ	CLOCKS_CLK_GPOUT2_SELECTED_MSB, 0
.equ	CLOCKS_CLK_GPOUT2_SELECTED_LSB, 0
# =============================================================================
# Register    : CLOCKS_CLK_GPOUT3_CTRL
# Description : Clock control, can be changed on-the-fly (except for auxsrc)
.equ	CLOCKS_CLK_GPOUT3_CTRL_OFFSET, 0x00000024
.equ	CLOCKS_CLK_GPOUT3_CTRL_BITS, 0x10131de0
.equ	CLOCKS_CLK_GPOUT3_CTRL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT3_CTRL_ENABLED
# Description : clock generator is enabled
.equ	CLOCKS_CLK_GPOUT3_CTRL_ENABLED_RESET, 0x0
.equ	CLOCKS_CLK_GPOUT3_CTRL_ENABLED_BITS, 0x10000000
.equ	CLOCKS_CLK_GPOUT3_CTRL_ENABLED_MSB, 28
.equ	CLOCKS_CLK_GPOUT3_CTRL_ENABLED_LSB, 28
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT3_CTRL_NUDGE
# Description : An edge on this signal shifts the phase of the output by 1
#               cycle of the input clock
#               This can be done at any time
.equ	CLOCKS_CLK_GPOUT3_CTRL_NUDGE_RESET, 0x0
.equ	CLOCKS_CLK_GPOUT3_CTRL_NUDGE_BITS, 0x00100000
.equ	CLOCKS_CLK_GPOUT3_CTRL_NUDGE_MSB, 20
.equ	CLOCKS_CLK_GPOUT3_CTRL_NUDGE_LSB, 20
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT3_CTRL_PHASE
# Description : This delays the enable signal by up to 3 cycles of the input
#               clock
#               This must be set before the clock is enabled to have any effect
.equ	CLOCKS_CLK_GPOUT3_CTRL_PHASE_RESET, 0x0
.equ	CLOCKS_CLK_GPOUT3_CTRL_PHASE_BITS, 0x00030000
.equ	CLOCKS_CLK_GPOUT3_CTRL_PHASE_MSB, 17
.equ	CLOCKS_CLK_GPOUT3_CTRL_PHASE_LSB, 16
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT3_CTRL_DC50
# Description : Enables duty cycle correction for odd divisors, can be changed
#               on-the-fly
.equ	CLOCKS_CLK_GPOUT3_CTRL_DC50_RESET, 0x0
.equ	CLOCKS_CLK_GPOUT3_CTRL_DC50_BITS, 0x00001000
.equ	CLOCKS_CLK_GPOUT3_CTRL_DC50_MSB, 12
.equ	CLOCKS_CLK_GPOUT3_CTRL_DC50_LSB, 12
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT3_CTRL_ENABLE
# Description : Starts and stops the clock generator cleanly
.equ	CLOCKS_CLK_GPOUT3_CTRL_ENABLE_RESET, 0x0
.equ	CLOCKS_CLK_GPOUT3_CTRL_ENABLE_BITS, 0x00000800
.equ	CLOCKS_CLK_GPOUT3_CTRL_ENABLE_MSB, 11
.equ	CLOCKS_CLK_GPOUT3_CTRL_ENABLE_LSB, 11
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT3_CTRL_KILL
# Description : Asynchronously kills the clock generator, enable must be set
#               low before deasserting kill
.equ	CLOCKS_CLK_GPOUT3_CTRL_KILL_RESET, 0x0
.equ	CLOCKS_CLK_GPOUT3_CTRL_KILL_BITS, 0x00000400
.equ	CLOCKS_CLK_GPOUT3_CTRL_KILL_MSB, 10
.equ	CLOCKS_CLK_GPOUT3_CTRL_KILL_LSB, 10
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT3_CTRL_AUXSRC
# Description : Selects the auxiliary clock source, will glitch when switching
#               0x0 -> clksrc_pll_sys
#               0x1 -> clksrc_gpin0
#               0x2 -> clksrc_gpin1
#               0x3 -> clksrc_pll_usb
#               0x4 -> clksrc_pll_usb_primary_ref_opcg
#               0x5 -> rosc_clksrc_ph
#               0x6 -> xosc_clksrc
#               0x7 -> lposc_clksrc
#               0x8 -> clk_sys
#               0x9 -> clk_usb
#               0xa -> clk_adc
#               0xb -> clk_ref
#               0xc -> clk_peri
#               0xd -> clk_hstx
#               0xe -> otp_clk2fc
.equ	CLOCKS_CLK_GPOUT3_CTRL_AUXSRC_RESET, 0x0
.equ	CLOCKS_CLK_GPOUT3_CTRL_AUXSRC_BITS, 0x000001e0
.equ	CLOCKS_CLK_GPOUT3_CTRL_AUXSRC_MSB, 8
.equ	CLOCKS_CLK_GPOUT3_CTRL_AUXSRC_LSB, 5
.equ	CLOCKS_CLK_GPOUT3_CTRL_AUXSRC_VALUE_CLKSRC_PLL_SYS, 0x0
.equ	CLOCKS_CLK_GPOUT3_CTRL_AUXSRC_VALUE_CLKSRC_GPIN0, 0x1
.equ	CLOCKS_CLK_GPOUT3_CTRL_AUXSRC_VALUE_CLKSRC_GPIN1, 0x2
.equ	CLOCKS_CLK_GPOUT3_CTRL_AUXSRC_VALUE_CLKSRC_PLL_USB, 0x3
.equ	CLOCKS_CLK_GPOUT3_CTRL_AUXSRC_VALUE_CLKSRC_PLL_USB_PRIMARY_REF_OPCG, 0x4
.equ	CLOCKS_CLK_GPOUT3_CTRL_AUXSRC_VALUE_ROSC_CLKSRC_PH, 0x5
.equ	CLOCKS_CLK_GPOUT3_CTRL_AUXSRC_VALUE_XOSC_CLKSRC, 0x6
.equ	CLOCKS_CLK_GPOUT3_CTRL_AUXSRC_VALUE_LPOSC_CLKSRC, 0x7
.equ	CLOCKS_CLK_GPOUT3_CTRL_AUXSRC_VALUE_CLK_SYS, 0x8
.equ	CLOCKS_CLK_GPOUT3_CTRL_AUXSRC_VALUE_CLK_USB, 0x9
.equ	CLOCKS_CLK_GPOUT3_CTRL_AUXSRC_VALUE_CLK_ADC, 0xa
.equ	CLOCKS_CLK_GPOUT3_CTRL_AUXSRC_VALUE_CLK_REF, 0xb
.equ	CLOCKS_CLK_GPOUT3_CTRL_AUXSRC_VALUE_CLK_PERI, 0xc
.equ	CLOCKS_CLK_GPOUT3_CTRL_AUXSRC_VALUE_CLK_HSTX, 0xd
.equ	CLOCKS_CLK_GPOUT3_CTRL_AUXSRC_VALUE_OTP_CLK2FC, 0xe
# =============================================================================
# Register    : CLOCKS_CLK_GPOUT3_DIV
.equ	CLOCKS_CLK_GPOUT3_DIV_OFFSET, 0x00000028
.equ	CLOCKS_CLK_GPOUT3_DIV_BITS, 0xffffffff
.equ	CLOCKS_CLK_GPOUT3_DIV_RESET, 0x00010000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT3_DIV_INT
# Description : Integer part of clock divisor, 0 -> max+1, can be changed on-
#               the-fly
.equ	CLOCKS_CLK_GPOUT3_DIV_INT_RESET, 0x0001
.equ	CLOCKS_CLK_GPOUT3_DIV_INT_BITS, 0xffff0000
.equ	CLOCKS_CLK_GPOUT3_DIV_INT_MSB, 31
.equ	CLOCKS_CLK_GPOUT3_DIV_INT_LSB, 16
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_GPOUT3_DIV_FRAC
# Description : Fractional component of the divisor, can be changed on-the-fly
.equ	CLOCKS_CLK_GPOUT3_DIV_FRAC_RESET, 0x0000
.equ	CLOCKS_CLK_GPOUT3_DIV_FRAC_BITS, 0x0000ffff
.equ	CLOCKS_CLK_GPOUT3_DIV_FRAC_MSB, 15
.equ	CLOCKS_CLK_GPOUT3_DIV_FRAC_LSB, 0
# =============================================================================
# Register    : CLOCKS_CLK_GPOUT3_SELECTED
# Description : Indicates which src is currently selected (one-hot)
#               This slice does not have a glitchless mux (only the AUX_SRC
#               field is present, not SRC) so this register is hardwired to
#               0x1.
.equ	CLOCKS_CLK_GPOUT3_SELECTED_OFFSET, 0x0000002c
.equ	CLOCKS_CLK_GPOUT3_SELECTED_BITS, 0x00000001
.equ	CLOCKS_CLK_GPOUT3_SELECTED_RESET, 0x00000001
.equ	CLOCKS_CLK_GPOUT3_SELECTED_MSB, 0
.equ	CLOCKS_CLK_GPOUT3_SELECTED_LSB, 0
# =============================================================================
# Register    : CLOCKS_CLK_REF_CTRL
# Description : Clock control, can be changed on-the-fly (except for auxsrc)
.equ	CLOCKS_CLK_REF_CTRL_OFFSET, 0x00000030
.equ	CLOCKS_CLK_REF_CTRL_BITS, 0x00000063
.equ	CLOCKS_CLK_REF_CTRL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_REF_CTRL_AUXSRC
# Description : Selects the auxiliary clock source, will glitch when switching
#               0x0 -> clksrc_pll_usb
#               0x1 -> clksrc_gpin0
#               0x2 -> clksrc_gpin1
#               0x3 -> clksrc_pll_usb_primary_ref_opcg
.equ	CLOCKS_CLK_REF_CTRL_AUXSRC_RESET, 0x0
.equ	CLOCKS_CLK_REF_CTRL_AUXSRC_BITS, 0x00000060
.equ	CLOCKS_CLK_REF_CTRL_AUXSRC_MSB, 6
.equ	CLOCKS_CLK_REF_CTRL_AUXSRC_LSB, 5
.equ	CLOCKS_CLK_REF_CTRL_AUXSRC_VALUE_CLKSRC_PLL_USB, 0x0
.equ	CLOCKS_CLK_REF_CTRL_AUXSRC_VALUE_CLKSRC_GPIN0, 0x1
.equ	CLOCKS_CLK_REF_CTRL_AUXSRC_VALUE_CLKSRC_GPIN1, 0x2
.equ	CLOCKS_CLK_REF_CTRL_AUXSRC_VALUE_CLKSRC_PLL_USB_PRIMARY_REF_OPCG, 0x3
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_REF_CTRL_SRC
# Description : Selects the clock source glitchlessly, can be changed on-the-
#               fly
#               0x0 -> rosc_clksrc_ph
#               0x1 -> clksrc_clk_ref_aux
#               0x2 -> xosc_clksrc
#               0x3 -> lposc_clksrc
.equ	CLOCKS_CLK_REF_CTRL_SRC_BITS, 0x00000003
.equ	CLOCKS_CLK_REF_CTRL_SRC_MSB, 1
.equ	CLOCKS_CLK_REF_CTRL_SRC_LSB, 0
.equ	CLOCKS_CLK_REF_CTRL_SRC_VALUE_ROSC_CLKSRC_PH, 0x0
.equ	CLOCKS_CLK_REF_CTRL_SRC_VALUE_CLKSRC_CLK_REF_AUX, 0x1
.equ	CLOCKS_CLK_REF_CTRL_SRC_VALUE_XOSC_CLKSRC, 0x2
.equ	CLOCKS_CLK_REF_CTRL_SRC_VALUE_LPOSC_CLKSRC, 0x3
# =============================================================================
# Register    : CLOCKS_CLK_REF_DIV
.equ	CLOCKS_CLK_REF_DIV_OFFSET, 0x00000034
.equ	CLOCKS_CLK_REF_DIV_BITS, 0x00ff0000
.equ	CLOCKS_CLK_REF_DIV_RESET, 0x00010000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_REF_DIV_INT
# Description : Integer part of clock divisor, 0 -> max+1, can be changed on-
#               the-fly
.equ	CLOCKS_CLK_REF_DIV_INT_RESET, 0x01
.equ	CLOCKS_CLK_REF_DIV_INT_BITS, 0x00ff0000
.equ	CLOCKS_CLK_REF_DIV_INT_MSB, 23
.equ	CLOCKS_CLK_REF_DIV_INT_LSB, 16
# =============================================================================
# Register    : CLOCKS_CLK_REF_SELECTED
# Description : Indicates which src is currently selected (one-hot)
#               The glitchless multiplexer does not switch instantaneously (to
#               avoid glitches), so software should poll this register to wait
#               for the switch to complete. This register contains one decoded
#               bit for each of the clock sources enumerated in the CTRL SRC
#               field. At most one of these bits will be set at any time,
#               indicating that clock is currently present at the output of the
#               glitchless mux. Whilst switching is in progress, this register
#               may briefly show all-0s.
.equ	CLOCKS_CLK_REF_SELECTED_OFFSET, 0x00000038
.equ	CLOCKS_CLK_REF_SELECTED_BITS, 0x0000000f
.equ	CLOCKS_CLK_REF_SELECTED_RESET, 0x00000001
.equ	CLOCKS_CLK_REF_SELECTED_MSB, 3
.equ	CLOCKS_CLK_REF_SELECTED_LSB, 0
# =============================================================================
# Register    : CLOCKS_CLK_SYS_CTRL
# Description : Clock control, can be changed on-the-fly (except for auxsrc)
.equ	CLOCKS_CLK_SYS_CTRL_OFFSET, 0x0000003c
.equ	CLOCKS_CLK_SYS_CTRL_BITS, 0x000000e1
.equ	CLOCKS_CLK_SYS_CTRL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_SYS_CTRL_AUXSRC
# Description : Selects the auxiliary clock source, will glitch when switching
#               0x0 -> clksrc_pll_sys
#               0x1 -> clksrc_pll_usb
#               0x2 -> rosc_clksrc
#               0x3 -> xosc_clksrc
#               0x4 -> clksrc_gpin0
#               0x5 -> clksrc_gpin1
.equ	CLOCKS_CLK_SYS_CTRL_AUXSRC_RESET, 0x0
.equ	CLOCKS_CLK_SYS_CTRL_AUXSRC_BITS, 0x000000e0
.equ	CLOCKS_CLK_SYS_CTRL_AUXSRC_MSB, 7
.equ	CLOCKS_CLK_SYS_CTRL_AUXSRC_LSB, 5
.equ	CLOCKS_CLK_SYS_CTRL_AUXSRC_VALUE_CLKSRC_PLL_SYS, 0x0
.equ	CLOCKS_CLK_SYS_CTRL_AUXSRC_VALUE_CLKSRC_PLL_USB, 0x1
.equ	CLOCKS_CLK_SYS_CTRL_AUXSRC_VALUE_ROSC_CLKSRC, 0x2
.equ	CLOCKS_CLK_SYS_CTRL_AUXSRC_VALUE_XOSC_CLKSRC, 0x3
.equ	CLOCKS_CLK_SYS_CTRL_AUXSRC_VALUE_CLKSRC_GPIN0, 0x4
.equ	CLOCKS_CLK_SYS_CTRL_AUXSRC_VALUE_CLKSRC_GPIN1, 0x5
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_SYS_CTRL_SRC
# Description : Selects the clock source glitchlessly, can be changed on-the-
#               fly
#               0x0 -> clk_ref
#               0x1 -> clksrc_clk_sys_aux
.equ	CLOCKS_CLK_SYS_CTRL_SRC_RESET, 0x0
.equ	CLOCKS_CLK_SYS_CTRL_SRC_BITS, 0x00000001
.equ	CLOCKS_CLK_SYS_CTRL_SRC_MSB, 0
.equ	CLOCKS_CLK_SYS_CTRL_SRC_LSB, 0
.equ	CLOCKS_CLK_SYS_CTRL_SRC_VALUE_CLK_REF, 0x0
.equ	CLOCKS_CLK_SYS_CTRL_SRC_VALUE_CLKSRC_CLK_SYS_AUX, 0x1
# =============================================================================
# Register    : CLOCKS_CLK_SYS_DIV
.equ	CLOCKS_CLK_SYS_DIV_OFFSET, 0x00000040
.equ	CLOCKS_CLK_SYS_DIV_BITS, 0xffffffff
.equ	CLOCKS_CLK_SYS_DIV_RESET, 0x00010000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_SYS_DIV_INT
# Description : Integer part of clock divisor, 0 -> max+1, can be changed on-
#               the-fly
.equ	CLOCKS_CLK_SYS_DIV_INT_RESET, 0x0001
.equ	CLOCKS_CLK_SYS_DIV_INT_BITS, 0xffff0000
.equ	CLOCKS_CLK_SYS_DIV_INT_MSB, 31
.equ	CLOCKS_CLK_SYS_DIV_INT_LSB, 16
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_SYS_DIV_FRAC
# Description : Fractional component of the divisor, can be changed on-the-fly
.equ	CLOCKS_CLK_SYS_DIV_FRAC_RESET, 0x0000
.equ	CLOCKS_CLK_SYS_DIV_FRAC_BITS, 0x0000ffff
.equ	CLOCKS_CLK_SYS_DIV_FRAC_MSB, 15
.equ	CLOCKS_CLK_SYS_DIV_FRAC_LSB, 0
# =============================================================================
# Register    : CLOCKS_CLK_SYS_SELECTED
# Description : Indicates which src is currently selected (one-hot)
#               The glitchless multiplexer does not switch instantaneously (to
#               avoid glitches), so software should poll this register to wait
#               for the switch to complete. This register contains one decoded
#               bit for each of the clock sources enumerated in the CTRL SRC
#               field. At most one of these bits will be set at any time,
#               indicating that clock is currently present at the output of the
#               glitchless mux. Whilst switching is in progress, this register
#               may briefly show all-0s.
.equ	CLOCKS_CLK_SYS_SELECTED_OFFSET, 0x00000044
.equ	CLOCKS_CLK_SYS_SELECTED_BITS, 0x00000003
.equ	CLOCKS_CLK_SYS_SELECTED_RESET, 0x00000001
.equ	CLOCKS_CLK_SYS_SELECTED_MSB, 1
.equ	CLOCKS_CLK_SYS_SELECTED_LSB, 0
# =============================================================================
# Register    : CLOCKS_CLK_PERI_CTRL
# Description : Clock control, can be changed on-the-fly (except for auxsrc)
.equ	CLOCKS_CLK_PERI_CTRL_OFFSET, 0x00000048
.equ	CLOCKS_CLK_PERI_CTRL_BITS, 0x10000ce0
.equ	CLOCKS_CLK_PERI_CTRL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_PERI_CTRL_ENABLED
# Description : clock generator is enabled
.equ	CLOCKS_CLK_PERI_CTRL_ENABLED_RESET, 0x0
.equ	CLOCKS_CLK_PERI_CTRL_ENABLED_BITS, 0x10000000
.equ	CLOCKS_CLK_PERI_CTRL_ENABLED_MSB, 28
.equ	CLOCKS_CLK_PERI_CTRL_ENABLED_LSB, 28
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_PERI_CTRL_ENABLE
# Description : Starts and stops the clock generator cleanly
.equ	CLOCKS_CLK_PERI_CTRL_ENABLE_RESET, 0x0
.equ	CLOCKS_CLK_PERI_CTRL_ENABLE_BITS, 0x00000800
.equ	CLOCKS_CLK_PERI_CTRL_ENABLE_MSB, 11
.equ	CLOCKS_CLK_PERI_CTRL_ENABLE_LSB, 11
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_PERI_CTRL_KILL
# Description : Asynchronously kills the clock generator, enable must be set
#               low before deasserting kill
.equ	CLOCKS_CLK_PERI_CTRL_KILL_RESET, 0x0
.equ	CLOCKS_CLK_PERI_CTRL_KILL_BITS, 0x00000400
.equ	CLOCKS_CLK_PERI_CTRL_KILL_MSB, 10
.equ	CLOCKS_CLK_PERI_CTRL_KILL_LSB, 10
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_PERI_CTRL_AUXSRC
# Description : Selects the auxiliary clock source, will glitch when switching
#               0x0 -> clk_sys
#               0x1 -> clksrc_pll_sys
#               0x2 -> clksrc_pll_usb
#               0x3 -> rosc_clksrc_ph
#               0x4 -> xosc_clksrc
#               0x5 -> clksrc_gpin0
#               0x6 -> clksrc_gpin1
.equ	CLOCKS_CLK_PERI_CTRL_AUXSRC_RESET, 0x0
.equ	CLOCKS_CLK_PERI_CTRL_AUXSRC_BITS, 0x000000e0
.equ	CLOCKS_CLK_PERI_CTRL_AUXSRC_MSB, 7
.equ	CLOCKS_CLK_PERI_CTRL_AUXSRC_LSB, 5
.equ	CLOCKS_CLK_PERI_CTRL_AUXSRC_VALUE_CLK_SYS, 0x0
.equ	CLOCKS_CLK_PERI_CTRL_AUXSRC_VALUE_CLKSRC_PLL_SYS, 0x1
.equ	CLOCKS_CLK_PERI_CTRL_AUXSRC_VALUE_CLKSRC_PLL_USB, 0x2
.equ	CLOCKS_CLK_PERI_CTRL_AUXSRC_VALUE_ROSC_CLKSRC_PH, 0x3
.equ	CLOCKS_CLK_PERI_CTRL_AUXSRC_VALUE_XOSC_CLKSRC, 0x4
.equ	CLOCKS_CLK_PERI_CTRL_AUXSRC_VALUE_CLKSRC_GPIN0, 0x5
.equ	CLOCKS_CLK_PERI_CTRL_AUXSRC_VALUE_CLKSRC_GPIN1, 0x6
# =============================================================================
# Register    : CLOCKS_CLK_PERI_DIV
.equ	CLOCKS_CLK_PERI_DIV_OFFSET, 0x0000004c
.equ	CLOCKS_CLK_PERI_DIV_BITS, 0x00030000
.equ	CLOCKS_CLK_PERI_DIV_RESET, 0x00010000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_PERI_DIV_INT
# Description : Integer part of clock divisor, 0 -> max+1, can be changed on-
#               the-fly
.equ	CLOCKS_CLK_PERI_DIV_INT_RESET, 0x1
.equ	CLOCKS_CLK_PERI_DIV_INT_BITS, 0x00030000
.equ	CLOCKS_CLK_PERI_DIV_INT_MSB, 17
.equ	CLOCKS_CLK_PERI_DIV_INT_LSB, 16
# =============================================================================
# Register    : CLOCKS_CLK_PERI_SELECTED
# Description : Indicates which src is currently selected (one-hot)
#               This slice does not have a glitchless mux (only the AUX_SRC
#               field is present, not SRC) so this register is hardwired to
#               0x1.
.equ	CLOCKS_CLK_PERI_SELECTED_OFFSET, 0x00000050
.equ	CLOCKS_CLK_PERI_SELECTED_BITS, 0x00000001
.equ	CLOCKS_CLK_PERI_SELECTED_RESET, 0x00000001
.equ	CLOCKS_CLK_PERI_SELECTED_MSB, 0
.equ	CLOCKS_CLK_PERI_SELECTED_LSB, 0
# =============================================================================
# Register    : CLOCKS_CLK_HSTX_CTRL
# Description : Clock control, can be changed on-the-fly (except for auxsrc)
.equ	CLOCKS_CLK_HSTX_CTRL_OFFSET, 0x00000054
.equ	CLOCKS_CLK_HSTX_CTRL_BITS, 0x10130ce0
.equ	CLOCKS_CLK_HSTX_CTRL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_HSTX_CTRL_ENABLED
# Description : clock generator is enabled
.equ	CLOCKS_CLK_HSTX_CTRL_ENABLED_RESET, 0x0
.equ	CLOCKS_CLK_HSTX_CTRL_ENABLED_BITS, 0x10000000
.equ	CLOCKS_CLK_HSTX_CTRL_ENABLED_MSB, 28
.equ	CLOCKS_CLK_HSTX_CTRL_ENABLED_LSB, 28
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_HSTX_CTRL_NUDGE
# Description : An edge on this signal shifts the phase of the output by 1
#               cycle of the input clock
#               This can be done at any time
.equ	CLOCKS_CLK_HSTX_CTRL_NUDGE_RESET, 0x0
.equ	CLOCKS_CLK_HSTX_CTRL_NUDGE_BITS, 0x00100000
.equ	CLOCKS_CLK_HSTX_CTRL_NUDGE_MSB, 20
.equ	CLOCKS_CLK_HSTX_CTRL_NUDGE_LSB, 20
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_HSTX_CTRL_PHASE
# Description : This delays the enable signal by up to 3 cycles of the input
#               clock
#               This must be set before the clock is enabled to have any effect
.equ	CLOCKS_CLK_HSTX_CTRL_PHASE_RESET, 0x0
.equ	CLOCKS_CLK_HSTX_CTRL_PHASE_BITS, 0x00030000
.equ	CLOCKS_CLK_HSTX_CTRL_PHASE_MSB, 17
.equ	CLOCKS_CLK_HSTX_CTRL_PHASE_LSB, 16
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_HSTX_CTRL_ENABLE
# Description : Starts and stops the clock generator cleanly
.equ	CLOCKS_CLK_HSTX_CTRL_ENABLE_RESET, 0x0
.equ	CLOCKS_CLK_HSTX_CTRL_ENABLE_BITS, 0x00000800
.equ	CLOCKS_CLK_HSTX_CTRL_ENABLE_MSB, 11
.equ	CLOCKS_CLK_HSTX_CTRL_ENABLE_LSB, 11
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_HSTX_CTRL_KILL
# Description : Asynchronously kills the clock generator, enable must be set
#               low before deasserting kill
.equ	CLOCKS_CLK_HSTX_CTRL_KILL_RESET, 0x0
.equ	CLOCKS_CLK_HSTX_CTRL_KILL_BITS, 0x00000400
.equ	CLOCKS_CLK_HSTX_CTRL_KILL_MSB, 10
.equ	CLOCKS_CLK_HSTX_CTRL_KILL_LSB, 10
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_HSTX_CTRL_AUXSRC
# Description : Selects the auxiliary clock source, will glitch when switching
#               0x0 -> clk_sys
#               0x1 -> clksrc_pll_sys
#               0x2 -> clksrc_pll_usb
#               0x3 -> clksrc_gpin0
#               0x4 -> clksrc_gpin1
.equ	CLOCKS_CLK_HSTX_CTRL_AUXSRC_RESET, 0x0
.equ	CLOCKS_CLK_HSTX_CTRL_AUXSRC_BITS, 0x000000e0
.equ	CLOCKS_CLK_HSTX_CTRL_AUXSRC_MSB, 7
.equ	CLOCKS_CLK_HSTX_CTRL_AUXSRC_LSB, 5
.equ	CLOCKS_CLK_HSTX_CTRL_AUXSRC_VALUE_CLK_SYS, 0x0
.equ	CLOCKS_CLK_HSTX_CTRL_AUXSRC_VALUE_CLKSRC_PLL_SYS, 0x1
.equ	CLOCKS_CLK_HSTX_CTRL_AUXSRC_VALUE_CLKSRC_PLL_USB, 0x2
.equ	CLOCKS_CLK_HSTX_CTRL_AUXSRC_VALUE_CLKSRC_GPIN0, 0x3
.equ	CLOCKS_CLK_HSTX_CTRL_AUXSRC_VALUE_CLKSRC_GPIN1, 0x4
# =============================================================================
# Register    : CLOCKS_CLK_HSTX_DIV
.equ	CLOCKS_CLK_HSTX_DIV_OFFSET, 0x00000058
.equ	CLOCKS_CLK_HSTX_DIV_BITS, 0x00030000
.equ	CLOCKS_CLK_HSTX_DIV_RESET, 0x00010000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_HSTX_DIV_INT
# Description : Integer part of clock divisor, 0 -> max+1, can be changed on-
#               the-fly
.equ	CLOCKS_CLK_HSTX_DIV_INT_RESET, 0x1
.equ	CLOCKS_CLK_HSTX_DIV_INT_BITS, 0x00030000
.equ	CLOCKS_CLK_HSTX_DIV_INT_MSB, 17
.equ	CLOCKS_CLK_HSTX_DIV_INT_LSB, 16
# =============================================================================
# Register    : CLOCKS_CLK_HSTX_SELECTED
# Description : Indicates which src is currently selected (one-hot)
#               This slice does not have a glitchless mux (only the AUX_SRC
#               field is present, not SRC) so this register is hardwired to
#               0x1.
.equ	CLOCKS_CLK_HSTX_SELECTED_OFFSET, 0x0000005c
.equ	CLOCKS_CLK_HSTX_SELECTED_BITS, 0x00000001
.equ	CLOCKS_CLK_HSTX_SELECTED_RESET, 0x00000001
.equ	CLOCKS_CLK_HSTX_SELECTED_MSB, 0
.equ	CLOCKS_CLK_HSTX_SELECTED_LSB, 0
# =============================================================================
# Register    : CLOCKS_CLK_USB_CTRL
# Description : Clock control, can be changed on-the-fly (except for auxsrc)
.equ	CLOCKS_CLK_USB_CTRL_OFFSET, 0x00000060
.equ	CLOCKS_CLK_USB_CTRL_BITS, 0x10130ce0
.equ	CLOCKS_CLK_USB_CTRL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_USB_CTRL_ENABLED
# Description : clock generator is enabled
.equ	CLOCKS_CLK_USB_CTRL_ENABLED_RESET, 0x0
.equ	CLOCKS_CLK_USB_CTRL_ENABLED_BITS, 0x10000000
.equ	CLOCKS_CLK_USB_CTRL_ENABLED_MSB, 28
.equ	CLOCKS_CLK_USB_CTRL_ENABLED_LSB, 28
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_USB_CTRL_NUDGE
# Description : An edge on this signal shifts the phase of the output by 1
#               cycle of the input clock
#               This can be done at any time
.equ	CLOCKS_CLK_USB_CTRL_NUDGE_RESET, 0x0
.equ	CLOCKS_CLK_USB_CTRL_NUDGE_BITS, 0x00100000
.equ	CLOCKS_CLK_USB_CTRL_NUDGE_MSB, 20
.equ	CLOCKS_CLK_USB_CTRL_NUDGE_LSB, 20
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_USB_CTRL_PHASE
# Description : This delays the enable signal by up to 3 cycles of the input
#               clock
#               This must be set before the clock is enabled to have any effect
.equ	CLOCKS_CLK_USB_CTRL_PHASE_RESET, 0x0
.equ	CLOCKS_CLK_USB_CTRL_PHASE_BITS, 0x00030000
.equ	CLOCKS_CLK_USB_CTRL_PHASE_MSB, 17
.equ	CLOCKS_CLK_USB_CTRL_PHASE_LSB, 16
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_USB_CTRL_ENABLE
# Description : Starts and stops the clock generator cleanly
.equ	CLOCKS_CLK_USB_CTRL_ENABLE_RESET, 0x0
.equ	CLOCKS_CLK_USB_CTRL_ENABLE_BITS, 0x00000800
.equ	CLOCKS_CLK_USB_CTRL_ENABLE_MSB, 11
.equ	CLOCKS_CLK_USB_CTRL_ENABLE_LSB, 11
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_USB_CTRL_KILL
# Description : Asynchronously kills the clock generator, enable must be set
#               low before deasserting kill
.equ	CLOCKS_CLK_USB_CTRL_KILL_RESET, 0x0
.equ	CLOCKS_CLK_USB_CTRL_KILL_BITS, 0x00000400
.equ	CLOCKS_CLK_USB_CTRL_KILL_MSB, 10
.equ	CLOCKS_CLK_USB_CTRL_KILL_LSB, 10
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_USB_CTRL_AUXSRC
# Description : Selects the auxiliary clock source, will glitch when switching
#               0x0 -> clksrc_pll_usb
#               0x1 -> clksrc_pll_sys
#               0x2 -> rosc_clksrc_ph
#               0x3 -> xosc_clksrc
#               0x4 -> clksrc_gpin0
#               0x5 -> clksrc_gpin1
.equ	CLOCKS_CLK_USB_CTRL_AUXSRC_RESET, 0x0
.equ	CLOCKS_CLK_USB_CTRL_AUXSRC_BITS, 0x000000e0
.equ	CLOCKS_CLK_USB_CTRL_AUXSRC_MSB, 7
.equ	CLOCKS_CLK_USB_CTRL_AUXSRC_LSB, 5
.equ	CLOCKS_CLK_USB_CTRL_AUXSRC_VALUE_CLKSRC_PLL_USB, 0x0
.equ	CLOCKS_CLK_USB_CTRL_AUXSRC_VALUE_CLKSRC_PLL_SYS, 0x1
.equ	CLOCKS_CLK_USB_CTRL_AUXSRC_VALUE_ROSC_CLKSRC_PH, 0x2
.equ	CLOCKS_CLK_USB_CTRL_AUXSRC_VALUE_XOSC_CLKSRC, 0x3
.equ	CLOCKS_CLK_USB_CTRL_AUXSRC_VALUE_CLKSRC_GPIN0, 0x4
.equ	CLOCKS_CLK_USB_CTRL_AUXSRC_VALUE_CLKSRC_GPIN1, 0x5
# =============================================================================
# Register    : CLOCKS_CLK_USB_DIV
.equ	CLOCKS_CLK_USB_DIV_OFFSET, 0x00000064
.equ	CLOCKS_CLK_USB_DIV_BITS, 0x000f0000
.equ	CLOCKS_CLK_USB_DIV_RESET, 0x00010000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_USB_DIV_INT
# Description : Integer part of clock divisor, 0 -> max+1, can be changed on-
#               the-fly
.equ	CLOCKS_CLK_USB_DIV_INT_RESET, 0x1
.equ	CLOCKS_CLK_USB_DIV_INT_BITS, 0x000f0000
.equ	CLOCKS_CLK_USB_DIV_INT_MSB, 19
.equ	CLOCKS_CLK_USB_DIV_INT_LSB, 16
# =============================================================================
# Register    : CLOCKS_CLK_USB_SELECTED
# Description : Indicates which src is currently selected (one-hot)
#               This slice does not have a glitchless mux (only the AUX_SRC
#               field is present, not SRC) so this register is hardwired to
#               0x1.
.equ	CLOCKS_CLK_USB_SELECTED_OFFSET, 0x00000068
.equ	CLOCKS_CLK_USB_SELECTED_BITS, 0x00000001
.equ	CLOCKS_CLK_USB_SELECTED_RESET, 0x00000001
.equ	CLOCKS_CLK_USB_SELECTED_MSB, 0
.equ	CLOCKS_CLK_USB_SELECTED_LSB, 0
# =============================================================================
# Register    : CLOCKS_CLK_ADC_CTRL
# Description : Clock control, can be changed on-the-fly (except for auxsrc)
.equ	CLOCKS_CLK_ADC_CTRL_OFFSET, 0x0000006c
.equ	CLOCKS_CLK_ADC_CTRL_BITS, 0x10130ce0
.equ	CLOCKS_CLK_ADC_CTRL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_ADC_CTRL_ENABLED
# Description : clock generator is enabled
.equ	CLOCKS_CLK_ADC_CTRL_ENABLED_RESET, 0x0
.equ	CLOCKS_CLK_ADC_CTRL_ENABLED_BITS, 0x10000000
.equ	CLOCKS_CLK_ADC_CTRL_ENABLED_MSB, 28
.equ	CLOCKS_CLK_ADC_CTRL_ENABLED_LSB, 28
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_ADC_CTRL_NUDGE
# Description : An edge on this signal shifts the phase of the output by 1
#               cycle of the input clock
#               This can be done at any time
.equ	CLOCKS_CLK_ADC_CTRL_NUDGE_RESET, 0x0
.equ	CLOCKS_CLK_ADC_CTRL_NUDGE_BITS, 0x00100000
.equ	CLOCKS_CLK_ADC_CTRL_NUDGE_MSB, 20
.equ	CLOCKS_CLK_ADC_CTRL_NUDGE_LSB, 20
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_ADC_CTRL_PHASE
# Description : This delays the enable signal by up to 3 cycles of the input
#               clock
#               This must be set before the clock is enabled to have any effect
.equ	CLOCKS_CLK_ADC_CTRL_PHASE_RESET, 0x0
.equ	CLOCKS_CLK_ADC_CTRL_PHASE_BITS, 0x00030000
.equ	CLOCKS_CLK_ADC_CTRL_PHASE_MSB, 17
.equ	CLOCKS_CLK_ADC_CTRL_PHASE_LSB, 16
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_ADC_CTRL_ENABLE
# Description : Starts and stops the clock generator cleanly
.equ	CLOCKS_CLK_ADC_CTRL_ENABLE_RESET, 0x0
.equ	CLOCKS_CLK_ADC_CTRL_ENABLE_BITS, 0x00000800
.equ	CLOCKS_CLK_ADC_CTRL_ENABLE_MSB, 11
.equ	CLOCKS_CLK_ADC_CTRL_ENABLE_LSB, 11
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_ADC_CTRL_KILL
# Description : Asynchronously kills the clock generator, enable must be set
#               low before deasserting kill
.equ	CLOCKS_CLK_ADC_CTRL_KILL_RESET, 0x0
.equ	CLOCKS_CLK_ADC_CTRL_KILL_BITS, 0x00000400
.equ	CLOCKS_CLK_ADC_CTRL_KILL_MSB, 10
.equ	CLOCKS_CLK_ADC_CTRL_KILL_LSB, 10
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_ADC_CTRL_AUXSRC
# Description : Selects the auxiliary clock source, will glitch when switching
#               0x0 -> clksrc_pll_usb
#               0x1 -> clksrc_pll_sys
#               0x2 -> rosc_clksrc_ph
#               0x3 -> xosc_clksrc
#               0x4 -> clksrc_gpin0
#               0x5 -> clksrc_gpin1
.equ	CLOCKS_CLK_ADC_CTRL_AUXSRC_RESET, 0x0
.equ	CLOCKS_CLK_ADC_CTRL_AUXSRC_BITS, 0x000000e0
.equ	CLOCKS_CLK_ADC_CTRL_AUXSRC_MSB, 7
.equ	CLOCKS_CLK_ADC_CTRL_AUXSRC_LSB, 5
.equ	CLOCKS_CLK_ADC_CTRL_AUXSRC_VALUE_CLKSRC_PLL_USB, 0x0
.equ	CLOCKS_CLK_ADC_CTRL_AUXSRC_VALUE_CLKSRC_PLL_SYS, 0x1
.equ	CLOCKS_CLK_ADC_CTRL_AUXSRC_VALUE_ROSC_CLKSRC_PH, 0x2
.equ	CLOCKS_CLK_ADC_CTRL_AUXSRC_VALUE_XOSC_CLKSRC, 0x3
.equ	CLOCKS_CLK_ADC_CTRL_AUXSRC_VALUE_CLKSRC_GPIN0, 0x4
.equ	CLOCKS_CLK_ADC_CTRL_AUXSRC_VALUE_CLKSRC_GPIN1, 0x5
# =============================================================================
# Register    : CLOCKS_CLK_ADC_DIV
.equ	CLOCKS_CLK_ADC_DIV_OFFSET, 0x00000070
.equ	CLOCKS_CLK_ADC_DIV_BITS, 0x000f0000
.equ	CLOCKS_CLK_ADC_DIV_RESET, 0x00010000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_ADC_DIV_INT
# Description : Integer part of clock divisor, 0 -> max+1, can be changed on-
#               the-fly
.equ	CLOCKS_CLK_ADC_DIV_INT_RESET, 0x1
.equ	CLOCKS_CLK_ADC_DIV_INT_BITS, 0x000f0000
.equ	CLOCKS_CLK_ADC_DIV_INT_MSB, 19
.equ	CLOCKS_CLK_ADC_DIV_INT_LSB, 16
# =============================================================================
# Register    : CLOCKS_CLK_ADC_SELECTED
# Description : Indicates which src is currently selected (one-hot)
#               This slice does not have a glitchless mux (only the AUX_SRC
#               field is present, not SRC) so this register is hardwired to
#               0x1.
.equ	CLOCKS_CLK_ADC_SELECTED_OFFSET, 0x00000074
.equ	CLOCKS_CLK_ADC_SELECTED_BITS, 0x00000001
.equ	CLOCKS_CLK_ADC_SELECTED_RESET, 0x00000001
.equ	CLOCKS_CLK_ADC_SELECTED_MSB, 0
.equ	CLOCKS_CLK_ADC_SELECTED_LSB, 0
# =============================================================================
# Register    : CLOCKS_DFTCLK_XOSC_CTRL
.equ	CLOCKS_DFTCLK_XOSC_CTRL_OFFSET, 0x00000078
.equ	CLOCKS_DFTCLK_XOSC_CTRL_BITS, 0x00000003
.equ	CLOCKS_DFTCLK_XOSC_CTRL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_DFTCLK_XOSC_CTRL_SRC
#               0x0 -> NULL
#               0x1 -> clksrc_pll_usb_primary
#               0x2 -> clksrc_gpin0
.equ	CLOCKS_DFTCLK_XOSC_CTRL_SRC_RESET, 0x0
.equ	CLOCKS_DFTCLK_XOSC_CTRL_SRC_BITS, 0x00000003
.equ	CLOCKS_DFTCLK_XOSC_CTRL_SRC_MSB, 1
.equ	CLOCKS_DFTCLK_XOSC_CTRL_SRC_LSB, 0
.equ	CLOCKS_DFTCLK_XOSC_CTRL_SRC_VALUE_NULL, 0x0
.equ	CLOCKS_DFTCLK_XOSC_CTRL_SRC_VALUE_CLKSRC_PLL_USB_PRIMARY, 0x1
.equ	CLOCKS_DFTCLK_XOSC_CTRL_SRC_VALUE_CLKSRC_GPIN0, 0x2
# =============================================================================
# Register    : CLOCKS_DFTCLK_ROSC_CTRL
.equ	CLOCKS_DFTCLK_ROSC_CTRL_OFFSET, 0x0000007c
.equ	CLOCKS_DFTCLK_ROSC_CTRL_BITS, 0x00000003
.equ	CLOCKS_DFTCLK_ROSC_CTRL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_DFTCLK_ROSC_CTRL_SRC
#               0x0 -> NULL
#               0x1 -> clksrc_pll_sys_primary_rosc
#               0x2 -> clksrc_gpin1
.equ	CLOCKS_DFTCLK_ROSC_CTRL_SRC_RESET, 0x0
.equ	CLOCKS_DFTCLK_ROSC_CTRL_SRC_BITS, 0x00000003
.equ	CLOCKS_DFTCLK_ROSC_CTRL_SRC_MSB, 1
.equ	CLOCKS_DFTCLK_ROSC_CTRL_SRC_LSB, 0
.equ	CLOCKS_DFTCLK_ROSC_CTRL_SRC_VALUE_NULL, 0x0
.equ	CLOCKS_DFTCLK_ROSC_CTRL_SRC_VALUE_CLKSRC_PLL_SYS_PRIMARY_ROSC, 0x1
.equ	CLOCKS_DFTCLK_ROSC_CTRL_SRC_VALUE_CLKSRC_GPIN1, 0x2
# =============================================================================
# Register    : CLOCKS_DFTCLK_LPOSC_CTRL
.equ	CLOCKS_DFTCLK_LPOSC_CTRL_OFFSET, 0x00000080
.equ	CLOCKS_DFTCLK_LPOSC_CTRL_BITS, 0x00000003
.equ	CLOCKS_DFTCLK_LPOSC_CTRL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_DFTCLK_LPOSC_CTRL_SRC
#               0x0 -> NULL
#               0x1 -> clksrc_pll_usb_primary_lposc
#               0x2 -> clksrc_gpin1
.equ	CLOCKS_DFTCLK_LPOSC_CTRL_SRC_RESET, 0x0
.equ	CLOCKS_DFTCLK_LPOSC_CTRL_SRC_BITS, 0x00000003
.equ	CLOCKS_DFTCLK_LPOSC_CTRL_SRC_MSB, 1
.equ	CLOCKS_DFTCLK_LPOSC_CTRL_SRC_LSB, 0
.equ	CLOCKS_DFTCLK_LPOSC_CTRL_SRC_VALUE_NULL, 0x0
.equ	CLOCKS_DFTCLK_LPOSC_CTRL_SRC_VALUE_CLKSRC_PLL_USB_PRIMARY_LPOSC, 0x1
.equ	CLOCKS_DFTCLK_LPOSC_CTRL_SRC_VALUE_CLKSRC_GPIN1, 0x2
# =============================================================================
# Register    : CLOCKS_CLK_SYS_RESUS_CTRL
.equ	CLOCKS_CLK_SYS_RESUS_CTRL_OFFSET, 0x00000084
.equ	CLOCKS_CLK_SYS_RESUS_CTRL_BITS, 0x000111ff
.equ	CLOCKS_CLK_SYS_RESUS_CTRL_RESET, 0x000000ff
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_SYS_RESUS_CTRL_CLEAR
# Description : For clearing the resus after the fault that triggered it has
#               been corrected
.equ	CLOCKS_CLK_SYS_RESUS_CTRL_CLEAR_RESET, 0x0
.equ	CLOCKS_CLK_SYS_RESUS_CTRL_CLEAR_BITS, 0x00010000
.equ	CLOCKS_CLK_SYS_RESUS_CTRL_CLEAR_MSB, 16
.equ	CLOCKS_CLK_SYS_RESUS_CTRL_CLEAR_LSB, 16
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_SYS_RESUS_CTRL_FRCE
# Description : Force a resus, for test purposes only
.equ	CLOCKS_CLK_SYS_RESUS_CTRL_FRCE_RESET, 0x0
.equ	CLOCKS_CLK_SYS_RESUS_CTRL_FRCE_BITS, 0x00001000
.equ	CLOCKS_CLK_SYS_RESUS_CTRL_FRCE_MSB, 12
.equ	CLOCKS_CLK_SYS_RESUS_CTRL_FRCE_LSB, 12
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_SYS_RESUS_CTRL_ENABLE
# Description : Enable resus
.equ	CLOCKS_CLK_SYS_RESUS_CTRL_ENABLE_RESET, 0x0
.equ	CLOCKS_CLK_SYS_RESUS_CTRL_ENABLE_BITS, 0x00000100
.equ	CLOCKS_CLK_SYS_RESUS_CTRL_ENABLE_MSB, 8
.equ	CLOCKS_CLK_SYS_RESUS_CTRL_ENABLE_LSB, 8
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_SYS_RESUS_CTRL_TIMEOUT
# Description : This is expressed as a number of clk_ref cycles
#               and must be >= 2x clk_ref_freq/min_clk_tst_freq
.equ	CLOCKS_CLK_SYS_RESUS_CTRL_TIMEOUT_RESET, 0xff
.equ	CLOCKS_CLK_SYS_RESUS_CTRL_TIMEOUT_BITS, 0x000000ff
.equ	CLOCKS_CLK_SYS_RESUS_CTRL_TIMEOUT_MSB, 7
.equ	CLOCKS_CLK_SYS_RESUS_CTRL_TIMEOUT_LSB, 0
# =============================================================================
# Register    : CLOCKS_CLK_SYS_RESUS_STATUS
.equ	CLOCKS_CLK_SYS_RESUS_STATUS_OFFSET, 0x00000088
.equ	CLOCKS_CLK_SYS_RESUS_STATUS_BITS, 0x00000001
.equ	CLOCKS_CLK_SYS_RESUS_STATUS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_CLK_SYS_RESUS_STATUS_RESUSSED
# Description : Clock has been resuscitated, correct the error then send
#               ctrl_clear=1
.equ	CLOCKS_CLK_SYS_RESUS_STATUS_RESUSSED_RESET, 0x0
.equ	CLOCKS_CLK_SYS_RESUS_STATUS_RESUSSED_BITS, 0x00000001
.equ	CLOCKS_CLK_SYS_RESUS_STATUS_RESUSSED_MSB, 0
.equ	CLOCKS_CLK_SYS_RESUS_STATUS_RESUSSED_LSB, 0
# =============================================================================
# Register    : CLOCKS_FC0_REF_KHZ
# Description : Reference clock frequency in kHz
.equ	CLOCKS_FC0_REF_KHZ_OFFSET, 0x0000008c
.equ	CLOCKS_FC0_REF_KHZ_BITS, 0x000fffff
.equ	CLOCKS_FC0_REF_KHZ_RESET, 0x00000000
.equ	CLOCKS_FC0_REF_KHZ_MSB, 19
.equ	CLOCKS_FC0_REF_KHZ_LSB, 0
# =============================================================================
# Register    : CLOCKS_FC0_MIN_KHZ
# Description : Minimum pass frequency in kHz. This is optional. Set to 0 if
#               you are not using the pass/fail flags
.equ	CLOCKS_FC0_MIN_KHZ_OFFSET, 0x00000090
.equ	CLOCKS_FC0_MIN_KHZ_BITS, 0x01ffffff
.equ	CLOCKS_FC0_MIN_KHZ_RESET, 0x00000000
.equ	CLOCKS_FC0_MIN_KHZ_MSB, 24
.equ	CLOCKS_FC0_MIN_KHZ_LSB, 0
# =============================================================================
# Register    : CLOCKS_FC0_MAX_KHZ
# Description : Maximum pass frequency in kHz. This is optional. Set to
#               0x1ffffff if you are not using the pass/fail flags
.equ	CLOCKS_FC0_MAX_KHZ_OFFSET, 0x00000094
.equ	CLOCKS_FC0_MAX_KHZ_BITS, 0x01ffffff
.equ	CLOCKS_FC0_MAX_KHZ_RESET, 0x01ffffff
.equ	CLOCKS_FC0_MAX_KHZ_MSB, 24
.equ	CLOCKS_FC0_MAX_KHZ_LSB, 0
# =============================================================================
# Register    : CLOCKS_FC0_DELAY
# Description : Delays the start of frequency counting to allow the mux to
#               settle
#               Delay is measured in multiples of the reference clock period
.equ	CLOCKS_FC0_DELAY_OFFSET, 0x00000098
.equ	CLOCKS_FC0_DELAY_BITS, 0x00000007
.equ	CLOCKS_FC0_DELAY_RESET, 0x00000001
.equ	CLOCKS_FC0_DELAY_MSB, 2
.equ	CLOCKS_FC0_DELAY_LSB, 0
# =============================================================================
# Register    : CLOCKS_FC0_INTERVAL
# Description : The test interval is 0.98us * 2**interval, but let's call it
#               1us * 2**interval
#               The default gives a test interval of 250us
.equ	CLOCKS_FC0_INTERVAL_OFFSET, 0x0000009c
.equ	CLOCKS_FC0_INTERVAL_BITS, 0x0000000f
.equ	CLOCKS_FC0_INTERVAL_RESET, 0x00000008
.equ	CLOCKS_FC0_INTERVAL_MSB, 3
.equ	CLOCKS_FC0_INTERVAL_LSB, 0
# =============================================================================
# Register    : CLOCKS_FC0_SRC
# Description : Clock sent to frequency counter, set to 0 when not required
#               Writing to this register initiates the frequency count
#               0x00 -> NULL
#               0x01 -> pll_sys_clksrc_primary
#               0x02 -> pll_usb_clksrc_primary
#               0x03 -> rosc_clksrc
#               0x04 -> rosc_clksrc_ph
#               0x05 -> xosc_clksrc
#               0x06 -> clksrc_gpin0
#               0x07 -> clksrc_gpin1
#               0x08 -> clk_ref
#               0x09 -> clk_sys
#               0x0a -> clk_peri
#               0x0b -> clk_usb
#               0x0c -> clk_adc
#               0x0d -> clk_hstx
#               0x0e -> lposc_clksrc
#               0x0f -> otp_clk2fc
#               0x10 -> pll_usb_clksrc_primary_dft
.equ	CLOCKS_FC0_SRC_OFFSET, 0x000000a0
.equ	CLOCKS_FC0_SRC_BITS, 0x000000ff
.equ	CLOCKS_FC0_SRC_RESET, 0x00000000
.equ	CLOCKS_FC0_SRC_MSB, 7
.equ	CLOCKS_FC0_SRC_LSB, 0
.equ	CLOCKS_FC0_SRC_VALUE_NULL, 0x00
.equ	CLOCKS_FC0_SRC_VALUE_PLL_SYS_CLKSRC_PRIMARY, 0x01
.equ	CLOCKS_FC0_SRC_VALUE_PLL_USB_CLKSRC_PRIMARY, 0x02
.equ	CLOCKS_FC0_SRC_VALUE_ROSC_CLKSRC, 0x03
.equ	CLOCKS_FC0_SRC_VALUE_ROSC_CLKSRC_PH, 0x04
.equ	CLOCKS_FC0_SRC_VALUE_XOSC_CLKSRC, 0x05
.equ	CLOCKS_FC0_SRC_VALUE_CLKSRC_GPIN0, 0x06
.equ	CLOCKS_FC0_SRC_VALUE_CLKSRC_GPIN1, 0x07
.equ	CLOCKS_FC0_SRC_VALUE_CLK_REF, 0x08
.equ	CLOCKS_FC0_SRC_VALUE_CLK_SYS, 0x09
.equ	CLOCKS_FC0_SRC_VALUE_CLK_PERI, 0x0a
.equ	CLOCKS_FC0_SRC_VALUE_CLK_USB, 0x0b
.equ	CLOCKS_FC0_SRC_VALUE_CLK_ADC, 0x0c
.equ	CLOCKS_FC0_SRC_VALUE_CLK_HSTX, 0x0d
.equ	CLOCKS_FC0_SRC_VALUE_LPOSC_CLKSRC, 0x0e
.equ	CLOCKS_FC0_SRC_VALUE_OTP_CLK2FC, 0x0f
.equ	CLOCKS_FC0_SRC_VALUE_PLL_USB_CLKSRC_PRIMARY_DFT, 0x10
# =============================================================================
# Register    : CLOCKS_FC0_STATUS
# Description : Frequency counter status
.equ	CLOCKS_FC0_STATUS_OFFSET, 0x000000a4
.equ	CLOCKS_FC0_STATUS_BITS, 0x11111111
.equ	CLOCKS_FC0_STATUS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_FC0_STATUS_DIED
# Description : Test clock stopped during test
.equ	CLOCKS_FC0_STATUS_DIED_RESET, 0x0
.equ	CLOCKS_FC0_STATUS_DIED_BITS, 0x10000000
.equ	CLOCKS_FC0_STATUS_DIED_MSB, 28
.equ	CLOCKS_FC0_STATUS_DIED_LSB, 28
# -----------------------------------------------------------------------------
# Field       : CLOCKS_FC0_STATUS_FAST
# Description : Test clock faster than expected, only valid when status_done=1
.equ	CLOCKS_FC0_STATUS_FAST_RESET, 0x0
.equ	CLOCKS_FC0_STATUS_FAST_BITS, 0x01000000
.equ	CLOCKS_FC0_STATUS_FAST_MSB, 24
.equ	CLOCKS_FC0_STATUS_FAST_LSB, 24
# -----------------------------------------------------------------------------
# Field       : CLOCKS_FC0_STATUS_SLOW
# Description : Test clock slower than expected, only valid when status_done=1
.equ	CLOCKS_FC0_STATUS_SLOW_RESET, 0x0
.equ	CLOCKS_FC0_STATUS_SLOW_BITS, 0x00100000
.equ	CLOCKS_FC0_STATUS_SLOW_MSB, 20
.equ	CLOCKS_FC0_STATUS_SLOW_LSB, 20
# -----------------------------------------------------------------------------
# Field       : CLOCKS_FC0_STATUS_FAIL
# Description : Test failed
.equ	CLOCKS_FC0_STATUS_FAIL_RESET, 0x0
.equ	CLOCKS_FC0_STATUS_FAIL_BITS, 0x00010000
.equ	CLOCKS_FC0_STATUS_FAIL_MSB, 16
.equ	CLOCKS_FC0_STATUS_FAIL_LSB, 16
# -----------------------------------------------------------------------------
# Field       : CLOCKS_FC0_STATUS_WAITING
# Description : Waiting for test clock to start
.equ	CLOCKS_FC0_STATUS_WAITING_RESET, 0x0
.equ	CLOCKS_FC0_STATUS_WAITING_BITS, 0x00001000
.equ	CLOCKS_FC0_STATUS_WAITING_MSB, 12
.equ	CLOCKS_FC0_STATUS_WAITING_LSB, 12
# -----------------------------------------------------------------------------
# Field       : CLOCKS_FC0_STATUS_RUNNING
# Description : Test running
.equ	CLOCKS_FC0_STATUS_RUNNING_RESET, 0x0
.equ	CLOCKS_FC0_STATUS_RUNNING_BITS, 0x00000100
.equ	CLOCKS_FC0_STATUS_RUNNING_MSB, 8
.equ	CLOCKS_FC0_STATUS_RUNNING_LSB, 8
# -----------------------------------------------------------------------------
# Field       : CLOCKS_FC0_STATUS_DONE
# Description : Test complete
.equ	CLOCKS_FC0_STATUS_DONE_RESET, 0x0
.equ	CLOCKS_FC0_STATUS_DONE_BITS, 0x00000010
.equ	CLOCKS_FC0_STATUS_DONE_MSB, 4
.equ	CLOCKS_FC0_STATUS_DONE_LSB, 4
# -----------------------------------------------------------------------------
# Field       : CLOCKS_FC0_STATUS_PASS
# Description : Test passed
.equ	CLOCKS_FC0_STATUS_PASS_RESET, 0x0
.equ	CLOCKS_FC0_STATUS_PASS_BITS, 0x00000001
.equ	CLOCKS_FC0_STATUS_PASS_MSB, 0
.equ	CLOCKS_FC0_STATUS_PASS_LSB, 0
# =============================================================================
# Register    : CLOCKS_FC0_RESULT
# Description : Result of frequency measurement, only valid when status_done=1
.equ	CLOCKS_FC0_RESULT_OFFSET, 0x000000a8
.equ	CLOCKS_FC0_RESULT_BITS, 0x3fffffff
.equ	CLOCKS_FC0_RESULT_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_FC0_RESULT_KHZ
.equ	CLOCKS_FC0_RESULT_KHZ_RESET, 0x0000000
.equ	CLOCKS_FC0_RESULT_KHZ_BITS, 0x3fffffe0
.equ	CLOCKS_FC0_RESULT_KHZ_MSB, 29
.equ	CLOCKS_FC0_RESULT_KHZ_LSB, 5
# -----------------------------------------------------------------------------
# Field       : CLOCKS_FC0_RESULT_FRAC
.equ	CLOCKS_FC0_RESULT_FRAC_RESET, 0x00
.equ	CLOCKS_FC0_RESULT_FRAC_BITS, 0x0000001f
.equ	CLOCKS_FC0_RESULT_FRAC_MSB, 4
.equ	CLOCKS_FC0_RESULT_FRAC_LSB, 0
# =============================================================================
# Register    : CLOCKS_WAKE_EN0
# Description : enable clock in wake mode
.equ	CLOCKS_WAKE_EN0_OFFSET, 0x000000ac
.equ	CLOCKS_WAKE_EN0_BITS, 0xffffffff
.equ	CLOCKS_WAKE_EN0_RESET, 0xffffffff
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_SYS_SIO
.equ	CLOCKS_WAKE_EN0_CLK_SYS_SIO_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_SIO_BITS, 0x80000000
.equ	CLOCKS_WAKE_EN0_CLK_SYS_SIO_MSB, 31
.equ	CLOCKS_WAKE_EN0_CLK_SYS_SIO_LSB, 31
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_SYS_SHA256
.equ	CLOCKS_WAKE_EN0_CLK_SYS_SHA256_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_SHA256_BITS, 0x40000000
.equ	CLOCKS_WAKE_EN0_CLK_SYS_SHA256_MSB, 30
.equ	CLOCKS_WAKE_EN0_CLK_SYS_SHA256_LSB, 30
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_SYS_PSM
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PSM_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PSM_BITS, 0x20000000
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PSM_MSB, 29
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PSM_LSB, 29
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_SYS_ROSC
.equ	CLOCKS_WAKE_EN0_CLK_SYS_ROSC_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_ROSC_BITS, 0x10000000
.equ	CLOCKS_WAKE_EN0_CLK_SYS_ROSC_MSB, 28
.equ	CLOCKS_WAKE_EN0_CLK_SYS_ROSC_LSB, 28
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_SYS_ROM
.equ	CLOCKS_WAKE_EN0_CLK_SYS_ROM_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_ROM_BITS, 0x08000000
.equ	CLOCKS_WAKE_EN0_CLK_SYS_ROM_MSB, 27
.equ	CLOCKS_WAKE_EN0_CLK_SYS_ROM_LSB, 27
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_SYS_RESETS
.equ	CLOCKS_WAKE_EN0_CLK_SYS_RESETS_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_RESETS_BITS, 0x04000000
.equ	CLOCKS_WAKE_EN0_CLK_SYS_RESETS_MSB, 26
.equ	CLOCKS_WAKE_EN0_CLK_SYS_RESETS_LSB, 26
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_SYS_PWM
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PWM_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PWM_BITS, 0x02000000
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PWM_MSB, 25
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PWM_LSB, 25
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_SYS_POWMAN
.equ	CLOCKS_WAKE_EN0_CLK_SYS_POWMAN_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_POWMAN_BITS, 0x01000000
.equ	CLOCKS_WAKE_EN0_CLK_SYS_POWMAN_MSB, 24
.equ	CLOCKS_WAKE_EN0_CLK_SYS_POWMAN_LSB, 24
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_REF_POWMAN
.equ	CLOCKS_WAKE_EN0_CLK_REF_POWMAN_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_REF_POWMAN_BITS, 0x00800000
.equ	CLOCKS_WAKE_EN0_CLK_REF_POWMAN_MSB, 23
.equ	CLOCKS_WAKE_EN0_CLK_REF_POWMAN_LSB, 23
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_SYS_PLL_USB
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PLL_USB_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PLL_USB_BITS, 0x00400000
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PLL_USB_MSB, 22
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PLL_USB_LSB, 22
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_SYS_PLL_SYS
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PLL_SYS_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PLL_SYS_BITS, 0x00200000
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PLL_SYS_MSB, 21
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PLL_SYS_LSB, 21
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_SYS_PIO2
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PIO2_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PIO2_BITS, 0x00100000
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PIO2_MSB, 20
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PIO2_LSB, 20
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_SYS_PIO1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PIO1_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PIO1_BITS, 0x00080000
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PIO1_MSB, 19
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PIO1_LSB, 19
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_SYS_PIO0
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PIO0_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PIO0_BITS, 0x00040000
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PIO0_MSB, 18
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PIO0_LSB, 18
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_SYS_PADS
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PADS_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PADS_BITS, 0x00020000
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PADS_MSB, 17
.equ	CLOCKS_WAKE_EN0_CLK_SYS_PADS_LSB, 17
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_SYS_OTP
.equ	CLOCKS_WAKE_EN0_CLK_SYS_OTP_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_OTP_BITS, 0x00010000
.equ	CLOCKS_WAKE_EN0_CLK_SYS_OTP_MSB, 16
.equ	CLOCKS_WAKE_EN0_CLK_SYS_OTP_LSB, 16
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_REF_OTP
.equ	CLOCKS_WAKE_EN0_CLK_REF_OTP_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_REF_OTP_BITS, 0x00008000
.equ	CLOCKS_WAKE_EN0_CLK_REF_OTP_MSB, 15
.equ	CLOCKS_WAKE_EN0_CLK_REF_OTP_LSB, 15
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_SYS_JTAG
.equ	CLOCKS_WAKE_EN0_CLK_SYS_JTAG_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_JTAG_BITS, 0x00004000
.equ	CLOCKS_WAKE_EN0_CLK_SYS_JTAG_MSB, 14
.equ	CLOCKS_WAKE_EN0_CLK_SYS_JTAG_LSB, 14
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_SYS_IO
.equ	CLOCKS_WAKE_EN0_CLK_SYS_IO_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_IO_BITS, 0x00002000
.equ	CLOCKS_WAKE_EN0_CLK_SYS_IO_MSB, 13
.equ	CLOCKS_WAKE_EN0_CLK_SYS_IO_LSB, 13
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_SYS_I2C1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_I2C1_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_I2C1_BITS, 0x00001000
.equ	CLOCKS_WAKE_EN0_CLK_SYS_I2C1_MSB, 12
.equ	CLOCKS_WAKE_EN0_CLK_SYS_I2C1_LSB, 12
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_SYS_I2C0
.equ	CLOCKS_WAKE_EN0_CLK_SYS_I2C0_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_I2C0_BITS, 0x00000800
.equ	CLOCKS_WAKE_EN0_CLK_SYS_I2C0_MSB, 11
.equ	CLOCKS_WAKE_EN0_CLK_SYS_I2C0_LSB, 11
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_SYS_HSTX
.equ	CLOCKS_WAKE_EN0_CLK_SYS_HSTX_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_HSTX_BITS, 0x00000400
.equ	CLOCKS_WAKE_EN0_CLK_SYS_HSTX_MSB, 10
.equ	CLOCKS_WAKE_EN0_CLK_SYS_HSTX_LSB, 10
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_HSTX
.equ	CLOCKS_WAKE_EN0_CLK_HSTX_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_HSTX_BITS, 0x00000200
.equ	CLOCKS_WAKE_EN0_CLK_HSTX_MSB, 9
.equ	CLOCKS_WAKE_EN0_CLK_HSTX_LSB, 9
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_SYS_GLITCH_DETECTOR
.equ	CLOCKS_WAKE_EN0_CLK_SYS_GLITCH_DETECTOR_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_GLITCH_DETECTOR_BITS, 0x00000100
.equ	CLOCKS_WAKE_EN0_CLK_SYS_GLITCH_DETECTOR_MSB, 8
.equ	CLOCKS_WAKE_EN0_CLK_SYS_GLITCH_DETECTOR_LSB, 8
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_SYS_DMA
.equ	CLOCKS_WAKE_EN0_CLK_SYS_DMA_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_DMA_BITS, 0x00000080
.equ	CLOCKS_WAKE_EN0_CLK_SYS_DMA_MSB, 7
.equ	CLOCKS_WAKE_EN0_CLK_SYS_DMA_LSB, 7
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_SYS_BUSFABRIC
.equ	CLOCKS_WAKE_EN0_CLK_SYS_BUSFABRIC_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_BUSFABRIC_BITS, 0x00000040
.equ	CLOCKS_WAKE_EN0_CLK_SYS_BUSFABRIC_MSB, 6
.equ	CLOCKS_WAKE_EN0_CLK_SYS_BUSFABRIC_LSB, 6
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_SYS_BUSCTRL
.equ	CLOCKS_WAKE_EN0_CLK_SYS_BUSCTRL_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_BUSCTRL_BITS, 0x00000020
.equ	CLOCKS_WAKE_EN0_CLK_SYS_BUSCTRL_MSB, 5
.equ	CLOCKS_WAKE_EN0_CLK_SYS_BUSCTRL_LSB, 5
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_SYS_BOOTRAM
.equ	CLOCKS_WAKE_EN0_CLK_SYS_BOOTRAM_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_BOOTRAM_BITS, 0x00000010
.equ	CLOCKS_WAKE_EN0_CLK_SYS_BOOTRAM_MSB, 4
.equ	CLOCKS_WAKE_EN0_CLK_SYS_BOOTRAM_LSB, 4
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_SYS_ADC
.equ	CLOCKS_WAKE_EN0_CLK_SYS_ADC_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_ADC_BITS, 0x00000008
.equ	CLOCKS_WAKE_EN0_CLK_SYS_ADC_MSB, 3
.equ	CLOCKS_WAKE_EN0_CLK_SYS_ADC_LSB, 3
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_ADC
.equ	CLOCKS_WAKE_EN0_CLK_ADC_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_ADC_BITS, 0x00000004
.equ	CLOCKS_WAKE_EN0_CLK_ADC_MSB, 2
.equ	CLOCKS_WAKE_EN0_CLK_ADC_LSB, 2
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_SYS_ACCESSCTRL
.equ	CLOCKS_WAKE_EN0_CLK_SYS_ACCESSCTRL_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_ACCESSCTRL_BITS, 0x00000002
.equ	CLOCKS_WAKE_EN0_CLK_SYS_ACCESSCTRL_MSB, 1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_ACCESSCTRL_LSB, 1
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN0_CLK_SYS_CLOCKS
.equ	CLOCKS_WAKE_EN0_CLK_SYS_CLOCKS_RESET, 0x1
.equ	CLOCKS_WAKE_EN0_CLK_SYS_CLOCKS_BITS, 0x00000001
.equ	CLOCKS_WAKE_EN0_CLK_SYS_CLOCKS_MSB, 0
.equ	CLOCKS_WAKE_EN0_CLK_SYS_CLOCKS_LSB, 0
# =============================================================================
# Register    : CLOCKS_WAKE_EN1
# Description : enable clock in wake mode
.equ	CLOCKS_WAKE_EN1_OFFSET, 0x000000b0
.equ	CLOCKS_WAKE_EN1_BITS, 0x7fffffff
.equ	CLOCKS_WAKE_EN1_RESET, 0x7fffffff
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_SYS_XOSC
.equ	CLOCKS_WAKE_EN1_CLK_SYS_XOSC_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_XOSC_BITS, 0x40000000
.equ	CLOCKS_WAKE_EN1_CLK_SYS_XOSC_MSB, 30
.equ	CLOCKS_WAKE_EN1_CLK_SYS_XOSC_LSB, 30
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_SYS_XIP
.equ	CLOCKS_WAKE_EN1_CLK_SYS_XIP_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_XIP_BITS, 0x20000000
.equ	CLOCKS_WAKE_EN1_CLK_SYS_XIP_MSB, 29
.equ	CLOCKS_WAKE_EN1_CLK_SYS_XIP_LSB, 29
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_SYS_WATCHDOG
.equ	CLOCKS_WAKE_EN1_CLK_SYS_WATCHDOG_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_WATCHDOG_BITS, 0x10000000
.equ	CLOCKS_WAKE_EN1_CLK_SYS_WATCHDOG_MSB, 28
.equ	CLOCKS_WAKE_EN1_CLK_SYS_WATCHDOG_LSB, 28
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_USB
.equ	CLOCKS_WAKE_EN1_CLK_USB_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_USB_BITS, 0x08000000
.equ	CLOCKS_WAKE_EN1_CLK_USB_MSB, 27
.equ	CLOCKS_WAKE_EN1_CLK_USB_LSB, 27
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_SYS_USBCTRL
.equ	CLOCKS_WAKE_EN1_CLK_SYS_USBCTRL_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_USBCTRL_BITS, 0x04000000
.equ	CLOCKS_WAKE_EN1_CLK_SYS_USBCTRL_MSB, 26
.equ	CLOCKS_WAKE_EN1_CLK_SYS_USBCTRL_LSB, 26
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_SYS_UART1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_UART1_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_UART1_BITS, 0x02000000
.equ	CLOCKS_WAKE_EN1_CLK_SYS_UART1_MSB, 25
.equ	CLOCKS_WAKE_EN1_CLK_SYS_UART1_LSB, 25
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_PERI_UART1
.equ	CLOCKS_WAKE_EN1_CLK_PERI_UART1_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_PERI_UART1_BITS, 0x01000000
.equ	CLOCKS_WAKE_EN1_CLK_PERI_UART1_MSB, 24
.equ	CLOCKS_WAKE_EN1_CLK_PERI_UART1_LSB, 24
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_SYS_UART0
.equ	CLOCKS_WAKE_EN1_CLK_SYS_UART0_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_UART0_BITS, 0x00800000
.equ	CLOCKS_WAKE_EN1_CLK_SYS_UART0_MSB, 23
.equ	CLOCKS_WAKE_EN1_CLK_SYS_UART0_LSB, 23
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_PERI_UART0
.equ	CLOCKS_WAKE_EN1_CLK_PERI_UART0_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_PERI_UART0_BITS, 0x00400000
.equ	CLOCKS_WAKE_EN1_CLK_PERI_UART0_MSB, 22
.equ	CLOCKS_WAKE_EN1_CLK_PERI_UART0_LSB, 22
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_SYS_TRNG
.equ	CLOCKS_WAKE_EN1_CLK_SYS_TRNG_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_TRNG_BITS, 0x00200000
.equ	CLOCKS_WAKE_EN1_CLK_SYS_TRNG_MSB, 21
.equ	CLOCKS_WAKE_EN1_CLK_SYS_TRNG_LSB, 21
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_SYS_TIMER1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_TIMER1_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_TIMER1_BITS, 0x00100000
.equ	CLOCKS_WAKE_EN1_CLK_SYS_TIMER1_MSB, 20
.equ	CLOCKS_WAKE_EN1_CLK_SYS_TIMER1_LSB, 20
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_SYS_TIMER0
.equ	CLOCKS_WAKE_EN1_CLK_SYS_TIMER0_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_TIMER0_BITS, 0x00080000
.equ	CLOCKS_WAKE_EN1_CLK_SYS_TIMER0_MSB, 19
.equ	CLOCKS_WAKE_EN1_CLK_SYS_TIMER0_LSB, 19
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_SYS_TICKS
.equ	CLOCKS_WAKE_EN1_CLK_SYS_TICKS_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_TICKS_BITS, 0x00040000
.equ	CLOCKS_WAKE_EN1_CLK_SYS_TICKS_MSB, 18
.equ	CLOCKS_WAKE_EN1_CLK_SYS_TICKS_LSB, 18
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_REF_TICKS
.equ	CLOCKS_WAKE_EN1_CLK_REF_TICKS_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_REF_TICKS_BITS, 0x00020000
.equ	CLOCKS_WAKE_EN1_CLK_REF_TICKS_MSB, 17
.equ	CLOCKS_WAKE_EN1_CLK_REF_TICKS_LSB, 17
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_SYS_TBMAN
.equ	CLOCKS_WAKE_EN1_CLK_SYS_TBMAN_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_TBMAN_BITS, 0x00010000
.equ	CLOCKS_WAKE_EN1_CLK_SYS_TBMAN_MSB, 16
.equ	CLOCKS_WAKE_EN1_CLK_SYS_TBMAN_LSB, 16
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_SYS_SYSINFO
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SYSINFO_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SYSINFO_BITS, 0x00008000
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SYSINFO_MSB, 15
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SYSINFO_LSB, 15
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_SYS_SYSCFG
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SYSCFG_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SYSCFG_BITS, 0x00004000
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SYSCFG_MSB, 14
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SYSCFG_LSB, 14
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_SYS_SRAM9
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM9_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM9_BITS, 0x00002000
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM9_MSB, 13
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM9_LSB, 13
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_SYS_SRAM8
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM8_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM8_BITS, 0x00001000
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM8_MSB, 12
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM8_LSB, 12
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_SYS_SRAM7
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM7_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM7_BITS, 0x00000800
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM7_MSB, 11
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM7_LSB, 11
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_SYS_SRAM6
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM6_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM6_BITS, 0x00000400
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM6_MSB, 10
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM6_LSB, 10
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_SYS_SRAM5
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM5_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM5_BITS, 0x00000200
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM5_MSB, 9
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM5_LSB, 9
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_SYS_SRAM4
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM4_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM4_BITS, 0x00000100
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM4_MSB, 8
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM4_LSB, 8
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_SYS_SRAM3
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM3_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM3_BITS, 0x00000080
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM3_MSB, 7
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM3_LSB, 7
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_SYS_SRAM2
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM2_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM2_BITS, 0x00000040
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM2_MSB, 6
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM2_LSB, 6
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_SYS_SRAM1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM1_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM1_BITS, 0x00000020
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM1_MSB, 5
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM1_LSB, 5
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_SYS_SRAM0
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM0_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM0_BITS, 0x00000010
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM0_MSB, 4
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SRAM0_LSB, 4
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_SYS_SPI1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SPI1_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SPI1_BITS, 0x00000008
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SPI1_MSB, 3
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SPI1_LSB, 3
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_PERI_SPI1
.equ	CLOCKS_WAKE_EN1_CLK_PERI_SPI1_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_PERI_SPI1_BITS, 0x00000004
.equ	CLOCKS_WAKE_EN1_CLK_PERI_SPI1_MSB, 2
.equ	CLOCKS_WAKE_EN1_CLK_PERI_SPI1_LSB, 2
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_SYS_SPI0
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SPI0_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SPI0_BITS, 0x00000002
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SPI0_MSB, 1
.equ	CLOCKS_WAKE_EN1_CLK_SYS_SPI0_LSB, 1
# -----------------------------------------------------------------------------
# Field       : CLOCKS_WAKE_EN1_CLK_PERI_SPI0
.equ	CLOCKS_WAKE_EN1_CLK_PERI_SPI0_RESET, 0x1
.equ	CLOCKS_WAKE_EN1_CLK_PERI_SPI0_BITS, 0x00000001
.equ	CLOCKS_WAKE_EN1_CLK_PERI_SPI0_MSB, 0
.equ	CLOCKS_WAKE_EN1_CLK_PERI_SPI0_LSB, 0
# =============================================================================
# Register    : CLOCKS_SLEEP_EN0
# Description : enable clock in sleep mode
.equ	CLOCKS_SLEEP_EN0_OFFSET, 0x000000b4
.equ	CLOCKS_SLEEP_EN0_BITS, 0xffffffff
.equ	CLOCKS_SLEEP_EN0_RESET, 0xffffffff
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_SYS_SIO
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_SIO_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_SIO_BITS, 0x80000000
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_SIO_MSB, 31
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_SIO_LSB, 31
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_SYS_SHA256
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_SHA256_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_SHA256_BITS, 0x40000000
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_SHA256_MSB, 30
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_SHA256_LSB, 30
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_SYS_PSM
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PSM_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PSM_BITS, 0x20000000
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PSM_MSB, 29
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PSM_LSB, 29
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_SYS_ROSC
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_ROSC_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_ROSC_BITS, 0x10000000
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_ROSC_MSB, 28
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_ROSC_LSB, 28
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_SYS_ROM
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_ROM_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_ROM_BITS, 0x08000000
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_ROM_MSB, 27
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_ROM_LSB, 27
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_SYS_RESETS
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_RESETS_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_RESETS_BITS, 0x04000000
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_RESETS_MSB, 26
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_RESETS_LSB, 26
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_SYS_PWM
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PWM_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PWM_BITS, 0x02000000
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PWM_MSB, 25
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PWM_LSB, 25
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_SYS_POWMAN
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_POWMAN_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_POWMAN_BITS, 0x01000000
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_POWMAN_MSB, 24
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_POWMAN_LSB, 24
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_REF_POWMAN
.equ	CLOCKS_SLEEP_EN0_CLK_REF_POWMAN_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_REF_POWMAN_BITS, 0x00800000
.equ	CLOCKS_SLEEP_EN0_CLK_REF_POWMAN_MSB, 23
.equ	CLOCKS_SLEEP_EN0_CLK_REF_POWMAN_LSB, 23
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_SYS_PLL_USB
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PLL_USB_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PLL_USB_BITS, 0x00400000
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PLL_USB_MSB, 22
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PLL_USB_LSB, 22
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_SYS_PLL_SYS
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PLL_SYS_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PLL_SYS_BITS, 0x00200000
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PLL_SYS_MSB, 21
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PLL_SYS_LSB, 21
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_SYS_PIO2
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PIO2_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PIO2_BITS, 0x00100000
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PIO2_MSB, 20
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PIO2_LSB, 20
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_SYS_PIO1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PIO1_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PIO1_BITS, 0x00080000
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PIO1_MSB, 19
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PIO1_LSB, 19
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_SYS_PIO0
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PIO0_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PIO0_BITS, 0x00040000
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PIO0_MSB, 18
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PIO0_LSB, 18
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_SYS_PADS
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PADS_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PADS_BITS, 0x00020000
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PADS_MSB, 17
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_PADS_LSB, 17
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_SYS_OTP
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_OTP_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_OTP_BITS, 0x00010000
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_OTP_MSB, 16
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_OTP_LSB, 16
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_REF_OTP
.equ	CLOCKS_SLEEP_EN0_CLK_REF_OTP_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_REF_OTP_BITS, 0x00008000
.equ	CLOCKS_SLEEP_EN0_CLK_REF_OTP_MSB, 15
.equ	CLOCKS_SLEEP_EN0_CLK_REF_OTP_LSB, 15
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_SYS_JTAG
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_JTAG_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_JTAG_BITS, 0x00004000
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_JTAG_MSB, 14
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_JTAG_LSB, 14
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_SYS_IO
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_IO_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_IO_BITS, 0x00002000
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_IO_MSB, 13
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_IO_LSB, 13
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_SYS_I2C1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_I2C1_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_I2C1_BITS, 0x00001000
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_I2C1_MSB, 12
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_I2C1_LSB, 12
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_SYS_I2C0
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_I2C0_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_I2C0_BITS, 0x00000800
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_I2C0_MSB, 11
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_I2C0_LSB, 11
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_SYS_HSTX
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_HSTX_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_HSTX_BITS, 0x00000400
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_HSTX_MSB, 10
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_HSTX_LSB, 10
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_HSTX
.equ	CLOCKS_SLEEP_EN0_CLK_HSTX_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_HSTX_BITS, 0x00000200
.equ	CLOCKS_SLEEP_EN0_CLK_HSTX_MSB, 9
.equ	CLOCKS_SLEEP_EN0_CLK_HSTX_LSB, 9
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_SYS_GLITCH_DETECTOR
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_GLITCH_DETECTOR_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_GLITCH_DETECTOR_BITS, 0x00000100
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_GLITCH_DETECTOR_MSB, 8
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_GLITCH_DETECTOR_LSB, 8
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_SYS_DMA
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_DMA_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_DMA_BITS, 0x00000080
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_DMA_MSB, 7
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_DMA_LSB, 7
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_SYS_BUSFABRIC
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_BUSFABRIC_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_BUSFABRIC_BITS, 0x00000040
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_BUSFABRIC_MSB, 6
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_BUSFABRIC_LSB, 6
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_SYS_BUSCTRL
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_BUSCTRL_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_BUSCTRL_BITS, 0x00000020
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_BUSCTRL_MSB, 5
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_BUSCTRL_LSB, 5
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_SYS_BOOTRAM
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_BOOTRAM_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_BOOTRAM_BITS, 0x00000010
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_BOOTRAM_MSB, 4
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_BOOTRAM_LSB, 4
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_SYS_ADC
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_ADC_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_ADC_BITS, 0x00000008
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_ADC_MSB, 3
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_ADC_LSB, 3
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_ADC
.equ	CLOCKS_SLEEP_EN0_CLK_ADC_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_ADC_BITS, 0x00000004
.equ	CLOCKS_SLEEP_EN0_CLK_ADC_MSB, 2
.equ	CLOCKS_SLEEP_EN0_CLK_ADC_LSB, 2
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_SYS_ACCESSCTRL
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_ACCESSCTRL_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_ACCESSCTRL_BITS, 0x00000002
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_ACCESSCTRL_MSB, 1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_ACCESSCTRL_LSB, 1
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN0_CLK_SYS_CLOCKS
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_CLOCKS_RESET, 0x1
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_CLOCKS_BITS, 0x00000001
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_CLOCKS_MSB, 0
.equ	CLOCKS_SLEEP_EN0_CLK_SYS_CLOCKS_LSB, 0
# =============================================================================
# Register    : CLOCKS_SLEEP_EN1
# Description : enable clock in sleep mode
.equ	CLOCKS_SLEEP_EN1_OFFSET, 0x000000b8
.equ	CLOCKS_SLEEP_EN1_BITS, 0x7fffffff
.equ	CLOCKS_SLEEP_EN1_RESET, 0x7fffffff
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_SYS_XOSC
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_XOSC_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_XOSC_BITS, 0x40000000
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_XOSC_MSB, 30
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_XOSC_LSB, 30
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_SYS_XIP
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_XIP_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_XIP_BITS, 0x20000000
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_XIP_MSB, 29
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_XIP_LSB, 29
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_SYS_WATCHDOG
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_WATCHDOG_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_WATCHDOG_BITS, 0x10000000
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_WATCHDOG_MSB, 28
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_WATCHDOG_LSB, 28
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_USB
.equ	CLOCKS_SLEEP_EN1_CLK_USB_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_USB_BITS, 0x08000000
.equ	CLOCKS_SLEEP_EN1_CLK_USB_MSB, 27
.equ	CLOCKS_SLEEP_EN1_CLK_USB_LSB, 27
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_SYS_USBCTRL
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_USBCTRL_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_USBCTRL_BITS, 0x04000000
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_USBCTRL_MSB, 26
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_USBCTRL_LSB, 26
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_SYS_UART1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_UART1_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_UART1_BITS, 0x02000000
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_UART1_MSB, 25
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_UART1_LSB, 25
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_PERI_UART1
.equ	CLOCKS_SLEEP_EN1_CLK_PERI_UART1_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_PERI_UART1_BITS, 0x01000000
.equ	CLOCKS_SLEEP_EN1_CLK_PERI_UART1_MSB, 24
.equ	CLOCKS_SLEEP_EN1_CLK_PERI_UART1_LSB, 24
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_SYS_UART0
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_UART0_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_UART0_BITS, 0x00800000
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_UART0_MSB, 23
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_UART0_LSB, 23
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_PERI_UART0
.equ	CLOCKS_SLEEP_EN1_CLK_PERI_UART0_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_PERI_UART0_BITS, 0x00400000
.equ	CLOCKS_SLEEP_EN1_CLK_PERI_UART0_MSB, 22
.equ	CLOCKS_SLEEP_EN1_CLK_PERI_UART0_LSB, 22
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_SYS_TRNG
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_TRNG_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_TRNG_BITS, 0x00200000
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_TRNG_MSB, 21
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_TRNG_LSB, 21
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_SYS_TIMER1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_TIMER1_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_TIMER1_BITS, 0x00100000
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_TIMER1_MSB, 20
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_TIMER1_LSB, 20
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_SYS_TIMER0
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_TIMER0_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_TIMER0_BITS, 0x00080000
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_TIMER0_MSB, 19
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_TIMER0_LSB, 19
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_SYS_TICKS
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_TICKS_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_TICKS_BITS, 0x00040000
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_TICKS_MSB, 18
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_TICKS_LSB, 18
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_REF_TICKS
.equ	CLOCKS_SLEEP_EN1_CLK_REF_TICKS_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_REF_TICKS_BITS, 0x00020000
.equ	CLOCKS_SLEEP_EN1_CLK_REF_TICKS_MSB, 17
.equ	CLOCKS_SLEEP_EN1_CLK_REF_TICKS_LSB, 17
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_SYS_TBMAN
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_TBMAN_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_TBMAN_BITS, 0x00010000
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_TBMAN_MSB, 16
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_TBMAN_LSB, 16
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_SYS_SYSINFO
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SYSINFO_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SYSINFO_BITS, 0x00008000
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SYSINFO_MSB, 15
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SYSINFO_LSB, 15
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_SYS_SYSCFG
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SYSCFG_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SYSCFG_BITS, 0x00004000
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SYSCFG_MSB, 14
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SYSCFG_LSB, 14
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_SYS_SRAM9
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM9_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM9_BITS, 0x00002000
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM9_MSB, 13
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM9_LSB, 13
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_SYS_SRAM8
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM8_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM8_BITS, 0x00001000
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM8_MSB, 12
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM8_LSB, 12
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_SYS_SRAM7
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM7_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM7_BITS, 0x00000800
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM7_MSB, 11
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM7_LSB, 11
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_SYS_SRAM6
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM6_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM6_BITS, 0x00000400
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM6_MSB, 10
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM6_LSB, 10
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_SYS_SRAM5
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM5_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM5_BITS, 0x00000200
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM5_MSB, 9
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM5_LSB, 9
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_SYS_SRAM4
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM4_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM4_BITS, 0x00000100
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM4_MSB, 8
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM4_LSB, 8
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_SYS_SRAM3
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM3_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM3_BITS, 0x00000080
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM3_MSB, 7
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM3_LSB, 7
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_SYS_SRAM2
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM2_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM2_BITS, 0x00000040
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM2_MSB, 6
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM2_LSB, 6
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_SYS_SRAM1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM1_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM1_BITS, 0x00000020
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM1_MSB, 5
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM1_LSB, 5
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_SYS_SRAM0
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM0_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM0_BITS, 0x00000010
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM0_MSB, 4
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SRAM0_LSB, 4
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_SYS_SPI1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SPI1_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SPI1_BITS, 0x00000008
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SPI1_MSB, 3
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SPI1_LSB, 3
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_PERI_SPI1
.equ	CLOCKS_SLEEP_EN1_CLK_PERI_SPI1_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_PERI_SPI1_BITS, 0x00000004
.equ	CLOCKS_SLEEP_EN1_CLK_PERI_SPI1_MSB, 2
.equ	CLOCKS_SLEEP_EN1_CLK_PERI_SPI1_LSB, 2
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_SYS_SPI0
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SPI0_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SPI0_BITS, 0x00000002
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SPI0_MSB, 1
.equ	CLOCKS_SLEEP_EN1_CLK_SYS_SPI0_LSB, 1
# -----------------------------------------------------------------------------
# Field       : CLOCKS_SLEEP_EN1_CLK_PERI_SPI0
.equ	CLOCKS_SLEEP_EN1_CLK_PERI_SPI0_RESET, 0x1
.equ	CLOCKS_SLEEP_EN1_CLK_PERI_SPI0_BITS, 0x00000001
.equ	CLOCKS_SLEEP_EN1_CLK_PERI_SPI0_MSB, 0
.equ	CLOCKS_SLEEP_EN1_CLK_PERI_SPI0_LSB, 0
# =============================================================================
# Register    : CLOCKS_ENABLED0
# Description : indicates the state of the clock enable
.equ	CLOCKS_ENABLED0_OFFSET, 0x000000bc
.equ	CLOCKS_ENABLED0_BITS, 0xffffffff
.equ	CLOCKS_ENABLED0_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_SYS_SIO
.equ	CLOCKS_ENABLED0_CLK_SYS_SIO_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_SYS_SIO_BITS, 0x80000000
.equ	CLOCKS_ENABLED0_CLK_SYS_SIO_MSB, 31
.equ	CLOCKS_ENABLED0_CLK_SYS_SIO_LSB, 31
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_SYS_SHA256
.equ	CLOCKS_ENABLED0_CLK_SYS_SHA256_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_SYS_SHA256_BITS, 0x40000000
.equ	CLOCKS_ENABLED0_CLK_SYS_SHA256_MSB, 30
.equ	CLOCKS_ENABLED0_CLK_SYS_SHA256_LSB, 30
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_SYS_PSM
.equ	CLOCKS_ENABLED0_CLK_SYS_PSM_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_SYS_PSM_BITS, 0x20000000
.equ	CLOCKS_ENABLED0_CLK_SYS_PSM_MSB, 29
.equ	CLOCKS_ENABLED0_CLK_SYS_PSM_LSB, 29
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_SYS_ROSC
.equ	CLOCKS_ENABLED0_CLK_SYS_ROSC_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_SYS_ROSC_BITS, 0x10000000
.equ	CLOCKS_ENABLED0_CLK_SYS_ROSC_MSB, 28
.equ	CLOCKS_ENABLED0_CLK_SYS_ROSC_LSB, 28
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_SYS_ROM
.equ	CLOCKS_ENABLED0_CLK_SYS_ROM_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_SYS_ROM_BITS, 0x08000000
.equ	CLOCKS_ENABLED0_CLK_SYS_ROM_MSB, 27
.equ	CLOCKS_ENABLED0_CLK_SYS_ROM_LSB, 27
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_SYS_RESETS
.equ	CLOCKS_ENABLED0_CLK_SYS_RESETS_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_SYS_RESETS_BITS, 0x04000000
.equ	CLOCKS_ENABLED0_CLK_SYS_RESETS_MSB, 26
.equ	CLOCKS_ENABLED0_CLK_SYS_RESETS_LSB, 26
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_SYS_PWM
.equ	CLOCKS_ENABLED0_CLK_SYS_PWM_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_SYS_PWM_BITS, 0x02000000
.equ	CLOCKS_ENABLED0_CLK_SYS_PWM_MSB, 25
.equ	CLOCKS_ENABLED0_CLK_SYS_PWM_LSB, 25
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_SYS_POWMAN
.equ	CLOCKS_ENABLED0_CLK_SYS_POWMAN_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_SYS_POWMAN_BITS, 0x01000000
.equ	CLOCKS_ENABLED0_CLK_SYS_POWMAN_MSB, 24
.equ	CLOCKS_ENABLED0_CLK_SYS_POWMAN_LSB, 24
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_REF_POWMAN
.equ	CLOCKS_ENABLED0_CLK_REF_POWMAN_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_REF_POWMAN_BITS, 0x00800000
.equ	CLOCKS_ENABLED0_CLK_REF_POWMAN_MSB, 23
.equ	CLOCKS_ENABLED0_CLK_REF_POWMAN_LSB, 23
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_SYS_PLL_USB
.equ	CLOCKS_ENABLED0_CLK_SYS_PLL_USB_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_SYS_PLL_USB_BITS, 0x00400000
.equ	CLOCKS_ENABLED0_CLK_SYS_PLL_USB_MSB, 22
.equ	CLOCKS_ENABLED0_CLK_SYS_PLL_USB_LSB, 22
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_SYS_PLL_SYS
.equ	CLOCKS_ENABLED0_CLK_SYS_PLL_SYS_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_SYS_PLL_SYS_BITS, 0x00200000
.equ	CLOCKS_ENABLED0_CLK_SYS_PLL_SYS_MSB, 21
.equ	CLOCKS_ENABLED0_CLK_SYS_PLL_SYS_LSB, 21
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_SYS_PIO2
.equ	CLOCKS_ENABLED0_CLK_SYS_PIO2_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_SYS_PIO2_BITS, 0x00100000
.equ	CLOCKS_ENABLED0_CLK_SYS_PIO2_MSB, 20
.equ	CLOCKS_ENABLED0_CLK_SYS_PIO2_LSB, 20
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_SYS_PIO1
.equ	CLOCKS_ENABLED0_CLK_SYS_PIO1_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_SYS_PIO1_BITS, 0x00080000
.equ	CLOCKS_ENABLED0_CLK_SYS_PIO1_MSB, 19
.equ	CLOCKS_ENABLED0_CLK_SYS_PIO1_LSB, 19
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_SYS_PIO0
.equ	CLOCKS_ENABLED0_CLK_SYS_PIO0_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_SYS_PIO0_BITS, 0x00040000
.equ	CLOCKS_ENABLED0_CLK_SYS_PIO0_MSB, 18
.equ	CLOCKS_ENABLED0_CLK_SYS_PIO0_LSB, 18
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_SYS_PADS
.equ	CLOCKS_ENABLED0_CLK_SYS_PADS_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_SYS_PADS_BITS, 0x00020000
.equ	CLOCKS_ENABLED0_CLK_SYS_PADS_MSB, 17
.equ	CLOCKS_ENABLED0_CLK_SYS_PADS_LSB, 17
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_SYS_OTP
.equ	CLOCKS_ENABLED0_CLK_SYS_OTP_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_SYS_OTP_BITS, 0x00010000
.equ	CLOCKS_ENABLED0_CLK_SYS_OTP_MSB, 16
.equ	CLOCKS_ENABLED0_CLK_SYS_OTP_LSB, 16
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_REF_OTP
.equ	CLOCKS_ENABLED0_CLK_REF_OTP_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_REF_OTP_BITS, 0x00008000
.equ	CLOCKS_ENABLED0_CLK_REF_OTP_MSB, 15
.equ	CLOCKS_ENABLED0_CLK_REF_OTP_LSB, 15
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_SYS_JTAG
.equ	CLOCKS_ENABLED0_CLK_SYS_JTAG_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_SYS_JTAG_BITS, 0x00004000
.equ	CLOCKS_ENABLED0_CLK_SYS_JTAG_MSB, 14
.equ	CLOCKS_ENABLED0_CLK_SYS_JTAG_LSB, 14
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_SYS_IO
.equ	CLOCKS_ENABLED0_CLK_SYS_IO_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_SYS_IO_BITS, 0x00002000
.equ	CLOCKS_ENABLED0_CLK_SYS_IO_MSB, 13
.equ	CLOCKS_ENABLED0_CLK_SYS_IO_LSB, 13
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_SYS_I2C1
.equ	CLOCKS_ENABLED0_CLK_SYS_I2C1_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_SYS_I2C1_BITS, 0x00001000
.equ	CLOCKS_ENABLED0_CLK_SYS_I2C1_MSB, 12
.equ	CLOCKS_ENABLED0_CLK_SYS_I2C1_LSB, 12
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_SYS_I2C0
.equ	CLOCKS_ENABLED0_CLK_SYS_I2C0_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_SYS_I2C0_BITS, 0x00000800
.equ	CLOCKS_ENABLED0_CLK_SYS_I2C0_MSB, 11
.equ	CLOCKS_ENABLED0_CLK_SYS_I2C0_LSB, 11
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_SYS_HSTX
.equ	CLOCKS_ENABLED0_CLK_SYS_HSTX_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_SYS_HSTX_BITS, 0x00000400
.equ	CLOCKS_ENABLED0_CLK_SYS_HSTX_MSB, 10
.equ	CLOCKS_ENABLED0_CLK_SYS_HSTX_LSB, 10
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_HSTX
.equ	CLOCKS_ENABLED0_CLK_HSTX_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_HSTX_BITS, 0x00000200
.equ	CLOCKS_ENABLED0_CLK_HSTX_MSB, 9
.equ	CLOCKS_ENABLED0_CLK_HSTX_LSB, 9
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_SYS_GLITCH_DETECTOR
.equ	CLOCKS_ENABLED0_CLK_SYS_GLITCH_DETECTOR_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_SYS_GLITCH_DETECTOR_BITS, 0x00000100
.equ	CLOCKS_ENABLED0_CLK_SYS_GLITCH_DETECTOR_MSB, 8
.equ	CLOCKS_ENABLED0_CLK_SYS_GLITCH_DETECTOR_LSB, 8
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_SYS_DMA
.equ	CLOCKS_ENABLED0_CLK_SYS_DMA_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_SYS_DMA_BITS, 0x00000080
.equ	CLOCKS_ENABLED0_CLK_SYS_DMA_MSB, 7
.equ	CLOCKS_ENABLED0_CLK_SYS_DMA_LSB, 7
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_SYS_BUSFABRIC
.equ	CLOCKS_ENABLED0_CLK_SYS_BUSFABRIC_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_SYS_BUSFABRIC_BITS, 0x00000040
.equ	CLOCKS_ENABLED0_CLK_SYS_BUSFABRIC_MSB, 6
.equ	CLOCKS_ENABLED0_CLK_SYS_BUSFABRIC_LSB, 6
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_SYS_BUSCTRL
.equ	CLOCKS_ENABLED0_CLK_SYS_BUSCTRL_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_SYS_BUSCTRL_BITS, 0x00000020
.equ	CLOCKS_ENABLED0_CLK_SYS_BUSCTRL_MSB, 5
.equ	CLOCKS_ENABLED0_CLK_SYS_BUSCTRL_LSB, 5
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_SYS_BOOTRAM
.equ	CLOCKS_ENABLED0_CLK_SYS_BOOTRAM_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_SYS_BOOTRAM_BITS, 0x00000010
.equ	CLOCKS_ENABLED0_CLK_SYS_BOOTRAM_MSB, 4
.equ	CLOCKS_ENABLED0_CLK_SYS_BOOTRAM_LSB, 4
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_SYS_ADC
.equ	CLOCKS_ENABLED0_CLK_SYS_ADC_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_SYS_ADC_BITS, 0x00000008
.equ	CLOCKS_ENABLED0_CLK_SYS_ADC_MSB, 3
.equ	CLOCKS_ENABLED0_CLK_SYS_ADC_LSB, 3
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_ADC
.equ	CLOCKS_ENABLED0_CLK_ADC_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_ADC_BITS, 0x00000004
.equ	CLOCKS_ENABLED0_CLK_ADC_MSB, 2
.equ	CLOCKS_ENABLED0_CLK_ADC_LSB, 2
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_SYS_ACCESSCTRL
.equ	CLOCKS_ENABLED0_CLK_SYS_ACCESSCTRL_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_SYS_ACCESSCTRL_BITS, 0x00000002
.equ	CLOCKS_ENABLED0_CLK_SYS_ACCESSCTRL_MSB, 1
.equ	CLOCKS_ENABLED0_CLK_SYS_ACCESSCTRL_LSB, 1
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED0_CLK_SYS_CLOCKS
.equ	CLOCKS_ENABLED0_CLK_SYS_CLOCKS_RESET, 0x0
.equ	CLOCKS_ENABLED0_CLK_SYS_CLOCKS_BITS, 0x00000001
.equ	CLOCKS_ENABLED0_CLK_SYS_CLOCKS_MSB, 0
.equ	CLOCKS_ENABLED0_CLK_SYS_CLOCKS_LSB, 0
# =============================================================================
# Register    : CLOCKS_ENABLED1
# Description : indicates the state of the clock enable
.equ	CLOCKS_ENABLED1_OFFSET, 0x000000c0
.equ	CLOCKS_ENABLED1_BITS, 0x7fffffff
.equ	CLOCKS_ENABLED1_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_SYS_XOSC
.equ	CLOCKS_ENABLED1_CLK_SYS_XOSC_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_SYS_XOSC_BITS, 0x40000000
.equ	CLOCKS_ENABLED1_CLK_SYS_XOSC_MSB, 30
.equ	CLOCKS_ENABLED1_CLK_SYS_XOSC_LSB, 30
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_SYS_XIP
.equ	CLOCKS_ENABLED1_CLK_SYS_XIP_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_SYS_XIP_BITS, 0x20000000
.equ	CLOCKS_ENABLED1_CLK_SYS_XIP_MSB, 29
.equ	CLOCKS_ENABLED1_CLK_SYS_XIP_LSB, 29
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_SYS_WATCHDOG
.equ	CLOCKS_ENABLED1_CLK_SYS_WATCHDOG_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_SYS_WATCHDOG_BITS, 0x10000000
.equ	CLOCKS_ENABLED1_CLK_SYS_WATCHDOG_MSB, 28
.equ	CLOCKS_ENABLED1_CLK_SYS_WATCHDOG_LSB, 28
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_USB
.equ	CLOCKS_ENABLED1_CLK_USB_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_USB_BITS, 0x08000000
.equ	CLOCKS_ENABLED1_CLK_USB_MSB, 27
.equ	CLOCKS_ENABLED1_CLK_USB_LSB, 27
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_SYS_USBCTRL
.equ	CLOCKS_ENABLED1_CLK_SYS_USBCTRL_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_SYS_USBCTRL_BITS, 0x04000000
.equ	CLOCKS_ENABLED1_CLK_SYS_USBCTRL_MSB, 26
.equ	CLOCKS_ENABLED1_CLK_SYS_USBCTRL_LSB, 26
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_SYS_UART1
.equ	CLOCKS_ENABLED1_CLK_SYS_UART1_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_SYS_UART1_BITS, 0x02000000
.equ	CLOCKS_ENABLED1_CLK_SYS_UART1_MSB, 25
.equ	CLOCKS_ENABLED1_CLK_SYS_UART1_LSB, 25
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_PERI_UART1
.equ	CLOCKS_ENABLED1_CLK_PERI_UART1_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_PERI_UART1_BITS, 0x01000000
.equ	CLOCKS_ENABLED1_CLK_PERI_UART1_MSB, 24
.equ	CLOCKS_ENABLED1_CLK_PERI_UART1_LSB, 24
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_SYS_UART0
.equ	CLOCKS_ENABLED1_CLK_SYS_UART0_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_SYS_UART0_BITS, 0x00800000
.equ	CLOCKS_ENABLED1_CLK_SYS_UART0_MSB, 23
.equ	CLOCKS_ENABLED1_CLK_SYS_UART0_LSB, 23
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_PERI_UART0
.equ	CLOCKS_ENABLED1_CLK_PERI_UART0_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_PERI_UART0_BITS, 0x00400000
.equ	CLOCKS_ENABLED1_CLK_PERI_UART0_MSB, 22
.equ	CLOCKS_ENABLED1_CLK_PERI_UART0_LSB, 22
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_SYS_TRNG
.equ	CLOCKS_ENABLED1_CLK_SYS_TRNG_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_SYS_TRNG_BITS, 0x00200000
.equ	CLOCKS_ENABLED1_CLK_SYS_TRNG_MSB, 21
.equ	CLOCKS_ENABLED1_CLK_SYS_TRNG_LSB, 21
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_SYS_TIMER1
.equ	CLOCKS_ENABLED1_CLK_SYS_TIMER1_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_SYS_TIMER1_BITS, 0x00100000
.equ	CLOCKS_ENABLED1_CLK_SYS_TIMER1_MSB, 20
.equ	CLOCKS_ENABLED1_CLK_SYS_TIMER1_LSB, 20
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_SYS_TIMER0
.equ	CLOCKS_ENABLED1_CLK_SYS_TIMER0_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_SYS_TIMER0_BITS, 0x00080000
.equ	CLOCKS_ENABLED1_CLK_SYS_TIMER0_MSB, 19
.equ	CLOCKS_ENABLED1_CLK_SYS_TIMER0_LSB, 19
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_SYS_TICKS
.equ	CLOCKS_ENABLED1_CLK_SYS_TICKS_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_SYS_TICKS_BITS, 0x00040000
.equ	CLOCKS_ENABLED1_CLK_SYS_TICKS_MSB, 18
.equ	CLOCKS_ENABLED1_CLK_SYS_TICKS_LSB, 18
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_REF_TICKS
.equ	CLOCKS_ENABLED1_CLK_REF_TICKS_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_REF_TICKS_BITS, 0x00020000
.equ	CLOCKS_ENABLED1_CLK_REF_TICKS_MSB, 17
.equ	CLOCKS_ENABLED1_CLK_REF_TICKS_LSB, 17
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_SYS_TBMAN
.equ	CLOCKS_ENABLED1_CLK_SYS_TBMAN_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_SYS_TBMAN_BITS, 0x00010000
.equ	CLOCKS_ENABLED1_CLK_SYS_TBMAN_MSB, 16
.equ	CLOCKS_ENABLED1_CLK_SYS_TBMAN_LSB, 16
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_SYS_SYSINFO
.equ	CLOCKS_ENABLED1_CLK_SYS_SYSINFO_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_SYS_SYSINFO_BITS, 0x00008000
.equ	CLOCKS_ENABLED1_CLK_SYS_SYSINFO_MSB, 15
.equ	CLOCKS_ENABLED1_CLK_SYS_SYSINFO_LSB, 15
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_SYS_SYSCFG
.equ	CLOCKS_ENABLED1_CLK_SYS_SYSCFG_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_SYS_SYSCFG_BITS, 0x00004000
.equ	CLOCKS_ENABLED1_CLK_SYS_SYSCFG_MSB, 14
.equ	CLOCKS_ENABLED1_CLK_SYS_SYSCFG_LSB, 14
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_SYS_SRAM9
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM9_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM9_BITS, 0x00002000
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM9_MSB, 13
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM9_LSB, 13
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_SYS_SRAM8
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM8_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM8_BITS, 0x00001000
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM8_MSB, 12
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM8_LSB, 12
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_SYS_SRAM7
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM7_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM7_BITS, 0x00000800
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM7_MSB, 11
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM7_LSB, 11
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_SYS_SRAM6
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM6_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM6_BITS, 0x00000400
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM6_MSB, 10
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM6_LSB, 10
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_SYS_SRAM5
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM5_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM5_BITS, 0x00000200
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM5_MSB, 9
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM5_LSB, 9
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_SYS_SRAM4
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM4_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM4_BITS, 0x00000100
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM4_MSB, 8
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM4_LSB, 8
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_SYS_SRAM3
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM3_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM3_BITS, 0x00000080
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM3_MSB, 7
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM3_LSB, 7
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_SYS_SRAM2
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM2_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM2_BITS, 0x00000040
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM2_MSB, 6
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM2_LSB, 6
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_SYS_SRAM1
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM1_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM1_BITS, 0x00000020
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM1_MSB, 5
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM1_LSB, 5
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_SYS_SRAM0
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM0_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM0_BITS, 0x00000010
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM0_MSB, 4
.equ	CLOCKS_ENABLED1_CLK_SYS_SRAM0_LSB, 4
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_SYS_SPI1
.equ	CLOCKS_ENABLED1_CLK_SYS_SPI1_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_SYS_SPI1_BITS, 0x00000008
.equ	CLOCKS_ENABLED1_CLK_SYS_SPI1_MSB, 3
.equ	CLOCKS_ENABLED1_CLK_SYS_SPI1_LSB, 3
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_PERI_SPI1
.equ	CLOCKS_ENABLED1_CLK_PERI_SPI1_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_PERI_SPI1_BITS, 0x00000004
.equ	CLOCKS_ENABLED1_CLK_PERI_SPI1_MSB, 2
.equ	CLOCKS_ENABLED1_CLK_PERI_SPI1_LSB, 2
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_SYS_SPI0
.equ	CLOCKS_ENABLED1_CLK_SYS_SPI0_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_SYS_SPI0_BITS, 0x00000002
.equ	CLOCKS_ENABLED1_CLK_SYS_SPI0_MSB, 1
.equ	CLOCKS_ENABLED1_CLK_SYS_SPI0_LSB, 1
# -----------------------------------------------------------------------------
# Field       : CLOCKS_ENABLED1_CLK_PERI_SPI0
.equ	CLOCKS_ENABLED1_CLK_PERI_SPI0_RESET, 0x0
.equ	CLOCKS_ENABLED1_CLK_PERI_SPI0_BITS, 0x00000001
.equ	CLOCKS_ENABLED1_CLK_PERI_SPI0_MSB, 0
.equ	CLOCKS_ENABLED1_CLK_PERI_SPI0_LSB, 0
# =============================================================================
# Register    : CLOCKS_INTR
# Description : Raw Interrupts
.equ	CLOCKS_INTR_OFFSET, 0x000000c4
.equ	CLOCKS_INTR_BITS, 0x00000001
.equ	CLOCKS_INTR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_INTR_CLK_SYS_RESUS
.equ	CLOCKS_INTR_CLK_SYS_RESUS_RESET, 0x0
.equ	CLOCKS_INTR_CLK_SYS_RESUS_BITS, 0x00000001
.equ	CLOCKS_INTR_CLK_SYS_RESUS_MSB, 0
.equ	CLOCKS_INTR_CLK_SYS_RESUS_LSB, 0
# =============================================================================
# Register    : CLOCKS_INTE
# Description : Interrupt Enable
.equ	CLOCKS_INTE_OFFSET, 0x000000c8
.equ	CLOCKS_INTE_BITS, 0x00000001
.equ	CLOCKS_INTE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_INTE_CLK_SYS_RESUS
.equ	CLOCKS_INTE_CLK_SYS_RESUS_RESET, 0x0
.equ	CLOCKS_INTE_CLK_SYS_RESUS_BITS, 0x00000001
.equ	CLOCKS_INTE_CLK_SYS_RESUS_MSB, 0
.equ	CLOCKS_INTE_CLK_SYS_RESUS_LSB, 0
# =============================================================================
# Register    : CLOCKS_INTF
# Description : Interrupt Force
.equ	CLOCKS_INTF_OFFSET, 0x000000cc
.equ	CLOCKS_INTF_BITS, 0x00000001
.equ	CLOCKS_INTF_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_INTF_CLK_SYS_RESUS
.equ	CLOCKS_INTF_CLK_SYS_RESUS_RESET, 0x0
.equ	CLOCKS_INTF_CLK_SYS_RESUS_BITS, 0x00000001
.equ	CLOCKS_INTF_CLK_SYS_RESUS_MSB, 0
.equ	CLOCKS_INTF_CLK_SYS_RESUS_LSB, 0
# =============================================================================
# Register    : CLOCKS_INTS
# Description : Interrupt status after masking & forcing
.equ	CLOCKS_INTS_OFFSET, 0x000000d0
.equ	CLOCKS_INTS_BITS, 0x00000001
.equ	CLOCKS_INTS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : CLOCKS_INTS_CLK_SYS_RESUS
.equ	CLOCKS_INTS_CLK_SYS_RESUS_RESET, 0x0
.equ	CLOCKS_INTS_CLK_SYS_RESUS_BITS, 0x00000001
.equ	CLOCKS_INTS_CLK_SYS_RESUS_MSB, 0
.equ	CLOCKS_INTS_CLK_SYS_RESUS_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_CLOCKS_H
