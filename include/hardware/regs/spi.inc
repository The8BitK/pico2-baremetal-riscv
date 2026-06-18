#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : SPI
# Version        : 1
# Bus type       : apb
# =============================================================================
.ifndef	_HARDWARE_REGS_SPI_H
.set	_HARDWARE_REGS_SPI_H, 1
# =============================================================================
# Register    : SPI_SSPCR0
# Description : Control register 0, SSPCR0 on page 3-4
.equ	SPI_SSPCR0_OFFSET, 0x00000000
.equ	SPI_SSPCR0_BITS, 0x0000ffff
.equ	SPI_SSPCR0_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : SPI_SSPCR0_SCR
# Description : Serial clock rate. The value SCR is used to generate the
#               transmit and receive bit rate of the PrimeCell SSP. The bit
#               rate is: F SSPCLK CPSDVSR x (1+SCR) where CPSDVSR is an even
#               value from 2-254, programmed through the SSPCPSR register and
#               SCR is a value from 0-255.
.equ	SPI_SSPCR0_SCR_RESET, 0x00
.equ	SPI_SSPCR0_SCR_BITS, 0x0000ff00
.equ	SPI_SSPCR0_SCR_MSB, 15
.equ	SPI_SSPCR0_SCR_LSB, 8
# -----------------------------------------------------------------------------
# Field       : SPI_SSPCR0_SPH
# Description : SSPCLKOUT phase, applicable to Motorola SPI frame format only.
#               See Motorola SPI frame format on page 2-10.
.equ	SPI_SSPCR0_SPH_RESET, 0x0
.equ	SPI_SSPCR0_SPH_BITS, 0x00000080
.equ	SPI_SSPCR0_SPH_MSB, 7
.equ	SPI_SSPCR0_SPH_LSB, 7
# -----------------------------------------------------------------------------
# Field       : SPI_SSPCR0_SPO
# Description : SSPCLKOUT polarity, applicable to Motorola SPI frame format
#               only. See Motorola SPI frame format on page 2-10.
.equ	SPI_SSPCR0_SPO_RESET, 0x0
.equ	SPI_SSPCR0_SPO_BITS, 0x00000040
.equ	SPI_SSPCR0_SPO_MSB, 6
.equ	SPI_SSPCR0_SPO_LSB, 6
# -----------------------------------------------------------------------------
# Field       : SPI_SSPCR0_FRF
# Description : Frame format: 00 Motorola SPI frame format. 01 TI synchronous
#               serial frame format. 10 National Microwire frame format. 11
#               Reserved, undefined operation.
.equ	SPI_SSPCR0_FRF_RESET, 0x0
.equ	SPI_SSPCR0_FRF_BITS, 0x00000030
.equ	SPI_SSPCR0_FRF_MSB, 5
.equ	SPI_SSPCR0_FRF_LSB, 4
# -----------------------------------------------------------------------------
# Field       : SPI_SSPCR0_DSS
# Description : Data Size Select: 0000 Reserved, undefined operation. 0001
#               Reserved, undefined operation. 0010 Reserved, undefined
#               operation. 0011 4-bit data. 0100 5-bit data. 0101 6-bit data.
#               0110 7-bit data. 0111 8-bit data. 1000 9-bit data. 1001 10-bit
#               data. 1010 11-bit data. 1011 12-bit data. 1100 13-bit data.
#               1101 14-bit data. 1110 15-bit data. 1111 16-bit data.
.equ	SPI_SSPCR0_DSS_RESET, 0x0
.equ	SPI_SSPCR0_DSS_BITS, 0x0000000f
.equ	SPI_SSPCR0_DSS_MSB, 3
.equ	SPI_SSPCR0_DSS_LSB, 0
# =============================================================================
# Register    : SPI_SSPCR1
# Description : Control register 1, SSPCR1 on page 3-5
.equ	SPI_SSPCR1_OFFSET, 0x00000004
.equ	SPI_SSPCR1_BITS, 0x0000000f
.equ	SPI_SSPCR1_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : SPI_SSPCR1_SOD
# Description : Slave-mode output disable. This bit is relevant only in the
#               slave mode, MS=1. In multiple-slave systems, it is possible for
#               an PrimeCell SSP master to broadcast a message to all slaves in
#               the system while ensuring that only one slave drives data onto
#               its serial output line. In such systems the RXD lines from
#               multiple slaves could be tied together. To operate in such
#               systems, the SOD bit can be set if the PrimeCell SSP slave is
#               not supposed to drive the SSPTXD line: 0 SSP can drive the
#               SSPTXD output in slave mode. 1 SSP must not drive the SSPTXD
#               output in slave mode.
.equ	SPI_SSPCR1_SOD_RESET, 0x0
.equ	SPI_SSPCR1_SOD_BITS, 0x00000008
.equ	SPI_SSPCR1_SOD_MSB, 3
.equ	SPI_SSPCR1_SOD_LSB, 3
# -----------------------------------------------------------------------------
# Field       : SPI_SSPCR1_MS
# Description : Master or slave mode select. This bit can be modified only when
#               the PrimeCell SSP is disabled, SSE=0: 0 Device configured as
#               master, default. 1 Device configured as slave.
.equ	SPI_SSPCR1_MS_RESET, 0x0
.equ	SPI_SSPCR1_MS_BITS, 0x00000004
.equ	SPI_SSPCR1_MS_MSB, 2
.equ	SPI_SSPCR1_MS_LSB, 2
# -----------------------------------------------------------------------------
# Field       : SPI_SSPCR1_SSE
# Description : Synchronous serial port enable: 0 SSP operation disabled. 1 SSP
#               operation enabled.
.equ	SPI_SSPCR1_SSE_RESET, 0x0
.equ	SPI_SSPCR1_SSE_BITS, 0x00000002
.equ	SPI_SSPCR1_SSE_MSB, 1
.equ	SPI_SSPCR1_SSE_LSB, 1
# -----------------------------------------------------------------------------
# Field       : SPI_SSPCR1_LBM
# Description : Loop back mode: 0 Normal serial port operation enabled. 1
#               Output of transmit serial shifter is connected to input of
#               receive serial shifter internally.
.equ	SPI_SSPCR1_LBM_RESET, 0x0
.equ	SPI_SSPCR1_LBM_BITS, 0x00000001
.equ	SPI_SSPCR1_LBM_MSB, 0
.equ	SPI_SSPCR1_LBM_LSB, 0
# =============================================================================
# Register    : SPI_SSPDR
# Description : Data register, SSPDR on page 3-6
.equ	SPI_SSPDR_OFFSET, 0x00000008
.equ	SPI_SSPDR_BITS, 0x0000ffff
# -----------------------------------------------------------------------------
# Field       : SPI_SSPDR_DATA
# Description : Transmit/Receive FIFO: Read Receive FIFO. Write Transmit FIFO.
#               You must right-justify data when the PrimeCell SSP is
#               programmed for a data size that is less than 16 bits. Unused
#               bits at the top are ignored by transmit logic. The receive
#               logic automatically right-justifies.
.equ	SPI_SSPDR_DATA_BITS, 0x0000ffff
.equ	SPI_SSPDR_DATA_MSB, 15
.equ	SPI_SSPDR_DATA_LSB, 0
# =============================================================================
# Register    : SPI_SSPSR
# Description : Status register, SSPSR on page 3-7
.equ	SPI_SSPSR_OFFSET, 0x0000000c
.equ	SPI_SSPSR_BITS, 0x0000001f
.equ	SPI_SSPSR_RESET, 0x00000003
# -----------------------------------------------------------------------------
# Field       : SPI_SSPSR_BSY
# Description : PrimeCell SSP busy flag, RO: 0 SSP is idle. 1 SSP is currently
#               transmitting and/or receiving a frame or the transmit FIFO is
#               not empty.
.equ	SPI_SSPSR_BSY_RESET, 0x0
.equ	SPI_SSPSR_BSY_BITS, 0x00000010
.equ	SPI_SSPSR_BSY_MSB, 4
.equ	SPI_SSPSR_BSY_LSB, 4
# -----------------------------------------------------------------------------
# Field       : SPI_SSPSR_RFF
# Description : Receive FIFO full, RO: 0 Receive FIFO is not full. 1 Receive
#               FIFO is full.
.equ	SPI_SSPSR_RFF_RESET, 0x0
.equ	SPI_SSPSR_RFF_BITS, 0x00000008
.equ	SPI_SSPSR_RFF_MSB, 3
.equ	SPI_SSPSR_RFF_LSB, 3
# -----------------------------------------------------------------------------
# Field       : SPI_SSPSR_RNE
# Description : Receive FIFO not empty, RO: 0 Receive FIFO is empty. 1 Receive
#               FIFO is not empty.
.equ	SPI_SSPSR_RNE_RESET, 0x0
.equ	SPI_SSPSR_RNE_BITS, 0x00000004
.equ	SPI_SSPSR_RNE_MSB, 2
.equ	SPI_SSPSR_RNE_LSB, 2
# -----------------------------------------------------------------------------
# Field       : SPI_SSPSR_TNF
# Description : Transmit FIFO not full, RO: 0 Transmit FIFO is full. 1 Transmit
#               FIFO is not full.
.equ	SPI_SSPSR_TNF_RESET, 0x1
.equ	SPI_SSPSR_TNF_BITS, 0x00000002
.equ	SPI_SSPSR_TNF_MSB, 1
.equ	SPI_SSPSR_TNF_LSB, 1
# -----------------------------------------------------------------------------
# Field       : SPI_SSPSR_TFE
# Description : Transmit FIFO empty, RO: 0 Transmit FIFO is not empty. 1
#               Transmit FIFO is empty.
.equ	SPI_SSPSR_TFE_RESET, 0x1
.equ	SPI_SSPSR_TFE_BITS, 0x00000001
.equ	SPI_SSPSR_TFE_MSB, 0
.equ	SPI_SSPSR_TFE_LSB, 0
# =============================================================================
# Register    : SPI_SSPCPSR
# Description : Clock prescale register, SSPCPSR on page 3-8
.equ	SPI_SSPCPSR_OFFSET, 0x00000010
.equ	SPI_SSPCPSR_BITS, 0x000000ff
.equ	SPI_SSPCPSR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : SPI_SSPCPSR_CPSDVSR
# Description : Clock prescale divisor. Must be an even number from 2-254,
#               depending on the frequency of SSPCLK. The least significant bit
#               always returns zero on reads.
.equ	SPI_SSPCPSR_CPSDVSR_RESET, 0x00
.equ	SPI_SSPCPSR_CPSDVSR_BITS, 0x000000ff
.equ	SPI_SSPCPSR_CPSDVSR_MSB, 7
.equ	SPI_SSPCPSR_CPSDVSR_LSB, 0
# =============================================================================
# Register    : SPI_SSPIMSC
# Description : Interrupt mask set or clear register, SSPIMSC on page 3-9
.equ	SPI_SSPIMSC_OFFSET, 0x00000014
.equ	SPI_SSPIMSC_BITS, 0x0000000f
.equ	SPI_SSPIMSC_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : SPI_SSPIMSC_TXIM
# Description : Transmit FIFO interrupt mask: 0 Transmit FIFO half empty or
#               less condition interrupt is masked. 1 Transmit FIFO half empty
#               or less condition interrupt is not masked.
.equ	SPI_SSPIMSC_TXIM_RESET, 0x0
.equ	SPI_SSPIMSC_TXIM_BITS, 0x00000008
.equ	SPI_SSPIMSC_TXIM_MSB, 3
.equ	SPI_SSPIMSC_TXIM_LSB, 3
# -----------------------------------------------------------------------------
# Field       : SPI_SSPIMSC_RXIM
# Description : Receive FIFO interrupt mask: 0 Receive FIFO half full or less
#               condition interrupt is masked. 1 Receive FIFO half full or less
#               condition interrupt is not masked.
.equ	SPI_SSPIMSC_RXIM_RESET, 0x0
.equ	SPI_SSPIMSC_RXIM_BITS, 0x00000004
.equ	SPI_SSPIMSC_RXIM_MSB, 2
.equ	SPI_SSPIMSC_RXIM_LSB, 2
# -----------------------------------------------------------------------------
# Field       : SPI_SSPIMSC_RTIM
# Description : Receive timeout interrupt mask: 0 Receive FIFO not empty and no
#               read prior to timeout period interrupt is masked. 1 Receive
#               FIFO not empty and no read prior to timeout period interrupt is
#               not masked.
.equ	SPI_SSPIMSC_RTIM_RESET, 0x0
.equ	SPI_SSPIMSC_RTIM_BITS, 0x00000002
.equ	SPI_SSPIMSC_RTIM_MSB, 1
.equ	SPI_SSPIMSC_RTIM_LSB, 1
# -----------------------------------------------------------------------------
# Field       : SPI_SSPIMSC_RORIM
# Description : Receive overrun interrupt mask: 0 Receive FIFO written to while
#               full condition interrupt is masked. 1 Receive FIFO written to
#               while full condition interrupt is not masked.
.equ	SPI_SSPIMSC_RORIM_RESET, 0x0
.equ	SPI_SSPIMSC_RORIM_BITS, 0x00000001
.equ	SPI_SSPIMSC_RORIM_MSB, 0
.equ	SPI_SSPIMSC_RORIM_LSB, 0
# =============================================================================
# Register    : SPI_SSPRIS
# Description : Raw interrupt status register, SSPRIS on page 3-10
.equ	SPI_SSPRIS_OFFSET, 0x00000018
.equ	SPI_SSPRIS_BITS, 0x0000000f
.equ	SPI_SSPRIS_RESET, 0x00000008
# -----------------------------------------------------------------------------
# Field       : SPI_SSPRIS_TXRIS
# Description : Gives the raw interrupt state, prior to masking, of the
#               SSPTXINTR interrupt
.equ	SPI_SSPRIS_TXRIS_RESET, 0x1
.equ	SPI_SSPRIS_TXRIS_BITS, 0x00000008
.equ	SPI_SSPRIS_TXRIS_MSB, 3
.equ	SPI_SSPRIS_TXRIS_LSB, 3
# -----------------------------------------------------------------------------
# Field       : SPI_SSPRIS_RXRIS
# Description : Gives the raw interrupt state, prior to masking, of the
#               SSPRXINTR interrupt
.equ	SPI_SSPRIS_RXRIS_RESET, 0x0
.equ	SPI_SSPRIS_RXRIS_BITS, 0x00000004
.equ	SPI_SSPRIS_RXRIS_MSB, 2
.equ	SPI_SSPRIS_RXRIS_LSB, 2
# -----------------------------------------------------------------------------
# Field       : SPI_SSPRIS_RTRIS
# Description : Gives the raw interrupt state, prior to masking, of the
#               SSPRTINTR interrupt
.equ	SPI_SSPRIS_RTRIS_RESET, 0x0
.equ	SPI_SSPRIS_RTRIS_BITS, 0x00000002
.equ	SPI_SSPRIS_RTRIS_MSB, 1
.equ	SPI_SSPRIS_RTRIS_LSB, 1
# -----------------------------------------------------------------------------
# Field       : SPI_SSPRIS_RORRIS
# Description : Gives the raw interrupt state, prior to masking, of the
#               SSPRORINTR interrupt
.equ	SPI_SSPRIS_RORRIS_RESET, 0x0
.equ	SPI_SSPRIS_RORRIS_BITS, 0x00000001
.equ	SPI_SSPRIS_RORRIS_MSB, 0
.equ	SPI_SSPRIS_RORRIS_LSB, 0
# =============================================================================
# Register    : SPI_SSPMIS
# Description : Masked interrupt status register, SSPMIS on page 3-11
.equ	SPI_SSPMIS_OFFSET, 0x0000001c
.equ	SPI_SSPMIS_BITS, 0x0000000f
.equ	SPI_SSPMIS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : SPI_SSPMIS_TXMIS
# Description : Gives the transmit FIFO masked interrupt state, after masking,
#               of the SSPTXINTR interrupt
.equ	SPI_SSPMIS_TXMIS_RESET, 0x0
.equ	SPI_SSPMIS_TXMIS_BITS, 0x00000008
.equ	SPI_SSPMIS_TXMIS_MSB, 3
.equ	SPI_SSPMIS_TXMIS_LSB, 3
# -----------------------------------------------------------------------------
# Field       : SPI_SSPMIS_RXMIS
# Description : Gives the receive FIFO masked interrupt state, after masking,
#               of the SSPRXINTR interrupt
.equ	SPI_SSPMIS_RXMIS_RESET, 0x0
.equ	SPI_SSPMIS_RXMIS_BITS, 0x00000004
.equ	SPI_SSPMIS_RXMIS_MSB, 2
.equ	SPI_SSPMIS_RXMIS_LSB, 2
# -----------------------------------------------------------------------------
# Field       : SPI_SSPMIS_RTMIS
# Description : Gives the receive timeout masked interrupt state, after
#               masking, of the SSPRTINTR interrupt
.equ	SPI_SSPMIS_RTMIS_RESET, 0x0
.equ	SPI_SSPMIS_RTMIS_BITS, 0x00000002
.equ	SPI_SSPMIS_RTMIS_MSB, 1
.equ	SPI_SSPMIS_RTMIS_LSB, 1
# -----------------------------------------------------------------------------
# Field       : SPI_SSPMIS_RORMIS
# Description : Gives the receive over run masked interrupt status, after
#               masking, of the SSPRORINTR interrupt
.equ	SPI_SSPMIS_RORMIS_RESET, 0x0
.equ	SPI_SSPMIS_RORMIS_BITS, 0x00000001
.equ	SPI_SSPMIS_RORMIS_MSB, 0
.equ	SPI_SSPMIS_RORMIS_LSB, 0
# =============================================================================
# Register    : SPI_SSPICR
# Description : Interrupt clear register, SSPICR on page 3-11
.equ	SPI_SSPICR_OFFSET, 0x00000020
.equ	SPI_SSPICR_BITS, 0x00000003
.equ	SPI_SSPICR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : SPI_SSPICR_RTIC
# Description : Clears the SSPRTINTR interrupt
.equ	SPI_SSPICR_RTIC_RESET, 0x0
.equ	SPI_SSPICR_RTIC_BITS, 0x00000002
.equ	SPI_SSPICR_RTIC_MSB, 1
.equ	SPI_SSPICR_RTIC_LSB, 1
# -----------------------------------------------------------------------------
# Field       : SPI_SSPICR_RORIC
# Description : Clears the SSPRORINTR interrupt
.equ	SPI_SSPICR_RORIC_RESET, 0x0
.equ	SPI_SSPICR_RORIC_BITS, 0x00000001
.equ	SPI_SSPICR_RORIC_MSB, 0
.equ	SPI_SSPICR_RORIC_LSB, 0
# =============================================================================
# Register    : SPI_SSPDMACR
# Description : DMA control register, SSPDMACR on page 3-12
.equ	SPI_SSPDMACR_OFFSET, 0x00000024
.equ	SPI_SSPDMACR_BITS, 0x00000003
.equ	SPI_SSPDMACR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : SPI_SSPDMACR_TXDMAE
# Description : Transmit DMA Enable. If this bit is set to 1, DMA for the
#               transmit FIFO is enabled.
.equ	SPI_SSPDMACR_TXDMAE_RESET, 0x0
.equ	SPI_SSPDMACR_TXDMAE_BITS, 0x00000002
.equ	SPI_SSPDMACR_TXDMAE_MSB, 1
.equ	SPI_SSPDMACR_TXDMAE_LSB, 1
# -----------------------------------------------------------------------------
# Field       : SPI_SSPDMACR_RXDMAE
# Description : Receive DMA Enable. If this bit is set to 1, DMA for the
#               receive FIFO is enabled.
.equ	SPI_SSPDMACR_RXDMAE_RESET, 0x0
.equ	SPI_SSPDMACR_RXDMAE_BITS, 0x00000001
.equ	SPI_SSPDMACR_RXDMAE_MSB, 0
.equ	SPI_SSPDMACR_RXDMAE_LSB, 0
# =============================================================================
# Register    : SPI_SSPPERIPHID0
# Description : Peripheral identification registers, SSPPeriphID0-3 on page
#               3-13
.equ	SPI_SSPPERIPHID0_OFFSET, 0x00000fe0
.equ	SPI_SSPPERIPHID0_BITS, 0x000000ff
.equ	SPI_SSPPERIPHID0_RESET, 0x00000022
# -----------------------------------------------------------------------------
# Field       : SPI_SSPPERIPHID0_PARTNUMBER0
# Description : These bits read back as 0x22
.equ	SPI_SSPPERIPHID0_PARTNUMBER0_RESET, 0x22
.equ	SPI_SSPPERIPHID0_PARTNUMBER0_BITS, 0x000000ff
.equ	SPI_SSPPERIPHID0_PARTNUMBER0_MSB, 7
.equ	SPI_SSPPERIPHID0_PARTNUMBER0_LSB, 0
# =============================================================================
# Register    : SPI_SSPPERIPHID1
# Description : Peripheral identification registers, SSPPeriphID0-3 on page
#               3-13
.equ	SPI_SSPPERIPHID1_OFFSET, 0x00000fe4
.equ	SPI_SSPPERIPHID1_BITS, 0x000000ff
.equ	SPI_SSPPERIPHID1_RESET, 0x00000010
# -----------------------------------------------------------------------------
# Field       : SPI_SSPPERIPHID1_DESIGNER0
# Description : These bits read back as 0x1
.equ	SPI_SSPPERIPHID1_DESIGNER0_RESET, 0x1
.equ	SPI_SSPPERIPHID1_DESIGNER0_BITS, 0x000000f0
.equ	SPI_SSPPERIPHID1_DESIGNER0_MSB, 7
.equ	SPI_SSPPERIPHID1_DESIGNER0_LSB, 4
# -----------------------------------------------------------------------------
# Field       : SPI_SSPPERIPHID1_PARTNUMBER1
# Description : These bits read back as 0x0
.equ	SPI_SSPPERIPHID1_PARTNUMBER1_RESET, 0x0
.equ	SPI_SSPPERIPHID1_PARTNUMBER1_BITS, 0x0000000f
.equ	SPI_SSPPERIPHID1_PARTNUMBER1_MSB, 3
.equ	SPI_SSPPERIPHID1_PARTNUMBER1_LSB, 0
# =============================================================================
# Register    : SPI_SSPPERIPHID2
# Description : Peripheral identification registers, SSPPeriphID0-3 on page
#               3-13
.equ	SPI_SSPPERIPHID2_OFFSET, 0x00000fe8
.equ	SPI_SSPPERIPHID2_BITS, 0x000000ff
.equ	SPI_SSPPERIPHID2_RESET, 0x00000034
# -----------------------------------------------------------------------------
# Field       : SPI_SSPPERIPHID2_REVISION
# Description : These bits return the peripheral revision
.equ	SPI_SSPPERIPHID2_REVISION_RESET, 0x3
.equ	SPI_SSPPERIPHID2_REVISION_BITS, 0x000000f0
.equ	SPI_SSPPERIPHID2_REVISION_MSB, 7
.equ	SPI_SSPPERIPHID2_REVISION_LSB, 4
# -----------------------------------------------------------------------------
# Field       : SPI_SSPPERIPHID2_DESIGNER1
# Description : These bits read back as 0x4
.equ	SPI_SSPPERIPHID2_DESIGNER1_RESET, 0x4
.equ	SPI_SSPPERIPHID2_DESIGNER1_BITS, 0x0000000f
.equ	SPI_SSPPERIPHID2_DESIGNER1_MSB, 3
.equ	SPI_SSPPERIPHID2_DESIGNER1_LSB, 0
# =============================================================================
# Register    : SPI_SSPPERIPHID3
# Description : Peripheral identification registers, SSPPeriphID0-3 on page
#               3-13
.equ	SPI_SSPPERIPHID3_OFFSET, 0x00000fec
.equ	SPI_SSPPERIPHID3_BITS, 0x000000ff
.equ	SPI_SSPPERIPHID3_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : SPI_SSPPERIPHID3_CONFIGURATION
# Description : These bits read back as 0x00
.equ	SPI_SSPPERIPHID3_CONFIGURATION_RESET, 0x00
.equ	SPI_SSPPERIPHID3_CONFIGURATION_BITS, 0x000000ff
.equ	SPI_SSPPERIPHID3_CONFIGURATION_MSB, 7
.equ	SPI_SSPPERIPHID3_CONFIGURATION_LSB, 0
# =============================================================================
# Register    : SPI_SSPPCELLID0
# Description : PrimeCell identification registers, SSPPCellID0-3 on page 3-16
.equ	SPI_SSPPCELLID0_OFFSET, 0x00000ff0
.equ	SPI_SSPPCELLID0_BITS, 0x000000ff
.equ	SPI_SSPPCELLID0_RESET, 0x0000000d
# -----------------------------------------------------------------------------
# Field       : SPI_SSPPCELLID0_SSPPCELLID0
# Description : These bits read back as 0x0D
.equ	SPI_SSPPCELLID0_SSPPCELLID0_RESET, 0x0d
.equ	SPI_SSPPCELLID0_SSPPCELLID0_BITS, 0x000000ff
.equ	SPI_SSPPCELLID0_SSPPCELLID0_MSB, 7
.equ	SPI_SSPPCELLID0_SSPPCELLID0_LSB, 0
# =============================================================================
# Register    : SPI_SSPPCELLID1
# Description : PrimeCell identification registers, SSPPCellID0-3 on page 3-16
.equ	SPI_SSPPCELLID1_OFFSET, 0x00000ff4
.equ	SPI_SSPPCELLID1_BITS, 0x000000ff
.equ	SPI_SSPPCELLID1_RESET, 0x000000f0
# -----------------------------------------------------------------------------
# Field       : SPI_SSPPCELLID1_SSPPCELLID1
# Description : These bits read back as 0xF0
.equ	SPI_SSPPCELLID1_SSPPCELLID1_RESET, 0xf0
.equ	SPI_SSPPCELLID1_SSPPCELLID1_BITS, 0x000000ff
.equ	SPI_SSPPCELLID1_SSPPCELLID1_MSB, 7
.equ	SPI_SSPPCELLID1_SSPPCELLID1_LSB, 0
# =============================================================================
# Register    : SPI_SSPPCELLID2
# Description : PrimeCell identification registers, SSPPCellID0-3 on page 3-16
.equ	SPI_SSPPCELLID2_OFFSET, 0x00000ff8
.equ	SPI_SSPPCELLID2_BITS, 0x000000ff
.equ	SPI_SSPPCELLID2_RESET, 0x00000005
# -----------------------------------------------------------------------------
# Field       : SPI_SSPPCELLID2_SSPPCELLID2
# Description : These bits read back as 0x05
.equ	SPI_SSPPCELLID2_SSPPCELLID2_RESET, 0x05
.equ	SPI_SSPPCELLID2_SSPPCELLID2_BITS, 0x000000ff
.equ	SPI_SSPPCELLID2_SSPPCELLID2_MSB, 7
.equ	SPI_SSPPCELLID2_SSPPCELLID2_LSB, 0
# =============================================================================
# Register    : SPI_SSPPCELLID3
# Description : PrimeCell identification registers, SSPPCellID0-3 on page 3-16
.equ	SPI_SSPPCELLID3_OFFSET, 0x00000ffc
.equ	SPI_SSPPCELLID3_BITS, 0x000000ff
.equ	SPI_SSPPCELLID3_RESET, 0x000000b1
# -----------------------------------------------------------------------------
# Field       : SPI_SSPPCELLID3_SSPPCELLID3
# Description : These bits read back as 0xB1
.equ	SPI_SSPPCELLID3_SSPPCELLID3_RESET, 0xb1
.equ	SPI_SSPPCELLID3_SSPPCELLID3_BITS, 0x000000ff
.equ	SPI_SSPPCELLID3_SSPPCELLID3_MSB, 7
.equ	SPI_SSPPCELLID3_SSPPCELLID3_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_SPI_H
