#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : TBMAN
# Version        : 1
# Bus type       : apb
# Description    : For managing simulation testbenches
# =============================================================================
.ifndef	_HARDWARE_REGS_TBMAN_H
.set	_HARDWARE_REGS_TBMAN_H, 1
# =============================================================================
# Register    : TBMAN_PLATFORM
# Description : Indicates the type of platform in use
.equ	TBMAN_PLATFORM_OFFSET, 0x00000000
.equ	TBMAN_PLATFORM_BITS, 0x00000007
.equ	TBMAN_PLATFORM_RESET, 0x00000001
# -----------------------------------------------------------------------------
# Field       : TBMAN_PLATFORM_HDLSIM
# Description : Indicates the platform is a simulation
.equ	TBMAN_PLATFORM_HDLSIM_RESET, 0x0
.equ	TBMAN_PLATFORM_HDLSIM_BITS, 0x00000004
.equ	TBMAN_PLATFORM_HDLSIM_MSB, 2
.equ	TBMAN_PLATFORM_HDLSIM_LSB, 2
# -----------------------------------------------------------------------------
# Field       : TBMAN_PLATFORM_FPGA
# Description : Indicates the platform is an FPGA
.equ	TBMAN_PLATFORM_FPGA_RESET, 0x0
.equ	TBMAN_PLATFORM_FPGA_BITS, 0x00000002
.equ	TBMAN_PLATFORM_FPGA_MSB, 1
.equ	TBMAN_PLATFORM_FPGA_LSB, 1
# -----------------------------------------------------------------------------
# Field       : TBMAN_PLATFORM_ASIC
# Description : Indicates the platform is an ASIC
.equ	TBMAN_PLATFORM_ASIC_RESET, 0x1
.equ	TBMAN_PLATFORM_ASIC_BITS, 0x00000001
.equ	TBMAN_PLATFORM_ASIC_MSB, 0
.equ	TBMAN_PLATFORM_ASIC_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_TBMAN_H
