#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : XIP_AUX
# Version        : 1
# Bus type       : ahb
# Description    : Auxiliary DMA access to XIP FIFOs, via fast AHB bus access
# =============================================================================
.ifndef	_HARDWARE_REGS_XIP_AUX_H
.set	_HARDWARE_REGS_XIP_AUX_H, 1
# =============================================================================
# Register    : XIP_AUX_STREAM
# Description : Read the XIP stream FIFO (fast bus access to
#               XIP_CTRL_STREAM_FIFO)
.equ	XIP_AUX_STREAM_OFFSET, 0x00000000
.equ	XIP_AUX_STREAM_BITS, 0xffffffff
.equ	XIP_AUX_STREAM_RESET, 0x00000000
.equ	XIP_AUX_STREAM_MSB, 31
.equ	XIP_AUX_STREAM_LSB, 0
# =============================================================================
# Register    : XIP_AUX_QMI_DIRECT_TX
# Description : Write to the QMI direct-mode TX FIFO (fast bus access to
#               QMI_DIRECT_TX)
.equ	XIP_AUX_QMI_DIRECT_TX_OFFSET, 0x00000004
.equ	XIP_AUX_QMI_DIRECT_TX_BITS, 0x001fffff
.equ	XIP_AUX_QMI_DIRECT_TX_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : XIP_AUX_QMI_DIRECT_TX_NOPUSH
# Description : Inhibit the RX FIFO push that would correspond to this TX FIFO
#               entry.
#
#               Useful to avoid garbage appearing in the RX FIFO when pushing
#               the command at the beginning of a SPI transfer.
.equ	XIP_AUX_QMI_DIRECT_TX_NOPUSH_RESET, 0x0
.equ	XIP_AUX_QMI_DIRECT_TX_NOPUSH_BITS, 0x00100000
.equ	XIP_AUX_QMI_DIRECT_TX_NOPUSH_MSB, 20
.equ	XIP_AUX_QMI_DIRECT_TX_NOPUSH_LSB, 20
# -----------------------------------------------------------------------------
# Field       : XIP_AUX_QMI_DIRECT_TX_OE
# Description : Output enable (active-high). For single width (SPI), this field
#               is ignored, and SD0 is always set to output, with SD1 always
#               set to input.
#
#               For dual and quad width (DSPI/QSPI), this sets whether the
#               relevant SDx pads are set to output whilst transferring this
#               FIFO record. In this case the command/address should have OE
#               set, and the data transfer should have OE set or clear
#               depending on the direction of the transfer.
.equ	XIP_AUX_QMI_DIRECT_TX_OE_RESET, 0x0
.equ	XIP_AUX_QMI_DIRECT_TX_OE_BITS, 0x00080000
.equ	XIP_AUX_QMI_DIRECT_TX_OE_MSB, 19
.equ	XIP_AUX_QMI_DIRECT_TX_OE_LSB, 19
# -----------------------------------------------------------------------------
# Field       : XIP_AUX_QMI_DIRECT_TX_DWIDTH
# Description : Data width. If 0, hardware will transmit the 8 LSBs of the
#               DIRECT_TX DATA field, and return an 8-bit value in the 8 LSBs
#               of DIRECT_RX. If 1, the full 16-bit width is used. 8-bit and
#               16-bit transfers can be mixed freely.
.equ	XIP_AUX_QMI_DIRECT_TX_DWIDTH_RESET, 0x0
.equ	XIP_AUX_QMI_DIRECT_TX_DWIDTH_BITS, 0x00040000
.equ	XIP_AUX_QMI_DIRECT_TX_DWIDTH_MSB, 18
.equ	XIP_AUX_QMI_DIRECT_TX_DWIDTH_LSB, 18
# -----------------------------------------------------------------------------
# Field       : XIP_AUX_QMI_DIRECT_TX_IWIDTH
# Description : Configure whether this FIFO record is transferred with
#               single/dual/quad interface width (0/1/2). Different widths can
#               be mixed freely.
#               0x0 -> Single width
#               0x1 -> Dual width
#               0x2 -> Quad width
.equ	XIP_AUX_QMI_DIRECT_TX_IWIDTH_RESET, 0x0
.equ	XIP_AUX_QMI_DIRECT_TX_IWIDTH_BITS, 0x00030000
.equ	XIP_AUX_QMI_DIRECT_TX_IWIDTH_MSB, 17
.equ	XIP_AUX_QMI_DIRECT_TX_IWIDTH_LSB, 16
.equ	XIP_AUX_QMI_DIRECT_TX_IWIDTH_VALUE_S, 0x0
.equ	XIP_AUX_QMI_DIRECT_TX_IWIDTH_VALUE_D, 0x1
.equ	XIP_AUX_QMI_DIRECT_TX_IWIDTH_VALUE_Q, 0x2
# -----------------------------------------------------------------------------
# Field       : XIP_AUX_QMI_DIRECT_TX_DATA
# Description : Data pushed here will be clocked out falling edges of SCK (or
#               before the very first rising edge of SCK, if this is the first
#               pulse). For each byte clocked out, the interface will
#               simultaneously sample one byte, on rising edges of SCK, and
#               push this to the DIRECT_RX FIFO.
#
#               For 16-bit data, the least-significant byte is transmitted
#               first.
.equ	XIP_AUX_QMI_DIRECT_TX_DATA_RESET, 0x0000
.equ	XIP_AUX_QMI_DIRECT_TX_DATA_BITS, 0x0000ffff
.equ	XIP_AUX_QMI_DIRECT_TX_DATA_MSB, 15
.equ	XIP_AUX_QMI_DIRECT_TX_DATA_LSB, 0
# =============================================================================
# Register    : XIP_AUX_QMI_DIRECT_RX
# Description : Read from the QMI direct-mode RX FIFO (fast bus access to
#               QMI_DIRECT_RX)
#               With each byte clocked out on the serial interface, one byte
#               will simultaneously be clocked in, and will appear in this
#               FIFO. The serial interface will stall when this FIFO is full,
#               to avoid dropping data.
#
#               When 16-bit data is pushed into the TX FIFO, the corresponding
#               RX FIFO push will also contain 16 bits of data. The least-
#               significant byte is the first one received.
.equ	XIP_AUX_QMI_DIRECT_RX_OFFSET, 0x00000008
.equ	XIP_AUX_QMI_DIRECT_RX_BITS, 0x0000ffff
.equ	XIP_AUX_QMI_DIRECT_RX_RESET, 0x00000000
.equ	XIP_AUX_QMI_DIRECT_RX_MSB, 15
.equ	XIP_AUX_QMI_DIRECT_RX_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_XIP_AUX_H
