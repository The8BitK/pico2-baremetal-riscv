#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : SYSCFG
# Version        : 1
# Bus type       : apb
# Description    : Register block for various chip control signals
# =============================================================================
.ifndef	_HARDWARE_REGS_SYSCFG_H
.set	_HARDWARE_REGS_SYSCFG_H, 1
# =============================================================================
# Register    : SYSCFG_PROC_CONFIG
# Description : Configuration for processors
.equ	SYSCFG_PROC_CONFIG_OFFSET, 0x00000000
.equ	SYSCFG_PROC_CONFIG_BITS, 0x00000003
.equ	SYSCFG_PROC_CONFIG_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : SYSCFG_PROC_CONFIG_PROC1_HALTED
# Description : Indication that proc1 has halted
.equ	SYSCFG_PROC_CONFIG_PROC1_HALTED_RESET, 0x0
.equ	SYSCFG_PROC_CONFIG_PROC1_HALTED_BITS, 0x00000002
.equ	SYSCFG_PROC_CONFIG_PROC1_HALTED_MSB, 1
.equ	SYSCFG_PROC_CONFIG_PROC1_HALTED_LSB, 1
# -----------------------------------------------------------------------------
# Field       : SYSCFG_PROC_CONFIG_PROC0_HALTED
# Description : Indication that proc0 has halted
.equ	SYSCFG_PROC_CONFIG_PROC0_HALTED_RESET, 0x0
.equ	SYSCFG_PROC_CONFIG_PROC0_HALTED_BITS, 0x00000001
.equ	SYSCFG_PROC_CONFIG_PROC0_HALTED_MSB, 0
.equ	SYSCFG_PROC_CONFIG_PROC0_HALTED_LSB, 0
# =============================================================================
# Register    : SYSCFG_PROC_IN_SYNC_BYPASS
# Description : For each bit, if 1, bypass the input synchronizer between that
#               GPIO
#               and the GPIO input register in the SIO. The input synchronizers
#               should
#               generally be unbypassed, to avoid injecting metastabilities
#               into processors.
#               If you're feeling brave, you can bypass to save two cycles of
#               input
#               latency. This register applies to GPIO 0...31.
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_OFFSET, 0x00000004
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_BITS, 0xffffffff
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : SYSCFG_PROC_IN_SYNC_BYPASS_GPIO
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_GPIO_RESET, 0x00000000
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_GPIO_BITS, 0xffffffff
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_GPIO_MSB, 31
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_GPIO_LSB, 0
# =============================================================================
# Register    : SYSCFG_PROC_IN_SYNC_BYPASS_HI
# Description : For each bit, if 1, bypass the input synchronizer between that
#               GPIO
#               and the GPIO input register in the SIO. The input synchronizers
#               should
#               generally be unbypassed, to avoid injecting metastabilities
#               into processors.
#               If you're feeling brave, you can bypass to save two cycles of
#               input
#               latency. This register applies to GPIO 32...47. USB GPIO 56..57
#               QSPI GPIO 58..63
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_HI_OFFSET, 0x00000008
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_HI_BITS, 0xff00ffff
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_HI_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_SD
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_SD_RESET, 0x0
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_SD_BITS, 0xf0000000
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_SD_MSB, 31
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_SD_LSB, 28
# -----------------------------------------------------------------------------
# Field       : SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_CSN
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_CSN_RESET, 0x0
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_CSN_BITS, 0x08000000
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_CSN_MSB, 27
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_CSN_LSB, 27
# -----------------------------------------------------------------------------
# Field       : SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_SCK
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_SCK_RESET, 0x0
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_SCK_BITS, 0x04000000
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_SCK_MSB, 26
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_HI_QSPI_SCK_LSB, 26
# -----------------------------------------------------------------------------
# Field       : SYSCFG_PROC_IN_SYNC_BYPASS_HI_USB_DM
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_HI_USB_DM_RESET, 0x0
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_HI_USB_DM_BITS, 0x02000000
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_HI_USB_DM_MSB, 25
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_HI_USB_DM_LSB, 25
# -----------------------------------------------------------------------------
# Field       : SYSCFG_PROC_IN_SYNC_BYPASS_HI_USB_DP
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_HI_USB_DP_RESET, 0x0
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_HI_USB_DP_BITS, 0x01000000
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_HI_USB_DP_MSB, 24
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_HI_USB_DP_LSB, 24
# -----------------------------------------------------------------------------
# Field       : SYSCFG_PROC_IN_SYNC_BYPASS_HI_GPIO
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_HI_GPIO_RESET, 0x0000
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_HI_GPIO_BITS, 0x0000ffff
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_HI_GPIO_MSB, 15
.equ	SYSCFG_PROC_IN_SYNC_BYPASS_HI_GPIO_LSB, 0
# =============================================================================
# Register    : SYSCFG_DBGFORCE
# Description : Directly control the chip SWD debug port
.equ	SYSCFG_DBGFORCE_OFFSET, 0x0000000c
.equ	SYSCFG_DBGFORCE_BITS, 0x0000000f
.equ	SYSCFG_DBGFORCE_RESET, 0x00000006
# -----------------------------------------------------------------------------
# Field       : SYSCFG_DBGFORCE_ATTACH
# Description : Attach chip debug port to syscfg controls, and disconnect it
#               from external SWD pads.
.equ	SYSCFG_DBGFORCE_ATTACH_RESET, 0x0
.equ	SYSCFG_DBGFORCE_ATTACH_BITS, 0x00000008
.equ	SYSCFG_DBGFORCE_ATTACH_MSB, 3
.equ	SYSCFG_DBGFORCE_ATTACH_LSB, 3
# -----------------------------------------------------------------------------
# Field       : SYSCFG_DBGFORCE_SWCLK
# Description : Directly drive SWCLK, if ATTACH is set
.equ	SYSCFG_DBGFORCE_SWCLK_RESET, 0x1
.equ	SYSCFG_DBGFORCE_SWCLK_BITS, 0x00000004
.equ	SYSCFG_DBGFORCE_SWCLK_MSB, 2
.equ	SYSCFG_DBGFORCE_SWCLK_LSB, 2
# -----------------------------------------------------------------------------
# Field       : SYSCFG_DBGFORCE_SWDI
# Description : Directly drive SWDIO input, if ATTACH is set
.equ	SYSCFG_DBGFORCE_SWDI_RESET, 0x1
.equ	SYSCFG_DBGFORCE_SWDI_BITS, 0x00000002
.equ	SYSCFG_DBGFORCE_SWDI_MSB, 1
.equ	SYSCFG_DBGFORCE_SWDI_LSB, 1
# -----------------------------------------------------------------------------
# Field       : SYSCFG_DBGFORCE_SWDO
# Description : Observe the value of SWDIO output.
.equ	SYSCFG_DBGFORCE_SWDO_BITS, 0x00000001
.equ	SYSCFG_DBGFORCE_SWDO_MSB, 0
.equ	SYSCFG_DBGFORCE_SWDO_LSB, 0
# =============================================================================
# Register    : SYSCFG_MEMPOWERDOWN
# Description : Control PD pins to memories.
#               Set high to put memories to a low power state. In this state
#               the memories will retain contents but not be accessible
#               Use with caution
.equ	SYSCFG_MEMPOWERDOWN_OFFSET, 0x00000010
.equ	SYSCFG_MEMPOWERDOWN_BITS, 0x00001fff
.equ	SYSCFG_MEMPOWERDOWN_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : SYSCFG_MEMPOWERDOWN_BOOTRAM
.equ	SYSCFG_MEMPOWERDOWN_BOOTRAM_RESET, 0x0
.equ	SYSCFG_MEMPOWERDOWN_BOOTRAM_BITS, 0x00001000
.equ	SYSCFG_MEMPOWERDOWN_BOOTRAM_MSB, 12
.equ	SYSCFG_MEMPOWERDOWN_BOOTRAM_LSB, 12
# -----------------------------------------------------------------------------
# Field       : SYSCFG_MEMPOWERDOWN_ROM
.equ	SYSCFG_MEMPOWERDOWN_ROM_RESET, 0x0
.equ	SYSCFG_MEMPOWERDOWN_ROM_BITS, 0x00000800
.equ	SYSCFG_MEMPOWERDOWN_ROM_MSB, 11
.equ	SYSCFG_MEMPOWERDOWN_ROM_LSB, 11
# -----------------------------------------------------------------------------
# Field       : SYSCFG_MEMPOWERDOWN_USB
.equ	SYSCFG_MEMPOWERDOWN_USB_RESET, 0x0
.equ	SYSCFG_MEMPOWERDOWN_USB_BITS, 0x00000400
.equ	SYSCFG_MEMPOWERDOWN_USB_MSB, 10
.equ	SYSCFG_MEMPOWERDOWN_USB_LSB, 10
# -----------------------------------------------------------------------------
# Field       : SYSCFG_MEMPOWERDOWN_SRAM9
.equ	SYSCFG_MEMPOWERDOWN_SRAM9_RESET, 0x0
.equ	SYSCFG_MEMPOWERDOWN_SRAM9_BITS, 0x00000200
.equ	SYSCFG_MEMPOWERDOWN_SRAM9_MSB, 9
.equ	SYSCFG_MEMPOWERDOWN_SRAM9_LSB, 9
# -----------------------------------------------------------------------------
# Field       : SYSCFG_MEMPOWERDOWN_SRAM8
.equ	SYSCFG_MEMPOWERDOWN_SRAM8_RESET, 0x0
.equ	SYSCFG_MEMPOWERDOWN_SRAM8_BITS, 0x00000100
.equ	SYSCFG_MEMPOWERDOWN_SRAM8_MSB, 8
.equ	SYSCFG_MEMPOWERDOWN_SRAM8_LSB, 8
# -----------------------------------------------------------------------------
# Field       : SYSCFG_MEMPOWERDOWN_SRAM7
.equ	SYSCFG_MEMPOWERDOWN_SRAM7_RESET, 0x0
.equ	SYSCFG_MEMPOWERDOWN_SRAM7_BITS, 0x00000080
.equ	SYSCFG_MEMPOWERDOWN_SRAM7_MSB, 7
.equ	SYSCFG_MEMPOWERDOWN_SRAM7_LSB, 7
# -----------------------------------------------------------------------------
# Field       : SYSCFG_MEMPOWERDOWN_SRAM6
.equ	SYSCFG_MEMPOWERDOWN_SRAM6_RESET, 0x0
.equ	SYSCFG_MEMPOWERDOWN_SRAM6_BITS, 0x00000040
.equ	SYSCFG_MEMPOWERDOWN_SRAM6_MSB, 6
.equ	SYSCFG_MEMPOWERDOWN_SRAM6_LSB, 6
# -----------------------------------------------------------------------------
# Field       : SYSCFG_MEMPOWERDOWN_SRAM5
.equ	SYSCFG_MEMPOWERDOWN_SRAM5_RESET, 0x0
.equ	SYSCFG_MEMPOWERDOWN_SRAM5_BITS, 0x00000020
.equ	SYSCFG_MEMPOWERDOWN_SRAM5_MSB, 5
.equ	SYSCFG_MEMPOWERDOWN_SRAM5_LSB, 5
# -----------------------------------------------------------------------------
# Field       : SYSCFG_MEMPOWERDOWN_SRAM4
.equ	SYSCFG_MEMPOWERDOWN_SRAM4_RESET, 0x0
.equ	SYSCFG_MEMPOWERDOWN_SRAM4_BITS, 0x00000010
.equ	SYSCFG_MEMPOWERDOWN_SRAM4_MSB, 4
.equ	SYSCFG_MEMPOWERDOWN_SRAM4_LSB, 4
# -----------------------------------------------------------------------------
# Field       : SYSCFG_MEMPOWERDOWN_SRAM3
.equ	SYSCFG_MEMPOWERDOWN_SRAM3_RESET, 0x0
.equ	SYSCFG_MEMPOWERDOWN_SRAM3_BITS, 0x00000008
.equ	SYSCFG_MEMPOWERDOWN_SRAM3_MSB, 3
.equ	SYSCFG_MEMPOWERDOWN_SRAM3_LSB, 3
# -----------------------------------------------------------------------------
# Field       : SYSCFG_MEMPOWERDOWN_SRAM2
.equ	SYSCFG_MEMPOWERDOWN_SRAM2_RESET, 0x0
.equ	SYSCFG_MEMPOWERDOWN_SRAM2_BITS, 0x00000004
.equ	SYSCFG_MEMPOWERDOWN_SRAM2_MSB, 2
.equ	SYSCFG_MEMPOWERDOWN_SRAM2_LSB, 2
# -----------------------------------------------------------------------------
# Field       : SYSCFG_MEMPOWERDOWN_SRAM1
.equ	SYSCFG_MEMPOWERDOWN_SRAM1_RESET, 0x0
.equ	SYSCFG_MEMPOWERDOWN_SRAM1_BITS, 0x00000002
.equ	SYSCFG_MEMPOWERDOWN_SRAM1_MSB, 1
.equ	SYSCFG_MEMPOWERDOWN_SRAM1_LSB, 1
# -----------------------------------------------------------------------------
# Field       : SYSCFG_MEMPOWERDOWN_SRAM0
.equ	SYSCFG_MEMPOWERDOWN_SRAM0_RESET, 0x0
.equ	SYSCFG_MEMPOWERDOWN_SRAM0_BITS, 0x00000001
.equ	SYSCFG_MEMPOWERDOWN_SRAM0_MSB, 0
.equ	SYSCFG_MEMPOWERDOWN_SRAM0_LSB, 0
# =============================================================================
# Register    : SYSCFG_AUXCTRL
# Description : Auxiliary system control register
#               * Bits 7:2: Reserved
#
#               * Bit 1: When clear, the LPOSC output is XORed into the TRNG
#               ROSC output as an additional, uncorrelated entropy source. When
#               set, this behaviour is disabled.
#
#               * Bit 0: Force POWMAN clock to switch to LPOSC, by asserting
#               its WDRESET input. This must be set before initiating a
#               watchdog reset of the RSM from a stage that includes CLOCKS, if
#               POWMAN is running from clk_ref at the point that the watchdog
#               reset takes place. Otherwise, the short pulse generated on
#               clk_ref by the reset of the CLOCKS block may affect POWMAN
#               register state.
.equ	SYSCFG_AUXCTRL_OFFSET, 0x00000014
.equ	SYSCFG_AUXCTRL_BITS, 0x000000ff
.equ	SYSCFG_AUXCTRL_RESET, 0x00000000
.equ	SYSCFG_AUXCTRL_MSB, 7
.equ	SYSCFG_AUXCTRL_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_SYSCFG_H
