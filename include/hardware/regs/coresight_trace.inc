#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : CORESIGHT_TRACE
# Version        : 1
# Bus type       : ahbl
# Description    : Coresight block - RP specific registers
# =============================================================================
.ifndef	_HARDWARE_REGS_CORESIGHT_TRACE_H
.set	_HARDWARE_REGS_CORESIGHT_TRACE_H, 1
# =============================================================================
# Register    : CORESIGHT_TRACE_CTRL_STATUS
# Description : Control and status register
.equ	CORESIGHT_TRACE_CTRL_STATUS_OFFSET, 0x00000000
.equ	CORESIGHT_TRACE_CTRL_STATUS_BITS, 0x00000003
.equ	CORESIGHT_TRACE_CTRL_STATUS_RESET, 0x00000001
# -----------------------------------------------------------------------------
# Field       : CORESIGHT_TRACE_CTRL_STATUS_TRACE_CAPTURE_FIFO_OVERFLOW
# Description : This status flag is set high when trace data has been dropped
#               due to the FIFO being full at the point trace data was sampled.
#               Write 1 to acknowledge and clear the bit.
.equ	CORESIGHT_TRACE_CTRL_STATUS_TRACE_CAPTURE_FIFO_OVERFLOW_RESET, 0x0
.equ	CORESIGHT_TRACE_CTRL_STATUS_TRACE_CAPTURE_FIFO_OVERFLOW_BITS, 0x00000002
.equ	CORESIGHT_TRACE_CTRL_STATUS_TRACE_CAPTURE_FIFO_OVERFLOW_MSB, 1
.equ	CORESIGHT_TRACE_CTRL_STATUS_TRACE_CAPTURE_FIFO_OVERFLOW_LSB, 1
# -----------------------------------------------------------------------------
# Field       : CORESIGHT_TRACE_CTRL_STATUS_TRACE_CAPTURE_FIFO_FLUSH
# Description : Set to 1 to continuously hold the trace FIFO in a flushed state
#               and prevent overflow.
#
#               Before clearing this flag, configure and start a DMA channel
#               with the correct DREQ for the TRACE_CAPTURE_FIFO register.
#
#               Clear this flag to begin sampling trace data, and set once
#               again once the trace capture buffer is full. You must configure
#               the TPIU in order to generate trace packets to be captured, as
#               well as components like the ETM further upstream to generate
#               the event stream propagated to the TPIU.
.equ	CORESIGHT_TRACE_CTRL_STATUS_TRACE_CAPTURE_FIFO_FLUSH_RESET, 0x1
.equ	CORESIGHT_TRACE_CTRL_STATUS_TRACE_CAPTURE_FIFO_FLUSH_BITS, 0x00000001
.equ	CORESIGHT_TRACE_CTRL_STATUS_TRACE_CAPTURE_FIFO_FLUSH_MSB, 0
.equ	CORESIGHT_TRACE_CTRL_STATUS_TRACE_CAPTURE_FIFO_FLUSH_LSB, 0
# =============================================================================
# Register    : CORESIGHT_TRACE_TRACE_CAPTURE_FIFO
# Description : FIFO for trace data captured from the TPIU
.equ	CORESIGHT_TRACE_TRACE_CAPTURE_FIFO_OFFSET, 0x00000004
.equ	CORESIGHT_TRACE_TRACE_CAPTURE_FIFO_BITS, 0xffffffff
.equ	CORESIGHT_TRACE_TRACE_CAPTURE_FIFO_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : CORESIGHT_TRACE_TRACE_CAPTURE_FIFO_RDATA
# Description : Read from an 8 x 32-bit FIFO containing trace data captured
#               from the TPIU.
#
#               Hardware pushes to the FIFO on rising edges of clk_sys, when
#               either of the following is true:
#
#               * TPIU TRACECTL output is low (normal trace data)
#
#               * TPIU TRACETCL output is high, and TPIU TRACEDATA0 and
#               TRACEDATA1 are both low (trigger packet)
#
#               These conditions are in accordance with Arm Coresight
#               Architecture Spec v3.0 section D3.3.3: Decoding requirements
#               for Trace Capture Devices
#
#               The data captured into the FIFO is the full 32-bit TRACEDATA
#               bus output by the TPIU. Note that the TPIU is a DDR output at
#               half of clk_sys, therefore this interface can capture the full
#               32-bit TPIU DDR output bandwidth as it samples once per active
#               edge of the TPIU output clock.
.equ	CORESIGHT_TRACE_TRACE_CAPTURE_FIFO_RDATA_RESET, 0x00000000
.equ	CORESIGHT_TRACE_TRACE_CAPTURE_FIFO_RDATA_BITS, 0xffffffff
.equ	CORESIGHT_TRACE_TRACE_CAPTURE_FIFO_RDATA_MSB, 31
.equ	CORESIGHT_TRACE_TRACE_CAPTURE_FIFO_RDATA_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_CORESIGHT_TRACE_H
