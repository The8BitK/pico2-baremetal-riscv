#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : PLL
# Version        : 1
# Bus type       : apb
# =============================================================================
.ifndef	_HARDWARE_REGS_PLL_H
.set	_HARDWARE_REGS_PLL_H, 1
# =============================================================================
# Register    : PLL_CS
# Description : Control and Status
#               GENERAL CONSTRAINTS:
#               Reference clock frequency min=5MHz, max=800MHz
#               Feedback divider min=16, max=320
#               VCO frequency min=750MHz, max=1600MHz
.equ	PLL_CS_OFFSET, 0x00000000
.equ	PLL_CS_BITS, 0xc000013f
.equ	PLL_CS_RESET, 0x00000001
# -----------------------------------------------------------------------------
# Field       : PLL_CS_LOCK
# Description : PLL is locked
.equ	PLL_CS_LOCK_RESET, 0x0
.equ	PLL_CS_LOCK_BITS, 0x80000000
.equ	PLL_CS_LOCK_MSB, 31
.equ	PLL_CS_LOCK_LSB, 31
# -----------------------------------------------------------------------------
# Field       : PLL_CS_LOCK_N
# Description : PLL is not locked
#               Ideally this is cleared when PLL lock is seen and this should
#               never normally be set
.equ	PLL_CS_LOCK_N_RESET, 0x0
.equ	PLL_CS_LOCK_N_BITS, 0x40000000
.equ	PLL_CS_LOCK_N_MSB, 30
.equ	PLL_CS_LOCK_N_LSB, 30
# -----------------------------------------------------------------------------
# Field       : PLL_CS_BYPASS
# Description : Passes the reference clock to the output instead of the divided
#               VCO. The VCO continues to run so the user can switch between
#               the reference clock and the divided VCO but the output will
#               glitch when doing so.
.equ	PLL_CS_BYPASS_RESET, 0x0
.equ	PLL_CS_BYPASS_BITS, 0x00000100
.equ	PLL_CS_BYPASS_MSB, 8
.equ	PLL_CS_BYPASS_LSB, 8
# -----------------------------------------------------------------------------
# Field       : PLL_CS_REFDIV
# Description : Divides the PLL input reference clock.
#               Behaviour is undefined for div=0.
#               PLL output will be unpredictable during refdiv changes, wait
#               for lock=1 before using it.
.equ	PLL_CS_REFDIV_RESET, 0x01
.equ	PLL_CS_REFDIV_BITS, 0x0000003f
.equ	PLL_CS_REFDIV_MSB, 5
.equ	PLL_CS_REFDIV_LSB, 0
# =============================================================================
# Register    : PLL_PWR
# Description : Controls the PLL power modes.
.equ	PLL_PWR_OFFSET, 0x00000004
.equ	PLL_PWR_BITS, 0x0000002d
.equ	PLL_PWR_RESET, 0x0000002d
# -----------------------------------------------------------------------------
# Field       : PLL_PWR_VCOPD
# Description : PLL VCO powerdown
#               To save power set high when PLL output not required or
#               bypass=1.
.equ	PLL_PWR_VCOPD_RESET, 0x1
.equ	PLL_PWR_VCOPD_BITS, 0x00000020
.equ	PLL_PWR_VCOPD_MSB, 5
.equ	PLL_PWR_VCOPD_LSB, 5
# -----------------------------------------------------------------------------
# Field       : PLL_PWR_POSTDIVPD
# Description : PLL post divider powerdown
#               To save power set high when PLL output not required or
#               bypass=1.
.equ	PLL_PWR_POSTDIVPD_RESET, 0x1
.equ	PLL_PWR_POSTDIVPD_BITS, 0x00000008
.equ	PLL_PWR_POSTDIVPD_MSB, 3
.equ	PLL_PWR_POSTDIVPD_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PLL_PWR_DSMPD
# Description : PLL DSM powerdown
#               Nothing is achieved by setting this low.
.equ	PLL_PWR_DSMPD_RESET, 0x1
.equ	PLL_PWR_DSMPD_BITS, 0x00000004
.equ	PLL_PWR_DSMPD_MSB, 2
.equ	PLL_PWR_DSMPD_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PLL_PWR_PD
# Description : PLL powerdown
#               To save power set high when PLL output not required.
.equ	PLL_PWR_PD_RESET, 0x1
.equ	PLL_PWR_PD_BITS, 0x00000001
.equ	PLL_PWR_PD_MSB, 0
.equ	PLL_PWR_PD_LSB, 0
# =============================================================================
# Register    : PLL_FBDIV_INT
# Description : Feedback divisor
#               (note: this PLL does not support fractional division)
#               see ctrl reg description for constraints
.equ	PLL_FBDIV_INT_OFFSET, 0x00000008
.equ	PLL_FBDIV_INT_BITS, 0x00000fff
.equ	PLL_FBDIV_INT_RESET, 0x00000000
.equ	PLL_FBDIV_INT_MSB, 11
.equ	PLL_FBDIV_INT_LSB, 0
# =============================================================================
# Register    : PLL_PRIM
# Description : Controls the PLL post dividers for the primary output
#               (note: this PLL does not have a secondary output)
#               the primary output is driven from VCO divided by
#               postdiv1*postdiv2
.equ	PLL_PRIM_OFFSET, 0x0000000c
.equ	PLL_PRIM_BITS, 0x00077000
.equ	PLL_PRIM_RESET, 0x00077000
# -----------------------------------------------------------------------------
# Field       : PLL_PRIM_POSTDIV1
# Description : divide by 1-7
.equ	PLL_PRIM_POSTDIV1_RESET, 0x7
.equ	PLL_PRIM_POSTDIV1_BITS, 0x00070000
.equ	PLL_PRIM_POSTDIV1_MSB, 18
.equ	PLL_PRIM_POSTDIV1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PLL_PRIM_POSTDIV2
# Description : divide by 1-7
.equ	PLL_PRIM_POSTDIV2_RESET, 0x7
.equ	PLL_PRIM_POSTDIV2_BITS, 0x00007000
.equ	PLL_PRIM_POSTDIV2_MSB, 14
.equ	PLL_PRIM_POSTDIV2_LSB, 12
# =============================================================================
# Register    : PLL_INTR
# Description : Raw Interrupts
.equ	PLL_INTR_OFFSET, 0x00000010
.equ	PLL_INTR_BITS, 0x00000001
.equ	PLL_INTR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PLL_INTR_LOCK_N_STICKY
.equ	PLL_INTR_LOCK_N_STICKY_RESET, 0x0
.equ	PLL_INTR_LOCK_N_STICKY_BITS, 0x00000001
.equ	PLL_INTR_LOCK_N_STICKY_MSB, 0
.equ	PLL_INTR_LOCK_N_STICKY_LSB, 0
# =============================================================================
# Register    : PLL_INTE
# Description : Interrupt Enable
.equ	PLL_INTE_OFFSET, 0x00000014
.equ	PLL_INTE_BITS, 0x00000001
.equ	PLL_INTE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PLL_INTE_LOCK_N_STICKY
.equ	PLL_INTE_LOCK_N_STICKY_RESET, 0x0
.equ	PLL_INTE_LOCK_N_STICKY_BITS, 0x00000001
.equ	PLL_INTE_LOCK_N_STICKY_MSB, 0
.equ	PLL_INTE_LOCK_N_STICKY_LSB, 0
# =============================================================================
# Register    : PLL_INTF
# Description : Interrupt Force
.equ	PLL_INTF_OFFSET, 0x00000018
.equ	PLL_INTF_BITS, 0x00000001
.equ	PLL_INTF_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PLL_INTF_LOCK_N_STICKY
.equ	PLL_INTF_LOCK_N_STICKY_RESET, 0x0
.equ	PLL_INTF_LOCK_N_STICKY_BITS, 0x00000001
.equ	PLL_INTF_LOCK_N_STICKY_MSB, 0
.equ	PLL_INTF_LOCK_N_STICKY_LSB, 0
# =============================================================================
# Register    : PLL_INTS
# Description : Interrupt status after masking & forcing
.equ	PLL_INTS_OFFSET, 0x0000001c
.equ	PLL_INTS_BITS, 0x00000001
.equ	PLL_INTS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PLL_INTS_LOCK_N_STICKY
.equ	PLL_INTS_LOCK_N_STICKY_RESET, 0x0
.equ	PLL_INTS_LOCK_N_STICKY_BITS, 0x00000001
.equ	PLL_INTS_LOCK_N_STICKY_MSB, 0
.equ	PLL_INTS_LOCK_N_STICKY_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_PLL_H
