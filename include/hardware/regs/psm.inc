#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : PSM
# Version        : 1
# Bus type       : apb
# =============================================================================
.ifndef	_HARDWARE_REGS_PSM_H
.set	_HARDWARE_REGS_PSM_H, 1
# =============================================================================
# Register    : PSM_FRCE_ON
# Description : Force block out of reset (i.e. power it on)
.equ	PSM_FRCE_ON_OFFSET, 0x00000000
.equ	PSM_FRCE_ON_BITS, 0x01ffffff
.equ	PSM_FRCE_ON_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_ON_PROC1
.equ	PSM_FRCE_ON_PROC1_RESET, 0x0
.equ	PSM_FRCE_ON_PROC1_BITS, 0x01000000
.equ	PSM_FRCE_ON_PROC1_MSB, 24
.equ	PSM_FRCE_ON_PROC1_LSB, 24
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_ON_PROC0
.equ	PSM_FRCE_ON_PROC0_RESET, 0x0
.equ	PSM_FRCE_ON_PROC0_BITS, 0x00800000
.equ	PSM_FRCE_ON_PROC0_MSB, 23
.equ	PSM_FRCE_ON_PROC0_LSB, 23
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_ON_ACCESSCTRL
.equ	PSM_FRCE_ON_ACCESSCTRL_RESET, 0x0
.equ	PSM_FRCE_ON_ACCESSCTRL_BITS, 0x00400000
.equ	PSM_FRCE_ON_ACCESSCTRL_MSB, 22
.equ	PSM_FRCE_ON_ACCESSCTRL_LSB, 22
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_ON_SIO
.equ	PSM_FRCE_ON_SIO_RESET, 0x0
.equ	PSM_FRCE_ON_SIO_BITS, 0x00200000
.equ	PSM_FRCE_ON_SIO_MSB, 21
.equ	PSM_FRCE_ON_SIO_LSB, 21
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_ON_XIP
.equ	PSM_FRCE_ON_XIP_RESET, 0x0
.equ	PSM_FRCE_ON_XIP_BITS, 0x00100000
.equ	PSM_FRCE_ON_XIP_MSB, 20
.equ	PSM_FRCE_ON_XIP_LSB, 20
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_ON_SRAM9
.equ	PSM_FRCE_ON_SRAM9_RESET, 0x0
.equ	PSM_FRCE_ON_SRAM9_BITS, 0x00080000
.equ	PSM_FRCE_ON_SRAM9_MSB, 19
.equ	PSM_FRCE_ON_SRAM9_LSB, 19
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_ON_SRAM8
.equ	PSM_FRCE_ON_SRAM8_RESET, 0x0
.equ	PSM_FRCE_ON_SRAM8_BITS, 0x00040000
.equ	PSM_FRCE_ON_SRAM8_MSB, 18
.equ	PSM_FRCE_ON_SRAM8_LSB, 18
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_ON_SRAM7
.equ	PSM_FRCE_ON_SRAM7_RESET, 0x0
.equ	PSM_FRCE_ON_SRAM7_BITS, 0x00020000
.equ	PSM_FRCE_ON_SRAM7_MSB, 17
.equ	PSM_FRCE_ON_SRAM7_LSB, 17
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_ON_SRAM6
.equ	PSM_FRCE_ON_SRAM6_RESET, 0x0
.equ	PSM_FRCE_ON_SRAM6_BITS, 0x00010000
.equ	PSM_FRCE_ON_SRAM6_MSB, 16
.equ	PSM_FRCE_ON_SRAM6_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_ON_SRAM5
.equ	PSM_FRCE_ON_SRAM5_RESET, 0x0
.equ	PSM_FRCE_ON_SRAM5_BITS, 0x00008000
.equ	PSM_FRCE_ON_SRAM5_MSB, 15
.equ	PSM_FRCE_ON_SRAM5_LSB, 15
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_ON_SRAM4
.equ	PSM_FRCE_ON_SRAM4_RESET, 0x0
.equ	PSM_FRCE_ON_SRAM4_BITS, 0x00004000
.equ	PSM_FRCE_ON_SRAM4_MSB, 14
.equ	PSM_FRCE_ON_SRAM4_LSB, 14
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_ON_SRAM3
.equ	PSM_FRCE_ON_SRAM3_RESET, 0x0
.equ	PSM_FRCE_ON_SRAM3_BITS, 0x00002000
.equ	PSM_FRCE_ON_SRAM3_MSB, 13
.equ	PSM_FRCE_ON_SRAM3_LSB, 13
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_ON_SRAM2
.equ	PSM_FRCE_ON_SRAM2_RESET, 0x0
.equ	PSM_FRCE_ON_SRAM2_BITS, 0x00001000
.equ	PSM_FRCE_ON_SRAM2_MSB, 12
.equ	PSM_FRCE_ON_SRAM2_LSB, 12
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_ON_SRAM1
.equ	PSM_FRCE_ON_SRAM1_RESET, 0x0
.equ	PSM_FRCE_ON_SRAM1_BITS, 0x00000800
.equ	PSM_FRCE_ON_SRAM1_MSB, 11
.equ	PSM_FRCE_ON_SRAM1_LSB, 11
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_ON_SRAM0
.equ	PSM_FRCE_ON_SRAM0_RESET, 0x0
.equ	PSM_FRCE_ON_SRAM0_BITS, 0x00000400
.equ	PSM_FRCE_ON_SRAM0_MSB, 10
.equ	PSM_FRCE_ON_SRAM0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_ON_BOOTRAM
.equ	PSM_FRCE_ON_BOOTRAM_RESET, 0x0
.equ	PSM_FRCE_ON_BOOTRAM_BITS, 0x00000200
.equ	PSM_FRCE_ON_BOOTRAM_MSB, 9
.equ	PSM_FRCE_ON_BOOTRAM_LSB, 9
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_ON_ROM
.equ	PSM_FRCE_ON_ROM_RESET, 0x0
.equ	PSM_FRCE_ON_ROM_BITS, 0x00000100
.equ	PSM_FRCE_ON_ROM_MSB, 8
.equ	PSM_FRCE_ON_ROM_LSB, 8
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_ON_BUSFABRIC
.equ	PSM_FRCE_ON_BUSFABRIC_RESET, 0x0
.equ	PSM_FRCE_ON_BUSFABRIC_BITS, 0x00000080
.equ	PSM_FRCE_ON_BUSFABRIC_MSB, 7
.equ	PSM_FRCE_ON_BUSFABRIC_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_ON_PSM_READY
.equ	PSM_FRCE_ON_PSM_READY_RESET, 0x0
.equ	PSM_FRCE_ON_PSM_READY_BITS, 0x00000040
.equ	PSM_FRCE_ON_PSM_READY_MSB, 6
.equ	PSM_FRCE_ON_PSM_READY_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_ON_CLOCKS
.equ	PSM_FRCE_ON_CLOCKS_RESET, 0x0
.equ	PSM_FRCE_ON_CLOCKS_BITS, 0x00000020
.equ	PSM_FRCE_ON_CLOCKS_MSB, 5
.equ	PSM_FRCE_ON_CLOCKS_LSB, 5
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_ON_RESETS
.equ	PSM_FRCE_ON_RESETS_RESET, 0x0
.equ	PSM_FRCE_ON_RESETS_BITS, 0x00000010
.equ	PSM_FRCE_ON_RESETS_MSB, 4
.equ	PSM_FRCE_ON_RESETS_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_ON_XOSC
.equ	PSM_FRCE_ON_XOSC_RESET, 0x0
.equ	PSM_FRCE_ON_XOSC_BITS, 0x00000008
.equ	PSM_FRCE_ON_XOSC_MSB, 3
.equ	PSM_FRCE_ON_XOSC_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_ON_ROSC
.equ	PSM_FRCE_ON_ROSC_RESET, 0x0
.equ	PSM_FRCE_ON_ROSC_BITS, 0x00000004
.equ	PSM_FRCE_ON_ROSC_MSB, 2
.equ	PSM_FRCE_ON_ROSC_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_ON_OTP
.equ	PSM_FRCE_ON_OTP_RESET, 0x0
.equ	PSM_FRCE_ON_OTP_BITS, 0x00000002
.equ	PSM_FRCE_ON_OTP_MSB, 1
.equ	PSM_FRCE_ON_OTP_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_ON_PROC_COLD
.equ	PSM_FRCE_ON_PROC_COLD_RESET, 0x0
.equ	PSM_FRCE_ON_PROC_COLD_BITS, 0x00000001
.equ	PSM_FRCE_ON_PROC_COLD_MSB, 0
.equ	PSM_FRCE_ON_PROC_COLD_LSB, 0
# =============================================================================
# Register    : PSM_FRCE_OFF
# Description : Force into reset (i.e. power it off)
.equ	PSM_FRCE_OFF_OFFSET, 0x00000004
.equ	PSM_FRCE_OFF_BITS, 0x01ffffff
.equ	PSM_FRCE_OFF_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_OFF_PROC1
.equ	PSM_FRCE_OFF_PROC1_RESET, 0x0
.equ	PSM_FRCE_OFF_PROC1_BITS, 0x01000000
.equ	PSM_FRCE_OFF_PROC1_MSB, 24
.equ	PSM_FRCE_OFF_PROC1_LSB, 24
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_OFF_PROC0
.equ	PSM_FRCE_OFF_PROC0_RESET, 0x0
.equ	PSM_FRCE_OFF_PROC0_BITS, 0x00800000
.equ	PSM_FRCE_OFF_PROC0_MSB, 23
.equ	PSM_FRCE_OFF_PROC0_LSB, 23
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_OFF_ACCESSCTRL
.equ	PSM_FRCE_OFF_ACCESSCTRL_RESET, 0x0
.equ	PSM_FRCE_OFF_ACCESSCTRL_BITS, 0x00400000
.equ	PSM_FRCE_OFF_ACCESSCTRL_MSB, 22
.equ	PSM_FRCE_OFF_ACCESSCTRL_LSB, 22
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_OFF_SIO
.equ	PSM_FRCE_OFF_SIO_RESET, 0x0
.equ	PSM_FRCE_OFF_SIO_BITS, 0x00200000
.equ	PSM_FRCE_OFF_SIO_MSB, 21
.equ	PSM_FRCE_OFF_SIO_LSB, 21
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_OFF_XIP
.equ	PSM_FRCE_OFF_XIP_RESET, 0x0
.equ	PSM_FRCE_OFF_XIP_BITS, 0x00100000
.equ	PSM_FRCE_OFF_XIP_MSB, 20
.equ	PSM_FRCE_OFF_XIP_LSB, 20
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_OFF_SRAM9
.equ	PSM_FRCE_OFF_SRAM9_RESET, 0x0
.equ	PSM_FRCE_OFF_SRAM9_BITS, 0x00080000
.equ	PSM_FRCE_OFF_SRAM9_MSB, 19
.equ	PSM_FRCE_OFF_SRAM9_LSB, 19
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_OFF_SRAM8
.equ	PSM_FRCE_OFF_SRAM8_RESET, 0x0
.equ	PSM_FRCE_OFF_SRAM8_BITS, 0x00040000
.equ	PSM_FRCE_OFF_SRAM8_MSB, 18
.equ	PSM_FRCE_OFF_SRAM8_LSB, 18
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_OFF_SRAM7
.equ	PSM_FRCE_OFF_SRAM7_RESET, 0x0
.equ	PSM_FRCE_OFF_SRAM7_BITS, 0x00020000
.equ	PSM_FRCE_OFF_SRAM7_MSB, 17
.equ	PSM_FRCE_OFF_SRAM7_LSB, 17
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_OFF_SRAM6
.equ	PSM_FRCE_OFF_SRAM6_RESET, 0x0
.equ	PSM_FRCE_OFF_SRAM6_BITS, 0x00010000
.equ	PSM_FRCE_OFF_SRAM6_MSB, 16
.equ	PSM_FRCE_OFF_SRAM6_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_OFF_SRAM5
.equ	PSM_FRCE_OFF_SRAM5_RESET, 0x0
.equ	PSM_FRCE_OFF_SRAM5_BITS, 0x00008000
.equ	PSM_FRCE_OFF_SRAM5_MSB, 15
.equ	PSM_FRCE_OFF_SRAM5_LSB, 15
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_OFF_SRAM4
.equ	PSM_FRCE_OFF_SRAM4_RESET, 0x0
.equ	PSM_FRCE_OFF_SRAM4_BITS, 0x00004000
.equ	PSM_FRCE_OFF_SRAM4_MSB, 14
.equ	PSM_FRCE_OFF_SRAM4_LSB, 14
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_OFF_SRAM3
.equ	PSM_FRCE_OFF_SRAM3_RESET, 0x0
.equ	PSM_FRCE_OFF_SRAM3_BITS, 0x00002000
.equ	PSM_FRCE_OFF_SRAM3_MSB, 13
.equ	PSM_FRCE_OFF_SRAM3_LSB, 13
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_OFF_SRAM2
.equ	PSM_FRCE_OFF_SRAM2_RESET, 0x0
.equ	PSM_FRCE_OFF_SRAM2_BITS, 0x00001000
.equ	PSM_FRCE_OFF_SRAM2_MSB, 12
.equ	PSM_FRCE_OFF_SRAM2_LSB, 12
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_OFF_SRAM1
.equ	PSM_FRCE_OFF_SRAM1_RESET, 0x0
.equ	PSM_FRCE_OFF_SRAM1_BITS, 0x00000800
.equ	PSM_FRCE_OFF_SRAM1_MSB, 11
.equ	PSM_FRCE_OFF_SRAM1_LSB, 11
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_OFF_SRAM0
.equ	PSM_FRCE_OFF_SRAM0_RESET, 0x0
.equ	PSM_FRCE_OFF_SRAM0_BITS, 0x00000400
.equ	PSM_FRCE_OFF_SRAM0_MSB, 10
.equ	PSM_FRCE_OFF_SRAM0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_OFF_BOOTRAM
.equ	PSM_FRCE_OFF_BOOTRAM_RESET, 0x0
.equ	PSM_FRCE_OFF_BOOTRAM_BITS, 0x00000200
.equ	PSM_FRCE_OFF_BOOTRAM_MSB, 9
.equ	PSM_FRCE_OFF_BOOTRAM_LSB, 9
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_OFF_ROM
.equ	PSM_FRCE_OFF_ROM_RESET, 0x0
.equ	PSM_FRCE_OFF_ROM_BITS, 0x00000100
.equ	PSM_FRCE_OFF_ROM_MSB, 8
.equ	PSM_FRCE_OFF_ROM_LSB, 8
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_OFF_BUSFABRIC
.equ	PSM_FRCE_OFF_BUSFABRIC_RESET, 0x0
.equ	PSM_FRCE_OFF_BUSFABRIC_BITS, 0x00000080
.equ	PSM_FRCE_OFF_BUSFABRIC_MSB, 7
.equ	PSM_FRCE_OFF_BUSFABRIC_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_OFF_PSM_READY
.equ	PSM_FRCE_OFF_PSM_READY_RESET, 0x0
.equ	PSM_FRCE_OFF_PSM_READY_BITS, 0x00000040
.equ	PSM_FRCE_OFF_PSM_READY_MSB, 6
.equ	PSM_FRCE_OFF_PSM_READY_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_OFF_CLOCKS
.equ	PSM_FRCE_OFF_CLOCKS_RESET, 0x0
.equ	PSM_FRCE_OFF_CLOCKS_BITS, 0x00000020
.equ	PSM_FRCE_OFF_CLOCKS_MSB, 5
.equ	PSM_FRCE_OFF_CLOCKS_LSB, 5
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_OFF_RESETS
.equ	PSM_FRCE_OFF_RESETS_RESET, 0x0
.equ	PSM_FRCE_OFF_RESETS_BITS, 0x00000010
.equ	PSM_FRCE_OFF_RESETS_MSB, 4
.equ	PSM_FRCE_OFF_RESETS_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_OFF_XOSC
.equ	PSM_FRCE_OFF_XOSC_RESET, 0x0
.equ	PSM_FRCE_OFF_XOSC_BITS, 0x00000008
.equ	PSM_FRCE_OFF_XOSC_MSB, 3
.equ	PSM_FRCE_OFF_XOSC_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_OFF_ROSC
.equ	PSM_FRCE_OFF_ROSC_RESET, 0x0
.equ	PSM_FRCE_OFF_ROSC_BITS, 0x00000004
.equ	PSM_FRCE_OFF_ROSC_MSB, 2
.equ	PSM_FRCE_OFF_ROSC_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_OFF_OTP
.equ	PSM_FRCE_OFF_OTP_RESET, 0x0
.equ	PSM_FRCE_OFF_OTP_BITS, 0x00000002
.equ	PSM_FRCE_OFF_OTP_MSB, 1
.equ	PSM_FRCE_OFF_OTP_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PSM_FRCE_OFF_PROC_COLD
.equ	PSM_FRCE_OFF_PROC_COLD_RESET, 0x0
.equ	PSM_FRCE_OFF_PROC_COLD_BITS, 0x00000001
.equ	PSM_FRCE_OFF_PROC_COLD_MSB, 0
.equ	PSM_FRCE_OFF_PROC_COLD_LSB, 0
# =============================================================================
# Register    : PSM_WDSEL
# Description : Set to 1 if the watchdog should reset this
.equ	PSM_WDSEL_OFFSET, 0x00000008
.equ	PSM_WDSEL_BITS, 0x01ffffff
.equ	PSM_WDSEL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PSM_WDSEL_PROC1
.equ	PSM_WDSEL_PROC1_RESET, 0x0
.equ	PSM_WDSEL_PROC1_BITS, 0x01000000
.equ	PSM_WDSEL_PROC1_MSB, 24
.equ	PSM_WDSEL_PROC1_LSB, 24
# -----------------------------------------------------------------------------
# Field       : PSM_WDSEL_PROC0
.equ	PSM_WDSEL_PROC0_RESET, 0x0
.equ	PSM_WDSEL_PROC0_BITS, 0x00800000
.equ	PSM_WDSEL_PROC0_MSB, 23
.equ	PSM_WDSEL_PROC0_LSB, 23
# -----------------------------------------------------------------------------
# Field       : PSM_WDSEL_ACCESSCTRL
.equ	PSM_WDSEL_ACCESSCTRL_RESET, 0x0
.equ	PSM_WDSEL_ACCESSCTRL_BITS, 0x00400000
.equ	PSM_WDSEL_ACCESSCTRL_MSB, 22
.equ	PSM_WDSEL_ACCESSCTRL_LSB, 22
# -----------------------------------------------------------------------------
# Field       : PSM_WDSEL_SIO
.equ	PSM_WDSEL_SIO_RESET, 0x0
.equ	PSM_WDSEL_SIO_BITS, 0x00200000
.equ	PSM_WDSEL_SIO_MSB, 21
.equ	PSM_WDSEL_SIO_LSB, 21
# -----------------------------------------------------------------------------
# Field       : PSM_WDSEL_XIP
.equ	PSM_WDSEL_XIP_RESET, 0x0
.equ	PSM_WDSEL_XIP_BITS, 0x00100000
.equ	PSM_WDSEL_XIP_MSB, 20
.equ	PSM_WDSEL_XIP_LSB, 20
# -----------------------------------------------------------------------------
# Field       : PSM_WDSEL_SRAM9
.equ	PSM_WDSEL_SRAM9_RESET, 0x0
.equ	PSM_WDSEL_SRAM9_BITS, 0x00080000
.equ	PSM_WDSEL_SRAM9_MSB, 19
.equ	PSM_WDSEL_SRAM9_LSB, 19
# -----------------------------------------------------------------------------
# Field       : PSM_WDSEL_SRAM8
.equ	PSM_WDSEL_SRAM8_RESET, 0x0
.equ	PSM_WDSEL_SRAM8_BITS, 0x00040000
.equ	PSM_WDSEL_SRAM8_MSB, 18
.equ	PSM_WDSEL_SRAM8_LSB, 18
# -----------------------------------------------------------------------------
# Field       : PSM_WDSEL_SRAM7
.equ	PSM_WDSEL_SRAM7_RESET, 0x0
.equ	PSM_WDSEL_SRAM7_BITS, 0x00020000
.equ	PSM_WDSEL_SRAM7_MSB, 17
.equ	PSM_WDSEL_SRAM7_LSB, 17
# -----------------------------------------------------------------------------
# Field       : PSM_WDSEL_SRAM6
.equ	PSM_WDSEL_SRAM6_RESET, 0x0
.equ	PSM_WDSEL_SRAM6_BITS, 0x00010000
.equ	PSM_WDSEL_SRAM6_MSB, 16
.equ	PSM_WDSEL_SRAM6_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PSM_WDSEL_SRAM5
.equ	PSM_WDSEL_SRAM5_RESET, 0x0
.equ	PSM_WDSEL_SRAM5_BITS, 0x00008000
.equ	PSM_WDSEL_SRAM5_MSB, 15
.equ	PSM_WDSEL_SRAM5_LSB, 15
# -----------------------------------------------------------------------------
# Field       : PSM_WDSEL_SRAM4
.equ	PSM_WDSEL_SRAM4_RESET, 0x0
.equ	PSM_WDSEL_SRAM4_BITS, 0x00004000
.equ	PSM_WDSEL_SRAM4_MSB, 14
.equ	PSM_WDSEL_SRAM4_LSB, 14
# -----------------------------------------------------------------------------
# Field       : PSM_WDSEL_SRAM3
.equ	PSM_WDSEL_SRAM3_RESET, 0x0
.equ	PSM_WDSEL_SRAM3_BITS, 0x00002000
.equ	PSM_WDSEL_SRAM3_MSB, 13
.equ	PSM_WDSEL_SRAM3_LSB, 13
# -----------------------------------------------------------------------------
# Field       : PSM_WDSEL_SRAM2
.equ	PSM_WDSEL_SRAM2_RESET, 0x0
.equ	PSM_WDSEL_SRAM2_BITS, 0x00001000
.equ	PSM_WDSEL_SRAM2_MSB, 12
.equ	PSM_WDSEL_SRAM2_LSB, 12
# -----------------------------------------------------------------------------
# Field       : PSM_WDSEL_SRAM1
.equ	PSM_WDSEL_SRAM1_RESET, 0x0
.equ	PSM_WDSEL_SRAM1_BITS, 0x00000800
.equ	PSM_WDSEL_SRAM1_MSB, 11
.equ	PSM_WDSEL_SRAM1_LSB, 11
# -----------------------------------------------------------------------------
# Field       : PSM_WDSEL_SRAM0
.equ	PSM_WDSEL_SRAM0_RESET, 0x0
.equ	PSM_WDSEL_SRAM0_BITS, 0x00000400
.equ	PSM_WDSEL_SRAM0_MSB, 10
.equ	PSM_WDSEL_SRAM0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : PSM_WDSEL_BOOTRAM
.equ	PSM_WDSEL_BOOTRAM_RESET, 0x0
.equ	PSM_WDSEL_BOOTRAM_BITS, 0x00000200
.equ	PSM_WDSEL_BOOTRAM_MSB, 9
.equ	PSM_WDSEL_BOOTRAM_LSB, 9
# -----------------------------------------------------------------------------
# Field       : PSM_WDSEL_ROM
.equ	PSM_WDSEL_ROM_RESET, 0x0
.equ	PSM_WDSEL_ROM_BITS, 0x00000100
.equ	PSM_WDSEL_ROM_MSB, 8
.equ	PSM_WDSEL_ROM_LSB, 8
# -----------------------------------------------------------------------------
# Field       : PSM_WDSEL_BUSFABRIC
.equ	PSM_WDSEL_BUSFABRIC_RESET, 0x0
.equ	PSM_WDSEL_BUSFABRIC_BITS, 0x00000080
.equ	PSM_WDSEL_BUSFABRIC_MSB, 7
.equ	PSM_WDSEL_BUSFABRIC_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PSM_WDSEL_PSM_READY
.equ	PSM_WDSEL_PSM_READY_RESET, 0x0
.equ	PSM_WDSEL_PSM_READY_BITS, 0x00000040
.equ	PSM_WDSEL_PSM_READY_MSB, 6
.equ	PSM_WDSEL_PSM_READY_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PSM_WDSEL_CLOCKS
.equ	PSM_WDSEL_CLOCKS_RESET, 0x0
.equ	PSM_WDSEL_CLOCKS_BITS, 0x00000020
.equ	PSM_WDSEL_CLOCKS_MSB, 5
.equ	PSM_WDSEL_CLOCKS_LSB, 5
# -----------------------------------------------------------------------------
# Field       : PSM_WDSEL_RESETS
.equ	PSM_WDSEL_RESETS_RESET, 0x0
.equ	PSM_WDSEL_RESETS_BITS, 0x00000010
.equ	PSM_WDSEL_RESETS_MSB, 4
.equ	PSM_WDSEL_RESETS_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PSM_WDSEL_XOSC
.equ	PSM_WDSEL_XOSC_RESET, 0x0
.equ	PSM_WDSEL_XOSC_BITS, 0x00000008
.equ	PSM_WDSEL_XOSC_MSB, 3
.equ	PSM_WDSEL_XOSC_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PSM_WDSEL_ROSC
.equ	PSM_WDSEL_ROSC_RESET, 0x0
.equ	PSM_WDSEL_ROSC_BITS, 0x00000004
.equ	PSM_WDSEL_ROSC_MSB, 2
.equ	PSM_WDSEL_ROSC_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PSM_WDSEL_OTP
.equ	PSM_WDSEL_OTP_RESET, 0x0
.equ	PSM_WDSEL_OTP_BITS, 0x00000002
.equ	PSM_WDSEL_OTP_MSB, 1
.equ	PSM_WDSEL_OTP_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PSM_WDSEL_PROC_COLD
.equ	PSM_WDSEL_PROC_COLD_RESET, 0x0
.equ	PSM_WDSEL_PROC_COLD_BITS, 0x00000001
.equ	PSM_WDSEL_PROC_COLD_MSB, 0
.equ	PSM_WDSEL_PROC_COLD_LSB, 0
# =============================================================================
# Register    : PSM_DONE
# Description : Is the subsystem ready?
.equ	PSM_DONE_OFFSET, 0x0000000c
.equ	PSM_DONE_BITS, 0x01ffffff
.equ	PSM_DONE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PSM_DONE_PROC1
.equ	PSM_DONE_PROC1_RESET, 0x0
.equ	PSM_DONE_PROC1_BITS, 0x01000000
.equ	PSM_DONE_PROC1_MSB, 24
.equ	PSM_DONE_PROC1_LSB, 24
# -----------------------------------------------------------------------------
# Field       : PSM_DONE_PROC0
.equ	PSM_DONE_PROC0_RESET, 0x0
.equ	PSM_DONE_PROC0_BITS, 0x00800000
.equ	PSM_DONE_PROC0_MSB, 23
.equ	PSM_DONE_PROC0_LSB, 23
# -----------------------------------------------------------------------------
# Field       : PSM_DONE_ACCESSCTRL
.equ	PSM_DONE_ACCESSCTRL_RESET, 0x0
.equ	PSM_DONE_ACCESSCTRL_BITS, 0x00400000
.equ	PSM_DONE_ACCESSCTRL_MSB, 22
.equ	PSM_DONE_ACCESSCTRL_LSB, 22
# -----------------------------------------------------------------------------
# Field       : PSM_DONE_SIO
.equ	PSM_DONE_SIO_RESET, 0x0
.equ	PSM_DONE_SIO_BITS, 0x00200000
.equ	PSM_DONE_SIO_MSB, 21
.equ	PSM_DONE_SIO_LSB, 21
# -----------------------------------------------------------------------------
# Field       : PSM_DONE_XIP
.equ	PSM_DONE_XIP_RESET, 0x0
.equ	PSM_DONE_XIP_BITS, 0x00100000
.equ	PSM_DONE_XIP_MSB, 20
.equ	PSM_DONE_XIP_LSB, 20
# -----------------------------------------------------------------------------
# Field       : PSM_DONE_SRAM9
.equ	PSM_DONE_SRAM9_RESET, 0x0
.equ	PSM_DONE_SRAM9_BITS, 0x00080000
.equ	PSM_DONE_SRAM9_MSB, 19
.equ	PSM_DONE_SRAM9_LSB, 19
# -----------------------------------------------------------------------------
# Field       : PSM_DONE_SRAM8
.equ	PSM_DONE_SRAM8_RESET, 0x0
.equ	PSM_DONE_SRAM8_BITS, 0x00040000
.equ	PSM_DONE_SRAM8_MSB, 18
.equ	PSM_DONE_SRAM8_LSB, 18
# -----------------------------------------------------------------------------
# Field       : PSM_DONE_SRAM7
.equ	PSM_DONE_SRAM7_RESET, 0x0
.equ	PSM_DONE_SRAM7_BITS, 0x00020000
.equ	PSM_DONE_SRAM7_MSB, 17
.equ	PSM_DONE_SRAM7_LSB, 17
# -----------------------------------------------------------------------------
# Field       : PSM_DONE_SRAM6
.equ	PSM_DONE_SRAM6_RESET, 0x0
.equ	PSM_DONE_SRAM6_BITS, 0x00010000
.equ	PSM_DONE_SRAM6_MSB, 16
.equ	PSM_DONE_SRAM6_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PSM_DONE_SRAM5
.equ	PSM_DONE_SRAM5_RESET, 0x0
.equ	PSM_DONE_SRAM5_BITS, 0x00008000
.equ	PSM_DONE_SRAM5_MSB, 15
.equ	PSM_DONE_SRAM5_LSB, 15
# -----------------------------------------------------------------------------
# Field       : PSM_DONE_SRAM4
.equ	PSM_DONE_SRAM4_RESET, 0x0
.equ	PSM_DONE_SRAM4_BITS, 0x00004000
.equ	PSM_DONE_SRAM4_MSB, 14
.equ	PSM_DONE_SRAM4_LSB, 14
# -----------------------------------------------------------------------------
# Field       : PSM_DONE_SRAM3
.equ	PSM_DONE_SRAM3_RESET, 0x0
.equ	PSM_DONE_SRAM3_BITS, 0x00002000
.equ	PSM_DONE_SRAM3_MSB, 13
.equ	PSM_DONE_SRAM3_LSB, 13
# -----------------------------------------------------------------------------
# Field       : PSM_DONE_SRAM2
.equ	PSM_DONE_SRAM2_RESET, 0x0
.equ	PSM_DONE_SRAM2_BITS, 0x00001000
.equ	PSM_DONE_SRAM2_MSB, 12
.equ	PSM_DONE_SRAM2_LSB, 12
# -----------------------------------------------------------------------------
# Field       : PSM_DONE_SRAM1
.equ	PSM_DONE_SRAM1_RESET, 0x0
.equ	PSM_DONE_SRAM1_BITS, 0x00000800
.equ	PSM_DONE_SRAM1_MSB, 11
.equ	PSM_DONE_SRAM1_LSB, 11
# -----------------------------------------------------------------------------
# Field       : PSM_DONE_SRAM0
.equ	PSM_DONE_SRAM0_RESET, 0x0
.equ	PSM_DONE_SRAM0_BITS, 0x00000400
.equ	PSM_DONE_SRAM0_MSB, 10
.equ	PSM_DONE_SRAM0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : PSM_DONE_BOOTRAM
.equ	PSM_DONE_BOOTRAM_RESET, 0x0
.equ	PSM_DONE_BOOTRAM_BITS, 0x00000200
.equ	PSM_DONE_BOOTRAM_MSB, 9
.equ	PSM_DONE_BOOTRAM_LSB, 9
# -----------------------------------------------------------------------------
# Field       : PSM_DONE_ROM
.equ	PSM_DONE_ROM_RESET, 0x0
.equ	PSM_DONE_ROM_BITS, 0x00000100
.equ	PSM_DONE_ROM_MSB, 8
.equ	PSM_DONE_ROM_LSB, 8
# -----------------------------------------------------------------------------
# Field       : PSM_DONE_BUSFABRIC
.equ	PSM_DONE_BUSFABRIC_RESET, 0x0
.equ	PSM_DONE_BUSFABRIC_BITS, 0x00000080
.equ	PSM_DONE_BUSFABRIC_MSB, 7
.equ	PSM_DONE_BUSFABRIC_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PSM_DONE_PSM_READY
.equ	PSM_DONE_PSM_READY_RESET, 0x0
.equ	PSM_DONE_PSM_READY_BITS, 0x00000040
.equ	PSM_DONE_PSM_READY_MSB, 6
.equ	PSM_DONE_PSM_READY_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PSM_DONE_CLOCKS
.equ	PSM_DONE_CLOCKS_RESET, 0x0
.equ	PSM_DONE_CLOCKS_BITS, 0x00000020
.equ	PSM_DONE_CLOCKS_MSB, 5
.equ	PSM_DONE_CLOCKS_LSB, 5
# -----------------------------------------------------------------------------
# Field       : PSM_DONE_RESETS
.equ	PSM_DONE_RESETS_RESET, 0x0
.equ	PSM_DONE_RESETS_BITS, 0x00000010
.equ	PSM_DONE_RESETS_MSB, 4
.equ	PSM_DONE_RESETS_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PSM_DONE_XOSC
.equ	PSM_DONE_XOSC_RESET, 0x0
.equ	PSM_DONE_XOSC_BITS, 0x00000008
.equ	PSM_DONE_XOSC_MSB, 3
.equ	PSM_DONE_XOSC_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PSM_DONE_ROSC
.equ	PSM_DONE_ROSC_RESET, 0x0
.equ	PSM_DONE_ROSC_BITS, 0x00000004
.equ	PSM_DONE_ROSC_MSB, 2
.equ	PSM_DONE_ROSC_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PSM_DONE_OTP
.equ	PSM_DONE_OTP_RESET, 0x0
.equ	PSM_DONE_OTP_BITS, 0x00000002
.equ	PSM_DONE_OTP_MSB, 1
.equ	PSM_DONE_OTP_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PSM_DONE_PROC_COLD
.equ	PSM_DONE_PROC_COLD_RESET, 0x0
.equ	PSM_DONE_PROC_COLD_BITS, 0x00000001
.equ	PSM_DONE_PROC_COLD_MSB, 0
.equ	PSM_DONE_PROC_COLD_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_PSM_H
