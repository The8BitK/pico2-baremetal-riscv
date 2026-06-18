#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : USB
# Version        : 1
# Bus type       : ahbl
# Description    : USB FS/LS controller device registers
# =============================================================================
.ifndef	_HARDWARE_REGS_USB_H
.set	_HARDWARE_REGS_USB_H, 1
# =============================================================================
# Register    : USB_ADDR_ENDP
# Description : Device address and endpoint control
.equ	USB_ADDR_ENDP_OFFSET, 0x00000000
.equ	USB_ADDR_ENDP_BITS, 0x000f007f
.equ	USB_ADDR_ENDP_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP_ENDPOINT
# Description : Device endpoint to send data to. Only valid for HOST mode.
.equ	USB_ADDR_ENDP_ENDPOINT_RESET, 0x0
.equ	USB_ADDR_ENDP_ENDPOINT_BITS, 0x000f0000
.equ	USB_ADDR_ENDP_ENDPOINT_MSB, 19
.equ	USB_ADDR_ENDP_ENDPOINT_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP_ADDRESS
# Description : In device mode, the address that the device should respond to.
#               Set in response to a SET_ADDR setup packet from the host. In
#               host mode set to the address of the device to communicate with.
.equ	USB_ADDR_ENDP_ADDRESS_RESET, 0x00
.equ	USB_ADDR_ENDP_ADDRESS_BITS, 0x0000007f
.equ	USB_ADDR_ENDP_ADDRESS_MSB, 6
.equ	USB_ADDR_ENDP_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_ADDR_ENDP1
# Description : Interrupt endpoint 1. Only valid for HOST mode.
.equ	USB_ADDR_ENDP1_OFFSET, 0x00000004
.equ	USB_ADDR_ENDP1_BITS, 0x060f007f
.equ	USB_ADDR_ENDP1_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP1_INTEP_PREAMBLE
# Description : Interrupt EP requires preamble (is a low speed device on a full
#               speed hub)
.equ	USB_ADDR_ENDP1_INTEP_PREAMBLE_RESET, 0x0
.equ	USB_ADDR_ENDP1_INTEP_PREAMBLE_BITS, 0x04000000
.equ	USB_ADDR_ENDP1_INTEP_PREAMBLE_MSB, 26
.equ	USB_ADDR_ENDP1_INTEP_PREAMBLE_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP1_INTEP_DIR
# Description : Direction of the interrupt endpoint. In=0, Out=1
.equ	USB_ADDR_ENDP1_INTEP_DIR_RESET, 0x0
.equ	USB_ADDR_ENDP1_INTEP_DIR_BITS, 0x02000000
.equ	USB_ADDR_ENDP1_INTEP_DIR_MSB, 25
.equ	USB_ADDR_ENDP1_INTEP_DIR_LSB, 25
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP1_ENDPOINT
# Description : Endpoint number of the interrupt endpoint
.equ	USB_ADDR_ENDP1_ENDPOINT_RESET, 0x0
.equ	USB_ADDR_ENDP1_ENDPOINT_BITS, 0x000f0000
.equ	USB_ADDR_ENDP1_ENDPOINT_MSB, 19
.equ	USB_ADDR_ENDP1_ENDPOINT_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP1_ADDRESS
# Description : Device address
.equ	USB_ADDR_ENDP1_ADDRESS_RESET, 0x00
.equ	USB_ADDR_ENDP1_ADDRESS_BITS, 0x0000007f
.equ	USB_ADDR_ENDP1_ADDRESS_MSB, 6
.equ	USB_ADDR_ENDP1_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_ADDR_ENDP2
# Description : Interrupt endpoint 2. Only valid for HOST mode.
.equ	USB_ADDR_ENDP2_OFFSET, 0x00000008
.equ	USB_ADDR_ENDP2_BITS, 0x060f007f
.equ	USB_ADDR_ENDP2_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP2_INTEP_PREAMBLE
# Description : Interrupt EP requires preamble (is a low speed device on a full
#               speed hub)
.equ	USB_ADDR_ENDP2_INTEP_PREAMBLE_RESET, 0x0
.equ	USB_ADDR_ENDP2_INTEP_PREAMBLE_BITS, 0x04000000
.equ	USB_ADDR_ENDP2_INTEP_PREAMBLE_MSB, 26
.equ	USB_ADDR_ENDP2_INTEP_PREAMBLE_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP2_INTEP_DIR
# Description : Direction of the interrupt endpoint. In=0, Out=1
.equ	USB_ADDR_ENDP2_INTEP_DIR_RESET, 0x0
.equ	USB_ADDR_ENDP2_INTEP_DIR_BITS, 0x02000000
.equ	USB_ADDR_ENDP2_INTEP_DIR_MSB, 25
.equ	USB_ADDR_ENDP2_INTEP_DIR_LSB, 25
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP2_ENDPOINT
# Description : Endpoint number of the interrupt endpoint
.equ	USB_ADDR_ENDP2_ENDPOINT_RESET, 0x0
.equ	USB_ADDR_ENDP2_ENDPOINT_BITS, 0x000f0000
.equ	USB_ADDR_ENDP2_ENDPOINT_MSB, 19
.equ	USB_ADDR_ENDP2_ENDPOINT_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP2_ADDRESS
# Description : Device address
.equ	USB_ADDR_ENDP2_ADDRESS_RESET, 0x00
.equ	USB_ADDR_ENDP2_ADDRESS_BITS, 0x0000007f
.equ	USB_ADDR_ENDP2_ADDRESS_MSB, 6
.equ	USB_ADDR_ENDP2_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_ADDR_ENDP3
# Description : Interrupt endpoint 3. Only valid for HOST mode.
.equ	USB_ADDR_ENDP3_OFFSET, 0x0000000c
.equ	USB_ADDR_ENDP3_BITS, 0x060f007f
.equ	USB_ADDR_ENDP3_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP3_INTEP_PREAMBLE
# Description : Interrupt EP requires preamble (is a low speed device on a full
#               speed hub)
.equ	USB_ADDR_ENDP3_INTEP_PREAMBLE_RESET, 0x0
.equ	USB_ADDR_ENDP3_INTEP_PREAMBLE_BITS, 0x04000000
.equ	USB_ADDR_ENDP3_INTEP_PREAMBLE_MSB, 26
.equ	USB_ADDR_ENDP3_INTEP_PREAMBLE_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP3_INTEP_DIR
# Description : Direction of the interrupt endpoint. In=0, Out=1
.equ	USB_ADDR_ENDP3_INTEP_DIR_RESET, 0x0
.equ	USB_ADDR_ENDP3_INTEP_DIR_BITS, 0x02000000
.equ	USB_ADDR_ENDP3_INTEP_DIR_MSB, 25
.equ	USB_ADDR_ENDP3_INTEP_DIR_LSB, 25
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP3_ENDPOINT
# Description : Endpoint number of the interrupt endpoint
.equ	USB_ADDR_ENDP3_ENDPOINT_RESET, 0x0
.equ	USB_ADDR_ENDP3_ENDPOINT_BITS, 0x000f0000
.equ	USB_ADDR_ENDP3_ENDPOINT_MSB, 19
.equ	USB_ADDR_ENDP3_ENDPOINT_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP3_ADDRESS
# Description : Device address
.equ	USB_ADDR_ENDP3_ADDRESS_RESET, 0x00
.equ	USB_ADDR_ENDP3_ADDRESS_BITS, 0x0000007f
.equ	USB_ADDR_ENDP3_ADDRESS_MSB, 6
.equ	USB_ADDR_ENDP3_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_ADDR_ENDP4
# Description : Interrupt endpoint 4. Only valid for HOST mode.
.equ	USB_ADDR_ENDP4_OFFSET, 0x00000010
.equ	USB_ADDR_ENDP4_BITS, 0x060f007f
.equ	USB_ADDR_ENDP4_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP4_INTEP_PREAMBLE
# Description : Interrupt EP requires preamble (is a low speed device on a full
#               speed hub)
.equ	USB_ADDR_ENDP4_INTEP_PREAMBLE_RESET, 0x0
.equ	USB_ADDR_ENDP4_INTEP_PREAMBLE_BITS, 0x04000000
.equ	USB_ADDR_ENDP4_INTEP_PREAMBLE_MSB, 26
.equ	USB_ADDR_ENDP4_INTEP_PREAMBLE_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP4_INTEP_DIR
# Description : Direction of the interrupt endpoint. In=0, Out=1
.equ	USB_ADDR_ENDP4_INTEP_DIR_RESET, 0x0
.equ	USB_ADDR_ENDP4_INTEP_DIR_BITS, 0x02000000
.equ	USB_ADDR_ENDP4_INTEP_DIR_MSB, 25
.equ	USB_ADDR_ENDP4_INTEP_DIR_LSB, 25
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP4_ENDPOINT
# Description : Endpoint number of the interrupt endpoint
.equ	USB_ADDR_ENDP4_ENDPOINT_RESET, 0x0
.equ	USB_ADDR_ENDP4_ENDPOINT_BITS, 0x000f0000
.equ	USB_ADDR_ENDP4_ENDPOINT_MSB, 19
.equ	USB_ADDR_ENDP4_ENDPOINT_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP4_ADDRESS
# Description : Device address
.equ	USB_ADDR_ENDP4_ADDRESS_RESET, 0x00
.equ	USB_ADDR_ENDP4_ADDRESS_BITS, 0x0000007f
.equ	USB_ADDR_ENDP4_ADDRESS_MSB, 6
.equ	USB_ADDR_ENDP4_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_ADDR_ENDP5
# Description : Interrupt endpoint 5. Only valid for HOST mode.
.equ	USB_ADDR_ENDP5_OFFSET, 0x00000014
.equ	USB_ADDR_ENDP5_BITS, 0x060f007f
.equ	USB_ADDR_ENDP5_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP5_INTEP_PREAMBLE
# Description : Interrupt EP requires preamble (is a low speed device on a full
#               speed hub)
.equ	USB_ADDR_ENDP5_INTEP_PREAMBLE_RESET, 0x0
.equ	USB_ADDR_ENDP5_INTEP_PREAMBLE_BITS, 0x04000000
.equ	USB_ADDR_ENDP5_INTEP_PREAMBLE_MSB, 26
.equ	USB_ADDR_ENDP5_INTEP_PREAMBLE_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP5_INTEP_DIR
# Description : Direction of the interrupt endpoint. In=0, Out=1
.equ	USB_ADDR_ENDP5_INTEP_DIR_RESET, 0x0
.equ	USB_ADDR_ENDP5_INTEP_DIR_BITS, 0x02000000
.equ	USB_ADDR_ENDP5_INTEP_DIR_MSB, 25
.equ	USB_ADDR_ENDP5_INTEP_DIR_LSB, 25
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP5_ENDPOINT
# Description : Endpoint number of the interrupt endpoint
.equ	USB_ADDR_ENDP5_ENDPOINT_RESET, 0x0
.equ	USB_ADDR_ENDP5_ENDPOINT_BITS, 0x000f0000
.equ	USB_ADDR_ENDP5_ENDPOINT_MSB, 19
.equ	USB_ADDR_ENDP5_ENDPOINT_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP5_ADDRESS
# Description : Device address
.equ	USB_ADDR_ENDP5_ADDRESS_RESET, 0x00
.equ	USB_ADDR_ENDP5_ADDRESS_BITS, 0x0000007f
.equ	USB_ADDR_ENDP5_ADDRESS_MSB, 6
.equ	USB_ADDR_ENDP5_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_ADDR_ENDP6
# Description : Interrupt endpoint 6. Only valid for HOST mode.
.equ	USB_ADDR_ENDP6_OFFSET, 0x00000018
.equ	USB_ADDR_ENDP6_BITS, 0x060f007f
.equ	USB_ADDR_ENDP6_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP6_INTEP_PREAMBLE
# Description : Interrupt EP requires preamble (is a low speed device on a full
#               speed hub)
.equ	USB_ADDR_ENDP6_INTEP_PREAMBLE_RESET, 0x0
.equ	USB_ADDR_ENDP6_INTEP_PREAMBLE_BITS, 0x04000000
.equ	USB_ADDR_ENDP6_INTEP_PREAMBLE_MSB, 26
.equ	USB_ADDR_ENDP6_INTEP_PREAMBLE_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP6_INTEP_DIR
# Description : Direction of the interrupt endpoint. In=0, Out=1
.equ	USB_ADDR_ENDP6_INTEP_DIR_RESET, 0x0
.equ	USB_ADDR_ENDP6_INTEP_DIR_BITS, 0x02000000
.equ	USB_ADDR_ENDP6_INTEP_DIR_MSB, 25
.equ	USB_ADDR_ENDP6_INTEP_DIR_LSB, 25
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP6_ENDPOINT
# Description : Endpoint number of the interrupt endpoint
.equ	USB_ADDR_ENDP6_ENDPOINT_RESET, 0x0
.equ	USB_ADDR_ENDP6_ENDPOINT_BITS, 0x000f0000
.equ	USB_ADDR_ENDP6_ENDPOINT_MSB, 19
.equ	USB_ADDR_ENDP6_ENDPOINT_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP6_ADDRESS
# Description : Device address
.equ	USB_ADDR_ENDP6_ADDRESS_RESET, 0x00
.equ	USB_ADDR_ENDP6_ADDRESS_BITS, 0x0000007f
.equ	USB_ADDR_ENDP6_ADDRESS_MSB, 6
.equ	USB_ADDR_ENDP6_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_ADDR_ENDP7
# Description : Interrupt endpoint 7. Only valid for HOST mode.
.equ	USB_ADDR_ENDP7_OFFSET, 0x0000001c
.equ	USB_ADDR_ENDP7_BITS, 0x060f007f
.equ	USB_ADDR_ENDP7_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP7_INTEP_PREAMBLE
# Description : Interrupt EP requires preamble (is a low speed device on a full
#               speed hub)
.equ	USB_ADDR_ENDP7_INTEP_PREAMBLE_RESET, 0x0
.equ	USB_ADDR_ENDP7_INTEP_PREAMBLE_BITS, 0x04000000
.equ	USB_ADDR_ENDP7_INTEP_PREAMBLE_MSB, 26
.equ	USB_ADDR_ENDP7_INTEP_PREAMBLE_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP7_INTEP_DIR
# Description : Direction of the interrupt endpoint. In=0, Out=1
.equ	USB_ADDR_ENDP7_INTEP_DIR_RESET, 0x0
.equ	USB_ADDR_ENDP7_INTEP_DIR_BITS, 0x02000000
.equ	USB_ADDR_ENDP7_INTEP_DIR_MSB, 25
.equ	USB_ADDR_ENDP7_INTEP_DIR_LSB, 25
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP7_ENDPOINT
# Description : Endpoint number of the interrupt endpoint
.equ	USB_ADDR_ENDP7_ENDPOINT_RESET, 0x0
.equ	USB_ADDR_ENDP7_ENDPOINT_BITS, 0x000f0000
.equ	USB_ADDR_ENDP7_ENDPOINT_MSB, 19
.equ	USB_ADDR_ENDP7_ENDPOINT_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP7_ADDRESS
# Description : Device address
.equ	USB_ADDR_ENDP7_ADDRESS_RESET, 0x00
.equ	USB_ADDR_ENDP7_ADDRESS_BITS, 0x0000007f
.equ	USB_ADDR_ENDP7_ADDRESS_MSB, 6
.equ	USB_ADDR_ENDP7_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_ADDR_ENDP8
# Description : Interrupt endpoint 8. Only valid for HOST mode.
.equ	USB_ADDR_ENDP8_OFFSET, 0x00000020
.equ	USB_ADDR_ENDP8_BITS, 0x060f007f
.equ	USB_ADDR_ENDP8_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP8_INTEP_PREAMBLE
# Description : Interrupt EP requires preamble (is a low speed device on a full
#               speed hub)
.equ	USB_ADDR_ENDP8_INTEP_PREAMBLE_RESET, 0x0
.equ	USB_ADDR_ENDP8_INTEP_PREAMBLE_BITS, 0x04000000
.equ	USB_ADDR_ENDP8_INTEP_PREAMBLE_MSB, 26
.equ	USB_ADDR_ENDP8_INTEP_PREAMBLE_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP8_INTEP_DIR
# Description : Direction of the interrupt endpoint. In=0, Out=1
.equ	USB_ADDR_ENDP8_INTEP_DIR_RESET, 0x0
.equ	USB_ADDR_ENDP8_INTEP_DIR_BITS, 0x02000000
.equ	USB_ADDR_ENDP8_INTEP_DIR_MSB, 25
.equ	USB_ADDR_ENDP8_INTEP_DIR_LSB, 25
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP8_ENDPOINT
# Description : Endpoint number of the interrupt endpoint
.equ	USB_ADDR_ENDP8_ENDPOINT_RESET, 0x0
.equ	USB_ADDR_ENDP8_ENDPOINT_BITS, 0x000f0000
.equ	USB_ADDR_ENDP8_ENDPOINT_MSB, 19
.equ	USB_ADDR_ENDP8_ENDPOINT_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP8_ADDRESS
# Description : Device address
.equ	USB_ADDR_ENDP8_ADDRESS_RESET, 0x00
.equ	USB_ADDR_ENDP8_ADDRESS_BITS, 0x0000007f
.equ	USB_ADDR_ENDP8_ADDRESS_MSB, 6
.equ	USB_ADDR_ENDP8_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_ADDR_ENDP9
# Description : Interrupt endpoint 9. Only valid for HOST mode.
.equ	USB_ADDR_ENDP9_OFFSET, 0x00000024
.equ	USB_ADDR_ENDP9_BITS, 0x060f007f
.equ	USB_ADDR_ENDP9_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP9_INTEP_PREAMBLE
# Description : Interrupt EP requires preamble (is a low speed device on a full
#               speed hub)
.equ	USB_ADDR_ENDP9_INTEP_PREAMBLE_RESET, 0x0
.equ	USB_ADDR_ENDP9_INTEP_PREAMBLE_BITS, 0x04000000
.equ	USB_ADDR_ENDP9_INTEP_PREAMBLE_MSB, 26
.equ	USB_ADDR_ENDP9_INTEP_PREAMBLE_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP9_INTEP_DIR
# Description : Direction of the interrupt endpoint. In=0, Out=1
.equ	USB_ADDR_ENDP9_INTEP_DIR_RESET, 0x0
.equ	USB_ADDR_ENDP9_INTEP_DIR_BITS, 0x02000000
.equ	USB_ADDR_ENDP9_INTEP_DIR_MSB, 25
.equ	USB_ADDR_ENDP9_INTEP_DIR_LSB, 25
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP9_ENDPOINT
# Description : Endpoint number of the interrupt endpoint
.equ	USB_ADDR_ENDP9_ENDPOINT_RESET, 0x0
.equ	USB_ADDR_ENDP9_ENDPOINT_BITS, 0x000f0000
.equ	USB_ADDR_ENDP9_ENDPOINT_MSB, 19
.equ	USB_ADDR_ENDP9_ENDPOINT_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP9_ADDRESS
# Description : Device address
.equ	USB_ADDR_ENDP9_ADDRESS_RESET, 0x00
.equ	USB_ADDR_ENDP9_ADDRESS_BITS, 0x0000007f
.equ	USB_ADDR_ENDP9_ADDRESS_MSB, 6
.equ	USB_ADDR_ENDP9_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_ADDR_ENDP10
# Description : Interrupt endpoint 10. Only valid for HOST mode.
.equ	USB_ADDR_ENDP10_OFFSET, 0x00000028
.equ	USB_ADDR_ENDP10_BITS, 0x060f007f
.equ	USB_ADDR_ENDP10_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP10_INTEP_PREAMBLE
# Description : Interrupt EP requires preamble (is a low speed device on a full
#               speed hub)
.equ	USB_ADDR_ENDP10_INTEP_PREAMBLE_RESET, 0x0
.equ	USB_ADDR_ENDP10_INTEP_PREAMBLE_BITS, 0x04000000
.equ	USB_ADDR_ENDP10_INTEP_PREAMBLE_MSB, 26
.equ	USB_ADDR_ENDP10_INTEP_PREAMBLE_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP10_INTEP_DIR
# Description : Direction of the interrupt endpoint. In=0, Out=1
.equ	USB_ADDR_ENDP10_INTEP_DIR_RESET, 0x0
.equ	USB_ADDR_ENDP10_INTEP_DIR_BITS, 0x02000000
.equ	USB_ADDR_ENDP10_INTEP_DIR_MSB, 25
.equ	USB_ADDR_ENDP10_INTEP_DIR_LSB, 25
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP10_ENDPOINT
# Description : Endpoint number of the interrupt endpoint
.equ	USB_ADDR_ENDP10_ENDPOINT_RESET, 0x0
.equ	USB_ADDR_ENDP10_ENDPOINT_BITS, 0x000f0000
.equ	USB_ADDR_ENDP10_ENDPOINT_MSB, 19
.equ	USB_ADDR_ENDP10_ENDPOINT_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP10_ADDRESS
# Description : Device address
.equ	USB_ADDR_ENDP10_ADDRESS_RESET, 0x00
.equ	USB_ADDR_ENDP10_ADDRESS_BITS, 0x0000007f
.equ	USB_ADDR_ENDP10_ADDRESS_MSB, 6
.equ	USB_ADDR_ENDP10_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_ADDR_ENDP11
# Description : Interrupt endpoint 11. Only valid for HOST mode.
.equ	USB_ADDR_ENDP11_OFFSET, 0x0000002c
.equ	USB_ADDR_ENDP11_BITS, 0x060f007f
.equ	USB_ADDR_ENDP11_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP11_INTEP_PREAMBLE
# Description : Interrupt EP requires preamble (is a low speed device on a full
#               speed hub)
.equ	USB_ADDR_ENDP11_INTEP_PREAMBLE_RESET, 0x0
.equ	USB_ADDR_ENDP11_INTEP_PREAMBLE_BITS, 0x04000000
.equ	USB_ADDR_ENDP11_INTEP_PREAMBLE_MSB, 26
.equ	USB_ADDR_ENDP11_INTEP_PREAMBLE_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP11_INTEP_DIR
# Description : Direction of the interrupt endpoint. In=0, Out=1
.equ	USB_ADDR_ENDP11_INTEP_DIR_RESET, 0x0
.equ	USB_ADDR_ENDP11_INTEP_DIR_BITS, 0x02000000
.equ	USB_ADDR_ENDP11_INTEP_DIR_MSB, 25
.equ	USB_ADDR_ENDP11_INTEP_DIR_LSB, 25
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP11_ENDPOINT
# Description : Endpoint number of the interrupt endpoint
.equ	USB_ADDR_ENDP11_ENDPOINT_RESET, 0x0
.equ	USB_ADDR_ENDP11_ENDPOINT_BITS, 0x000f0000
.equ	USB_ADDR_ENDP11_ENDPOINT_MSB, 19
.equ	USB_ADDR_ENDP11_ENDPOINT_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP11_ADDRESS
# Description : Device address
.equ	USB_ADDR_ENDP11_ADDRESS_RESET, 0x00
.equ	USB_ADDR_ENDP11_ADDRESS_BITS, 0x0000007f
.equ	USB_ADDR_ENDP11_ADDRESS_MSB, 6
.equ	USB_ADDR_ENDP11_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_ADDR_ENDP12
# Description : Interrupt endpoint 12. Only valid for HOST mode.
.equ	USB_ADDR_ENDP12_OFFSET, 0x00000030
.equ	USB_ADDR_ENDP12_BITS, 0x060f007f
.equ	USB_ADDR_ENDP12_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP12_INTEP_PREAMBLE
# Description : Interrupt EP requires preamble (is a low speed device on a full
#               speed hub)
.equ	USB_ADDR_ENDP12_INTEP_PREAMBLE_RESET, 0x0
.equ	USB_ADDR_ENDP12_INTEP_PREAMBLE_BITS, 0x04000000
.equ	USB_ADDR_ENDP12_INTEP_PREAMBLE_MSB, 26
.equ	USB_ADDR_ENDP12_INTEP_PREAMBLE_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP12_INTEP_DIR
# Description : Direction of the interrupt endpoint. In=0, Out=1
.equ	USB_ADDR_ENDP12_INTEP_DIR_RESET, 0x0
.equ	USB_ADDR_ENDP12_INTEP_DIR_BITS, 0x02000000
.equ	USB_ADDR_ENDP12_INTEP_DIR_MSB, 25
.equ	USB_ADDR_ENDP12_INTEP_DIR_LSB, 25
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP12_ENDPOINT
# Description : Endpoint number of the interrupt endpoint
.equ	USB_ADDR_ENDP12_ENDPOINT_RESET, 0x0
.equ	USB_ADDR_ENDP12_ENDPOINT_BITS, 0x000f0000
.equ	USB_ADDR_ENDP12_ENDPOINT_MSB, 19
.equ	USB_ADDR_ENDP12_ENDPOINT_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP12_ADDRESS
# Description : Device address
.equ	USB_ADDR_ENDP12_ADDRESS_RESET, 0x00
.equ	USB_ADDR_ENDP12_ADDRESS_BITS, 0x0000007f
.equ	USB_ADDR_ENDP12_ADDRESS_MSB, 6
.equ	USB_ADDR_ENDP12_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_ADDR_ENDP13
# Description : Interrupt endpoint 13. Only valid for HOST mode.
.equ	USB_ADDR_ENDP13_OFFSET, 0x00000034
.equ	USB_ADDR_ENDP13_BITS, 0x060f007f
.equ	USB_ADDR_ENDP13_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP13_INTEP_PREAMBLE
# Description : Interrupt EP requires preamble (is a low speed device on a full
#               speed hub)
.equ	USB_ADDR_ENDP13_INTEP_PREAMBLE_RESET, 0x0
.equ	USB_ADDR_ENDP13_INTEP_PREAMBLE_BITS, 0x04000000
.equ	USB_ADDR_ENDP13_INTEP_PREAMBLE_MSB, 26
.equ	USB_ADDR_ENDP13_INTEP_PREAMBLE_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP13_INTEP_DIR
# Description : Direction of the interrupt endpoint. In=0, Out=1
.equ	USB_ADDR_ENDP13_INTEP_DIR_RESET, 0x0
.equ	USB_ADDR_ENDP13_INTEP_DIR_BITS, 0x02000000
.equ	USB_ADDR_ENDP13_INTEP_DIR_MSB, 25
.equ	USB_ADDR_ENDP13_INTEP_DIR_LSB, 25
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP13_ENDPOINT
# Description : Endpoint number of the interrupt endpoint
.equ	USB_ADDR_ENDP13_ENDPOINT_RESET, 0x0
.equ	USB_ADDR_ENDP13_ENDPOINT_BITS, 0x000f0000
.equ	USB_ADDR_ENDP13_ENDPOINT_MSB, 19
.equ	USB_ADDR_ENDP13_ENDPOINT_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP13_ADDRESS
# Description : Device address
.equ	USB_ADDR_ENDP13_ADDRESS_RESET, 0x00
.equ	USB_ADDR_ENDP13_ADDRESS_BITS, 0x0000007f
.equ	USB_ADDR_ENDP13_ADDRESS_MSB, 6
.equ	USB_ADDR_ENDP13_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_ADDR_ENDP14
# Description : Interrupt endpoint 14. Only valid for HOST mode.
.equ	USB_ADDR_ENDP14_OFFSET, 0x00000038
.equ	USB_ADDR_ENDP14_BITS, 0x060f007f
.equ	USB_ADDR_ENDP14_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP14_INTEP_PREAMBLE
# Description : Interrupt EP requires preamble (is a low speed device on a full
#               speed hub)
.equ	USB_ADDR_ENDP14_INTEP_PREAMBLE_RESET, 0x0
.equ	USB_ADDR_ENDP14_INTEP_PREAMBLE_BITS, 0x04000000
.equ	USB_ADDR_ENDP14_INTEP_PREAMBLE_MSB, 26
.equ	USB_ADDR_ENDP14_INTEP_PREAMBLE_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP14_INTEP_DIR
# Description : Direction of the interrupt endpoint. In=0, Out=1
.equ	USB_ADDR_ENDP14_INTEP_DIR_RESET, 0x0
.equ	USB_ADDR_ENDP14_INTEP_DIR_BITS, 0x02000000
.equ	USB_ADDR_ENDP14_INTEP_DIR_MSB, 25
.equ	USB_ADDR_ENDP14_INTEP_DIR_LSB, 25
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP14_ENDPOINT
# Description : Endpoint number of the interrupt endpoint
.equ	USB_ADDR_ENDP14_ENDPOINT_RESET, 0x0
.equ	USB_ADDR_ENDP14_ENDPOINT_BITS, 0x000f0000
.equ	USB_ADDR_ENDP14_ENDPOINT_MSB, 19
.equ	USB_ADDR_ENDP14_ENDPOINT_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP14_ADDRESS
# Description : Device address
.equ	USB_ADDR_ENDP14_ADDRESS_RESET, 0x00
.equ	USB_ADDR_ENDP14_ADDRESS_BITS, 0x0000007f
.equ	USB_ADDR_ENDP14_ADDRESS_MSB, 6
.equ	USB_ADDR_ENDP14_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_ADDR_ENDP15
# Description : Interrupt endpoint 15. Only valid for HOST mode.
.equ	USB_ADDR_ENDP15_OFFSET, 0x0000003c
.equ	USB_ADDR_ENDP15_BITS, 0x060f007f
.equ	USB_ADDR_ENDP15_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP15_INTEP_PREAMBLE
# Description : Interrupt EP requires preamble (is a low speed device on a full
#               speed hub)
.equ	USB_ADDR_ENDP15_INTEP_PREAMBLE_RESET, 0x0
.equ	USB_ADDR_ENDP15_INTEP_PREAMBLE_BITS, 0x04000000
.equ	USB_ADDR_ENDP15_INTEP_PREAMBLE_MSB, 26
.equ	USB_ADDR_ENDP15_INTEP_PREAMBLE_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP15_INTEP_DIR
# Description : Direction of the interrupt endpoint. In=0, Out=1
.equ	USB_ADDR_ENDP15_INTEP_DIR_RESET, 0x0
.equ	USB_ADDR_ENDP15_INTEP_DIR_BITS, 0x02000000
.equ	USB_ADDR_ENDP15_INTEP_DIR_MSB, 25
.equ	USB_ADDR_ENDP15_INTEP_DIR_LSB, 25
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP15_ENDPOINT
# Description : Endpoint number of the interrupt endpoint
.equ	USB_ADDR_ENDP15_ENDPOINT_RESET, 0x0
.equ	USB_ADDR_ENDP15_ENDPOINT_BITS, 0x000f0000
.equ	USB_ADDR_ENDP15_ENDPOINT_MSB, 19
.equ	USB_ADDR_ENDP15_ENDPOINT_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_ADDR_ENDP15_ADDRESS
# Description : Device address
.equ	USB_ADDR_ENDP15_ADDRESS_RESET, 0x00
.equ	USB_ADDR_ENDP15_ADDRESS_BITS, 0x0000007f
.equ	USB_ADDR_ENDP15_ADDRESS_MSB, 6
.equ	USB_ADDR_ENDP15_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_MAIN_CTRL
# Description : Main control register
.equ	USB_MAIN_CTRL_OFFSET, 0x00000040
.equ	USB_MAIN_CTRL_BITS, 0x80000007
.equ	USB_MAIN_CTRL_RESET, 0x00000004
# -----------------------------------------------------------------------------
# Field       : USB_MAIN_CTRL_SIM_TIMING
# Description : Reduced timings for simulation
.equ	USB_MAIN_CTRL_SIM_TIMING_RESET, 0x0
.equ	USB_MAIN_CTRL_SIM_TIMING_BITS, 0x80000000
.equ	USB_MAIN_CTRL_SIM_TIMING_MSB, 31
.equ	USB_MAIN_CTRL_SIM_TIMING_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_MAIN_CTRL_PHY_ISO
# Description : Isolates USB phy after controller power-up
#               Remove isolation once software has configured the controller
#               Not isolated = 0, Isolated = 1
.equ	USB_MAIN_CTRL_PHY_ISO_RESET, 0x1
.equ	USB_MAIN_CTRL_PHY_ISO_BITS, 0x00000004
.equ	USB_MAIN_CTRL_PHY_ISO_MSB, 2
.equ	USB_MAIN_CTRL_PHY_ISO_LSB, 2
# -----------------------------------------------------------------------------
# Field       : USB_MAIN_CTRL_HOST_NDEVICE
# Description : Device mode = 0, Host mode = 1
.equ	USB_MAIN_CTRL_HOST_NDEVICE_RESET, 0x0
.equ	USB_MAIN_CTRL_HOST_NDEVICE_BITS, 0x00000002
.equ	USB_MAIN_CTRL_HOST_NDEVICE_MSB, 1
.equ	USB_MAIN_CTRL_HOST_NDEVICE_LSB, 1
# -----------------------------------------------------------------------------
# Field       : USB_MAIN_CTRL_CONTROLLER_EN
# Description : Enable controller
.equ	USB_MAIN_CTRL_CONTROLLER_EN_RESET, 0x0
.equ	USB_MAIN_CTRL_CONTROLLER_EN_BITS, 0x00000001
.equ	USB_MAIN_CTRL_CONTROLLER_EN_MSB, 0
.equ	USB_MAIN_CTRL_CONTROLLER_EN_LSB, 0
# =============================================================================
# Register    : USB_SOF_WR
# Description : Set the SOF (Start of Frame) frame number in the host
#               controller. The SOF packet is sent every 1ms and the host will
#               increment the frame number by 1 each time.
.equ	USB_SOF_WR_OFFSET, 0x00000044
.equ	USB_SOF_WR_BITS, 0x000007ff
.equ	USB_SOF_WR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_SOF_WR_COUNT
.equ	USB_SOF_WR_COUNT_RESET, 0x000
.equ	USB_SOF_WR_COUNT_BITS, 0x000007ff
.equ	USB_SOF_WR_COUNT_MSB, 10
.equ	USB_SOF_WR_COUNT_LSB, 0
# =============================================================================
# Register    : USB_SOF_RD
# Description : Read the last SOF (Start of Frame) frame number seen. In device
#               mode the last SOF received from the host. In host mode the last
#               SOF sent by the host.
.equ	USB_SOF_RD_OFFSET, 0x00000048
.equ	USB_SOF_RD_BITS, 0x000007ff
.equ	USB_SOF_RD_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_SOF_RD_COUNT
.equ	USB_SOF_RD_COUNT_RESET, 0x000
.equ	USB_SOF_RD_COUNT_BITS, 0x000007ff
.equ	USB_SOF_RD_COUNT_MSB, 10
.equ	USB_SOF_RD_COUNT_LSB, 0
# =============================================================================
# Register    : USB_SIE_CTRL
# Description : SIE control register
.equ	USB_SIE_CTRL_OFFSET, 0x0000004c
.equ	USB_SIE_CTRL_BITS, 0xff0fbf5f
.equ	USB_SIE_CTRL_RESET, 0x00008000
# -----------------------------------------------------------------------------
# Field       : USB_SIE_CTRL_EP0_INT_STALL
# Description : Device: Set bit in EP_STATUS_STALL_NAK when EP0 sends a STALL
.equ	USB_SIE_CTRL_EP0_INT_STALL_RESET, 0x0
.equ	USB_SIE_CTRL_EP0_INT_STALL_BITS, 0x80000000
.equ	USB_SIE_CTRL_EP0_INT_STALL_MSB, 31
.equ	USB_SIE_CTRL_EP0_INT_STALL_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_SIE_CTRL_EP0_DOUBLE_BUF
# Description : Device: EP0 single buffered = 0, double buffered = 1
.equ	USB_SIE_CTRL_EP0_DOUBLE_BUF_RESET, 0x0
.equ	USB_SIE_CTRL_EP0_DOUBLE_BUF_BITS, 0x40000000
.equ	USB_SIE_CTRL_EP0_DOUBLE_BUF_MSB, 30
.equ	USB_SIE_CTRL_EP0_DOUBLE_BUF_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_SIE_CTRL_EP0_INT_1BUF
# Description : Device: Set bit in BUFF_STATUS for every buffer completed on
#               EP0
.equ	USB_SIE_CTRL_EP0_INT_1BUF_RESET, 0x0
.equ	USB_SIE_CTRL_EP0_INT_1BUF_BITS, 0x20000000
.equ	USB_SIE_CTRL_EP0_INT_1BUF_MSB, 29
.equ	USB_SIE_CTRL_EP0_INT_1BUF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_SIE_CTRL_EP0_INT_2BUF
# Description : Device: Set bit in BUFF_STATUS for every 2 buffers completed on
#               EP0
.equ	USB_SIE_CTRL_EP0_INT_2BUF_RESET, 0x0
.equ	USB_SIE_CTRL_EP0_INT_2BUF_BITS, 0x10000000
.equ	USB_SIE_CTRL_EP0_INT_2BUF_MSB, 28
.equ	USB_SIE_CTRL_EP0_INT_2BUF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_SIE_CTRL_EP0_INT_NAK
# Description : Device: Set bit in EP_STATUS_STALL_NAK when EP0 sends a NAK
.equ	USB_SIE_CTRL_EP0_INT_NAK_RESET, 0x0
.equ	USB_SIE_CTRL_EP0_INT_NAK_BITS, 0x08000000
.equ	USB_SIE_CTRL_EP0_INT_NAK_MSB, 27
.equ	USB_SIE_CTRL_EP0_INT_NAK_LSB, 27
# -----------------------------------------------------------------------------
# Field       : USB_SIE_CTRL_DIRECT_EN
# Description : Direct bus drive enable
.equ	USB_SIE_CTRL_DIRECT_EN_RESET, 0x0
.equ	USB_SIE_CTRL_DIRECT_EN_BITS, 0x04000000
.equ	USB_SIE_CTRL_DIRECT_EN_MSB, 26
.equ	USB_SIE_CTRL_DIRECT_EN_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_SIE_CTRL_DIRECT_DP
# Description : Direct control of DP
.equ	USB_SIE_CTRL_DIRECT_DP_RESET, 0x0
.equ	USB_SIE_CTRL_DIRECT_DP_BITS, 0x02000000
.equ	USB_SIE_CTRL_DIRECT_DP_MSB, 25
.equ	USB_SIE_CTRL_DIRECT_DP_LSB, 25
# -----------------------------------------------------------------------------
# Field       : USB_SIE_CTRL_DIRECT_DM
# Description : Direct control of DM
.equ	USB_SIE_CTRL_DIRECT_DM_RESET, 0x0
.equ	USB_SIE_CTRL_DIRECT_DM_BITS, 0x01000000
.equ	USB_SIE_CTRL_DIRECT_DM_MSB, 24
.equ	USB_SIE_CTRL_DIRECT_DM_LSB, 24
# -----------------------------------------------------------------------------
# Field       : USB_SIE_CTRL_EP0_STOP_ON_SHORT_PACKET
# Description : Device: Stop EP0 on a short packet.
.equ	USB_SIE_CTRL_EP0_STOP_ON_SHORT_PACKET_RESET, 0x0
.equ	USB_SIE_CTRL_EP0_STOP_ON_SHORT_PACKET_BITS, 0x00080000
.equ	USB_SIE_CTRL_EP0_STOP_ON_SHORT_PACKET_MSB, 19
.equ	USB_SIE_CTRL_EP0_STOP_ON_SHORT_PACKET_LSB, 19
# -----------------------------------------------------------------------------
# Field       : USB_SIE_CTRL_TRANSCEIVER_PD
# Description : Power down bus transceiver
.equ	USB_SIE_CTRL_TRANSCEIVER_PD_RESET, 0x0
.equ	USB_SIE_CTRL_TRANSCEIVER_PD_BITS, 0x00040000
.equ	USB_SIE_CTRL_TRANSCEIVER_PD_MSB, 18
.equ	USB_SIE_CTRL_TRANSCEIVER_PD_LSB, 18
# -----------------------------------------------------------------------------
# Field       : USB_SIE_CTRL_RPU_OPT
# Description : Device: Pull-up strength (0=1K2, 1=2k3)
.equ	USB_SIE_CTRL_RPU_OPT_RESET, 0x0
.equ	USB_SIE_CTRL_RPU_OPT_BITS, 0x00020000
.equ	USB_SIE_CTRL_RPU_OPT_MSB, 17
.equ	USB_SIE_CTRL_RPU_OPT_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_SIE_CTRL_PULLUP_EN
# Description : Device: Enable pull up resistor
.equ	USB_SIE_CTRL_PULLUP_EN_RESET, 0x0
.equ	USB_SIE_CTRL_PULLUP_EN_BITS, 0x00010000
.equ	USB_SIE_CTRL_PULLUP_EN_MSB, 16
.equ	USB_SIE_CTRL_PULLUP_EN_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_SIE_CTRL_PULLDOWN_EN
# Description : Host: Enable pull down resistors
.equ	USB_SIE_CTRL_PULLDOWN_EN_RESET, 0x1
.equ	USB_SIE_CTRL_PULLDOWN_EN_BITS, 0x00008000
.equ	USB_SIE_CTRL_PULLDOWN_EN_MSB, 15
.equ	USB_SIE_CTRL_PULLDOWN_EN_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_SIE_CTRL_RESET_BUS
# Description : Host: Reset bus
.equ	USB_SIE_CTRL_RESET_BUS_RESET, 0x0
.equ	USB_SIE_CTRL_RESET_BUS_BITS, 0x00002000
.equ	USB_SIE_CTRL_RESET_BUS_MSB, 13
.equ	USB_SIE_CTRL_RESET_BUS_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_SIE_CTRL_RESUME
# Description : Device: Remote wakeup. Device can initiate its own resume after
#               suspend.
.equ	USB_SIE_CTRL_RESUME_RESET, 0x0
.equ	USB_SIE_CTRL_RESUME_BITS, 0x00001000
.equ	USB_SIE_CTRL_RESUME_MSB, 12
.equ	USB_SIE_CTRL_RESUME_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_SIE_CTRL_VBUS_EN
# Description : Host: Enable VBUS
.equ	USB_SIE_CTRL_VBUS_EN_RESET, 0x0
.equ	USB_SIE_CTRL_VBUS_EN_BITS, 0x00000800
.equ	USB_SIE_CTRL_VBUS_EN_MSB, 11
.equ	USB_SIE_CTRL_VBUS_EN_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_SIE_CTRL_KEEP_ALIVE_EN
# Description : Host: Enable keep alive packet (for low speed bus)
.equ	USB_SIE_CTRL_KEEP_ALIVE_EN_RESET, 0x0
.equ	USB_SIE_CTRL_KEEP_ALIVE_EN_BITS, 0x00000400
.equ	USB_SIE_CTRL_KEEP_ALIVE_EN_MSB, 10
.equ	USB_SIE_CTRL_KEEP_ALIVE_EN_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_SIE_CTRL_SOF_EN
# Description : Host: Enable SOF generation (for full speed bus)
.equ	USB_SIE_CTRL_SOF_EN_RESET, 0x0
.equ	USB_SIE_CTRL_SOF_EN_BITS, 0x00000200
.equ	USB_SIE_CTRL_SOF_EN_MSB, 9
.equ	USB_SIE_CTRL_SOF_EN_LSB, 9
# -----------------------------------------------------------------------------
# Field       : USB_SIE_CTRL_SOF_SYNC
# Description : Host: Delay packet(s) until after SOF
.equ	USB_SIE_CTRL_SOF_SYNC_RESET, 0x0
.equ	USB_SIE_CTRL_SOF_SYNC_BITS, 0x00000100
.equ	USB_SIE_CTRL_SOF_SYNC_MSB, 8
.equ	USB_SIE_CTRL_SOF_SYNC_LSB, 8
# -----------------------------------------------------------------------------
# Field       : USB_SIE_CTRL_PREAMBLE_EN
# Description : Host: Preable enable for LS device on FS hub
.equ	USB_SIE_CTRL_PREAMBLE_EN_RESET, 0x0
.equ	USB_SIE_CTRL_PREAMBLE_EN_BITS, 0x00000040
.equ	USB_SIE_CTRL_PREAMBLE_EN_MSB, 6
.equ	USB_SIE_CTRL_PREAMBLE_EN_LSB, 6
# -----------------------------------------------------------------------------
# Field       : USB_SIE_CTRL_STOP_TRANS
# Description : Host: Stop transaction
.equ	USB_SIE_CTRL_STOP_TRANS_RESET, 0x0
.equ	USB_SIE_CTRL_STOP_TRANS_BITS, 0x00000010
.equ	USB_SIE_CTRL_STOP_TRANS_MSB, 4
.equ	USB_SIE_CTRL_STOP_TRANS_LSB, 4
# -----------------------------------------------------------------------------
# Field       : USB_SIE_CTRL_RECEIVE_DATA
# Description : Host: Receive transaction (IN to host)
.equ	USB_SIE_CTRL_RECEIVE_DATA_RESET, 0x0
.equ	USB_SIE_CTRL_RECEIVE_DATA_BITS, 0x00000008
.equ	USB_SIE_CTRL_RECEIVE_DATA_MSB, 3
.equ	USB_SIE_CTRL_RECEIVE_DATA_LSB, 3
# -----------------------------------------------------------------------------
# Field       : USB_SIE_CTRL_SEND_DATA
# Description : Host: Send transaction (OUT from host)
.equ	USB_SIE_CTRL_SEND_DATA_RESET, 0x0
.equ	USB_SIE_CTRL_SEND_DATA_BITS, 0x00000004
.equ	USB_SIE_CTRL_SEND_DATA_MSB, 2
.equ	USB_SIE_CTRL_SEND_DATA_LSB, 2
# -----------------------------------------------------------------------------
# Field       : USB_SIE_CTRL_SEND_SETUP
# Description : Host: Send Setup packet
.equ	USB_SIE_CTRL_SEND_SETUP_RESET, 0x0
.equ	USB_SIE_CTRL_SEND_SETUP_BITS, 0x00000002
.equ	USB_SIE_CTRL_SEND_SETUP_MSB, 1
.equ	USB_SIE_CTRL_SEND_SETUP_LSB, 1
# -----------------------------------------------------------------------------
# Field       : USB_SIE_CTRL_START_TRANS
# Description : Host: Start transaction
.equ	USB_SIE_CTRL_START_TRANS_RESET, 0x0
.equ	USB_SIE_CTRL_START_TRANS_BITS, 0x00000001
.equ	USB_SIE_CTRL_START_TRANS_MSB, 0
.equ	USB_SIE_CTRL_START_TRANS_LSB, 0
# =============================================================================
# Register    : USB_SIE_STATUS
# Description : SIE status register
.equ	USB_SIE_STATUS_OFFSET, 0x00000050
.equ	USB_SIE_STATUS_BITS, 0xff8f1f1d
.equ	USB_SIE_STATUS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_SIE_STATUS_DATA_SEQ_ERROR
# Description : Data Sequence Error.
#
#               The device can raise a sequence error in the following
#               conditions:
#
#               * A SETUP packet is received followed by a DATA1 packet (data
#               phase should always be DATA0) * An OUT packet is received from
#               the host but doesn't match the data pid in the buffer control
#               register read from DPSRAM
#
#               The host can raise a data sequence error in the following
#               conditions:
#
#               * An IN packet from the device has the wrong data PID
.equ	USB_SIE_STATUS_DATA_SEQ_ERROR_RESET, 0x0
.equ	USB_SIE_STATUS_DATA_SEQ_ERROR_BITS, 0x80000000
.equ	USB_SIE_STATUS_DATA_SEQ_ERROR_MSB, 31
.equ	USB_SIE_STATUS_DATA_SEQ_ERROR_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_SIE_STATUS_ACK_REC
# Description : ACK received. Raised by both host and device.
.equ	USB_SIE_STATUS_ACK_REC_RESET, 0x0
.equ	USB_SIE_STATUS_ACK_REC_BITS, 0x40000000
.equ	USB_SIE_STATUS_ACK_REC_MSB, 30
.equ	USB_SIE_STATUS_ACK_REC_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_SIE_STATUS_STALL_REC
# Description : Host: STALL received
.equ	USB_SIE_STATUS_STALL_REC_RESET, 0x0
.equ	USB_SIE_STATUS_STALL_REC_BITS, 0x20000000
.equ	USB_SIE_STATUS_STALL_REC_MSB, 29
.equ	USB_SIE_STATUS_STALL_REC_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_SIE_STATUS_NAK_REC
# Description : Host: NAK received
.equ	USB_SIE_STATUS_NAK_REC_RESET, 0x0
.equ	USB_SIE_STATUS_NAK_REC_BITS, 0x10000000
.equ	USB_SIE_STATUS_NAK_REC_MSB, 28
.equ	USB_SIE_STATUS_NAK_REC_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_SIE_STATUS_RX_TIMEOUT
# Description : RX timeout is raised by both the host and device if an ACK is
#               not received in the maximum time specified by the USB spec.
.equ	USB_SIE_STATUS_RX_TIMEOUT_RESET, 0x0
.equ	USB_SIE_STATUS_RX_TIMEOUT_BITS, 0x08000000
.equ	USB_SIE_STATUS_RX_TIMEOUT_MSB, 27
.equ	USB_SIE_STATUS_RX_TIMEOUT_LSB, 27
# -----------------------------------------------------------------------------
# Field       : USB_SIE_STATUS_RX_OVERFLOW
# Description : RX overflow is raised by the Serial RX engine if the incoming
#               data is too fast.
.equ	USB_SIE_STATUS_RX_OVERFLOW_RESET, 0x0
.equ	USB_SIE_STATUS_RX_OVERFLOW_BITS, 0x04000000
.equ	USB_SIE_STATUS_RX_OVERFLOW_MSB, 26
.equ	USB_SIE_STATUS_RX_OVERFLOW_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_SIE_STATUS_BIT_STUFF_ERROR
# Description : Bit Stuff Error. Raised by the Serial RX engine.
.equ	USB_SIE_STATUS_BIT_STUFF_ERROR_RESET, 0x0
.equ	USB_SIE_STATUS_BIT_STUFF_ERROR_BITS, 0x02000000
.equ	USB_SIE_STATUS_BIT_STUFF_ERROR_MSB, 25
.equ	USB_SIE_STATUS_BIT_STUFF_ERROR_LSB, 25
# -----------------------------------------------------------------------------
# Field       : USB_SIE_STATUS_CRC_ERROR
# Description : CRC Error. Raised by the Serial RX engine.
.equ	USB_SIE_STATUS_CRC_ERROR_RESET, 0x0
.equ	USB_SIE_STATUS_CRC_ERROR_BITS, 0x01000000
.equ	USB_SIE_STATUS_CRC_ERROR_MSB, 24
.equ	USB_SIE_STATUS_CRC_ERROR_LSB, 24
# -----------------------------------------------------------------------------
# Field       : USB_SIE_STATUS_ENDPOINT_ERROR
# Description : An endpoint has encountered an error. Read the ep_rx_error and
#               ep_tx_error registers to find out which endpoint had an error.
.equ	USB_SIE_STATUS_ENDPOINT_ERROR_RESET, 0x0
.equ	USB_SIE_STATUS_ENDPOINT_ERROR_BITS, 0x00800000
.equ	USB_SIE_STATUS_ENDPOINT_ERROR_MSB, 23
.equ	USB_SIE_STATUS_ENDPOINT_ERROR_LSB, 23
# -----------------------------------------------------------------------------
# Field       : USB_SIE_STATUS_BUS_RESET
# Description : Device: bus reset received
.equ	USB_SIE_STATUS_BUS_RESET_RESET, 0x0
.equ	USB_SIE_STATUS_BUS_RESET_BITS, 0x00080000
.equ	USB_SIE_STATUS_BUS_RESET_MSB, 19
.equ	USB_SIE_STATUS_BUS_RESET_LSB, 19
# -----------------------------------------------------------------------------
# Field       : USB_SIE_STATUS_TRANS_COMPLETE
# Description : Transaction complete.
#
#               Raised by device if:
#
#               * An IN or OUT packet is sent with the `LAST_BUFF` bit set in
#               the buffer control register
#
#               Raised by host if:
#
#               * A setup packet is sent when no data in or data out
#               transaction follows * An IN packet is received and the
#               `LAST_BUFF` bit is set in the buffer control register * An IN
#               packet is received with zero length * An OUT packet is sent and
#               the `LAST_BUFF` bit is set
.equ	USB_SIE_STATUS_TRANS_COMPLETE_RESET, 0x0
.equ	USB_SIE_STATUS_TRANS_COMPLETE_BITS, 0x00040000
.equ	USB_SIE_STATUS_TRANS_COMPLETE_MSB, 18
.equ	USB_SIE_STATUS_TRANS_COMPLETE_LSB, 18
# -----------------------------------------------------------------------------
# Field       : USB_SIE_STATUS_SETUP_REC
# Description : Device: Setup packet received
.equ	USB_SIE_STATUS_SETUP_REC_RESET, 0x0
.equ	USB_SIE_STATUS_SETUP_REC_BITS, 0x00020000
.equ	USB_SIE_STATUS_SETUP_REC_MSB, 17
.equ	USB_SIE_STATUS_SETUP_REC_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_SIE_STATUS_CONNECTED
# Description : Device: connected
.equ	USB_SIE_STATUS_CONNECTED_RESET, 0x0
.equ	USB_SIE_STATUS_CONNECTED_BITS, 0x00010000
.equ	USB_SIE_STATUS_CONNECTED_MSB, 16
.equ	USB_SIE_STATUS_CONNECTED_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_SIE_STATUS_RX_SHORT_PACKET
# Description : Device or Host has received a short packet. This is when the
#               data received is less than configured in the buffer control
#               register. Device: If using double buffered mode on device the
#               buffer select will not be toggled after writing status back to
#               the buffer control register. This is to prevent any further
#               transactions on that endpoint until the user has reset the
#               buffer control registers. Host: the current transfer will be
#               stopped early.
.equ	USB_SIE_STATUS_RX_SHORT_PACKET_RESET, 0x0
.equ	USB_SIE_STATUS_RX_SHORT_PACKET_BITS, 0x00001000
.equ	USB_SIE_STATUS_RX_SHORT_PACKET_MSB, 12
.equ	USB_SIE_STATUS_RX_SHORT_PACKET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_SIE_STATUS_RESUME
# Description : Host: Device has initiated a remote resume. Device: host has
#               initiated a resume.
.equ	USB_SIE_STATUS_RESUME_RESET, 0x0
.equ	USB_SIE_STATUS_RESUME_BITS, 0x00000800
.equ	USB_SIE_STATUS_RESUME_MSB, 11
.equ	USB_SIE_STATUS_RESUME_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_SIE_STATUS_VBUS_OVER_CURR
# Description : VBUS over current detected
.equ	USB_SIE_STATUS_VBUS_OVER_CURR_RESET, 0x0
.equ	USB_SIE_STATUS_VBUS_OVER_CURR_BITS, 0x00000400
.equ	USB_SIE_STATUS_VBUS_OVER_CURR_MSB, 10
.equ	USB_SIE_STATUS_VBUS_OVER_CURR_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_SIE_STATUS_SPEED
# Description : Host: device speed. Disconnected = 00, LS = 01, FS = 10
.equ	USB_SIE_STATUS_SPEED_RESET, 0x0
.equ	USB_SIE_STATUS_SPEED_BITS, 0x00000300
.equ	USB_SIE_STATUS_SPEED_MSB, 9
.equ	USB_SIE_STATUS_SPEED_LSB, 8
# -----------------------------------------------------------------------------
# Field       : USB_SIE_STATUS_SUSPENDED
# Description : Bus in suspended state. Valid for device. Device will go into
#               suspend if neither Keep Alive / SOF frames are enabled.
.equ	USB_SIE_STATUS_SUSPENDED_RESET, 0x0
.equ	USB_SIE_STATUS_SUSPENDED_BITS, 0x00000010
.equ	USB_SIE_STATUS_SUSPENDED_MSB, 4
.equ	USB_SIE_STATUS_SUSPENDED_LSB, 4
# -----------------------------------------------------------------------------
# Field       : USB_SIE_STATUS_LINE_STATE
# Description : USB bus line state
.equ	USB_SIE_STATUS_LINE_STATE_RESET, 0x0
.equ	USB_SIE_STATUS_LINE_STATE_BITS, 0x0000000c
.equ	USB_SIE_STATUS_LINE_STATE_MSB, 3
.equ	USB_SIE_STATUS_LINE_STATE_LSB, 2
# -----------------------------------------------------------------------------
# Field       : USB_SIE_STATUS_VBUS_DETECTED
# Description : Device: VBUS Detected
.equ	USB_SIE_STATUS_VBUS_DETECTED_RESET, 0x0
.equ	USB_SIE_STATUS_VBUS_DETECTED_BITS, 0x00000001
.equ	USB_SIE_STATUS_VBUS_DETECTED_MSB, 0
.equ	USB_SIE_STATUS_VBUS_DETECTED_LSB, 0
# =============================================================================
# Register    : USB_INT_EP_CTRL
# Description : interrupt endpoint control register
.equ	USB_INT_EP_CTRL_OFFSET, 0x00000054
.equ	USB_INT_EP_CTRL_BITS, 0x0000fffe
.equ	USB_INT_EP_CTRL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_INT_EP_CTRL_INT_EP_ACTIVE
# Description : Host: Enable interrupt endpoint 1 -> 15
.equ	USB_INT_EP_CTRL_INT_EP_ACTIVE_RESET, 0x0000
.equ	USB_INT_EP_CTRL_INT_EP_ACTIVE_BITS, 0x0000fffe
.equ	USB_INT_EP_CTRL_INT_EP_ACTIVE_MSB, 15
.equ	USB_INT_EP_CTRL_INT_EP_ACTIVE_LSB, 1
# =============================================================================
# Register    : USB_BUFF_STATUS
# Description : Buffer status register. A bit set here indicates that a buffer
#               has completed on the endpoint (if the buffer interrupt is
#               enabled). It is possible for 2 buffers to be completed, so
#               clearing the buffer status bit may instantly re set it on the
#               next clock cycle.
.equ	USB_BUFF_STATUS_OFFSET, 0x00000058
.equ	USB_BUFF_STATUS_BITS, 0xffffffff
.equ	USB_BUFF_STATUS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP15_OUT
.equ	USB_BUFF_STATUS_EP15_OUT_RESET, 0x0
.equ	USB_BUFF_STATUS_EP15_OUT_BITS, 0x80000000
.equ	USB_BUFF_STATUS_EP15_OUT_MSB, 31
.equ	USB_BUFF_STATUS_EP15_OUT_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP15_IN
.equ	USB_BUFF_STATUS_EP15_IN_RESET, 0x0
.equ	USB_BUFF_STATUS_EP15_IN_BITS, 0x40000000
.equ	USB_BUFF_STATUS_EP15_IN_MSB, 30
.equ	USB_BUFF_STATUS_EP15_IN_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP14_OUT
.equ	USB_BUFF_STATUS_EP14_OUT_RESET, 0x0
.equ	USB_BUFF_STATUS_EP14_OUT_BITS, 0x20000000
.equ	USB_BUFF_STATUS_EP14_OUT_MSB, 29
.equ	USB_BUFF_STATUS_EP14_OUT_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP14_IN
.equ	USB_BUFF_STATUS_EP14_IN_RESET, 0x0
.equ	USB_BUFF_STATUS_EP14_IN_BITS, 0x10000000
.equ	USB_BUFF_STATUS_EP14_IN_MSB, 28
.equ	USB_BUFF_STATUS_EP14_IN_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP13_OUT
.equ	USB_BUFF_STATUS_EP13_OUT_RESET, 0x0
.equ	USB_BUFF_STATUS_EP13_OUT_BITS, 0x08000000
.equ	USB_BUFF_STATUS_EP13_OUT_MSB, 27
.equ	USB_BUFF_STATUS_EP13_OUT_LSB, 27
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP13_IN
.equ	USB_BUFF_STATUS_EP13_IN_RESET, 0x0
.equ	USB_BUFF_STATUS_EP13_IN_BITS, 0x04000000
.equ	USB_BUFF_STATUS_EP13_IN_MSB, 26
.equ	USB_BUFF_STATUS_EP13_IN_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP12_OUT
.equ	USB_BUFF_STATUS_EP12_OUT_RESET, 0x0
.equ	USB_BUFF_STATUS_EP12_OUT_BITS, 0x02000000
.equ	USB_BUFF_STATUS_EP12_OUT_MSB, 25
.equ	USB_BUFF_STATUS_EP12_OUT_LSB, 25
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP12_IN
.equ	USB_BUFF_STATUS_EP12_IN_RESET, 0x0
.equ	USB_BUFF_STATUS_EP12_IN_BITS, 0x01000000
.equ	USB_BUFF_STATUS_EP12_IN_MSB, 24
.equ	USB_BUFF_STATUS_EP12_IN_LSB, 24
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP11_OUT
.equ	USB_BUFF_STATUS_EP11_OUT_RESET, 0x0
.equ	USB_BUFF_STATUS_EP11_OUT_BITS, 0x00800000
.equ	USB_BUFF_STATUS_EP11_OUT_MSB, 23
.equ	USB_BUFF_STATUS_EP11_OUT_LSB, 23
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP11_IN
.equ	USB_BUFF_STATUS_EP11_IN_RESET, 0x0
.equ	USB_BUFF_STATUS_EP11_IN_BITS, 0x00400000
.equ	USB_BUFF_STATUS_EP11_IN_MSB, 22
.equ	USB_BUFF_STATUS_EP11_IN_LSB, 22
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP10_OUT
.equ	USB_BUFF_STATUS_EP10_OUT_RESET, 0x0
.equ	USB_BUFF_STATUS_EP10_OUT_BITS, 0x00200000
.equ	USB_BUFF_STATUS_EP10_OUT_MSB, 21
.equ	USB_BUFF_STATUS_EP10_OUT_LSB, 21
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP10_IN
.equ	USB_BUFF_STATUS_EP10_IN_RESET, 0x0
.equ	USB_BUFF_STATUS_EP10_IN_BITS, 0x00100000
.equ	USB_BUFF_STATUS_EP10_IN_MSB, 20
.equ	USB_BUFF_STATUS_EP10_IN_LSB, 20
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP9_OUT
.equ	USB_BUFF_STATUS_EP9_OUT_RESET, 0x0
.equ	USB_BUFF_STATUS_EP9_OUT_BITS, 0x00080000
.equ	USB_BUFF_STATUS_EP9_OUT_MSB, 19
.equ	USB_BUFF_STATUS_EP9_OUT_LSB, 19
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP9_IN
.equ	USB_BUFF_STATUS_EP9_IN_RESET, 0x0
.equ	USB_BUFF_STATUS_EP9_IN_BITS, 0x00040000
.equ	USB_BUFF_STATUS_EP9_IN_MSB, 18
.equ	USB_BUFF_STATUS_EP9_IN_LSB, 18
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP8_OUT
.equ	USB_BUFF_STATUS_EP8_OUT_RESET, 0x0
.equ	USB_BUFF_STATUS_EP8_OUT_BITS, 0x00020000
.equ	USB_BUFF_STATUS_EP8_OUT_MSB, 17
.equ	USB_BUFF_STATUS_EP8_OUT_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP8_IN
.equ	USB_BUFF_STATUS_EP8_IN_RESET, 0x0
.equ	USB_BUFF_STATUS_EP8_IN_BITS, 0x00010000
.equ	USB_BUFF_STATUS_EP8_IN_MSB, 16
.equ	USB_BUFF_STATUS_EP8_IN_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP7_OUT
.equ	USB_BUFF_STATUS_EP7_OUT_RESET, 0x0
.equ	USB_BUFF_STATUS_EP7_OUT_BITS, 0x00008000
.equ	USB_BUFF_STATUS_EP7_OUT_MSB, 15
.equ	USB_BUFF_STATUS_EP7_OUT_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP7_IN
.equ	USB_BUFF_STATUS_EP7_IN_RESET, 0x0
.equ	USB_BUFF_STATUS_EP7_IN_BITS, 0x00004000
.equ	USB_BUFF_STATUS_EP7_IN_MSB, 14
.equ	USB_BUFF_STATUS_EP7_IN_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP6_OUT
.equ	USB_BUFF_STATUS_EP6_OUT_RESET, 0x0
.equ	USB_BUFF_STATUS_EP6_OUT_BITS, 0x00002000
.equ	USB_BUFF_STATUS_EP6_OUT_MSB, 13
.equ	USB_BUFF_STATUS_EP6_OUT_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP6_IN
.equ	USB_BUFF_STATUS_EP6_IN_RESET, 0x0
.equ	USB_BUFF_STATUS_EP6_IN_BITS, 0x00001000
.equ	USB_BUFF_STATUS_EP6_IN_MSB, 12
.equ	USB_BUFF_STATUS_EP6_IN_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP5_OUT
.equ	USB_BUFF_STATUS_EP5_OUT_RESET, 0x0
.equ	USB_BUFF_STATUS_EP5_OUT_BITS, 0x00000800
.equ	USB_BUFF_STATUS_EP5_OUT_MSB, 11
.equ	USB_BUFF_STATUS_EP5_OUT_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP5_IN
.equ	USB_BUFF_STATUS_EP5_IN_RESET, 0x0
.equ	USB_BUFF_STATUS_EP5_IN_BITS, 0x00000400
.equ	USB_BUFF_STATUS_EP5_IN_MSB, 10
.equ	USB_BUFF_STATUS_EP5_IN_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP4_OUT
.equ	USB_BUFF_STATUS_EP4_OUT_RESET, 0x0
.equ	USB_BUFF_STATUS_EP4_OUT_BITS, 0x00000200
.equ	USB_BUFF_STATUS_EP4_OUT_MSB, 9
.equ	USB_BUFF_STATUS_EP4_OUT_LSB, 9
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP4_IN
.equ	USB_BUFF_STATUS_EP4_IN_RESET, 0x0
.equ	USB_BUFF_STATUS_EP4_IN_BITS, 0x00000100
.equ	USB_BUFF_STATUS_EP4_IN_MSB, 8
.equ	USB_BUFF_STATUS_EP4_IN_LSB, 8
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP3_OUT
.equ	USB_BUFF_STATUS_EP3_OUT_RESET, 0x0
.equ	USB_BUFF_STATUS_EP3_OUT_BITS, 0x00000080
.equ	USB_BUFF_STATUS_EP3_OUT_MSB, 7
.equ	USB_BUFF_STATUS_EP3_OUT_LSB, 7
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP3_IN
.equ	USB_BUFF_STATUS_EP3_IN_RESET, 0x0
.equ	USB_BUFF_STATUS_EP3_IN_BITS, 0x00000040
.equ	USB_BUFF_STATUS_EP3_IN_MSB, 6
.equ	USB_BUFF_STATUS_EP3_IN_LSB, 6
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP2_OUT
.equ	USB_BUFF_STATUS_EP2_OUT_RESET, 0x0
.equ	USB_BUFF_STATUS_EP2_OUT_BITS, 0x00000020
.equ	USB_BUFF_STATUS_EP2_OUT_MSB, 5
.equ	USB_BUFF_STATUS_EP2_OUT_LSB, 5
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP2_IN
.equ	USB_BUFF_STATUS_EP2_IN_RESET, 0x0
.equ	USB_BUFF_STATUS_EP2_IN_BITS, 0x00000010
.equ	USB_BUFF_STATUS_EP2_IN_MSB, 4
.equ	USB_BUFF_STATUS_EP2_IN_LSB, 4
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP1_OUT
.equ	USB_BUFF_STATUS_EP1_OUT_RESET, 0x0
.equ	USB_BUFF_STATUS_EP1_OUT_BITS, 0x00000008
.equ	USB_BUFF_STATUS_EP1_OUT_MSB, 3
.equ	USB_BUFF_STATUS_EP1_OUT_LSB, 3
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP1_IN
.equ	USB_BUFF_STATUS_EP1_IN_RESET, 0x0
.equ	USB_BUFF_STATUS_EP1_IN_BITS, 0x00000004
.equ	USB_BUFF_STATUS_EP1_IN_MSB, 2
.equ	USB_BUFF_STATUS_EP1_IN_LSB, 2
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP0_OUT
.equ	USB_BUFF_STATUS_EP0_OUT_RESET, 0x0
.equ	USB_BUFF_STATUS_EP0_OUT_BITS, 0x00000002
.equ	USB_BUFF_STATUS_EP0_OUT_MSB, 1
.equ	USB_BUFF_STATUS_EP0_OUT_LSB, 1
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_STATUS_EP0_IN
.equ	USB_BUFF_STATUS_EP0_IN_RESET, 0x0
.equ	USB_BUFF_STATUS_EP0_IN_BITS, 0x00000001
.equ	USB_BUFF_STATUS_EP0_IN_MSB, 0
.equ	USB_BUFF_STATUS_EP0_IN_LSB, 0
# =============================================================================
# Register    : USB_BUFF_CPU_SHOULD_HANDLE
# Description : Which of the double buffers should be handled. Only valid if
#               using an interrupt per buffer (i.e. not per 2 buffers). Not
#               valid for host interrupt endpoint polling because they are only
#               single buffered.
.equ	USB_BUFF_CPU_SHOULD_HANDLE_OFFSET, 0x0000005c
.equ	USB_BUFF_CPU_SHOULD_HANDLE_BITS, 0xffffffff
.equ	USB_BUFF_CPU_SHOULD_HANDLE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP15_OUT
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP15_OUT_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP15_OUT_BITS, 0x80000000
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP15_OUT_MSB, 31
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP15_OUT_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP15_IN
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP15_IN_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP15_IN_BITS, 0x40000000
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP15_IN_MSB, 30
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP15_IN_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP14_OUT
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP14_OUT_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP14_OUT_BITS, 0x20000000
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP14_OUT_MSB, 29
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP14_OUT_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP14_IN
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP14_IN_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP14_IN_BITS, 0x10000000
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP14_IN_MSB, 28
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP14_IN_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP13_OUT
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP13_OUT_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP13_OUT_BITS, 0x08000000
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP13_OUT_MSB, 27
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP13_OUT_LSB, 27
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP13_IN
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP13_IN_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP13_IN_BITS, 0x04000000
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP13_IN_MSB, 26
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP13_IN_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP12_OUT
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP12_OUT_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP12_OUT_BITS, 0x02000000
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP12_OUT_MSB, 25
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP12_OUT_LSB, 25
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP12_IN
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP12_IN_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP12_IN_BITS, 0x01000000
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP12_IN_MSB, 24
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP12_IN_LSB, 24
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP11_OUT
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP11_OUT_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP11_OUT_BITS, 0x00800000
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP11_OUT_MSB, 23
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP11_OUT_LSB, 23
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP11_IN
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP11_IN_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP11_IN_BITS, 0x00400000
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP11_IN_MSB, 22
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP11_IN_LSB, 22
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP10_OUT
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP10_OUT_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP10_OUT_BITS, 0x00200000
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP10_OUT_MSB, 21
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP10_OUT_LSB, 21
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP10_IN
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP10_IN_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP10_IN_BITS, 0x00100000
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP10_IN_MSB, 20
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP10_IN_LSB, 20
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP9_OUT
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP9_OUT_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP9_OUT_BITS, 0x00080000
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP9_OUT_MSB, 19
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP9_OUT_LSB, 19
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP9_IN
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP9_IN_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP9_IN_BITS, 0x00040000
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP9_IN_MSB, 18
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP9_IN_LSB, 18
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP8_OUT
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP8_OUT_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP8_OUT_BITS, 0x00020000
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP8_OUT_MSB, 17
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP8_OUT_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP8_IN
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP8_IN_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP8_IN_BITS, 0x00010000
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP8_IN_MSB, 16
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP8_IN_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP7_OUT
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP7_OUT_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP7_OUT_BITS, 0x00008000
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP7_OUT_MSB, 15
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP7_OUT_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP7_IN
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP7_IN_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP7_IN_BITS, 0x00004000
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP7_IN_MSB, 14
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP7_IN_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP6_OUT
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP6_OUT_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP6_OUT_BITS, 0x00002000
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP6_OUT_MSB, 13
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP6_OUT_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP6_IN
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP6_IN_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP6_IN_BITS, 0x00001000
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP6_IN_MSB, 12
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP6_IN_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP5_OUT
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP5_OUT_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP5_OUT_BITS, 0x00000800
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP5_OUT_MSB, 11
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP5_OUT_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP5_IN
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP5_IN_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP5_IN_BITS, 0x00000400
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP5_IN_MSB, 10
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP5_IN_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP4_OUT
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP4_OUT_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP4_OUT_BITS, 0x00000200
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP4_OUT_MSB, 9
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP4_OUT_LSB, 9
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP4_IN
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP4_IN_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP4_IN_BITS, 0x00000100
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP4_IN_MSB, 8
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP4_IN_LSB, 8
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP3_OUT
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP3_OUT_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP3_OUT_BITS, 0x00000080
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP3_OUT_MSB, 7
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP3_OUT_LSB, 7
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP3_IN
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP3_IN_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP3_IN_BITS, 0x00000040
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP3_IN_MSB, 6
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP3_IN_LSB, 6
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP2_OUT
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP2_OUT_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP2_OUT_BITS, 0x00000020
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP2_OUT_MSB, 5
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP2_OUT_LSB, 5
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP2_IN
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP2_IN_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP2_IN_BITS, 0x00000010
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP2_IN_MSB, 4
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP2_IN_LSB, 4
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP1_OUT
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP1_OUT_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP1_OUT_BITS, 0x00000008
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP1_OUT_MSB, 3
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP1_OUT_LSB, 3
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP1_IN
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP1_IN_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP1_IN_BITS, 0x00000004
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP1_IN_MSB, 2
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP1_IN_LSB, 2
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP0_OUT
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP0_OUT_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP0_OUT_BITS, 0x00000002
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP0_OUT_MSB, 1
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP0_OUT_LSB, 1
# -----------------------------------------------------------------------------
# Field       : USB_BUFF_CPU_SHOULD_HANDLE_EP0_IN
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP0_IN_RESET, 0x0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP0_IN_BITS, 0x00000001
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP0_IN_MSB, 0
.equ	USB_BUFF_CPU_SHOULD_HANDLE_EP0_IN_LSB, 0
# =============================================================================
# Register    : USB_EP_ABORT
# Description : Device only: Can be set to ignore the buffer control register
#               for this endpoint in case you would like to revoke a buffer. A
#               NAK will be sent for every access to the endpoint until this
#               bit is cleared. A corresponding bit in `EP_ABORT_DONE` is set
#               when it is safe to modify the buffer control register.
.equ	USB_EP_ABORT_OFFSET, 0x00000060
.equ	USB_EP_ABORT_BITS, 0xffffffff
.equ	USB_EP_ABORT_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP15_OUT
.equ	USB_EP_ABORT_EP15_OUT_RESET, 0x0
.equ	USB_EP_ABORT_EP15_OUT_BITS, 0x80000000
.equ	USB_EP_ABORT_EP15_OUT_MSB, 31
.equ	USB_EP_ABORT_EP15_OUT_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP15_IN
.equ	USB_EP_ABORT_EP15_IN_RESET, 0x0
.equ	USB_EP_ABORT_EP15_IN_BITS, 0x40000000
.equ	USB_EP_ABORT_EP15_IN_MSB, 30
.equ	USB_EP_ABORT_EP15_IN_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP14_OUT
.equ	USB_EP_ABORT_EP14_OUT_RESET, 0x0
.equ	USB_EP_ABORT_EP14_OUT_BITS, 0x20000000
.equ	USB_EP_ABORT_EP14_OUT_MSB, 29
.equ	USB_EP_ABORT_EP14_OUT_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP14_IN
.equ	USB_EP_ABORT_EP14_IN_RESET, 0x0
.equ	USB_EP_ABORT_EP14_IN_BITS, 0x10000000
.equ	USB_EP_ABORT_EP14_IN_MSB, 28
.equ	USB_EP_ABORT_EP14_IN_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP13_OUT
.equ	USB_EP_ABORT_EP13_OUT_RESET, 0x0
.equ	USB_EP_ABORT_EP13_OUT_BITS, 0x08000000
.equ	USB_EP_ABORT_EP13_OUT_MSB, 27
.equ	USB_EP_ABORT_EP13_OUT_LSB, 27
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP13_IN
.equ	USB_EP_ABORT_EP13_IN_RESET, 0x0
.equ	USB_EP_ABORT_EP13_IN_BITS, 0x04000000
.equ	USB_EP_ABORT_EP13_IN_MSB, 26
.equ	USB_EP_ABORT_EP13_IN_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP12_OUT
.equ	USB_EP_ABORT_EP12_OUT_RESET, 0x0
.equ	USB_EP_ABORT_EP12_OUT_BITS, 0x02000000
.equ	USB_EP_ABORT_EP12_OUT_MSB, 25
.equ	USB_EP_ABORT_EP12_OUT_LSB, 25
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP12_IN
.equ	USB_EP_ABORT_EP12_IN_RESET, 0x0
.equ	USB_EP_ABORT_EP12_IN_BITS, 0x01000000
.equ	USB_EP_ABORT_EP12_IN_MSB, 24
.equ	USB_EP_ABORT_EP12_IN_LSB, 24
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP11_OUT
.equ	USB_EP_ABORT_EP11_OUT_RESET, 0x0
.equ	USB_EP_ABORT_EP11_OUT_BITS, 0x00800000
.equ	USB_EP_ABORT_EP11_OUT_MSB, 23
.equ	USB_EP_ABORT_EP11_OUT_LSB, 23
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP11_IN
.equ	USB_EP_ABORT_EP11_IN_RESET, 0x0
.equ	USB_EP_ABORT_EP11_IN_BITS, 0x00400000
.equ	USB_EP_ABORT_EP11_IN_MSB, 22
.equ	USB_EP_ABORT_EP11_IN_LSB, 22
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP10_OUT
.equ	USB_EP_ABORT_EP10_OUT_RESET, 0x0
.equ	USB_EP_ABORT_EP10_OUT_BITS, 0x00200000
.equ	USB_EP_ABORT_EP10_OUT_MSB, 21
.equ	USB_EP_ABORT_EP10_OUT_LSB, 21
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP10_IN
.equ	USB_EP_ABORT_EP10_IN_RESET, 0x0
.equ	USB_EP_ABORT_EP10_IN_BITS, 0x00100000
.equ	USB_EP_ABORT_EP10_IN_MSB, 20
.equ	USB_EP_ABORT_EP10_IN_LSB, 20
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP9_OUT
.equ	USB_EP_ABORT_EP9_OUT_RESET, 0x0
.equ	USB_EP_ABORT_EP9_OUT_BITS, 0x00080000
.equ	USB_EP_ABORT_EP9_OUT_MSB, 19
.equ	USB_EP_ABORT_EP9_OUT_LSB, 19
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP9_IN
.equ	USB_EP_ABORT_EP9_IN_RESET, 0x0
.equ	USB_EP_ABORT_EP9_IN_BITS, 0x00040000
.equ	USB_EP_ABORT_EP9_IN_MSB, 18
.equ	USB_EP_ABORT_EP9_IN_LSB, 18
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP8_OUT
.equ	USB_EP_ABORT_EP8_OUT_RESET, 0x0
.equ	USB_EP_ABORT_EP8_OUT_BITS, 0x00020000
.equ	USB_EP_ABORT_EP8_OUT_MSB, 17
.equ	USB_EP_ABORT_EP8_OUT_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP8_IN
.equ	USB_EP_ABORT_EP8_IN_RESET, 0x0
.equ	USB_EP_ABORT_EP8_IN_BITS, 0x00010000
.equ	USB_EP_ABORT_EP8_IN_MSB, 16
.equ	USB_EP_ABORT_EP8_IN_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP7_OUT
.equ	USB_EP_ABORT_EP7_OUT_RESET, 0x0
.equ	USB_EP_ABORT_EP7_OUT_BITS, 0x00008000
.equ	USB_EP_ABORT_EP7_OUT_MSB, 15
.equ	USB_EP_ABORT_EP7_OUT_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP7_IN
.equ	USB_EP_ABORT_EP7_IN_RESET, 0x0
.equ	USB_EP_ABORT_EP7_IN_BITS, 0x00004000
.equ	USB_EP_ABORT_EP7_IN_MSB, 14
.equ	USB_EP_ABORT_EP7_IN_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP6_OUT
.equ	USB_EP_ABORT_EP6_OUT_RESET, 0x0
.equ	USB_EP_ABORT_EP6_OUT_BITS, 0x00002000
.equ	USB_EP_ABORT_EP6_OUT_MSB, 13
.equ	USB_EP_ABORT_EP6_OUT_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP6_IN
.equ	USB_EP_ABORT_EP6_IN_RESET, 0x0
.equ	USB_EP_ABORT_EP6_IN_BITS, 0x00001000
.equ	USB_EP_ABORT_EP6_IN_MSB, 12
.equ	USB_EP_ABORT_EP6_IN_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP5_OUT
.equ	USB_EP_ABORT_EP5_OUT_RESET, 0x0
.equ	USB_EP_ABORT_EP5_OUT_BITS, 0x00000800
.equ	USB_EP_ABORT_EP5_OUT_MSB, 11
.equ	USB_EP_ABORT_EP5_OUT_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP5_IN
.equ	USB_EP_ABORT_EP5_IN_RESET, 0x0
.equ	USB_EP_ABORT_EP5_IN_BITS, 0x00000400
.equ	USB_EP_ABORT_EP5_IN_MSB, 10
.equ	USB_EP_ABORT_EP5_IN_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP4_OUT
.equ	USB_EP_ABORT_EP4_OUT_RESET, 0x0
.equ	USB_EP_ABORT_EP4_OUT_BITS, 0x00000200
.equ	USB_EP_ABORT_EP4_OUT_MSB, 9
.equ	USB_EP_ABORT_EP4_OUT_LSB, 9
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP4_IN
.equ	USB_EP_ABORT_EP4_IN_RESET, 0x0
.equ	USB_EP_ABORT_EP4_IN_BITS, 0x00000100
.equ	USB_EP_ABORT_EP4_IN_MSB, 8
.equ	USB_EP_ABORT_EP4_IN_LSB, 8
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP3_OUT
.equ	USB_EP_ABORT_EP3_OUT_RESET, 0x0
.equ	USB_EP_ABORT_EP3_OUT_BITS, 0x00000080
.equ	USB_EP_ABORT_EP3_OUT_MSB, 7
.equ	USB_EP_ABORT_EP3_OUT_LSB, 7
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP3_IN
.equ	USB_EP_ABORT_EP3_IN_RESET, 0x0
.equ	USB_EP_ABORT_EP3_IN_BITS, 0x00000040
.equ	USB_EP_ABORT_EP3_IN_MSB, 6
.equ	USB_EP_ABORT_EP3_IN_LSB, 6
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP2_OUT
.equ	USB_EP_ABORT_EP2_OUT_RESET, 0x0
.equ	USB_EP_ABORT_EP2_OUT_BITS, 0x00000020
.equ	USB_EP_ABORT_EP2_OUT_MSB, 5
.equ	USB_EP_ABORT_EP2_OUT_LSB, 5
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP2_IN
.equ	USB_EP_ABORT_EP2_IN_RESET, 0x0
.equ	USB_EP_ABORT_EP2_IN_BITS, 0x00000010
.equ	USB_EP_ABORT_EP2_IN_MSB, 4
.equ	USB_EP_ABORT_EP2_IN_LSB, 4
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP1_OUT
.equ	USB_EP_ABORT_EP1_OUT_RESET, 0x0
.equ	USB_EP_ABORT_EP1_OUT_BITS, 0x00000008
.equ	USB_EP_ABORT_EP1_OUT_MSB, 3
.equ	USB_EP_ABORT_EP1_OUT_LSB, 3
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP1_IN
.equ	USB_EP_ABORT_EP1_IN_RESET, 0x0
.equ	USB_EP_ABORT_EP1_IN_BITS, 0x00000004
.equ	USB_EP_ABORT_EP1_IN_MSB, 2
.equ	USB_EP_ABORT_EP1_IN_LSB, 2
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP0_OUT
.equ	USB_EP_ABORT_EP0_OUT_RESET, 0x0
.equ	USB_EP_ABORT_EP0_OUT_BITS, 0x00000002
.equ	USB_EP_ABORT_EP0_OUT_MSB, 1
.equ	USB_EP_ABORT_EP0_OUT_LSB, 1
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_EP0_IN
.equ	USB_EP_ABORT_EP0_IN_RESET, 0x0
.equ	USB_EP_ABORT_EP0_IN_BITS, 0x00000001
.equ	USB_EP_ABORT_EP0_IN_MSB, 0
.equ	USB_EP_ABORT_EP0_IN_LSB, 0
# =============================================================================
# Register    : USB_EP_ABORT_DONE
# Description : Device only: Used in conjunction with `EP_ABORT`. Set once an
#               endpoint is idle so the programmer knows it is safe to modify
#               the buffer control register.
.equ	USB_EP_ABORT_DONE_OFFSET, 0x00000064
.equ	USB_EP_ABORT_DONE_BITS, 0xffffffff
.equ	USB_EP_ABORT_DONE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP15_OUT
.equ	USB_EP_ABORT_DONE_EP15_OUT_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP15_OUT_BITS, 0x80000000
.equ	USB_EP_ABORT_DONE_EP15_OUT_MSB, 31
.equ	USB_EP_ABORT_DONE_EP15_OUT_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP15_IN
.equ	USB_EP_ABORT_DONE_EP15_IN_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP15_IN_BITS, 0x40000000
.equ	USB_EP_ABORT_DONE_EP15_IN_MSB, 30
.equ	USB_EP_ABORT_DONE_EP15_IN_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP14_OUT
.equ	USB_EP_ABORT_DONE_EP14_OUT_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP14_OUT_BITS, 0x20000000
.equ	USB_EP_ABORT_DONE_EP14_OUT_MSB, 29
.equ	USB_EP_ABORT_DONE_EP14_OUT_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP14_IN
.equ	USB_EP_ABORT_DONE_EP14_IN_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP14_IN_BITS, 0x10000000
.equ	USB_EP_ABORT_DONE_EP14_IN_MSB, 28
.equ	USB_EP_ABORT_DONE_EP14_IN_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP13_OUT
.equ	USB_EP_ABORT_DONE_EP13_OUT_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP13_OUT_BITS, 0x08000000
.equ	USB_EP_ABORT_DONE_EP13_OUT_MSB, 27
.equ	USB_EP_ABORT_DONE_EP13_OUT_LSB, 27
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP13_IN
.equ	USB_EP_ABORT_DONE_EP13_IN_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP13_IN_BITS, 0x04000000
.equ	USB_EP_ABORT_DONE_EP13_IN_MSB, 26
.equ	USB_EP_ABORT_DONE_EP13_IN_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP12_OUT
.equ	USB_EP_ABORT_DONE_EP12_OUT_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP12_OUT_BITS, 0x02000000
.equ	USB_EP_ABORT_DONE_EP12_OUT_MSB, 25
.equ	USB_EP_ABORT_DONE_EP12_OUT_LSB, 25
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP12_IN
.equ	USB_EP_ABORT_DONE_EP12_IN_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP12_IN_BITS, 0x01000000
.equ	USB_EP_ABORT_DONE_EP12_IN_MSB, 24
.equ	USB_EP_ABORT_DONE_EP12_IN_LSB, 24
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP11_OUT
.equ	USB_EP_ABORT_DONE_EP11_OUT_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP11_OUT_BITS, 0x00800000
.equ	USB_EP_ABORT_DONE_EP11_OUT_MSB, 23
.equ	USB_EP_ABORT_DONE_EP11_OUT_LSB, 23
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP11_IN
.equ	USB_EP_ABORT_DONE_EP11_IN_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP11_IN_BITS, 0x00400000
.equ	USB_EP_ABORT_DONE_EP11_IN_MSB, 22
.equ	USB_EP_ABORT_DONE_EP11_IN_LSB, 22
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP10_OUT
.equ	USB_EP_ABORT_DONE_EP10_OUT_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP10_OUT_BITS, 0x00200000
.equ	USB_EP_ABORT_DONE_EP10_OUT_MSB, 21
.equ	USB_EP_ABORT_DONE_EP10_OUT_LSB, 21
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP10_IN
.equ	USB_EP_ABORT_DONE_EP10_IN_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP10_IN_BITS, 0x00100000
.equ	USB_EP_ABORT_DONE_EP10_IN_MSB, 20
.equ	USB_EP_ABORT_DONE_EP10_IN_LSB, 20
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP9_OUT
.equ	USB_EP_ABORT_DONE_EP9_OUT_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP9_OUT_BITS, 0x00080000
.equ	USB_EP_ABORT_DONE_EP9_OUT_MSB, 19
.equ	USB_EP_ABORT_DONE_EP9_OUT_LSB, 19
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP9_IN
.equ	USB_EP_ABORT_DONE_EP9_IN_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP9_IN_BITS, 0x00040000
.equ	USB_EP_ABORT_DONE_EP9_IN_MSB, 18
.equ	USB_EP_ABORT_DONE_EP9_IN_LSB, 18
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP8_OUT
.equ	USB_EP_ABORT_DONE_EP8_OUT_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP8_OUT_BITS, 0x00020000
.equ	USB_EP_ABORT_DONE_EP8_OUT_MSB, 17
.equ	USB_EP_ABORT_DONE_EP8_OUT_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP8_IN
.equ	USB_EP_ABORT_DONE_EP8_IN_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP8_IN_BITS, 0x00010000
.equ	USB_EP_ABORT_DONE_EP8_IN_MSB, 16
.equ	USB_EP_ABORT_DONE_EP8_IN_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP7_OUT
.equ	USB_EP_ABORT_DONE_EP7_OUT_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP7_OUT_BITS, 0x00008000
.equ	USB_EP_ABORT_DONE_EP7_OUT_MSB, 15
.equ	USB_EP_ABORT_DONE_EP7_OUT_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP7_IN
.equ	USB_EP_ABORT_DONE_EP7_IN_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP7_IN_BITS, 0x00004000
.equ	USB_EP_ABORT_DONE_EP7_IN_MSB, 14
.equ	USB_EP_ABORT_DONE_EP7_IN_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP6_OUT
.equ	USB_EP_ABORT_DONE_EP6_OUT_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP6_OUT_BITS, 0x00002000
.equ	USB_EP_ABORT_DONE_EP6_OUT_MSB, 13
.equ	USB_EP_ABORT_DONE_EP6_OUT_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP6_IN
.equ	USB_EP_ABORT_DONE_EP6_IN_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP6_IN_BITS, 0x00001000
.equ	USB_EP_ABORT_DONE_EP6_IN_MSB, 12
.equ	USB_EP_ABORT_DONE_EP6_IN_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP5_OUT
.equ	USB_EP_ABORT_DONE_EP5_OUT_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP5_OUT_BITS, 0x00000800
.equ	USB_EP_ABORT_DONE_EP5_OUT_MSB, 11
.equ	USB_EP_ABORT_DONE_EP5_OUT_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP5_IN
.equ	USB_EP_ABORT_DONE_EP5_IN_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP5_IN_BITS, 0x00000400
.equ	USB_EP_ABORT_DONE_EP5_IN_MSB, 10
.equ	USB_EP_ABORT_DONE_EP5_IN_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP4_OUT
.equ	USB_EP_ABORT_DONE_EP4_OUT_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP4_OUT_BITS, 0x00000200
.equ	USB_EP_ABORT_DONE_EP4_OUT_MSB, 9
.equ	USB_EP_ABORT_DONE_EP4_OUT_LSB, 9
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP4_IN
.equ	USB_EP_ABORT_DONE_EP4_IN_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP4_IN_BITS, 0x00000100
.equ	USB_EP_ABORT_DONE_EP4_IN_MSB, 8
.equ	USB_EP_ABORT_DONE_EP4_IN_LSB, 8
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP3_OUT
.equ	USB_EP_ABORT_DONE_EP3_OUT_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP3_OUT_BITS, 0x00000080
.equ	USB_EP_ABORT_DONE_EP3_OUT_MSB, 7
.equ	USB_EP_ABORT_DONE_EP3_OUT_LSB, 7
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP3_IN
.equ	USB_EP_ABORT_DONE_EP3_IN_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP3_IN_BITS, 0x00000040
.equ	USB_EP_ABORT_DONE_EP3_IN_MSB, 6
.equ	USB_EP_ABORT_DONE_EP3_IN_LSB, 6
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP2_OUT
.equ	USB_EP_ABORT_DONE_EP2_OUT_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP2_OUT_BITS, 0x00000020
.equ	USB_EP_ABORT_DONE_EP2_OUT_MSB, 5
.equ	USB_EP_ABORT_DONE_EP2_OUT_LSB, 5
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP2_IN
.equ	USB_EP_ABORT_DONE_EP2_IN_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP2_IN_BITS, 0x00000010
.equ	USB_EP_ABORT_DONE_EP2_IN_MSB, 4
.equ	USB_EP_ABORT_DONE_EP2_IN_LSB, 4
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP1_OUT
.equ	USB_EP_ABORT_DONE_EP1_OUT_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP1_OUT_BITS, 0x00000008
.equ	USB_EP_ABORT_DONE_EP1_OUT_MSB, 3
.equ	USB_EP_ABORT_DONE_EP1_OUT_LSB, 3
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP1_IN
.equ	USB_EP_ABORT_DONE_EP1_IN_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP1_IN_BITS, 0x00000004
.equ	USB_EP_ABORT_DONE_EP1_IN_MSB, 2
.equ	USB_EP_ABORT_DONE_EP1_IN_LSB, 2
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP0_OUT
.equ	USB_EP_ABORT_DONE_EP0_OUT_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP0_OUT_BITS, 0x00000002
.equ	USB_EP_ABORT_DONE_EP0_OUT_MSB, 1
.equ	USB_EP_ABORT_DONE_EP0_OUT_LSB, 1
# -----------------------------------------------------------------------------
# Field       : USB_EP_ABORT_DONE_EP0_IN
.equ	USB_EP_ABORT_DONE_EP0_IN_RESET, 0x0
.equ	USB_EP_ABORT_DONE_EP0_IN_BITS, 0x00000001
.equ	USB_EP_ABORT_DONE_EP0_IN_MSB, 0
.equ	USB_EP_ABORT_DONE_EP0_IN_LSB, 0
# =============================================================================
# Register    : USB_EP_STALL_ARM
# Description : Device: this bit must be set in conjunction with the `STALL`
#               bit in the buffer control register to send a STALL on EP0. The
#               device controller clears these bits when a SETUP packet is
#               received because the USB spec requires that a STALL condition
#               is cleared when a SETUP packet is received.
.equ	USB_EP_STALL_ARM_OFFSET, 0x00000068
.equ	USB_EP_STALL_ARM_BITS, 0x00000003
.equ	USB_EP_STALL_ARM_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_EP_STALL_ARM_EP0_OUT
.equ	USB_EP_STALL_ARM_EP0_OUT_RESET, 0x0
.equ	USB_EP_STALL_ARM_EP0_OUT_BITS, 0x00000002
.equ	USB_EP_STALL_ARM_EP0_OUT_MSB, 1
.equ	USB_EP_STALL_ARM_EP0_OUT_LSB, 1
# -----------------------------------------------------------------------------
# Field       : USB_EP_STALL_ARM_EP0_IN
.equ	USB_EP_STALL_ARM_EP0_IN_RESET, 0x0
.equ	USB_EP_STALL_ARM_EP0_IN_BITS, 0x00000001
.equ	USB_EP_STALL_ARM_EP0_IN_MSB, 0
.equ	USB_EP_STALL_ARM_EP0_IN_LSB, 0
# =============================================================================
# Register    : USB_NAK_POLL
# Description : Used by the host controller. Sets the wait time in microseconds
#               before trying again if the device replies with a NAK.
.equ	USB_NAK_POLL_OFFSET, 0x0000006c
.equ	USB_NAK_POLL_BITS, 0xffffffff
.equ	USB_NAK_POLL_RESET, 0x00100010
# -----------------------------------------------------------------------------
# Field       : USB_NAK_POLL_RETRY_COUNT_HI
# Description : Bits 9:6 of nak_retry count
.equ	USB_NAK_POLL_RETRY_COUNT_HI_RESET, 0x0
.equ	USB_NAK_POLL_RETRY_COUNT_HI_BITS, 0xf0000000
.equ	USB_NAK_POLL_RETRY_COUNT_HI_MSB, 31
.equ	USB_NAK_POLL_RETRY_COUNT_HI_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_NAK_POLL_EPX_STOPPED_ON_NAK
# Description : EPX polling has stopped because a nak was received
.equ	USB_NAK_POLL_EPX_STOPPED_ON_NAK_RESET, 0x0
.equ	USB_NAK_POLL_EPX_STOPPED_ON_NAK_BITS, 0x08000000
.equ	USB_NAK_POLL_EPX_STOPPED_ON_NAK_MSB, 27
.equ	USB_NAK_POLL_EPX_STOPPED_ON_NAK_LSB, 27
# -----------------------------------------------------------------------------
# Field       : USB_NAK_POLL_STOP_EPX_ON_NAK
# Description : Stop polling epx when a nak is received
.equ	USB_NAK_POLL_STOP_EPX_ON_NAK_RESET, 0x0
.equ	USB_NAK_POLL_STOP_EPX_ON_NAK_BITS, 0x04000000
.equ	USB_NAK_POLL_STOP_EPX_ON_NAK_MSB, 26
.equ	USB_NAK_POLL_STOP_EPX_ON_NAK_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_NAK_POLL_DELAY_FS
# Description : NAK polling interval for a full speed device
.equ	USB_NAK_POLL_DELAY_FS_RESET, 0x010
.equ	USB_NAK_POLL_DELAY_FS_BITS, 0x03ff0000
.equ	USB_NAK_POLL_DELAY_FS_MSB, 25
.equ	USB_NAK_POLL_DELAY_FS_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_NAK_POLL_RETRY_COUNT_LO
# Description : Bits 5:0 of nak_retry_count
.equ	USB_NAK_POLL_RETRY_COUNT_LO_RESET, 0x00
.equ	USB_NAK_POLL_RETRY_COUNT_LO_BITS, 0x0000fc00
.equ	USB_NAK_POLL_RETRY_COUNT_LO_MSB, 15
.equ	USB_NAK_POLL_RETRY_COUNT_LO_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_NAK_POLL_DELAY_LS
# Description : NAK polling interval for a low speed device
.equ	USB_NAK_POLL_DELAY_LS_RESET, 0x010
.equ	USB_NAK_POLL_DELAY_LS_BITS, 0x000003ff
.equ	USB_NAK_POLL_DELAY_LS_MSB, 9
.equ	USB_NAK_POLL_DELAY_LS_LSB, 0
# =============================================================================
# Register    : USB_EP_STATUS_STALL_NAK
# Description : Device: bits are set when the `IRQ_ON_NAK` or `IRQ_ON_STALL`
#               bits are set. For EP0 this comes from `SIE_CTRL`. For all other
#               endpoints it comes from the endpoint control register.
.equ	USB_EP_STATUS_STALL_NAK_OFFSET, 0x00000070
.equ	USB_EP_STATUS_STALL_NAK_BITS, 0xffffffff
.equ	USB_EP_STATUS_STALL_NAK_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP15_OUT
.equ	USB_EP_STATUS_STALL_NAK_EP15_OUT_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP15_OUT_BITS, 0x80000000
.equ	USB_EP_STATUS_STALL_NAK_EP15_OUT_MSB, 31
.equ	USB_EP_STATUS_STALL_NAK_EP15_OUT_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP15_IN
.equ	USB_EP_STATUS_STALL_NAK_EP15_IN_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP15_IN_BITS, 0x40000000
.equ	USB_EP_STATUS_STALL_NAK_EP15_IN_MSB, 30
.equ	USB_EP_STATUS_STALL_NAK_EP15_IN_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP14_OUT
.equ	USB_EP_STATUS_STALL_NAK_EP14_OUT_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP14_OUT_BITS, 0x20000000
.equ	USB_EP_STATUS_STALL_NAK_EP14_OUT_MSB, 29
.equ	USB_EP_STATUS_STALL_NAK_EP14_OUT_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP14_IN
.equ	USB_EP_STATUS_STALL_NAK_EP14_IN_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP14_IN_BITS, 0x10000000
.equ	USB_EP_STATUS_STALL_NAK_EP14_IN_MSB, 28
.equ	USB_EP_STATUS_STALL_NAK_EP14_IN_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP13_OUT
.equ	USB_EP_STATUS_STALL_NAK_EP13_OUT_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP13_OUT_BITS, 0x08000000
.equ	USB_EP_STATUS_STALL_NAK_EP13_OUT_MSB, 27
.equ	USB_EP_STATUS_STALL_NAK_EP13_OUT_LSB, 27
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP13_IN
.equ	USB_EP_STATUS_STALL_NAK_EP13_IN_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP13_IN_BITS, 0x04000000
.equ	USB_EP_STATUS_STALL_NAK_EP13_IN_MSB, 26
.equ	USB_EP_STATUS_STALL_NAK_EP13_IN_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP12_OUT
.equ	USB_EP_STATUS_STALL_NAK_EP12_OUT_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP12_OUT_BITS, 0x02000000
.equ	USB_EP_STATUS_STALL_NAK_EP12_OUT_MSB, 25
.equ	USB_EP_STATUS_STALL_NAK_EP12_OUT_LSB, 25
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP12_IN
.equ	USB_EP_STATUS_STALL_NAK_EP12_IN_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP12_IN_BITS, 0x01000000
.equ	USB_EP_STATUS_STALL_NAK_EP12_IN_MSB, 24
.equ	USB_EP_STATUS_STALL_NAK_EP12_IN_LSB, 24
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP11_OUT
.equ	USB_EP_STATUS_STALL_NAK_EP11_OUT_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP11_OUT_BITS, 0x00800000
.equ	USB_EP_STATUS_STALL_NAK_EP11_OUT_MSB, 23
.equ	USB_EP_STATUS_STALL_NAK_EP11_OUT_LSB, 23
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP11_IN
.equ	USB_EP_STATUS_STALL_NAK_EP11_IN_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP11_IN_BITS, 0x00400000
.equ	USB_EP_STATUS_STALL_NAK_EP11_IN_MSB, 22
.equ	USB_EP_STATUS_STALL_NAK_EP11_IN_LSB, 22
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP10_OUT
.equ	USB_EP_STATUS_STALL_NAK_EP10_OUT_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP10_OUT_BITS, 0x00200000
.equ	USB_EP_STATUS_STALL_NAK_EP10_OUT_MSB, 21
.equ	USB_EP_STATUS_STALL_NAK_EP10_OUT_LSB, 21
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP10_IN
.equ	USB_EP_STATUS_STALL_NAK_EP10_IN_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP10_IN_BITS, 0x00100000
.equ	USB_EP_STATUS_STALL_NAK_EP10_IN_MSB, 20
.equ	USB_EP_STATUS_STALL_NAK_EP10_IN_LSB, 20
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP9_OUT
.equ	USB_EP_STATUS_STALL_NAK_EP9_OUT_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP9_OUT_BITS, 0x00080000
.equ	USB_EP_STATUS_STALL_NAK_EP9_OUT_MSB, 19
.equ	USB_EP_STATUS_STALL_NAK_EP9_OUT_LSB, 19
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP9_IN
.equ	USB_EP_STATUS_STALL_NAK_EP9_IN_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP9_IN_BITS, 0x00040000
.equ	USB_EP_STATUS_STALL_NAK_EP9_IN_MSB, 18
.equ	USB_EP_STATUS_STALL_NAK_EP9_IN_LSB, 18
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP8_OUT
.equ	USB_EP_STATUS_STALL_NAK_EP8_OUT_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP8_OUT_BITS, 0x00020000
.equ	USB_EP_STATUS_STALL_NAK_EP8_OUT_MSB, 17
.equ	USB_EP_STATUS_STALL_NAK_EP8_OUT_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP8_IN
.equ	USB_EP_STATUS_STALL_NAK_EP8_IN_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP8_IN_BITS, 0x00010000
.equ	USB_EP_STATUS_STALL_NAK_EP8_IN_MSB, 16
.equ	USB_EP_STATUS_STALL_NAK_EP8_IN_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP7_OUT
.equ	USB_EP_STATUS_STALL_NAK_EP7_OUT_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP7_OUT_BITS, 0x00008000
.equ	USB_EP_STATUS_STALL_NAK_EP7_OUT_MSB, 15
.equ	USB_EP_STATUS_STALL_NAK_EP7_OUT_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP7_IN
.equ	USB_EP_STATUS_STALL_NAK_EP7_IN_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP7_IN_BITS, 0x00004000
.equ	USB_EP_STATUS_STALL_NAK_EP7_IN_MSB, 14
.equ	USB_EP_STATUS_STALL_NAK_EP7_IN_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP6_OUT
.equ	USB_EP_STATUS_STALL_NAK_EP6_OUT_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP6_OUT_BITS, 0x00002000
.equ	USB_EP_STATUS_STALL_NAK_EP6_OUT_MSB, 13
.equ	USB_EP_STATUS_STALL_NAK_EP6_OUT_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP6_IN
.equ	USB_EP_STATUS_STALL_NAK_EP6_IN_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP6_IN_BITS, 0x00001000
.equ	USB_EP_STATUS_STALL_NAK_EP6_IN_MSB, 12
.equ	USB_EP_STATUS_STALL_NAK_EP6_IN_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP5_OUT
.equ	USB_EP_STATUS_STALL_NAK_EP5_OUT_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP5_OUT_BITS, 0x00000800
.equ	USB_EP_STATUS_STALL_NAK_EP5_OUT_MSB, 11
.equ	USB_EP_STATUS_STALL_NAK_EP5_OUT_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP5_IN
.equ	USB_EP_STATUS_STALL_NAK_EP5_IN_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP5_IN_BITS, 0x00000400
.equ	USB_EP_STATUS_STALL_NAK_EP5_IN_MSB, 10
.equ	USB_EP_STATUS_STALL_NAK_EP5_IN_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP4_OUT
.equ	USB_EP_STATUS_STALL_NAK_EP4_OUT_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP4_OUT_BITS, 0x00000200
.equ	USB_EP_STATUS_STALL_NAK_EP4_OUT_MSB, 9
.equ	USB_EP_STATUS_STALL_NAK_EP4_OUT_LSB, 9
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP4_IN
.equ	USB_EP_STATUS_STALL_NAK_EP4_IN_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP4_IN_BITS, 0x00000100
.equ	USB_EP_STATUS_STALL_NAK_EP4_IN_MSB, 8
.equ	USB_EP_STATUS_STALL_NAK_EP4_IN_LSB, 8
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP3_OUT
.equ	USB_EP_STATUS_STALL_NAK_EP3_OUT_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP3_OUT_BITS, 0x00000080
.equ	USB_EP_STATUS_STALL_NAK_EP3_OUT_MSB, 7
.equ	USB_EP_STATUS_STALL_NAK_EP3_OUT_LSB, 7
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP3_IN
.equ	USB_EP_STATUS_STALL_NAK_EP3_IN_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP3_IN_BITS, 0x00000040
.equ	USB_EP_STATUS_STALL_NAK_EP3_IN_MSB, 6
.equ	USB_EP_STATUS_STALL_NAK_EP3_IN_LSB, 6
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP2_OUT
.equ	USB_EP_STATUS_STALL_NAK_EP2_OUT_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP2_OUT_BITS, 0x00000020
.equ	USB_EP_STATUS_STALL_NAK_EP2_OUT_MSB, 5
.equ	USB_EP_STATUS_STALL_NAK_EP2_OUT_LSB, 5
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP2_IN
.equ	USB_EP_STATUS_STALL_NAK_EP2_IN_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP2_IN_BITS, 0x00000010
.equ	USB_EP_STATUS_STALL_NAK_EP2_IN_MSB, 4
.equ	USB_EP_STATUS_STALL_NAK_EP2_IN_LSB, 4
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP1_OUT
.equ	USB_EP_STATUS_STALL_NAK_EP1_OUT_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP1_OUT_BITS, 0x00000008
.equ	USB_EP_STATUS_STALL_NAK_EP1_OUT_MSB, 3
.equ	USB_EP_STATUS_STALL_NAK_EP1_OUT_LSB, 3
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP1_IN
.equ	USB_EP_STATUS_STALL_NAK_EP1_IN_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP1_IN_BITS, 0x00000004
.equ	USB_EP_STATUS_STALL_NAK_EP1_IN_MSB, 2
.equ	USB_EP_STATUS_STALL_NAK_EP1_IN_LSB, 2
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP0_OUT
.equ	USB_EP_STATUS_STALL_NAK_EP0_OUT_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP0_OUT_BITS, 0x00000002
.equ	USB_EP_STATUS_STALL_NAK_EP0_OUT_MSB, 1
.equ	USB_EP_STATUS_STALL_NAK_EP0_OUT_LSB, 1
# -----------------------------------------------------------------------------
# Field       : USB_EP_STATUS_STALL_NAK_EP0_IN
.equ	USB_EP_STATUS_STALL_NAK_EP0_IN_RESET, 0x0
.equ	USB_EP_STATUS_STALL_NAK_EP0_IN_BITS, 0x00000001
.equ	USB_EP_STATUS_STALL_NAK_EP0_IN_MSB, 0
.equ	USB_EP_STATUS_STALL_NAK_EP0_IN_LSB, 0
# =============================================================================
# Register    : USB_USB_MUXING
# Description : Where to connect the USB controller. Should be to_phy by
#               default.
.equ	USB_USB_MUXING_OFFSET, 0x00000074
.equ	USB_USB_MUXING_BITS, 0x8000001f
.equ	USB_USB_MUXING_RESET, 0x00000001
# -----------------------------------------------------------------------------
# Field       : USB_USB_MUXING_SWAP_DPDM
# Description : Swap the USB PHY DP and DM pins and all related controls and
#               flip receive differential data. Can be used to switch USB DP/DP
#               on the PCB.
#               This is done at a low level so overrides all other controls.
.equ	USB_USB_MUXING_SWAP_DPDM_RESET, 0x0
.equ	USB_USB_MUXING_SWAP_DPDM_BITS, 0x80000000
.equ	USB_USB_MUXING_SWAP_DPDM_MSB, 31
.equ	USB_USB_MUXING_SWAP_DPDM_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_USB_MUXING_USBPHY_AS_GPIO
# Description : Use the usb DP and DM pins as GPIO pins instead of connecting
#               them to the USB controller.
.equ	USB_USB_MUXING_USBPHY_AS_GPIO_RESET, 0x0
.equ	USB_USB_MUXING_USBPHY_AS_GPIO_BITS, 0x00000010
.equ	USB_USB_MUXING_USBPHY_AS_GPIO_MSB, 4
.equ	USB_USB_MUXING_USBPHY_AS_GPIO_LSB, 4
# -----------------------------------------------------------------------------
# Field       : USB_USB_MUXING_SOFTCON
.equ	USB_USB_MUXING_SOFTCON_RESET, 0x0
.equ	USB_USB_MUXING_SOFTCON_BITS, 0x00000008
.equ	USB_USB_MUXING_SOFTCON_MSB, 3
.equ	USB_USB_MUXING_SOFTCON_LSB, 3
# -----------------------------------------------------------------------------
# Field       : USB_USB_MUXING_TO_DIGITAL_PAD
.equ	USB_USB_MUXING_TO_DIGITAL_PAD_RESET, 0x0
.equ	USB_USB_MUXING_TO_DIGITAL_PAD_BITS, 0x00000004
.equ	USB_USB_MUXING_TO_DIGITAL_PAD_MSB, 2
.equ	USB_USB_MUXING_TO_DIGITAL_PAD_LSB, 2
# -----------------------------------------------------------------------------
# Field       : USB_USB_MUXING_TO_EXTPHY
.equ	USB_USB_MUXING_TO_EXTPHY_RESET, 0x0
.equ	USB_USB_MUXING_TO_EXTPHY_BITS, 0x00000002
.equ	USB_USB_MUXING_TO_EXTPHY_MSB, 1
.equ	USB_USB_MUXING_TO_EXTPHY_LSB, 1
# -----------------------------------------------------------------------------
# Field       : USB_USB_MUXING_TO_PHY
.equ	USB_USB_MUXING_TO_PHY_RESET, 0x1
.equ	USB_USB_MUXING_TO_PHY_BITS, 0x00000001
.equ	USB_USB_MUXING_TO_PHY_MSB, 0
.equ	USB_USB_MUXING_TO_PHY_LSB, 0
# =============================================================================
# Register    : USB_USB_PWR
# Description : Overrides for the power signals in the event that the VBUS
#               signals are not hooked up to GPIO. Set the value of the
#               override and then the override enable to switch over to the
#               override value.
.equ	USB_USB_PWR_OFFSET, 0x00000078
.equ	USB_USB_PWR_BITS, 0x0000003f
.equ	USB_USB_PWR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_USB_PWR_OVERCURR_DETECT_EN
.equ	USB_USB_PWR_OVERCURR_DETECT_EN_RESET, 0x0
.equ	USB_USB_PWR_OVERCURR_DETECT_EN_BITS, 0x00000020
.equ	USB_USB_PWR_OVERCURR_DETECT_EN_MSB, 5
.equ	USB_USB_PWR_OVERCURR_DETECT_EN_LSB, 5
# -----------------------------------------------------------------------------
# Field       : USB_USB_PWR_OVERCURR_DETECT
.equ	USB_USB_PWR_OVERCURR_DETECT_RESET, 0x0
.equ	USB_USB_PWR_OVERCURR_DETECT_BITS, 0x00000010
.equ	USB_USB_PWR_OVERCURR_DETECT_MSB, 4
.equ	USB_USB_PWR_OVERCURR_DETECT_LSB, 4
# -----------------------------------------------------------------------------
# Field       : USB_USB_PWR_VBUS_DETECT_OVERRIDE_EN
.equ	USB_USB_PWR_VBUS_DETECT_OVERRIDE_EN_RESET, 0x0
.equ	USB_USB_PWR_VBUS_DETECT_OVERRIDE_EN_BITS, 0x00000008
.equ	USB_USB_PWR_VBUS_DETECT_OVERRIDE_EN_MSB, 3
.equ	USB_USB_PWR_VBUS_DETECT_OVERRIDE_EN_LSB, 3
# -----------------------------------------------------------------------------
# Field       : USB_USB_PWR_VBUS_DETECT
.equ	USB_USB_PWR_VBUS_DETECT_RESET, 0x0
.equ	USB_USB_PWR_VBUS_DETECT_BITS, 0x00000004
.equ	USB_USB_PWR_VBUS_DETECT_MSB, 2
.equ	USB_USB_PWR_VBUS_DETECT_LSB, 2
# -----------------------------------------------------------------------------
# Field       : USB_USB_PWR_VBUS_EN_OVERRIDE_EN
.equ	USB_USB_PWR_VBUS_EN_OVERRIDE_EN_RESET, 0x0
.equ	USB_USB_PWR_VBUS_EN_OVERRIDE_EN_BITS, 0x00000002
.equ	USB_USB_PWR_VBUS_EN_OVERRIDE_EN_MSB, 1
.equ	USB_USB_PWR_VBUS_EN_OVERRIDE_EN_LSB, 1
# -----------------------------------------------------------------------------
# Field       : USB_USB_PWR_VBUS_EN
.equ	USB_USB_PWR_VBUS_EN_RESET, 0x0
.equ	USB_USB_PWR_VBUS_EN_BITS, 0x00000001
.equ	USB_USB_PWR_VBUS_EN_MSB, 0
.equ	USB_USB_PWR_VBUS_EN_LSB, 0
# =============================================================================
# Register    : USB_USBPHY_DIRECT
# Description : This register allows for direct control of the USB phy. Use in
#               conjunction with usbphy_direct_override register to enable each
#               override bit.
.equ	USB_USBPHY_DIRECT_OFFSET, 0x0000007c
.equ	USB_USBPHY_DIRECT_BITS, 0x03ffff77
.equ	USB_USBPHY_DIRECT_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_RX_DM_OVERRIDE
# Description : Override rx_dm value into controller
.equ	USB_USBPHY_DIRECT_RX_DM_OVERRIDE_RESET, 0x0
.equ	USB_USBPHY_DIRECT_RX_DM_OVERRIDE_BITS, 0x02000000
.equ	USB_USBPHY_DIRECT_RX_DM_OVERRIDE_MSB, 25
.equ	USB_USBPHY_DIRECT_RX_DM_OVERRIDE_LSB, 25
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_RX_DP_OVERRIDE
# Description : Override rx_dp value into controller
.equ	USB_USBPHY_DIRECT_RX_DP_OVERRIDE_RESET, 0x0
.equ	USB_USBPHY_DIRECT_RX_DP_OVERRIDE_BITS, 0x01000000
.equ	USB_USBPHY_DIRECT_RX_DP_OVERRIDE_MSB, 24
.equ	USB_USBPHY_DIRECT_RX_DP_OVERRIDE_LSB, 24
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_RX_DD_OVERRIDE
# Description : Override rx_dd value into controller
.equ	USB_USBPHY_DIRECT_RX_DD_OVERRIDE_RESET, 0x0
.equ	USB_USBPHY_DIRECT_RX_DD_OVERRIDE_BITS, 0x00800000
.equ	USB_USBPHY_DIRECT_RX_DD_OVERRIDE_MSB, 23
.equ	USB_USBPHY_DIRECT_RX_DD_OVERRIDE_LSB, 23
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_DM_OVV
# Description : DM over voltage
.equ	USB_USBPHY_DIRECT_DM_OVV_RESET, 0x0
.equ	USB_USBPHY_DIRECT_DM_OVV_BITS, 0x00400000
.equ	USB_USBPHY_DIRECT_DM_OVV_MSB, 22
.equ	USB_USBPHY_DIRECT_DM_OVV_LSB, 22
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_DP_OVV
# Description : DP over voltage
.equ	USB_USBPHY_DIRECT_DP_OVV_RESET, 0x0
.equ	USB_USBPHY_DIRECT_DP_OVV_BITS, 0x00200000
.equ	USB_USBPHY_DIRECT_DP_OVV_MSB, 21
.equ	USB_USBPHY_DIRECT_DP_OVV_LSB, 21
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_DM_OVCN
# Description : DM overcurrent
.equ	USB_USBPHY_DIRECT_DM_OVCN_RESET, 0x0
.equ	USB_USBPHY_DIRECT_DM_OVCN_BITS, 0x00100000
.equ	USB_USBPHY_DIRECT_DM_OVCN_MSB, 20
.equ	USB_USBPHY_DIRECT_DM_OVCN_LSB, 20
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_DP_OVCN
# Description : DP overcurrent
.equ	USB_USBPHY_DIRECT_DP_OVCN_RESET, 0x0
.equ	USB_USBPHY_DIRECT_DP_OVCN_BITS, 0x00080000
.equ	USB_USBPHY_DIRECT_DP_OVCN_MSB, 19
.equ	USB_USBPHY_DIRECT_DP_OVCN_LSB, 19
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_RX_DM
# Description : DPM pin state
.equ	USB_USBPHY_DIRECT_RX_DM_RESET, 0x0
.equ	USB_USBPHY_DIRECT_RX_DM_BITS, 0x00040000
.equ	USB_USBPHY_DIRECT_RX_DM_MSB, 18
.equ	USB_USBPHY_DIRECT_RX_DM_LSB, 18
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_RX_DP
# Description : DPP pin state
.equ	USB_USBPHY_DIRECT_RX_DP_RESET, 0x0
.equ	USB_USBPHY_DIRECT_RX_DP_BITS, 0x00020000
.equ	USB_USBPHY_DIRECT_RX_DP_MSB, 17
.equ	USB_USBPHY_DIRECT_RX_DP_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_RX_DD
# Description : Differential RX
.equ	USB_USBPHY_DIRECT_RX_DD_RESET, 0x0
.equ	USB_USBPHY_DIRECT_RX_DD_BITS, 0x00010000
.equ	USB_USBPHY_DIRECT_RX_DD_MSB, 16
.equ	USB_USBPHY_DIRECT_RX_DD_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_TX_DIFFMODE
# Description : TX_DIFFMODE=0: Single ended mode
#               TX_DIFFMODE=1: Differential drive mode (TX_DM, TX_DM_OE
#               ignored)
.equ	USB_USBPHY_DIRECT_TX_DIFFMODE_RESET, 0x0
.equ	USB_USBPHY_DIRECT_TX_DIFFMODE_BITS, 0x00008000
.equ	USB_USBPHY_DIRECT_TX_DIFFMODE_MSB, 15
.equ	USB_USBPHY_DIRECT_TX_DIFFMODE_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_TX_FSSLEW
# Description : TX_FSSLEW=0: Low speed slew rate
#               TX_FSSLEW=1: Full speed slew rate
.equ	USB_USBPHY_DIRECT_TX_FSSLEW_RESET, 0x0
.equ	USB_USBPHY_DIRECT_TX_FSSLEW_BITS, 0x00004000
.equ	USB_USBPHY_DIRECT_TX_FSSLEW_MSB, 14
.equ	USB_USBPHY_DIRECT_TX_FSSLEW_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_TX_PD
# Description : TX power down override (if override enable is set). 1 = powered
#               down.
.equ	USB_USBPHY_DIRECT_TX_PD_RESET, 0x0
.equ	USB_USBPHY_DIRECT_TX_PD_BITS, 0x00002000
.equ	USB_USBPHY_DIRECT_TX_PD_MSB, 13
.equ	USB_USBPHY_DIRECT_TX_PD_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_RX_PD
# Description : RX power down override (if override enable is set). 1 = powered
#               down.
.equ	USB_USBPHY_DIRECT_RX_PD_RESET, 0x0
.equ	USB_USBPHY_DIRECT_RX_PD_BITS, 0x00001000
.equ	USB_USBPHY_DIRECT_RX_PD_MSB, 12
.equ	USB_USBPHY_DIRECT_RX_PD_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_TX_DM
# Description : Output data. TX_DIFFMODE=1, Ignored
#               TX_DIFFMODE=0, Drives DPM only. TX_DM_OE=1 to enable drive.
#               DPM=TX_DM
.equ	USB_USBPHY_DIRECT_TX_DM_RESET, 0x0
.equ	USB_USBPHY_DIRECT_TX_DM_BITS, 0x00000800
.equ	USB_USBPHY_DIRECT_TX_DM_MSB, 11
.equ	USB_USBPHY_DIRECT_TX_DM_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_TX_DP
# Description : Output data. If TX_DIFFMODE=1, Drives DPP/DPM diff pair.
#               TX_DP_OE=1 to enable drive. DPP=TX_DP, DPM=~TX_DP
#               If TX_DIFFMODE=0, Drives DPP only. TX_DP_OE=1 to enable drive.
#               DPP=TX_DP
.equ	USB_USBPHY_DIRECT_TX_DP_RESET, 0x0
.equ	USB_USBPHY_DIRECT_TX_DP_BITS, 0x00000400
.equ	USB_USBPHY_DIRECT_TX_DP_MSB, 10
.equ	USB_USBPHY_DIRECT_TX_DP_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_TX_DM_OE
# Description : Output enable. If TX_DIFFMODE=1, Ignored.
#               If TX_DIFFMODE=0, OE for DPM only. 0 - DPM in Hi-Z state; 1 -
#               DPM driving
.equ	USB_USBPHY_DIRECT_TX_DM_OE_RESET, 0x0
.equ	USB_USBPHY_DIRECT_TX_DM_OE_BITS, 0x00000200
.equ	USB_USBPHY_DIRECT_TX_DM_OE_MSB, 9
.equ	USB_USBPHY_DIRECT_TX_DM_OE_LSB, 9
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_TX_DP_OE
# Description : Output enable. If TX_DIFFMODE=1, OE for DPP/DPM diff pair. 0 -
#               DPP/DPM in Hi-Z state; 1 - DPP/DPM driving
#               If TX_DIFFMODE=0, OE for DPP only. 0 - DPP in Hi-Z state; 1 -
#               DPP driving
.equ	USB_USBPHY_DIRECT_TX_DP_OE_RESET, 0x0
.equ	USB_USBPHY_DIRECT_TX_DP_OE_BITS, 0x00000100
.equ	USB_USBPHY_DIRECT_TX_DP_OE_MSB, 8
.equ	USB_USBPHY_DIRECT_TX_DP_OE_LSB, 8
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_DM_PULLDN_EN
# Description : DM pull down enable
.equ	USB_USBPHY_DIRECT_DM_PULLDN_EN_RESET, 0x0
.equ	USB_USBPHY_DIRECT_DM_PULLDN_EN_BITS, 0x00000040
.equ	USB_USBPHY_DIRECT_DM_PULLDN_EN_MSB, 6
.equ	USB_USBPHY_DIRECT_DM_PULLDN_EN_LSB, 6
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_DM_PULLUP_EN
# Description : DM pull up enable
.equ	USB_USBPHY_DIRECT_DM_PULLUP_EN_RESET, 0x0
.equ	USB_USBPHY_DIRECT_DM_PULLUP_EN_BITS, 0x00000020
.equ	USB_USBPHY_DIRECT_DM_PULLUP_EN_MSB, 5
.equ	USB_USBPHY_DIRECT_DM_PULLUP_EN_LSB, 5
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_DM_PULLUP_HISEL
# Description : Enable the second DM pull up resistor. 0 - Pull = Rpu2; 1 -
#               Pull = Rpu1 + Rpu2
.equ	USB_USBPHY_DIRECT_DM_PULLUP_HISEL_RESET, 0x0
.equ	USB_USBPHY_DIRECT_DM_PULLUP_HISEL_BITS, 0x00000010
.equ	USB_USBPHY_DIRECT_DM_PULLUP_HISEL_MSB, 4
.equ	USB_USBPHY_DIRECT_DM_PULLUP_HISEL_LSB, 4
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_DP_PULLDN_EN
# Description : DP pull down enable
.equ	USB_USBPHY_DIRECT_DP_PULLDN_EN_RESET, 0x0
.equ	USB_USBPHY_DIRECT_DP_PULLDN_EN_BITS, 0x00000004
.equ	USB_USBPHY_DIRECT_DP_PULLDN_EN_MSB, 2
.equ	USB_USBPHY_DIRECT_DP_PULLDN_EN_LSB, 2
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_DP_PULLUP_EN
# Description : DP pull up enable
.equ	USB_USBPHY_DIRECT_DP_PULLUP_EN_RESET, 0x0
.equ	USB_USBPHY_DIRECT_DP_PULLUP_EN_BITS, 0x00000002
.equ	USB_USBPHY_DIRECT_DP_PULLUP_EN_MSB, 1
.equ	USB_USBPHY_DIRECT_DP_PULLUP_EN_LSB, 1
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_DP_PULLUP_HISEL
# Description : Enable the second DP pull up resistor. 0 - Pull = Rpu2; 1 -
#               Pull = Rpu1 + Rpu2
.equ	USB_USBPHY_DIRECT_DP_PULLUP_HISEL_RESET, 0x0
.equ	USB_USBPHY_DIRECT_DP_PULLUP_HISEL_BITS, 0x00000001
.equ	USB_USBPHY_DIRECT_DP_PULLUP_HISEL_MSB, 0
.equ	USB_USBPHY_DIRECT_DP_PULLUP_HISEL_LSB, 0
# =============================================================================
# Register    : USB_USBPHY_DIRECT_OVERRIDE
# Description : Override enable for each control in usbphy_direct
.equ	USB_USBPHY_DIRECT_OVERRIDE_OFFSET, 0x00000080
.equ	USB_USBPHY_DIRECT_OVERRIDE_BITS, 0x00079fff
.equ	USB_USBPHY_DIRECT_OVERRIDE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_OVERRIDE_RX_DM_OVERRIDE_EN
.equ	USB_USBPHY_DIRECT_OVERRIDE_RX_DM_OVERRIDE_EN_RESET, 0x0
.equ	USB_USBPHY_DIRECT_OVERRIDE_RX_DM_OVERRIDE_EN_BITS, 0x00040000
.equ	USB_USBPHY_DIRECT_OVERRIDE_RX_DM_OVERRIDE_EN_MSB, 18
.equ	USB_USBPHY_DIRECT_OVERRIDE_RX_DM_OVERRIDE_EN_LSB, 18
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_OVERRIDE_RX_DP_OVERRIDE_EN
.equ	USB_USBPHY_DIRECT_OVERRIDE_RX_DP_OVERRIDE_EN_RESET, 0x0
.equ	USB_USBPHY_DIRECT_OVERRIDE_RX_DP_OVERRIDE_EN_BITS, 0x00020000
.equ	USB_USBPHY_DIRECT_OVERRIDE_RX_DP_OVERRIDE_EN_MSB, 17
.equ	USB_USBPHY_DIRECT_OVERRIDE_RX_DP_OVERRIDE_EN_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_OVERRIDE_RX_DD_OVERRIDE_EN
.equ	USB_USBPHY_DIRECT_OVERRIDE_RX_DD_OVERRIDE_EN_RESET, 0x0
.equ	USB_USBPHY_DIRECT_OVERRIDE_RX_DD_OVERRIDE_EN_BITS, 0x00010000
.equ	USB_USBPHY_DIRECT_OVERRIDE_RX_DD_OVERRIDE_EN_MSB, 16
.equ	USB_USBPHY_DIRECT_OVERRIDE_RX_DD_OVERRIDE_EN_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_OVERRIDE_TX_DIFFMODE_OVERRIDE_EN
.equ	USB_USBPHY_DIRECT_OVERRIDE_TX_DIFFMODE_OVERRIDE_EN_RESET, 0x0
.equ	USB_USBPHY_DIRECT_OVERRIDE_TX_DIFFMODE_OVERRIDE_EN_BITS, 0x00008000
.equ	USB_USBPHY_DIRECT_OVERRIDE_TX_DIFFMODE_OVERRIDE_EN_MSB, 15
.equ	USB_USBPHY_DIRECT_OVERRIDE_TX_DIFFMODE_OVERRIDE_EN_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_OVERRIDE_EN
.equ	USB_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_OVERRIDE_EN_RESET, 0x0
.equ	USB_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_OVERRIDE_EN_BITS, 0x00001000
.equ	USB_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_OVERRIDE_EN_MSB, 12
.equ	USB_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_OVERRIDE_EN_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_OVERRIDE_TX_FSSLEW_OVERRIDE_EN
.equ	USB_USBPHY_DIRECT_OVERRIDE_TX_FSSLEW_OVERRIDE_EN_RESET, 0x0
.equ	USB_USBPHY_DIRECT_OVERRIDE_TX_FSSLEW_OVERRIDE_EN_BITS, 0x00000800
.equ	USB_USBPHY_DIRECT_OVERRIDE_TX_FSSLEW_OVERRIDE_EN_MSB, 11
.equ	USB_USBPHY_DIRECT_OVERRIDE_TX_FSSLEW_OVERRIDE_EN_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_OVERRIDE_TX_PD_OVERRIDE_EN
.equ	USB_USBPHY_DIRECT_OVERRIDE_TX_PD_OVERRIDE_EN_RESET, 0x0
.equ	USB_USBPHY_DIRECT_OVERRIDE_TX_PD_OVERRIDE_EN_BITS, 0x00000400
.equ	USB_USBPHY_DIRECT_OVERRIDE_TX_PD_OVERRIDE_EN_MSB, 10
.equ	USB_USBPHY_DIRECT_OVERRIDE_TX_PD_OVERRIDE_EN_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_OVERRIDE_RX_PD_OVERRIDE_EN
.equ	USB_USBPHY_DIRECT_OVERRIDE_RX_PD_OVERRIDE_EN_RESET, 0x0
.equ	USB_USBPHY_DIRECT_OVERRIDE_RX_PD_OVERRIDE_EN_BITS, 0x00000200
.equ	USB_USBPHY_DIRECT_OVERRIDE_RX_PD_OVERRIDE_EN_MSB, 9
.equ	USB_USBPHY_DIRECT_OVERRIDE_RX_PD_OVERRIDE_EN_LSB, 9
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_OVERRIDE_TX_DM_OVERRIDE_EN
.equ	USB_USBPHY_DIRECT_OVERRIDE_TX_DM_OVERRIDE_EN_RESET, 0x0
.equ	USB_USBPHY_DIRECT_OVERRIDE_TX_DM_OVERRIDE_EN_BITS, 0x00000100
.equ	USB_USBPHY_DIRECT_OVERRIDE_TX_DM_OVERRIDE_EN_MSB, 8
.equ	USB_USBPHY_DIRECT_OVERRIDE_TX_DM_OVERRIDE_EN_LSB, 8
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_OVERRIDE_TX_DP_OVERRIDE_EN
.equ	USB_USBPHY_DIRECT_OVERRIDE_TX_DP_OVERRIDE_EN_RESET, 0x0
.equ	USB_USBPHY_DIRECT_OVERRIDE_TX_DP_OVERRIDE_EN_BITS, 0x00000080
.equ	USB_USBPHY_DIRECT_OVERRIDE_TX_DP_OVERRIDE_EN_MSB, 7
.equ	USB_USBPHY_DIRECT_OVERRIDE_TX_DP_OVERRIDE_EN_LSB, 7
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_OVERRIDE_TX_DM_OE_OVERRIDE_EN
.equ	USB_USBPHY_DIRECT_OVERRIDE_TX_DM_OE_OVERRIDE_EN_RESET, 0x0
.equ	USB_USBPHY_DIRECT_OVERRIDE_TX_DM_OE_OVERRIDE_EN_BITS, 0x00000040
.equ	USB_USBPHY_DIRECT_OVERRIDE_TX_DM_OE_OVERRIDE_EN_MSB, 6
.equ	USB_USBPHY_DIRECT_OVERRIDE_TX_DM_OE_OVERRIDE_EN_LSB, 6
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_OVERRIDE_TX_DP_OE_OVERRIDE_EN
.equ	USB_USBPHY_DIRECT_OVERRIDE_TX_DP_OE_OVERRIDE_EN_RESET, 0x0
.equ	USB_USBPHY_DIRECT_OVERRIDE_TX_DP_OE_OVERRIDE_EN_BITS, 0x00000020
.equ	USB_USBPHY_DIRECT_OVERRIDE_TX_DP_OE_OVERRIDE_EN_MSB, 5
.equ	USB_USBPHY_DIRECT_OVERRIDE_TX_DP_OE_OVERRIDE_EN_LSB, 5
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_OVERRIDE_DM_PULLDN_EN_OVERRIDE_EN
.equ	USB_USBPHY_DIRECT_OVERRIDE_DM_PULLDN_EN_OVERRIDE_EN_RESET, 0x0
.equ	USB_USBPHY_DIRECT_OVERRIDE_DM_PULLDN_EN_OVERRIDE_EN_BITS, 0x00000010
.equ	USB_USBPHY_DIRECT_OVERRIDE_DM_PULLDN_EN_OVERRIDE_EN_MSB, 4
.equ	USB_USBPHY_DIRECT_OVERRIDE_DM_PULLDN_EN_OVERRIDE_EN_LSB, 4
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_OVERRIDE_DP_PULLDN_EN_OVERRIDE_EN
.equ	USB_USBPHY_DIRECT_OVERRIDE_DP_PULLDN_EN_OVERRIDE_EN_RESET, 0x0
.equ	USB_USBPHY_DIRECT_OVERRIDE_DP_PULLDN_EN_OVERRIDE_EN_BITS, 0x00000008
.equ	USB_USBPHY_DIRECT_OVERRIDE_DP_PULLDN_EN_OVERRIDE_EN_MSB, 3
.equ	USB_USBPHY_DIRECT_OVERRIDE_DP_PULLDN_EN_OVERRIDE_EN_LSB, 3
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_EN_OVERRIDE_EN
.equ	USB_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_EN_OVERRIDE_EN_RESET, 0x0
.equ	USB_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_EN_OVERRIDE_EN_BITS, 0x00000004
.equ	USB_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_EN_OVERRIDE_EN_MSB, 2
.equ	USB_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_EN_OVERRIDE_EN_LSB, 2
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_HISEL_OVERRIDE_EN
.equ	USB_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_HISEL_OVERRIDE_EN_RESET, 0x0
.equ	USB_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_HISEL_OVERRIDE_EN_BITS, 0x00000002
.equ	USB_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_HISEL_OVERRIDE_EN_MSB, 1
.equ	USB_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_HISEL_OVERRIDE_EN_LSB, 1
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_HISEL_OVERRIDE_EN
.equ	USB_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_HISEL_OVERRIDE_EN_RESET, 0x0
.equ	USB_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_HISEL_OVERRIDE_EN_BITS, 0x00000001
.equ	USB_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_HISEL_OVERRIDE_EN_MSB, 0
.equ	USB_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_HISEL_OVERRIDE_EN_LSB, 0
# =============================================================================
# Register    : USB_USBPHY_TRIM
# Description : Used to adjust trim values of USB phy pull down resistors.
.equ	USB_USBPHY_TRIM_OFFSET, 0x00000084
.equ	USB_USBPHY_TRIM_BITS, 0x00001f1f
.equ	USB_USBPHY_TRIM_RESET, 0x00001f1f
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_TRIM_DM_PULLDN_TRIM
# Description : Value to drive to USB PHY
#               DM pulldown resistor trim control
#               Experimental data suggests that the reset value will work, but
#               this register allows adjustment if required
.equ	USB_USBPHY_TRIM_DM_PULLDN_TRIM_RESET, 0x1f
.equ	USB_USBPHY_TRIM_DM_PULLDN_TRIM_BITS, 0x00001f00
.equ	USB_USBPHY_TRIM_DM_PULLDN_TRIM_MSB, 12
.equ	USB_USBPHY_TRIM_DM_PULLDN_TRIM_LSB, 8
# -----------------------------------------------------------------------------
# Field       : USB_USBPHY_TRIM_DP_PULLDN_TRIM
# Description : Value to drive to USB PHY
#               DP pulldown resistor trim control
#               Experimental data suggests that the reset value will work, but
#               this register allows adjustment if required
.equ	USB_USBPHY_TRIM_DP_PULLDN_TRIM_RESET, 0x1f
.equ	USB_USBPHY_TRIM_DP_PULLDN_TRIM_BITS, 0x0000001f
.equ	USB_USBPHY_TRIM_DP_PULLDN_TRIM_MSB, 4
.equ	USB_USBPHY_TRIM_DP_PULLDN_TRIM_LSB, 0
# =============================================================================
# Register    : USB_LINESTATE_TUNING
# Description : Used for debug only.
.equ	USB_LINESTATE_TUNING_OFFSET, 0x00000088
.equ	USB_LINESTATE_TUNING_BITS, 0x00000fff
.equ	USB_LINESTATE_TUNING_RESET, 0x000000f8
# -----------------------------------------------------------------------------
# Field       : USB_LINESTATE_TUNING_SPARE_FIX
.equ	USB_LINESTATE_TUNING_SPARE_FIX_RESET, 0x0
.equ	USB_LINESTATE_TUNING_SPARE_FIX_BITS, 0x00000f00
.equ	USB_LINESTATE_TUNING_SPARE_FIX_MSB, 11
.equ	USB_LINESTATE_TUNING_SPARE_FIX_LSB, 8
# -----------------------------------------------------------------------------
# Field       : USB_LINESTATE_TUNING_DEV_LS_WAKE_FIX
# Description : Device - exit suspend on any non-idle signalling, not qualified
#               with a 1ms timer
.equ	USB_LINESTATE_TUNING_DEV_LS_WAKE_FIX_RESET, 0x1
.equ	USB_LINESTATE_TUNING_DEV_LS_WAKE_FIX_BITS, 0x00000080
.equ	USB_LINESTATE_TUNING_DEV_LS_WAKE_FIX_MSB, 7
.equ	USB_LINESTATE_TUNING_DEV_LS_WAKE_FIX_LSB, 7
# -----------------------------------------------------------------------------
# Field       : USB_LINESTATE_TUNING_DEV_RX_ERR_QUIESCE
# Description : Device - suppress repeated errors until the device FSM is next
#               in the process of decoding an inbound packet.
.equ	USB_LINESTATE_TUNING_DEV_RX_ERR_QUIESCE_RESET, 0x1
.equ	USB_LINESTATE_TUNING_DEV_RX_ERR_QUIESCE_BITS, 0x00000040
.equ	USB_LINESTATE_TUNING_DEV_RX_ERR_QUIESCE_MSB, 6
.equ	USB_LINESTATE_TUNING_DEV_RX_ERR_QUIESCE_LSB, 6
# -----------------------------------------------------------------------------
# Field       : USB_LINESTATE_TUNING_SIE_RX_CHATTER_SE0_FIX
# Description : RX - when recovering from line chatter or bitstuff errors,
#               treat SE0 as the end of chatter as well as
#               8 consecutive idle bits.
.equ	USB_LINESTATE_TUNING_SIE_RX_CHATTER_SE0_FIX_RESET, 0x1
.equ	USB_LINESTATE_TUNING_SIE_RX_CHATTER_SE0_FIX_BITS, 0x00000020
.equ	USB_LINESTATE_TUNING_SIE_RX_CHATTER_SE0_FIX_MSB, 5
.equ	USB_LINESTATE_TUNING_SIE_RX_CHATTER_SE0_FIX_LSB, 5
# -----------------------------------------------------------------------------
# Field       : USB_LINESTATE_TUNING_SIE_RX_BITSTUFF_FIX
# Description : RX - when a bitstuff error is signalled by rx_dasm,
#               unconditionally terminate RX decode to
#               avoid a hang during certain packet phases.
.equ	USB_LINESTATE_TUNING_SIE_RX_BITSTUFF_FIX_RESET, 0x1
.equ	USB_LINESTATE_TUNING_SIE_RX_BITSTUFF_FIX_BITS, 0x00000010
.equ	USB_LINESTATE_TUNING_SIE_RX_BITSTUFF_FIX_MSB, 4
.equ	USB_LINESTATE_TUNING_SIE_RX_BITSTUFF_FIX_LSB, 4
# -----------------------------------------------------------------------------
# Field       : USB_LINESTATE_TUNING_DEV_BUFF_CONTROL_DOUBLE_READ_FIX
# Description : Device - the controller FSM performs two reads of the buffer
#               status memory address to
#               avoid sampling metastable data. An enabled buffer is only used
#               if both reads match.
.equ	USB_LINESTATE_TUNING_DEV_BUFF_CONTROL_DOUBLE_READ_FIX_RESET, 0x1
.equ	USB_LINESTATE_TUNING_DEV_BUFF_CONTROL_DOUBLE_READ_FIX_BITS, 0x00000008
.equ	USB_LINESTATE_TUNING_DEV_BUFF_CONTROL_DOUBLE_READ_FIX_MSB, 3
.equ	USB_LINESTATE_TUNING_DEV_BUFF_CONTROL_DOUBLE_READ_FIX_LSB, 3
# -----------------------------------------------------------------------------
# Field       : USB_LINESTATE_TUNING_MULTI_HUB_FIX
# Description : Host - increase inter-packet and turnaround timeouts to
#               accommodate worst-case hub delays.
.equ	USB_LINESTATE_TUNING_MULTI_HUB_FIX_RESET, 0x0
.equ	USB_LINESTATE_TUNING_MULTI_HUB_FIX_BITS, 0x00000004
.equ	USB_LINESTATE_TUNING_MULTI_HUB_FIX_MSB, 2
.equ	USB_LINESTATE_TUNING_MULTI_HUB_FIX_LSB, 2
# -----------------------------------------------------------------------------
# Field       : USB_LINESTATE_TUNING_LINESTATE_DELAY
# Description : Device/Host - add an extra 1-bit debounce of linestate
#               sampling.
.equ	USB_LINESTATE_TUNING_LINESTATE_DELAY_RESET, 0x0
.equ	USB_LINESTATE_TUNING_LINESTATE_DELAY_BITS, 0x00000002
.equ	USB_LINESTATE_TUNING_LINESTATE_DELAY_MSB, 1
.equ	USB_LINESTATE_TUNING_LINESTATE_DELAY_LSB, 1
# -----------------------------------------------------------------------------
# Field       : USB_LINESTATE_TUNING_RCV_DELAY
# Description : Device - register the received data to account for hub bit
#               dribble before EOP. Only affects certain hubs.
.equ	USB_LINESTATE_TUNING_RCV_DELAY_RESET, 0x0
.equ	USB_LINESTATE_TUNING_RCV_DELAY_BITS, 0x00000001
.equ	USB_LINESTATE_TUNING_RCV_DELAY_MSB, 0
.equ	USB_LINESTATE_TUNING_RCV_DELAY_LSB, 0
# =============================================================================
# Register    : USB_INTR
# Description : Raw Interrupts
.equ	USB_INTR_OFFSET, 0x0000008c
.equ	USB_INTR_BITS, 0x00ffffff
.equ	USB_INTR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_INTR_EPX_STOPPED_ON_NAK
# Description : Source: NAK_POLL.EPX_STOPPED_ON_NAK
.equ	USB_INTR_EPX_STOPPED_ON_NAK_RESET, 0x0
.equ	USB_INTR_EPX_STOPPED_ON_NAK_BITS, 0x00800000
.equ	USB_INTR_EPX_STOPPED_ON_NAK_MSB, 23
.equ	USB_INTR_EPX_STOPPED_ON_NAK_LSB, 23
# -----------------------------------------------------------------------------
# Field       : USB_INTR_DEV_SM_WATCHDOG_FIRED
# Description : Source: DEV_SM_WATCHDOG.FIRED
.equ	USB_INTR_DEV_SM_WATCHDOG_FIRED_RESET, 0x0
.equ	USB_INTR_DEV_SM_WATCHDOG_FIRED_BITS, 0x00400000
.equ	USB_INTR_DEV_SM_WATCHDOG_FIRED_MSB, 22
.equ	USB_INTR_DEV_SM_WATCHDOG_FIRED_LSB, 22
# -----------------------------------------------------------------------------
# Field       : USB_INTR_ENDPOINT_ERROR
# Description : Source: SIE_STATUS.ENDPOINT_ERROR
.equ	USB_INTR_ENDPOINT_ERROR_RESET, 0x0
.equ	USB_INTR_ENDPOINT_ERROR_BITS, 0x00200000
.equ	USB_INTR_ENDPOINT_ERROR_MSB, 21
.equ	USB_INTR_ENDPOINT_ERROR_LSB, 21
# -----------------------------------------------------------------------------
# Field       : USB_INTR_RX_SHORT_PACKET
# Description : Source: SIE_STATUS.RX_SHORT_PACKET
.equ	USB_INTR_RX_SHORT_PACKET_RESET, 0x0
.equ	USB_INTR_RX_SHORT_PACKET_BITS, 0x00100000
.equ	USB_INTR_RX_SHORT_PACKET_MSB, 20
.equ	USB_INTR_RX_SHORT_PACKET_LSB, 20
# -----------------------------------------------------------------------------
# Field       : USB_INTR_EP_STALL_NAK
# Description : Raised when any bit in EP_STATUS_STALL_NAK is set. Clear by
#               clearing all bits in EP_STATUS_STALL_NAK.
.equ	USB_INTR_EP_STALL_NAK_RESET, 0x0
.equ	USB_INTR_EP_STALL_NAK_BITS, 0x00080000
.equ	USB_INTR_EP_STALL_NAK_MSB, 19
.equ	USB_INTR_EP_STALL_NAK_LSB, 19
# -----------------------------------------------------------------------------
# Field       : USB_INTR_ABORT_DONE
# Description : Raised when any bit in ABORT_DONE is set. Clear by clearing all
#               bits in ABORT_DONE.
.equ	USB_INTR_ABORT_DONE_RESET, 0x0
.equ	USB_INTR_ABORT_DONE_BITS, 0x00040000
.equ	USB_INTR_ABORT_DONE_MSB, 18
.equ	USB_INTR_ABORT_DONE_LSB, 18
# -----------------------------------------------------------------------------
# Field       : USB_INTR_DEV_SOF
# Description : Set every time the device receives a SOF (Start of Frame)
#               packet. Cleared by reading SOF_RD
.equ	USB_INTR_DEV_SOF_RESET, 0x0
.equ	USB_INTR_DEV_SOF_BITS, 0x00020000
.equ	USB_INTR_DEV_SOF_MSB, 17
.equ	USB_INTR_DEV_SOF_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_INTR_SETUP_REQ
# Description : Device. Source: SIE_STATUS.SETUP_REC
.equ	USB_INTR_SETUP_REQ_RESET, 0x0
.equ	USB_INTR_SETUP_REQ_BITS, 0x00010000
.equ	USB_INTR_SETUP_REQ_MSB, 16
.equ	USB_INTR_SETUP_REQ_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_INTR_DEV_RESUME_FROM_HOST
# Description : Set when the device receives a resume from the host. Cleared by
#               writing to SIE_STATUS.RESUME
.equ	USB_INTR_DEV_RESUME_FROM_HOST_RESET, 0x0
.equ	USB_INTR_DEV_RESUME_FROM_HOST_BITS, 0x00008000
.equ	USB_INTR_DEV_RESUME_FROM_HOST_MSB, 15
.equ	USB_INTR_DEV_RESUME_FROM_HOST_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_INTR_DEV_SUSPEND
# Description : Set when the device suspend state changes. Cleared by writing
#               to SIE_STATUS.SUSPENDED
.equ	USB_INTR_DEV_SUSPEND_RESET, 0x0
.equ	USB_INTR_DEV_SUSPEND_BITS, 0x00004000
.equ	USB_INTR_DEV_SUSPEND_MSB, 14
.equ	USB_INTR_DEV_SUSPEND_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_INTR_DEV_CONN_DIS
# Description : Set when the device connection state changes. Cleared by
#               writing to SIE_STATUS.CONNECTED
.equ	USB_INTR_DEV_CONN_DIS_RESET, 0x0
.equ	USB_INTR_DEV_CONN_DIS_BITS, 0x00002000
.equ	USB_INTR_DEV_CONN_DIS_MSB, 13
.equ	USB_INTR_DEV_CONN_DIS_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_INTR_BUS_RESET
# Description : Source: SIE_STATUS.BUS_RESET
.equ	USB_INTR_BUS_RESET_RESET, 0x0
.equ	USB_INTR_BUS_RESET_BITS, 0x00001000
.equ	USB_INTR_BUS_RESET_MSB, 12
.equ	USB_INTR_BUS_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_INTR_VBUS_DETECT
# Description : Source: SIE_STATUS.VBUS_DETECTED
.equ	USB_INTR_VBUS_DETECT_RESET, 0x0
.equ	USB_INTR_VBUS_DETECT_BITS, 0x00000800
.equ	USB_INTR_VBUS_DETECT_MSB, 11
.equ	USB_INTR_VBUS_DETECT_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_INTR_STALL
# Description : Source: SIE_STATUS.STALL_REC
.equ	USB_INTR_STALL_RESET, 0x0
.equ	USB_INTR_STALL_BITS, 0x00000400
.equ	USB_INTR_STALL_MSB, 10
.equ	USB_INTR_STALL_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_INTR_ERROR_CRC
# Description : Source: SIE_STATUS.CRC_ERROR
.equ	USB_INTR_ERROR_CRC_RESET, 0x0
.equ	USB_INTR_ERROR_CRC_BITS, 0x00000200
.equ	USB_INTR_ERROR_CRC_MSB, 9
.equ	USB_INTR_ERROR_CRC_LSB, 9
# -----------------------------------------------------------------------------
# Field       : USB_INTR_ERROR_BIT_STUFF
# Description : Source: SIE_STATUS.BIT_STUFF_ERROR
.equ	USB_INTR_ERROR_BIT_STUFF_RESET, 0x0
.equ	USB_INTR_ERROR_BIT_STUFF_BITS, 0x00000100
.equ	USB_INTR_ERROR_BIT_STUFF_MSB, 8
.equ	USB_INTR_ERROR_BIT_STUFF_LSB, 8
# -----------------------------------------------------------------------------
# Field       : USB_INTR_ERROR_RX_OVERFLOW
# Description : Source: SIE_STATUS.RX_OVERFLOW
.equ	USB_INTR_ERROR_RX_OVERFLOW_RESET, 0x0
.equ	USB_INTR_ERROR_RX_OVERFLOW_BITS, 0x00000080
.equ	USB_INTR_ERROR_RX_OVERFLOW_MSB, 7
.equ	USB_INTR_ERROR_RX_OVERFLOW_LSB, 7
# -----------------------------------------------------------------------------
# Field       : USB_INTR_ERROR_RX_TIMEOUT
# Description : Source: SIE_STATUS.RX_TIMEOUT
.equ	USB_INTR_ERROR_RX_TIMEOUT_RESET, 0x0
.equ	USB_INTR_ERROR_RX_TIMEOUT_BITS, 0x00000040
.equ	USB_INTR_ERROR_RX_TIMEOUT_MSB, 6
.equ	USB_INTR_ERROR_RX_TIMEOUT_LSB, 6
# -----------------------------------------------------------------------------
# Field       : USB_INTR_ERROR_DATA_SEQ
# Description : Source: SIE_STATUS.DATA_SEQ_ERROR
.equ	USB_INTR_ERROR_DATA_SEQ_RESET, 0x0
.equ	USB_INTR_ERROR_DATA_SEQ_BITS, 0x00000020
.equ	USB_INTR_ERROR_DATA_SEQ_MSB, 5
.equ	USB_INTR_ERROR_DATA_SEQ_LSB, 5
# -----------------------------------------------------------------------------
# Field       : USB_INTR_BUFF_STATUS
# Description : Raised when any bit in BUFF_STATUS is set. Clear by clearing
#               all bits in BUFF_STATUS.
.equ	USB_INTR_BUFF_STATUS_RESET, 0x0
.equ	USB_INTR_BUFF_STATUS_BITS, 0x00000010
.equ	USB_INTR_BUFF_STATUS_MSB, 4
.equ	USB_INTR_BUFF_STATUS_LSB, 4
# -----------------------------------------------------------------------------
# Field       : USB_INTR_TRANS_COMPLETE
# Description : Raised every time SIE_STATUS.TRANS_COMPLETE is set. Clear by
#               writing to this bit.
.equ	USB_INTR_TRANS_COMPLETE_RESET, 0x0
.equ	USB_INTR_TRANS_COMPLETE_BITS, 0x00000008
.equ	USB_INTR_TRANS_COMPLETE_MSB, 3
.equ	USB_INTR_TRANS_COMPLETE_LSB, 3
# -----------------------------------------------------------------------------
# Field       : USB_INTR_HOST_SOF
# Description : Host: raised every time the host sends a SOF (Start of Frame).
#               Cleared by reading SOF_RD
.equ	USB_INTR_HOST_SOF_RESET, 0x0
.equ	USB_INTR_HOST_SOF_BITS, 0x00000004
.equ	USB_INTR_HOST_SOF_MSB, 2
.equ	USB_INTR_HOST_SOF_LSB, 2
# -----------------------------------------------------------------------------
# Field       : USB_INTR_HOST_RESUME
# Description : Host: raised when a device wakes up the host. Cleared by
#               writing to SIE_STATUS.RESUME
.equ	USB_INTR_HOST_RESUME_RESET, 0x0
.equ	USB_INTR_HOST_RESUME_BITS, 0x00000002
.equ	USB_INTR_HOST_RESUME_MSB, 1
.equ	USB_INTR_HOST_RESUME_LSB, 1
# -----------------------------------------------------------------------------
# Field       : USB_INTR_HOST_CONN_DIS
# Description : Host: raised when a device is connected or disconnected (i.e.
#               when SIE_STATUS.SPEED changes). Cleared by writing to
#               SIE_STATUS.SPEED
.equ	USB_INTR_HOST_CONN_DIS_RESET, 0x0
.equ	USB_INTR_HOST_CONN_DIS_BITS, 0x00000001
.equ	USB_INTR_HOST_CONN_DIS_MSB, 0
.equ	USB_INTR_HOST_CONN_DIS_LSB, 0
# =============================================================================
# Register    : USB_INTE
# Description : Interrupt Enable
.equ	USB_INTE_OFFSET, 0x00000090
.equ	USB_INTE_BITS, 0x00ffffff
.equ	USB_INTE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_INTE_EPX_STOPPED_ON_NAK
# Description : Source: NAK_POLL.EPX_STOPPED_ON_NAK
.equ	USB_INTE_EPX_STOPPED_ON_NAK_RESET, 0x0
.equ	USB_INTE_EPX_STOPPED_ON_NAK_BITS, 0x00800000
.equ	USB_INTE_EPX_STOPPED_ON_NAK_MSB, 23
.equ	USB_INTE_EPX_STOPPED_ON_NAK_LSB, 23
# -----------------------------------------------------------------------------
# Field       : USB_INTE_DEV_SM_WATCHDOG_FIRED
# Description : Source: DEV_SM_WATCHDOG.FIRED
.equ	USB_INTE_DEV_SM_WATCHDOG_FIRED_RESET, 0x0
.equ	USB_INTE_DEV_SM_WATCHDOG_FIRED_BITS, 0x00400000
.equ	USB_INTE_DEV_SM_WATCHDOG_FIRED_MSB, 22
.equ	USB_INTE_DEV_SM_WATCHDOG_FIRED_LSB, 22
# -----------------------------------------------------------------------------
# Field       : USB_INTE_ENDPOINT_ERROR
# Description : Source: SIE_STATUS.ENDPOINT_ERROR
.equ	USB_INTE_ENDPOINT_ERROR_RESET, 0x0
.equ	USB_INTE_ENDPOINT_ERROR_BITS, 0x00200000
.equ	USB_INTE_ENDPOINT_ERROR_MSB, 21
.equ	USB_INTE_ENDPOINT_ERROR_LSB, 21
# -----------------------------------------------------------------------------
# Field       : USB_INTE_RX_SHORT_PACKET
# Description : Source: SIE_STATUS.RX_SHORT_PACKET
.equ	USB_INTE_RX_SHORT_PACKET_RESET, 0x0
.equ	USB_INTE_RX_SHORT_PACKET_BITS, 0x00100000
.equ	USB_INTE_RX_SHORT_PACKET_MSB, 20
.equ	USB_INTE_RX_SHORT_PACKET_LSB, 20
# -----------------------------------------------------------------------------
# Field       : USB_INTE_EP_STALL_NAK
# Description : Raised when any bit in EP_STATUS_STALL_NAK is set. Clear by
#               clearing all bits in EP_STATUS_STALL_NAK.
.equ	USB_INTE_EP_STALL_NAK_RESET, 0x0
.equ	USB_INTE_EP_STALL_NAK_BITS, 0x00080000
.equ	USB_INTE_EP_STALL_NAK_MSB, 19
.equ	USB_INTE_EP_STALL_NAK_LSB, 19
# -----------------------------------------------------------------------------
# Field       : USB_INTE_ABORT_DONE
# Description : Raised when any bit in ABORT_DONE is set. Clear by clearing all
#               bits in ABORT_DONE.
.equ	USB_INTE_ABORT_DONE_RESET, 0x0
.equ	USB_INTE_ABORT_DONE_BITS, 0x00040000
.equ	USB_INTE_ABORT_DONE_MSB, 18
.equ	USB_INTE_ABORT_DONE_LSB, 18
# -----------------------------------------------------------------------------
# Field       : USB_INTE_DEV_SOF
# Description : Set every time the device receives a SOF (Start of Frame)
#               packet. Cleared by reading SOF_RD
.equ	USB_INTE_DEV_SOF_RESET, 0x0
.equ	USB_INTE_DEV_SOF_BITS, 0x00020000
.equ	USB_INTE_DEV_SOF_MSB, 17
.equ	USB_INTE_DEV_SOF_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_INTE_SETUP_REQ
# Description : Device. Source: SIE_STATUS.SETUP_REC
.equ	USB_INTE_SETUP_REQ_RESET, 0x0
.equ	USB_INTE_SETUP_REQ_BITS, 0x00010000
.equ	USB_INTE_SETUP_REQ_MSB, 16
.equ	USB_INTE_SETUP_REQ_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_INTE_DEV_RESUME_FROM_HOST
# Description : Set when the device receives a resume from the host. Cleared by
#               writing to SIE_STATUS.RESUME
.equ	USB_INTE_DEV_RESUME_FROM_HOST_RESET, 0x0
.equ	USB_INTE_DEV_RESUME_FROM_HOST_BITS, 0x00008000
.equ	USB_INTE_DEV_RESUME_FROM_HOST_MSB, 15
.equ	USB_INTE_DEV_RESUME_FROM_HOST_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_INTE_DEV_SUSPEND
# Description : Set when the device suspend state changes. Cleared by writing
#               to SIE_STATUS.SUSPENDED
.equ	USB_INTE_DEV_SUSPEND_RESET, 0x0
.equ	USB_INTE_DEV_SUSPEND_BITS, 0x00004000
.equ	USB_INTE_DEV_SUSPEND_MSB, 14
.equ	USB_INTE_DEV_SUSPEND_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_INTE_DEV_CONN_DIS
# Description : Set when the device connection state changes. Cleared by
#               writing to SIE_STATUS.CONNECTED
.equ	USB_INTE_DEV_CONN_DIS_RESET, 0x0
.equ	USB_INTE_DEV_CONN_DIS_BITS, 0x00002000
.equ	USB_INTE_DEV_CONN_DIS_MSB, 13
.equ	USB_INTE_DEV_CONN_DIS_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_INTE_BUS_RESET
# Description : Source: SIE_STATUS.BUS_RESET
.equ	USB_INTE_BUS_RESET_RESET, 0x0
.equ	USB_INTE_BUS_RESET_BITS, 0x00001000
.equ	USB_INTE_BUS_RESET_MSB, 12
.equ	USB_INTE_BUS_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_INTE_VBUS_DETECT
# Description : Source: SIE_STATUS.VBUS_DETECTED
.equ	USB_INTE_VBUS_DETECT_RESET, 0x0
.equ	USB_INTE_VBUS_DETECT_BITS, 0x00000800
.equ	USB_INTE_VBUS_DETECT_MSB, 11
.equ	USB_INTE_VBUS_DETECT_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_INTE_STALL
# Description : Source: SIE_STATUS.STALL_REC
.equ	USB_INTE_STALL_RESET, 0x0
.equ	USB_INTE_STALL_BITS, 0x00000400
.equ	USB_INTE_STALL_MSB, 10
.equ	USB_INTE_STALL_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_INTE_ERROR_CRC
# Description : Source: SIE_STATUS.CRC_ERROR
.equ	USB_INTE_ERROR_CRC_RESET, 0x0
.equ	USB_INTE_ERROR_CRC_BITS, 0x00000200
.equ	USB_INTE_ERROR_CRC_MSB, 9
.equ	USB_INTE_ERROR_CRC_LSB, 9
# -----------------------------------------------------------------------------
# Field       : USB_INTE_ERROR_BIT_STUFF
# Description : Source: SIE_STATUS.BIT_STUFF_ERROR
.equ	USB_INTE_ERROR_BIT_STUFF_RESET, 0x0
.equ	USB_INTE_ERROR_BIT_STUFF_BITS, 0x00000100
.equ	USB_INTE_ERROR_BIT_STUFF_MSB, 8
.equ	USB_INTE_ERROR_BIT_STUFF_LSB, 8
# -----------------------------------------------------------------------------
# Field       : USB_INTE_ERROR_RX_OVERFLOW
# Description : Source: SIE_STATUS.RX_OVERFLOW
.equ	USB_INTE_ERROR_RX_OVERFLOW_RESET, 0x0
.equ	USB_INTE_ERROR_RX_OVERFLOW_BITS, 0x00000080
.equ	USB_INTE_ERROR_RX_OVERFLOW_MSB, 7
.equ	USB_INTE_ERROR_RX_OVERFLOW_LSB, 7
# -----------------------------------------------------------------------------
# Field       : USB_INTE_ERROR_RX_TIMEOUT
# Description : Source: SIE_STATUS.RX_TIMEOUT
.equ	USB_INTE_ERROR_RX_TIMEOUT_RESET, 0x0
.equ	USB_INTE_ERROR_RX_TIMEOUT_BITS, 0x00000040
.equ	USB_INTE_ERROR_RX_TIMEOUT_MSB, 6
.equ	USB_INTE_ERROR_RX_TIMEOUT_LSB, 6
# -----------------------------------------------------------------------------
# Field       : USB_INTE_ERROR_DATA_SEQ
# Description : Source: SIE_STATUS.DATA_SEQ_ERROR
.equ	USB_INTE_ERROR_DATA_SEQ_RESET, 0x0
.equ	USB_INTE_ERROR_DATA_SEQ_BITS, 0x00000020
.equ	USB_INTE_ERROR_DATA_SEQ_MSB, 5
.equ	USB_INTE_ERROR_DATA_SEQ_LSB, 5
# -----------------------------------------------------------------------------
# Field       : USB_INTE_BUFF_STATUS
# Description : Raised when any bit in BUFF_STATUS is set. Clear by clearing
#               all bits in BUFF_STATUS.
.equ	USB_INTE_BUFF_STATUS_RESET, 0x0
.equ	USB_INTE_BUFF_STATUS_BITS, 0x00000010
.equ	USB_INTE_BUFF_STATUS_MSB, 4
.equ	USB_INTE_BUFF_STATUS_LSB, 4
# -----------------------------------------------------------------------------
# Field       : USB_INTE_TRANS_COMPLETE
# Description : Raised every time SIE_STATUS.TRANS_COMPLETE is set. Clear by
#               writing to this bit.
.equ	USB_INTE_TRANS_COMPLETE_RESET, 0x0
.equ	USB_INTE_TRANS_COMPLETE_BITS, 0x00000008
.equ	USB_INTE_TRANS_COMPLETE_MSB, 3
.equ	USB_INTE_TRANS_COMPLETE_LSB, 3
# -----------------------------------------------------------------------------
# Field       : USB_INTE_HOST_SOF
# Description : Host: raised every time the host sends a SOF (Start of Frame).
#               Cleared by reading SOF_RD
.equ	USB_INTE_HOST_SOF_RESET, 0x0
.equ	USB_INTE_HOST_SOF_BITS, 0x00000004
.equ	USB_INTE_HOST_SOF_MSB, 2
.equ	USB_INTE_HOST_SOF_LSB, 2
# -----------------------------------------------------------------------------
# Field       : USB_INTE_HOST_RESUME
# Description : Host: raised when a device wakes up the host. Cleared by
#               writing to SIE_STATUS.RESUME
.equ	USB_INTE_HOST_RESUME_RESET, 0x0
.equ	USB_INTE_HOST_RESUME_BITS, 0x00000002
.equ	USB_INTE_HOST_RESUME_MSB, 1
.equ	USB_INTE_HOST_RESUME_LSB, 1
# -----------------------------------------------------------------------------
# Field       : USB_INTE_HOST_CONN_DIS
# Description : Host: raised when a device is connected or disconnected (i.e.
#               when SIE_STATUS.SPEED changes). Cleared by writing to
#               SIE_STATUS.SPEED
.equ	USB_INTE_HOST_CONN_DIS_RESET, 0x0
.equ	USB_INTE_HOST_CONN_DIS_BITS, 0x00000001
.equ	USB_INTE_HOST_CONN_DIS_MSB, 0
.equ	USB_INTE_HOST_CONN_DIS_LSB, 0
# =============================================================================
# Register    : USB_INTF
# Description : Interrupt Force
.equ	USB_INTF_OFFSET, 0x00000094
.equ	USB_INTF_BITS, 0x00ffffff
.equ	USB_INTF_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_INTF_EPX_STOPPED_ON_NAK
# Description : Source: NAK_POLL.EPX_STOPPED_ON_NAK
.equ	USB_INTF_EPX_STOPPED_ON_NAK_RESET, 0x0
.equ	USB_INTF_EPX_STOPPED_ON_NAK_BITS, 0x00800000
.equ	USB_INTF_EPX_STOPPED_ON_NAK_MSB, 23
.equ	USB_INTF_EPX_STOPPED_ON_NAK_LSB, 23
# -----------------------------------------------------------------------------
# Field       : USB_INTF_DEV_SM_WATCHDOG_FIRED
# Description : Source: DEV_SM_WATCHDOG.FIRED
.equ	USB_INTF_DEV_SM_WATCHDOG_FIRED_RESET, 0x0
.equ	USB_INTF_DEV_SM_WATCHDOG_FIRED_BITS, 0x00400000
.equ	USB_INTF_DEV_SM_WATCHDOG_FIRED_MSB, 22
.equ	USB_INTF_DEV_SM_WATCHDOG_FIRED_LSB, 22
# -----------------------------------------------------------------------------
# Field       : USB_INTF_ENDPOINT_ERROR
# Description : Source: SIE_STATUS.ENDPOINT_ERROR
.equ	USB_INTF_ENDPOINT_ERROR_RESET, 0x0
.equ	USB_INTF_ENDPOINT_ERROR_BITS, 0x00200000
.equ	USB_INTF_ENDPOINT_ERROR_MSB, 21
.equ	USB_INTF_ENDPOINT_ERROR_LSB, 21
# -----------------------------------------------------------------------------
# Field       : USB_INTF_RX_SHORT_PACKET
# Description : Source: SIE_STATUS.RX_SHORT_PACKET
.equ	USB_INTF_RX_SHORT_PACKET_RESET, 0x0
.equ	USB_INTF_RX_SHORT_PACKET_BITS, 0x00100000
.equ	USB_INTF_RX_SHORT_PACKET_MSB, 20
.equ	USB_INTF_RX_SHORT_PACKET_LSB, 20
# -----------------------------------------------------------------------------
# Field       : USB_INTF_EP_STALL_NAK
# Description : Raised when any bit in EP_STATUS_STALL_NAK is set. Clear by
#               clearing all bits in EP_STATUS_STALL_NAK.
.equ	USB_INTF_EP_STALL_NAK_RESET, 0x0
.equ	USB_INTF_EP_STALL_NAK_BITS, 0x00080000
.equ	USB_INTF_EP_STALL_NAK_MSB, 19
.equ	USB_INTF_EP_STALL_NAK_LSB, 19
# -----------------------------------------------------------------------------
# Field       : USB_INTF_ABORT_DONE
# Description : Raised when any bit in ABORT_DONE is set. Clear by clearing all
#               bits in ABORT_DONE.
.equ	USB_INTF_ABORT_DONE_RESET, 0x0
.equ	USB_INTF_ABORT_DONE_BITS, 0x00040000
.equ	USB_INTF_ABORT_DONE_MSB, 18
.equ	USB_INTF_ABORT_DONE_LSB, 18
# -----------------------------------------------------------------------------
# Field       : USB_INTF_DEV_SOF
# Description : Set every time the device receives a SOF (Start of Frame)
#               packet. Cleared by reading SOF_RD
.equ	USB_INTF_DEV_SOF_RESET, 0x0
.equ	USB_INTF_DEV_SOF_BITS, 0x00020000
.equ	USB_INTF_DEV_SOF_MSB, 17
.equ	USB_INTF_DEV_SOF_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_INTF_SETUP_REQ
# Description : Device. Source: SIE_STATUS.SETUP_REC
.equ	USB_INTF_SETUP_REQ_RESET, 0x0
.equ	USB_INTF_SETUP_REQ_BITS, 0x00010000
.equ	USB_INTF_SETUP_REQ_MSB, 16
.equ	USB_INTF_SETUP_REQ_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_INTF_DEV_RESUME_FROM_HOST
# Description : Set when the device receives a resume from the host. Cleared by
#               writing to SIE_STATUS.RESUME
.equ	USB_INTF_DEV_RESUME_FROM_HOST_RESET, 0x0
.equ	USB_INTF_DEV_RESUME_FROM_HOST_BITS, 0x00008000
.equ	USB_INTF_DEV_RESUME_FROM_HOST_MSB, 15
.equ	USB_INTF_DEV_RESUME_FROM_HOST_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_INTF_DEV_SUSPEND
# Description : Set when the device suspend state changes. Cleared by writing
#               to SIE_STATUS.SUSPENDED
.equ	USB_INTF_DEV_SUSPEND_RESET, 0x0
.equ	USB_INTF_DEV_SUSPEND_BITS, 0x00004000
.equ	USB_INTF_DEV_SUSPEND_MSB, 14
.equ	USB_INTF_DEV_SUSPEND_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_INTF_DEV_CONN_DIS
# Description : Set when the device connection state changes. Cleared by
#               writing to SIE_STATUS.CONNECTED
.equ	USB_INTF_DEV_CONN_DIS_RESET, 0x0
.equ	USB_INTF_DEV_CONN_DIS_BITS, 0x00002000
.equ	USB_INTF_DEV_CONN_DIS_MSB, 13
.equ	USB_INTF_DEV_CONN_DIS_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_INTF_BUS_RESET
# Description : Source: SIE_STATUS.BUS_RESET
.equ	USB_INTF_BUS_RESET_RESET, 0x0
.equ	USB_INTF_BUS_RESET_BITS, 0x00001000
.equ	USB_INTF_BUS_RESET_MSB, 12
.equ	USB_INTF_BUS_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_INTF_VBUS_DETECT
# Description : Source: SIE_STATUS.VBUS_DETECTED
.equ	USB_INTF_VBUS_DETECT_RESET, 0x0
.equ	USB_INTF_VBUS_DETECT_BITS, 0x00000800
.equ	USB_INTF_VBUS_DETECT_MSB, 11
.equ	USB_INTF_VBUS_DETECT_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_INTF_STALL
# Description : Source: SIE_STATUS.STALL_REC
.equ	USB_INTF_STALL_RESET, 0x0
.equ	USB_INTF_STALL_BITS, 0x00000400
.equ	USB_INTF_STALL_MSB, 10
.equ	USB_INTF_STALL_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_INTF_ERROR_CRC
# Description : Source: SIE_STATUS.CRC_ERROR
.equ	USB_INTF_ERROR_CRC_RESET, 0x0
.equ	USB_INTF_ERROR_CRC_BITS, 0x00000200
.equ	USB_INTF_ERROR_CRC_MSB, 9
.equ	USB_INTF_ERROR_CRC_LSB, 9
# -----------------------------------------------------------------------------
# Field       : USB_INTF_ERROR_BIT_STUFF
# Description : Source: SIE_STATUS.BIT_STUFF_ERROR
.equ	USB_INTF_ERROR_BIT_STUFF_RESET, 0x0
.equ	USB_INTF_ERROR_BIT_STUFF_BITS, 0x00000100
.equ	USB_INTF_ERROR_BIT_STUFF_MSB, 8
.equ	USB_INTF_ERROR_BIT_STUFF_LSB, 8
# -----------------------------------------------------------------------------
# Field       : USB_INTF_ERROR_RX_OVERFLOW
# Description : Source: SIE_STATUS.RX_OVERFLOW
.equ	USB_INTF_ERROR_RX_OVERFLOW_RESET, 0x0
.equ	USB_INTF_ERROR_RX_OVERFLOW_BITS, 0x00000080
.equ	USB_INTF_ERROR_RX_OVERFLOW_MSB, 7
.equ	USB_INTF_ERROR_RX_OVERFLOW_LSB, 7
# -----------------------------------------------------------------------------
# Field       : USB_INTF_ERROR_RX_TIMEOUT
# Description : Source: SIE_STATUS.RX_TIMEOUT
.equ	USB_INTF_ERROR_RX_TIMEOUT_RESET, 0x0
.equ	USB_INTF_ERROR_RX_TIMEOUT_BITS, 0x00000040
.equ	USB_INTF_ERROR_RX_TIMEOUT_MSB, 6
.equ	USB_INTF_ERROR_RX_TIMEOUT_LSB, 6
# -----------------------------------------------------------------------------
# Field       : USB_INTF_ERROR_DATA_SEQ
# Description : Source: SIE_STATUS.DATA_SEQ_ERROR
.equ	USB_INTF_ERROR_DATA_SEQ_RESET, 0x0
.equ	USB_INTF_ERROR_DATA_SEQ_BITS, 0x00000020
.equ	USB_INTF_ERROR_DATA_SEQ_MSB, 5
.equ	USB_INTF_ERROR_DATA_SEQ_LSB, 5
# -----------------------------------------------------------------------------
# Field       : USB_INTF_BUFF_STATUS
# Description : Raised when any bit in BUFF_STATUS is set. Clear by clearing
#               all bits in BUFF_STATUS.
.equ	USB_INTF_BUFF_STATUS_RESET, 0x0
.equ	USB_INTF_BUFF_STATUS_BITS, 0x00000010
.equ	USB_INTF_BUFF_STATUS_MSB, 4
.equ	USB_INTF_BUFF_STATUS_LSB, 4
# -----------------------------------------------------------------------------
# Field       : USB_INTF_TRANS_COMPLETE
# Description : Raised every time SIE_STATUS.TRANS_COMPLETE is set. Clear by
#               writing to this bit.
.equ	USB_INTF_TRANS_COMPLETE_RESET, 0x0
.equ	USB_INTF_TRANS_COMPLETE_BITS, 0x00000008
.equ	USB_INTF_TRANS_COMPLETE_MSB, 3
.equ	USB_INTF_TRANS_COMPLETE_LSB, 3
# -----------------------------------------------------------------------------
# Field       : USB_INTF_HOST_SOF
# Description : Host: raised every time the host sends a SOF (Start of Frame).
#               Cleared by reading SOF_RD
.equ	USB_INTF_HOST_SOF_RESET, 0x0
.equ	USB_INTF_HOST_SOF_BITS, 0x00000004
.equ	USB_INTF_HOST_SOF_MSB, 2
.equ	USB_INTF_HOST_SOF_LSB, 2
# -----------------------------------------------------------------------------
# Field       : USB_INTF_HOST_RESUME
# Description : Host: raised when a device wakes up the host. Cleared by
#               writing to SIE_STATUS.RESUME
.equ	USB_INTF_HOST_RESUME_RESET, 0x0
.equ	USB_INTF_HOST_RESUME_BITS, 0x00000002
.equ	USB_INTF_HOST_RESUME_MSB, 1
.equ	USB_INTF_HOST_RESUME_LSB, 1
# -----------------------------------------------------------------------------
# Field       : USB_INTF_HOST_CONN_DIS
# Description : Host: raised when a device is connected or disconnected (i.e.
#               when SIE_STATUS.SPEED changes). Cleared by writing to
#               SIE_STATUS.SPEED
.equ	USB_INTF_HOST_CONN_DIS_RESET, 0x0
.equ	USB_INTF_HOST_CONN_DIS_BITS, 0x00000001
.equ	USB_INTF_HOST_CONN_DIS_MSB, 0
.equ	USB_INTF_HOST_CONN_DIS_LSB, 0
# =============================================================================
# Register    : USB_INTS
# Description : Interrupt status after masking & forcing
.equ	USB_INTS_OFFSET, 0x00000098
.equ	USB_INTS_BITS, 0x00ffffff
.equ	USB_INTS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_INTS_EPX_STOPPED_ON_NAK
# Description : Source: NAK_POLL.EPX_STOPPED_ON_NAK
.equ	USB_INTS_EPX_STOPPED_ON_NAK_RESET, 0x0
.equ	USB_INTS_EPX_STOPPED_ON_NAK_BITS, 0x00800000
.equ	USB_INTS_EPX_STOPPED_ON_NAK_MSB, 23
.equ	USB_INTS_EPX_STOPPED_ON_NAK_LSB, 23
# -----------------------------------------------------------------------------
# Field       : USB_INTS_DEV_SM_WATCHDOG_FIRED
# Description : Source: DEV_SM_WATCHDOG.FIRED
.equ	USB_INTS_DEV_SM_WATCHDOG_FIRED_RESET, 0x0
.equ	USB_INTS_DEV_SM_WATCHDOG_FIRED_BITS, 0x00400000
.equ	USB_INTS_DEV_SM_WATCHDOG_FIRED_MSB, 22
.equ	USB_INTS_DEV_SM_WATCHDOG_FIRED_LSB, 22
# -----------------------------------------------------------------------------
# Field       : USB_INTS_ENDPOINT_ERROR
# Description : Source: SIE_STATUS.ENDPOINT_ERROR
.equ	USB_INTS_ENDPOINT_ERROR_RESET, 0x0
.equ	USB_INTS_ENDPOINT_ERROR_BITS, 0x00200000
.equ	USB_INTS_ENDPOINT_ERROR_MSB, 21
.equ	USB_INTS_ENDPOINT_ERROR_LSB, 21
# -----------------------------------------------------------------------------
# Field       : USB_INTS_RX_SHORT_PACKET
# Description : Source: SIE_STATUS.RX_SHORT_PACKET
.equ	USB_INTS_RX_SHORT_PACKET_RESET, 0x0
.equ	USB_INTS_RX_SHORT_PACKET_BITS, 0x00100000
.equ	USB_INTS_RX_SHORT_PACKET_MSB, 20
.equ	USB_INTS_RX_SHORT_PACKET_LSB, 20
# -----------------------------------------------------------------------------
# Field       : USB_INTS_EP_STALL_NAK
# Description : Raised when any bit in EP_STATUS_STALL_NAK is set. Clear by
#               clearing all bits in EP_STATUS_STALL_NAK.
.equ	USB_INTS_EP_STALL_NAK_RESET, 0x0
.equ	USB_INTS_EP_STALL_NAK_BITS, 0x00080000
.equ	USB_INTS_EP_STALL_NAK_MSB, 19
.equ	USB_INTS_EP_STALL_NAK_LSB, 19
# -----------------------------------------------------------------------------
# Field       : USB_INTS_ABORT_DONE
# Description : Raised when any bit in ABORT_DONE is set. Clear by clearing all
#               bits in ABORT_DONE.
.equ	USB_INTS_ABORT_DONE_RESET, 0x0
.equ	USB_INTS_ABORT_DONE_BITS, 0x00040000
.equ	USB_INTS_ABORT_DONE_MSB, 18
.equ	USB_INTS_ABORT_DONE_LSB, 18
# -----------------------------------------------------------------------------
# Field       : USB_INTS_DEV_SOF
# Description : Set every time the device receives a SOF (Start of Frame)
#               packet. Cleared by reading SOF_RD
.equ	USB_INTS_DEV_SOF_RESET, 0x0
.equ	USB_INTS_DEV_SOF_BITS, 0x00020000
.equ	USB_INTS_DEV_SOF_MSB, 17
.equ	USB_INTS_DEV_SOF_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_INTS_SETUP_REQ
# Description : Device. Source: SIE_STATUS.SETUP_REC
.equ	USB_INTS_SETUP_REQ_RESET, 0x0
.equ	USB_INTS_SETUP_REQ_BITS, 0x00010000
.equ	USB_INTS_SETUP_REQ_MSB, 16
.equ	USB_INTS_SETUP_REQ_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_INTS_DEV_RESUME_FROM_HOST
# Description : Set when the device receives a resume from the host. Cleared by
#               writing to SIE_STATUS.RESUME
.equ	USB_INTS_DEV_RESUME_FROM_HOST_RESET, 0x0
.equ	USB_INTS_DEV_RESUME_FROM_HOST_BITS, 0x00008000
.equ	USB_INTS_DEV_RESUME_FROM_HOST_MSB, 15
.equ	USB_INTS_DEV_RESUME_FROM_HOST_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_INTS_DEV_SUSPEND
# Description : Set when the device suspend state changes. Cleared by writing
#               to SIE_STATUS.SUSPENDED
.equ	USB_INTS_DEV_SUSPEND_RESET, 0x0
.equ	USB_INTS_DEV_SUSPEND_BITS, 0x00004000
.equ	USB_INTS_DEV_SUSPEND_MSB, 14
.equ	USB_INTS_DEV_SUSPEND_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_INTS_DEV_CONN_DIS
# Description : Set when the device connection state changes. Cleared by
#               writing to SIE_STATUS.CONNECTED
.equ	USB_INTS_DEV_CONN_DIS_RESET, 0x0
.equ	USB_INTS_DEV_CONN_DIS_BITS, 0x00002000
.equ	USB_INTS_DEV_CONN_DIS_MSB, 13
.equ	USB_INTS_DEV_CONN_DIS_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_INTS_BUS_RESET
# Description : Source: SIE_STATUS.BUS_RESET
.equ	USB_INTS_BUS_RESET_RESET, 0x0
.equ	USB_INTS_BUS_RESET_BITS, 0x00001000
.equ	USB_INTS_BUS_RESET_MSB, 12
.equ	USB_INTS_BUS_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_INTS_VBUS_DETECT
# Description : Source: SIE_STATUS.VBUS_DETECTED
.equ	USB_INTS_VBUS_DETECT_RESET, 0x0
.equ	USB_INTS_VBUS_DETECT_BITS, 0x00000800
.equ	USB_INTS_VBUS_DETECT_MSB, 11
.equ	USB_INTS_VBUS_DETECT_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_INTS_STALL
# Description : Source: SIE_STATUS.STALL_REC
.equ	USB_INTS_STALL_RESET, 0x0
.equ	USB_INTS_STALL_BITS, 0x00000400
.equ	USB_INTS_STALL_MSB, 10
.equ	USB_INTS_STALL_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_INTS_ERROR_CRC
# Description : Source: SIE_STATUS.CRC_ERROR
.equ	USB_INTS_ERROR_CRC_RESET, 0x0
.equ	USB_INTS_ERROR_CRC_BITS, 0x00000200
.equ	USB_INTS_ERROR_CRC_MSB, 9
.equ	USB_INTS_ERROR_CRC_LSB, 9
# -----------------------------------------------------------------------------
# Field       : USB_INTS_ERROR_BIT_STUFF
# Description : Source: SIE_STATUS.BIT_STUFF_ERROR
.equ	USB_INTS_ERROR_BIT_STUFF_RESET, 0x0
.equ	USB_INTS_ERROR_BIT_STUFF_BITS, 0x00000100
.equ	USB_INTS_ERROR_BIT_STUFF_MSB, 8
.equ	USB_INTS_ERROR_BIT_STUFF_LSB, 8
# -----------------------------------------------------------------------------
# Field       : USB_INTS_ERROR_RX_OVERFLOW
# Description : Source: SIE_STATUS.RX_OVERFLOW
.equ	USB_INTS_ERROR_RX_OVERFLOW_RESET, 0x0
.equ	USB_INTS_ERROR_RX_OVERFLOW_BITS, 0x00000080
.equ	USB_INTS_ERROR_RX_OVERFLOW_MSB, 7
.equ	USB_INTS_ERROR_RX_OVERFLOW_LSB, 7
# -----------------------------------------------------------------------------
# Field       : USB_INTS_ERROR_RX_TIMEOUT
# Description : Source: SIE_STATUS.RX_TIMEOUT
.equ	USB_INTS_ERROR_RX_TIMEOUT_RESET, 0x0
.equ	USB_INTS_ERROR_RX_TIMEOUT_BITS, 0x00000040
.equ	USB_INTS_ERROR_RX_TIMEOUT_MSB, 6
.equ	USB_INTS_ERROR_RX_TIMEOUT_LSB, 6
# -----------------------------------------------------------------------------
# Field       : USB_INTS_ERROR_DATA_SEQ
# Description : Source: SIE_STATUS.DATA_SEQ_ERROR
.equ	USB_INTS_ERROR_DATA_SEQ_RESET, 0x0
.equ	USB_INTS_ERROR_DATA_SEQ_BITS, 0x00000020
.equ	USB_INTS_ERROR_DATA_SEQ_MSB, 5
.equ	USB_INTS_ERROR_DATA_SEQ_LSB, 5
# -----------------------------------------------------------------------------
# Field       : USB_INTS_BUFF_STATUS
# Description : Raised when any bit in BUFF_STATUS is set. Clear by clearing
#               all bits in BUFF_STATUS.
.equ	USB_INTS_BUFF_STATUS_RESET, 0x0
.equ	USB_INTS_BUFF_STATUS_BITS, 0x00000010
.equ	USB_INTS_BUFF_STATUS_MSB, 4
.equ	USB_INTS_BUFF_STATUS_LSB, 4
# -----------------------------------------------------------------------------
# Field       : USB_INTS_TRANS_COMPLETE
# Description : Raised every time SIE_STATUS.TRANS_COMPLETE is set. Clear by
#               writing to this bit.
.equ	USB_INTS_TRANS_COMPLETE_RESET, 0x0
.equ	USB_INTS_TRANS_COMPLETE_BITS, 0x00000008
.equ	USB_INTS_TRANS_COMPLETE_MSB, 3
.equ	USB_INTS_TRANS_COMPLETE_LSB, 3
# -----------------------------------------------------------------------------
# Field       : USB_INTS_HOST_SOF
# Description : Host: raised every time the host sends a SOF (Start of Frame).
#               Cleared by reading SOF_RD
.equ	USB_INTS_HOST_SOF_RESET, 0x0
.equ	USB_INTS_HOST_SOF_BITS, 0x00000004
.equ	USB_INTS_HOST_SOF_MSB, 2
.equ	USB_INTS_HOST_SOF_LSB, 2
# -----------------------------------------------------------------------------
# Field       : USB_INTS_HOST_RESUME
# Description : Host: raised when a device wakes up the host. Cleared by
#               writing to SIE_STATUS.RESUME
.equ	USB_INTS_HOST_RESUME_RESET, 0x0
.equ	USB_INTS_HOST_RESUME_BITS, 0x00000002
.equ	USB_INTS_HOST_RESUME_MSB, 1
.equ	USB_INTS_HOST_RESUME_LSB, 1
# -----------------------------------------------------------------------------
# Field       : USB_INTS_HOST_CONN_DIS
# Description : Host: raised when a device is connected or disconnected (i.e.
#               when SIE_STATUS.SPEED changes). Cleared by writing to
#               SIE_STATUS.SPEED
.equ	USB_INTS_HOST_CONN_DIS_RESET, 0x0
.equ	USB_INTS_HOST_CONN_DIS_BITS, 0x00000001
.equ	USB_INTS_HOST_CONN_DIS_MSB, 0
.equ	USB_INTS_HOST_CONN_DIS_LSB, 0
# =============================================================================
# Register    : USB_SOF_TIMESTAMP_RAW
# Description : Device only. Raw value of free-running PHY clock counter
#               @48MHz. Used to calculate time between SOF events.
.equ	USB_SOF_TIMESTAMP_RAW_OFFSET, 0x00000100
.equ	USB_SOF_TIMESTAMP_RAW_BITS, 0x001fffff
.equ	USB_SOF_TIMESTAMP_RAW_RESET, 0x00000000
.equ	USB_SOF_TIMESTAMP_RAW_MSB, 20
.equ	USB_SOF_TIMESTAMP_RAW_LSB, 0
# =============================================================================
# Register    : USB_SOF_TIMESTAMP_LAST
# Description : Device only. Value of free-running PHY clock counter @48MHz
#               when last SOF event occurred.
.equ	USB_SOF_TIMESTAMP_LAST_OFFSET, 0x00000104
.equ	USB_SOF_TIMESTAMP_LAST_BITS, 0x001fffff
.equ	USB_SOF_TIMESTAMP_LAST_RESET, 0x00000000
.equ	USB_SOF_TIMESTAMP_LAST_MSB, 20
.equ	USB_SOF_TIMESTAMP_LAST_LSB, 0
# =============================================================================
# Register    : USB_SM_STATE
.equ	USB_SM_STATE_OFFSET, 0x00000108
.equ	USB_SM_STATE_BITS, 0x00000fff
.equ	USB_SM_STATE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_SM_STATE_RX_DASM
.equ	USB_SM_STATE_RX_DASM_RESET, 0x0
.equ	USB_SM_STATE_RX_DASM_BITS, 0x00000f00
.equ	USB_SM_STATE_RX_DASM_MSB, 11
.equ	USB_SM_STATE_RX_DASM_LSB, 8
# -----------------------------------------------------------------------------
# Field       : USB_SM_STATE_BC_STATE
.equ	USB_SM_STATE_BC_STATE_RESET, 0x0
.equ	USB_SM_STATE_BC_STATE_BITS, 0x000000e0
.equ	USB_SM_STATE_BC_STATE_MSB, 7
.equ	USB_SM_STATE_BC_STATE_LSB, 5
# -----------------------------------------------------------------------------
# Field       : USB_SM_STATE_STATE
.equ	USB_SM_STATE_STATE_RESET, 0x00
.equ	USB_SM_STATE_STATE_BITS, 0x0000001f
.equ	USB_SM_STATE_STATE_MSB, 4
.equ	USB_SM_STATE_STATE_LSB, 0
# =============================================================================
# Register    : USB_EP_TX_ERROR
# Description : TX error count for each endpoint. Write to each field to reset
#               the counter to 0.
.equ	USB_EP_TX_ERROR_OFFSET, 0x0000010c
.equ	USB_EP_TX_ERROR_BITS, 0xffffffff
.equ	USB_EP_TX_ERROR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_EP_TX_ERROR_EP15
.equ	USB_EP_TX_ERROR_EP15_RESET, 0x0
.equ	USB_EP_TX_ERROR_EP15_BITS, 0xc0000000
.equ	USB_EP_TX_ERROR_EP15_MSB, 31
.equ	USB_EP_TX_ERROR_EP15_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_EP_TX_ERROR_EP14
.equ	USB_EP_TX_ERROR_EP14_RESET, 0x0
.equ	USB_EP_TX_ERROR_EP14_BITS, 0x30000000
.equ	USB_EP_TX_ERROR_EP14_MSB, 29
.equ	USB_EP_TX_ERROR_EP14_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_EP_TX_ERROR_EP13
.equ	USB_EP_TX_ERROR_EP13_RESET, 0x0
.equ	USB_EP_TX_ERROR_EP13_BITS, 0x0c000000
.equ	USB_EP_TX_ERROR_EP13_MSB, 27
.equ	USB_EP_TX_ERROR_EP13_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_EP_TX_ERROR_EP12
.equ	USB_EP_TX_ERROR_EP12_RESET, 0x0
.equ	USB_EP_TX_ERROR_EP12_BITS, 0x03000000
.equ	USB_EP_TX_ERROR_EP12_MSB, 25
.equ	USB_EP_TX_ERROR_EP12_LSB, 24
# -----------------------------------------------------------------------------
# Field       : USB_EP_TX_ERROR_EP11
.equ	USB_EP_TX_ERROR_EP11_RESET, 0x0
.equ	USB_EP_TX_ERROR_EP11_BITS, 0x00c00000
.equ	USB_EP_TX_ERROR_EP11_MSB, 23
.equ	USB_EP_TX_ERROR_EP11_LSB, 22
# -----------------------------------------------------------------------------
# Field       : USB_EP_TX_ERROR_EP10
.equ	USB_EP_TX_ERROR_EP10_RESET, 0x0
.equ	USB_EP_TX_ERROR_EP10_BITS, 0x00300000
.equ	USB_EP_TX_ERROR_EP10_MSB, 21
.equ	USB_EP_TX_ERROR_EP10_LSB, 20
# -----------------------------------------------------------------------------
# Field       : USB_EP_TX_ERROR_EP9
.equ	USB_EP_TX_ERROR_EP9_RESET, 0x0
.equ	USB_EP_TX_ERROR_EP9_BITS, 0x000c0000
.equ	USB_EP_TX_ERROR_EP9_MSB, 19
.equ	USB_EP_TX_ERROR_EP9_LSB, 18
# -----------------------------------------------------------------------------
# Field       : USB_EP_TX_ERROR_EP8
.equ	USB_EP_TX_ERROR_EP8_RESET, 0x0
.equ	USB_EP_TX_ERROR_EP8_BITS, 0x00030000
.equ	USB_EP_TX_ERROR_EP8_MSB, 17
.equ	USB_EP_TX_ERROR_EP8_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_EP_TX_ERROR_EP7
.equ	USB_EP_TX_ERROR_EP7_RESET, 0x0
.equ	USB_EP_TX_ERROR_EP7_BITS, 0x0000c000
.equ	USB_EP_TX_ERROR_EP7_MSB, 15
.equ	USB_EP_TX_ERROR_EP7_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_EP_TX_ERROR_EP6
.equ	USB_EP_TX_ERROR_EP6_RESET, 0x0
.equ	USB_EP_TX_ERROR_EP6_BITS, 0x00003000
.equ	USB_EP_TX_ERROR_EP6_MSB, 13
.equ	USB_EP_TX_ERROR_EP6_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_EP_TX_ERROR_EP5
.equ	USB_EP_TX_ERROR_EP5_RESET, 0x0
.equ	USB_EP_TX_ERROR_EP5_BITS, 0x00000c00
.equ	USB_EP_TX_ERROR_EP5_MSB, 11
.equ	USB_EP_TX_ERROR_EP5_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_EP_TX_ERROR_EP4
.equ	USB_EP_TX_ERROR_EP4_RESET, 0x0
.equ	USB_EP_TX_ERROR_EP4_BITS, 0x00000300
.equ	USB_EP_TX_ERROR_EP4_MSB, 9
.equ	USB_EP_TX_ERROR_EP4_LSB, 8
# -----------------------------------------------------------------------------
# Field       : USB_EP_TX_ERROR_EP3
.equ	USB_EP_TX_ERROR_EP3_RESET, 0x0
.equ	USB_EP_TX_ERROR_EP3_BITS, 0x000000c0
.equ	USB_EP_TX_ERROR_EP3_MSB, 7
.equ	USB_EP_TX_ERROR_EP3_LSB, 6
# -----------------------------------------------------------------------------
# Field       : USB_EP_TX_ERROR_EP2
.equ	USB_EP_TX_ERROR_EP2_RESET, 0x0
.equ	USB_EP_TX_ERROR_EP2_BITS, 0x00000030
.equ	USB_EP_TX_ERROR_EP2_MSB, 5
.equ	USB_EP_TX_ERROR_EP2_LSB, 4
# -----------------------------------------------------------------------------
# Field       : USB_EP_TX_ERROR_EP1
.equ	USB_EP_TX_ERROR_EP1_RESET, 0x0
.equ	USB_EP_TX_ERROR_EP1_BITS, 0x0000000c
.equ	USB_EP_TX_ERROR_EP1_MSB, 3
.equ	USB_EP_TX_ERROR_EP1_LSB, 2
# -----------------------------------------------------------------------------
# Field       : USB_EP_TX_ERROR_EP0
.equ	USB_EP_TX_ERROR_EP0_RESET, 0x0
.equ	USB_EP_TX_ERROR_EP0_BITS, 0x00000003
.equ	USB_EP_TX_ERROR_EP0_MSB, 1
.equ	USB_EP_TX_ERROR_EP0_LSB, 0
# =============================================================================
# Register    : USB_EP_RX_ERROR
# Description : RX error count for each endpoint. Write to each field to reset
#               the counter to 0.
.equ	USB_EP_RX_ERROR_OFFSET, 0x00000110
.equ	USB_EP_RX_ERROR_BITS, 0xffffffff
.equ	USB_EP_RX_ERROR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP15_SEQ
.equ	USB_EP_RX_ERROR_EP15_SEQ_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP15_SEQ_BITS, 0x80000000
.equ	USB_EP_RX_ERROR_EP15_SEQ_MSB, 31
.equ	USB_EP_RX_ERROR_EP15_SEQ_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP15_TRANSACTION
.equ	USB_EP_RX_ERROR_EP15_TRANSACTION_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP15_TRANSACTION_BITS, 0x40000000
.equ	USB_EP_RX_ERROR_EP15_TRANSACTION_MSB, 30
.equ	USB_EP_RX_ERROR_EP15_TRANSACTION_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP14_SEQ
.equ	USB_EP_RX_ERROR_EP14_SEQ_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP14_SEQ_BITS, 0x20000000
.equ	USB_EP_RX_ERROR_EP14_SEQ_MSB, 29
.equ	USB_EP_RX_ERROR_EP14_SEQ_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP14_TRANSACTION
.equ	USB_EP_RX_ERROR_EP14_TRANSACTION_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP14_TRANSACTION_BITS, 0x10000000
.equ	USB_EP_RX_ERROR_EP14_TRANSACTION_MSB, 28
.equ	USB_EP_RX_ERROR_EP14_TRANSACTION_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP13_SEQ
.equ	USB_EP_RX_ERROR_EP13_SEQ_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP13_SEQ_BITS, 0x08000000
.equ	USB_EP_RX_ERROR_EP13_SEQ_MSB, 27
.equ	USB_EP_RX_ERROR_EP13_SEQ_LSB, 27
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP13_TRANSACTION
.equ	USB_EP_RX_ERROR_EP13_TRANSACTION_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP13_TRANSACTION_BITS, 0x04000000
.equ	USB_EP_RX_ERROR_EP13_TRANSACTION_MSB, 26
.equ	USB_EP_RX_ERROR_EP13_TRANSACTION_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP12_SEQ
.equ	USB_EP_RX_ERROR_EP12_SEQ_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP12_SEQ_BITS, 0x02000000
.equ	USB_EP_RX_ERROR_EP12_SEQ_MSB, 25
.equ	USB_EP_RX_ERROR_EP12_SEQ_LSB, 25
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP12_TRANSACTION
.equ	USB_EP_RX_ERROR_EP12_TRANSACTION_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP12_TRANSACTION_BITS, 0x01000000
.equ	USB_EP_RX_ERROR_EP12_TRANSACTION_MSB, 24
.equ	USB_EP_RX_ERROR_EP12_TRANSACTION_LSB, 24
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP11_SEQ
.equ	USB_EP_RX_ERROR_EP11_SEQ_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP11_SEQ_BITS, 0x00800000
.equ	USB_EP_RX_ERROR_EP11_SEQ_MSB, 23
.equ	USB_EP_RX_ERROR_EP11_SEQ_LSB, 23
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP11_TRANSACTION
.equ	USB_EP_RX_ERROR_EP11_TRANSACTION_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP11_TRANSACTION_BITS, 0x00400000
.equ	USB_EP_RX_ERROR_EP11_TRANSACTION_MSB, 22
.equ	USB_EP_RX_ERROR_EP11_TRANSACTION_LSB, 22
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP10_SEQ
.equ	USB_EP_RX_ERROR_EP10_SEQ_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP10_SEQ_BITS, 0x00200000
.equ	USB_EP_RX_ERROR_EP10_SEQ_MSB, 21
.equ	USB_EP_RX_ERROR_EP10_SEQ_LSB, 21
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP10_TRANSACTION
.equ	USB_EP_RX_ERROR_EP10_TRANSACTION_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP10_TRANSACTION_BITS, 0x00100000
.equ	USB_EP_RX_ERROR_EP10_TRANSACTION_MSB, 20
.equ	USB_EP_RX_ERROR_EP10_TRANSACTION_LSB, 20
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP9_SEQ
.equ	USB_EP_RX_ERROR_EP9_SEQ_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP9_SEQ_BITS, 0x00080000
.equ	USB_EP_RX_ERROR_EP9_SEQ_MSB, 19
.equ	USB_EP_RX_ERROR_EP9_SEQ_LSB, 19
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP9_TRANSACTION
.equ	USB_EP_RX_ERROR_EP9_TRANSACTION_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP9_TRANSACTION_BITS, 0x00040000
.equ	USB_EP_RX_ERROR_EP9_TRANSACTION_MSB, 18
.equ	USB_EP_RX_ERROR_EP9_TRANSACTION_LSB, 18
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP8_SEQ
.equ	USB_EP_RX_ERROR_EP8_SEQ_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP8_SEQ_BITS, 0x00020000
.equ	USB_EP_RX_ERROR_EP8_SEQ_MSB, 17
.equ	USB_EP_RX_ERROR_EP8_SEQ_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP8_TRANSACTION
.equ	USB_EP_RX_ERROR_EP8_TRANSACTION_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP8_TRANSACTION_BITS, 0x00010000
.equ	USB_EP_RX_ERROR_EP8_TRANSACTION_MSB, 16
.equ	USB_EP_RX_ERROR_EP8_TRANSACTION_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP7_SEQ
.equ	USB_EP_RX_ERROR_EP7_SEQ_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP7_SEQ_BITS, 0x00008000
.equ	USB_EP_RX_ERROR_EP7_SEQ_MSB, 15
.equ	USB_EP_RX_ERROR_EP7_SEQ_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP7_TRANSACTION
.equ	USB_EP_RX_ERROR_EP7_TRANSACTION_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP7_TRANSACTION_BITS, 0x00004000
.equ	USB_EP_RX_ERROR_EP7_TRANSACTION_MSB, 14
.equ	USB_EP_RX_ERROR_EP7_TRANSACTION_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP6_SEQ
.equ	USB_EP_RX_ERROR_EP6_SEQ_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP6_SEQ_BITS, 0x00002000
.equ	USB_EP_RX_ERROR_EP6_SEQ_MSB, 13
.equ	USB_EP_RX_ERROR_EP6_SEQ_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP6_TRANSACTION
.equ	USB_EP_RX_ERROR_EP6_TRANSACTION_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP6_TRANSACTION_BITS, 0x00001000
.equ	USB_EP_RX_ERROR_EP6_TRANSACTION_MSB, 12
.equ	USB_EP_RX_ERROR_EP6_TRANSACTION_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP5_SEQ
.equ	USB_EP_RX_ERROR_EP5_SEQ_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP5_SEQ_BITS, 0x00000800
.equ	USB_EP_RX_ERROR_EP5_SEQ_MSB, 11
.equ	USB_EP_RX_ERROR_EP5_SEQ_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP5_TRANSACTION
.equ	USB_EP_RX_ERROR_EP5_TRANSACTION_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP5_TRANSACTION_BITS, 0x00000400
.equ	USB_EP_RX_ERROR_EP5_TRANSACTION_MSB, 10
.equ	USB_EP_RX_ERROR_EP5_TRANSACTION_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP4_SEQ
.equ	USB_EP_RX_ERROR_EP4_SEQ_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP4_SEQ_BITS, 0x00000200
.equ	USB_EP_RX_ERROR_EP4_SEQ_MSB, 9
.equ	USB_EP_RX_ERROR_EP4_SEQ_LSB, 9
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP4_TRANSACTION
.equ	USB_EP_RX_ERROR_EP4_TRANSACTION_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP4_TRANSACTION_BITS, 0x00000100
.equ	USB_EP_RX_ERROR_EP4_TRANSACTION_MSB, 8
.equ	USB_EP_RX_ERROR_EP4_TRANSACTION_LSB, 8
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP3_SEQ
.equ	USB_EP_RX_ERROR_EP3_SEQ_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP3_SEQ_BITS, 0x00000080
.equ	USB_EP_RX_ERROR_EP3_SEQ_MSB, 7
.equ	USB_EP_RX_ERROR_EP3_SEQ_LSB, 7
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP3_TRANSACTION
.equ	USB_EP_RX_ERROR_EP3_TRANSACTION_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP3_TRANSACTION_BITS, 0x00000040
.equ	USB_EP_RX_ERROR_EP3_TRANSACTION_MSB, 6
.equ	USB_EP_RX_ERROR_EP3_TRANSACTION_LSB, 6
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP2_SEQ
.equ	USB_EP_RX_ERROR_EP2_SEQ_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP2_SEQ_BITS, 0x00000020
.equ	USB_EP_RX_ERROR_EP2_SEQ_MSB, 5
.equ	USB_EP_RX_ERROR_EP2_SEQ_LSB, 5
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP2_TRANSACTION
.equ	USB_EP_RX_ERROR_EP2_TRANSACTION_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP2_TRANSACTION_BITS, 0x00000010
.equ	USB_EP_RX_ERROR_EP2_TRANSACTION_MSB, 4
.equ	USB_EP_RX_ERROR_EP2_TRANSACTION_LSB, 4
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP1_SEQ
.equ	USB_EP_RX_ERROR_EP1_SEQ_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP1_SEQ_BITS, 0x00000008
.equ	USB_EP_RX_ERROR_EP1_SEQ_MSB, 3
.equ	USB_EP_RX_ERROR_EP1_SEQ_LSB, 3
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP1_TRANSACTION
.equ	USB_EP_RX_ERROR_EP1_TRANSACTION_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP1_TRANSACTION_BITS, 0x00000004
.equ	USB_EP_RX_ERROR_EP1_TRANSACTION_MSB, 2
.equ	USB_EP_RX_ERROR_EP1_TRANSACTION_LSB, 2
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP0_SEQ
.equ	USB_EP_RX_ERROR_EP0_SEQ_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP0_SEQ_BITS, 0x00000002
.equ	USB_EP_RX_ERROR_EP0_SEQ_MSB, 1
.equ	USB_EP_RX_ERROR_EP0_SEQ_LSB, 1
# -----------------------------------------------------------------------------
# Field       : USB_EP_RX_ERROR_EP0_TRANSACTION
.equ	USB_EP_RX_ERROR_EP0_TRANSACTION_RESET, 0x0
.equ	USB_EP_RX_ERROR_EP0_TRANSACTION_BITS, 0x00000001
.equ	USB_EP_RX_ERROR_EP0_TRANSACTION_MSB, 0
.equ	USB_EP_RX_ERROR_EP0_TRANSACTION_LSB, 0
# =============================================================================
# Register    : USB_DEV_SM_WATCHDOG
# Description : Watchdog that forces the device state machine to idle and
#               raises an interrupt if the device stays in a state that isn't
#               idle for the configured limit. The counter is reset on every
#               state transition.
#               Set limit while enable is low and then set the enable.
.equ	USB_DEV_SM_WATCHDOG_OFFSET, 0x00000114
.equ	USB_DEV_SM_WATCHDOG_BITS, 0x001fffff
.equ	USB_DEV_SM_WATCHDOG_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEV_SM_WATCHDOG_FIRED
.equ	USB_DEV_SM_WATCHDOG_FIRED_RESET, 0x0
.equ	USB_DEV_SM_WATCHDOG_FIRED_BITS, 0x00100000
.equ	USB_DEV_SM_WATCHDOG_FIRED_MSB, 20
.equ	USB_DEV_SM_WATCHDOG_FIRED_LSB, 20
# -----------------------------------------------------------------------------
# Field       : USB_DEV_SM_WATCHDOG_RESET
# Description : Set to 1 to forcibly reset the device state machine on watchdog
#               expiry
.equ	USB_DEV_SM_WATCHDOG_RESET_RESET, 0x0
.equ	USB_DEV_SM_WATCHDOG_RESET_BITS, 0x00080000
.equ	USB_DEV_SM_WATCHDOG_RESET_MSB, 19
.equ	USB_DEV_SM_WATCHDOG_RESET_LSB, 19
# -----------------------------------------------------------------------------
# Field       : USB_DEV_SM_WATCHDOG_ENABLE
.equ	USB_DEV_SM_WATCHDOG_ENABLE_RESET, 0x0
.equ	USB_DEV_SM_WATCHDOG_ENABLE_BITS, 0x00040000
.equ	USB_DEV_SM_WATCHDOG_ENABLE_MSB, 18
.equ	USB_DEV_SM_WATCHDOG_ENABLE_LSB, 18
# -----------------------------------------------------------------------------
# Field       : USB_DEV_SM_WATCHDOG_LIMIT
.equ	USB_DEV_SM_WATCHDOG_LIMIT_RESET, 0x00000
.equ	USB_DEV_SM_WATCHDOG_LIMIT_BITS, 0x0003ffff
.equ	USB_DEV_SM_WATCHDOG_LIMIT_MSB, 17
.equ	USB_DEV_SM_WATCHDOG_LIMIT_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_USB_H
