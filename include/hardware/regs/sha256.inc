#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : SHA256
# Version        : 1
# Bus type       : apb
# Description    : SHA-256 hash function implementation
# =============================================================================
.ifndef	_HARDWARE_REGS_SHA256_H
.set	_HARDWARE_REGS_SHA256_H, 1
# =============================================================================
# Register    : SHA256_CSR
# Description : Control and status register
.equ	SHA256_CSR_OFFSET, 0x00000000
.equ	SHA256_CSR_BITS, 0x00001317
.equ	SHA256_CSR_RESET, 0x00001206
# -----------------------------------------------------------------------------
# Field       : SHA256_CSR_BSWAP
# Description : Enable byte swapping of 32-bit values at the point they are
#               committed to the SHA message scheduler.
#
#               This block's bus interface assembles byte/halfword data into
#               message words in little-endian order, so that DMAing the same
#               buffer with different transfer sizes always gives the same
#               result on a little-endian system like RP2350.
#
#               However, when marshalling bytes into blocks, SHA expects that
#               the first byte is the *most significant* in each message word.
#               To resolve this, once the bus interface has accumulated 32 bits
#               of data (either a word write, two halfword writes in little-
#               endian order, or four byte writes in little-endian order) the
#               final value can be byte-swapped before passing to the actual
#               SHA core.
#
#               This feature is enabled by default because using the SHA core
#               to checksum byte buffers is expected to be more common than
#               having preformatted SHA message words lying around.
.equ	SHA256_CSR_BSWAP_RESET, 0x1
.equ	SHA256_CSR_BSWAP_BITS, 0x00001000
.equ	SHA256_CSR_BSWAP_MSB, 12
.equ	SHA256_CSR_BSWAP_LSB, 12
# -----------------------------------------------------------------------------
# Field       : SHA256_CSR_DMA_SIZE
# Description : Configure DREQ logic for the correct DMA data size. Must be
#               configured before the DMA channel is triggered.
#
#               The SHA-256 core's DREQ logic requests one entire block of data
#               at once, since there is no FIFO, and data goes straight into
#               the core's message schedule and digest hardware. Therefore,
#               when transferring data with DMA, CSR_DMA_SIZE must be
#               configured in advance so that the correct number of transfers
#               can be requested per block.
#               0x0 -> 8bit
#               0x1 -> 16bit
#               0x2 -> 32bit
.equ	SHA256_CSR_DMA_SIZE_RESET, 0x2
.equ	SHA256_CSR_DMA_SIZE_BITS, 0x00000300
.equ	SHA256_CSR_DMA_SIZE_MSB, 9
.equ	SHA256_CSR_DMA_SIZE_LSB, 8
.equ	SHA256_CSR_DMA_SIZE_VALUE_8BIT, 0x0
.equ	SHA256_CSR_DMA_SIZE_VALUE_16BIT, 0x1
.equ	SHA256_CSR_DMA_SIZE_VALUE_32BIT, 0x2
# -----------------------------------------------------------------------------
# Field       : SHA256_CSR_ERR_WDATA_NOT_RDY
# Description : Set when a write occurs whilst the SHA-256 core is not ready
#               for data (WDATA_RDY is low). Write one to clear.
.equ	SHA256_CSR_ERR_WDATA_NOT_RDY_RESET, 0x0
.equ	SHA256_CSR_ERR_WDATA_NOT_RDY_BITS, 0x00000010
.equ	SHA256_CSR_ERR_WDATA_NOT_RDY_MSB, 4
.equ	SHA256_CSR_ERR_WDATA_NOT_RDY_LSB, 4
# -----------------------------------------------------------------------------
# Field       : SHA256_CSR_SUM_VLD
# Description : If 1, the SHA-256 checksum presented in registers SUM0 through
#               SUM7 is currently valid.
#
#               Goes low when WDATA is first written, then returns high once 16
#               words have been written and the digest of the current 512-bit
#               block has subsequently completed.
.equ	SHA256_CSR_SUM_VLD_RESET, 0x1
.equ	SHA256_CSR_SUM_VLD_BITS, 0x00000004
.equ	SHA256_CSR_SUM_VLD_MSB, 2
.equ	SHA256_CSR_SUM_VLD_LSB, 2
# -----------------------------------------------------------------------------
# Field       : SHA256_CSR_WDATA_RDY
# Description : If 1, the SHA-256 core is ready to accept more data through the
#               WDATA register.
#
#               After writing 16 words, this flag will go low for 57 cycles
#               whilst the core completes its digest.
.equ	SHA256_CSR_WDATA_RDY_RESET, 0x1
.equ	SHA256_CSR_WDATA_RDY_BITS, 0x00000002
.equ	SHA256_CSR_WDATA_RDY_MSB, 1
.equ	SHA256_CSR_WDATA_RDY_LSB, 1
# -----------------------------------------------------------------------------
# Field       : SHA256_CSR_START
# Description : Write 1 to prepare the SHA-256 core for a new checksum.
#
#               The SUMx registers are initialised to the proper values
#               (fractional bits of square roots of first 8 primes) and
#               internal counters are cleared. This immediately forces
#               WDATA_RDY and SUM_VLD high.
#
#               START must be written before initiating a DMA transfer to the
#               SHA-256 core, because the core will always request 16 transfers
#               at a time (1 512-bit block). Additionally, the DMA channel
#               should be configured for a multiple of 16 32-bit transfers.
.equ	SHA256_CSR_START_RESET, 0x0
.equ	SHA256_CSR_START_BITS, 0x00000001
.equ	SHA256_CSR_START_MSB, 0
.equ	SHA256_CSR_START_LSB, 0
# =============================================================================
# Register    : SHA256_WDATA
# Description : Write data register
#               After pulsing START and writing 16 words of data to this
#               register, WDATA_RDY will go low and the SHA-256 core will
#               complete the digest of the current 512-bit block.
#
#               Software is responsible for ensuring the data is correctly
#               padded and terminated to a whole number of 512-bit blocks.
#
#               After this, WDATA_RDY will return high, and more data can be
#               written (if any).
#
#               This register supports word, halfword and byte writes, so that
#               DMA from non-word-aligned buffers can be supported. The total
#               amount of data per block remains the same (16 words, 32
#               halfwords or 64 bytes) and byte/halfword transfers must not be
#               mixed within a block.
.equ	SHA256_WDATA_OFFSET, 0x00000004
.equ	SHA256_WDATA_BITS, 0xffffffff
.equ	SHA256_WDATA_RESET, 0x00000000
.equ	SHA256_WDATA_MSB, 31
.equ	SHA256_WDATA_LSB, 0
# =============================================================================
# Register    : SHA256_SUM0
# Description : 256-bit checksum result. Contents are undefined when
#               CSR_SUM_VLD is 0.
.equ	SHA256_SUM0_OFFSET, 0x00000008
.equ	SHA256_SUM0_BITS, 0xffffffff
.equ	SHA256_SUM0_RESET, 0x00000000
.equ	SHA256_SUM0_MSB, 31
.equ	SHA256_SUM0_LSB, 0
# =============================================================================
# Register    : SHA256_SUM1
# Description : 256-bit checksum result. Contents are undefined when
#               CSR_SUM_VLD is 0.
.equ	SHA256_SUM1_OFFSET, 0x0000000c
.equ	SHA256_SUM1_BITS, 0xffffffff
.equ	SHA256_SUM1_RESET, 0x00000000
.equ	SHA256_SUM1_MSB, 31
.equ	SHA256_SUM1_LSB, 0
# =============================================================================
# Register    : SHA256_SUM2
# Description : 256-bit checksum result. Contents are undefined when
#               CSR_SUM_VLD is 0.
.equ	SHA256_SUM2_OFFSET, 0x00000010
.equ	SHA256_SUM2_BITS, 0xffffffff
.equ	SHA256_SUM2_RESET, 0x00000000
.equ	SHA256_SUM2_MSB, 31
.equ	SHA256_SUM2_LSB, 0
# =============================================================================
# Register    : SHA256_SUM3
# Description : 256-bit checksum result. Contents are undefined when
#               CSR_SUM_VLD is 0.
.equ	SHA256_SUM3_OFFSET, 0x00000014
.equ	SHA256_SUM3_BITS, 0xffffffff
.equ	SHA256_SUM3_RESET, 0x00000000
.equ	SHA256_SUM3_MSB, 31
.equ	SHA256_SUM3_LSB, 0
# =============================================================================
# Register    : SHA256_SUM4
# Description : 256-bit checksum result. Contents are undefined when
#               CSR_SUM_VLD is 0.
.equ	SHA256_SUM4_OFFSET, 0x00000018
.equ	SHA256_SUM4_BITS, 0xffffffff
.equ	SHA256_SUM4_RESET, 0x00000000
.equ	SHA256_SUM4_MSB, 31
.equ	SHA256_SUM4_LSB, 0
# =============================================================================
# Register    : SHA256_SUM5
# Description : 256-bit checksum result. Contents are undefined when
#               CSR_SUM_VLD is 0.
.equ	SHA256_SUM5_OFFSET, 0x0000001c
.equ	SHA256_SUM5_BITS, 0xffffffff
.equ	SHA256_SUM5_RESET, 0x00000000
.equ	SHA256_SUM5_MSB, 31
.equ	SHA256_SUM5_LSB, 0
# =============================================================================
# Register    : SHA256_SUM6
# Description : 256-bit checksum result. Contents are undefined when
#               CSR_SUM_VLD is 0.
.equ	SHA256_SUM6_OFFSET, 0x00000020
.equ	SHA256_SUM6_BITS, 0xffffffff
.equ	SHA256_SUM6_RESET, 0x00000000
.equ	SHA256_SUM6_MSB, 31
.equ	SHA256_SUM6_LSB, 0
# =============================================================================
# Register    : SHA256_SUM7
# Description : 256-bit checksum result. Contents are undefined when
#               CSR_SUM_VLD is 0.
.equ	SHA256_SUM7_OFFSET, 0x00000024
.equ	SHA256_SUM7_BITS, 0xffffffff
.equ	SHA256_SUM7_RESET, 0x00000000
.equ	SHA256_SUM7_MSB, 31
.equ	SHA256_SUM7_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_SHA256_H
