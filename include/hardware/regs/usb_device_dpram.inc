#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : USB_DEVICE_DPRAM
# Version        : 1
# Bus type       : ahbl
# Description    : DPRAM layout for USB device.
# =============================================================================
.ifndef	_HARDWARE_REGS_USB_DEVICE_DPRAM_H
.set	_HARDWARE_REGS_USB_DEVICE_DPRAM_H, 1
# =============================================================================
# Register    : USB_DEVICE_DPRAM_SETUP_PACKET_LOW
# Description : Bytes 0-3 of the SETUP packet from the host.
.equ	USB_DEVICE_DPRAM_SETUP_PACKET_LOW_OFFSET, 0x00000000
.equ	USB_DEVICE_DPRAM_SETUP_PACKET_LOW_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_SETUP_PACKET_LOW_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_SETUP_PACKET_LOW_WVALUE
.equ	USB_DEVICE_DPRAM_SETUP_PACKET_LOW_WVALUE_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_SETUP_PACKET_LOW_WVALUE_BITS, 0xffff0000
.equ	USB_DEVICE_DPRAM_SETUP_PACKET_LOW_WVALUE_MSB, 31
.equ	USB_DEVICE_DPRAM_SETUP_PACKET_LOW_WVALUE_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_SETUP_PACKET_LOW_BREQUEST
.equ	USB_DEVICE_DPRAM_SETUP_PACKET_LOW_BREQUEST_RESET, 0x00
.equ	USB_DEVICE_DPRAM_SETUP_PACKET_LOW_BREQUEST_BITS, 0x0000ff00
.equ	USB_DEVICE_DPRAM_SETUP_PACKET_LOW_BREQUEST_MSB, 15
.equ	USB_DEVICE_DPRAM_SETUP_PACKET_LOW_BREQUEST_LSB, 8
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_SETUP_PACKET_LOW_BMREQUESTTYPE
.equ	USB_DEVICE_DPRAM_SETUP_PACKET_LOW_BMREQUESTTYPE_RESET, 0x00
.equ	USB_DEVICE_DPRAM_SETUP_PACKET_LOW_BMREQUESTTYPE_BITS, 0x000000ff
.equ	USB_DEVICE_DPRAM_SETUP_PACKET_LOW_BMREQUESTTYPE_MSB, 7
.equ	USB_DEVICE_DPRAM_SETUP_PACKET_LOW_BMREQUESTTYPE_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_SETUP_PACKET_HIGH
# Description : Bytes 4-7 of the setup packet from the host.
.equ	USB_DEVICE_DPRAM_SETUP_PACKET_HIGH_OFFSET, 0x00000004
.equ	USB_DEVICE_DPRAM_SETUP_PACKET_HIGH_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_SETUP_PACKET_HIGH_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_SETUP_PACKET_HIGH_WLENGTH
.equ	USB_DEVICE_DPRAM_SETUP_PACKET_HIGH_WLENGTH_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_SETUP_PACKET_HIGH_WLENGTH_BITS, 0xffff0000
.equ	USB_DEVICE_DPRAM_SETUP_PACKET_HIGH_WLENGTH_MSB, 31
.equ	USB_DEVICE_DPRAM_SETUP_PACKET_HIGH_WLENGTH_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_SETUP_PACKET_HIGH_WINDEX
.equ	USB_DEVICE_DPRAM_SETUP_PACKET_HIGH_WINDEX_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_SETUP_PACKET_HIGH_WINDEX_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_SETUP_PACKET_HIGH_WINDEX_MSB, 15
.equ	USB_DEVICE_DPRAM_SETUP_PACKET_HIGH_WINDEX_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP1_IN_CONTROL
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_OFFSET, 0x00000008
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_IN_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_IN_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_IN_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_IN_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_IN_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_IN_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_IN_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP1_IN_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP1_OUT_CONTROL
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_OFFSET, 0x0000000c
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_OUT_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_OUT_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_OUT_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_OUT_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_OUT_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_OUT_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_OUT_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP1_OUT_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP2_IN_CONTROL
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_OFFSET, 0x00000010
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_IN_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_IN_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_IN_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_IN_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_IN_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_IN_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_IN_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP2_IN_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP2_OUT_CONTROL
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_OFFSET, 0x00000014
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_OUT_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_OUT_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_OUT_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_OUT_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_OUT_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_OUT_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_OUT_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP2_OUT_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP3_IN_CONTROL
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_OFFSET, 0x00000018
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_IN_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_IN_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_IN_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_IN_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_IN_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_IN_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_IN_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP3_IN_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP3_OUT_CONTROL
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_OFFSET, 0x0000001c
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_OUT_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_OUT_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_OUT_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_OUT_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_OUT_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_OUT_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_OUT_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP3_OUT_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP4_IN_CONTROL
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_OFFSET, 0x00000020
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_IN_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_IN_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_IN_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_IN_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_IN_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_IN_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_IN_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP4_IN_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP4_OUT_CONTROL
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_OFFSET, 0x00000024
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_OUT_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_OUT_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_OUT_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_OUT_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_OUT_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_OUT_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_OUT_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP4_OUT_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP5_IN_CONTROL
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_OFFSET, 0x00000028
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_IN_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_IN_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_IN_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_IN_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_IN_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_IN_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_IN_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP5_IN_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP5_OUT_CONTROL
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_OFFSET, 0x0000002c
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_OUT_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_OUT_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_OUT_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_OUT_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_OUT_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_OUT_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_OUT_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP5_OUT_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP6_IN_CONTROL
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_OFFSET, 0x00000030
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_IN_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_IN_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_IN_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_IN_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_IN_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_IN_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_IN_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP6_IN_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP6_OUT_CONTROL
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_OFFSET, 0x00000034
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_OUT_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_OUT_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_OUT_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_OUT_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_OUT_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_OUT_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_OUT_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP6_OUT_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP7_IN_CONTROL
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_OFFSET, 0x00000038
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_IN_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_IN_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_IN_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_IN_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_IN_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_IN_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_IN_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP7_IN_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP7_OUT_CONTROL
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_OFFSET, 0x0000003c
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_OUT_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_OUT_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_OUT_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_OUT_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_OUT_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_OUT_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_OUT_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP7_OUT_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP8_IN_CONTROL
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_OFFSET, 0x00000040
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_IN_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_IN_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_IN_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_IN_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_IN_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_IN_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_IN_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP8_IN_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP8_OUT_CONTROL
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_OFFSET, 0x00000044
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_OUT_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_OUT_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_OUT_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_OUT_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_OUT_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_OUT_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_OUT_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP8_OUT_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP9_IN_CONTROL
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_OFFSET, 0x00000048
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_IN_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_IN_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_IN_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_IN_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_IN_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_IN_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_IN_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP9_IN_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP9_OUT_CONTROL
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_OFFSET, 0x0000004c
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_OUT_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_OUT_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_OUT_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_OUT_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_OUT_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_OUT_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_OUT_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP9_OUT_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP10_IN_CONTROL
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_OFFSET, 0x00000050
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_IN_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_IN_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_IN_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_IN_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_IN_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_IN_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_IN_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP10_IN_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP10_OUT_CONTROL
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_OFFSET, 0x00000054
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_OUT_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_OUT_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_OUT_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_OUT_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_OUT_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_OUT_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_OUT_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP10_OUT_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP11_IN_CONTROL
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_OFFSET, 0x00000058
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_IN_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_IN_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_IN_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_IN_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_IN_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_IN_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_IN_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP11_IN_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP11_OUT_CONTROL
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_OFFSET, 0x0000005c
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_OUT_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_OUT_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_OUT_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_OUT_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_OUT_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_OUT_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_OUT_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP11_OUT_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP12_IN_CONTROL
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_OFFSET, 0x00000060
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_IN_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_IN_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_IN_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_IN_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_IN_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_IN_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_IN_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP12_IN_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP12_OUT_CONTROL
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_OFFSET, 0x00000064
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_OUT_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_OUT_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_OUT_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_OUT_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_OUT_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_OUT_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_OUT_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP12_OUT_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP13_IN_CONTROL
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_OFFSET, 0x00000068
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_IN_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_IN_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_IN_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_IN_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_IN_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_IN_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_IN_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP13_IN_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP13_OUT_CONTROL
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_OFFSET, 0x0000006c
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_OUT_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_OUT_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_OUT_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_OUT_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_OUT_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_OUT_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_OUT_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP13_OUT_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP14_IN_CONTROL
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_OFFSET, 0x00000070
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_IN_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_IN_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_IN_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_IN_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_IN_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_IN_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_IN_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP14_IN_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP14_OUT_CONTROL
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_OFFSET, 0x00000074
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_OUT_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_OUT_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_OUT_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_OUT_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_OUT_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_OUT_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_OUT_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP14_OUT_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP15_IN_CONTROL
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_OFFSET, 0x00000078
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_IN_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_IN_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_IN_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_IN_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_IN_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_IN_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_IN_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP15_IN_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP15_OUT_CONTROL
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_OFFSET, 0x0000007c
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_BITS, 0xfc03ffff
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_OUT_CONTROL_ENABLE
# Description : Enable this endpoint. The device will not reply to any packets
#               for this endpoint if this bit is not set.
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_ENABLE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_ENABLE_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_ENABLE_MSB, 31
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_ENABLE_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_OUT_CONTROL_DOUBLE_BUFFERED
# Description : This endpoint is double buffered.
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_DOUBLE_BUFFERED_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_DOUBLE_BUFFERED_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_DOUBLE_BUFFERED_MSB, 30
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_DOUBLE_BUFFERED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_OUT_CONTROL_INTERRUPT_PER_BUFF
# Description : Trigger an interrupt each time a buffer is done.
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_INTERRUPT_PER_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_INTERRUPT_PER_BUFF_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_INTERRUPT_PER_BUFF_MSB, 29
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_INTERRUPT_PER_BUFF_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF
# Description : Trigger an interrupt each time both buffers are done. Only
#               valid in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_BITS, 0x10000000
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_MSB, 28
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_INTERRUPT_PER_DOUBLE_BUFF_LSB, 28
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_OUT_CONTROL_ENDPOINT_TYPE
#               0x0 -> Control
#               0x1 -> Isochronous
#               0x2 -> Bulk
#               0x3 -> Interrupt
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_ENDPOINT_TYPE_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_ENDPOINT_TYPE_BITS, 0x0c000000
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_ENDPOINT_TYPE_MSB, 27
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_ENDPOINT_TYPE_LSB, 26
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_ENDPOINT_TYPE_VALUE_CONTROL, 0x0
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_ENDPOINT_TYPE_VALUE_ISOCHRONOUS, 0x1
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_ENDPOINT_TYPE_VALUE_BULK, 0x2
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_ENDPOINT_TYPE_VALUE_INTERRUPT, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_OUT_CONTROL_INTERRUPT_ON_STALL
# Description : Trigger an interrupt if a STALL is sent. Intended for debug
#               only.
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_INTERRUPT_ON_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_INTERRUPT_ON_STALL_BITS, 0x00020000
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_INTERRUPT_ON_STALL_MSB, 17
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_INTERRUPT_ON_STALL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_OUT_CONTROL_INTERRUPT_ON_NAK
# Description : Trigger an interrupt if a NAK is sent. Intended for debug only.
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_INTERRUPT_ON_NAK_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_INTERRUPT_ON_NAK_BITS, 0x00010000
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_INTERRUPT_ON_NAK_MSB, 16
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_INTERRUPT_ON_NAK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_OUT_CONTROL_BUFFER_ADDRESS
# Description : 64 byte aligned buffer address for this EP (bits 0-5 are
#               ignored). Relative to the start of the DPRAM.
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_BUFFER_ADDRESS_RESET, 0x0000
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_BUFFER_ADDRESS_BITS, 0x0000ffff
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_BUFFER_ADDRESS_MSB, 15
.equ	USB_DEVICE_DPRAM_EP15_OUT_CONTROL_BUFFER_ADDRESS_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_OFFSET, 0x00000080
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP0_IN_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_OFFSET, 0x00000084
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP0_OUT_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_OFFSET, 0x00000088
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP1_IN_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_OFFSET, 0x0000008c
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP1_OUT_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_OFFSET, 0x00000090
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP2_IN_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_OFFSET, 0x00000094
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP2_OUT_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_OFFSET, 0x00000098
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP3_IN_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_OFFSET, 0x0000009c
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP3_OUT_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_OFFSET, 0x000000a0
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP4_IN_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_OFFSET, 0x000000a4
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP4_OUT_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_OFFSET, 0x000000a8
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP5_IN_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_OFFSET, 0x000000ac
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP5_OUT_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_OFFSET, 0x000000b0
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP6_IN_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_OFFSET, 0x000000b4
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP6_OUT_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_OFFSET, 0x000000b8
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP7_IN_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_OFFSET, 0x000000bc
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP7_OUT_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_OFFSET, 0x000000c0
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP8_IN_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_OFFSET, 0x000000c4
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP8_OUT_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_OFFSET, 0x000000c8
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP9_IN_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_OFFSET, 0x000000cc
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP9_OUT_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_OFFSET, 0x000000d0
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP10_IN_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_OFFSET, 0x000000d4
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP10_OUT_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_OFFSET, 0x000000d8
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP11_IN_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_OFFSET, 0x000000dc
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP11_OUT_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_OFFSET, 0x000000e0
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP12_IN_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_OFFSET, 0x000000e4
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP12_OUT_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_OFFSET, 0x000000e8
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP13_IN_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_OFFSET, 0x000000ec
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP13_OUT_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_OFFSET, 0x000000f0
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP14_IN_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_OFFSET, 0x000000f4
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP14_OUT_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_OFFSET, 0x000000f8
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP15_IN_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
# Register    : USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL
# Description : Buffer control for both buffers of an endpoint. Fields ending
#               in a _1 are for buffer 1.
#               Fields ending in a _0 are for buffer 0. Buffer 1 controls are
#               only valid if the endpoint is in double buffered mode.
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_OFFSET, 0x000000fc
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_BITS, 0xffffffff
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_FULL_1
# Description : Buffer 1 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_FULL_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_FULL_1_BITS, 0x80000000
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_FULL_1_MSB, 31
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_FULL_1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_LAST_1
# Description : Buffer 1 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_LAST_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_LAST_1_BITS, 0x40000000
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_LAST_1_MSB, 30
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_LAST_1_LSB, 30
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_PID_1
# Description : The data pid of buffer 1.
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_PID_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_PID_1_BITS, 0x20000000
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_PID_1_MSB, 29
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_PID_1_LSB, 29
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET
# Description : The number of bytes buffer 1 is offset from buffer 0 in
#               Isochronous mode. Only valid in double buffered mode for an
#               Isochronous endpoint.
#               For a non Isochronous endpoint the offset is always 64 bytes.
#               0x0 -> 128
#               0x1 -> 256
#               0x2 -> 512
#               0x3 -> 1024
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_BITS, 0x18000000
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_MSB, 28
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_LSB, 27
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_128, 0x0
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_256, 0x1
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_512, 0x2
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_DOUBLE_BUFFER_ISO_OFFSET_VALUE_1024, 0x3
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_AVAILABLE_1
# Description : Buffer 1 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_AVAILABLE_1_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_AVAILABLE_1_BITS, 0x04000000
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_AVAILABLE_1_MSB, 26
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_AVAILABLE_1_LSB, 26
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_LENGTH_1
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_LENGTH_1_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_LENGTH_1_BITS, 0x03ff0000
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_LENGTH_1_MSB, 25
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_LENGTH_1_LSB, 16
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_FULL_0
# Description : Buffer 0 is full. For an IN transfer (TX to the host) the bit
#               is set to indicate the data is valid. For an OUT transfer (RX
#               from the host) this bit should be left as a 0. The host will
#               set it when it has filled the buffer with data.
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_FULL_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_FULL_0_BITS, 0x00008000
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_FULL_0_MSB, 15
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_FULL_0_LSB, 15
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_LAST_0
# Description : Buffer 0 is the last buffer of the transfer.
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_LAST_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_LAST_0_BITS, 0x00004000
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_LAST_0_MSB, 14
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_LAST_0_LSB, 14
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_PID_0
# Description : The data pid of buffer 0.
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_PID_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_PID_0_BITS, 0x00002000
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_PID_0_MSB, 13
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_PID_0_LSB, 13
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_RESET
# Description : Reset the buffer selector to buffer 0.
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_RESET_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_RESET_BITS, 0x00001000
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_RESET_MSB, 12
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_RESET_LSB, 12
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_STALL
# Description : Reply with a stall (valid for both buffers).
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_STALL_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_STALL_BITS, 0x00000800
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_STALL_MSB, 11
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_STALL_LSB, 11
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_AVAILABLE_0
# Description : Buffer 0 is available. This bit is set to indicate the buffer
#               can be used by the controller. The controller clears the
#               available bit when writing the status back.
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_AVAILABLE_0_RESET, 0x0
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_AVAILABLE_0_BITS, 0x00000400
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_AVAILABLE_0_MSB, 10
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_AVAILABLE_0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_LENGTH_0
# Description : The length of the data in buffer 1.
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_LENGTH_0_RESET, 0x000
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_LENGTH_0_BITS, 0x000003ff
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_LENGTH_0_MSB, 9
.equ	USB_DEVICE_DPRAM_EP15_OUT_BUFFER_CONTROL_LENGTH_0_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_USB_DEVICE_DPRAM_H
