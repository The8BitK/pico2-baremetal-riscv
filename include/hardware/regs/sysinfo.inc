#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : SYSINFO
# Version        : 1
# Bus type       : apb
# =============================================================================
.ifndef	_HARDWARE_REGS_SYSINFO_H
.set	_HARDWARE_REGS_SYSINFO_H, 1
# =============================================================================
# Register    : SYSINFO_CHIP_ID
# Description : JEDEC JEP-106 compliant chip identifier.
.equ	SYSINFO_CHIP_ID_OFFSET, 0x00000000
.equ	SYSINFO_CHIP_ID_BITS, 0xffffffff
.equ	SYSINFO_CHIP_ID_RESET, 0x00000001
# -----------------------------------------------------------------------------
# Field       : SYSINFO_CHIP_ID_REVISION
.equ	SYSINFO_CHIP_ID_REVISION_BITS, 0xf0000000
.equ	SYSINFO_CHIP_ID_REVISION_MSB, 31
.equ	SYSINFO_CHIP_ID_REVISION_LSB, 28
# -----------------------------------------------------------------------------
# Field       : SYSINFO_CHIP_ID_PART
.equ	SYSINFO_CHIP_ID_PART_BITS, 0x0ffff000
.equ	SYSINFO_CHIP_ID_PART_MSB, 27
.equ	SYSINFO_CHIP_ID_PART_LSB, 12
# -----------------------------------------------------------------------------
# Field       : SYSINFO_CHIP_ID_MANUFACTURER
.equ	SYSINFO_CHIP_ID_MANUFACTURER_BITS, 0x00000ffe
.equ	SYSINFO_CHIP_ID_MANUFACTURER_MSB, 11
.equ	SYSINFO_CHIP_ID_MANUFACTURER_LSB, 1
# -----------------------------------------------------------------------------
# Field       : SYSINFO_CHIP_ID_STOP_BIT
.equ	SYSINFO_CHIP_ID_STOP_BIT_RESET, 0x1
.equ	SYSINFO_CHIP_ID_STOP_BIT_BITS, 0x00000001
.equ	SYSINFO_CHIP_ID_STOP_BIT_MSB, 0
.equ	SYSINFO_CHIP_ID_STOP_BIT_LSB, 0
# =============================================================================
# Register    : SYSINFO_PACKAGE_SEL
.equ	SYSINFO_PACKAGE_SEL_OFFSET, 0x00000004
.equ	SYSINFO_PACKAGE_SEL_BITS, 0x00000001
.equ	SYSINFO_PACKAGE_SEL_RESET, 0x00000000
.equ	SYSINFO_PACKAGE_SEL_MSB, 0
.equ	SYSINFO_PACKAGE_SEL_LSB, 0
# =============================================================================
# Register    : SYSINFO_PLATFORM
# Description : Platform register. Allows software to know what environment it
#               is running in during pre-production development. Post-
#               production, the PLATFORM is always ASIC, non-SIM.
.equ	SYSINFO_PLATFORM_OFFSET, 0x00000008
.equ	SYSINFO_PLATFORM_BITS, 0x0000001f
.equ	SYSINFO_PLATFORM_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : SYSINFO_PLATFORM_GATESIM
.equ	SYSINFO_PLATFORM_GATESIM_BITS, 0x00000010
.equ	SYSINFO_PLATFORM_GATESIM_MSB, 4
.equ	SYSINFO_PLATFORM_GATESIM_LSB, 4
# -----------------------------------------------------------------------------
# Field       : SYSINFO_PLATFORM_BATCHSIM
.equ	SYSINFO_PLATFORM_BATCHSIM_BITS, 0x00000008
.equ	SYSINFO_PLATFORM_BATCHSIM_MSB, 3
.equ	SYSINFO_PLATFORM_BATCHSIM_LSB, 3
# -----------------------------------------------------------------------------
# Field       : SYSINFO_PLATFORM_HDLSIM
.equ	SYSINFO_PLATFORM_HDLSIM_BITS, 0x00000004
.equ	SYSINFO_PLATFORM_HDLSIM_MSB, 2
.equ	SYSINFO_PLATFORM_HDLSIM_LSB, 2
# -----------------------------------------------------------------------------
# Field       : SYSINFO_PLATFORM_ASIC
.equ	SYSINFO_PLATFORM_ASIC_BITS, 0x00000002
.equ	SYSINFO_PLATFORM_ASIC_MSB, 1
.equ	SYSINFO_PLATFORM_ASIC_LSB, 1
# -----------------------------------------------------------------------------
# Field       : SYSINFO_PLATFORM_FPGA
.equ	SYSINFO_PLATFORM_FPGA_BITS, 0x00000001
.equ	SYSINFO_PLATFORM_FPGA_MSB, 0
.equ	SYSINFO_PLATFORM_FPGA_LSB, 0
# =============================================================================
# Register    : SYSINFO_GITREF_RP2350
# Description : Git hash of the chip source. Used to identify chip version.
.equ	SYSINFO_GITREF_RP2350_OFFSET, 0x00000014
.equ	SYSINFO_GITREF_RP2350_BITS, 0xffffffff
.equ	SYSINFO_GITREF_RP2350_MSB, 31
.equ	SYSINFO_GITREF_RP2350_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_SYSINFO_H
