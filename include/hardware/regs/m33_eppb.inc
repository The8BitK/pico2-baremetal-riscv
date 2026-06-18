#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : M33_EPPB
# Version        : 1
# Bus type       : apb
# Description    : Cortex-M33 EPPB vendor register block for RP2350
# =============================================================================
.ifndef	_HARDWARE_REGS_M33_EPPB_H
.set	_HARDWARE_REGS_M33_EPPB_H, 1
# =============================================================================
# Register    : M33_EPPB_NMI_MASK0
# Description : NMI mask for IRQs 0 through 31. This register is core-local,
#               and is reset by a processor warm reset.
.equ	M33_EPPB_NMI_MASK0_OFFSET, 0x00000000
.equ	M33_EPPB_NMI_MASK0_BITS, 0xffffffff
.equ	M33_EPPB_NMI_MASK0_RESET, 0x00000000
.equ	M33_EPPB_NMI_MASK0_MSB, 31
.equ	M33_EPPB_NMI_MASK0_LSB, 0
# =============================================================================
# Register    : M33_EPPB_NMI_MASK1
# Description : NMI mask for IRQs 0 though 51. This register is core-local, and
#               is reset by a processor warm reset.
.equ	M33_EPPB_NMI_MASK1_OFFSET, 0x00000004
.equ	M33_EPPB_NMI_MASK1_BITS, 0x000fffff
.equ	M33_EPPB_NMI_MASK1_RESET, 0x00000000
.equ	M33_EPPB_NMI_MASK1_MSB, 19
.equ	M33_EPPB_NMI_MASK1_LSB, 0
# =============================================================================
# Register    : M33_EPPB_SLEEPCTRL
# Description : Nonstandard sleep control register
.equ	M33_EPPB_SLEEPCTRL_OFFSET, 0x00000008
.equ	M33_EPPB_SLEEPCTRL_BITS, 0x00000007
.equ	M33_EPPB_SLEEPCTRL_RESET, 0x00000002
# -----------------------------------------------------------------------------
# Field       : M33_EPPB_SLEEPCTRL_WICENACK
# Description : Status signal from the processor's interrupt controller.
#               Changes to WICENREQ are eventually reflected in WICENACK.
.equ	M33_EPPB_SLEEPCTRL_WICENACK_RESET, 0x0
.equ	M33_EPPB_SLEEPCTRL_WICENACK_BITS, 0x00000004
.equ	M33_EPPB_SLEEPCTRL_WICENACK_MSB, 2
.equ	M33_EPPB_SLEEPCTRL_WICENACK_LSB, 2
# -----------------------------------------------------------------------------
# Field       : M33_EPPB_SLEEPCTRL_WICENREQ
# Description : Request that the next processor deep sleep is a WIC sleep.
#               After setting this bit, before sleeping, poll WICENACK to
#               ensure the processor interrupt controller has acknowledged the
#               change.
.equ	M33_EPPB_SLEEPCTRL_WICENREQ_RESET, 0x1
.equ	M33_EPPB_SLEEPCTRL_WICENREQ_BITS, 0x00000002
.equ	M33_EPPB_SLEEPCTRL_WICENREQ_MSB, 1
.equ	M33_EPPB_SLEEPCTRL_WICENREQ_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_EPPB_SLEEPCTRL_LIGHT_SLEEP
# Description : By default, any processor sleep will deassert the system-level
#               clock request. Reenabling the clocks incurs 5 cycles of
#               additional latency on wakeup.
#
#               Setting LIGHT_SLEEP to 1 keeps the clock request asserted
#               during a normal sleep (Arm SCR.SLEEPDEEP = 0), for faster
#               wakeup. Processor deep sleep (Arm SCR.SLEEPDEEP = 1) is not
#               affected, and will always deassert the system-level clock
#               request.
.equ	M33_EPPB_SLEEPCTRL_LIGHT_SLEEP_RESET, 0x0
.equ	M33_EPPB_SLEEPCTRL_LIGHT_SLEEP_BITS, 0x00000001
.equ	M33_EPPB_SLEEPCTRL_LIGHT_SLEEP_MSB, 0
.equ	M33_EPPB_SLEEPCTRL_LIGHT_SLEEP_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_M33_EPPB_H
