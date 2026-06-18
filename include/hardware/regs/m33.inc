#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : M33
# Version        : 1
# Bus type       : apb
# Description    : TEAL registers accessible through the debug interface
# =============================================================================
.ifndef	_HARDWARE_REGS_M33_H
.set	_HARDWARE_REGS_M33_H, 1
# =============================================================================
# Register    : M33_ITM_STIM0
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM0_OFFSET, 0x00000000
.equ	M33_ITM_STIM0_BITS, 0xffffffff
.equ	M33_ITM_STIM0_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM0_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM0_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM0_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM0_STIMULUS_MSB, 31
.equ	M33_ITM_STIM0_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM1
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM1_OFFSET, 0x00000004
.equ	M33_ITM_STIM1_BITS, 0xffffffff
.equ	M33_ITM_STIM1_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM1_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM1_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM1_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM1_STIMULUS_MSB, 31
.equ	M33_ITM_STIM1_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM2
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM2_OFFSET, 0x00000008
.equ	M33_ITM_STIM2_BITS, 0xffffffff
.equ	M33_ITM_STIM2_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM2_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM2_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM2_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM2_STIMULUS_MSB, 31
.equ	M33_ITM_STIM2_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM3
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM3_OFFSET, 0x0000000c
.equ	M33_ITM_STIM3_BITS, 0xffffffff
.equ	M33_ITM_STIM3_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM3_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM3_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM3_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM3_STIMULUS_MSB, 31
.equ	M33_ITM_STIM3_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM4
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM4_OFFSET, 0x00000010
.equ	M33_ITM_STIM4_BITS, 0xffffffff
.equ	M33_ITM_STIM4_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM4_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM4_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM4_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM4_STIMULUS_MSB, 31
.equ	M33_ITM_STIM4_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM5
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM5_OFFSET, 0x00000014
.equ	M33_ITM_STIM5_BITS, 0xffffffff
.equ	M33_ITM_STIM5_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM5_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM5_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM5_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM5_STIMULUS_MSB, 31
.equ	M33_ITM_STIM5_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM6
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM6_OFFSET, 0x00000018
.equ	M33_ITM_STIM6_BITS, 0xffffffff
.equ	M33_ITM_STIM6_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM6_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM6_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM6_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM6_STIMULUS_MSB, 31
.equ	M33_ITM_STIM6_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM7
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM7_OFFSET, 0x0000001c
.equ	M33_ITM_STIM7_BITS, 0xffffffff
.equ	M33_ITM_STIM7_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM7_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM7_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM7_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM7_STIMULUS_MSB, 31
.equ	M33_ITM_STIM7_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM8
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM8_OFFSET, 0x00000020
.equ	M33_ITM_STIM8_BITS, 0xffffffff
.equ	M33_ITM_STIM8_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM8_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM8_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM8_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM8_STIMULUS_MSB, 31
.equ	M33_ITM_STIM8_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM9
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM9_OFFSET, 0x00000024
.equ	M33_ITM_STIM9_BITS, 0xffffffff
.equ	M33_ITM_STIM9_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM9_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM9_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM9_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM9_STIMULUS_MSB, 31
.equ	M33_ITM_STIM9_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM10
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM10_OFFSET, 0x00000028
.equ	M33_ITM_STIM10_BITS, 0xffffffff
.equ	M33_ITM_STIM10_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM10_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM10_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM10_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM10_STIMULUS_MSB, 31
.equ	M33_ITM_STIM10_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM11
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM11_OFFSET, 0x0000002c
.equ	M33_ITM_STIM11_BITS, 0xffffffff
.equ	M33_ITM_STIM11_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM11_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM11_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM11_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM11_STIMULUS_MSB, 31
.equ	M33_ITM_STIM11_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM12
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM12_OFFSET, 0x00000030
.equ	M33_ITM_STIM12_BITS, 0xffffffff
.equ	M33_ITM_STIM12_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM12_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM12_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM12_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM12_STIMULUS_MSB, 31
.equ	M33_ITM_STIM12_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM13
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM13_OFFSET, 0x00000034
.equ	M33_ITM_STIM13_BITS, 0xffffffff
.equ	M33_ITM_STIM13_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM13_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM13_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM13_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM13_STIMULUS_MSB, 31
.equ	M33_ITM_STIM13_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM14
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM14_OFFSET, 0x00000038
.equ	M33_ITM_STIM14_BITS, 0xffffffff
.equ	M33_ITM_STIM14_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM14_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM14_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM14_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM14_STIMULUS_MSB, 31
.equ	M33_ITM_STIM14_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM15
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM15_OFFSET, 0x0000003c
.equ	M33_ITM_STIM15_BITS, 0xffffffff
.equ	M33_ITM_STIM15_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM15_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM15_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM15_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM15_STIMULUS_MSB, 31
.equ	M33_ITM_STIM15_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM16
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM16_OFFSET, 0x00000040
.equ	M33_ITM_STIM16_BITS, 0xffffffff
.equ	M33_ITM_STIM16_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM16_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM16_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM16_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM16_STIMULUS_MSB, 31
.equ	M33_ITM_STIM16_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM17
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM17_OFFSET, 0x00000044
.equ	M33_ITM_STIM17_BITS, 0xffffffff
.equ	M33_ITM_STIM17_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM17_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM17_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM17_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM17_STIMULUS_MSB, 31
.equ	M33_ITM_STIM17_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM18
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM18_OFFSET, 0x00000048
.equ	M33_ITM_STIM18_BITS, 0xffffffff
.equ	M33_ITM_STIM18_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM18_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM18_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM18_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM18_STIMULUS_MSB, 31
.equ	M33_ITM_STIM18_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM19
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM19_OFFSET, 0x0000004c
.equ	M33_ITM_STIM19_BITS, 0xffffffff
.equ	M33_ITM_STIM19_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM19_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM19_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM19_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM19_STIMULUS_MSB, 31
.equ	M33_ITM_STIM19_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM20
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM20_OFFSET, 0x00000050
.equ	M33_ITM_STIM20_BITS, 0xffffffff
.equ	M33_ITM_STIM20_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM20_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM20_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM20_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM20_STIMULUS_MSB, 31
.equ	M33_ITM_STIM20_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM21
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM21_OFFSET, 0x00000054
.equ	M33_ITM_STIM21_BITS, 0xffffffff
.equ	M33_ITM_STIM21_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM21_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM21_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM21_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM21_STIMULUS_MSB, 31
.equ	M33_ITM_STIM21_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM22
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM22_OFFSET, 0x00000058
.equ	M33_ITM_STIM22_BITS, 0xffffffff
.equ	M33_ITM_STIM22_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM22_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM22_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM22_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM22_STIMULUS_MSB, 31
.equ	M33_ITM_STIM22_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM23
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM23_OFFSET, 0x0000005c
.equ	M33_ITM_STIM23_BITS, 0xffffffff
.equ	M33_ITM_STIM23_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM23_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM23_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM23_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM23_STIMULUS_MSB, 31
.equ	M33_ITM_STIM23_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM24
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM24_OFFSET, 0x00000060
.equ	M33_ITM_STIM24_BITS, 0xffffffff
.equ	M33_ITM_STIM24_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM24_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM24_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM24_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM24_STIMULUS_MSB, 31
.equ	M33_ITM_STIM24_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM25
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM25_OFFSET, 0x00000064
.equ	M33_ITM_STIM25_BITS, 0xffffffff
.equ	M33_ITM_STIM25_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM25_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM25_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM25_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM25_STIMULUS_MSB, 31
.equ	M33_ITM_STIM25_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM26
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM26_OFFSET, 0x00000068
.equ	M33_ITM_STIM26_BITS, 0xffffffff
.equ	M33_ITM_STIM26_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM26_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM26_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM26_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM26_STIMULUS_MSB, 31
.equ	M33_ITM_STIM26_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM27
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM27_OFFSET, 0x0000006c
.equ	M33_ITM_STIM27_BITS, 0xffffffff
.equ	M33_ITM_STIM27_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM27_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM27_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM27_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM27_STIMULUS_MSB, 31
.equ	M33_ITM_STIM27_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM28
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM28_OFFSET, 0x00000070
.equ	M33_ITM_STIM28_BITS, 0xffffffff
.equ	M33_ITM_STIM28_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM28_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM28_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM28_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM28_STIMULUS_MSB, 31
.equ	M33_ITM_STIM28_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM29
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM29_OFFSET, 0x00000074
.equ	M33_ITM_STIM29_BITS, 0xffffffff
.equ	M33_ITM_STIM29_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM29_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM29_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM29_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM29_STIMULUS_MSB, 31
.equ	M33_ITM_STIM29_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM30
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM30_OFFSET, 0x00000078
.equ	M33_ITM_STIM30_BITS, 0xffffffff
.equ	M33_ITM_STIM30_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM30_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM30_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM30_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM30_STIMULUS_MSB, 31
.equ	M33_ITM_STIM30_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_STIM31
# Description : Provides the interface for generating Instrumentation packets
.equ	M33_ITM_STIM31_OFFSET, 0x0000007c
.equ	M33_ITM_STIM31_BITS, 0xffffffff
.equ	M33_ITM_STIM31_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_STIM31_STIMULUS
# Description : Data to write to the Stimulus Port FIFO, for forwarding as an
#               Instrumentation packet. The size of write access determines the
#               type of Instrumentation packet generated.
.equ	M33_ITM_STIM31_STIMULUS_RESET, 0x00000000
.equ	M33_ITM_STIM31_STIMULUS_BITS, 0xffffffff
.equ	M33_ITM_STIM31_STIMULUS_MSB, 31
.equ	M33_ITM_STIM31_STIMULUS_LSB, 0
# =============================================================================
# Register    : M33_ITM_TER0
# Description : Provide an individual enable bit for each ITM_STIM register
.equ	M33_ITM_TER0_OFFSET, 0x00000e00
.equ	M33_ITM_TER0_BITS, 0xffffffff
.equ	M33_ITM_TER0_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_TER0_STIMENA
# Description : For STIMENA[m] in ITM_TER*n, controls whether ITM_STIM(32*n +
#               m) is enabled
.equ	M33_ITM_TER0_STIMENA_RESET, 0x00000000
.equ	M33_ITM_TER0_STIMENA_BITS, 0xffffffff
.equ	M33_ITM_TER0_STIMENA_MSB, 31
.equ	M33_ITM_TER0_STIMENA_LSB, 0
# =============================================================================
# Register    : M33_ITM_TPR
# Description : Controls which stimulus ports can be accessed by unprivileged
#               code
.equ	M33_ITM_TPR_OFFSET, 0x00000e40
.equ	M33_ITM_TPR_BITS, 0x0000000f
.equ	M33_ITM_TPR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_TPR_PRIVMASK
# Description : Bit mask to enable tracing on ITM stimulus ports
.equ	M33_ITM_TPR_PRIVMASK_RESET, 0x0
.equ	M33_ITM_TPR_PRIVMASK_BITS, 0x0000000f
.equ	M33_ITM_TPR_PRIVMASK_MSB, 3
.equ	M33_ITM_TPR_PRIVMASK_LSB, 0
# =============================================================================
# Register    : M33_ITM_TCR
# Description : Configures and controls transfers through the ITM interface
.equ	M33_ITM_TCR_OFFSET, 0x00000e80
.equ	M33_ITM_TCR_BITS, 0x00ff0f3f
.equ	M33_ITM_TCR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_TCR_BUSY
# Description : Indicates whether the ITM is currently processing events
.equ	M33_ITM_TCR_BUSY_RESET, 0x0
.equ	M33_ITM_TCR_BUSY_BITS, 0x00800000
.equ	M33_ITM_TCR_BUSY_MSB, 23
.equ	M33_ITM_TCR_BUSY_LSB, 23
# -----------------------------------------------------------------------------
# Field       : M33_ITM_TCR_TRACEBUSID
# Description : Identifier for multi-source trace stream formatting. If multi-
#               source trace is in use, the debugger must write a unique non-
#               zero trace ID value to this field
.equ	M33_ITM_TCR_TRACEBUSID_RESET, 0x00
.equ	M33_ITM_TCR_TRACEBUSID_BITS, 0x007f0000
.equ	M33_ITM_TCR_TRACEBUSID_MSB, 22
.equ	M33_ITM_TCR_TRACEBUSID_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_ITM_TCR_GTSFREQ
# Description : Defines how often the ITM generates a global timestamp, based
#               on the global timestamp clock frequency, or disables generation
#               of global timestamps
.equ	M33_ITM_TCR_GTSFREQ_RESET, 0x0
.equ	M33_ITM_TCR_GTSFREQ_BITS, 0x00000c00
.equ	M33_ITM_TCR_GTSFREQ_MSB, 11
.equ	M33_ITM_TCR_GTSFREQ_LSB, 10
# -----------------------------------------------------------------------------
# Field       : M33_ITM_TCR_TSPRESCALE
# Description : Local timestamp prescaler, used with the trace packet reference
#               clock
.equ	M33_ITM_TCR_TSPRESCALE_RESET, 0x0
.equ	M33_ITM_TCR_TSPRESCALE_BITS, 0x00000300
.equ	M33_ITM_TCR_TSPRESCALE_MSB, 9
.equ	M33_ITM_TCR_TSPRESCALE_LSB, 8
# -----------------------------------------------------------------------------
# Field       : M33_ITM_TCR_STALLENA
# Description : Stall the PE to guarantee delivery of Data Trace packets.
.equ	M33_ITM_TCR_STALLENA_RESET, 0x0
.equ	M33_ITM_TCR_STALLENA_BITS, 0x00000020
.equ	M33_ITM_TCR_STALLENA_MSB, 5
.equ	M33_ITM_TCR_STALLENA_LSB, 5
# -----------------------------------------------------------------------------
# Field       : M33_ITM_TCR_SWOENA
# Description : Enables asynchronous clocking of the timestamp counter
.equ	M33_ITM_TCR_SWOENA_RESET, 0x0
.equ	M33_ITM_TCR_SWOENA_BITS, 0x00000010
.equ	M33_ITM_TCR_SWOENA_MSB, 4
.equ	M33_ITM_TCR_SWOENA_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_ITM_TCR_TXENA
# Description : Enables forwarding of hardware event packet from the DWT unit
#               to the ITM for output to the TPIU
.equ	M33_ITM_TCR_TXENA_RESET, 0x0
.equ	M33_ITM_TCR_TXENA_BITS, 0x00000008
.equ	M33_ITM_TCR_TXENA_MSB, 3
.equ	M33_ITM_TCR_TXENA_LSB, 3
# -----------------------------------------------------------------------------
# Field       : M33_ITM_TCR_SYNCENA
# Description : Enables Synchronization packet transmission for a synchronous
#               TPIU
.equ	M33_ITM_TCR_SYNCENA_RESET, 0x0
.equ	M33_ITM_TCR_SYNCENA_BITS, 0x00000004
.equ	M33_ITM_TCR_SYNCENA_MSB, 2
.equ	M33_ITM_TCR_SYNCENA_LSB, 2
# -----------------------------------------------------------------------------
# Field       : M33_ITM_TCR_TSENA
# Description : Enables Local timestamp generation
.equ	M33_ITM_TCR_TSENA_RESET, 0x0
.equ	M33_ITM_TCR_TSENA_BITS, 0x00000002
.equ	M33_ITM_TCR_TSENA_MSB, 1
.equ	M33_ITM_TCR_TSENA_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_ITM_TCR_ITMENA
# Description : Enables the ITM
.equ	M33_ITM_TCR_ITMENA_RESET, 0x0
.equ	M33_ITM_TCR_ITMENA_BITS, 0x00000001
.equ	M33_ITM_TCR_ITMENA_MSB, 0
.equ	M33_ITM_TCR_ITMENA_LSB, 0
# =============================================================================
# Register    : M33_INT_ATREADY
# Description : Integration Mode: Read ATB Ready
.equ	M33_INT_ATREADY_OFFSET, 0x00000ef0
.equ	M33_INT_ATREADY_BITS, 0x00000003
.equ	M33_INT_ATREADY_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_INT_ATREADY_AFVALID
# Description : A read of this bit returns the value of AFVALID
.equ	M33_INT_ATREADY_AFVALID_RESET, 0x0
.equ	M33_INT_ATREADY_AFVALID_BITS, 0x00000002
.equ	M33_INT_ATREADY_AFVALID_MSB, 1
.equ	M33_INT_ATREADY_AFVALID_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_INT_ATREADY_ATREADY
# Description : A read of this bit returns the value of ATREADY
.equ	M33_INT_ATREADY_ATREADY_RESET, 0x0
.equ	M33_INT_ATREADY_ATREADY_BITS, 0x00000001
.equ	M33_INT_ATREADY_ATREADY_MSB, 0
.equ	M33_INT_ATREADY_ATREADY_LSB, 0
# =============================================================================
# Register    : M33_INT_ATVALID
# Description : Integration Mode: Write ATB Valid
.equ	M33_INT_ATVALID_OFFSET, 0x00000ef8
.equ	M33_INT_ATVALID_BITS, 0x00000003
.equ	M33_INT_ATVALID_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_INT_ATVALID_AFREADY
# Description : A write to this bit gives the value of AFREADY
.equ	M33_INT_ATVALID_AFREADY_RESET, 0x0
.equ	M33_INT_ATVALID_AFREADY_BITS, 0x00000002
.equ	M33_INT_ATVALID_AFREADY_MSB, 1
.equ	M33_INT_ATVALID_AFREADY_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_INT_ATVALID_ATREADY
# Description : A write to this bit gives the value of ATVALID
.equ	M33_INT_ATVALID_ATREADY_RESET, 0x0
.equ	M33_INT_ATVALID_ATREADY_BITS, 0x00000001
.equ	M33_INT_ATVALID_ATREADY_MSB, 0
.equ	M33_INT_ATVALID_ATREADY_LSB, 0
# =============================================================================
# Register    : M33_ITM_ITCTRL
# Description : Integration Mode Control Register
.equ	M33_ITM_ITCTRL_OFFSET, 0x00000f00
.equ	M33_ITM_ITCTRL_BITS, 0x00000001
.equ	M33_ITM_ITCTRL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_ITCTRL_IME
# Description : Integration mode enable bit - The possible values are:  0 - The
#               trace unit is not in integration mode. 1 - The trace unit is in
#               integration mode. This mode enables: A debug agent to perform
#               topology detection. SoC test software to perform integration
#               testing.
.equ	M33_ITM_ITCTRL_IME_RESET, 0x0
.equ	M33_ITM_ITCTRL_IME_BITS, 0x00000001
.equ	M33_ITM_ITCTRL_IME_MSB, 0
.equ	M33_ITM_ITCTRL_IME_LSB, 0
# =============================================================================
# Register    : M33_ITM_DEVARCH
# Description : Provides CoreSight discovery information for the ITM
.equ	M33_ITM_DEVARCH_OFFSET, 0x00000fbc
.equ	M33_ITM_DEVARCH_BITS, 0xffffffff
.equ	M33_ITM_DEVARCH_RESET, 0x47701a01
# -----------------------------------------------------------------------------
# Field       : M33_ITM_DEVARCH_ARCHITECT
# Description : Defines the architect of the component. Bits [31:28] are the
#               JEP106 continuation code (JEP106 bank ID, minus 1) and bits
#               [27:21] are the JEP106 ID code.
.equ	M33_ITM_DEVARCH_ARCHITECT_RESET, 0x23b
.equ	M33_ITM_DEVARCH_ARCHITECT_BITS, 0xffe00000
.equ	M33_ITM_DEVARCH_ARCHITECT_MSB, 31
.equ	M33_ITM_DEVARCH_ARCHITECT_LSB, 21
# -----------------------------------------------------------------------------
# Field       : M33_ITM_DEVARCH_PRESENT
# Description : Defines that the DEVARCH register is present
.equ	M33_ITM_DEVARCH_PRESENT_RESET, 0x1
.equ	M33_ITM_DEVARCH_PRESENT_BITS, 0x00100000
.equ	M33_ITM_DEVARCH_PRESENT_MSB, 20
.equ	M33_ITM_DEVARCH_PRESENT_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_ITM_DEVARCH_REVISION
# Description : Defines the architecture revision of the component
.equ	M33_ITM_DEVARCH_REVISION_RESET, 0x0
.equ	M33_ITM_DEVARCH_REVISION_BITS, 0x000f0000
.equ	M33_ITM_DEVARCH_REVISION_MSB, 19
.equ	M33_ITM_DEVARCH_REVISION_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_ITM_DEVARCH_ARCHVER
# Description : Defines the architecture version of the component
.equ	M33_ITM_DEVARCH_ARCHVER_RESET, 0x1
.equ	M33_ITM_DEVARCH_ARCHVER_BITS, 0x0000f000
.equ	M33_ITM_DEVARCH_ARCHVER_MSB, 15
.equ	M33_ITM_DEVARCH_ARCHVER_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_ITM_DEVARCH_ARCHPART
# Description : Defines the architecture of the component
.equ	M33_ITM_DEVARCH_ARCHPART_RESET, 0xa01
.equ	M33_ITM_DEVARCH_ARCHPART_BITS, 0x00000fff
.equ	M33_ITM_DEVARCH_ARCHPART_MSB, 11
.equ	M33_ITM_DEVARCH_ARCHPART_LSB, 0
# =============================================================================
# Register    : M33_ITM_DEVTYPE
# Description : Provides CoreSight discovery information for the ITM
.equ	M33_ITM_DEVTYPE_OFFSET, 0x00000fcc
.equ	M33_ITM_DEVTYPE_BITS, 0x000000ff
.equ	M33_ITM_DEVTYPE_RESET, 0x00000043
# -----------------------------------------------------------------------------
# Field       : M33_ITM_DEVTYPE_SUB
# Description : Component sub-type
.equ	M33_ITM_DEVTYPE_SUB_RESET, 0x4
.equ	M33_ITM_DEVTYPE_SUB_BITS, 0x000000f0
.equ	M33_ITM_DEVTYPE_SUB_MSB, 7
.equ	M33_ITM_DEVTYPE_SUB_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_ITM_DEVTYPE_MAJOR
# Description : Component major type
.equ	M33_ITM_DEVTYPE_MAJOR_RESET, 0x3
.equ	M33_ITM_DEVTYPE_MAJOR_BITS, 0x0000000f
.equ	M33_ITM_DEVTYPE_MAJOR_MSB, 3
.equ	M33_ITM_DEVTYPE_MAJOR_LSB, 0
# =============================================================================
# Register    : M33_ITM_PIDR4
# Description : Provides CoreSight discovery information for the ITM
.equ	M33_ITM_PIDR4_OFFSET, 0x00000fd0
.equ	M33_ITM_PIDR4_BITS, 0x000000ff
.equ	M33_ITM_PIDR4_RESET, 0x00000004
# -----------------------------------------------------------------------------
# Field       : M33_ITM_PIDR4_SIZE
# Description : See CoreSight Architecture Specification
.equ	M33_ITM_PIDR4_SIZE_RESET, 0x0
.equ	M33_ITM_PIDR4_SIZE_BITS, 0x000000f0
.equ	M33_ITM_PIDR4_SIZE_MSB, 7
.equ	M33_ITM_PIDR4_SIZE_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_ITM_PIDR4_DES_2
# Description : See CoreSight Architecture Specification
.equ	M33_ITM_PIDR4_DES_2_RESET, 0x4
.equ	M33_ITM_PIDR4_DES_2_BITS, 0x0000000f
.equ	M33_ITM_PIDR4_DES_2_MSB, 3
.equ	M33_ITM_PIDR4_DES_2_LSB, 0
# =============================================================================
# Register    : M33_ITM_PIDR5
# Description : Provides CoreSight discovery information for the ITM
.equ	M33_ITM_PIDR5_OFFSET, 0x00000fd4
.equ	M33_ITM_PIDR5_BITS, 0x00000000
.equ	M33_ITM_PIDR5_RESET, 0x00000000
.equ	M33_ITM_PIDR5_MSB, 31
.equ	M33_ITM_PIDR5_LSB, 0
# =============================================================================
# Register    : M33_ITM_PIDR6
# Description : Provides CoreSight discovery information for the ITM
.equ	M33_ITM_PIDR6_OFFSET, 0x00000fd8
.equ	M33_ITM_PIDR6_BITS, 0x00000000
.equ	M33_ITM_PIDR6_RESET, 0x00000000
.equ	M33_ITM_PIDR6_MSB, 31
.equ	M33_ITM_PIDR6_LSB, 0
# =============================================================================
# Register    : M33_ITM_PIDR7
# Description : Provides CoreSight discovery information for the ITM
.equ	M33_ITM_PIDR7_OFFSET, 0x00000fdc
.equ	M33_ITM_PIDR7_BITS, 0x00000000
.equ	M33_ITM_PIDR7_RESET, 0x00000000
.equ	M33_ITM_PIDR7_MSB, 31
.equ	M33_ITM_PIDR7_LSB, 0
# =============================================================================
# Register    : M33_ITM_PIDR0
# Description : Provides CoreSight discovery information for the ITM
.equ	M33_ITM_PIDR0_OFFSET, 0x00000fe0
.equ	M33_ITM_PIDR0_BITS, 0x000000ff
.equ	M33_ITM_PIDR0_RESET, 0x00000021
# -----------------------------------------------------------------------------
# Field       : M33_ITM_PIDR0_PART_0
# Description : See CoreSight Architecture Specification
.equ	M33_ITM_PIDR0_PART_0_RESET, 0x21
.equ	M33_ITM_PIDR0_PART_0_BITS, 0x000000ff
.equ	M33_ITM_PIDR0_PART_0_MSB, 7
.equ	M33_ITM_PIDR0_PART_0_LSB, 0
# =============================================================================
# Register    : M33_ITM_PIDR1
# Description : Provides CoreSight discovery information for the ITM
.equ	M33_ITM_PIDR1_OFFSET, 0x00000fe4
.equ	M33_ITM_PIDR1_BITS, 0x000000ff
.equ	M33_ITM_PIDR1_RESET, 0x000000bd
# -----------------------------------------------------------------------------
# Field       : M33_ITM_PIDR1_DES_0
# Description : See CoreSight Architecture Specification
.equ	M33_ITM_PIDR1_DES_0_RESET, 0xb
.equ	M33_ITM_PIDR1_DES_0_BITS, 0x000000f0
.equ	M33_ITM_PIDR1_DES_0_MSB, 7
.equ	M33_ITM_PIDR1_DES_0_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_ITM_PIDR1_PART_1
# Description : See CoreSight Architecture Specification
.equ	M33_ITM_PIDR1_PART_1_RESET, 0xd
.equ	M33_ITM_PIDR1_PART_1_BITS, 0x0000000f
.equ	M33_ITM_PIDR1_PART_1_MSB, 3
.equ	M33_ITM_PIDR1_PART_1_LSB, 0
# =============================================================================
# Register    : M33_ITM_PIDR2
# Description : Provides CoreSight discovery information for the ITM
.equ	M33_ITM_PIDR2_OFFSET, 0x00000fe8
.equ	M33_ITM_PIDR2_BITS, 0x000000ff
.equ	M33_ITM_PIDR2_RESET, 0x0000000b
# -----------------------------------------------------------------------------
# Field       : M33_ITM_PIDR2_REVISION
# Description : See CoreSight Architecture Specification
.equ	M33_ITM_PIDR2_REVISION_RESET, 0x0
.equ	M33_ITM_PIDR2_REVISION_BITS, 0x000000f0
.equ	M33_ITM_PIDR2_REVISION_MSB, 7
.equ	M33_ITM_PIDR2_REVISION_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_ITM_PIDR2_JEDEC
# Description : See CoreSight Architecture Specification
.equ	M33_ITM_PIDR2_JEDEC_RESET, 0x1
.equ	M33_ITM_PIDR2_JEDEC_BITS, 0x00000008
.equ	M33_ITM_PIDR2_JEDEC_MSB, 3
.equ	M33_ITM_PIDR2_JEDEC_LSB, 3
# -----------------------------------------------------------------------------
# Field       : M33_ITM_PIDR2_DES_1
# Description : See CoreSight Architecture Specification
.equ	M33_ITM_PIDR2_DES_1_RESET, 0x3
.equ	M33_ITM_PIDR2_DES_1_BITS, 0x00000007
.equ	M33_ITM_PIDR2_DES_1_MSB, 2
.equ	M33_ITM_PIDR2_DES_1_LSB, 0
# =============================================================================
# Register    : M33_ITM_PIDR3
# Description : Provides CoreSight discovery information for the ITM
.equ	M33_ITM_PIDR3_OFFSET, 0x00000fec
.equ	M33_ITM_PIDR3_BITS, 0x000000ff
.equ	M33_ITM_PIDR3_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITM_PIDR3_REVAND
# Description : See CoreSight Architecture Specification
.equ	M33_ITM_PIDR3_REVAND_RESET, 0x0
.equ	M33_ITM_PIDR3_REVAND_BITS, 0x000000f0
.equ	M33_ITM_PIDR3_REVAND_MSB, 7
.equ	M33_ITM_PIDR3_REVAND_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_ITM_PIDR3_CMOD
# Description : See CoreSight Architecture Specification
.equ	M33_ITM_PIDR3_CMOD_RESET, 0x0
.equ	M33_ITM_PIDR3_CMOD_BITS, 0x0000000f
.equ	M33_ITM_PIDR3_CMOD_MSB, 3
.equ	M33_ITM_PIDR3_CMOD_LSB, 0
# =============================================================================
# Register    : M33_ITM_CIDR0
# Description : Provides CoreSight discovery information for the ITM
.equ	M33_ITM_CIDR0_OFFSET, 0x00000ff0
.equ	M33_ITM_CIDR0_BITS, 0x000000ff
.equ	M33_ITM_CIDR0_RESET, 0x0000000d
# -----------------------------------------------------------------------------
# Field       : M33_ITM_CIDR0_PRMBL_0
# Description : See CoreSight Architecture Specification
.equ	M33_ITM_CIDR0_PRMBL_0_RESET, 0x0d
.equ	M33_ITM_CIDR0_PRMBL_0_BITS, 0x000000ff
.equ	M33_ITM_CIDR0_PRMBL_0_MSB, 7
.equ	M33_ITM_CIDR0_PRMBL_0_LSB, 0
# =============================================================================
# Register    : M33_ITM_CIDR1
# Description : Provides CoreSight discovery information for the ITM
.equ	M33_ITM_CIDR1_OFFSET, 0x00000ff4
.equ	M33_ITM_CIDR1_BITS, 0x000000ff
.equ	M33_ITM_CIDR1_RESET, 0x00000090
# -----------------------------------------------------------------------------
# Field       : M33_ITM_CIDR1_CLASS
# Description : See CoreSight Architecture Specification
.equ	M33_ITM_CIDR1_CLASS_RESET, 0x9
.equ	M33_ITM_CIDR1_CLASS_BITS, 0x000000f0
.equ	M33_ITM_CIDR1_CLASS_MSB, 7
.equ	M33_ITM_CIDR1_CLASS_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_ITM_CIDR1_PRMBL_1
# Description : See CoreSight Architecture Specification
.equ	M33_ITM_CIDR1_PRMBL_1_RESET, 0x0
.equ	M33_ITM_CIDR1_PRMBL_1_BITS, 0x0000000f
.equ	M33_ITM_CIDR1_PRMBL_1_MSB, 3
.equ	M33_ITM_CIDR1_PRMBL_1_LSB, 0
# =============================================================================
# Register    : M33_ITM_CIDR2
# Description : Provides CoreSight discovery information for the ITM
.equ	M33_ITM_CIDR2_OFFSET, 0x00000ff8
.equ	M33_ITM_CIDR2_BITS, 0x000000ff
.equ	M33_ITM_CIDR2_RESET, 0x00000005
# -----------------------------------------------------------------------------
# Field       : M33_ITM_CIDR2_PRMBL_2
# Description : See CoreSight Architecture Specification
.equ	M33_ITM_CIDR2_PRMBL_2_RESET, 0x05
.equ	M33_ITM_CIDR2_PRMBL_2_BITS, 0x000000ff
.equ	M33_ITM_CIDR2_PRMBL_2_MSB, 7
.equ	M33_ITM_CIDR2_PRMBL_2_LSB, 0
# =============================================================================
# Register    : M33_ITM_CIDR3
# Description : Provides CoreSight discovery information for the ITM
.equ	M33_ITM_CIDR3_OFFSET, 0x00000ffc
.equ	M33_ITM_CIDR3_BITS, 0x000000ff
.equ	M33_ITM_CIDR3_RESET, 0x000000b1
# -----------------------------------------------------------------------------
# Field       : M33_ITM_CIDR3_PRMBL_3
# Description : See CoreSight Architecture Specification
.equ	M33_ITM_CIDR3_PRMBL_3_RESET, 0xb1
.equ	M33_ITM_CIDR3_PRMBL_3_BITS, 0x000000ff
.equ	M33_ITM_CIDR3_PRMBL_3_MSB, 7
.equ	M33_ITM_CIDR3_PRMBL_3_LSB, 0
# =============================================================================
# Register    : M33_DWT_CTRL
# Description : Provides configuration and status information for the DWT unit,
#               and used to control features of the unit
.equ	M33_DWT_CTRL_OFFSET, 0x00001000
.equ	M33_DWT_CTRL_BITS, 0xffff1fff
.equ	M33_DWT_CTRL_RESET, 0x73741824
# -----------------------------------------------------------------------------
# Field       : M33_DWT_CTRL_NUMCOMP
# Description : Number of DWT comparators implemented
.equ	M33_DWT_CTRL_NUMCOMP_RESET, 0x7
.equ	M33_DWT_CTRL_NUMCOMP_BITS, 0xf0000000
.equ	M33_DWT_CTRL_NUMCOMP_MSB, 31
.equ	M33_DWT_CTRL_NUMCOMP_LSB, 28
# -----------------------------------------------------------------------------
# Field       : M33_DWT_CTRL_NOTRCPKT
# Description : Indicates whether the implementation does not support trace
.equ	M33_DWT_CTRL_NOTRCPKT_RESET, 0x0
.equ	M33_DWT_CTRL_NOTRCPKT_BITS, 0x08000000
.equ	M33_DWT_CTRL_NOTRCPKT_MSB, 27
.equ	M33_DWT_CTRL_NOTRCPKT_LSB, 27
# -----------------------------------------------------------------------------
# Field       : M33_DWT_CTRL_NOEXTTRIG
# Description : Reserved, RAZ
.equ	M33_DWT_CTRL_NOEXTTRIG_RESET, 0x0
.equ	M33_DWT_CTRL_NOEXTTRIG_BITS, 0x04000000
.equ	M33_DWT_CTRL_NOEXTTRIG_MSB, 26
.equ	M33_DWT_CTRL_NOEXTTRIG_LSB, 26
# -----------------------------------------------------------------------------
# Field       : M33_DWT_CTRL_NOCYCCNT
# Description : Indicates whether the implementation does not include a cycle
#               counter
.equ	M33_DWT_CTRL_NOCYCCNT_RESET, 0x1
.equ	M33_DWT_CTRL_NOCYCCNT_BITS, 0x02000000
.equ	M33_DWT_CTRL_NOCYCCNT_MSB, 25
.equ	M33_DWT_CTRL_NOCYCCNT_LSB, 25
# -----------------------------------------------------------------------------
# Field       : M33_DWT_CTRL_NOPRFCNT
# Description : Indicates whether the implementation does not include the
#               profiling counters
.equ	M33_DWT_CTRL_NOPRFCNT_RESET, 0x1
.equ	M33_DWT_CTRL_NOPRFCNT_BITS, 0x01000000
.equ	M33_DWT_CTRL_NOPRFCNT_MSB, 24
.equ	M33_DWT_CTRL_NOPRFCNT_LSB, 24
# -----------------------------------------------------------------------------
# Field       : M33_DWT_CTRL_CYCDISS
# Description : Controls whether the cycle counter is disabled in Secure state
.equ	M33_DWT_CTRL_CYCDISS_RESET, 0x0
.equ	M33_DWT_CTRL_CYCDISS_BITS, 0x00800000
.equ	M33_DWT_CTRL_CYCDISS_MSB, 23
.equ	M33_DWT_CTRL_CYCDISS_LSB, 23
# -----------------------------------------------------------------------------
# Field       : M33_DWT_CTRL_CYCEVTENA
# Description : Enables Event Counter packet generation on POSTCNT underflow
.equ	M33_DWT_CTRL_CYCEVTENA_RESET, 0x1
.equ	M33_DWT_CTRL_CYCEVTENA_BITS, 0x00400000
.equ	M33_DWT_CTRL_CYCEVTENA_MSB, 22
.equ	M33_DWT_CTRL_CYCEVTENA_LSB, 22
# -----------------------------------------------------------------------------
# Field       : M33_DWT_CTRL_FOLDEVTENA
# Description : Enables DWT_FOLDCNT counter
.equ	M33_DWT_CTRL_FOLDEVTENA_RESET, 0x1
.equ	M33_DWT_CTRL_FOLDEVTENA_BITS, 0x00200000
.equ	M33_DWT_CTRL_FOLDEVTENA_MSB, 21
.equ	M33_DWT_CTRL_FOLDEVTENA_LSB, 21
# -----------------------------------------------------------------------------
# Field       : M33_DWT_CTRL_LSUEVTENA
# Description : Enables DWT_LSUCNT counter
.equ	M33_DWT_CTRL_LSUEVTENA_RESET, 0x1
.equ	M33_DWT_CTRL_LSUEVTENA_BITS, 0x00100000
.equ	M33_DWT_CTRL_LSUEVTENA_MSB, 20
.equ	M33_DWT_CTRL_LSUEVTENA_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_DWT_CTRL_SLEEPEVTENA
# Description : Enable DWT_SLEEPCNT counter
.equ	M33_DWT_CTRL_SLEEPEVTENA_RESET, 0x0
.equ	M33_DWT_CTRL_SLEEPEVTENA_BITS, 0x00080000
.equ	M33_DWT_CTRL_SLEEPEVTENA_MSB, 19
.equ	M33_DWT_CTRL_SLEEPEVTENA_LSB, 19
# -----------------------------------------------------------------------------
# Field       : M33_DWT_CTRL_EXCEVTENA
# Description : Enables DWT_EXCCNT counter
.equ	M33_DWT_CTRL_EXCEVTENA_RESET, 0x1
.equ	M33_DWT_CTRL_EXCEVTENA_BITS, 0x00040000
.equ	M33_DWT_CTRL_EXCEVTENA_MSB, 18
.equ	M33_DWT_CTRL_EXCEVTENA_LSB, 18
# -----------------------------------------------------------------------------
# Field       : M33_DWT_CTRL_CPIEVTENA
# Description : Enables DWT_CPICNT counter
.equ	M33_DWT_CTRL_CPIEVTENA_RESET, 0x0
.equ	M33_DWT_CTRL_CPIEVTENA_BITS, 0x00020000
.equ	M33_DWT_CTRL_CPIEVTENA_MSB, 17
.equ	M33_DWT_CTRL_CPIEVTENA_LSB, 17
# -----------------------------------------------------------------------------
# Field       : M33_DWT_CTRL_EXTTRCENA
# Description : Enables generation of Exception Trace packets
.equ	M33_DWT_CTRL_EXTTRCENA_RESET, 0x0
.equ	M33_DWT_CTRL_EXTTRCENA_BITS, 0x00010000
.equ	M33_DWT_CTRL_EXTTRCENA_MSB, 16
.equ	M33_DWT_CTRL_EXTTRCENA_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_DWT_CTRL_PCSAMPLENA
# Description : Enables use of POSTCNT counter as a timer for Periodic PC
#               Sample packet generation
.equ	M33_DWT_CTRL_PCSAMPLENA_RESET, 0x1
.equ	M33_DWT_CTRL_PCSAMPLENA_BITS, 0x00001000
.equ	M33_DWT_CTRL_PCSAMPLENA_MSB, 12
.equ	M33_DWT_CTRL_PCSAMPLENA_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_DWT_CTRL_SYNCTAP
# Description : Selects the position of the synchronization packet counter tap
#               on the CYCCNT counter. This determines the Synchronization
#               packet rate
.equ	M33_DWT_CTRL_SYNCTAP_RESET, 0x2
.equ	M33_DWT_CTRL_SYNCTAP_BITS, 0x00000c00
.equ	M33_DWT_CTRL_SYNCTAP_MSB, 11
.equ	M33_DWT_CTRL_SYNCTAP_LSB, 10
# -----------------------------------------------------------------------------
# Field       : M33_DWT_CTRL_CYCTAP
# Description : Selects the position of the POSTCNT tap on the CYCCNT counter
.equ	M33_DWT_CTRL_CYCTAP_RESET, 0x0
.equ	M33_DWT_CTRL_CYCTAP_BITS, 0x00000200
.equ	M33_DWT_CTRL_CYCTAP_MSB, 9
.equ	M33_DWT_CTRL_CYCTAP_LSB, 9
# -----------------------------------------------------------------------------
# Field       : M33_DWT_CTRL_POSTINIT
# Description : Initial value for the POSTCNT counter
.equ	M33_DWT_CTRL_POSTINIT_RESET, 0x1
.equ	M33_DWT_CTRL_POSTINIT_BITS, 0x000001e0
.equ	M33_DWT_CTRL_POSTINIT_MSB, 8
.equ	M33_DWT_CTRL_POSTINIT_LSB, 5
# -----------------------------------------------------------------------------
# Field       : M33_DWT_CTRL_POSTPRESET
# Description : Reload value for the POSTCNT counter
.equ	M33_DWT_CTRL_POSTPRESET_RESET, 0x2
.equ	M33_DWT_CTRL_POSTPRESET_BITS, 0x0000001e
.equ	M33_DWT_CTRL_POSTPRESET_MSB, 4
.equ	M33_DWT_CTRL_POSTPRESET_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_DWT_CTRL_CYCCNTENA
# Description : Enables CYCCNT
.equ	M33_DWT_CTRL_CYCCNTENA_RESET, 0x0
.equ	M33_DWT_CTRL_CYCCNTENA_BITS, 0x00000001
.equ	M33_DWT_CTRL_CYCCNTENA_MSB, 0
.equ	M33_DWT_CTRL_CYCCNTENA_LSB, 0
# =============================================================================
# Register    : M33_DWT_CYCCNT
# Description : Shows or sets the value of the processor cycle counter, CYCCNT
.equ	M33_DWT_CYCCNT_OFFSET, 0x00001004
.equ	M33_DWT_CYCCNT_BITS, 0xffffffff
.equ	M33_DWT_CYCCNT_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_DWT_CYCCNT_CYCCNT
# Description : Increments one on each processor clock cycle when
#               DWT_CTRL.CYCCNTENA == 1 and DEMCR.TRCENA == 1. On overflow,
#               CYCCNT wraps to zero
.equ	M33_DWT_CYCCNT_CYCCNT_RESET, 0x00000000
.equ	M33_DWT_CYCCNT_CYCCNT_BITS, 0xffffffff
.equ	M33_DWT_CYCCNT_CYCCNT_MSB, 31
.equ	M33_DWT_CYCCNT_CYCCNT_LSB, 0
# =============================================================================
# Register    : M33_DWT_EXCCNT
# Description : Counts the total cycles spent in exception processing
.equ	M33_DWT_EXCCNT_OFFSET, 0x0000100c
.equ	M33_DWT_EXCCNT_BITS, 0x000000ff
.equ	M33_DWT_EXCCNT_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_DWT_EXCCNT_EXCCNT
# Description : Counts one on each cycle when all of the following are true: -
#               DWT_CTRL.EXCEVTENA == 1 and DEMCR.TRCENA == 1. - No instruction
#               is executed, see DWT_CPICNT. - An exception-entry or exception-
#               exit related operation is in progress. - Either
#               SecureNoninvasiveDebugAllowed() == TRUE, or NS-Req for the
#               operation is set to Non-secure and NoninvasiveDebugAllowed() ==
#               TRUE.
.equ	M33_DWT_EXCCNT_EXCCNT_RESET, 0x00
.equ	M33_DWT_EXCCNT_EXCCNT_BITS, 0x000000ff
.equ	M33_DWT_EXCCNT_EXCCNT_MSB, 7
.equ	M33_DWT_EXCCNT_EXCCNT_LSB, 0
# =============================================================================
# Register    : M33_DWT_LSUCNT
# Description : Increments on the additional cycles required to execute all
#               load or store instructions
.equ	M33_DWT_LSUCNT_OFFSET, 0x00001014
.equ	M33_DWT_LSUCNT_BITS, 0x000000ff
.equ	M33_DWT_LSUCNT_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_DWT_LSUCNT_LSUCNT
# Description : Counts one on each cycle when all of the following are true: -
#               DWT_CTRL.LSUEVTENA == 1 and DEMCR.TRCENA == 1. - No instruction
#               is executed, see DWT_CPICNT. - No exception-entry or exception-
#               exit operation is in progress, see DWT_EXCCNT. - A load-store
#               operation is in progress. - Either
#               SecureNoninvasiveDebugAllowed() == TRUE, or NS-Req for the
#               operation is set to Non-secure and NoninvasiveDebugAllowed() ==
#               TRUE.
.equ	M33_DWT_LSUCNT_LSUCNT_RESET, 0x00
.equ	M33_DWT_LSUCNT_LSUCNT_BITS, 0x000000ff
.equ	M33_DWT_LSUCNT_LSUCNT_MSB, 7
.equ	M33_DWT_LSUCNT_LSUCNT_LSB, 0
# =============================================================================
# Register    : M33_DWT_FOLDCNT
# Description : Increments on the additional cycles required to execute all
#               load or store instructions
.equ	M33_DWT_FOLDCNT_OFFSET, 0x00001018
.equ	M33_DWT_FOLDCNT_BITS, 0x000000ff
.equ	M33_DWT_FOLDCNT_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_DWT_FOLDCNT_FOLDCNT
# Description : Counts on each cycle when all of the following are true: -
#               DWT_CTRL.FOLDEVTENA == 1 and DEMCR.TRCENA == 1. - At least two
#               instructions are executed, see DWT_CPICNT. - Either
#               SecureNoninvasiveDebugAllowed() == TRUE, or the PE is in Non-
#               secure state and NoninvasiveDebugAllowed() == TRUE. The counter
#               is incremented by the number of instructions executed, minus
#               one
.equ	M33_DWT_FOLDCNT_FOLDCNT_RESET, 0x00
.equ	M33_DWT_FOLDCNT_FOLDCNT_BITS, 0x000000ff
.equ	M33_DWT_FOLDCNT_FOLDCNT_MSB, 7
.equ	M33_DWT_FOLDCNT_FOLDCNT_LSB, 0
# =============================================================================
# Register    : M33_DWT_COMP0
# Description : Provides a reference value for use by watchpoint comparator 0
.equ	M33_DWT_COMP0_OFFSET, 0x00001020
.equ	M33_DWT_COMP0_BITS, 0xffffffff
.equ	M33_DWT_COMP0_RESET, 0x00000000
.equ	M33_DWT_COMP0_MSB, 31
.equ	M33_DWT_COMP0_LSB, 0
# =============================================================================
# Register    : M33_DWT_FUNCTION0
# Description : Controls the operation of watchpoint comparator 0
.equ	M33_DWT_FUNCTION0_OFFSET, 0x00001028
.equ	M33_DWT_FUNCTION0_BITS, 0xf9000c3f
.equ	M33_DWT_FUNCTION0_RESET, 0x58000000
# -----------------------------------------------------------------------------
# Field       : M33_DWT_FUNCTION0_ID
# Description : Identifies the capabilities for MATCH for comparator *n
.equ	M33_DWT_FUNCTION0_ID_RESET, 0x0b
.equ	M33_DWT_FUNCTION0_ID_BITS, 0xf8000000
.equ	M33_DWT_FUNCTION0_ID_MSB, 31
.equ	M33_DWT_FUNCTION0_ID_LSB, 27
# -----------------------------------------------------------------------------
# Field       : M33_DWT_FUNCTION0_MATCHED
# Description : Set to 1 when the comparator matches
.equ	M33_DWT_FUNCTION0_MATCHED_RESET, 0x0
.equ	M33_DWT_FUNCTION0_MATCHED_BITS, 0x01000000
.equ	M33_DWT_FUNCTION0_MATCHED_MSB, 24
.equ	M33_DWT_FUNCTION0_MATCHED_LSB, 24
# -----------------------------------------------------------------------------
# Field       : M33_DWT_FUNCTION0_DATAVSIZE
# Description : Defines the size of the object being watched for by Data Value
#               and Data Address comparators
.equ	M33_DWT_FUNCTION0_DATAVSIZE_RESET, 0x0
.equ	M33_DWT_FUNCTION0_DATAVSIZE_BITS, 0x00000c00
.equ	M33_DWT_FUNCTION0_DATAVSIZE_MSB, 11
.equ	M33_DWT_FUNCTION0_DATAVSIZE_LSB, 10
# -----------------------------------------------------------------------------
# Field       : M33_DWT_FUNCTION0_ACTION
# Description : Defines the action on a match. This field is ignored and the
#               comparator generates no actions if it is disabled by MATCH
.equ	M33_DWT_FUNCTION0_ACTION_RESET, 0x0
.equ	M33_DWT_FUNCTION0_ACTION_BITS, 0x00000030
.equ	M33_DWT_FUNCTION0_ACTION_MSB, 5
.equ	M33_DWT_FUNCTION0_ACTION_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_DWT_FUNCTION0_MATCH
# Description : Controls the type of match generated by this comparator
.equ	M33_DWT_FUNCTION0_MATCH_RESET, 0x0
.equ	M33_DWT_FUNCTION0_MATCH_BITS, 0x0000000f
.equ	M33_DWT_FUNCTION0_MATCH_MSB, 3
.equ	M33_DWT_FUNCTION0_MATCH_LSB, 0
# =============================================================================
# Register    : M33_DWT_COMP1
# Description : Provides a reference value for use by watchpoint comparator 1
.equ	M33_DWT_COMP1_OFFSET, 0x00001030
.equ	M33_DWT_COMP1_BITS, 0xffffffff
.equ	M33_DWT_COMP1_RESET, 0x00000000
.equ	M33_DWT_COMP1_MSB, 31
.equ	M33_DWT_COMP1_LSB, 0
# =============================================================================
# Register    : M33_DWT_FUNCTION1
# Description : Controls the operation of watchpoint comparator 1
.equ	M33_DWT_FUNCTION1_OFFSET, 0x00001038
.equ	M33_DWT_FUNCTION1_BITS, 0xf9000c3f
.equ	M33_DWT_FUNCTION1_RESET, 0x89000828
# -----------------------------------------------------------------------------
# Field       : M33_DWT_FUNCTION1_ID
# Description : Identifies the capabilities for MATCH for comparator *n
.equ	M33_DWT_FUNCTION1_ID_RESET, 0x11
.equ	M33_DWT_FUNCTION1_ID_BITS, 0xf8000000
.equ	M33_DWT_FUNCTION1_ID_MSB, 31
.equ	M33_DWT_FUNCTION1_ID_LSB, 27
# -----------------------------------------------------------------------------
# Field       : M33_DWT_FUNCTION1_MATCHED
# Description : Set to 1 when the comparator matches
.equ	M33_DWT_FUNCTION1_MATCHED_RESET, 0x1
.equ	M33_DWT_FUNCTION1_MATCHED_BITS, 0x01000000
.equ	M33_DWT_FUNCTION1_MATCHED_MSB, 24
.equ	M33_DWT_FUNCTION1_MATCHED_LSB, 24
# -----------------------------------------------------------------------------
# Field       : M33_DWT_FUNCTION1_DATAVSIZE
# Description : Defines the size of the object being watched for by Data Value
#               and Data Address comparators
.equ	M33_DWT_FUNCTION1_DATAVSIZE_RESET, 0x2
.equ	M33_DWT_FUNCTION1_DATAVSIZE_BITS, 0x00000c00
.equ	M33_DWT_FUNCTION1_DATAVSIZE_MSB, 11
.equ	M33_DWT_FUNCTION1_DATAVSIZE_LSB, 10
# -----------------------------------------------------------------------------
# Field       : M33_DWT_FUNCTION1_ACTION
# Description : Defines the action on a match. This field is ignored and the
#               comparator generates no actions if it is disabled by MATCH
.equ	M33_DWT_FUNCTION1_ACTION_RESET, 0x2
.equ	M33_DWT_FUNCTION1_ACTION_BITS, 0x00000030
.equ	M33_DWT_FUNCTION1_ACTION_MSB, 5
.equ	M33_DWT_FUNCTION1_ACTION_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_DWT_FUNCTION1_MATCH
# Description : Controls the type of match generated by this comparator
.equ	M33_DWT_FUNCTION1_MATCH_RESET, 0x8
.equ	M33_DWT_FUNCTION1_MATCH_BITS, 0x0000000f
.equ	M33_DWT_FUNCTION1_MATCH_MSB, 3
.equ	M33_DWT_FUNCTION1_MATCH_LSB, 0
# =============================================================================
# Register    : M33_DWT_COMP2
# Description : Provides a reference value for use by watchpoint comparator 2
.equ	M33_DWT_COMP2_OFFSET, 0x00001040
.equ	M33_DWT_COMP2_BITS, 0xffffffff
.equ	M33_DWT_COMP2_RESET, 0x00000000
.equ	M33_DWT_COMP2_MSB, 31
.equ	M33_DWT_COMP2_LSB, 0
# =============================================================================
# Register    : M33_DWT_FUNCTION2
# Description : Controls the operation of watchpoint comparator 2
.equ	M33_DWT_FUNCTION2_OFFSET, 0x00001048
.equ	M33_DWT_FUNCTION2_BITS, 0xf9000c3f
.equ	M33_DWT_FUNCTION2_RESET, 0x50000000
# -----------------------------------------------------------------------------
# Field       : M33_DWT_FUNCTION2_ID
# Description : Identifies the capabilities for MATCH for comparator *n
.equ	M33_DWT_FUNCTION2_ID_RESET, 0x0a
.equ	M33_DWT_FUNCTION2_ID_BITS, 0xf8000000
.equ	M33_DWT_FUNCTION2_ID_MSB, 31
.equ	M33_DWT_FUNCTION2_ID_LSB, 27
# -----------------------------------------------------------------------------
# Field       : M33_DWT_FUNCTION2_MATCHED
# Description : Set to 1 when the comparator matches
.equ	M33_DWT_FUNCTION2_MATCHED_RESET, 0x0
.equ	M33_DWT_FUNCTION2_MATCHED_BITS, 0x01000000
.equ	M33_DWT_FUNCTION2_MATCHED_MSB, 24
.equ	M33_DWT_FUNCTION2_MATCHED_LSB, 24
# -----------------------------------------------------------------------------
# Field       : M33_DWT_FUNCTION2_DATAVSIZE
# Description : Defines the size of the object being watched for by Data Value
#               and Data Address comparators
.equ	M33_DWT_FUNCTION2_DATAVSIZE_RESET, 0x0
.equ	M33_DWT_FUNCTION2_DATAVSIZE_BITS, 0x00000c00
.equ	M33_DWT_FUNCTION2_DATAVSIZE_MSB, 11
.equ	M33_DWT_FUNCTION2_DATAVSIZE_LSB, 10
# -----------------------------------------------------------------------------
# Field       : M33_DWT_FUNCTION2_ACTION
# Description : Defines the action on a match. This field is ignored and the
#               comparator generates no actions if it is disabled by MATCH
.equ	M33_DWT_FUNCTION2_ACTION_RESET, 0x0
.equ	M33_DWT_FUNCTION2_ACTION_BITS, 0x00000030
.equ	M33_DWT_FUNCTION2_ACTION_MSB, 5
.equ	M33_DWT_FUNCTION2_ACTION_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_DWT_FUNCTION2_MATCH
# Description : Controls the type of match generated by this comparator
.equ	M33_DWT_FUNCTION2_MATCH_RESET, 0x0
.equ	M33_DWT_FUNCTION2_MATCH_BITS, 0x0000000f
.equ	M33_DWT_FUNCTION2_MATCH_MSB, 3
.equ	M33_DWT_FUNCTION2_MATCH_LSB, 0
# =============================================================================
# Register    : M33_DWT_COMP3
# Description : Provides a reference value for use by watchpoint comparator 3
.equ	M33_DWT_COMP3_OFFSET, 0x00001050
.equ	M33_DWT_COMP3_BITS, 0xffffffff
.equ	M33_DWT_COMP3_RESET, 0x00000000
.equ	M33_DWT_COMP3_MSB, 31
.equ	M33_DWT_COMP3_LSB, 0
# =============================================================================
# Register    : M33_DWT_FUNCTION3
# Description : Controls the operation of watchpoint comparator 3
.equ	M33_DWT_FUNCTION3_OFFSET, 0x00001058
.equ	M33_DWT_FUNCTION3_BITS, 0xf9000c3f
.equ	M33_DWT_FUNCTION3_RESET, 0x20000800
# -----------------------------------------------------------------------------
# Field       : M33_DWT_FUNCTION3_ID
# Description : Identifies the capabilities for MATCH for comparator *n
.equ	M33_DWT_FUNCTION3_ID_RESET, 0x04
.equ	M33_DWT_FUNCTION3_ID_BITS, 0xf8000000
.equ	M33_DWT_FUNCTION3_ID_MSB, 31
.equ	M33_DWT_FUNCTION3_ID_LSB, 27
# -----------------------------------------------------------------------------
# Field       : M33_DWT_FUNCTION3_MATCHED
# Description : Set to 1 when the comparator matches
.equ	M33_DWT_FUNCTION3_MATCHED_RESET, 0x0
.equ	M33_DWT_FUNCTION3_MATCHED_BITS, 0x01000000
.equ	M33_DWT_FUNCTION3_MATCHED_MSB, 24
.equ	M33_DWT_FUNCTION3_MATCHED_LSB, 24
# -----------------------------------------------------------------------------
# Field       : M33_DWT_FUNCTION3_DATAVSIZE
# Description : Defines the size of the object being watched for by Data Value
#               and Data Address comparators
.equ	M33_DWT_FUNCTION3_DATAVSIZE_RESET, 0x2
.equ	M33_DWT_FUNCTION3_DATAVSIZE_BITS, 0x00000c00
.equ	M33_DWT_FUNCTION3_DATAVSIZE_MSB, 11
.equ	M33_DWT_FUNCTION3_DATAVSIZE_LSB, 10
# -----------------------------------------------------------------------------
# Field       : M33_DWT_FUNCTION3_ACTION
# Description : Defines the action on a match. This field is ignored and the
#               comparator generates no actions if it is disabled by MATCH
.equ	M33_DWT_FUNCTION3_ACTION_RESET, 0x0
.equ	M33_DWT_FUNCTION3_ACTION_BITS, 0x00000030
.equ	M33_DWT_FUNCTION3_ACTION_MSB, 5
.equ	M33_DWT_FUNCTION3_ACTION_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_DWT_FUNCTION3_MATCH
# Description : Controls the type of match generated by this comparator
.equ	M33_DWT_FUNCTION3_MATCH_RESET, 0x0
.equ	M33_DWT_FUNCTION3_MATCH_BITS, 0x0000000f
.equ	M33_DWT_FUNCTION3_MATCH_MSB, 3
.equ	M33_DWT_FUNCTION3_MATCH_LSB, 0
# =============================================================================
# Register    : M33_DWT_DEVARCH
# Description : Provides CoreSight discovery information for the DWT
.equ	M33_DWT_DEVARCH_OFFSET, 0x00001fbc
.equ	M33_DWT_DEVARCH_BITS, 0xffffffff
.equ	M33_DWT_DEVARCH_RESET, 0x47701a02
# -----------------------------------------------------------------------------
# Field       : M33_DWT_DEVARCH_ARCHITECT
# Description : Defines the architect of the component. Bits [31:28] are the
#               JEP106 continuation code (JEP106 bank ID, minus 1) and bits
#               [27:21] are the JEP106 ID code.
.equ	M33_DWT_DEVARCH_ARCHITECT_RESET, 0x23b
.equ	M33_DWT_DEVARCH_ARCHITECT_BITS, 0xffe00000
.equ	M33_DWT_DEVARCH_ARCHITECT_MSB, 31
.equ	M33_DWT_DEVARCH_ARCHITECT_LSB, 21
# -----------------------------------------------------------------------------
# Field       : M33_DWT_DEVARCH_PRESENT
# Description : Defines that the DEVARCH register is present
.equ	M33_DWT_DEVARCH_PRESENT_RESET, 0x1
.equ	M33_DWT_DEVARCH_PRESENT_BITS, 0x00100000
.equ	M33_DWT_DEVARCH_PRESENT_MSB, 20
.equ	M33_DWT_DEVARCH_PRESENT_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_DWT_DEVARCH_REVISION
# Description : Defines the architecture revision of the component
.equ	M33_DWT_DEVARCH_REVISION_RESET, 0x0
.equ	M33_DWT_DEVARCH_REVISION_BITS, 0x000f0000
.equ	M33_DWT_DEVARCH_REVISION_MSB, 19
.equ	M33_DWT_DEVARCH_REVISION_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_DWT_DEVARCH_ARCHVER
# Description : Defines the architecture version of the component
.equ	M33_DWT_DEVARCH_ARCHVER_RESET, 0x1
.equ	M33_DWT_DEVARCH_ARCHVER_BITS, 0x0000f000
.equ	M33_DWT_DEVARCH_ARCHVER_MSB, 15
.equ	M33_DWT_DEVARCH_ARCHVER_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_DWT_DEVARCH_ARCHPART
# Description : Defines the architecture of the component
.equ	M33_DWT_DEVARCH_ARCHPART_RESET, 0xa02
.equ	M33_DWT_DEVARCH_ARCHPART_BITS, 0x00000fff
.equ	M33_DWT_DEVARCH_ARCHPART_MSB, 11
.equ	M33_DWT_DEVARCH_ARCHPART_LSB, 0
# =============================================================================
# Register    : M33_DWT_DEVTYPE
# Description : Provides CoreSight discovery information for the DWT
.equ	M33_DWT_DEVTYPE_OFFSET, 0x00001fcc
.equ	M33_DWT_DEVTYPE_BITS, 0x000000ff
.equ	M33_DWT_DEVTYPE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_DWT_DEVTYPE_SUB
# Description : Component sub-type
.equ	M33_DWT_DEVTYPE_SUB_RESET, 0x0
.equ	M33_DWT_DEVTYPE_SUB_BITS, 0x000000f0
.equ	M33_DWT_DEVTYPE_SUB_MSB, 7
.equ	M33_DWT_DEVTYPE_SUB_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_DWT_DEVTYPE_MAJOR
# Description : Component major type
.equ	M33_DWT_DEVTYPE_MAJOR_RESET, 0x0
.equ	M33_DWT_DEVTYPE_MAJOR_BITS, 0x0000000f
.equ	M33_DWT_DEVTYPE_MAJOR_MSB, 3
.equ	M33_DWT_DEVTYPE_MAJOR_LSB, 0
# =============================================================================
# Register    : M33_DWT_PIDR4
# Description : Provides CoreSight discovery information for the DWT
.equ	M33_DWT_PIDR4_OFFSET, 0x00001fd0
.equ	M33_DWT_PIDR4_BITS, 0x000000ff
.equ	M33_DWT_PIDR4_RESET, 0x00000004
# -----------------------------------------------------------------------------
# Field       : M33_DWT_PIDR4_SIZE
# Description : See CoreSight Architecture Specification
.equ	M33_DWT_PIDR4_SIZE_RESET, 0x0
.equ	M33_DWT_PIDR4_SIZE_BITS, 0x000000f0
.equ	M33_DWT_PIDR4_SIZE_MSB, 7
.equ	M33_DWT_PIDR4_SIZE_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_DWT_PIDR4_DES_2
# Description : See CoreSight Architecture Specification
.equ	M33_DWT_PIDR4_DES_2_RESET, 0x4
.equ	M33_DWT_PIDR4_DES_2_BITS, 0x0000000f
.equ	M33_DWT_PIDR4_DES_2_MSB, 3
.equ	M33_DWT_PIDR4_DES_2_LSB, 0
# =============================================================================
# Register    : M33_DWT_PIDR5
# Description : Provides CoreSight discovery information for the DWT
.equ	M33_DWT_PIDR5_OFFSET, 0x00001fd4
.equ	M33_DWT_PIDR5_BITS, 0x00000000
.equ	M33_DWT_PIDR5_RESET, 0x00000000
.equ	M33_DWT_PIDR5_MSB, 31
.equ	M33_DWT_PIDR5_LSB, 0
# =============================================================================
# Register    : M33_DWT_PIDR6
# Description : Provides CoreSight discovery information for the DWT
.equ	M33_DWT_PIDR6_OFFSET, 0x00001fd8
.equ	M33_DWT_PIDR6_BITS, 0x00000000
.equ	M33_DWT_PIDR6_RESET, 0x00000000
.equ	M33_DWT_PIDR6_MSB, 31
.equ	M33_DWT_PIDR6_LSB, 0
# =============================================================================
# Register    : M33_DWT_PIDR7
# Description : Provides CoreSight discovery information for the DWT
.equ	M33_DWT_PIDR7_OFFSET, 0x00001fdc
.equ	M33_DWT_PIDR7_BITS, 0x00000000
.equ	M33_DWT_PIDR7_RESET, 0x00000000
.equ	M33_DWT_PIDR7_MSB, 31
.equ	M33_DWT_PIDR7_LSB, 0
# =============================================================================
# Register    : M33_DWT_PIDR0
# Description : Provides CoreSight discovery information for the DWT
.equ	M33_DWT_PIDR0_OFFSET, 0x00001fe0
.equ	M33_DWT_PIDR0_BITS, 0x000000ff
.equ	M33_DWT_PIDR0_RESET, 0x00000021
# -----------------------------------------------------------------------------
# Field       : M33_DWT_PIDR0_PART_0
# Description : See CoreSight Architecture Specification
.equ	M33_DWT_PIDR0_PART_0_RESET, 0x21
.equ	M33_DWT_PIDR0_PART_0_BITS, 0x000000ff
.equ	M33_DWT_PIDR0_PART_0_MSB, 7
.equ	M33_DWT_PIDR0_PART_0_LSB, 0
# =============================================================================
# Register    : M33_DWT_PIDR1
# Description : Provides CoreSight discovery information for the DWT
.equ	M33_DWT_PIDR1_OFFSET, 0x00001fe4
.equ	M33_DWT_PIDR1_BITS, 0x000000ff
.equ	M33_DWT_PIDR1_RESET, 0x000000bd
# -----------------------------------------------------------------------------
# Field       : M33_DWT_PIDR1_DES_0
# Description : See CoreSight Architecture Specification
.equ	M33_DWT_PIDR1_DES_0_RESET, 0xb
.equ	M33_DWT_PIDR1_DES_0_BITS, 0x000000f0
.equ	M33_DWT_PIDR1_DES_0_MSB, 7
.equ	M33_DWT_PIDR1_DES_0_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_DWT_PIDR1_PART_1
# Description : See CoreSight Architecture Specification
.equ	M33_DWT_PIDR1_PART_1_RESET, 0xd
.equ	M33_DWT_PIDR1_PART_1_BITS, 0x0000000f
.equ	M33_DWT_PIDR1_PART_1_MSB, 3
.equ	M33_DWT_PIDR1_PART_1_LSB, 0
# =============================================================================
# Register    : M33_DWT_PIDR2
# Description : Provides CoreSight discovery information for the DWT
.equ	M33_DWT_PIDR2_OFFSET, 0x00001fe8
.equ	M33_DWT_PIDR2_BITS, 0x000000ff
.equ	M33_DWT_PIDR2_RESET, 0x0000000b
# -----------------------------------------------------------------------------
# Field       : M33_DWT_PIDR2_REVISION
# Description : See CoreSight Architecture Specification
.equ	M33_DWT_PIDR2_REVISION_RESET, 0x0
.equ	M33_DWT_PIDR2_REVISION_BITS, 0x000000f0
.equ	M33_DWT_PIDR2_REVISION_MSB, 7
.equ	M33_DWT_PIDR2_REVISION_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_DWT_PIDR2_JEDEC
# Description : See CoreSight Architecture Specification
.equ	M33_DWT_PIDR2_JEDEC_RESET, 0x1
.equ	M33_DWT_PIDR2_JEDEC_BITS, 0x00000008
.equ	M33_DWT_PIDR2_JEDEC_MSB, 3
.equ	M33_DWT_PIDR2_JEDEC_LSB, 3
# -----------------------------------------------------------------------------
# Field       : M33_DWT_PIDR2_DES_1
# Description : See CoreSight Architecture Specification
.equ	M33_DWT_PIDR2_DES_1_RESET, 0x3
.equ	M33_DWT_PIDR2_DES_1_BITS, 0x00000007
.equ	M33_DWT_PIDR2_DES_1_MSB, 2
.equ	M33_DWT_PIDR2_DES_1_LSB, 0
# =============================================================================
# Register    : M33_DWT_PIDR3
# Description : Provides CoreSight discovery information for the DWT
.equ	M33_DWT_PIDR3_OFFSET, 0x00001fec
.equ	M33_DWT_PIDR3_BITS, 0x000000ff
.equ	M33_DWT_PIDR3_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_DWT_PIDR3_REVAND
# Description : See CoreSight Architecture Specification
.equ	M33_DWT_PIDR3_REVAND_RESET, 0x0
.equ	M33_DWT_PIDR3_REVAND_BITS, 0x000000f0
.equ	M33_DWT_PIDR3_REVAND_MSB, 7
.equ	M33_DWT_PIDR3_REVAND_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_DWT_PIDR3_CMOD
# Description : See CoreSight Architecture Specification
.equ	M33_DWT_PIDR3_CMOD_RESET, 0x0
.equ	M33_DWT_PIDR3_CMOD_BITS, 0x0000000f
.equ	M33_DWT_PIDR3_CMOD_MSB, 3
.equ	M33_DWT_PIDR3_CMOD_LSB, 0
# =============================================================================
# Register    : M33_DWT_CIDR0
# Description : Provides CoreSight discovery information for the DWT
.equ	M33_DWT_CIDR0_OFFSET, 0x00001ff0
.equ	M33_DWT_CIDR0_BITS, 0x000000ff
.equ	M33_DWT_CIDR0_RESET, 0x0000000d
# -----------------------------------------------------------------------------
# Field       : M33_DWT_CIDR0_PRMBL_0
# Description : See CoreSight Architecture Specification
.equ	M33_DWT_CIDR0_PRMBL_0_RESET, 0x0d
.equ	M33_DWT_CIDR0_PRMBL_0_BITS, 0x000000ff
.equ	M33_DWT_CIDR0_PRMBL_0_MSB, 7
.equ	M33_DWT_CIDR0_PRMBL_0_LSB, 0
# =============================================================================
# Register    : M33_DWT_CIDR1
# Description : Provides CoreSight discovery information for the DWT
.equ	M33_DWT_CIDR1_OFFSET, 0x00001ff4
.equ	M33_DWT_CIDR1_BITS, 0x000000ff
.equ	M33_DWT_CIDR1_RESET, 0x00000090
# -----------------------------------------------------------------------------
# Field       : M33_DWT_CIDR1_CLASS
# Description : See CoreSight Architecture Specification
.equ	M33_DWT_CIDR1_CLASS_RESET, 0x9
.equ	M33_DWT_CIDR1_CLASS_BITS, 0x000000f0
.equ	M33_DWT_CIDR1_CLASS_MSB, 7
.equ	M33_DWT_CIDR1_CLASS_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_DWT_CIDR1_PRMBL_1
# Description : See CoreSight Architecture Specification
.equ	M33_DWT_CIDR1_PRMBL_1_RESET, 0x0
.equ	M33_DWT_CIDR1_PRMBL_1_BITS, 0x0000000f
.equ	M33_DWT_CIDR1_PRMBL_1_MSB, 3
.equ	M33_DWT_CIDR1_PRMBL_1_LSB, 0
# =============================================================================
# Register    : M33_DWT_CIDR2
# Description : Provides CoreSight discovery information for the DWT
.equ	M33_DWT_CIDR2_OFFSET, 0x00001ff8
.equ	M33_DWT_CIDR2_BITS, 0x000000ff
.equ	M33_DWT_CIDR2_RESET, 0x00000005
# -----------------------------------------------------------------------------
# Field       : M33_DWT_CIDR2_PRMBL_2
# Description : See CoreSight Architecture Specification
.equ	M33_DWT_CIDR2_PRMBL_2_RESET, 0x05
.equ	M33_DWT_CIDR2_PRMBL_2_BITS, 0x000000ff
.equ	M33_DWT_CIDR2_PRMBL_2_MSB, 7
.equ	M33_DWT_CIDR2_PRMBL_2_LSB, 0
# =============================================================================
# Register    : M33_DWT_CIDR3
# Description : Provides CoreSight discovery information for the DWT
.equ	M33_DWT_CIDR3_OFFSET, 0x00001ffc
.equ	M33_DWT_CIDR3_BITS, 0x000000ff
.equ	M33_DWT_CIDR3_RESET, 0x000000b1
# -----------------------------------------------------------------------------
# Field       : M33_DWT_CIDR3_PRMBL_3
# Description : See CoreSight Architecture Specification
.equ	M33_DWT_CIDR3_PRMBL_3_RESET, 0xb1
.equ	M33_DWT_CIDR3_PRMBL_3_BITS, 0x000000ff
.equ	M33_DWT_CIDR3_PRMBL_3_MSB, 7
.equ	M33_DWT_CIDR3_PRMBL_3_LSB, 0
# =============================================================================
# Register    : M33_FP_CTRL
# Description : Provides FPB implementation information, and the global enable
#               for the FPB unit
.equ	M33_FP_CTRL_OFFSET, 0x00002000
.equ	M33_FP_CTRL_BITS, 0xf0007ff3
.equ	M33_FP_CTRL_RESET, 0x60005580
# -----------------------------------------------------------------------------
# Field       : M33_FP_CTRL_REV
# Description : Flash Patch and Breakpoint Unit architecture revision
.equ	M33_FP_CTRL_REV_RESET, 0x6
.equ	M33_FP_CTRL_REV_BITS, 0xf0000000
.equ	M33_FP_CTRL_REV_MSB, 31
.equ	M33_FP_CTRL_REV_LSB, 28
# -----------------------------------------------------------------------------
# Field       : M33_FP_CTRL_NUM_CODE_14_12_
# Description : Indicates the number of implemented instruction address
#               comparators. Zero indicates no Instruction Address comparators
#               are implemented. The Instruction Address comparators are
#               numbered from 0 to NUM_CODE - 1
.equ	M33_FP_CTRL_NUM_CODE_14_12__RESET, 0x5
.equ	M33_FP_CTRL_NUM_CODE_14_12__BITS, 0x00007000
.equ	M33_FP_CTRL_NUM_CODE_14_12__MSB, 14
.equ	M33_FP_CTRL_NUM_CODE_14_12__LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_FP_CTRL_NUM_LIT
# Description : Indicates the number of implemented literal address
#               comparators. The Literal Address comparators are numbered from
#               NUM_CODE to NUM_CODE + NUM_LIT - 1
.equ	M33_FP_CTRL_NUM_LIT_RESET, 0x5
.equ	M33_FP_CTRL_NUM_LIT_BITS, 0x00000f00
.equ	M33_FP_CTRL_NUM_LIT_MSB, 11
.equ	M33_FP_CTRL_NUM_LIT_LSB, 8
# -----------------------------------------------------------------------------
# Field       : M33_FP_CTRL_NUM_CODE_7_4_
# Description : Indicates the number of implemented instruction address
#               comparators. Zero indicates no Instruction Address comparators
#               are implemented. The Instruction Address comparators are
#               numbered from 0 to NUM_CODE - 1
.equ	M33_FP_CTRL_NUM_CODE_7_4__RESET, 0x8
.equ	M33_FP_CTRL_NUM_CODE_7_4__BITS, 0x000000f0
.equ	M33_FP_CTRL_NUM_CODE_7_4__MSB, 7
.equ	M33_FP_CTRL_NUM_CODE_7_4__LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_FP_CTRL_KEY
# Description : Writes to the FP_CTRL are ignored unless KEY is concurrently
#               written to one
.equ	M33_FP_CTRL_KEY_RESET, 0x0
.equ	M33_FP_CTRL_KEY_BITS, 0x00000002
.equ	M33_FP_CTRL_KEY_MSB, 1
.equ	M33_FP_CTRL_KEY_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_FP_CTRL_ENABLE
# Description : Enables the FPB
.equ	M33_FP_CTRL_ENABLE_RESET, 0x0
.equ	M33_FP_CTRL_ENABLE_BITS, 0x00000001
.equ	M33_FP_CTRL_ENABLE_MSB, 0
.equ	M33_FP_CTRL_ENABLE_LSB, 0
# =============================================================================
# Register    : M33_FP_REMAP
# Description : Indicates whether the implementation supports Flash Patch remap
#               and, if it does, holds the target address for remap
.equ	M33_FP_REMAP_OFFSET, 0x00002004
.equ	M33_FP_REMAP_BITS, 0x3fffffe0
.equ	M33_FP_REMAP_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_FP_REMAP_RMPSPT
# Description : Indicates whether the FPB unit supports the Flash Patch remap
#               function
.equ	M33_FP_REMAP_RMPSPT_RESET, 0x0
.equ	M33_FP_REMAP_RMPSPT_BITS, 0x20000000
.equ	M33_FP_REMAP_RMPSPT_MSB, 29
.equ	M33_FP_REMAP_RMPSPT_LSB, 29
# -----------------------------------------------------------------------------
# Field       : M33_FP_REMAP_REMAP
# Description : Holds the bits[28:5] of the Flash Patch remap address
.equ	M33_FP_REMAP_REMAP_RESET, 0x000000
.equ	M33_FP_REMAP_REMAP_BITS, 0x1fffffe0
.equ	M33_FP_REMAP_REMAP_MSB, 28
.equ	M33_FP_REMAP_REMAP_LSB, 5
# =============================================================================
# Register    : M33_FP_COMP0
# Description : Holds an address for comparison. The effect of the match
#               depends on the configuration of the FPB and whether the
#               comparator is an instruction address comparator or a literal
#               address comparator
.equ	M33_FP_COMP0_OFFSET, 0x00002008
.equ	M33_FP_COMP0_BITS, 0x00000001
.equ	M33_FP_COMP0_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_FP_COMP0_BE
# Description : Selects between flashpatch and breakpoint functionality
.equ	M33_FP_COMP0_BE_RESET, 0x0
.equ	M33_FP_COMP0_BE_BITS, 0x00000001
.equ	M33_FP_COMP0_BE_MSB, 0
.equ	M33_FP_COMP0_BE_LSB, 0
# =============================================================================
# Register    : M33_FP_COMP1
# Description : Holds an address for comparison. The effect of the match
#               depends on the configuration of the FPB and whether the
#               comparator is an instruction address comparator or a literal
#               address comparator
.equ	M33_FP_COMP1_OFFSET, 0x0000200c
.equ	M33_FP_COMP1_BITS, 0x00000001
.equ	M33_FP_COMP1_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_FP_COMP1_BE
# Description : Selects between flashpatch and breakpoint functionality
.equ	M33_FP_COMP1_BE_RESET, 0x0
.equ	M33_FP_COMP1_BE_BITS, 0x00000001
.equ	M33_FP_COMP1_BE_MSB, 0
.equ	M33_FP_COMP1_BE_LSB, 0
# =============================================================================
# Register    : M33_FP_COMP2
# Description : Holds an address for comparison. The effect of the match
#               depends on the configuration of the FPB and whether the
#               comparator is an instruction address comparator or a literal
#               address comparator
.equ	M33_FP_COMP2_OFFSET, 0x00002010
.equ	M33_FP_COMP2_BITS, 0x00000001
.equ	M33_FP_COMP2_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_FP_COMP2_BE
# Description : Selects between flashpatch and breakpoint functionality
.equ	M33_FP_COMP2_BE_RESET, 0x0
.equ	M33_FP_COMP2_BE_BITS, 0x00000001
.equ	M33_FP_COMP2_BE_MSB, 0
.equ	M33_FP_COMP2_BE_LSB, 0
# =============================================================================
# Register    : M33_FP_COMP3
# Description : Holds an address for comparison. The effect of the match
#               depends on the configuration of the FPB and whether the
#               comparator is an instruction address comparator or a literal
#               address comparator
.equ	M33_FP_COMP3_OFFSET, 0x00002014
.equ	M33_FP_COMP3_BITS, 0x00000001
.equ	M33_FP_COMP3_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_FP_COMP3_BE
# Description : Selects between flashpatch and breakpoint functionality
.equ	M33_FP_COMP3_BE_RESET, 0x0
.equ	M33_FP_COMP3_BE_BITS, 0x00000001
.equ	M33_FP_COMP3_BE_MSB, 0
.equ	M33_FP_COMP3_BE_LSB, 0
# =============================================================================
# Register    : M33_FP_COMP4
# Description : Holds an address for comparison. The effect of the match
#               depends on the configuration of the FPB and whether the
#               comparator is an instruction address comparator or a literal
#               address comparator
.equ	M33_FP_COMP4_OFFSET, 0x00002018
.equ	M33_FP_COMP4_BITS, 0x00000001
.equ	M33_FP_COMP4_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_FP_COMP4_BE
# Description : Selects between flashpatch and breakpoint functionality
.equ	M33_FP_COMP4_BE_RESET, 0x0
.equ	M33_FP_COMP4_BE_BITS, 0x00000001
.equ	M33_FP_COMP4_BE_MSB, 0
.equ	M33_FP_COMP4_BE_LSB, 0
# =============================================================================
# Register    : M33_FP_COMP5
# Description : Holds an address for comparison. The effect of the match
#               depends on the configuration of the FPB and whether the
#               comparator is an instruction address comparator or a literal
#               address comparator
.equ	M33_FP_COMP5_OFFSET, 0x0000201c
.equ	M33_FP_COMP5_BITS, 0x00000001
.equ	M33_FP_COMP5_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_FP_COMP5_BE
# Description : Selects between flashpatch and breakpoint functionality
.equ	M33_FP_COMP5_BE_RESET, 0x0
.equ	M33_FP_COMP5_BE_BITS, 0x00000001
.equ	M33_FP_COMP5_BE_MSB, 0
.equ	M33_FP_COMP5_BE_LSB, 0
# =============================================================================
# Register    : M33_FP_COMP6
# Description : Holds an address for comparison. The effect of the match
#               depends on the configuration of the FPB and whether the
#               comparator is an instruction address comparator or a literal
#               address comparator
.equ	M33_FP_COMP6_OFFSET, 0x00002020
.equ	M33_FP_COMP6_BITS, 0x00000001
.equ	M33_FP_COMP6_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_FP_COMP6_BE
# Description : Selects between flashpatch and breakpoint functionality
.equ	M33_FP_COMP6_BE_RESET, 0x0
.equ	M33_FP_COMP6_BE_BITS, 0x00000001
.equ	M33_FP_COMP6_BE_MSB, 0
.equ	M33_FP_COMP6_BE_LSB, 0
# =============================================================================
# Register    : M33_FP_COMP7
# Description : Holds an address for comparison. The effect of the match
#               depends on the configuration of the FPB and whether the
#               comparator is an instruction address comparator or a literal
#               address comparator
.equ	M33_FP_COMP7_OFFSET, 0x00002024
.equ	M33_FP_COMP7_BITS, 0x00000001
.equ	M33_FP_COMP7_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_FP_COMP7_BE
# Description : Selects between flashpatch and breakpoint functionality
.equ	M33_FP_COMP7_BE_RESET, 0x0
.equ	M33_FP_COMP7_BE_BITS, 0x00000001
.equ	M33_FP_COMP7_BE_MSB, 0
.equ	M33_FP_COMP7_BE_LSB, 0
# =============================================================================
# Register    : M33_FP_DEVARCH
# Description : Provides CoreSight discovery information for the FPB
.equ	M33_FP_DEVARCH_OFFSET, 0x00002fbc
.equ	M33_FP_DEVARCH_BITS, 0xffffffff
.equ	M33_FP_DEVARCH_RESET, 0x47701a03
# -----------------------------------------------------------------------------
# Field       : M33_FP_DEVARCH_ARCHITECT
# Description : Defines the architect of the component. Bits [31:28] are the
#               JEP106 continuation code (JEP106 bank ID, minus 1) and bits
#               [27:21] are the JEP106 ID code.
.equ	M33_FP_DEVARCH_ARCHITECT_RESET, 0x23b
.equ	M33_FP_DEVARCH_ARCHITECT_BITS, 0xffe00000
.equ	M33_FP_DEVARCH_ARCHITECT_MSB, 31
.equ	M33_FP_DEVARCH_ARCHITECT_LSB, 21
# -----------------------------------------------------------------------------
# Field       : M33_FP_DEVARCH_PRESENT
# Description : Defines that the DEVARCH register is present
.equ	M33_FP_DEVARCH_PRESENT_RESET, 0x1
.equ	M33_FP_DEVARCH_PRESENT_BITS, 0x00100000
.equ	M33_FP_DEVARCH_PRESENT_MSB, 20
.equ	M33_FP_DEVARCH_PRESENT_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_FP_DEVARCH_REVISION
# Description : Defines the architecture revision of the component
.equ	M33_FP_DEVARCH_REVISION_RESET, 0x0
.equ	M33_FP_DEVARCH_REVISION_BITS, 0x000f0000
.equ	M33_FP_DEVARCH_REVISION_MSB, 19
.equ	M33_FP_DEVARCH_REVISION_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_FP_DEVARCH_ARCHVER
# Description : Defines the architecture version of the component
.equ	M33_FP_DEVARCH_ARCHVER_RESET, 0x1
.equ	M33_FP_DEVARCH_ARCHVER_BITS, 0x0000f000
.equ	M33_FP_DEVARCH_ARCHVER_MSB, 15
.equ	M33_FP_DEVARCH_ARCHVER_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_FP_DEVARCH_ARCHPART
# Description : Defines the architecture of the component
.equ	M33_FP_DEVARCH_ARCHPART_RESET, 0xa03
.equ	M33_FP_DEVARCH_ARCHPART_BITS, 0x00000fff
.equ	M33_FP_DEVARCH_ARCHPART_MSB, 11
.equ	M33_FP_DEVARCH_ARCHPART_LSB, 0
# =============================================================================
# Register    : M33_FP_DEVTYPE
# Description : Provides CoreSight discovery information for the FPB
.equ	M33_FP_DEVTYPE_OFFSET, 0x00002fcc
.equ	M33_FP_DEVTYPE_BITS, 0x000000ff
.equ	M33_FP_DEVTYPE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_FP_DEVTYPE_SUB
# Description : Component sub-type
.equ	M33_FP_DEVTYPE_SUB_RESET, 0x0
.equ	M33_FP_DEVTYPE_SUB_BITS, 0x000000f0
.equ	M33_FP_DEVTYPE_SUB_MSB, 7
.equ	M33_FP_DEVTYPE_SUB_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_FP_DEVTYPE_MAJOR
# Description : Component major type
.equ	M33_FP_DEVTYPE_MAJOR_RESET, 0x0
.equ	M33_FP_DEVTYPE_MAJOR_BITS, 0x0000000f
.equ	M33_FP_DEVTYPE_MAJOR_MSB, 3
.equ	M33_FP_DEVTYPE_MAJOR_LSB, 0
# =============================================================================
# Register    : M33_FP_PIDR4
# Description : Provides CoreSight discovery information for the FP
.equ	M33_FP_PIDR4_OFFSET, 0x00002fd0
.equ	M33_FP_PIDR4_BITS, 0x000000ff
.equ	M33_FP_PIDR4_RESET, 0x00000004
# -----------------------------------------------------------------------------
# Field       : M33_FP_PIDR4_SIZE
# Description : See CoreSight Architecture Specification
.equ	M33_FP_PIDR4_SIZE_RESET, 0x0
.equ	M33_FP_PIDR4_SIZE_BITS, 0x000000f0
.equ	M33_FP_PIDR4_SIZE_MSB, 7
.equ	M33_FP_PIDR4_SIZE_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_FP_PIDR4_DES_2
# Description : See CoreSight Architecture Specification
.equ	M33_FP_PIDR4_DES_2_RESET, 0x4
.equ	M33_FP_PIDR4_DES_2_BITS, 0x0000000f
.equ	M33_FP_PIDR4_DES_2_MSB, 3
.equ	M33_FP_PIDR4_DES_2_LSB, 0
# =============================================================================
# Register    : M33_FP_PIDR5
# Description : Provides CoreSight discovery information for the FP
.equ	M33_FP_PIDR5_OFFSET, 0x00002fd4
.equ	M33_FP_PIDR5_BITS, 0x00000000
.equ	M33_FP_PIDR5_RESET, 0x00000000
.equ	M33_FP_PIDR5_MSB, 31
.equ	M33_FP_PIDR5_LSB, 0
# =============================================================================
# Register    : M33_FP_PIDR6
# Description : Provides CoreSight discovery information for the FP
.equ	M33_FP_PIDR6_OFFSET, 0x00002fd8
.equ	M33_FP_PIDR6_BITS, 0x00000000
.equ	M33_FP_PIDR6_RESET, 0x00000000
.equ	M33_FP_PIDR6_MSB, 31
.equ	M33_FP_PIDR6_LSB, 0
# =============================================================================
# Register    : M33_FP_PIDR7
# Description : Provides CoreSight discovery information for the FP
.equ	M33_FP_PIDR7_OFFSET, 0x00002fdc
.equ	M33_FP_PIDR7_BITS, 0x00000000
.equ	M33_FP_PIDR7_RESET, 0x00000000
.equ	M33_FP_PIDR7_MSB, 31
.equ	M33_FP_PIDR7_LSB, 0
# =============================================================================
# Register    : M33_FP_PIDR0
# Description : Provides CoreSight discovery information for the FP
.equ	M33_FP_PIDR0_OFFSET, 0x00002fe0
.equ	M33_FP_PIDR0_BITS, 0x000000ff
.equ	M33_FP_PIDR0_RESET, 0x00000021
# -----------------------------------------------------------------------------
# Field       : M33_FP_PIDR0_PART_0
# Description : See CoreSight Architecture Specification
.equ	M33_FP_PIDR0_PART_0_RESET, 0x21
.equ	M33_FP_PIDR0_PART_0_BITS, 0x000000ff
.equ	M33_FP_PIDR0_PART_0_MSB, 7
.equ	M33_FP_PIDR0_PART_0_LSB, 0
# =============================================================================
# Register    : M33_FP_PIDR1
# Description : Provides CoreSight discovery information for the FP
.equ	M33_FP_PIDR1_OFFSET, 0x00002fe4
.equ	M33_FP_PIDR1_BITS, 0x000000ff
.equ	M33_FP_PIDR1_RESET, 0x000000bd
# -----------------------------------------------------------------------------
# Field       : M33_FP_PIDR1_DES_0
# Description : See CoreSight Architecture Specification
.equ	M33_FP_PIDR1_DES_0_RESET, 0xb
.equ	M33_FP_PIDR1_DES_0_BITS, 0x000000f0
.equ	M33_FP_PIDR1_DES_0_MSB, 7
.equ	M33_FP_PIDR1_DES_0_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_FP_PIDR1_PART_1
# Description : See CoreSight Architecture Specification
.equ	M33_FP_PIDR1_PART_1_RESET, 0xd
.equ	M33_FP_PIDR1_PART_1_BITS, 0x0000000f
.equ	M33_FP_PIDR1_PART_1_MSB, 3
.equ	M33_FP_PIDR1_PART_1_LSB, 0
# =============================================================================
# Register    : M33_FP_PIDR2
# Description : Provides CoreSight discovery information for the FP
.equ	M33_FP_PIDR2_OFFSET, 0x00002fe8
.equ	M33_FP_PIDR2_BITS, 0x000000ff
.equ	M33_FP_PIDR2_RESET, 0x0000000b
# -----------------------------------------------------------------------------
# Field       : M33_FP_PIDR2_REVISION
# Description : See CoreSight Architecture Specification
.equ	M33_FP_PIDR2_REVISION_RESET, 0x0
.equ	M33_FP_PIDR2_REVISION_BITS, 0x000000f0
.equ	M33_FP_PIDR2_REVISION_MSB, 7
.equ	M33_FP_PIDR2_REVISION_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_FP_PIDR2_JEDEC
# Description : See CoreSight Architecture Specification
.equ	M33_FP_PIDR2_JEDEC_RESET, 0x1
.equ	M33_FP_PIDR2_JEDEC_BITS, 0x00000008
.equ	M33_FP_PIDR2_JEDEC_MSB, 3
.equ	M33_FP_PIDR2_JEDEC_LSB, 3
# -----------------------------------------------------------------------------
# Field       : M33_FP_PIDR2_DES_1
# Description : See CoreSight Architecture Specification
.equ	M33_FP_PIDR2_DES_1_RESET, 0x3
.equ	M33_FP_PIDR2_DES_1_BITS, 0x00000007
.equ	M33_FP_PIDR2_DES_1_MSB, 2
.equ	M33_FP_PIDR2_DES_1_LSB, 0
# =============================================================================
# Register    : M33_FP_PIDR3
# Description : Provides CoreSight discovery information for the FP
.equ	M33_FP_PIDR3_OFFSET, 0x00002fec
.equ	M33_FP_PIDR3_BITS, 0x000000ff
.equ	M33_FP_PIDR3_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_FP_PIDR3_REVAND
# Description : See CoreSight Architecture Specification
.equ	M33_FP_PIDR3_REVAND_RESET, 0x0
.equ	M33_FP_PIDR3_REVAND_BITS, 0x000000f0
.equ	M33_FP_PIDR3_REVAND_MSB, 7
.equ	M33_FP_PIDR3_REVAND_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_FP_PIDR3_CMOD
# Description : See CoreSight Architecture Specification
.equ	M33_FP_PIDR3_CMOD_RESET, 0x0
.equ	M33_FP_PIDR3_CMOD_BITS, 0x0000000f
.equ	M33_FP_PIDR3_CMOD_MSB, 3
.equ	M33_FP_PIDR3_CMOD_LSB, 0
# =============================================================================
# Register    : M33_FP_CIDR0
# Description : Provides CoreSight discovery information for the FP
.equ	M33_FP_CIDR0_OFFSET, 0x00002ff0
.equ	M33_FP_CIDR0_BITS, 0x000000ff
.equ	M33_FP_CIDR0_RESET, 0x0000000d
# -----------------------------------------------------------------------------
# Field       : M33_FP_CIDR0_PRMBL_0
# Description : See CoreSight Architecture Specification
.equ	M33_FP_CIDR0_PRMBL_0_RESET, 0x0d
.equ	M33_FP_CIDR0_PRMBL_0_BITS, 0x000000ff
.equ	M33_FP_CIDR0_PRMBL_0_MSB, 7
.equ	M33_FP_CIDR0_PRMBL_0_LSB, 0
# =============================================================================
# Register    : M33_FP_CIDR1
# Description : Provides CoreSight discovery information for the FP
.equ	M33_FP_CIDR1_OFFSET, 0x00002ff4
.equ	M33_FP_CIDR1_BITS, 0x000000ff
.equ	M33_FP_CIDR1_RESET, 0x00000090
# -----------------------------------------------------------------------------
# Field       : M33_FP_CIDR1_CLASS
# Description : See CoreSight Architecture Specification
.equ	M33_FP_CIDR1_CLASS_RESET, 0x9
.equ	M33_FP_CIDR1_CLASS_BITS, 0x000000f0
.equ	M33_FP_CIDR1_CLASS_MSB, 7
.equ	M33_FP_CIDR1_CLASS_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_FP_CIDR1_PRMBL_1
# Description : See CoreSight Architecture Specification
.equ	M33_FP_CIDR1_PRMBL_1_RESET, 0x0
.equ	M33_FP_CIDR1_PRMBL_1_BITS, 0x0000000f
.equ	M33_FP_CIDR1_PRMBL_1_MSB, 3
.equ	M33_FP_CIDR1_PRMBL_1_LSB, 0
# =============================================================================
# Register    : M33_FP_CIDR2
# Description : Provides CoreSight discovery information for the FP
.equ	M33_FP_CIDR2_OFFSET, 0x00002ff8
.equ	M33_FP_CIDR2_BITS, 0x000000ff
.equ	M33_FP_CIDR2_RESET, 0x00000005
# -----------------------------------------------------------------------------
# Field       : M33_FP_CIDR2_PRMBL_2
# Description : See CoreSight Architecture Specification
.equ	M33_FP_CIDR2_PRMBL_2_RESET, 0x05
.equ	M33_FP_CIDR2_PRMBL_2_BITS, 0x000000ff
.equ	M33_FP_CIDR2_PRMBL_2_MSB, 7
.equ	M33_FP_CIDR2_PRMBL_2_LSB, 0
# =============================================================================
# Register    : M33_FP_CIDR3
# Description : Provides CoreSight discovery information for the FP
.equ	M33_FP_CIDR3_OFFSET, 0x00002ffc
.equ	M33_FP_CIDR3_BITS, 0x000000ff
.equ	M33_FP_CIDR3_RESET, 0x000000b1
# -----------------------------------------------------------------------------
# Field       : M33_FP_CIDR3_PRMBL_3
# Description : See CoreSight Architecture Specification
.equ	M33_FP_CIDR3_PRMBL_3_RESET, 0xb1
.equ	M33_FP_CIDR3_PRMBL_3_BITS, 0x000000ff
.equ	M33_FP_CIDR3_PRMBL_3_MSB, 7
.equ	M33_FP_CIDR3_PRMBL_3_LSB, 0
# =============================================================================
# Register    : M33_ICTR
# Description : Provides information about the interrupt controller
.equ	M33_ICTR_OFFSET, 0x0000e004
.equ	M33_ICTR_BITS, 0x0000000f
.equ	M33_ICTR_RESET, 0x00000001
# -----------------------------------------------------------------------------
# Field       : M33_ICTR_INTLINESNUM
# Description : Indicates the number of the highest implemented register in
#               each of the NVIC control register sets, or in the case of
#               NVIC_IPR*n, 4×INTLINESNUM
.equ	M33_ICTR_INTLINESNUM_RESET, 0x1
.equ	M33_ICTR_INTLINESNUM_BITS, 0x0000000f
.equ	M33_ICTR_INTLINESNUM_MSB, 3
.equ	M33_ICTR_INTLINESNUM_LSB, 0
# =============================================================================
# Register    : M33_ACTLR
# Description : Provides IMPLEMENTATION DEFINED configuration and control
#               options
.equ	M33_ACTLR_OFFSET, 0x0000e008
.equ	M33_ACTLR_BITS, 0x20001605
.equ	M33_ACTLR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ACTLR_EXTEXCLALL
# Description : External Exclusives Allowed with no MPU
.equ	M33_ACTLR_EXTEXCLALL_RESET, 0x0
.equ	M33_ACTLR_EXTEXCLALL_BITS, 0x20000000
.equ	M33_ACTLR_EXTEXCLALL_MSB, 29
.equ	M33_ACTLR_EXTEXCLALL_LSB, 29
# -----------------------------------------------------------------------------
# Field       : M33_ACTLR_DISITMATBFLUSH
# Description : Disable ATB Flush
.equ	M33_ACTLR_DISITMATBFLUSH_RESET, 0x0
.equ	M33_ACTLR_DISITMATBFLUSH_BITS, 0x00001000
.equ	M33_ACTLR_DISITMATBFLUSH_MSB, 12
.equ	M33_ACTLR_DISITMATBFLUSH_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_ACTLR_FPEXCODIS
# Description : Disable FPU exception outputs
.equ	M33_ACTLR_FPEXCODIS_RESET, 0x0
.equ	M33_ACTLR_FPEXCODIS_BITS, 0x00000400
.equ	M33_ACTLR_FPEXCODIS_MSB, 10
.equ	M33_ACTLR_FPEXCODIS_LSB, 10
# -----------------------------------------------------------------------------
# Field       : M33_ACTLR_DISOOFP
# Description : Disable out-of-order FP instruction completion
.equ	M33_ACTLR_DISOOFP_RESET, 0x0
.equ	M33_ACTLR_DISOOFP_BITS, 0x00000200
.equ	M33_ACTLR_DISOOFP_MSB, 9
.equ	M33_ACTLR_DISOOFP_LSB, 9
# -----------------------------------------------------------------------------
# Field       : M33_ACTLR_DISFOLD
# Description : Disable dual-issue.
.equ	M33_ACTLR_DISFOLD_RESET, 0x0
.equ	M33_ACTLR_DISFOLD_BITS, 0x00000004
.equ	M33_ACTLR_DISFOLD_MSB, 2
.equ	M33_ACTLR_DISFOLD_LSB, 2
# -----------------------------------------------------------------------------
# Field       : M33_ACTLR_DISMCYCINT
# Description : Disable dual-issue.
.equ	M33_ACTLR_DISMCYCINT_RESET, 0x0
.equ	M33_ACTLR_DISMCYCINT_BITS, 0x00000001
.equ	M33_ACTLR_DISMCYCINT_MSB, 0
.equ	M33_ACTLR_DISMCYCINT_LSB, 0
# =============================================================================
# Register    : M33_SYST_CSR
# Description : Use the SysTick Control and Status Register to enable the
#               SysTick features.
.equ	M33_SYST_CSR_OFFSET, 0x0000e010
.equ	M33_SYST_CSR_BITS, 0x00010007
.equ	M33_SYST_CSR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_SYST_CSR_COUNTFLAG
# Description : Returns 1 if timer counted to 0 since last time this was read.
#               Clears on read by application or debugger.
.equ	M33_SYST_CSR_COUNTFLAG_RESET, 0x0
.equ	M33_SYST_CSR_COUNTFLAG_BITS, 0x00010000
.equ	M33_SYST_CSR_COUNTFLAG_MSB, 16
.equ	M33_SYST_CSR_COUNTFLAG_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_SYST_CSR_CLKSOURCE
# Description : SysTick clock source. Always reads as one if SYST_CALIB reports
#               NOREF.
#               Selects the SysTick timer clock source:
#               0 = External reference clock.
#               1 = Processor clock.
.equ	M33_SYST_CSR_CLKSOURCE_RESET, 0x0
.equ	M33_SYST_CSR_CLKSOURCE_BITS, 0x00000004
.equ	M33_SYST_CSR_CLKSOURCE_MSB, 2
.equ	M33_SYST_CSR_CLKSOURCE_LSB, 2
# -----------------------------------------------------------------------------
# Field       : M33_SYST_CSR_TICKINT
# Description : Enables SysTick exception request:
#               0 = Counting down to zero does not assert the SysTick exception
#               request.
#               1 = Counting down to zero to asserts the SysTick exception
#               request.
.equ	M33_SYST_CSR_TICKINT_RESET, 0x0
.equ	M33_SYST_CSR_TICKINT_BITS, 0x00000002
.equ	M33_SYST_CSR_TICKINT_MSB, 1
.equ	M33_SYST_CSR_TICKINT_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_SYST_CSR_ENABLE
# Description : Enable SysTick counter:
#               0 = Counter disabled.
#               1 = Counter enabled.
.equ	M33_SYST_CSR_ENABLE_RESET, 0x0
.equ	M33_SYST_CSR_ENABLE_BITS, 0x00000001
.equ	M33_SYST_CSR_ENABLE_MSB, 0
.equ	M33_SYST_CSR_ENABLE_LSB, 0
# =============================================================================
# Register    : M33_SYST_RVR
# Description : Use the SysTick Reload Value Register to specify the start
#               value to load into the current value register when the counter
#               reaches 0. It can be any value between 0 and 0x00FFFFFF. A
#               start value of 0 is possible, but has no effect because the
#               SysTick interrupt and COUNTFLAG are activated when counting
#               from 1 to 0. The reset value of this register is UNKNOWN.
#               To generate a multi-shot timer with a period of N processor
#               clock cycles, use a RELOAD value of N-1. For example, if the
#               SysTick interrupt is required every 100 clock pulses, set
#               RELOAD to 99.
.equ	M33_SYST_RVR_OFFSET, 0x0000e014
.equ	M33_SYST_RVR_BITS, 0x00ffffff
.equ	M33_SYST_RVR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_SYST_RVR_RELOAD
# Description : Value to load into the SysTick Current Value Register when the
#               counter reaches 0.
.equ	M33_SYST_RVR_RELOAD_RESET, 0x000000
.equ	M33_SYST_RVR_RELOAD_BITS, 0x00ffffff
.equ	M33_SYST_RVR_RELOAD_MSB, 23
.equ	M33_SYST_RVR_RELOAD_LSB, 0
# =============================================================================
# Register    : M33_SYST_CVR
# Description : Use the SysTick Current Value Register to find the current
#               value in the register. The reset value of this register is
#               UNKNOWN.
.equ	M33_SYST_CVR_OFFSET, 0x0000e018
.equ	M33_SYST_CVR_BITS, 0x00ffffff
.equ	M33_SYST_CVR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_SYST_CVR_CURRENT
# Description : Reads return the current value of the SysTick counter. This
#               register is write-clear. Writing to it with any value clears
#               the register to 0. Clearing this register also clears the
#               COUNTFLAG bit of the SysTick Control and Status Register.
.equ	M33_SYST_CVR_CURRENT_RESET, 0x000000
.equ	M33_SYST_CVR_CURRENT_BITS, 0x00ffffff
.equ	M33_SYST_CVR_CURRENT_MSB, 23
.equ	M33_SYST_CVR_CURRENT_LSB, 0
# =============================================================================
# Register    : M33_SYST_CALIB
# Description : Use the SysTick Calibration Value Register to enable software
#               to scale to any required speed using divide and multiply.
.equ	M33_SYST_CALIB_OFFSET, 0x0000e01c
.equ	M33_SYST_CALIB_BITS, 0xc0ffffff
.equ	M33_SYST_CALIB_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_SYST_CALIB_NOREF
# Description : If reads as 1, the Reference clock is not provided - the
#               CLKSOURCE bit of the SysTick Control and Status register will
#               be forced to 1 and cannot be cleared to 0.
.equ	M33_SYST_CALIB_NOREF_RESET, 0x0
.equ	M33_SYST_CALIB_NOREF_BITS, 0x80000000
.equ	M33_SYST_CALIB_NOREF_MSB, 31
.equ	M33_SYST_CALIB_NOREF_LSB, 31
# -----------------------------------------------------------------------------
# Field       : M33_SYST_CALIB_SKEW
# Description : If reads as 1, the calibration value for 10ms is inexact (due
#               to clock frequency).
.equ	M33_SYST_CALIB_SKEW_RESET, 0x0
.equ	M33_SYST_CALIB_SKEW_BITS, 0x40000000
.equ	M33_SYST_CALIB_SKEW_MSB, 30
.equ	M33_SYST_CALIB_SKEW_LSB, 30
# -----------------------------------------------------------------------------
# Field       : M33_SYST_CALIB_TENMS
# Description : An optional Reload value to be used for 10ms (100Hz) timing,
#               subject to system clock skew errors. If the value reads as 0,
#               the calibration value is not known.
.equ	M33_SYST_CALIB_TENMS_RESET, 0x000000
.equ	M33_SYST_CALIB_TENMS_BITS, 0x00ffffff
.equ	M33_SYST_CALIB_TENMS_MSB, 23
.equ	M33_SYST_CALIB_TENMS_LSB, 0
# =============================================================================
# Register    : M33_NVIC_ISER0
# Description : Enables or reads the enabled state of each group of 32
#               interrupts
.equ	M33_NVIC_ISER0_OFFSET, 0x0000e100
.equ	M33_NVIC_ISER0_BITS, 0xffffffff
.equ	M33_NVIC_ISER0_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_ISER0_SETENA
# Description : For SETENA[m] in NVIC_ISER*n, indicates whether interrupt 32*n
#               + m is enabled
.equ	M33_NVIC_ISER0_SETENA_RESET, 0x00000000
.equ	M33_NVIC_ISER0_SETENA_BITS, 0xffffffff
.equ	M33_NVIC_ISER0_SETENA_MSB, 31
.equ	M33_NVIC_ISER0_SETENA_LSB, 0
# =============================================================================
# Register    : M33_NVIC_ISER1
# Description : Enables or reads the enabled state of each group of 32
#               interrupts
.equ	M33_NVIC_ISER1_OFFSET, 0x0000e104
.equ	M33_NVIC_ISER1_BITS, 0xffffffff
.equ	M33_NVIC_ISER1_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_ISER1_SETENA
# Description : For SETENA[m] in NVIC_ISER*n, indicates whether interrupt 32*n
#               + m is enabled
.equ	M33_NVIC_ISER1_SETENA_RESET, 0x00000000
.equ	M33_NVIC_ISER1_SETENA_BITS, 0xffffffff
.equ	M33_NVIC_ISER1_SETENA_MSB, 31
.equ	M33_NVIC_ISER1_SETENA_LSB, 0
# =============================================================================
# Register    : M33_NVIC_ICER0
# Description : Clears or reads the enabled state of each group of 32
#               interrupts
.equ	M33_NVIC_ICER0_OFFSET, 0x0000e180
.equ	M33_NVIC_ICER0_BITS, 0xffffffff
.equ	M33_NVIC_ICER0_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_ICER0_CLRENA
# Description : For CLRENA[m] in NVIC_ICER*n, indicates whether interrupt 32*n
#               + m is enabled
.equ	M33_NVIC_ICER0_CLRENA_RESET, 0x00000000
.equ	M33_NVIC_ICER0_CLRENA_BITS, 0xffffffff
.equ	M33_NVIC_ICER0_CLRENA_MSB, 31
.equ	M33_NVIC_ICER0_CLRENA_LSB, 0
# =============================================================================
# Register    : M33_NVIC_ICER1
# Description : Clears or reads the enabled state of each group of 32
#               interrupts
.equ	M33_NVIC_ICER1_OFFSET, 0x0000e184
.equ	M33_NVIC_ICER1_BITS, 0xffffffff
.equ	M33_NVIC_ICER1_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_ICER1_CLRENA
# Description : For CLRENA[m] in NVIC_ICER*n, indicates whether interrupt 32*n
#               + m is enabled
.equ	M33_NVIC_ICER1_CLRENA_RESET, 0x00000000
.equ	M33_NVIC_ICER1_CLRENA_BITS, 0xffffffff
.equ	M33_NVIC_ICER1_CLRENA_MSB, 31
.equ	M33_NVIC_ICER1_CLRENA_LSB, 0
# =============================================================================
# Register    : M33_NVIC_ISPR0
# Description : Enables or reads the pending state of each group of 32
#               interrupts
.equ	M33_NVIC_ISPR0_OFFSET, 0x0000e200
.equ	M33_NVIC_ISPR0_BITS, 0xffffffff
.equ	M33_NVIC_ISPR0_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_ISPR0_SETPEND
# Description : For SETPEND[m] in NVIC_ISPR*n, indicates whether interrupt 32*n
#               + m is pending
.equ	M33_NVIC_ISPR0_SETPEND_RESET, 0x00000000
.equ	M33_NVIC_ISPR0_SETPEND_BITS, 0xffffffff
.equ	M33_NVIC_ISPR0_SETPEND_MSB, 31
.equ	M33_NVIC_ISPR0_SETPEND_LSB, 0
# =============================================================================
# Register    : M33_NVIC_ISPR1
# Description : Enables or reads the pending state of each group of 32
#               interrupts
.equ	M33_NVIC_ISPR1_OFFSET, 0x0000e204
.equ	M33_NVIC_ISPR1_BITS, 0xffffffff
.equ	M33_NVIC_ISPR1_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_ISPR1_SETPEND
# Description : For SETPEND[m] in NVIC_ISPR*n, indicates whether interrupt 32*n
#               + m is pending
.equ	M33_NVIC_ISPR1_SETPEND_RESET, 0x00000000
.equ	M33_NVIC_ISPR1_SETPEND_BITS, 0xffffffff
.equ	M33_NVIC_ISPR1_SETPEND_MSB, 31
.equ	M33_NVIC_ISPR1_SETPEND_LSB, 0
# =============================================================================
# Register    : M33_NVIC_ICPR0
# Description : Clears or reads the pending state of each group of 32
#               interrupts
.equ	M33_NVIC_ICPR0_OFFSET, 0x0000e280
.equ	M33_NVIC_ICPR0_BITS, 0xffffffff
.equ	M33_NVIC_ICPR0_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_ICPR0_CLRPEND
# Description : For CLRPEND[m] in NVIC_ICPR*n, indicates whether interrupt 32*n
#               + m is pending
.equ	M33_NVIC_ICPR0_CLRPEND_RESET, 0x00000000
.equ	M33_NVIC_ICPR0_CLRPEND_BITS, 0xffffffff
.equ	M33_NVIC_ICPR0_CLRPEND_MSB, 31
.equ	M33_NVIC_ICPR0_CLRPEND_LSB, 0
# =============================================================================
# Register    : M33_NVIC_ICPR1
# Description : Clears or reads the pending state of each group of 32
#               interrupts
.equ	M33_NVIC_ICPR1_OFFSET, 0x0000e284
.equ	M33_NVIC_ICPR1_BITS, 0xffffffff
.equ	M33_NVIC_ICPR1_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_ICPR1_CLRPEND
# Description : For CLRPEND[m] in NVIC_ICPR*n, indicates whether interrupt 32*n
#               + m is pending
.equ	M33_NVIC_ICPR1_CLRPEND_RESET, 0x00000000
.equ	M33_NVIC_ICPR1_CLRPEND_BITS, 0xffffffff
.equ	M33_NVIC_ICPR1_CLRPEND_MSB, 31
.equ	M33_NVIC_ICPR1_CLRPEND_LSB, 0
# =============================================================================
# Register    : M33_NVIC_IABR0
# Description : For each group of 32 interrupts, shows the active state of each
#               interrupt
.equ	M33_NVIC_IABR0_OFFSET, 0x0000e300
.equ	M33_NVIC_IABR0_BITS, 0xffffffff
.equ	M33_NVIC_IABR0_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IABR0_ACTIVE
# Description : For ACTIVE[m] in NVIC_IABR*n, indicates the active state for
#               interrupt 32*n+m
.equ	M33_NVIC_IABR0_ACTIVE_RESET, 0x00000000
.equ	M33_NVIC_IABR0_ACTIVE_BITS, 0xffffffff
.equ	M33_NVIC_IABR0_ACTIVE_MSB, 31
.equ	M33_NVIC_IABR0_ACTIVE_LSB, 0
# =============================================================================
# Register    : M33_NVIC_IABR1
# Description : For each group of 32 interrupts, shows the active state of each
#               interrupt
.equ	M33_NVIC_IABR1_OFFSET, 0x0000e304
.equ	M33_NVIC_IABR1_BITS, 0xffffffff
.equ	M33_NVIC_IABR1_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IABR1_ACTIVE
# Description : For ACTIVE[m] in NVIC_IABR*n, indicates the active state for
#               interrupt 32*n+m
.equ	M33_NVIC_IABR1_ACTIVE_RESET, 0x00000000
.equ	M33_NVIC_IABR1_ACTIVE_BITS, 0xffffffff
.equ	M33_NVIC_IABR1_ACTIVE_MSB, 31
.equ	M33_NVIC_IABR1_ACTIVE_LSB, 0
# =============================================================================
# Register    : M33_NVIC_ITNS0
# Description : For each group of 32 interrupts, determines whether each
#               interrupt targets Non-secure or Secure state
.equ	M33_NVIC_ITNS0_OFFSET, 0x0000e380
.equ	M33_NVIC_ITNS0_BITS, 0xffffffff
.equ	M33_NVIC_ITNS0_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_ITNS0_ITNS
# Description : For ITNS[m] in NVIC_ITNS*n, `IAAMO the target Security state
#               for interrupt 32*n+m
.equ	M33_NVIC_ITNS0_ITNS_RESET, 0x00000000
.equ	M33_NVIC_ITNS0_ITNS_BITS, 0xffffffff
.equ	M33_NVIC_ITNS0_ITNS_MSB, 31
.equ	M33_NVIC_ITNS0_ITNS_LSB, 0
# =============================================================================
# Register    : M33_NVIC_ITNS1
# Description : For each group of 32 interrupts, determines whether each
#               interrupt targets Non-secure or Secure state
.equ	M33_NVIC_ITNS1_OFFSET, 0x0000e384
.equ	M33_NVIC_ITNS1_BITS, 0xffffffff
.equ	M33_NVIC_ITNS1_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_ITNS1_ITNS
# Description : For ITNS[m] in NVIC_ITNS*n, `IAAMO the target Security state
#               for interrupt 32*n+m
.equ	M33_NVIC_ITNS1_ITNS_RESET, 0x00000000
.equ	M33_NVIC_ITNS1_ITNS_BITS, 0xffffffff
.equ	M33_NVIC_ITNS1_ITNS_MSB, 31
.equ	M33_NVIC_ITNS1_ITNS_LSB, 0
# =============================================================================
# Register    : M33_NVIC_IPR0
# Description : Sets or reads interrupt priorities
.equ	M33_NVIC_IPR0_OFFSET, 0x0000e400
.equ	M33_NVIC_IPR0_BITS, 0xf0f0f0f0
.equ	M33_NVIC_IPR0_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR0_PRI_N3
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+3,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR0_PRI_N3_RESET, 0x0
.equ	M33_NVIC_IPR0_PRI_N3_BITS, 0xf0000000
.equ	M33_NVIC_IPR0_PRI_N3_MSB, 31
.equ	M33_NVIC_IPR0_PRI_N3_LSB, 28
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR0_PRI_N2
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+2,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR0_PRI_N2_RESET, 0x0
.equ	M33_NVIC_IPR0_PRI_N2_BITS, 0x00f00000
.equ	M33_NVIC_IPR0_PRI_N2_MSB, 23
.equ	M33_NVIC_IPR0_PRI_N2_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR0_PRI_N1
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+1,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR0_PRI_N1_RESET, 0x0
.equ	M33_NVIC_IPR0_PRI_N1_BITS, 0x0000f000
.equ	M33_NVIC_IPR0_PRI_N1_MSB, 15
.equ	M33_NVIC_IPR0_PRI_N1_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR0_PRI_N0
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+0,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR0_PRI_N0_RESET, 0x0
.equ	M33_NVIC_IPR0_PRI_N0_BITS, 0x000000f0
.equ	M33_NVIC_IPR0_PRI_N0_MSB, 7
.equ	M33_NVIC_IPR0_PRI_N0_LSB, 4
# =============================================================================
# Register    : M33_NVIC_IPR1
# Description : Sets or reads interrupt priorities
.equ	M33_NVIC_IPR1_OFFSET, 0x0000e404
.equ	M33_NVIC_IPR1_BITS, 0xf0f0f0f0
.equ	M33_NVIC_IPR1_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR1_PRI_N3
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+3,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR1_PRI_N3_RESET, 0x0
.equ	M33_NVIC_IPR1_PRI_N3_BITS, 0xf0000000
.equ	M33_NVIC_IPR1_PRI_N3_MSB, 31
.equ	M33_NVIC_IPR1_PRI_N3_LSB, 28
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR1_PRI_N2
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+2,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR1_PRI_N2_RESET, 0x0
.equ	M33_NVIC_IPR1_PRI_N2_BITS, 0x00f00000
.equ	M33_NVIC_IPR1_PRI_N2_MSB, 23
.equ	M33_NVIC_IPR1_PRI_N2_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR1_PRI_N1
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+1,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR1_PRI_N1_RESET, 0x0
.equ	M33_NVIC_IPR1_PRI_N1_BITS, 0x0000f000
.equ	M33_NVIC_IPR1_PRI_N1_MSB, 15
.equ	M33_NVIC_IPR1_PRI_N1_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR1_PRI_N0
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+0,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR1_PRI_N0_RESET, 0x0
.equ	M33_NVIC_IPR1_PRI_N0_BITS, 0x000000f0
.equ	M33_NVIC_IPR1_PRI_N0_MSB, 7
.equ	M33_NVIC_IPR1_PRI_N0_LSB, 4
# =============================================================================
# Register    : M33_NVIC_IPR2
# Description : Sets or reads interrupt priorities
.equ	M33_NVIC_IPR2_OFFSET, 0x0000e408
.equ	M33_NVIC_IPR2_BITS, 0xf0f0f0f0
.equ	M33_NVIC_IPR2_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR2_PRI_N3
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+3,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR2_PRI_N3_RESET, 0x0
.equ	M33_NVIC_IPR2_PRI_N3_BITS, 0xf0000000
.equ	M33_NVIC_IPR2_PRI_N3_MSB, 31
.equ	M33_NVIC_IPR2_PRI_N3_LSB, 28
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR2_PRI_N2
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+2,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR2_PRI_N2_RESET, 0x0
.equ	M33_NVIC_IPR2_PRI_N2_BITS, 0x00f00000
.equ	M33_NVIC_IPR2_PRI_N2_MSB, 23
.equ	M33_NVIC_IPR2_PRI_N2_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR2_PRI_N1
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+1,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR2_PRI_N1_RESET, 0x0
.equ	M33_NVIC_IPR2_PRI_N1_BITS, 0x0000f000
.equ	M33_NVIC_IPR2_PRI_N1_MSB, 15
.equ	M33_NVIC_IPR2_PRI_N1_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR2_PRI_N0
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+0,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR2_PRI_N0_RESET, 0x0
.equ	M33_NVIC_IPR2_PRI_N0_BITS, 0x000000f0
.equ	M33_NVIC_IPR2_PRI_N0_MSB, 7
.equ	M33_NVIC_IPR2_PRI_N0_LSB, 4
# =============================================================================
# Register    : M33_NVIC_IPR3
# Description : Sets or reads interrupt priorities
.equ	M33_NVIC_IPR3_OFFSET, 0x0000e40c
.equ	M33_NVIC_IPR3_BITS, 0xf0f0f0f0
.equ	M33_NVIC_IPR3_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR3_PRI_N3
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+3,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR3_PRI_N3_RESET, 0x0
.equ	M33_NVIC_IPR3_PRI_N3_BITS, 0xf0000000
.equ	M33_NVIC_IPR3_PRI_N3_MSB, 31
.equ	M33_NVIC_IPR3_PRI_N3_LSB, 28
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR3_PRI_N2
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+2,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR3_PRI_N2_RESET, 0x0
.equ	M33_NVIC_IPR3_PRI_N2_BITS, 0x00f00000
.equ	M33_NVIC_IPR3_PRI_N2_MSB, 23
.equ	M33_NVIC_IPR3_PRI_N2_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR3_PRI_N1
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+1,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR3_PRI_N1_RESET, 0x0
.equ	M33_NVIC_IPR3_PRI_N1_BITS, 0x0000f000
.equ	M33_NVIC_IPR3_PRI_N1_MSB, 15
.equ	M33_NVIC_IPR3_PRI_N1_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR3_PRI_N0
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+0,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR3_PRI_N0_RESET, 0x0
.equ	M33_NVIC_IPR3_PRI_N0_BITS, 0x000000f0
.equ	M33_NVIC_IPR3_PRI_N0_MSB, 7
.equ	M33_NVIC_IPR3_PRI_N0_LSB, 4
# =============================================================================
# Register    : M33_NVIC_IPR4
# Description : Sets or reads interrupt priorities
.equ	M33_NVIC_IPR4_OFFSET, 0x0000e410
.equ	M33_NVIC_IPR4_BITS, 0xf0f0f0f0
.equ	M33_NVIC_IPR4_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR4_PRI_N3
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+3,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR4_PRI_N3_RESET, 0x0
.equ	M33_NVIC_IPR4_PRI_N3_BITS, 0xf0000000
.equ	M33_NVIC_IPR4_PRI_N3_MSB, 31
.equ	M33_NVIC_IPR4_PRI_N3_LSB, 28
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR4_PRI_N2
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+2,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR4_PRI_N2_RESET, 0x0
.equ	M33_NVIC_IPR4_PRI_N2_BITS, 0x00f00000
.equ	M33_NVIC_IPR4_PRI_N2_MSB, 23
.equ	M33_NVIC_IPR4_PRI_N2_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR4_PRI_N1
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+1,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR4_PRI_N1_RESET, 0x0
.equ	M33_NVIC_IPR4_PRI_N1_BITS, 0x0000f000
.equ	M33_NVIC_IPR4_PRI_N1_MSB, 15
.equ	M33_NVIC_IPR4_PRI_N1_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR4_PRI_N0
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+0,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR4_PRI_N0_RESET, 0x0
.equ	M33_NVIC_IPR4_PRI_N0_BITS, 0x000000f0
.equ	M33_NVIC_IPR4_PRI_N0_MSB, 7
.equ	M33_NVIC_IPR4_PRI_N0_LSB, 4
# =============================================================================
# Register    : M33_NVIC_IPR5
# Description : Sets or reads interrupt priorities
.equ	M33_NVIC_IPR5_OFFSET, 0x0000e414
.equ	M33_NVIC_IPR5_BITS, 0xf0f0f0f0
.equ	M33_NVIC_IPR5_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR5_PRI_N3
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+3,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR5_PRI_N3_RESET, 0x0
.equ	M33_NVIC_IPR5_PRI_N3_BITS, 0xf0000000
.equ	M33_NVIC_IPR5_PRI_N3_MSB, 31
.equ	M33_NVIC_IPR5_PRI_N3_LSB, 28
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR5_PRI_N2
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+2,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR5_PRI_N2_RESET, 0x0
.equ	M33_NVIC_IPR5_PRI_N2_BITS, 0x00f00000
.equ	M33_NVIC_IPR5_PRI_N2_MSB, 23
.equ	M33_NVIC_IPR5_PRI_N2_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR5_PRI_N1
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+1,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR5_PRI_N1_RESET, 0x0
.equ	M33_NVIC_IPR5_PRI_N1_BITS, 0x0000f000
.equ	M33_NVIC_IPR5_PRI_N1_MSB, 15
.equ	M33_NVIC_IPR5_PRI_N1_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR5_PRI_N0
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+0,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR5_PRI_N0_RESET, 0x0
.equ	M33_NVIC_IPR5_PRI_N0_BITS, 0x000000f0
.equ	M33_NVIC_IPR5_PRI_N0_MSB, 7
.equ	M33_NVIC_IPR5_PRI_N0_LSB, 4
# =============================================================================
# Register    : M33_NVIC_IPR6
# Description : Sets or reads interrupt priorities
.equ	M33_NVIC_IPR6_OFFSET, 0x0000e418
.equ	M33_NVIC_IPR6_BITS, 0xf0f0f0f0
.equ	M33_NVIC_IPR6_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR6_PRI_N3
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+3,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR6_PRI_N3_RESET, 0x0
.equ	M33_NVIC_IPR6_PRI_N3_BITS, 0xf0000000
.equ	M33_NVIC_IPR6_PRI_N3_MSB, 31
.equ	M33_NVIC_IPR6_PRI_N3_LSB, 28
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR6_PRI_N2
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+2,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR6_PRI_N2_RESET, 0x0
.equ	M33_NVIC_IPR6_PRI_N2_BITS, 0x00f00000
.equ	M33_NVIC_IPR6_PRI_N2_MSB, 23
.equ	M33_NVIC_IPR6_PRI_N2_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR6_PRI_N1
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+1,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR6_PRI_N1_RESET, 0x0
.equ	M33_NVIC_IPR6_PRI_N1_BITS, 0x0000f000
.equ	M33_NVIC_IPR6_PRI_N1_MSB, 15
.equ	M33_NVIC_IPR6_PRI_N1_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR6_PRI_N0
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+0,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR6_PRI_N0_RESET, 0x0
.equ	M33_NVIC_IPR6_PRI_N0_BITS, 0x000000f0
.equ	M33_NVIC_IPR6_PRI_N0_MSB, 7
.equ	M33_NVIC_IPR6_PRI_N0_LSB, 4
# =============================================================================
# Register    : M33_NVIC_IPR7
# Description : Sets or reads interrupt priorities
.equ	M33_NVIC_IPR7_OFFSET, 0x0000e41c
.equ	M33_NVIC_IPR7_BITS, 0xf0f0f0f0
.equ	M33_NVIC_IPR7_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR7_PRI_N3
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+3,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR7_PRI_N3_RESET, 0x0
.equ	M33_NVIC_IPR7_PRI_N3_BITS, 0xf0000000
.equ	M33_NVIC_IPR7_PRI_N3_MSB, 31
.equ	M33_NVIC_IPR7_PRI_N3_LSB, 28
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR7_PRI_N2
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+2,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR7_PRI_N2_RESET, 0x0
.equ	M33_NVIC_IPR7_PRI_N2_BITS, 0x00f00000
.equ	M33_NVIC_IPR7_PRI_N2_MSB, 23
.equ	M33_NVIC_IPR7_PRI_N2_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR7_PRI_N1
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+1,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR7_PRI_N1_RESET, 0x0
.equ	M33_NVIC_IPR7_PRI_N1_BITS, 0x0000f000
.equ	M33_NVIC_IPR7_PRI_N1_MSB, 15
.equ	M33_NVIC_IPR7_PRI_N1_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR7_PRI_N0
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+0,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR7_PRI_N0_RESET, 0x0
.equ	M33_NVIC_IPR7_PRI_N0_BITS, 0x000000f0
.equ	M33_NVIC_IPR7_PRI_N0_MSB, 7
.equ	M33_NVIC_IPR7_PRI_N0_LSB, 4
# =============================================================================
# Register    : M33_NVIC_IPR8
# Description : Sets or reads interrupt priorities
.equ	M33_NVIC_IPR8_OFFSET, 0x0000e420
.equ	M33_NVIC_IPR8_BITS, 0xf0f0f0f0
.equ	M33_NVIC_IPR8_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR8_PRI_N3
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+3,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR8_PRI_N3_RESET, 0x0
.equ	M33_NVIC_IPR8_PRI_N3_BITS, 0xf0000000
.equ	M33_NVIC_IPR8_PRI_N3_MSB, 31
.equ	M33_NVIC_IPR8_PRI_N3_LSB, 28
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR8_PRI_N2
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+2,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR8_PRI_N2_RESET, 0x0
.equ	M33_NVIC_IPR8_PRI_N2_BITS, 0x00f00000
.equ	M33_NVIC_IPR8_PRI_N2_MSB, 23
.equ	M33_NVIC_IPR8_PRI_N2_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR8_PRI_N1
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+1,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR8_PRI_N1_RESET, 0x0
.equ	M33_NVIC_IPR8_PRI_N1_BITS, 0x0000f000
.equ	M33_NVIC_IPR8_PRI_N1_MSB, 15
.equ	M33_NVIC_IPR8_PRI_N1_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR8_PRI_N0
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+0,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR8_PRI_N0_RESET, 0x0
.equ	M33_NVIC_IPR8_PRI_N0_BITS, 0x000000f0
.equ	M33_NVIC_IPR8_PRI_N0_MSB, 7
.equ	M33_NVIC_IPR8_PRI_N0_LSB, 4
# =============================================================================
# Register    : M33_NVIC_IPR9
# Description : Sets or reads interrupt priorities
.equ	M33_NVIC_IPR9_OFFSET, 0x0000e424
.equ	M33_NVIC_IPR9_BITS, 0xf0f0f0f0
.equ	M33_NVIC_IPR9_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR9_PRI_N3
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+3,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR9_PRI_N3_RESET, 0x0
.equ	M33_NVIC_IPR9_PRI_N3_BITS, 0xf0000000
.equ	M33_NVIC_IPR9_PRI_N3_MSB, 31
.equ	M33_NVIC_IPR9_PRI_N3_LSB, 28
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR9_PRI_N2
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+2,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR9_PRI_N2_RESET, 0x0
.equ	M33_NVIC_IPR9_PRI_N2_BITS, 0x00f00000
.equ	M33_NVIC_IPR9_PRI_N2_MSB, 23
.equ	M33_NVIC_IPR9_PRI_N2_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR9_PRI_N1
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+1,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR9_PRI_N1_RESET, 0x0
.equ	M33_NVIC_IPR9_PRI_N1_BITS, 0x0000f000
.equ	M33_NVIC_IPR9_PRI_N1_MSB, 15
.equ	M33_NVIC_IPR9_PRI_N1_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR9_PRI_N0
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+0,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR9_PRI_N0_RESET, 0x0
.equ	M33_NVIC_IPR9_PRI_N0_BITS, 0x000000f0
.equ	M33_NVIC_IPR9_PRI_N0_MSB, 7
.equ	M33_NVIC_IPR9_PRI_N0_LSB, 4
# =============================================================================
# Register    : M33_NVIC_IPR10
# Description : Sets or reads interrupt priorities
.equ	M33_NVIC_IPR10_OFFSET, 0x0000e428
.equ	M33_NVIC_IPR10_BITS, 0xf0f0f0f0
.equ	M33_NVIC_IPR10_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR10_PRI_N3
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+3,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR10_PRI_N3_RESET, 0x0
.equ	M33_NVIC_IPR10_PRI_N3_BITS, 0xf0000000
.equ	M33_NVIC_IPR10_PRI_N3_MSB, 31
.equ	M33_NVIC_IPR10_PRI_N3_LSB, 28
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR10_PRI_N2
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+2,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR10_PRI_N2_RESET, 0x0
.equ	M33_NVIC_IPR10_PRI_N2_BITS, 0x00f00000
.equ	M33_NVIC_IPR10_PRI_N2_MSB, 23
.equ	M33_NVIC_IPR10_PRI_N2_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR10_PRI_N1
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+1,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR10_PRI_N1_RESET, 0x0
.equ	M33_NVIC_IPR10_PRI_N1_BITS, 0x0000f000
.equ	M33_NVIC_IPR10_PRI_N1_MSB, 15
.equ	M33_NVIC_IPR10_PRI_N1_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR10_PRI_N0
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+0,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR10_PRI_N0_RESET, 0x0
.equ	M33_NVIC_IPR10_PRI_N0_BITS, 0x000000f0
.equ	M33_NVIC_IPR10_PRI_N0_MSB, 7
.equ	M33_NVIC_IPR10_PRI_N0_LSB, 4
# =============================================================================
# Register    : M33_NVIC_IPR11
# Description : Sets or reads interrupt priorities
.equ	M33_NVIC_IPR11_OFFSET, 0x0000e42c
.equ	M33_NVIC_IPR11_BITS, 0xf0f0f0f0
.equ	M33_NVIC_IPR11_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR11_PRI_N3
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+3,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR11_PRI_N3_RESET, 0x0
.equ	M33_NVIC_IPR11_PRI_N3_BITS, 0xf0000000
.equ	M33_NVIC_IPR11_PRI_N3_MSB, 31
.equ	M33_NVIC_IPR11_PRI_N3_LSB, 28
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR11_PRI_N2
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+2,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR11_PRI_N2_RESET, 0x0
.equ	M33_NVIC_IPR11_PRI_N2_BITS, 0x00f00000
.equ	M33_NVIC_IPR11_PRI_N2_MSB, 23
.equ	M33_NVIC_IPR11_PRI_N2_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR11_PRI_N1
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+1,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR11_PRI_N1_RESET, 0x0
.equ	M33_NVIC_IPR11_PRI_N1_BITS, 0x0000f000
.equ	M33_NVIC_IPR11_PRI_N1_MSB, 15
.equ	M33_NVIC_IPR11_PRI_N1_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR11_PRI_N0
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+0,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR11_PRI_N0_RESET, 0x0
.equ	M33_NVIC_IPR11_PRI_N0_BITS, 0x000000f0
.equ	M33_NVIC_IPR11_PRI_N0_MSB, 7
.equ	M33_NVIC_IPR11_PRI_N0_LSB, 4
# =============================================================================
# Register    : M33_NVIC_IPR12
# Description : Sets or reads interrupt priorities
.equ	M33_NVIC_IPR12_OFFSET, 0x0000e430
.equ	M33_NVIC_IPR12_BITS, 0xf0f0f0f0
.equ	M33_NVIC_IPR12_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR12_PRI_N3
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+3,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR12_PRI_N3_RESET, 0x0
.equ	M33_NVIC_IPR12_PRI_N3_BITS, 0xf0000000
.equ	M33_NVIC_IPR12_PRI_N3_MSB, 31
.equ	M33_NVIC_IPR12_PRI_N3_LSB, 28
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR12_PRI_N2
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+2,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR12_PRI_N2_RESET, 0x0
.equ	M33_NVIC_IPR12_PRI_N2_BITS, 0x00f00000
.equ	M33_NVIC_IPR12_PRI_N2_MSB, 23
.equ	M33_NVIC_IPR12_PRI_N2_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR12_PRI_N1
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+1,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR12_PRI_N1_RESET, 0x0
.equ	M33_NVIC_IPR12_PRI_N1_BITS, 0x0000f000
.equ	M33_NVIC_IPR12_PRI_N1_MSB, 15
.equ	M33_NVIC_IPR12_PRI_N1_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR12_PRI_N0
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+0,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR12_PRI_N0_RESET, 0x0
.equ	M33_NVIC_IPR12_PRI_N0_BITS, 0x000000f0
.equ	M33_NVIC_IPR12_PRI_N0_MSB, 7
.equ	M33_NVIC_IPR12_PRI_N0_LSB, 4
# =============================================================================
# Register    : M33_NVIC_IPR13
# Description : Sets or reads interrupt priorities
.equ	M33_NVIC_IPR13_OFFSET, 0x0000e434
.equ	M33_NVIC_IPR13_BITS, 0xf0f0f0f0
.equ	M33_NVIC_IPR13_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR13_PRI_N3
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+3,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR13_PRI_N3_RESET, 0x0
.equ	M33_NVIC_IPR13_PRI_N3_BITS, 0xf0000000
.equ	M33_NVIC_IPR13_PRI_N3_MSB, 31
.equ	M33_NVIC_IPR13_PRI_N3_LSB, 28
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR13_PRI_N2
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+2,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR13_PRI_N2_RESET, 0x0
.equ	M33_NVIC_IPR13_PRI_N2_BITS, 0x00f00000
.equ	M33_NVIC_IPR13_PRI_N2_MSB, 23
.equ	M33_NVIC_IPR13_PRI_N2_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR13_PRI_N1
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+1,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR13_PRI_N1_RESET, 0x0
.equ	M33_NVIC_IPR13_PRI_N1_BITS, 0x0000f000
.equ	M33_NVIC_IPR13_PRI_N1_MSB, 15
.equ	M33_NVIC_IPR13_PRI_N1_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR13_PRI_N0
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+0,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR13_PRI_N0_RESET, 0x0
.equ	M33_NVIC_IPR13_PRI_N0_BITS, 0x000000f0
.equ	M33_NVIC_IPR13_PRI_N0_MSB, 7
.equ	M33_NVIC_IPR13_PRI_N0_LSB, 4
# =============================================================================
# Register    : M33_NVIC_IPR14
# Description : Sets or reads interrupt priorities
.equ	M33_NVIC_IPR14_OFFSET, 0x0000e438
.equ	M33_NVIC_IPR14_BITS, 0xf0f0f0f0
.equ	M33_NVIC_IPR14_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR14_PRI_N3
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+3,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR14_PRI_N3_RESET, 0x0
.equ	M33_NVIC_IPR14_PRI_N3_BITS, 0xf0000000
.equ	M33_NVIC_IPR14_PRI_N3_MSB, 31
.equ	M33_NVIC_IPR14_PRI_N3_LSB, 28
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR14_PRI_N2
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+2,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR14_PRI_N2_RESET, 0x0
.equ	M33_NVIC_IPR14_PRI_N2_BITS, 0x00f00000
.equ	M33_NVIC_IPR14_PRI_N2_MSB, 23
.equ	M33_NVIC_IPR14_PRI_N2_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR14_PRI_N1
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+1,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR14_PRI_N1_RESET, 0x0
.equ	M33_NVIC_IPR14_PRI_N1_BITS, 0x0000f000
.equ	M33_NVIC_IPR14_PRI_N1_MSB, 15
.equ	M33_NVIC_IPR14_PRI_N1_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR14_PRI_N0
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+0,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR14_PRI_N0_RESET, 0x0
.equ	M33_NVIC_IPR14_PRI_N0_BITS, 0x000000f0
.equ	M33_NVIC_IPR14_PRI_N0_MSB, 7
.equ	M33_NVIC_IPR14_PRI_N0_LSB, 4
# =============================================================================
# Register    : M33_NVIC_IPR15
# Description : Sets or reads interrupt priorities
.equ	M33_NVIC_IPR15_OFFSET, 0x0000e43c
.equ	M33_NVIC_IPR15_BITS, 0xf0f0f0f0
.equ	M33_NVIC_IPR15_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR15_PRI_N3
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+3,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR15_PRI_N3_RESET, 0x0
.equ	M33_NVIC_IPR15_PRI_N3_BITS, 0xf0000000
.equ	M33_NVIC_IPR15_PRI_N3_MSB, 31
.equ	M33_NVIC_IPR15_PRI_N3_LSB, 28
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR15_PRI_N2
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+2,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR15_PRI_N2_RESET, 0x0
.equ	M33_NVIC_IPR15_PRI_N2_BITS, 0x00f00000
.equ	M33_NVIC_IPR15_PRI_N2_MSB, 23
.equ	M33_NVIC_IPR15_PRI_N2_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR15_PRI_N1
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+1,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR15_PRI_N1_RESET, 0x0
.equ	M33_NVIC_IPR15_PRI_N1_BITS, 0x0000f000
.equ	M33_NVIC_IPR15_PRI_N1_MSB, 15
.equ	M33_NVIC_IPR15_PRI_N1_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_NVIC_IPR15_PRI_N0
# Description : For register NVIC_IPRn, the priority of interrupt number 4*n+0,
#               or RES0 if the PE does not implement this interrupt
.equ	M33_NVIC_IPR15_PRI_N0_RESET, 0x0
.equ	M33_NVIC_IPR15_PRI_N0_BITS, 0x000000f0
.equ	M33_NVIC_IPR15_PRI_N0_MSB, 7
.equ	M33_NVIC_IPR15_PRI_N0_LSB, 4
# =============================================================================
# Register    : M33_CPUID
# Description : Provides identification information for the PE, including an
#               implementer code for the device and a device ID number
.equ	M33_CPUID_OFFSET, 0x0000ed00
.equ	M33_CPUID_BITS, 0xffffffff
.equ	M33_CPUID_RESET, 0x411fd210
# -----------------------------------------------------------------------------
# Field       : M33_CPUID_IMPLEMENTER
# Description : This field must hold an implementer code that has been assigned
#               by ARM
.equ	M33_CPUID_IMPLEMENTER_RESET, 0x41
.equ	M33_CPUID_IMPLEMENTER_BITS, 0xff000000
.equ	M33_CPUID_IMPLEMENTER_MSB, 31
.equ	M33_CPUID_IMPLEMENTER_LSB, 24
# -----------------------------------------------------------------------------
# Field       : M33_CPUID_VARIANT
# Description : IMPLEMENTATION DEFINED variant number. Typically, this field is
#               used to distinguish between different product variants, or
#               major revisions of a product
.equ	M33_CPUID_VARIANT_RESET, 0x1
.equ	M33_CPUID_VARIANT_BITS, 0x00f00000
.equ	M33_CPUID_VARIANT_MSB, 23
.equ	M33_CPUID_VARIANT_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_CPUID_ARCHITECTURE
# Description : Defines the Architecture implemented by the PE
.equ	M33_CPUID_ARCHITECTURE_RESET, 0xf
.equ	M33_CPUID_ARCHITECTURE_BITS, 0x000f0000
.equ	M33_CPUID_ARCHITECTURE_MSB, 19
.equ	M33_CPUID_ARCHITECTURE_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_CPUID_PARTNO
# Description : IMPLEMENTATION DEFINED primary part number for the device
.equ	M33_CPUID_PARTNO_RESET, 0xd21
.equ	M33_CPUID_PARTNO_BITS, 0x0000fff0
.equ	M33_CPUID_PARTNO_MSB, 15
.equ	M33_CPUID_PARTNO_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_CPUID_REVISION
# Description : IMPLEMENTATION DEFINED revision number for the device
.equ	M33_CPUID_REVISION_RESET, 0x0
.equ	M33_CPUID_REVISION_BITS, 0x0000000f
.equ	M33_CPUID_REVISION_MSB, 3
.equ	M33_CPUID_REVISION_LSB, 0
# =============================================================================
# Register    : M33_ICSR
# Description : Controls and provides status information for NMI, PendSV,
#               SysTick and interrupts
.equ	M33_ICSR_OFFSET, 0x0000ed04
.equ	M33_ICSR_BITS, 0xdfdff9ff
.equ	M33_ICSR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ICSR_PENDNMISET
# Description : Indicates whether the NMI exception is pending
.equ	M33_ICSR_PENDNMISET_RESET, 0x0
.equ	M33_ICSR_PENDNMISET_BITS, 0x80000000
.equ	M33_ICSR_PENDNMISET_MSB, 31
.equ	M33_ICSR_PENDNMISET_LSB, 31
# -----------------------------------------------------------------------------
# Field       : M33_ICSR_PENDNMICLR
# Description : Allows the NMI exception pend state to be cleared
.equ	M33_ICSR_PENDNMICLR_RESET, 0x0
.equ	M33_ICSR_PENDNMICLR_BITS, 0x40000000
.equ	M33_ICSR_PENDNMICLR_MSB, 30
.equ	M33_ICSR_PENDNMICLR_LSB, 30
# -----------------------------------------------------------------------------
# Field       : M33_ICSR_PENDSVSET
# Description : Indicates whether the PendSV `FTSSS exception is pending
.equ	M33_ICSR_PENDSVSET_RESET, 0x0
.equ	M33_ICSR_PENDSVSET_BITS, 0x10000000
.equ	M33_ICSR_PENDSVSET_MSB, 28
.equ	M33_ICSR_PENDSVSET_LSB, 28
# -----------------------------------------------------------------------------
# Field       : M33_ICSR_PENDSVCLR
# Description : Allows the PendSV exception pend state to be cleared `FTSSS
.equ	M33_ICSR_PENDSVCLR_RESET, 0x0
.equ	M33_ICSR_PENDSVCLR_BITS, 0x08000000
.equ	M33_ICSR_PENDSVCLR_MSB, 27
.equ	M33_ICSR_PENDSVCLR_LSB, 27
# -----------------------------------------------------------------------------
# Field       : M33_ICSR_PENDSTSET
# Description : Indicates whether the SysTick `FTSSS exception is pending
.equ	M33_ICSR_PENDSTSET_RESET, 0x0
.equ	M33_ICSR_PENDSTSET_BITS, 0x04000000
.equ	M33_ICSR_PENDSTSET_MSB, 26
.equ	M33_ICSR_PENDSTSET_LSB, 26
# -----------------------------------------------------------------------------
# Field       : M33_ICSR_PENDSTCLR
# Description : Allows the SysTick exception pend state to be cleared `FTSSS
.equ	M33_ICSR_PENDSTCLR_RESET, 0x0
.equ	M33_ICSR_PENDSTCLR_BITS, 0x02000000
.equ	M33_ICSR_PENDSTCLR_MSB, 25
.equ	M33_ICSR_PENDSTCLR_LSB, 25
# -----------------------------------------------------------------------------
# Field       : M33_ICSR_STTNS
# Description : Controls whether in a single SysTick implementation, the
#               SysTick is Secure or Non-secure
.equ	M33_ICSR_STTNS_RESET, 0x0
.equ	M33_ICSR_STTNS_BITS, 0x01000000
.equ	M33_ICSR_STTNS_MSB, 24
.equ	M33_ICSR_STTNS_LSB, 24
# -----------------------------------------------------------------------------
# Field       : M33_ICSR_ISRPREEMPT
# Description : Indicates whether a pending exception will be serviced on exit
#               from debug halt state
.equ	M33_ICSR_ISRPREEMPT_RESET, 0x0
.equ	M33_ICSR_ISRPREEMPT_BITS, 0x00800000
.equ	M33_ICSR_ISRPREEMPT_MSB, 23
.equ	M33_ICSR_ISRPREEMPT_LSB, 23
# -----------------------------------------------------------------------------
# Field       : M33_ICSR_ISRPENDING
# Description : Indicates whether an external interrupt, generated by the NVIC,
#               is pending
.equ	M33_ICSR_ISRPENDING_RESET, 0x0
.equ	M33_ICSR_ISRPENDING_BITS, 0x00400000
.equ	M33_ICSR_ISRPENDING_MSB, 22
.equ	M33_ICSR_ISRPENDING_LSB, 22
# -----------------------------------------------------------------------------
# Field       : M33_ICSR_VECTPENDING
# Description : The exception number of the highest priority pending and
#               enabled interrupt
.equ	M33_ICSR_VECTPENDING_RESET, 0x000
.equ	M33_ICSR_VECTPENDING_BITS, 0x001ff000
.equ	M33_ICSR_VECTPENDING_MSB, 20
.equ	M33_ICSR_VECTPENDING_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_ICSR_RETTOBASE
# Description : In Handler mode, indicates whether there is more than one
#               active exception
.equ	M33_ICSR_RETTOBASE_RESET, 0x0
.equ	M33_ICSR_RETTOBASE_BITS, 0x00000800
.equ	M33_ICSR_RETTOBASE_MSB, 11
.equ	M33_ICSR_RETTOBASE_LSB, 11
# -----------------------------------------------------------------------------
# Field       : M33_ICSR_VECTACTIVE
# Description : The exception number of the current executing exception
.equ	M33_ICSR_VECTACTIVE_RESET, 0x000
.equ	M33_ICSR_VECTACTIVE_BITS, 0x000001ff
.equ	M33_ICSR_VECTACTIVE_MSB, 8
.equ	M33_ICSR_VECTACTIVE_LSB, 0
# =============================================================================
# Register    : M33_VTOR
# Description : The VTOR indicates the offset of the vector table base address
#               from memory address 0x00000000.
.equ	M33_VTOR_OFFSET, 0x0000ed08
.equ	M33_VTOR_BITS, 0xffffff80
.equ	M33_VTOR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_VTOR_TBLOFF
# Description : Vector table base offset field. It contains bits[31:7] of the
#               offset of the table base from the bottom of the memory map.
.equ	M33_VTOR_TBLOFF_RESET, 0x0000000
.equ	M33_VTOR_TBLOFF_BITS, 0xffffff80
.equ	M33_VTOR_TBLOFF_MSB, 31
.equ	M33_VTOR_TBLOFF_LSB, 7
# =============================================================================
# Register    : M33_AIRCR
# Description : Use the Application Interrupt and Reset Control Register to:
#               determine data endianness, clear all active state information
#               from debug halt mode, request a system reset.
.equ	M33_AIRCR_OFFSET, 0x0000ed0c
.equ	M33_AIRCR_BITS, 0xffffe70e
.equ	M33_AIRCR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_AIRCR_VECTKEY
# Description : Register key:
#               Reads as Unknown
#               On writes, write 0x05FA to VECTKEY, otherwise the write is
#               ignored.
.equ	M33_AIRCR_VECTKEY_RESET, 0x0000
.equ	M33_AIRCR_VECTKEY_BITS, 0xffff0000
.equ	M33_AIRCR_VECTKEY_MSB, 31
.equ	M33_AIRCR_VECTKEY_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_AIRCR_ENDIANESS
# Description : Data endianness implemented:
#               0 = Little-endian.
.equ	M33_AIRCR_ENDIANESS_RESET, 0x0
.equ	M33_AIRCR_ENDIANESS_BITS, 0x00008000
.equ	M33_AIRCR_ENDIANESS_MSB, 15
.equ	M33_AIRCR_ENDIANESS_LSB, 15
# -----------------------------------------------------------------------------
# Field       : M33_AIRCR_PRIS
# Description : Prioritize Secure exceptions. The value of this bit defines
#               whether Secure exception priority boosting is enabled.
#               0	Priority ranges of Secure and Non-secure exceptions are
#               identical.
#               1	Non-secure exceptions are de-prioritized.
.equ	M33_AIRCR_PRIS_RESET, 0x0
.equ	M33_AIRCR_PRIS_BITS, 0x00004000
.equ	M33_AIRCR_PRIS_MSB, 14
.equ	M33_AIRCR_PRIS_LSB, 14
# -----------------------------------------------------------------------------
# Field       : M33_AIRCR_BFHFNMINS
# Description : BusFault, HardFault, and NMI Non-secure enable.
#               0	BusFault, HardFault, and NMI are Secure.
#               1	BusFault and NMI are Non-secure and exceptions can target
#               Non-secure HardFault.
.equ	M33_AIRCR_BFHFNMINS_RESET, 0x0
.equ	M33_AIRCR_BFHFNMINS_BITS, 0x00002000
.equ	M33_AIRCR_BFHFNMINS_MSB, 13
.equ	M33_AIRCR_BFHFNMINS_LSB, 13
# -----------------------------------------------------------------------------
# Field       : M33_AIRCR_PRIGROUP
# Description : Interrupt priority grouping field. This field determines the
#               split of group priority from subpriority.
#               See https:#developer.arm.com/documentation/100235/0004/the-
#               cortex-m33-peripherals/system-control-block/application-
#               interrupt-and-reset-control-register?lang=en
.equ	M33_AIRCR_PRIGROUP_RESET, 0x0
.equ	M33_AIRCR_PRIGROUP_BITS, 0x00000700
.equ	M33_AIRCR_PRIGROUP_MSB, 10
.equ	M33_AIRCR_PRIGROUP_LSB, 8
# -----------------------------------------------------------------------------
# Field       : M33_AIRCR_SYSRESETREQS
# Description : System reset request, Secure state only.
#               0	SYSRESETREQ functionality is available to both Security
#               states.
#               1 SYSRESETREQ functionality is only available to Secure state.
.equ	M33_AIRCR_SYSRESETREQS_RESET, 0x0
.equ	M33_AIRCR_SYSRESETREQS_BITS, 0x00000008
.equ	M33_AIRCR_SYSRESETREQS_MSB, 3
.equ	M33_AIRCR_SYSRESETREQS_LSB, 3
# -----------------------------------------------------------------------------
# Field       : M33_AIRCR_SYSRESETREQ
# Description : Writing 1 to this bit causes the SYSRESETREQ signal to the
#               outer system to be asserted to request a reset. The intention
#               is to force a large system reset of all major components except
#               for debug. The C_HALT bit in the DHCSR is cleared as a result
#               of the system reset requested. The debugger does not lose
#               contact with the device.
.equ	M33_AIRCR_SYSRESETREQ_RESET, 0x0
.equ	M33_AIRCR_SYSRESETREQ_BITS, 0x00000004
.equ	M33_AIRCR_SYSRESETREQ_MSB, 2
.equ	M33_AIRCR_SYSRESETREQ_LSB, 2
# -----------------------------------------------------------------------------
# Field       : M33_AIRCR_VECTCLRACTIVE
# Description : Clears all active state information for fixed and configurable
#               exceptions. This bit: is self-clearing, can only be set by the
#               DAP when the core is halted.  When set: clears all active
#               exception status of the processor, forces a return to Thread
#               mode, forces an IPSR of 0. A debugger must re-initialize the
#               stack.
.equ	M33_AIRCR_VECTCLRACTIVE_RESET, 0x0
.equ	M33_AIRCR_VECTCLRACTIVE_BITS, 0x00000002
.equ	M33_AIRCR_VECTCLRACTIVE_MSB, 1
.equ	M33_AIRCR_VECTCLRACTIVE_LSB, 1
# =============================================================================
# Register    : M33_SCR
# Description : System Control Register. Use the System Control Register for
#               power-management functions: signal to the system when the
#               processor can enter a low power state, control how the
#               processor enters and exits low power states.
.equ	M33_SCR_OFFSET, 0x0000ed10
.equ	M33_SCR_BITS, 0x0000001e
.equ	M33_SCR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_SCR_SEVONPEND
# Description : Send Event on Pending bit:
#               0 = Only enabled interrupts or events can wakeup the processor,
#               disabled interrupts are excluded.
#               1 = Enabled events and all interrupts, including disabled
#               interrupts, can wakeup the processor.
#               When an event or interrupt becomes pending, the event signal
#               wakes up the processor from WFE. If the
#               processor is not waiting for an event, the event is registered
#               and affects the next WFE.
#               The processor also wakes up on execution of an SEV instruction
#               or an external event.
.equ	M33_SCR_SEVONPEND_RESET, 0x0
.equ	M33_SCR_SEVONPEND_BITS, 0x00000010
.equ	M33_SCR_SEVONPEND_MSB, 4
.equ	M33_SCR_SEVONPEND_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_SCR_SLEEPDEEPS
# Description : 0 SLEEPDEEP is available to both security states
#               1 SLEEPDEEP is only available to Secure state
.equ	M33_SCR_SLEEPDEEPS_RESET, 0x0
.equ	M33_SCR_SLEEPDEEPS_BITS, 0x00000008
.equ	M33_SCR_SLEEPDEEPS_MSB, 3
.equ	M33_SCR_SLEEPDEEPS_LSB, 3
# -----------------------------------------------------------------------------
# Field       : M33_SCR_SLEEPDEEP
# Description : Controls whether the processor uses sleep or deep sleep as its
#               low power mode:
#               0 = Sleep.
#               1 = Deep sleep.
.equ	M33_SCR_SLEEPDEEP_RESET, 0x0
.equ	M33_SCR_SLEEPDEEP_BITS, 0x00000004
.equ	M33_SCR_SLEEPDEEP_MSB, 2
.equ	M33_SCR_SLEEPDEEP_LSB, 2
# -----------------------------------------------------------------------------
# Field       : M33_SCR_SLEEPONEXIT
# Description : Indicates sleep-on-exit when returning from Handler mode to
#               Thread mode:
#               0 = Do not sleep when returning to Thread mode.
#               1 = Enter sleep, or deep sleep, on return from an ISR to Thread
#               mode.
#               Setting this bit to 1 enables an interrupt driven application
#               to avoid returning to an empty main application.
.equ	M33_SCR_SLEEPONEXIT_RESET, 0x0
.equ	M33_SCR_SLEEPONEXIT_BITS, 0x00000002
.equ	M33_SCR_SLEEPONEXIT_MSB, 1
.equ	M33_SCR_SLEEPONEXIT_LSB, 1
# =============================================================================
# Register    : M33_CCR
# Description : Sets or returns configuration and control data
.equ	M33_CCR_OFFSET, 0x0000ed14
.equ	M33_CCR_BITS, 0x0007071b
.equ	M33_CCR_RESET, 0x00000201
# -----------------------------------------------------------------------------
# Field       : M33_CCR_BP
# Description : Enables program flow prediction `FTSSS
.equ	M33_CCR_BP_RESET, 0x0
.equ	M33_CCR_BP_BITS, 0x00040000
.equ	M33_CCR_BP_MSB, 18
.equ	M33_CCR_BP_LSB, 18
# -----------------------------------------------------------------------------
# Field       : M33_CCR_IC
# Description : This is a global enable bit for instruction caches in the
#               selected Security state
.equ	M33_CCR_IC_RESET, 0x0
.equ	M33_CCR_IC_BITS, 0x00020000
.equ	M33_CCR_IC_MSB, 17
.equ	M33_CCR_IC_LSB, 17
# -----------------------------------------------------------------------------
# Field       : M33_CCR_DC
# Description : Enables data caching of all data accesses to Normal memory
#               `FTSSS
.equ	M33_CCR_DC_RESET, 0x0
.equ	M33_CCR_DC_BITS, 0x00010000
.equ	M33_CCR_DC_MSB, 16
.equ	M33_CCR_DC_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_CCR_STKOFHFNMIGN
# Description : Controls the effect of a stack limit violation while executing
#               at a requested priority less than 0
.equ	M33_CCR_STKOFHFNMIGN_RESET, 0x0
.equ	M33_CCR_STKOFHFNMIGN_BITS, 0x00000400
.equ	M33_CCR_STKOFHFNMIGN_MSB, 10
.equ	M33_CCR_STKOFHFNMIGN_LSB, 10
# -----------------------------------------------------------------------------
# Field       : M33_CCR_RES1
# Description : Reserved, RES1
.equ	M33_CCR_RES1_RESET, 0x1
.equ	M33_CCR_RES1_BITS, 0x00000200
.equ	M33_CCR_RES1_MSB, 9
.equ	M33_CCR_RES1_LSB, 9
# -----------------------------------------------------------------------------
# Field       : M33_CCR_BFHFNMIGN
# Description : Determines the effect of precise BusFaults on handlers running
#               at a requested priority less than 0
.equ	M33_CCR_BFHFNMIGN_RESET, 0x0
.equ	M33_CCR_BFHFNMIGN_BITS, 0x00000100
.equ	M33_CCR_BFHFNMIGN_MSB, 8
.equ	M33_CCR_BFHFNMIGN_LSB, 8
# -----------------------------------------------------------------------------
# Field       : M33_CCR_DIV_0_TRP
# Description : Controls the generation of a DIVBYZERO UsageFault when
#               attempting to perform integer division by zero
.equ	M33_CCR_DIV_0_TRP_RESET, 0x0
.equ	M33_CCR_DIV_0_TRP_BITS, 0x00000010
.equ	M33_CCR_DIV_0_TRP_MSB, 4
.equ	M33_CCR_DIV_0_TRP_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_CCR_UNALIGN_TRP
# Description : Controls the trapping of unaligned word or halfword accesses
.equ	M33_CCR_UNALIGN_TRP_RESET, 0x0
.equ	M33_CCR_UNALIGN_TRP_BITS, 0x00000008
.equ	M33_CCR_UNALIGN_TRP_MSB, 3
.equ	M33_CCR_UNALIGN_TRP_LSB, 3
# -----------------------------------------------------------------------------
# Field       : M33_CCR_USERSETMPEND
# Description : Determines whether unprivileged accesses are permitted to pend
#               interrupts via the STIR
.equ	M33_CCR_USERSETMPEND_RESET, 0x0
.equ	M33_CCR_USERSETMPEND_BITS, 0x00000002
.equ	M33_CCR_USERSETMPEND_MSB, 1
.equ	M33_CCR_USERSETMPEND_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_CCR_RES1_1
# Description : Reserved, RES1
.equ	M33_CCR_RES1_1_RESET, 0x1
.equ	M33_CCR_RES1_1_BITS, 0x00000001
.equ	M33_CCR_RES1_1_MSB, 0
.equ	M33_CCR_RES1_1_LSB, 0
# =============================================================================
# Register    : M33_SHPR1
# Description : Sets or returns priority for system handlers 4 - 7
.equ	M33_SHPR1_OFFSET, 0x0000ed18
.equ	M33_SHPR1_BITS, 0xe0e0e0e0
.equ	M33_SHPR1_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_SHPR1_PRI_7_3
# Description : Priority of system handler 7, SecureFault
.equ	M33_SHPR1_PRI_7_3_RESET, 0x0
.equ	M33_SHPR1_PRI_7_3_BITS, 0xe0000000
.equ	M33_SHPR1_PRI_7_3_MSB, 31
.equ	M33_SHPR1_PRI_7_3_LSB, 29
# -----------------------------------------------------------------------------
# Field       : M33_SHPR1_PRI_6_3
# Description : Priority of system handler 6, SecureFault
.equ	M33_SHPR1_PRI_6_3_RESET, 0x0
.equ	M33_SHPR1_PRI_6_3_BITS, 0x00e00000
.equ	M33_SHPR1_PRI_6_3_MSB, 23
.equ	M33_SHPR1_PRI_6_3_LSB, 21
# -----------------------------------------------------------------------------
# Field       : M33_SHPR1_PRI_5_3
# Description : Priority of system handler 5, SecureFault
.equ	M33_SHPR1_PRI_5_3_RESET, 0x0
.equ	M33_SHPR1_PRI_5_3_BITS, 0x0000e000
.equ	M33_SHPR1_PRI_5_3_MSB, 15
.equ	M33_SHPR1_PRI_5_3_LSB, 13
# -----------------------------------------------------------------------------
# Field       : M33_SHPR1_PRI_4_3
# Description : Priority of system handler 4, SecureFault
.equ	M33_SHPR1_PRI_4_3_RESET, 0x0
.equ	M33_SHPR1_PRI_4_3_BITS, 0x000000e0
.equ	M33_SHPR1_PRI_4_3_MSB, 7
.equ	M33_SHPR1_PRI_4_3_LSB, 5
# =============================================================================
# Register    : M33_SHPR2
# Description : Sets or returns priority for system handlers 8 - 11
.equ	M33_SHPR2_OFFSET, 0x0000ed1c
.equ	M33_SHPR2_BITS, 0xe0ffffff
.equ	M33_SHPR2_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_SHPR2_PRI_11_3
# Description : Priority of system handler 11, SecureFault
.equ	M33_SHPR2_PRI_11_3_RESET, 0x0
.equ	M33_SHPR2_PRI_11_3_BITS, 0xe0000000
.equ	M33_SHPR2_PRI_11_3_MSB, 31
.equ	M33_SHPR2_PRI_11_3_LSB, 29
# -----------------------------------------------------------------------------
# Field       : M33_SHPR2_PRI_10
# Description : Reserved, RES0
.equ	M33_SHPR2_PRI_10_RESET, 0x00
.equ	M33_SHPR2_PRI_10_BITS, 0x00ff0000
.equ	M33_SHPR2_PRI_10_MSB, 23
.equ	M33_SHPR2_PRI_10_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_SHPR2_PRI_9
# Description : Reserved, RES0
.equ	M33_SHPR2_PRI_9_RESET, 0x00
.equ	M33_SHPR2_PRI_9_BITS, 0x0000ff00
.equ	M33_SHPR2_PRI_9_MSB, 15
.equ	M33_SHPR2_PRI_9_LSB, 8
# -----------------------------------------------------------------------------
# Field       : M33_SHPR2_PRI_8
# Description : Reserved, RES0
.equ	M33_SHPR2_PRI_8_RESET, 0x00
.equ	M33_SHPR2_PRI_8_BITS, 0x000000ff
.equ	M33_SHPR2_PRI_8_MSB, 7
.equ	M33_SHPR2_PRI_8_LSB, 0
# =============================================================================
# Register    : M33_SHPR3
# Description : Sets or returns priority for system handlers 12 - 15
.equ	M33_SHPR3_OFFSET, 0x0000ed20
.equ	M33_SHPR3_BITS, 0xe0e0ffe0
.equ	M33_SHPR3_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_SHPR3_PRI_15_3
# Description : Priority of system handler 15, SecureFault
.equ	M33_SHPR3_PRI_15_3_RESET, 0x0
.equ	M33_SHPR3_PRI_15_3_BITS, 0xe0000000
.equ	M33_SHPR3_PRI_15_3_MSB, 31
.equ	M33_SHPR3_PRI_15_3_LSB, 29
# -----------------------------------------------------------------------------
# Field       : M33_SHPR3_PRI_14_3
# Description : Priority of system handler 14, SecureFault
.equ	M33_SHPR3_PRI_14_3_RESET, 0x0
.equ	M33_SHPR3_PRI_14_3_BITS, 0x00e00000
.equ	M33_SHPR3_PRI_14_3_MSB, 23
.equ	M33_SHPR3_PRI_14_3_LSB, 21
# -----------------------------------------------------------------------------
# Field       : M33_SHPR3_PRI_13
# Description : Reserved, RES0
.equ	M33_SHPR3_PRI_13_RESET, 0x00
.equ	M33_SHPR3_PRI_13_BITS, 0x0000ff00
.equ	M33_SHPR3_PRI_13_MSB, 15
.equ	M33_SHPR3_PRI_13_LSB, 8
# -----------------------------------------------------------------------------
# Field       : M33_SHPR3_PRI_12_3
# Description : Priority of system handler 12, SecureFault
.equ	M33_SHPR3_PRI_12_3_RESET, 0x0
.equ	M33_SHPR3_PRI_12_3_BITS, 0x000000e0
.equ	M33_SHPR3_PRI_12_3_MSB, 7
.equ	M33_SHPR3_PRI_12_3_LSB, 5
# =============================================================================
# Register    : M33_SHCSR
# Description : Provides access to the active and pending status of system
#               exceptions
.equ	M33_SHCSR_OFFSET, 0x0000ed24
.equ	M33_SHCSR_BITS, 0x003ffdbf
.equ	M33_SHCSR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_SHCSR_HARDFAULTPENDED
# Description : `IAAMO the pending state of the HardFault exception `CTTSSS
.equ	M33_SHCSR_HARDFAULTPENDED_RESET, 0x0
.equ	M33_SHCSR_HARDFAULTPENDED_BITS, 0x00200000
.equ	M33_SHCSR_HARDFAULTPENDED_MSB, 21
.equ	M33_SHCSR_HARDFAULTPENDED_LSB, 21
# -----------------------------------------------------------------------------
# Field       : M33_SHCSR_SECUREFAULTPENDED
# Description : `IAAMO the pending state of the SecureFault exception
.equ	M33_SHCSR_SECUREFAULTPENDED_RESET, 0x0
.equ	M33_SHCSR_SECUREFAULTPENDED_BITS, 0x00100000
.equ	M33_SHCSR_SECUREFAULTPENDED_MSB, 20
.equ	M33_SHCSR_SECUREFAULTPENDED_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_SHCSR_SECUREFAULTENA
# Description : `DW the SecureFault exception is enabled
.equ	M33_SHCSR_SECUREFAULTENA_RESET, 0x0
.equ	M33_SHCSR_SECUREFAULTENA_BITS, 0x00080000
.equ	M33_SHCSR_SECUREFAULTENA_MSB, 19
.equ	M33_SHCSR_SECUREFAULTENA_LSB, 19
# -----------------------------------------------------------------------------
# Field       : M33_SHCSR_USGFAULTENA
# Description : `DW the UsageFault exception is enabled `FTSSS
.equ	M33_SHCSR_USGFAULTENA_RESET, 0x0
.equ	M33_SHCSR_USGFAULTENA_BITS, 0x00040000
.equ	M33_SHCSR_USGFAULTENA_MSB, 18
.equ	M33_SHCSR_USGFAULTENA_LSB, 18
# -----------------------------------------------------------------------------
# Field       : M33_SHCSR_BUSFAULTENA
# Description : `DW the BusFault exception is enabled
.equ	M33_SHCSR_BUSFAULTENA_RESET, 0x0
.equ	M33_SHCSR_BUSFAULTENA_BITS, 0x00020000
.equ	M33_SHCSR_BUSFAULTENA_MSB, 17
.equ	M33_SHCSR_BUSFAULTENA_LSB, 17
# -----------------------------------------------------------------------------
# Field       : M33_SHCSR_MEMFAULTENA
# Description : `DW the MemManage exception is enabled `FTSSS
.equ	M33_SHCSR_MEMFAULTENA_RESET, 0x0
.equ	M33_SHCSR_MEMFAULTENA_BITS, 0x00010000
.equ	M33_SHCSR_MEMFAULTENA_MSB, 16
.equ	M33_SHCSR_MEMFAULTENA_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_SHCSR_SVCALLPENDED
# Description : `IAAMO the pending state of the SVCall exception `FTSSS
.equ	M33_SHCSR_SVCALLPENDED_RESET, 0x0
.equ	M33_SHCSR_SVCALLPENDED_BITS, 0x00008000
.equ	M33_SHCSR_SVCALLPENDED_MSB, 15
.equ	M33_SHCSR_SVCALLPENDED_LSB, 15
# -----------------------------------------------------------------------------
# Field       : M33_SHCSR_BUSFAULTPENDED
# Description : `IAAMO the pending state of the BusFault exception
.equ	M33_SHCSR_BUSFAULTPENDED_RESET, 0x0
.equ	M33_SHCSR_BUSFAULTPENDED_BITS, 0x00004000
.equ	M33_SHCSR_BUSFAULTPENDED_MSB, 14
.equ	M33_SHCSR_BUSFAULTPENDED_LSB, 14
# -----------------------------------------------------------------------------
# Field       : M33_SHCSR_MEMFAULTPENDED
# Description : `IAAMO the pending state of the MemManage exception `FTSSS
.equ	M33_SHCSR_MEMFAULTPENDED_RESET, 0x0
.equ	M33_SHCSR_MEMFAULTPENDED_BITS, 0x00002000
.equ	M33_SHCSR_MEMFAULTPENDED_MSB, 13
.equ	M33_SHCSR_MEMFAULTPENDED_LSB, 13
# -----------------------------------------------------------------------------
# Field       : M33_SHCSR_USGFAULTPENDED
# Description : The UsageFault exception is banked between Security states,
#               `IAAMO the pending state of the UsageFault exception `FTSSS
.equ	M33_SHCSR_USGFAULTPENDED_RESET, 0x0
.equ	M33_SHCSR_USGFAULTPENDED_BITS, 0x00001000
.equ	M33_SHCSR_USGFAULTPENDED_MSB, 12
.equ	M33_SHCSR_USGFAULTPENDED_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_SHCSR_SYSTICKACT
# Description : `IAAMO the active state of the SysTick exception `FTSSS
.equ	M33_SHCSR_SYSTICKACT_RESET, 0x0
.equ	M33_SHCSR_SYSTICKACT_BITS, 0x00000800
.equ	M33_SHCSR_SYSTICKACT_MSB, 11
.equ	M33_SHCSR_SYSTICKACT_LSB, 11
# -----------------------------------------------------------------------------
# Field       : M33_SHCSR_PENDSVACT
# Description : `IAAMO the active state of the PendSV exception `FTSSS
.equ	M33_SHCSR_PENDSVACT_RESET, 0x0
.equ	M33_SHCSR_PENDSVACT_BITS, 0x00000400
.equ	M33_SHCSR_PENDSVACT_MSB, 10
.equ	M33_SHCSR_PENDSVACT_LSB, 10
# -----------------------------------------------------------------------------
# Field       : M33_SHCSR_MONITORACT
# Description : `IAAMO the active state of the DebugMonitor exception
.equ	M33_SHCSR_MONITORACT_RESET, 0x0
.equ	M33_SHCSR_MONITORACT_BITS, 0x00000100
.equ	M33_SHCSR_MONITORACT_MSB, 8
.equ	M33_SHCSR_MONITORACT_LSB, 8
# -----------------------------------------------------------------------------
# Field       : M33_SHCSR_SVCALLACT
# Description : `IAAMO the active state of the SVCall exception `FTSSS
.equ	M33_SHCSR_SVCALLACT_RESET, 0x0
.equ	M33_SHCSR_SVCALLACT_BITS, 0x00000080
.equ	M33_SHCSR_SVCALLACT_MSB, 7
.equ	M33_SHCSR_SVCALLACT_LSB, 7
# -----------------------------------------------------------------------------
# Field       : M33_SHCSR_NMIACT
# Description : `IAAMO the active state of the NMI exception
.equ	M33_SHCSR_NMIACT_RESET, 0x0
.equ	M33_SHCSR_NMIACT_BITS, 0x00000020
.equ	M33_SHCSR_NMIACT_MSB, 5
.equ	M33_SHCSR_NMIACT_LSB, 5
# -----------------------------------------------------------------------------
# Field       : M33_SHCSR_SECUREFAULTACT
# Description : `IAAMO the active state of the SecureFault exception
.equ	M33_SHCSR_SECUREFAULTACT_RESET, 0x0
.equ	M33_SHCSR_SECUREFAULTACT_BITS, 0x00000010
.equ	M33_SHCSR_SECUREFAULTACT_MSB, 4
.equ	M33_SHCSR_SECUREFAULTACT_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_SHCSR_USGFAULTACT
# Description : `IAAMO the active state of the UsageFault exception `FTSSS
.equ	M33_SHCSR_USGFAULTACT_RESET, 0x0
.equ	M33_SHCSR_USGFAULTACT_BITS, 0x00000008
.equ	M33_SHCSR_USGFAULTACT_MSB, 3
.equ	M33_SHCSR_USGFAULTACT_LSB, 3
# -----------------------------------------------------------------------------
# Field       : M33_SHCSR_HARDFAULTACT
# Description : Indicates and allows limited modification of the active state
#               of the HardFault exception `FTSSS
.equ	M33_SHCSR_HARDFAULTACT_RESET, 0x0
.equ	M33_SHCSR_HARDFAULTACT_BITS, 0x00000004
.equ	M33_SHCSR_HARDFAULTACT_MSB, 2
.equ	M33_SHCSR_HARDFAULTACT_LSB, 2
# -----------------------------------------------------------------------------
# Field       : M33_SHCSR_BUSFAULTACT
# Description : `IAAMO the active state of the BusFault exception
.equ	M33_SHCSR_BUSFAULTACT_RESET, 0x0
.equ	M33_SHCSR_BUSFAULTACT_BITS, 0x00000002
.equ	M33_SHCSR_BUSFAULTACT_MSB, 1
.equ	M33_SHCSR_BUSFAULTACT_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_SHCSR_MEMFAULTACT
# Description : `IAAMO the active state of the MemManage exception `FTSSS
.equ	M33_SHCSR_MEMFAULTACT_RESET, 0x0
.equ	M33_SHCSR_MEMFAULTACT_BITS, 0x00000001
.equ	M33_SHCSR_MEMFAULTACT_MSB, 0
.equ	M33_SHCSR_MEMFAULTACT_LSB, 0
# =============================================================================
# Register    : M33_CFSR
# Description : Contains the three Configurable Fault Status Registers.
#
#               31:16 UFSR: Provides information on UsageFault exceptions
#
#               15:8 BFSR: Provides information on BusFault exceptions
#
#               7:0 MMFSR: Provides information on MemManage exceptions
.equ	M33_CFSR_OFFSET, 0x0000ed28
.equ	M33_CFSR_BITS, 0x031fbfff
.equ	M33_CFSR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_CFSR_UFSR_DIVBYZERO
# Description : Sticky flag indicating whether an integer division by zero
#               error has occurred
.equ	M33_CFSR_UFSR_DIVBYZERO_RESET, 0x0
.equ	M33_CFSR_UFSR_DIVBYZERO_BITS, 0x02000000
.equ	M33_CFSR_UFSR_DIVBYZERO_MSB, 25
.equ	M33_CFSR_UFSR_DIVBYZERO_LSB, 25
# -----------------------------------------------------------------------------
# Field       : M33_CFSR_UFSR_UNALIGNED
# Description : Sticky flag indicating whether an unaligned access error has
#               occurred
.equ	M33_CFSR_UFSR_UNALIGNED_RESET, 0x0
.equ	M33_CFSR_UFSR_UNALIGNED_BITS, 0x01000000
.equ	M33_CFSR_UFSR_UNALIGNED_MSB, 24
.equ	M33_CFSR_UFSR_UNALIGNED_LSB, 24
# -----------------------------------------------------------------------------
# Field       : M33_CFSR_UFSR_STKOF
# Description : Sticky flag indicating whether a stack overflow error has
#               occurred
.equ	M33_CFSR_UFSR_STKOF_RESET, 0x0
.equ	M33_CFSR_UFSR_STKOF_BITS, 0x00100000
.equ	M33_CFSR_UFSR_STKOF_MSB, 20
.equ	M33_CFSR_UFSR_STKOF_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_CFSR_UFSR_NOCP
# Description : Sticky flag indicating whether a coprocessor disabled or not
#               present error has occurred
.equ	M33_CFSR_UFSR_NOCP_RESET, 0x0
.equ	M33_CFSR_UFSR_NOCP_BITS, 0x00080000
.equ	M33_CFSR_UFSR_NOCP_MSB, 19
.equ	M33_CFSR_UFSR_NOCP_LSB, 19
# -----------------------------------------------------------------------------
# Field       : M33_CFSR_UFSR_INVPC
# Description : Sticky flag indicating whether an integrity check error has
#               occurred
.equ	M33_CFSR_UFSR_INVPC_RESET, 0x0
.equ	M33_CFSR_UFSR_INVPC_BITS, 0x00040000
.equ	M33_CFSR_UFSR_INVPC_MSB, 18
.equ	M33_CFSR_UFSR_INVPC_LSB, 18
# -----------------------------------------------------------------------------
# Field       : M33_CFSR_UFSR_INVSTATE
# Description : Sticky flag indicating whether an EPSR.T or EPSR.IT validity
#               error has occurred
.equ	M33_CFSR_UFSR_INVSTATE_RESET, 0x0
.equ	M33_CFSR_UFSR_INVSTATE_BITS, 0x00020000
.equ	M33_CFSR_UFSR_INVSTATE_MSB, 17
.equ	M33_CFSR_UFSR_INVSTATE_LSB, 17
# -----------------------------------------------------------------------------
# Field       : M33_CFSR_UFSR_UNDEFINSTR
# Description : Sticky flag indicating whether an undefined instruction error
#               has occurred
.equ	M33_CFSR_UFSR_UNDEFINSTR_RESET, 0x0
.equ	M33_CFSR_UFSR_UNDEFINSTR_BITS, 0x00010000
.equ	M33_CFSR_UFSR_UNDEFINSTR_MSB, 16
.equ	M33_CFSR_UFSR_UNDEFINSTR_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_CFSR_BFSR_BFARVALID
# Description : Indicates validity of the contents of the BFAR register
.equ	M33_CFSR_BFSR_BFARVALID_RESET, 0x0
.equ	M33_CFSR_BFSR_BFARVALID_BITS, 0x00008000
.equ	M33_CFSR_BFSR_BFARVALID_MSB, 15
.equ	M33_CFSR_BFSR_BFARVALID_LSB, 15
# -----------------------------------------------------------------------------
# Field       : M33_CFSR_BFSR_LSPERR
# Description : Records whether a BusFault occurred during FP lazy state
#               preservation
.equ	M33_CFSR_BFSR_LSPERR_RESET, 0x0
.equ	M33_CFSR_BFSR_LSPERR_BITS, 0x00002000
.equ	M33_CFSR_BFSR_LSPERR_MSB, 13
.equ	M33_CFSR_BFSR_LSPERR_LSB, 13
# -----------------------------------------------------------------------------
# Field       : M33_CFSR_BFSR_STKERR
# Description : Records whether a derived BusFault occurred during exception
#               entry stacking
.equ	M33_CFSR_BFSR_STKERR_RESET, 0x0
.equ	M33_CFSR_BFSR_STKERR_BITS, 0x00001000
.equ	M33_CFSR_BFSR_STKERR_MSB, 12
.equ	M33_CFSR_BFSR_STKERR_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_CFSR_BFSR_UNSTKERR
# Description : Records whether a derived BusFault occurred during exception
#               return unstacking
.equ	M33_CFSR_BFSR_UNSTKERR_RESET, 0x0
.equ	M33_CFSR_BFSR_UNSTKERR_BITS, 0x00000800
.equ	M33_CFSR_BFSR_UNSTKERR_MSB, 11
.equ	M33_CFSR_BFSR_UNSTKERR_LSB, 11
# -----------------------------------------------------------------------------
# Field       : M33_CFSR_BFSR_IMPRECISERR
# Description : Records whether an imprecise data access error has occurred
.equ	M33_CFSR_BFSR_IMPRECISERR_RESET, 0x0
.equ	M33_CFSR_BFSR_IMPRECISERR_BITS, 0x00000400
.equ	M33_CFSR_BFSR_IMPRECISERR_MSB, 10
.equ	M33_CFSR_BFSR_IMPRECISERR_LSB, 10
# -----------------------------------------------------------------------------
# Field       : M33_CFSR_BFSR_PRECISERR
# Description : Records whether a precise data access error has occurred
.equ	M33_CFSR_BFSR_PRECISERR_RESET, 0x0
.equ	M33_CFSR_BFSR_PRECISERR_BITS, 0x00000200
.equ	M33_CFSR_BFSR_PRECISERR_MSB, 9
.equ	M33_CFSR_BFSR_PRECISERR_LSB, 9
# -----------------------------------------------------------------------------
# Field       : M33_CFSR_BFSR_IBUSERR
# Description : Records whether a BusFault on an instruction prefetch has
#               occurred
.equ	M33_CFSR_BFSR_IBUSERR_RESET, 0x0
.equ	M33_CFSR_BFSR_IBUSERR_BITS, 0x00000100
.equ	M33_CFSR_BFSR_IBUSERR_MSB, 8
.equ	M33_CFSR_BFSR_IBUSERR_LSB, 8
# -----------------------------------------------------------------------------
# Field       : M33_CFSR_MMFSR
# Description : Provides information on MemManage exceptions
.equ	M33_CFSR_MMFSR_RESET, 0x00
.equ	M33_CFSR_MMFSR_BITS, 0x000000ff
.equ	M33_CFSR_MMFSR_MSB, 7
.equ	M33_CFSR_MMFSR_LSB, 0
# =============================================================================
# Register    : M33_HFSR
# Description : Shows the cause of any HardFaults
.equ	M33_HFSR_OFFSET, 0x0000ed2c
.equ	M33_HFSR_BITS, 0xc0000002
.equ	M33_HFSR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_HFSR_DEBUGEVT
# Description : Indicates when a Debug event has occurred
.equ	M33_HFSR_DEBUGEVT_RESET, 0x0
.equ	M33_HFSR_DEBUGEVT_BITS, 0x80000000
.equ	M33_HFSR_DEBUGEVT_MSB, 31
.equ	M33_HFSR_DEBUGEVT_LSB, 31
# -----------------------------------------------------------------------------
# Field       : M33_HFSR_FORCED
# Description : Indicates that a fault with configurable priority has been
#               escalated to a HardFault exception, because it could not be
#               made active, because of priority, or because it was disabled
.equ	M33_HFSR_FORCED_RESET, 0x0
.equ	M33_HFSR_FORCED_BITS, 0x40000000
.equ	M33_HFSR_FORCED_MSB, 30
.equ	M33_HFSR_FORCED_LSB, 30
# -----------------------------------------------------------------------------
# Field       : M33_HFSR_VECTTBL
# Description : Indicates when a fault has occurred because of a vector table
#               read error on exception processing
.equ	M33_HFSR_VECTTBL_RESET, 0x0
.equ	M33_HFSR_VECTTBL_BITS, 0x00000002
.equ	M33_HFSR_VECTTBL_MSB, 1
.equ	M33_HFSR_VECTTBL_LSB, 1
# =============================================================================
# Register    : M33_DFSR
# Description : Shows which debug event occurred
.equ	M33_DFSR_OFFSET, 0x0000ed30
.equ	M33_DFSR_BITS, 0x0000001f
.equ	M33_DFSR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_DFSR_EXTERNAL
# Description : Sticky flag indicating whether an External debug request debug
#               event has occurred
.equ	M33_DFSR_EXTERNAL_RESET, 0x0
.equ	M33_DFSR_EXTERNAL_BITS, 0x00000010
.equ	M33_DFSR_EXTERNAL_MSB, 4
.equ	M33_DFSR_EXTERNAL_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_DFSR_VCATCH
# Description : Sticky flag indicating whether a Vector catch debug event has
#               occurred
.equ	M33_DFSR_VCATCH_RESET, 0x0
.equ	M33_DFSR_VCATCH_BITS, 0x00000008
.equ	M33_DFSR_VCATCH_MSB, 3
.equ	M33_DFSR_VCATCH_LSB, 3
# -----------------------------------------------------------------------------
# Field       : M33_DFSR_DWTTRAP
# Description : Sticky flag indicating whether a Watchpoint debug event has
#               occurred
.equ	M33_DFSR_DWTTRAP_RESET, 0x0
.equ	M33_DFSR_DWTTRAP_BITS, 0x00000004
.equ	M33_DFSR_DWTTRAP_MSB, 2
.equ	M33_DFSR_DWTTRAP_LSB, 2
# -----------------------------------------------------------------------------
# Field       : M33_DFSR_BKPT
# Description : Sticky flag indicating whether a Breakpoint debug event has
#               occurred
.equ	M33_DFSR_BKPT_RESET, 0x0
.equ	M33_DFSR_BKPT_BITS, 0x00000002
.equ	M33_DFSR_BKPT_MSB, 1
.equ	M33_DFSR_BKPT_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_DFSR_HALTED
# Description : Sticky flag indicating that a Halt request debug event or Step
#               debug event has occurred
.equ	M33_DFSR_HALTED_RESET, 0x0
.equ	M33_DFSR_HALTED_BITS, 0x00000001
.equ	M33_DFSR_HALTED_MSB, 0
.equ	M33_DFSR_HALTED_LSB, 0
# =============================================================================
# Register    : M33_MMFAR
# Description : Shows the address of the memory location that caused an MPU
#               fault
.equ	M33_MMFAR_OFFSET, 0x0000ed34
.equ	M33_MMFAR_BITS, 0xffffffff
.equ	M33_MMFAR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_MMFAR_ADDRESS
# Description : This register is updated with the address of a location that
#               produced a MemManage fault. The MMFSR shows the cause of the
#               fault, and whether this field is valid. This field is valid
#               only when MMFSR.MMARVALID is set, otherwise it is UNKNOWN
.equ	M33_MMFAR_ADDRESS_RESET, 0x00000000
.equ	M33_MMFAR_ADDRESS_BITS, 0xffffffff
.equ	M33_MMFAR_ADDRESS_MSB, 31
.equ	M33_MMFAR_ADDRESS_LSB, 0
# =============================================================================
# Register    : M33_BFAR
# Description : Shows the address associated with a precise data access
#               BusFault
.equ	M33_BFAR_OFFSET, 0x0000ed38
.equ	M33_BFAR_BITS, 0xffffffff
.equ	M33_BFAR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_BFAR_ADDRESS
# Description : This register is updated with the address of a location that
#               produced a BusFault. The BFSR shows the reason for the fault.
#               This field is valid only when BFSR.BFARVALID is set, otherwise
#               it is UNKNOWN
.equ	M33_BFAR_ADDRESS_RESET, 0x00000000
.equ	M33_BFAR_ADDRESS_BITS, 0xffffffff
.equ	M33_BFAR_ADDRESS_MSB, 31
.equ	M33_BFAR_ADDRESS_LSB, 0
# =============================================================================
# Register    : M33_ID_PFR0
# Description : Gives top-level information about the instruction set supported
#               by the PE
.equ	M33_ID_PFR0_OFFSET, 0x0000ed40
.equ	M33_ID_PFR0_BITS, 0x000000ff
.equ	M33_ID_PFR0_RESET, 0x00000030
# -----------------------------------------------------------------------------
# Field       : M33_ID_PFR0_STATE1
# Description : T32 instruction set support
.equ	M33_ID_PFR0_STATE1_RESET, 0x3
.equ	M33_ID_PFR0_STATE1_BITS, 0x000000f0
.equ	M33_ID_PFR0_STATE1_MSB, 7
.equ	M33_ID_PFR0_STATE1_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_ID_PFR0_STATE0
# Description : A32 instruction set support
.equ	M33_ID_PFR0_STATE0_RESET, 0x0
.equ	M33_ID_PFR0_STATE0_BITS, 0x0000000f
.equ	M33_ID_PFR0_STATE0_MSB, 3
.equ	M33_ID_PFR0_STATE0_LSB, 0
# =============================================================================
# Register    : M33_ID_PFR1
# Description : Gives information about the programmers' model and Extensions
#               support
.equ	M33_ID_PFR1_OFFSET, 0x0000ed44
.equ	M33_ID_PFR1_BITS, 0x00000ff0
.equ	M33_ID_PFR1_RESET, 0x00000520
# -----------------------------------------------------------------------------
# Field       : M33_ID_PFR1_MPROGMOD
# Description : Identifies support for the M-Profile programmers' model support
.equ	M33_ID_PFR1_MPROGMOD_RESET, 0x5
.equ	M33_ID_PFR1_MPROGMOD_BITS, 0x00000f00
.equ	M33_ID_PFR1_MPROGMOD_MSB, 11
.equ	M33_ID_PFR1_MPROGMOD_LSB, 8
# -----------------------------------------------------------------------------
# Field       : M33_ID_PFR1_SECURITY
# Description : Identifies whether the Security Extension is implemented
.equ	M33_ID_PFR1_SECURITY_RESET, 0x2
.equ	M33_ID_PFR1_SECURITY_BITS, 0x000000f0
.equ	M33_ID_PFR1_SECURITY_MSB, 7
.equ	M33_ID_PFR1_SECURITY_LSB, 4
# =============================================================================
# Register    : M33_ID_DFR0
# Description : Provides top level information about the debug system
.equ	M33_ID_DFR0_OFFSET, 0x0000ed48
.equ	M33_ID_DFR0_BITS, 0x00f00000
.equ	M33_ID_DFR0_RESET, 0x00200000
# -----------------------------------------------------------------------------
# Field       : M33_ID_DFR0_MPROFDBG
# Description : Indicates the supported M-profile debug architecture
.equ	M33_ID_DFR0_MPROFDBG_RESET, 0x2
.equ	M33_ID_DFR0_MPROFDBG_BITS, 0x00f00000
.equ	M33_ID_DFR0_MPROFDBG_MSB, 23
.equ	M33_ID_DFR0_MPROFDBG_LSB, 20
# =============================================================================
# Register    : M33_ID_AFR0
# Description : Provides information about the IMPLEMENTATION DEFINED features
#               of the PE
.equ	M33_ID_AFR0_OFFSET, 0x0000ed4c
.equ	M33_ID_AFR0_BITS, 0x0000ffff
.equ	M33_ID_AFR0_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ID_AFR0_IMPDEF3
# Description : IMPLEMENTATION DEFINED meaning
.equ	M33_ID_AFR0_IMPDEF3_RESET, 0x0
.equ	M33_ID_AFR0_IMPDEF3_BITS, 0x0000f000
.equ	M33_ID_AFR0_IMPDEF3_MSB, 15
.equ	M33_ID_AFR0_IMPDEF3_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_ID_AFR0_IMPDEF2
# Description : IMPLEMENTATION DEFINED meaning
.equ	M33_ID_AFR0_IMPDEF2_RESET, 0x0
.equ	M33_ID_AFR0_IMPDEF2_BITS, 0x00000f00
.equ	M33_ID_AFR0_IMPDEF2_MSB, 11
.equ	M33_ID_AFR0_IMPDEF2_LSB, 8
# -----------------------------------------------------------------------------
# Field       : M33_ID_AFR0_IMPDEF1
# Description : IMPLEMENTATION DEFINED meaning
.equ	M33_ID_AFR0_IMPDEF1_RESET, 0x0
.equ	M33_ID_AFR0_IMPDEF1_BITS, 0x000000f0
.equ	M33_ID_AFR0_IMPDEF1_MSB, 7
.equ	M33_ID_AFR0_IMPDEF1_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_ID_AFR0_IMPDEF0
# Description : IMPLEMENTATION DEFINED meaning
.equ	M33_ID_AFR0_IMPDEF0_RESET, 0x0
.equ	M33_ID_AFR0_IMPDEF0_BITS, 0x0000000f
.equ	M33_ID_AFR0_IMPDEF0_MSB, 3
.equ	M33_ID_AFR0_IMPDEF0_LSB, 0
# =============================================================================
# Register    : M33_ID_MMFR0
# Description : Provides information about the implemented memory model and
#               memory management support
.equ	M33_ID_MMFR0_OFFSET, 0x0000ed50
.equ	M33_ID_MMFR0_BITS, 0x00fffff0
.equ	M33_ID_MMFR0_RESET, 0x00101f40
# -----------------------------------------------------------------------------
# Field       : M33_ID_MMFR0_AUXREG
# Description : Indicates support for Auxiliary Control Registers
.equ	M33_ID_MMFR0_AUXREG_RESET, 0x1
.equ	M33_ID_MMFR0_AUXREG_BITS, 0x00f00000
.equ	M33_ID_MMFR0_AUXREG_MSB, 23
.equ	M33_ID_MMFR0_AUXREG_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_ID_MMFR0_TCM
# Description : Indicates support for tightly coupled memories (TCMs)
.equ	M33_ID_MMFR0_TCM_RESET, 0x0
.equ	M33_ID_MMFR0_TCM_BITS, 0x000f0000
.equ	M33_ID_MMFR0_TCM_MSB, 19
.equ	M33_ID_MMFR0_TCM_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_ID_MMFR0_SHARELVL
# Description : Indicates the number of shareability levels implemented
.equ	M33_ID_MMFR0_SHARELVL_RESET, 0x1
.equ	M33_ID_MMFR0_SHARELVL_BITS, 0x0000f000
.equ	M33_ID_MMFR0_SHARELVL_MSB, 15
.equ	M33_ID_MMFR0_SHARELVL_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_ID_MMFR0_OUTERSHR
# Description : Indicates the outermost shareability domain implemented
.equ	M33_ID_MMFR0_OUTERSHR_RESET, 0xf
.equ	M33_ID_MMFR0_OUTERSHR_BITS, 0x00000f00
.equ	M33_ID_MMFR0_OUTERSHR_MSB, 11
.equ	M33_ID_MMFR0_OUTERSHR_LSB, 8
# -----------------------------------------------------------------------------
# Field       : M33_ID_MMFR0_PMSA
# Description : Indicates support for the protected memory system architecture
#               (PMSA)
.equ	M33_ID_MMFR0_PMSA_RESET, 0x4
.equ	M33_ID_MMFR0_PMSA_BITS, 0x000000f0
.equ	M33_ID_MMFR0_PMSA_MSB, 7
.equ	M33_ID_MMFR0_PMSA_LSB, 4
# =============================================================================
# Register    : M33_ID_MMFR1
# Description : Provides information about the implemented memory model and
#               memory management support
.equ	M33_ID_MMFR1_OFFSET, 0x0000ed54
.equ	M33_ID_MMFR1_BITS, 0x00000000
.equ	M33_ID_MMFR1_RESET, 0x00000000
.equ	M33_ID_MMFR1_MSB, 31
.equ	M33_ID_MMFR1_LSB, 0
# =============================================================================
# Register    : M33_ID_MMFR2
# Description : Provides information about the implemented memory model and
#               memory management support
.equ	M33_ID_MMFR2_OFFSET, 0x0000ed58
.equ	M33_ID_MMFR2_BITS, 0x0f000000
.equ	M33_ID_MMFR2_RESET, 0x01000000
# -----------------------------------------------------------------------------
# Field       : M33_ID_MMFR2_WFISTALL
# Description : Indicates the support for Wait For Interrupt (WFI) stalling
.equ	M33_ID_MMFR2_WFISTALL_RESET, 0x1
.equ	M33_ID_MMFR2_WFISTALL_BITS, 0x0f000000
.equ	M33_ID_MMFR2_WFISTALL_MSB, 27
.equ	M33_ID_MMFR2_WFISTALL_LSB, 24
# =============================================================================
# Register    : M33_ID_MMFR3
# Description : Provides information about the implemented memory model and
#               memory management support
.equ	M33_ID_MMFR3_OFFSET, 0x0000ed5c
.equ	M33_ID_MMFR3_BITS, 0x00000fff
.equ	M33_ID_MMFR3_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ID_MMFR3_BPMAINT
# Description : Indicates the supported branch predictor maintenance
.equ	M33_ID_MMFR3_BPMAINT_RESET, 0x0
.equ	M33_ID_MMFR3_BPMAINT_BITS, 0x00000f00
.equ	M33_ID_MMFR3_BPMAINT_MSB, 11
.equ	M33_ID_MMFR3_BPMAINT_LSB, 8
# -----------------------------------------------------------------------------
# Field       : M33_ID_MMFR3_CMAINTSW
# Description : Indicates the supported cache maintenance operations by set/way
.equ	M33_ID_MMFR3_CMAINTSW_RESET, 0x0
.equ	M33_ID_MMFR3_CMAINTSW_BITS, 0x000000f0
.equ	M33_ID_MMFR3_CMAINTSW_MSB, 7
.equ	M33_ID_MMFR3_CMAINTSW_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_ID_MMFR3_CMAINTVA
# Description : Indicates the supported cache maintenance operations by address
.equ	M33_ID_MMFR3_CMAINTVA_RESET, 0x0
.equ	M33_ID_MMFR3_CMAINTVA_BITS, 0x0000000f
.equ	M33_ID_MMFR3_CMAINTVA_MSB, 3
.equ	M33_ID_MMFR3_CMAINTVA_LSB, 0
# =============================================================================
# Register    : M33_ID_ISAR0
# Description : Provides information about the instruction set implemented by
#               the PE
.equ	M33_ID_ISAR0_OFFSET, 0x0000ed60
.equ	M33_ID_ISAR0_BITS, 0x0ffffff0
.equ	M33_ID_ISAR0_RESET, 0x08092300
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR0_DIVIDE
# Description : Indicates the supported Divide instructions
.equ	M33_ID_ISAR0_DIVIDE_RESET, 0x8
.equ	M33_ID_ISAR0_DIVIDE_BITS, 0x0f000000
.equ	M33_ID_ISAR0_DIVIDE_MSB, 27
.equ	M33_ID_ISAR0_DIVIDE_LSB, 24
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR0_DEBUG
# Description : Indicates the implemented Debug instructions
.equ	M33_ID_ISAR0_DEBUG_RESET, 0x0
.equ	M33_ID_ISAR0_DEBUG_BITS, 0x00f00000
.equ	M33_ID_ISAR0_DEBUG_MSB, 23
.equ	M33_ID_ISAR0_DEBUG_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR0_COPROC
# Description : Indicates the supported Coprocessor instructions
.equ	M33_ID_ISAR0_COPROC_RESET, 0x9
.equ	M33_ID_ISAR0_COPROC_BITS, 0x000f0000
.equ	M33_ID_ISAR0_COPROC_MSB, 19
.equ	M33_ID_ISAR0_COPROC_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR0_CMPBRANCH
# Description : Indicates the supported combined Compare and Branch
#               instructions
.equ	M33_ID_ISAR0_CMPBRANCH_RESET, 0x2
.equ	M33_ID_ISAR0_CMPBRANCH_BITS, 0x0000f000
.equ	M33_ID_ISAR0_CMPBRANCH_MSB, 15
.equ	M33_ID_ISAR0_CMPBRANCH_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR0_BITFIELD
# Description : Indicates the supported bit field instructions
.equ	M33_ID_ISAR0_BITFIELD_RESET, 0x3
.equ	M33_ID_ISAR0_BITFIELD_BITS, 0x00000f00
.equ	M33_ID_ISAR0_BITFIELD_MSB, 11
.equ	M33_ID_ISAR0_BITFIELD_LSB, 8
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR0_BITCOUNT
# Description : Indicates the supported bit count instructions
.equ	M33_ID_ISAR0_BITCOUNT_RESET, 0x0
.equ	M33_ID_ISAR0_BITCOUNT_BITS, 0x000000f0
.equ	M33_ID_ISAR0_BITCOUNT_MSB, 7
.equ	M33_ID_ISAR0_BITCOUNT_LSB, 4
# =============================================================================
# Register    : M33_ID_ISAR1
# Description : Provides information about the instruction set implemented by
#               the PE
.equ	M33_ID_ISAR1_OFFSET, 0x0000ed64
.equ	M33_ID_ISAR1_BITS, 0x0ffff000
.equ	M33_ID_ISAR1_RESET, 0x05725000
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR1_INTERWORK
# Description : Indicates the implemented Interworking instructions
.equ	M33_ID_ISAR1_INTERWORK_RESET, 0x5
.equ	M33_ID_ISAR1_INTERWORK_BITS, 0x0f000000
.equ	M33_ID_ISAR1_INTERWORK_MSB, 27
.equ	M33_ID_ISAR1_INTERWORK_LSB, 24
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR1_IMMEDIATE
# Description : Indicates the implemented for data-processing instructions with
#               long immediates
.equ	M33_ID_ISAR1_IMMEDIATE_RESET, 0x7
.equ	M33_ID_ISAR1_IMMEDIATE_BITS, 0x00f00000
.equ	M33_ID_ISAR1_IMMEDIATE_MSB, 23
.equ	M33_ID_ISAR1_IMMEDIATE_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR1_IFTHEN
# Description : Indicates the implemented If-Then instructions
.equ	M33_ID_ISAR1_IFTHEN_RESET, 0x2
.equ	M33_ID_ISAR1_IFTHEN_BITS, 0x000f0000
.equ	M33_ID_ISAR1_IFTHEN_MSB, 19
.equ	M33_ID_ISAR1_IFTHEN_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR1_EXTEND
# Description : Indicates the implemented Extend instructions
.equ	M33_ID_ISAR1_EXTEND_RESET, 0x5
.equ	M33_ID_ISAR1_EXTEND_BITS, 0x0000f000
.equ	M33_ID_ISAR1_EXTEND_MSB, 15
.equ	M33_ID_ISAR1_EXTEND_LSB, 12
# =============================================================================
# Register    : M33_ID_ISAR2
# Description : Provides information about the instruction set implemented by
#               the PE
.equ	M33_ID_ISAR2_OFFSET, 0x0000ed68
.equ	M33_ID_ISAR2_BITS, 0xf0ffffff
.equ	M33_ID_ISAR2_RESET, 0x30173426
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR2_REVERSAL
# Description : Indicates the implemented Reversal instructions
.equ	M33_ID_ISAR2_REVERSAL_RESET, 0x3
.equ	M33_ID_ISAR2_REVERSAL_BITS, 0xf0000000
.equ	M33_ID_ISAR2_REVERSAL_MSB, 31
.equ	M33_ID_ISAR2_REVERSAL_LSB, 28
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR2_MULTU
# Description : Indicates the implemented advanced unsigned Multiply
#               instructions
.equ	M33_ID_ISAR2_MULTU_RESET, 0x1
.equ	M33_ID_ISAR2_MULTU_BITS, 0x00f00000
.equ	M33_ID_ISAR2_MULTU_MSB, 23
.equ	M33_ID_ISAR2_MULTU_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR2_MULTS
# Description : Indicates the implemented advanced signed Multiply instructions
.equ	M33_ID_ISAR2_MULTS_RESET, 0x7
.equ	M33_ID_ISAR2_MULTS_BITS, 0x000f0000
.equ	M33_ID_ISAR2_MULTS_MSB, 19
.equ	M33_ID_ISAR2_MULTS_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR2_MULT
# Description : Indicates the implemented additional Multiply instructions
.equ	M33_ID_ISAR2_MULT_RESET, 0x3
.equ	M33_ID_ISAR2_MULT_BITS, 0x0000f000
.equ	M33_ID_ISAR2_MULT_MSB, 15
.equ	M33_ID_ISAR2_MULT_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR2_MULTIACCESSINT
# Description : Indicates the support for interruptible multi-access
#               instructions
.equ	M33_ID_ISAR2_MULTIACCESSINT_RESET, 0x4
.equ	M33_ID_ISAR2_MULTIACCESSINT_BITS, 0x00000f00
.equ	M33_ID_ISAR2_MULTIACCESSINT_MSB, 11
.equ	M33_ID_ISAR2_MULTIACCESSINT_LSB, 8
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR2_MEMHINT
# Description : Indicates the implemented Memory Hint instructions
.equ	M33_ID_ISAR2_MEMHINT_RESET, 0x2
.equ	M33_ID_ISAR2_MEMHINT_BITS, 0x000000f0
.equ	M33_ID_ISAR2_MEMHINT_MSB, 7
.equ	M33_ID_ISAR2_MEMHINT_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR2_LOADSTORE
# Description : Indicates the implemented additional load/store instructions
.equ	M33_ID_ISAR2_LOADSTORE_RESET, 0x6
.equ	M33_ID_ISAR2_LOADSTORE_BITS, 0x0000000f
.equ	M33_ID_ISAR2_LOADSTORE_MSB, 3
.equ	M33_ID_ISAR2_LOADSTORE_LSB, 0
# =============================================================================
# Register    : M33_ID_ISAR3
# Description : Provides information about the instruction set implemented by
#               the PE
.equ	M33_ID_ISAR3_OFFSET, 0x0000ed6c
.equ	M33_ID_ISAR3_BITS, 0x0fffffff
.equ	M33_ID_ISAR3_RESET, 0x07895729
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR3_TRUENOP
# Description : Indicates the implemented true NOP instructions
.equ	M33_ID_ISAR3_TRUENOP_RESET, 0x7
.equ	M33_ID_ISAR3_TRUENOP_BITS, 0x0f000000
.equ	M33_ID_ISAR3_TRUENOP_MSB, 27
.equ	M33_ID_ISAR3_TRUENOP_LSB, 24
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR3_T32COPY
# Description : Indicates the support for T32 non flag-setting MOV instructions
.equ	M33_ID_ISAR3_T32COPY_RESET, 0x8
.equ	M33_ID_ISAR3_T32COPY_BITS, 0x00f00000
.equ	M33_ID_ISAR3_T32COPY_MSB, 23
.equ	M33_ID_ISAR3_T32COPY_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR3_TABBRANCH
# Description : Indicates the implemented Table Branch instructions
.equ	M33_ID_ISAR3_TABBRANCH_RESET, 0x9
.equ	M33_ID_ISAR3_TABBRANCH_BITS, 0x000f0000
.equ	M33_ID_ISAR3_TABBRANCH_MSB, 19
.equ	M33_ID_ISAR3_TABBRANCH_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR3_SYNCHPRIM
# Description : Used in conjunction with ID_ISAR4.SynchPrim_frac to indicate
#               the implemented Synchronization Primitive instructions
.equ	M33_ID_ISAR3_SYNCHPRIM_RESET, 0x5
.equ	M33_ID_ISAR3_SYNCHPRIM_BITS, 0x0000f000
.equ	M33_ID_ISAR3_SYNCHPRIM_MSB, 15
.equ	M33_ID_ISAR3_SYNCHPRIM_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR3_SVC
# Description : Indicates the implemented SVC instructions
.equ	M33_ID_ISAR3_SVC_RESET, 0x7
.equ	M33_ID_ISAR3_SVC_BITS, 0x00000f00
.equ	M33_ID_ISAR3_SVC_MSB, 11
.equ	M33_ID_ISAR3_SVC_LSB, 8
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR3_SIMD
# Description : Indicates the implemented SIMD instructions
.equ	M33_ID_ISAR3_SIMD_RESET, 0x2
.equ	M33_ID_ISAR3_SIMD_BITS, 0x000000f0
.equ	M33_ID_ISAR3_SIMD_MSB, 7
.equ	M33_ID_ISAR3_SIMD_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR3_SATURATE
# Description : Indicates the implemented saturating instructions
.equ	M33_ID_ISAR3_SATURATE_RESET, 0x9
.equ	M33_ID_ISAR3_SATURATE_BITS, 0x0000000f
.equ	M33_ID_ISAR3_SATURATE_MSB, 3
.equ	M33_ID_ISAR3_SATURATE_LSB, 0
# =============================================================================
# Register    : M33_ID_ISAR4
# Description : Provides information about the instruction set implemented by
#               the PE
.equ	M33_ID_ISAR4_OFFSET, 0x0000ed70
.equ	M33_ID_ISAR4_BITS, 0x0fff0fff
.equ	M33_ID_ISAR4_RESET, 0x01310132
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR4_PSR_M
# Description : Indicates the implemented M profile instructions to modify the
#               PSRs
.equ	M33_ID_ISAR4_PSR_M_RESET, 0x1
.equ	M33_ID_ISAR4_PSR_M_BITS, 0x0f000000
.equ	M33_ID_ISAR4_PSR_M_MSB, 27
.equ	M33_ID_ISAR4_PSR_M_LSB, 24
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR4_SYNCPRIM_FRAC
# Description : Used in conjunction with ID_ISAR3.SynchPrim to indicate the
#               implemented Synchronization Primitive instructions
.equ	M33_ID_ISAR4_SYNCPRIM_FRAC_RESET, 0x3
.equ	M33_ID_ISAR4_SYNCPRIM_FRAC_BITS, 0x00f00000
.equ	M33_ID_ISAR4_SYNCPRIM_FRAC_MSB, 23
.equ	M33_ID_ISAR4_SYNCPRIM_FRAC_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR4_BARRIER
# Description : Indicates the implemented Barrier instructions
.equ	M33_ID_ISAR4_BARRIER_RESET, 0x1
.equ	M33_ID_ISAR4_BARRIER_BITS, 0x000f0000
.equ	M33_ID_ISAR4_BARRIER_MSB, 19
.equ	M33_ID_ISAR4_BARRIER_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR4_WRITEBACK
# Description : Indicates the support for writeback addressing modes
.equ	M33_ID_ISAR4_WRITEBACK_RESET, 0x1
.equ	M33_ID_ISAR4_WRITEBACK_BITS, 0x00000f00
.equ	M33_ID_ISAR4_WRITEBACK_MSB, 11
.equ	M33_ID_ISAR4_WRITEBACK_LSB, 8
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR4_WITHSHIFTS
# Description : Indicates the support for writeback addressing modes
.equ	M33_ID_ISAR4_WITHSHIFTS_RESET, 0x3
.equ	M33_ID_ISAR4_WITHSHIFTS_BITS, 0x000000f0
.equ	M33_ID_ISAR4_WITHSHIFTS_MSB, 7
.equ	M33_ID_ISAR4_WITHSHIFTS_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_ID_ISAR4_UNPRIV
# Description : Indicates the implemented unprivileged instructions
.equ	M33_ID_ISAR4_UNPRIV_RESET, 0x2
.equ	M33_ID_ISAR4_UNPRIV_BITS, 0x0000000f
.equ	M33_ID_ISAR4_UNPRIV_MSB, 3
.equ	M33_ID_ISAR4_UNPRIV_LSB, 0
# =============================================================================
# Register    : M33_ID_ISAR5
# Description : Provides information about the instruction set implemented by
#               the PE
.equ	M33_ID_ISAR5_OFFSET, 0x0000ed74
.equ	M33_ID_ISAR5_BITS, 0x00000000
.equ	M33_ID_ISAR5_RESET, 0x00000000
.equ	M33_ID_ISAR5_MSB, 31
.equ	M33_ID_ISAR5_LSB, 0
# =============================================================================
# Register    : M33_CTR
# Description : Provides information about the architecture of the caches. CTR
#               is RES0 if CLIDR is zero.
.equ	M33_CTR_OFFSET, 0x0000ed7c
.equ	M33_CTR_BITS, 0x8fffc00f
.equ	M33_CTR_RESET, 0x8000c000
# -----------------------------------------------------------------------------
# Field       : M33_CTR_RES1
# Description : Reserved, RES1
.equ	M33_CTR_RES1_RESET, 0x1
.equ	M33_CTR_RES1_BITS, 0x80000000
.equ	M33_CTR_RES1_MSB, 31
.equ	M33_CTR_RES1_LSB, 31
# -----------------------------------------------------------------------------
# Field       : M33_CTR_CWG
# Description : Log2 of the number of words of the maximum size of memory that
#               can be overwritten as a result of the eviction of a cache entry
#               that has had a memory location in it modified
.equ	M33_CTR_CWG_RESET, 0x0
.equ	M33_CTR_CWG_BITS, 0x0f000000
.equ	M33_CTR_CWG_MSB, 27
.equ	M33_CTR_CWG_LSB, 24
# -----------------------------------------------------------------------------
# Field       : M33_CTR_ERG
# Description : Log2 of the number of words of the maximum size of the
#               reservation granule that has been implemented for the Load-
#               Exclusive and Store-Exclusive instructions
.equ	M33_CTR_ERG_RESET, 0x0
.equ	M33_CTR_ERG_BITS, 0x00f00000
.equ	M33_CTR_ERG_MSB, 23
.equ	M33_CTR_ERG_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_CTR_DMINLINE
# Description : Log2 of the number of words in the smallest cache line of all
#               the data caches and unified caches that are controlled by the
#               PE
.equ	M33_CTR_DMINLINE_RESET, 0x0
.equ	M33_CTR_DMINLINE_BITS, 0x000f0000
.equ	M33_CTR_DMINLINE_MSB, 19
.equ	M33_CTR_DMINLINE_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_CTR_RES1_1
# Description : Reserved, RES1
.equ	M33_CTR_RES1_1_RESET, 0x3
.equ	M33_CTR_RES1_1_BITS, 0x0000c000
.equ	M33_CTR_RES1_1_MSB, 15
.equ	M33_CTR_RES1_1_LSB, 14
# -----------------------------------------------------------------------------
# Field       : M33_CTR_IMINLINE
# Description : Log2 of the number of words in the smallest cache line of all
#               the instruction caches that are controlled by the PE
.equ	M33_CTR_IMINLINE_RESET, 0x0
.equ	M33_CTR_IMINLINE_BITS, 0x0000000f
.equ	M33_CTR_IMINLINE_MSB, 3
.equ	M33_CTR_IMINLINE_LSB, 0
# =============================================================================
# Register    : M33_CPACR
# Description : Specifies the access privileges for coprocessors and the FP
#               Extension
.equ	M33_CPACR_OFFSET, 0x0000ed88
.equ	M33_CPACR_BITS, 0x00f0ffff
.equ	M33_CPACR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_CPACR_CP11
# Description : The value in this field is ignored. If the implementation does
#               not include the FP Extension, this field is RAZ/WI. If the
#               value of this bit is not programmed to the same value as the
#               CP10 field, then the value is UNKNOWN
.equ	M33_CPACR_CP11_RESET, 0x0
.equ	M33_CPACR_CP11_BITS, 0x00c00000
.equ	M33_CPACR_CP11_MSB, 23
.equ	M33_CPACR_CP11_LSB, 22
# -----------------------------------------------------------------------------
# Field       : M33_CPACR_CP10
# Description : Defines the access rights for the floating-point functionality
.equ	M33_CPACR_CP10_RESET, 0x0
.equ	M33_CPACR_CP10_BITS, 0x00300000
.equ	M33_CPACR_CP10_MSB, 21
.equ	M33_CPACR_CP10_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_CPACR_CP7
# Description : Controls access privileges for coprocessor 7
.equ	M33_CPACR_CP7_RESET, 0x0
.equ	M33_CPACR_CP7_BITS, 0x0000c000
.equ	M33_CPACR_CP7_MSB, 15
.equ	M33_CPACR_CP7_LSB, 14
# -----------------------------------------------------------------------------
# Field       : M33_CPACR_CP6
# Description : Controls access privileges for coprocessor 6
.equ	M33_CPACR_CP6_RESET, 0x0
.equ	M33_CPACR_CP6_BITS, 0x00003000
.equ	M33_CPACR_CP6_MSB, 13
.equ	M33_CPACR_CP6_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_CPACR_CP5
# Description : Controls access privileges for coprocessor 5
.equ	M33_CPACR_CP5_RESET, 0x0
.equ	M33_CPACR_CP5_BITS, 0x00000c00
.equ	M33_CPACR_CP5_MSB, 11
.equ	M33_CPACR_CP5_LSB, 10
# -----------------------------------------------------------------------------
# Field       : M33_CPACR_CP4
# Description : Controls access privileges for coprocessor 4
.equ	M33_CPACR_CP4_RESET, 0x0
.equ	M33_CPACR_CP4_BITS, 0x00000300
.equ	M33_CPACR_CP4_MSB, 9
.equ	M33_CPACR_CP4_LSB, 8
# -----------------------------------------------------------------------------
# Field       : M33_CPACR_CP3
# Description : Controls access privileges for coprocessor 3
.equ	M33_CPACR_CP3_RESET, 0x0
.equ	M33_CPACR_CP3_BITS, 0x000000c0
.equ	M33_CPACR_CP3_MSB, 7
.equ	M33_CPACR_CP3_LSB, 6
# -----------------------------------------------------------------------------
# Field       : M33_CPACR_CP2
# Description : Controls access privileges for coprocessor 2
.equ	M33_CPACR_CP2_RESET, 0x0
.equ	M33_CPACR_CP2_BITS, 0x00000030
.equ	M33_CPACR_CP2_MSB, 5
.equ	M33_CPACR_CP2_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_CPACR_CP1
# Description : Controls access privileges for coprocessor 1
.equ	M33_CPACR_CP1_RESET, 0x0
.equ	M33_CPACR_CP1_BITS, 0x0000000c
.equ	M33_CPACR_CP1_MSB, 3
.equ	M33_CPACR_CP1_LSB, 2
# -----------------------------------------------------------------------------
# Field       : M33_CPACR_CP0
# Description : Controls access privileges for coprocessor 0
.equ	M33_CPACR_CP0_RESET, 0x0
.equ	M33_CPACR_CP0_BITS, 0x00000003
.equ	M33_CPACR_CP0_MSB, 1
.equ	M33_CPACR_CP0_LSB, 0
# =============================================================================
# Register    : M33_NSACR
# Description : Defines the Non-secure access permissions for both the FP
#               Extension and coprocessors CP0 to CP7
.equ	M33_NSACR_OFFSET, 0x0000ed8c
.equ	M33_NSACR_BITS, 0x00000cff
.equ	M33_NSACR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_NSACR_CP11
# Description : Enables Non-secure access to the Floating-point Extension
.equ	M33_NSACR_CP11_RESET, 0x0
.equ	M33_NSACR_CP11_BITS, 0x00000800
.equ	M33_NSACR_CP11_MSB, 11
.equ	M33_NSACR_CP11_LSB, 11
# -----------------------------------------------------------------------------
# Field       : M33_NSACR_CP10
# Description : Enables Non-secure access to the Floating-point Extension
.equ	M33_NSACR_CP10_RESET, 0x0
.equ	M33_NSACR_CP10_BITS, 0x00000400
.equ	M33_NSACR_CP10_MSB, 10
.equ	M33_NSACR_CP10_LSB, 10
# -----------------------------------------------------------------------------
# Field       : M33_NSACR_CP7
# Description : Enables Non-secure access to coprocessor CP7
.equ	M33_NSACR_CP7_RESET, 0x0
.equ	M33_NSACR_CP7_BITS, 0x00000080
.equ	M33_NSACR_CP7_MSB, 7
.equ	M33_NSACR_CP7_LSB, 7
# -----------------------------------------------------------------------------
# Field       : M33_NSACR_CP6
# Description : Enables Non-secure access to coprocessor CP6
.equ	M33_NSACR_CP6_RESET, 0x0
.equ	M33_NSACR_CP6_BITS, 0x00000040
.equ	M33_NSACR_CP6_MSB, 6
.equ	M33_NSACR_CP6_LSB, 6
# -----------------------------------------------------------------------------
# Field       : M33_NSACR_CP5
# Description : Enables Non-secure access to coprocessor CP5
.equ	M33_NSACR_CP5_RESET, 0x0
.equ	M33_NSACR_CP5_BITS, 0x00000020
.equ	M33_NSACR_CP5_MSB, 5
.equ	M33_NSACR_CP5_LSB, 5
# -----------------------------------------------------------------------------
# Field       : M33_NSACR_CP4
# Description : Enables Non-secure access to coprocessor CP4
.equ	M33_NSACR_CP4_RESET, 0x0
.equ	M33_NSACR_CP4_BITS, 0x00000010
.equ	M33_NSACR_CP4_MSB, 4
.equ	M33_NSACR_CP4_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_NSACR_CP3
# Description : Enables Non-secure access to coprocessor CP3
.equ	M33_NSACR_CP3_RESET, 0x0
.equ	M33_NSACR_CP3_BITS, 0x00000008
.equ	M33_NSACR_CP3_MSB, 3
.equ	M33_NSACR_CP3_LSB, 3
# -----------------------------------------------------------------------------
# Field       : M33_NSACR_CP2
# Description : Enables Non-secure access to coprocessor CP2
.equ	M33_NSACR_CP2_RESET, 0x0
.equ	M33_NSACR_CP2_BITS, 0x00000004
.equ	M33_NSACR_CP2_MSB, 2
.equ	M33_NSACR_CP2_LSB, 2
# -----------------------------------------------------------------------------
# Field       : M33_NSACR_CP1
# Description : Enables Non-secure access to coprocessor CP1
.equ	M33_NSACR_CP1_RESET, 0x0
.equ	M33_NSACR_CP1_BITS, 0x00000002
.equ	M33_NSACR_CP1_MSB, 1
.equ	M33_NSACR_CP1_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_NSACR_CP0
# Description : Enables Non-secure access to coprocessor CP0
.equ	M33_NSACR_CP0_RESET, 0x0
.equ	M33_NSACR_CP0_BITS, 0x00000001
.equ	M33_NSACR_CP0_MSB, 0
.equ	M33_NSACR_CP0_LSB, 0
# =============================================================================
# Register    : M33_MPU_TYPE
# Description : The MPU Type Register indicates how many regions the MPU `FTSSS
#               supports
.equ	M33_MPU_TYPE_OFFSET, 0x0000ed90
.equ	M33_MPU_TYPE_BITS, 0x0000ff01
.equ	M33_MPU_TYPE_RESET, 0x00000800
# -----------------------------------------------------------------------------
# Field       : M33_MPU_TYPE_DREGION
# Description : Number of regions supported by the MPU
.equ	M33_MPU_TYPE_DREGION_RESET, 0x08
.equ	M33_MPU_TYPE_DREGION_BITS, 0x0000ff00
.equ	M33_MPU_TYPE_DREGION_MSB, 15
.equ	M33_MPU_TYPE_DREGION_LSB, 8
# -----------------------------------------------------------------------------
# Field       : M33_MPU_TYPE_SEPARATE
# Description : Indicates support for separate instructions and data address
#               regions
.equ	M33_MPU_TYPE_SEPARATE_RESET, 0x0
.equ	M33_MPU_TYPE_SEPARATE_BITS, 0x00000001
.equ	M33_MPU_TYPE_SEPARATE_MSB, 0
.equ	M33_MPU_TYPE_SEPARATE_LSB, 0
# =============================================================================
# Register    : M33_MPU_CTRL
# Description : Enables the MPU and, when the MPU is enabled, controls whether
#               the default memory map is enabled as a background region for
#               privileged accesses, and whether the MPU is enabled for
#               HardFaults, NMIs, and exception handlers when FAULTMASK is set
#               to 1
.equ	M33_MPU_CTRL_OFFSET, 0x0000ed94
.equ	M33_MPU_CTRL_BITS, 0x00000007
.equ	M33_MPU_CTRL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_MPU_CTRL_PRIVDEFENA
# Description : Controls whether the default memory map is enabled for
#               privileged software
.equ	M33_MPU_CTRL_PRIVDEFENA_RESET, 0x0
.equ	M33_MPU_CTRL_PRIVDEFENA_BITS, 0x00000004
.equ	M33_MPU_CTRL_PRIVDEFENA_MSB, 2
.equ	M33_MPU_CTRL_PRIVDEFENA_LSB, 2
# -----------------------------------------------------------------------------
# Field       : M33_MPU_CTRL_HFNMIENA
# Description : Controls whether handlers executing with priority less than 0
#               access memory with the MPU enabled or disabled. This applies to
#               HardFaults, NMIs, and exception handlers when FAULTMASK is set
#               to 1
.equ	M33_MPU_CTRL_HFNMIENA_RESET, 0x0
.equ	M33_MPU_CTRL_HFNMIENA_BITS, 0x00000002
.equ	M33_MPU_CTRL_HFNMIENA_MSB, 1
.equ	M33_MPU_CTRL_HFNMIENA_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_MPU_CTRL_ENABLE
# Description : Enables the MPU
.equ	M33_MPU_CTRL_ENABLE_RESET, 0x0
.equ	M33_MPU_CTRL_ENABLE_BITS, 0x00000001
.equ	M33_MPU_CTRL_ENABLE_MSB, 0
.equ	M33_MPU_CTRL_ENABLE_LSB, 0
# =============================================================================
# Register    : M33_MPU_RNR
# Description : Selects the region currently accessed by MPU_RBAR and MPU_RLAR
.equ	M33_MPU_RNR_OFFSET, 0x0000ed98
.equ	M33_MPU_RNR_BITS, 0x00000007
.equ	M33_MPU_RNR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_MPU_RNR_REGION
# Description : Indicates the memory region accessed by MPU_RBAR and MPU_RLAR
.equ	M33_MPU_RNR_REGION_RESET, 0x0
.equ	M33_MPU_RNR_REGION_BITS, 0x00000007
.equ	M33_MPU_RNR_REGION_MSB, 2
.equ	M33_MPU_RNR_REGION_LSB, 0
# =============================================================================
# Register    : M33_MPU_RBAR
# Description : Provides indirect read and write access to the base address of
#               the currently selected MPU region `FTSSS
.equ	M33_MPU_RBAR_OFFSET, 0x0000ed9c
.equ	M33_MPU_RBAR_BITS, 0xffffffff
.equ	M33_MPU_RBAR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_MPU_RBAR_BASE
# Description : Contains bits [31:5] of the lower inclusive limit of the
#               selected MPU memory region. This value is zero extended to
#               provide the base address to be checked against
.equ	M33_MPU_RBAR_BASE_RESET, 0x0000000
.equ	M33_MPU_RBAR_BASE_BITS, 0xffffffe0
.equ	M33_MPU_RBAR_BASE_MSB, 31
.equ	M33_MPU_RBAR_BASE_LSB, 5
# -----------------------------------------------------------------------------
# Field       : M33_MPU_RBAR_SH
# Description : Defines the Shareability domain of this region for Normal
#               memory
.equ	M33_MPU_RBAR_SH_RESET, 0x0
.equ	M33_MPU_RBAR_SH_BITS, 0x00000018
.equ	M33_MPU_RBAR_SH_MSB, 4
.equ	M33_MPU_RBAR_SH_LSB, 3
# -----------------------------------------------------------------------------
# Field       : M33_MPU_RBAR_AP
# Description : Defines the access permissions for this region
.equ	M33_MPU_RBAR_AP_RESET, 0x0
.equ	M33_MPU_RBAR_AP_BITS, 0x00000006
.equ	M33_MPU_RBAR_AP_MSB, 2
.equ	M33_MPU_RBAR_AP_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_MPU_RBAR_XN
# Description : Defines whether code can be executed from this region
.equ	M33_MPU_RBAR_XN_RESET, 0x0
.equ	M33_MPU_RBAR_XN_BITS, 0x00000001
.equ	M33_MPU_RBAR_XN_MSB, 0
.equ	M33_MPU_RBAR_XN_LSB, 0
# =============================================================================
# Register    : M33_MPU_RLAR
# Description : Provides indirect read and write access to the limit address of
#               the currently selected MPU region `FTSSS
.equ	M33_MPU_RLAR_OFFSET, 0x0000eda0
.equ	M33_MPU_RLAR_BITS, 0xffffffef
.equ	M33_MPU_RLAR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_MPU_RLAR_LIMIT
# Description : Contains bits [31:5] of the upper inclusive limit of the
#               selected MPU memory region. This value is postfixed with 0x1F
#               to provide the limit address to be checked against
.equ	M33_MPU_RLAR_LIMIT_RESET, 0x0000000
.equ	M33_MPU_RLAR_LIMIT_BITS, 0xffffffe0
.equ	M33_MPU_RLAR_LIMIT_MSB, 31
.equ	M33_MPU_RLAR_LIMIT_LSB, 5
# -----------------------------------------------------------------------------
# Field       : M33_MPU_RLAR_ATTRINDX
# Description : Associates a set of attributes in the MPU_MAIR0 and MPU_MAIR1
#               fields
.equ	M33_MPU_RLAR_ATTRINDX_RESET, 0x0
.equ	M33_MPU_RLAR_ATTRINDX_BITS, 0x0000000e
.equ	M33_MPU_RLAR_ATTRINDX_MSB, 3
.equ	M33_MPU_RLAR_ATTRINDX_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_MPU_RLAR_EN
# Description : Region enable
.equ	M33_MPU_RLAR_EN_RESET, 0x0
.equ	M33_MPU_RLAR_EN_BITS, 0x00000001
.equ	M33_MPU_RLAR_EN_MSB, 0
.equ	M33_MPU_RLAR_EN_LSB, 0
# =============================================================================
# Register    : M33_MPU_RBAR_A1
# Description : Provides indirect read and write access to the base address of
#               the MPU region selected by MPU_RNR[7:2]:(1[1:0]) `FTSSS
.equ	M33_MPU_RBAR_A1_OFFSET, 0x0000eda4
.equ	M33_MPU_RBAR_A1_BITS, 0xffffffff
.equ	M33_MPU_RBAR_A1_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_MPU_RBAR_A1_BASE
# Description : Contains bits [31:5] of the lower inclusive limit of the
#               selected MPU memory region. This value is zero extended to
#               provide the base address to be checked against
.equ	M33_MPU_RBAR_A1_BASE_RESET, 0x0000000
.equ	M33_MPU_RBAR_A1_BASE_BITS, 0xffffffe0
.equ	M33_MPU_RBAR_A1_BASE_MSB, 31
.equ	M33_MPU_RBAR_A1_BASE_LSB, 5
# -----------------------------------------------------------------------------
# Field       : M33_MPU_RBAR_A1_SH
# Description : Defines the Shareability domain of this region for Normal
#               memory
.equ	M33_MPU_RBAR_A1_SH_RESET, 0x0
.equ	M33_MPU_RBAR_A1_SH_BITS, 0x00000018
.equ	M33_MPU_RBAR_A1_SH_MSB, 4
.equ	M33_MPU_RBAR_A1_SH_LSB, 3
# -----------------------------------------------------------------------------
# Field       : M33_MPU_RBAR_A1_AP
# Description : Defines the access permissions for this region
.equ	M33_MPU_RBAR_A1_AP_RESET, 0x0
.equ	M33_MPU_RBAR_A1_AP_BITS, 0x00000006
.equ	M33_MPU_RBAR_A1_AP_MSB, 2
.equ	M33_MPU_RBAR_A1_AP_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_MPU_RBAR_A1_XN
# Description : Defines whether code can be executed from this region
.equ	M33_MPU_RBAR_A1_XN_RESET, 0x0
.equ	M33_MPU_RBAR_A1_XN_BITS, 0x00000001
.equ	M33_MPU_RBAR_A1_XN_MSB, 0
.equ	M33_MPU_RBAR_A1_XN_LSB, 0
# =============================================================================
# Register    : M33_MPU_RLAR_A1
# Description : Provides indirect read and write access to the limit address of
#               the currently selected MPU region selected by
#               MPU_RNR[7:2]:(1[1:0]) `FTSSS
.equ	M33_MPU_RLAR_A1_OFFSET, 0x0000eda8
.equ	M33_MPU_RLAR_A1_BITS, 0xffffffef
.equ	M33_MPU_RLAR_A1_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_MPU_RLAR_A1_LIMIT
# Description : Contains bits [31:5] of the upper inclusive limit of the
#               selected MPU memory region. This value is postfixed with 0x1F
#               to provide the limit address to be checked against
.equ	M33_MPU_RLAR_A1_LIMIT_RESET, 0x0000000
.equ	M33_MPU_RLAR_A1_LIMIT_BITS, 0xffffffe0
.equ	M33_MPU_RLAR_A1_LIMIT_MSB, 31
.equ	M33_MPU_RLAR_A1_LIMIT_LSB, 5
# -----------------------------------------------------------------------------
# Field       : M33_MPU_RLAR_A1_ATTRINDX
# Description : Associates a set of attributes in the MPU_MAIR0 and MPU_MAIR1
#               fields
.equ	M33_MPU_RLAR_A1_ATTRINDX_RESET, 0x0
.equ	M33_MPU_RLAR_A1_ATTRINDX_BITS, 0x0000000e
.equ	M33_MPU_RLAR_A1_ATTRINDX_MSB, 3
.equ	M33_MPU_RLAR_A1_ATTRINDX_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_MPU_RLAR_A1_EN
# Description : Region enable
.equ	M33_MPU_RLAR_A1_EN_RESET, 0x0
.equ	M33_MPU_RLAR_A1_EN_BITS, 0x00000001
.equ	M33_MPU_RLAR_A1_EN_MSB, 0
.equ	M33_MPU_RLAR_A1_EN_LSB, 0
# =============================================================================
# Register    : M33_MPU_RBAR_A2
# Description : Provides indirect read and write access to the base address of
#               the MPU region selected by MPU_RNR[7:2]:(2[1:0]) `FTSSS
.equ	M33_MPU_RBAR_A2_OFFSET, 0x0000edac
.equ	M33_MPU_RBAR_A2_BITS, 0xffffffff
.equ	M33_MPU_RBAR_A2_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_MPU_RBAR_A2_BASE
# Description : Contains bits [31:5] of the lower inclusive limit of the
#               selected MPU memory region. This value is zero extended to
#               provide the base address to be checked against
.equ	M33_MPU_RBAR_A2_BASE_RESET, 0x0000000
.equ	M33_MPU_RBAR_A2_BASE_BITS, 0xffffffe0
.equ	M33_MPU_RBAR_A2_BASE_MSB, 31
.equ	M33_MPU_RBAR_A2_BASE_LSB, 5
# -----------------------------------------------------------------------------
# Field       : M33_MPU_RBAR_A2_SH
# Description : Defines the Shareability domain of this region for Normal
#               memory
.equ	M33_MPU_RBAR_A2_SH_RESET, 0x0
.equ	M33_MPU_RBAR_A2_SH_BITS, 0x00000018
.equ	M33_MPU_RBAR_A2_SH_MSB, 4
.equ	M33_MPU_RBAR_A2_SH_LSB, 3
# -----------------------------------------------------------------------------
# Field       : M33_MPU_RBAR_A2_AP
# Description : Defines the access permissions for this region
.equ	M33_MPU_RBAR_A2_AP_RESET, 0x0
.equ	M33_MPU_RBAR_A2_AP_BITS, 0x00000006
.equ	M33_MPU_RBAR_A2_AP_MSB, 2
.equ	M33_MPU_RBAR_A2_AP_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_MPU_RBAR_A2_XN
# Description : Defines whether code can be executed from this region
.equ	M33_MPU_RBAR_A2_XN_RESET, 0x0
.equ	M33_MPU_RBAR_A2_XN_BITS, 0x00000001
.equ	M33_MPU_RBAR_A2_XN_MSB, 0
.equ	M33_MPU_RBAR_A2_XN_LSB, 0
# =============================================================================
# Register    : M33_MPU_RLAR_A2
# Description : Provides indirect read and write access to the limit address of
#               the currently selected MPU region selected by
#               MPU_RNR[7:2]:(2[1:0]) `FTSSS
.equ	M33_MPU_RLAR_A2_OFFSET, 0x0000edb0
.equ	M33_MPU_RLAR_A2_BITS, 0xffffffef
.equ	M33_MPU_RLAR_A2_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_MPU_RLAR_A2_LIMIT
# Description : Contains bits [31:5] of the upper inclusive limit of the
#               selected MPU memory region. This value is postfixed with 0x1F
#               to provide the limit address to be checked against
.equ	M33_MPU_RLAR_A2_LIMIT_RESET, 0x0000000
.equ	M33_MPU_RLAR_A2_LIMIT_BITS, 0xffffffe0
.equ	M33_MPU_RLAR_A2_LIMIT_MSB, 31
.equ	M33_MPU_RLAR_A2_LIMIT_LSB, 5
# -----------------------------------------------------------------------------
# Field       : M33_MPU_RLAR_A2_ATTRINDX
# Description : Associates a set of attributes in the MPU_MAIR0 and MPU_MAIR1
#               fields
.equ	M33_MPU_RLAR_A2_ATTRINDX_RESET, 0x0
.equ	M33_MPU_RLAR_A2_ATTRINDX_BITS, 0x0000000e
.equ	M33_MPU_RLAR_A2_ATTRINDX_MSB, 3
.equ	M33_MPU_RLAR_A2_ATTRINDX_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_MPU_RLAR_A2_EN
# Description : Region enable
.equ	M33_MPU_RLAR_A2_EN_RESET, 0x0
.equ	M33_MPU_RLAR_A2_EN_BITS, 0x00000001
.equ	M33_MPU_RLAR_A2_EN_MSB, 0
.equ	M33_MPU_RLAR_A2_EN_LSB, 0
# =============================================================================
# Register    : M33_MPU_RBAR_A3
# Description : Provides indirect read and write access to the base address of
#               the MPU region selected by MPU_RNR[7:2]:(3[1:0]) `FTSSS
.equ	M33_MPU_RBAR_A3_OFFSET, 0x0000edb4
.equ	M33_MPU_RBAR_A3_BITS, 0xffffffff
.equ	M33_MPU_RBAR_A3_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_MPU_RBAR_A3_BASE
# Description : Contains bits [31:5] of the lower inclusive limit of the
#               selected MPU memory region. This value is zero extended to
#               provide the base address to be checked against
.equ	M33_MPU_RBAR_A3_BASE_RESET, 0x0000000
.equ	M33_MPU_RBAR_A3_BASE_BITS, 0xffffffe0
.equ	M33_MPU_RBAR_A3_BASE_MSB, 31
.equ	M33_MPU_RBAR_A3_BASE_LSB, 5
# -----------------------------------------------------------------------------
# Field       : M33_MPU_RBAR_A3_SH
# Description : Defines the Shareability domain of this region for Normal
#               memory
.equ	M33_MPU_RBAR_A3_SH_RESET, 0x0
.equ	M33_MPU_RBAR_A3_SH_BITS, 0x00000018
.equ	M33_MPU_RBAR_A3_SH_MSB, 4
.equ	M33_MPU_RBAR_A3_SH_LSB, 3
# -----------------------------------------------------------------------------
# Field       : M33_MPU_RBAR_A3_AP
# Description : Defines the access permissions for this region
.equ	M33_MPU_RBAR_A3_AP_RESET, 0x0
.equ	M33_MPU_RBAR_A3_AP_BITS, 0x00000006
.equ	M33_MPU_RBAR_A3_AP_MSB, 2
.equ	M33_MPU_RBAR_A3_AP_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_MPU_RBAR_A3_XN
# Description : Defines whether code can be executed from this region
.equ	M33_MPU_RBAR_A3_XN_RESET, 0x0
.equ	M33_MPU_RBAR_A3_XN_BITS, 0x00000001
.equ	M33_MPU_RBAR_A3_XN_MSB, 0
.equ	M33_MPU_RBAR_A3_XN_LSB, 0
# =============================================================================
# Register    : M33_MPU_RLAR_A3
# Description : Provides indirect read and write access to the limit address of
#               the currently selected MPU region selected by
#               MPU_RNR[7:2]:(3[1:0]) `FTSSS
.equ	M33_MPU_RLAR_A3_OFFSET, 0x0000edb8
.equ	M33_MPU_RLAR_A3_BITS, 0xffffffef
.equ	M33_MPU_RLAR_A3_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_MPU_RLAR_A3_LIMIT
# Description : Contains bits [31:5] of the upper inclusive limit of the
#               selected MPU memory region. This value is postfixed with 0x1F
#               to provide the limit address to be checked against
.equ	M33_MPU_RLAR_A3_LIMIT_RESET, 0x0000000
.equ	M33_MPU_RLAR_A3_LIMIT_BITS, 0xffffffe0
.equ	M33_MPU_RLAR_A3_LIMIT_MSB, 31
.equ	M33_MPU_RLAR_A3_LIMIT_LSB, 5
# -----------------------------------------------------------------------------
# Field       : M33_MPU_RLAR_A3_ATTRINDX
# Description : Associates a set of attributes in the MPU_MAIR0 and MPU_MAIR1
#               fields
.equ	M33_MPU_RLAR_A3_ATTRINDX_RESET, 0x0
.equ	M33_MPU_RLAR_A3_ATTRINDX_BITS, 0x0000000e
.equ	M33_MPU_RLAR_A3_ATTRINDX_MSB, 3
.equ	M33_MPU_RLAR_A3_ATTRINDX_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_MPU_RLAR_A3_EN
# Description : Region enable
.equ	M33_MPU_RLAR_A3_EN_RESET, 0x0
.equ	M33_MPU_RLAR_A3_EN_BITS, 0x00000001
.equ	M33_MPU_RLAR_A3_EN_MSB, 0
.equ	M33_MPU_RLAR_A3_EN_LSB, 0
# =============================================================================
# Register    : M33_MPU_MAIR0
# Description : Along with MPU_MAIR1, provides the memory attribute encodings
#               corresponding to the AttrIndex values
.equ	M33_MPU_MAIR0_OFFSET, 0x0000edc0
.equ	M33_MPU_MAIR0_BITS, 0xffffffff
.equ	M33_MPU_MAIR0_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_MPU_MAIR0_ATTR3
# Description : Memory attribute encoding for MPU regions with an AttrIndex of
#               3
.equ	M33_MPU_MAIR0_ATTR3_RESET, 0x00
.equ	M33_MPU_MAIR0_ATTR3_BITS, 0xff000000
.equ	M33_MPU_MAIR0_ATTR3_MSB, 31
.equ	M33_MPU_MAIR0_ATTR3_LSB, 24
# -----------------------------------------------------------------------------
# Field       : M33_MPU_MAIR0_ATTR2
# Description : Memory attribute encoding for MPU regions with an AttrIndex of
#               2
.equ	M33_MPU_MAIR0_ATTR2_RESET, 0x00
.equ	M33_MPU_MAIR0_ATTR2_BITS, 0x00ff0000
.equ	M33_MPU_MAIR0_ATTR2_MSB, 23
.equ	M33_MPU_MAIR0_ATTR2_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_MPU_MAIR0_ATTR1
# Description : Memory attribute encoding for MPU regions with an AttrIndex of
#               1
.equ	M33_MPU_MAIR0_ATTR1_RESET, 0x00
.equ	M33_MPU_MAIR0_ATTR1_BITS, 0x0000ff00
.equ	M33_MPU_MAIR0_ATTR1_MSB, 15
.equ	M33_MPU_MAIR0_ATTR1_LSB, 8
# -----------------------------------------------------------------------------
# Field       : M33_MPU_MAIR0_ATTR0
# Description : Memory attribute encoding for MPU regions with an AttrIndex of
#               0
.equ	M33_MPU_MAIR0_ATTR0_RESET, 0x00
.equ	M33_MPU_MAIR0_ATTR0_BITS, 0x000000ff
.equ	M33_MPU_MAIR0_ATTR0_MSB, 7
.equ	M33_MPU_MAIR0_ATTR0_LSB, 0
# =============================================================================
# Register    : M33_MPU_MAIR1
# Description : Along with MPU_MAIR0, provides the memory attribute encodings
#               corresponding to the AttrIndex values
.equ	M33_MPU_MAIR1_OFFSET, 0x0000edc4
.equ	M33_MPU_MAIR1_BITS, 0xffffffff
.equ	M33_MPU_MAIR1_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_MPU_MAIR1_ATTR7
# Description : Memory attribute encoding for MPU regions with an AttrIndex of
#               7
.equ	M33_MPU_MAIR1_ATTR7_RESET, 0x00
.equ	M33_MPU_MAIR1_ATTR7_BITS, 0xff000000
.equ	M33_MPU_MAIR1_ATTR7_MSB, 31
.equ	M33_MPU_MAIR1_ATTR7_LSB, 24
# -----------------------------------------------------------------------------
# Field       : M33_MPU_MAIR1_ATTR6
# Description : Memory attribute encoding for MPU regions with an AttrIndex of
#               6
.equ	M33_MPU_MAIR1_ATTR6_RESET, 0x00
.equ	M33_MPU_MAIR1_ATTR6_BITS, 0x00ff0000
.equ	M33_MPU_MAIR1_ATTR6_MSB, 23
.equ	M33_MPU_MAIR1_ATTR6_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_MPU_MAIR1_ATTR5
# Description : Memory attribute encoding for MPU regions with an AttrIndex of
#               5
.equ	M33_MPU_MAIR1_ATTR5_RESET, 0x00
.equ	M33_MPU_MAIR1_ATTR5_BITS, 0x0000ff00
.equ	M33_MPU_MAIR1_ATTR5_MSB, 15
.equ	M33_MPU_MAIR1_ATTR5_LSB, 8
# -----------------------------------------------------------------------------
# Field       : M33_MPU_MAIR1_ATTR4
# Description : Memory attribute encoding for MPU regions with an AttrIndex of
#               4
.equ	M33_MPU_MAIR1_ATTR4_RESET, 0x00
.equ	M33_MPU_MAIR1_ATTR4_BITS, 0x000000ff
.equ	M33_MPU_MAIR1_ATTR4_MSB, 7
.equ	M33_MPU_MAIR1_ATTR4_LSB, 0
# =============================================================================
# Register    : M33_SAU_CTRL
# Description : Allows enabling of the Security Attribution Unit
.equ	M33_SAU_CTRL_OFFSET, 0x0000edd0
.equ	M33_SAU_CTRL_BITS, 0x00000003
.equ	M33_SAU_CTRL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_SAU_CTRL_ALLNS
# Description : When SAU_CTRL.ENABLE is 0 this bit controls if the memory is
#               marked as Non-secure or Secure
.equ	M33_SAU_CTRL_ALLNS_RESET, 0x0
.equ	M33_SAU_CTRL_ALLNS_BITS, 0x00000002
.equ	M33_SAU_CTRL_ALLNS_MSB, 1
.equ	M33_SAU_CTRL_ALLNS_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_SAU_CTRL_ENABLE
# Description : Enables the SAU
.equ	M33_SAU_CTRL_ENABLE_RESET, 0x0
.equ	M33_SAU_CTRL_ENABLE_BITS, 0x00000001
.equ	M33_SAU_CTRL_ENABLE_MSB, 0
.equ	M33_SAU_CTRL_ENABLE_LSB, 0
# =============================================================================
# Register    : M33_SAU_TYPE
# Description : Indicates the number of regions implemented by the Security
#               Attribution Unit
.equ	M33_SAU_TYPE_OFFSET, 0x0000edd4
.equ	M33_SAU_TYPE_BITS, 0x000000ff
.equ	M33_SAU_TYPE_RESET, 0x00000008
# -----------------------------------------------------------------------------
# Field       : M33_SAU_TYPE_SREGION
# Description : The number of implemented SAU regions
.equ	M33_SAU_TYPE_SREGION_RESET, 0x08
.equ	M33_SAU_TYPE_SREGION_BITS, 0x000000ff
.equ	M33_SAU_TYPE_SREGION_MSB, 7
.equ	M33_SAU_TYPE_SREGION_LSB, 0
# =============================================================================
# Register    : M33_SAU_RNR
# Description : Selects the region currently accessed by SAU_RBAR and SAU_RLAR
.equ	M33_SAU_RNR_OFFSET, 0x0000edd8
.equ	M33_SAU_RNR_BITS, 0x000000ff
.equ	M33_SAU_RNR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_SAU_RNR_REGION
# Description : Indicates the SAU region accessed by SAU_RBAR and SAU_RLAR
.equ	M33_SAU_RNR_REGION_RESET, 0x00
.equ	M33_SAU_RNR_REGION_BITS, 0x000000ff
.equ	M33_SAU_RNR_REGION_MSB, 7
.equ	M33_SAU_RNR_REGION_LSB, 0
# =============================================================================
# Register    : M33_SAU_RBAR
# Description : Provides indirect read and write access to the base address of
#               the currently selected SAU region
.equ	M33_SAU_RBAR_OFFSET, 0x0000eddc
.equ	M33_SAU_RBAR_BITS, 0xffffffe0
.equ	M33_SAU_RBAR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_SAU_RBAR_BADDR
# Description : Holds bits [31:5] of the base address for the selected SAU
#               region
.equ	M33_SAU_RBAR_BADDR_RESET, 0x0000000
.equ	M33_SAU_RBAR_BADDR_BITS, 0xffffffe0
.equ	M33_SAU_RBAR_BADDR_MSB, 31
.equ	M33_SAU_RBAR_BADDR_LSB, 5
# =============================================================================
# Register    : M33_SAU_RLAR
# Description : Provides indirect read and write access to the limit address of
#               the currently selected SAU region
.equ	M33_SAU_RLAR_OFFSET, 0x0000ede0
.equ	M33_SAU_RLAR_BITS, 0xffffffe3
.equ	M33_SAU_RLAR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_SAU_RLAR_LADDR
# Description : Holds bits [31:5] of the limit address for the selected SAU
#               region
.equ	M33_SAU_RLAR_LADDR_RESET, 0x0000000
.equ	M33_SAU_RLAR_LADDR_BITS, 0xffffffe0
.equ	M33_SAU_RLAR_LADDR_MSB, 31
.equ	M33_SAU_RLAR_LADDR_LSB, 5
# -----------------------------------------------------------------------------
# Field       : M33_SAU_RLAR_NSC
# Description : Controls whether Non-secure state is permitted to execute an SG
#               instruction from this region
.equ	M33_SAU_RLAR_NSC_RESET, 0x0
.equ	M33_SAU_RLAR_NSC_BITS, 0x00000002
.equ	M33_SAU_RLAR_NSC_MSB, 1
.equ	M33_SAU_RLAR_NSC_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_SAU_RLAR_ENABLE
# Description : SAU region enable
.equ	M33_SAU_RLAR_ENABLE_RESET, 0x0
.equ	M33_SAU_RLAR_ENABLE_BITS, 0x00000001
.equ	M33_SAU_RLAR_ENABLE_MSB, 0
.equ	M33_SAU_RLAR_ENABLE_LSB, 0
# =============================================================================
# Register    : M33_SFSR
# Description : Provides information about any security related faults
.equ	M33_SFSR_OFFSET, 0x0000ede4
.equ	M33_SFSR_BITS, 0x000000ff
.equ	M33_SFSR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_SFSR_LSERR
# Description : Sticky flag indicating that an error occurred during lazy state
#               activation or deactivation
.equ	M33_SFSR_LSERR_RESET, 0x0
.equ	M33_SFSR_LSERR_BITS, 0x00000080
.equ	M33_SFSR_LSERR_MSB, 7
.equ	M33_SFSR_LSERR_LSB, 7
# -----------------------------------------------------------------------------
# Field       : M33_SFSR_SFARVALID
# Description : This bit is set when the SFAR register contains a valid value.
#               As with similar fields, such as BFSR.BFARVALID and
#               MMFSR.MMARVALID, this bit can be cleared by other exceptions,
#               such as BusFault
.equ	M33_SFSR_SFARVALID_RESET, 0x0
.equ	M33_SFSR_SFARVALID_BITS, 0x00000040
.equ	M33_SFSR_SFARVALID_MSB, 6
.equ	M33_SFSR_SFARVALID_LSB, 6
# -----------------------------------------------------------------------------
# Field       : M33_SFSR_LSPERR
# Description : Stick flag indicating that an SAU or IDAU violation occurred
#               during the lazy preservation of floating-point state
.equ	M33_SFSR_LSPERR_RESET, 0x0
.equ	M33_SFSR_LSPERR_BITS, 0x00000020
.equ	M33_SFSR_LSPERR_MSB, 5
.equ	M33_SFSR_LSPERR_LSB, 5
# -----------------------------------------------------------------------------
# Field       : M33_SFSR_INVTRAN
# Description : Sticky flag indicating that an exception was raised due to a
#               branch that was not flagged as being domain crossing causing a
#               transition from Secure to Non-secure memory
.equ	M33_SFSR_INVTRAN_RESET, 0x0
.equ	M33_SFSR_INVTRAN_BITS, 0x00000010
.equ	M33_SFSR_INVTRAN_MSB, 4
.equ	M33_SFSR_INVTRAN_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_SFSR_AUVIOL
# Description : Sticky flag indicating that an attempt was made to access parts
#               of the address space that are marked as Secure with NS-Req for
#               the transaction set to Non-secure. This bit is not set if the
#               violation occurred during lazy state preservation. See LSPERR
.equ	M33_SFSR_AUVIOL_RESET, 0x0
.equ	M33_SFSR_AUVIOL_BITS, 0x00000008
.equ	M33_SFSR_AUVIOL_MSB, 3
.equ	M33_SFSR_AUVIOL_LSB, 3
# -----------------------------------------------------------------------------
# Field       : M33_SFSR_INVER
# Description : This can be caused by EXC_RETURN.DCRS being set to 0 when
#               returning from an exception in the Non-secure state, or by
#               EXC_RETURN.ES being set to 1 when returning from an exception
#               in the Non-secure state
.equ	M33_SFSR_INVER_RESET, 0x0
.equ	M33_SFSR_INVER_BITS, 0x00000004
.equ	M33_SFSR_INVER_MSB, 2
.equ	M33_SFSR_INVER_LSB, 2
# -----------------------------------------------------------------------------
# Field       : M33_SFSR_INVIS
# Description : This bit is set if the integrity signature in an exception
#               stack frame is found to be invalid during the unstacking
#               operation
.equ	M33_SFSR_INVIS_RESET, 0x0
.equ	M33_SFSR_INVIS_BITS, 0x00000002
.equ	M33_SFSR_INVIS_MSB, 1
.equ	M33_SFSR_INVIS_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_SFSR_INVEP
# Description : This bit is set if a function call from the Non-secure state or
#               exception targets a non-SG instruction in the Secure state.
#               This bit is also set if the target address is a SG instruction,
#               but there is no matching SAU/IDAU region with the NSC flag set
.equ	M33_SFSR_INVEP_RESET, 0x0
.equ	M33_SFSR_INVEP_BITS, 0x00000001
.equ	M33_SFSR_INVEP_MSB, 0
.equ	M33_SFSR_INVEP_LSB, 0
# =============================================================================
# Register    : M33_SFAR
# Description : Shows the address of the memory location that caused a Security
#               violation
.equ	M33_SFAR_OFFSET, 0x0000ede8
.equ	M33_SFAR_BITS, 0xffffffff
.equ	M33_SFAR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_SFAR_ADDRESS
# Description : The address of an access that caused a attribution unit
#               violation. This field is only valid when SFSR.SFARVALID is set.
#               This allows the actual flip flops associated with this register
#               to be shared with other fault address registers. If an
#               implementation chooses to share the storage in this way, care
#               must be taken to not leak Secure address information to the
#               Non-secure state. One way of achieving this is to share the
#               SFAR register with the MMFAR_S register, which is not
#               accessible to the Non-secure state
.equ	M33_SFAR_ADDRESS_RESET, 0x00000000
.equ	M33_SFAR_ADDRESS_BITS, 0xffffffff
.equ	M33_SFAR_ADDRESS_MSB, 31
.equ	M33_SFAR_ADDRESS_LSB, 0
# =============================================================================
# Register    : M33_DHCSR
# Description : Controls halting debug
.equ	M33_DHCSR_OFFSET, 0x0000edf0
.equ	M33_DHCSR_BITS, 0x071f002f
.equ	M33_DHCSR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_DHCSR_S_RESTART_ST
# Description : Indicates the PE has processed a request to clear DHCSR.C_HALT
#               to 0. That is, either a write to DHCSR that clears DHCSR.C_HALT
#               from 1 to 0, or an External Restart Request
.equ	M33_DHCSR_S_RESTART_ST_RESET, 0x0
.equ	M33_DHCSR_S_RESTART_ST_BITS, 0x04000000
.equ	M33_DHCSR_S_RESTART_ST_MSB, 26
.equ	M33_DHCSR_S_RESTART_ST_LSB, 26
# -----------------------------------------------------------------------------
# Field       : M33_DHCSR_S_RESET_ST
# Description : Indicates whether the PE has been reset since the last read of
#               the DHCSR
.equ	M33_DHCSR_S_RESET_ST_RESET, 0x0
.equ	M33_DHCSR_S_RESET_ST_BITS, 0x02000000
.equ	M33_DHCSR_S_RESET_ST_MSB, 25
.equ	M33_DHCSR_S_RESET_ST_LSB, 25
# -----------------------------------------------------------------------------
# Field       : M33_DHCSR_S_RETIRE_ST
# Description : Set to 1 every time the PE retires one of more instructions
.equ	M33_DHCSR_S_RETIRE_ST_RESET, 0x0
.equ	M33_DHCSR_S_RETIRE_ST_BITS, 0x01000000
.equ	M33_DHCSR_S_RETIRE_ST_MSB, 24
.equ	M33_DHCSR_S_RETIRE_ST_LSB, 24
# -----------------------------------------------------------------------------
# Field       : M33_DHCSR_S_SDE
# Description : Indicates whether Secure invasive debug is allowed
.equ	M33_DHCSR_S_SDE_RESET, 0x0
.equ	M33_DHCSR_S_SDE_BITS, 0x00100000
.equ	M33_DHCSR_S_SDE_MSB, 20
.equ	M33_DHCSR_S_SDE_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_DHCSR_S_LOCKUP
# Description : Indicates whether the PE is in Lockup state
.equ	M33_DHCSR_S_LOCKUP_RESET, 0x0
.equ	M33_DHCSR_S_LOCKUP_BITS, 0x00080000
.equ	M33_DHCSR_S_LOCKUP_MSB, 19
.equ	M33_DHCSR_S_LOCKUP_LSB, 19
# -----------------------------------------------------------------------------
# Field       : M33_DHCSR_S_SLEEP
# Description : Indicates whether the PE is sleeping
.equ	M33_DHCSR_S_SLEEP_RESET, 0x0
.equ	M33_DHCSR_S_SLEEP_BITS, 0x00040000
.equ	M33_DHCSR_S_SLEEP_MSB, 18
.equ	M33_DHCSR_S_SLEEP_LSB, 18
# -----------------------------------------------------------------------------
# Field       : M33_DHCSR_S_HALT
# Description : Indicates whether the PE is in Debug state
.equ	M33_DHCSR_S_HALT_RESET, 0x0
.equ	M33_DHCSR_S_HALT_BITS, 0x00020000
.equ	M33_DHCSR_S_HALT_MSB, 17
.equ	M33_DHCSR_S_HALT_LSB, 17
# -----------------------------------------------------------------------------
# Field       : M33_DHCSR_S_REGRDY
# Description : Handshake flag to transfers through the DCRDR
.equ	M33_DHCSR_S_REGRDY_RESET, 0x0
.equ	M33_DHCSR_S_REGRDY_BITS, 0x00010000
.equ	M33_DHCSR_S_REGRDY_MSB, 16
.equ	M33_DHCSR_S_REGRDY_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_DHCSR_C_SNAPSTALL
# Description : Allow imprecise entry to Debug state
.equ	M33_DHCSR_C_SNAPSTALL_RESET, 0x0
.equ	M33_DHCSR_C_SNAPSTALL_BITS, 0x00000020
.equ	M33_DHCSR_C_SNAPSTALL_MSB, 5
.equ	M33_DHCSR_C_SNAPSTALL_LSB, 5
# -----------------------------------------------------------------------------
# Field       : M33_DHCSR_C_MASKINTS
# Description : When debug is enabled, the debugger can write to this bit to
#               mask PendSV, SysTick and external configurable interrupts
.equ	M33_DHCSR_C_MASKINTS_RESET, 0x0
.equ	M33_DHCSR_C_MASKINTS_BITS, 0x00000008
.equ	M33_DHCSR_C_MASKINTS_MSB, 3
.equ	M33_DHCSR_C_MASKINTS_LSB, 3
# -----------------------------------------------------------------------------
# Field       : M33_DHCSR_C_STEP
# Description : Enable single instruction step
.equ	M33_DHCSR_C_STEP_RESET, 0x0
.equ	M33_DHCSR_C_STEP_BITS, 0x00000004
.equ	M33_DHCSR_C_STEP_MSB, 2
.equ	M33_DHCSR_C_STEP_LSB, 2
# -----------------------------------------------------------------------------
# Field       : M33_DHCSR_C_HALT
# Description : PE enter Debug state halt request
.equ	M33_DHCSR_C_HALT_RESET, 0x0
.equ	M33_DHCSR_C_HALT_BITS, 0x00000002
.equ	M33_DHCSR_C_HALT_MSB, 1
.equ	M33_DHCSR_C_HALT_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_DHCSR_C_DEBUGEN
# Description : Enable Halting debug
.equ	M33_DHCSR_C_DEBUGEN_RESET, 0x0
.equ	M33_DHCSR_C_DEBUGEN_BITS, 0x00000001
.equ	M33_DHCSR_C_DEBUGEN_MSB, 0
.equ	M33_DHCSR_C_DEBUGEN_LSB, 0
# =============================================================================
# Register    : M33_DCRSR
# Description : With the DCRDR, provides debug access to the general-purpose
#               registers, special-purpose registers, and the FP extension
#               registers. A write to the DCRSR specifies the register to
#               transfer, whether the transfer is a read or write, and starts
#               the transfer
.equ	M33_DCRSR_OFFSET, 0x0000edf4
.equ	M33_DCRSR_BITS, 0x0001007f
.equ	M33_DCRSR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_DCRSR_REGWNR
# Description : Specifies the access type for the transfer
.equ	M33_DCRSR_REGWNR_RESET, 0x0
.equ	M33_DCRSR_REGWNR_BITS, 0x00010000
.equ	M33_DCRSR_REGWNR_MSB, 16
.equ	M33_DCRSR_REGWNR_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_DCRSR_REGSEL
# Description : Specifies the general-purpose register, special-purpose
#               register, or FP register to transfer
.equ	M33_DCRSR_REGSEL_RESET, 0x00
.equ	M33_DCRSR_REGSEL_BITS, 0x0000007f
.equ	M33_DCRSR_REGSEL_MSB, 6
.equ	M33_DCRSR_REGSEL_LSB, 0
# =============================================================================
# Register    : M33_DCRDR
# Description : With the DCRSR, provides debug access to the general-purpose
#               registers, special-purpose registers, and the FP Extension
#               registers. If the Main Extension is implemented, it can also be
#               used for message passing between an external debugger and a
#               debug agent running on the PE
.equ	M33_DCRDR_OFFSET, 0x0000edf8
.equ	M33_DCRDR_BITS, 0xffffffff
.equ	M33_DCRDR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_DCRDR_DBGTMP
# Description : Provides debug access for reading and writing the general-
#               purpose registers, special-purpose registers, and Floating-
#               point Extension registers
.equ	M33_DCRDR_DBGTMP_RESET, 0x00000000
.equ	M33_DCRDR_DBGTMP_BITS, 0xffffffff
.equ	M33_DCRDR_DBGTMP_MSB, 31
.equ	M33_DCRDR_DBGTMP_LSB, 0
# =============================================================================
# Register    : M33_DEMCR
# Description : Manages vector catch behavior and DebugMonitor handling when
#               debugging
.equ	M33_DEMCR_OFFSET, 0x0000edfc
.equ	M33_DEMCR_BITS, 0x011f0ff1
.equ	M33_DEMCR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_DEMCR_TRCENA
# Description : Global enable for all DWT and ITM features
.equ	M33_DEMCR_TRCENA_RESET, 0x0
.equ	M33_DEMCR_TRCENA_BITS, 0x01000000
.equ	M33_DEMCR_TRCENA_MSB, 24
.equ	M33_DEMCR_TRCENA_LSB, 24
# -----------------------------------------------------------------------------
# Field       : M33_DEMCR_SDME
# Description : Indicates whether the DebugMonitor targets the Secure or the
#               Non-secure state and whether debug events are allowed in Secure
#               state
.equ	M33_DEMCR_SDME_RESET, 0x0
.equ	M33_DEMCR_SDME_BITS, 0x00100000
.equ	M33_DEMCR_SDME_MSB, 20
.equ	M33_DEMCR_SDME_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_DEMCR_MON_REQ
# Description : DebugMonitor semaphore bit
.equ	M33_DEMCR_MON_REQ_RESET, 0x0
.equ	M33_DEMCR_MON_REQ_BITS, 0x00080000
.equ	M33_DEMCR_MON_REQ_MSB, 19
.equ	M33_DEMCR_MON_REQ_LSB, 19
# -----------------------------------------------------------------------------
# Field       : M33_DEMCR_MON_STEP
# Description : Enable DebugMonitor stepping
.equ	M33_DEMCR_MON_STEP_RESET, 0x0
.equ	M33_DEMCR_MON_STEP_BITS, 0x00040000
.equ	M33_DEMCR_MON_STEP_MSB, 18
.equ	M33_DEMCR_MON_STEP_LSB, 18
# -----------------------------------------------------------------------------
# Field       : M33_DEMCR_MON_PEND
# Description : Sets or clears the pending state of the DebugMonitor exception
.equ	M33_DEMCR_MON_PEND_RESET, 0x0
.equ	M33_DEMCR_MON_PEND_BITS, 0x00020000
.equ	M33_DEMCR_MON_PEND_MSB, 17
.equ	M33_DEMCR_MON_PEND_LSB, 17
# -----------------------------------------------------------------------------
# Field       : M33_DEMCR_MON_EN
# Description : Enable the DebugMonitor exception
.equ	M33_DEMCR_MON_EN_RESET, 0x0
.equ	M33_DEMCR_MON_EN_BITS, 0x00010000
.equ	M33_DEMCR_MON_EN_MSB, 16
.equ	M33_DEMCR_MON_EN_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_DEMCR_VC_SFERR
# Description : SecureFault exception halting debug vector catch enable
.equ	M33_DEMCR_VC_SFERR_RESET, 0x0
.equ	M33_DEMCR_VC_SFERR_BITS, 0x00000800
.equ	M33_DEMCR_VC_SFERR_MSB, 11
.equ	M33_DEMCR_VC_SFERR_LSB, 11
# -----------------------------------------------------------------------------
# Field       : M33_DEMCR_VC_HARDERR
# Description : HardFault exception halting debug vector catch enable
.equ	M33_DEMCR_VC_HARDERR_RESET, 0x0
.equ	M33_DEMCR_VC_HARDERR_BITS, 0x00000400
.equ	M33_DEMCR_VC_HARDERR_MSB, 10
.equ	M33_DEMCR_VC_HARDERR_LSB, 10
# -----------------------------------------------------------------------------
# Field       : M33_DEMCR_VC_INTERR
# Description : Enable halting debug vector catch for faults during exception
#               entry and return
.equ	M33_DEMCR_VC_INTERR_RESET, 0x0
.equ	M33_DEMCR_VC_INTERR_BITS, 0x00000200
.equ	M33_DEMCR_VC_INTERR_MSB, 9
.equ	M33_DEMCR_VC_INTERR_LSB, 9
# -----------------------------------------------------------------------------
# Field       : M33_DEMCR_VC_BUSERR
# Description : BusFault exception halting debug vector catch enable
.equ	M33_DEMCR_VC_BUSERR_RESET, 0x0
.equ	M33_DEMCR_VC_BUSERR_BITS, 0x00000100
.equ	M33_DEMCR_VC_BUSERR_MSB, 8
.equ	M33_DEMCR_VC_BUSERR_LSB, 8
# -----------------------------------------------------------------------------
# Field       : M33_DEMCR_VC_STATERR
# Description : Enable halting debug trap on a UsageFault exception caused by a
#               state information error, for example an Undefined Instruction
#               exception
.equ	M33_DEMCR_VC_STATERR_RESET, 0x0
.equ	M33_DEMCR_VC_STATERR_BITS, 0x00000080
.equ	M33_DEMCR_VC_STATERR_MSB, 7
.equ	M33_DEMCR_VC_STATERR_LSB, 7
# -----------------------------------------------------------------------------
# Field       : M33_DEMCR_VC_CHKERR
# Description : Enable halting debug trap on a UsageFault exception caused by a
#               checking error, for example an alignment check error
.equ	M33_DEMCR_VC_CHKERR_RESET, 0x0
.equ	M33_DEMCR_VC_CHKERR_BITS, 0x00000040
.equ	M33_DEMCR_VC_CHKERR_MSB, 6
.equ	M33_DEMCR_VC_CHKERR_LSB, 6
# -----------------------------------------------------------------------------
# Field       : M33_DEMCR_VC_NOCPERR
# Description : Enable halting debug trap on a UsageFault caused by an access
#               to a coprocessor
.equ	M33_DEMCR_VC_NOCPERR_RESET, 0x0
.equ	M33_DEMCR_VC_NOCPERR_BITS, 0x00000020
.equ	M33_DEMCR_VC_NOCPERR_MSB, 5
.equ	M33_DEMCR_VC_NOCPERR_LSB, 5
# -----------------------------------------------------------------------------
# Field       : M33_DEMCR_VC_MMERR
# Description : Enable halting debug trap on a MemManage exception
.equ	M33_DEMCR_VC_MMERR_RESET, 0x0
.equ	M33_DEMCR_VC_MMERR_BITS, 0x00000010
.equ	M33_DEMCR_VC_MMERR_MSB, 4
.equ	M33_DEMCR_VC_MMERR_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_DEMCR_VC_CORERESET
# Description : Enable Reset Vector Catch. This causes a warm reset to halt a
#               running system
.equ	M33_DEMCR_VC_CORERESET_RESET, 0x0
.equ	M33_DEMCR_VC_CORERESET_BITS, 0x00000001
.equ	M33_DEMCR_VC_CORERESET_MSB, 0
.equ	M33_DEMCR_VC_CORERESET_LSB, 0
# =============================================================================
# Register    : M33_DSCSR
# Description : Provides control and status information for Secure debug
.equ	M33_DSCSR_OFFSET, 0x0000ee08
.equ	M33_DSCSR_BITS, 0x00030003
.equ	M33_DSCSR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_DSCSR_CDSKEY
# Description : Writes to the CDS bit are ignored unless CDSKEY is concurrently
#               written to zero
.equ	M33_DSCSR_CDSKEY_RESET, 0x0
.equ	M33_DSCSR_CDSKEY_BITS, 0x00020000
.equ	M33_DSCSR_CDSKEY_MSB, 17
.equ	M33_DSCSR_CDSKEY_LSB, 17
# -----------------------------------------------------------------------------
# Field       : M33_DSCSR_CDS
# Description : This field indicates the current Security state of the
#               processor
.equ	M33_DSCSR_CDS_RESET, 0x0
.equ	M33_DSCSR_CDS_BITS, 0x00010000
.equ	M33_DSCSR_CDS_MSB, 16
.equ	M33_DSCSR_CDS_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_DSCSR_SBRSEL
# Description : If SBRSELEN is 1 this bit selects whether the Non-secure or the
#               Secure version of the memory-mapped Banked registers are
#               accessible to the debugger
.equ	M33_DSCSR_SBRSEL_RESET, 0x0
.equ	M33_DSCSR_SBRSEL_BITS, 0x00000002
.equ	M33_DSCSR_SBRSEL_MSB, 1
.equ	M33_DSCSR_SBRSEL_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_DSCSR_SBRSELEN
# Description : Controls whether the SBRSEL field or the current Security state
#               of the processor selects which version of the memory-mapped
#               Banked registers are accessed to the debugger
.equ	M33_DSCSR_SBRSELEN_RESET, 0x0
.equ	M33_DSCSR_SBRSELEN_BITS, 0x00000001
.equ	M33_DSCSR_SBRSELEN_MSB, 0
.equ	M33_DSCSR_SBRSELEN_LSB, 0
# =============================================================================
# Register    : M33_STIR
# Description : Provides a mechanism for software to generate an interrupt
.equ	M33_STIR_OFFSET, 0x0000ef00
.equ	M33_STIR_BITS, 0x000001ff
.equ	M33_STIR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_STIR_INTID
# Description : Indicates the interrupt to be pended. The value written is
#               (ExceptionNumber - 16)
.equ	M33_STIR_INTID_RESET, 0x000
.equ	M33_STIR_INTID_BITS, 0x000001ff
.equ	M33_STIR_INTID_MSB, 8
.equ	M33_STIR_INTID_LSB, 0
# =============================================================================
# Register    : M33_FPCCR
# Description : Holds control data for the Floating-point extension
.equ	M33_FPCCR_OFFSET, 0x0000ef34
.equ	M33_FPCCR_BITS, 0xfc0007ff
.equ	M33_FPCCR_RESET, 0x20000472
# -----------------------------------------------------------------------------
# Field       : M33_FPCCR_ASPEN
# Description : When this bit is set to 1, execution of a floating-point
#               instruction sets the CONTROL.FPCA bit to 1
.equ	M33_FPCCR_ASPEN_RESET, 0x0
.equ	M33_FPCCR_ASPEN_BITS, 0x80000000
.equ	M33_FPCCR_ASPEN_MSB, 31
.equ	M33_FPCCR_ASPEN_LSB, 31
# -----------------------------------------------------------------------------
# Field       : M33_FPCCR_LSPEN
# Description : Enables lazy context save of floating-point state
.equ	M33_FPCCR_LSPEN_RESET, 0x0
.equ	M33_FPCCR_LSPEN_BITS, 0x40000000
.equ	M33_FPCCR_LSPEN_MSB, 30
.equ	M33_FPCCR_LSPEN_LSB, 30
# -----------------------------------------------------------------------------
# Field       : M33_FPCCR_LSPENS
# Description : This bit controls whether the LSPEN bit is writeable from the
#               Non-secure state
.equ	M33_FPCCR_LSPENS_RESET, 0x1
.equ	M33_FPCCR_LSPENS_BITS, 0x20000000
.equ	M33_FPCCR_LSPENS_MSB, 29
.equ	M33_FPCCR_LSPENS_LSB, 29
# -----------------------------------------------------------------------------
# Field       : M33_FPCCR_CLRONRET
# Description : Clear floating-point caller saved registers on exception return
.equ	M33_FPCCR_CLRONRET_RESET, 0x0
.equ	M33_FPCCR_CLRONRET_BITS, 0x10000000
.equ	M33_FPCCR_CLRONRET_MSB, 28
.equ	M33_FPCCR_CLRONRET_LSB, 28
# -----------------------------------------------------------------------------
# Field       : M33_FPCCR_CLRONRETS
# Description : This bit controls whether the CLRONRET bit is writeable from
#               the Non-secure state
.equ	M33_FPCCR_CLRONRETS_RESET, 0x0
.equ	M33_FPCCR_CLRONRETS_BITS, 0x08000000
.equ	M33_FPCCR_CLRONRETS_MSB, 27
.equ	M33_FPCCR_CLRONRETS_LSB, 27
# -----------------------------------------------------------------------------
# Field       : M33_FPCCR_TS
# Description : Treat floating-point registers as Secure enable
.equ	M33_FPCCR_TS_RESET, 0x0
.equ	M33_FPCCR_TS_BITS, 0x04000000
.equ	M33_FPCCR_TS_MSB, 26
.equ	M33_FPCCR_TS_LSB, 26
# -----------------------------------------------------------------------------
# Field       : M33_FPCCR_UFRDY
# Description : Indicates whether the software executing when the PE allocated
#               the floating-point stack frame was able to set the UsageFault
#               exception to pending
.equ	M33_FPCCR_UFRDY_RESET, 0x1
.equ	M33_FPCCR_UFRDY_BITS, 0x00000400
.equ	M33_FPCCR_UFRDY_MSB, 10
.equ	M33_FPCCR_UFRDY_LSB, 10
# -----------------------------------------------------------------------------
# Field       : M33_FPCCR_SPLIMVIOL
# Description : This bit is banked between the Security states and indicates
#               whether the floating-point context violates the stack pointer
#               limit that was active when lazy state preservation was
#               activated. SPLIMVIOL modifies the lazy floating-point state
#               preservation behavior
.equ	M33_FPCCR_SPLIMVIOL_RESET, 0x0
.equ	M33_FPCCR_SPLIMVIOL_BITS, 0x00000200
.equ	M33_FPCCR_SPLIMVIOL_MSB, 9
.equ	M33_FPCCR_SPLIMVIOL_LSB, 9
# -----------------------------------------------------------------------------
# Field       : M33_FPCCR_MONRDY
# Description : Indicates whether the software executing when the PE allocated
#               the floating-point stack frame was able to set the DebugMonitor
#               exception to pending
.equ	M33_FPCCR_MONRDY_RESET, 0x0
.equ	M33_FPCCR_MONRDY_BITS, 0x00000100
.equ	M33_FPCCR_MONRDY_MSB, 8
.equ	M33_FPCCR_MONRDY_LSB, 8
# -----------------------------------------------------------------------------
# Field       : M33_FPCCR_SFRDY
# Description : Indicates whether the software executing when the PE allocated
#               the floating-point stack frame was able to set the SecureFault
#               exception to pending. This bit is only present in the Secure
#               version of the register, and behaves as RAZ/WI when accessed
#               from the Non-secure state
.equ	M33_FPCCR_SFRDY_RESET, 0x0
.equ	M33_FPCCR_SFRDY_BITS, 0x00000080
.equ	M33_FPCCR_SFRDY_MSB, 7
.equ	M33_FPCCR_SFRDY_LSB, 7
# -----------------------------------------------------------------------------
# Field       : M33_FPCCR_BFRDY
# Description : Indicates whether the software executing when the PE allocated
#               the floating-point stack frame was able to set the BusFault
#               exception to pending
.equ	M33_FPCCR_BFRDY_RESET, 0x1
.equ	M33_FPCCR_BFRDY_BITS, 0x00000040
.equ	M33_FPCCR_BFRDY_MSB, 6
.equ	M33_FPCCR_BFRDY_LSB, 6
# -----------------------------------------------------------------------------
# Field       : M33_FPCCR_MMRDY
# Description : Indicates whether the software executing when the PE allocated
#               the floating-point stack frame was able to set the MemManage
#               exception to pending
.equ	M33_FPCCR_MMRDY_RESET, 0x1
.equ	M33_FPCCR_MMRDY_BITS, 0x00000020
.equ	M33_FPCCR_MMRDY_MSB, 5
.equ	M33_FPCCR_MMRDY_LSB, 5
# -----------------------------------------------------------------------------
# Field       : M33_FPCCR_HFRDY
# Description : Indicates whether the software executing when the PE allocated
#               the floating-point stack frame was able to set the HardFault
#               exception to pending
.equ	M33_FPCCR_HFRDY_RESET, 0x1
.equ	M33_FPCCR_HFRDY_BITS, 0x00000010
.equ	M33_FPCCR_HFRDY_MSB, 4
.equ	M33_FPCCR_HFRDY_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_FPCCR_THREAD
# Description : Indicates the PE mode when it allocated the floating-point
#               stack frame
.equ	M33_FPCCR_THREAD_RESET, 0x0
.equ	M33_FPCCR_THREAD_BITS, 0x00000008
.equ	M33_FPCCR_THREAD_MSB, 3
.equ	M33_FPCCR_THREAD_LSB, 3
# -----------------------------------------------------------------------------
# Field       : M33_FPCCR_S
# Description : Security status of the floating-point context. This bit is only
#               present in the Secure version of the register, and behaves as
#               RAZ/WI when accessed from the Non-secure state. This bit is
#               updated whenever lazy state preservation is activated, or when
#               a floating-point instruction is executed
.equ	M33_FPCCR_S_RESET, 0x0
.equ	M33_FPCCR_S_BITS, 0x00000004
.equ	M33_FPCCR_S_MSB, 2
.equ	M33_FPCCR_S_LSB, 2
# -----------------------------------------------------------------------------
# Field       : M33_FPCCR_USER
# Description : Indicates the privilege level of the software executing when
#               the PE allocated the floating-point stack frame
.equ	M33_FPCCR_USER_RESET, 0x1
.equ	M33_FPCCR_USER_BITS, 0x00000002
.equ	M33_FPCCR_USER_MSB, 1
.equ	M33_FPCCR_USER_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_FPCCR_LSPACT
# Description : Indicates whether lazy preservation of the floating-point state
#               is active
.equ	M33_FPCCR_LSPACT_RESET, 0x0
.equ	M33_FPCCR_LSPACT_BITS, 0x00000001
.equ	M33_FPCCR_LSPACT_MSB, 0
.equ	M33_FPCCR_LSPACT_LSB, 0
# =============================================================================
# Register    : M33_FPCAR
# Description : Holds the location of the unpopulated floating-point register
#               space allocated on an exception stack frame
.equ	M33_FPCAR_OFFSET, 0x0000ef38
.equ	M33_FPCAR_BITS, 0xfffffff8
.equ	M33_FPCAR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_FPCAR_ADDRESS
# Description : The location of the unpopulated floating-point register space
#               allocated on an exception stack frame
.equ	M33_FPCAR_ADDRESS_RESET, 0x00000000
.equ	M33_FPCAR_ADDRESS_BITS, 0xfffffff8
.equ	M33_FPCAR_ADDRESS_MSB, 31
.equ	M33_FPCAR_ADDRESS_LSB, 3
# =============================================================================
# Register    : M33_FPDSCR
# Description : Holds the default values for the floating-point status control
#               data that the PE assigns to the FPSCR when it creates a new
#               floating-point context
.equ	M33_FPDSCR_OFFSET, 0x0000ef3c
.equ	M33_FPDSCR_BITS, 0x07c00000
.equ	M33_FPDSCR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_FPDSCR_AHP
# Description : Default value for FPSCR.AHP
.equ	M33_FPDSCR_AHP_RESET, 0x0
.equ	M33_FPDSCR_AHP_BITS, 0x04000000
.equ	M33_FPDSCR_AHP_MSB, 26
.equ	M33_FPDSCR_AHP_LSB, 26
# -----------------------------------------------------------------------------
# Field       : M33_FPDSCR_DN
# Description : Default value for FPSCR.DN
.equ	M33_FPDSCR_DN_RESET, 0x0
.equ	M33_FPDSCR_DN_BITS, 0x02000000
.equ	M33_FPDSCR_DN_MSB, 25
.equ	M33_FPDSCR_DN_LSB, 25
# -----------------------------------------------------------------------------
# Field       : M33_FPDSCR_FZ
# Description : Default value for FPSCR.FZ
.equ	M33_FPDSCR_FZ_RESET, 0x0
.equ	M33_FPDSCR_FZ_BITS, 0x01000000
.equ	M33_FPDSCR_FZ_MSB, 24
.equ	M33_FPDSCR_FZ_LSB, 24
# -----------------------------------------------------------------------------
# Field       : M33_FPDSCR_RMODE
# Description : Default value for FPSCR.RMode
.equ	M33_FPDSCR_RMODE_RESET, 0x0
.equ	M33_FPDSCR_RMODE_BITS, 0x00c00000
.equ	M33_FPDSCR_RMODE_MSB, 23
.equ	M33_FPDSCR_RMODE_LSB, 22
# =============================================================================
# Register    : M33_MVFR0
# Description : Describes the features provided by the Floating-point Extension
.equ	M33_MVFR0_OFFSET, 0x0000ef40
.equ	M33_MVFR0_BITS, 0xf0ff0fff
.equ	M33_MVFR0_RESET, 0x60540601
# -----------------------------------------------------------------------------
# Field       : M33_MVFR0_FPROUND
# Description : Indicates the rounding modes supported by the FP Extension
.equ	M33_MVFR0_FPROUND_RESET, 0x6
.equ	M33_MVFR0_FPROUND_BITS, 0xf0000000
.equ	M33_MVFR0_FPROUND_MSB, 31
.equ	M33_MVFR0_FPROUND_LSB, 28
# -----------------------------------------------------------------------------
# Field       : M33_MVFR0_FPSQRT
# Description : Indicates the support for FP square root operations
.equ	M33_MVFR0_FPSQRT_RESET, 0x5
.equ	M33_MVFR0_FPSQRT_BITS, 0x00f00000
.equ	M33_MVFR0_FPSQRT_MSB, 23
.equ	M33_MVFR0_FPSQRT_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_MVFR0_FPDIVIDE
# Description : Indicates the support for FP divide operations
.equ	M33_MVFR0_FPDIVIDE_RESET, 0x4
.equ	M33_MVFR0_FPDIVIDE_BITS, 0x000f0000
.equ	M33_MVFR0_FPDIVIDE_MSB, 19
.equ	M33_MVFR0_FPDIVIDE_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_MVFR0_FPDP
# Description : Indicates support for FP double-precision operations
.equ	M33_MVFR0_FPDP_RESET, 0x6
.equ	M33_MVFR0_FPDP_BITS, 0x00000f00
.equ	M33_MVFR0_FPDP_MSB, 11
.equ	M33_MVFR0_FPDP_LSB, 8
# -----------------------------------------------------------------------------
# Field       : M33_MVFR0_FPSP
# Description : Indicates support for FP single-precision operations
.equ	M33_MVFR0_FPSP_RESET, 0x0
.equ	M33_MVFR0_FPSP_BITS, 0x000000f0
.equ	M33_MVFR0_FPSP_MSB, 7
.equ	M33_MVFR0_FPSP_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_MVFR0_SIMDREG
# Description : Indicates size of FP register file
.equ	M33_MVFR0_SIMDREG_RESET, 0x1
.equ	M33_MVFR0_SIMDREG_BITS, 0x0000000f
.equ	M33_MVFR0_SIMDREG_MSB, 3
.equ	M33_MVFR0_SIMDREG_LSB, 0
# =============================================================================
# Register    : M33_MVFR1
# Description : Describes the features provided by the Floating-point Extension
.equ	M33_MVFR1_OFFSET, 0x0000ef44
.equ	M33_MVFR1_BITS, 0xff0000ff
.equ	M33_MVFR1_RESET, 0x85000089
# -----------------------------------------------------------------------------
# Field       : M33_MVFR1_FMAC
# Description : Indicates whether the FP Extension implements the fused
#               multiply accumulate instructions
.equ	M33_MVFR1_FMAC_RESET, 0x8
.equ	M33_MVFR1_FMAC_BITS, 0xf0000000
.equ	M33_MVFR1_FMAC_MSB, 31
.equ	M33_MVFR1_FMAC_LSB, 28
# -----------------------------------------------------------------------------
# Field       : M33_MVFR1_FPHP
# Description : Indicates whether the FP Extension implements half-precision FP
#               conversion instructions
.equ	M33_MVFR1_FPHP_RESET, 0x5
.equ	M33_MVFR1_FPHP_BITS, 0x0f000000
.equ	M33_MVFR1_FPHP_MSB, 27
.equ	M33_MVFR1_FPHP_LSB, 24
# -----------------------------------------------------------------------------
# Field       : M33_MVFR1_FPDNAN
# Description : Indicates whether the FP hardware implementation supports NaN
#               propagation
.equ	M33_MVFR1_FPDNAN_RESET, 0x8
.equ	M33_MVFR1_FPDNAN_BITS, 0x000000f0
.equ	M33_MVFR1_FPDNAN_MSB, 7
.equ	M33_MVFR1_FPDNAN_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_MVFR1_FPFTZ
# Description : Indicates whether subnormals are always flushed-to-zero
.equ	M33_MVFR1_FPFTZ_RESET, 0x9
.equ	M33_MVFR1_FPFTZ_BITS, 0x0000000f
.equ	M33_MVFR1_FPFTZ_MSB, 3
.equ	M33_MVFR1_FPFTZ_LSB, 0
# =============================================================================
# Register    : M33_MVFR2
# Description : Describes the features provided by the Floating-point Extension
.equ	M33_MVFR2_OFFSET, 0x0000ef48
.equ	M33_MVFR2_BITS, 0x000000f0
.equ	M33_MVFR2_RESET, 0x00000060
# -----------------------------------------------------------------------------
# Field       : M33_MVFR2_FPMISC
# Description : Indicates support for miscellaneous FP features
.equ	M33_MVFR2_FPMISC_RESET, 0x6
.equ	M33_MVFR2_FPMISC_BITS, 0x000000f0
.equ	M33_MVFR2_FPMISC_MSB, 7
.equ	M33_MVFR2_FPMISC_LSB, 4
# =============================================================================
# Register    : M33_DDEVARCH
# Description : Provides CoreSight discovery information for the SCS
.equ	M33_DDEVARCH_OFFSET, 0x0000efbc
.equ	M33_DDEVARCH_BITS, 0xffffffff
.equ	M33_DDEVARCH_RESET, 0x47702a04
# -----------------------------------------------------------------------------
# Field       : M33_DDEVARCH_ARCHITECT
# Description : Defines the architect of the component. Bits [31:28] are the
#               JEP106 continuation code (JEP106 bank ID, minus 1) and bits
#               [27:21] are the JEP106 ID code.
.equ	M33_DDEVARCH_ARCHITECT_RESET, 0x23b
.equ	M33_DDEVARCH_ARCHITECT_BITS, 0xffe00000
.equ	M33_DDEVARCH_ARCHITECT_MSB, 31
.equ	M33_DDEVARCH_ARCHITECT_LSB, 21
# -----------------------------------------------------------------------------
# Field       : M33_DDEVARCH_PRESENT
# Description : Defines that the DEVARCH register is present
.equ	M33_DDEVARCH_PRESENT_RESET, 0x1
.equ	M33_DDEVARCH_PRESENT_BITS, 0x00100000
.equ	M33_DDEVARCH_PRESENT_MSB, 20
.equ	M33_DDEVARCH_PRESENT_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_DDEVARCH_REVISION
# Description : Defines the architecture revision of the component
.equ	M33_DDEVARCH_REVISION_RESET, 0x0
.equ	M33_DDEVARCH_REVISION_BITS, 0x000f0000
.equ	M33_DDEVARCH_REVISION_MSB, 19
.equ	M33_DDEVARCH_REVISION_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_DDEVARCH_ARCHVER
# Description : Defines the architecture version of the component
.equ	M33_DDEVARCH_ARCHVER_RESET, 0x2
.equ	M33_DDEVARCH_ARCHVER_BITS, 0x0000f000
.equ	M33_DDEVARCH_ARCHVER_MSB, 15
.equ	M33_DDEVARCH_ARCHVER_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_DDEVARCH_ARCHPART
# Description : Defines the architecture of the component
.equ	M33_DDEVARCH_ARCHPART_RESET, 0xa04
.equ	M33_DDEVARCH_ARCHPART_BITS, 0x00000fff
.equ	M33_DDEVARCH_ARCHPART_MSB, 11
.equ	M33_DDEVARCH_ARCHPART_LSB, 0
# =============================================================================
# Register    : M33_DDEVTYPE
# Description : Provides CoreSight discovery information for the SCS
.equ	M33_DDEVTYPE_OFFSET, 0x0000efcc
.equ	M33_DDEVTYPE_BITS, 0x000000ff
.equ	M33_DDEVTYPE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_DDEVTYPE_SUB
# Description : Component sub-type
.equ	M33_DDEVTYPE_SUB_RESET, 0x0
.equ	M33_DDEVTYPE_SUB_BITS, 0x000000f0
.equ	M33_DDEVTYPE_SUB_MSB, 7
.equ	M33_DDEVTYPE_SUB_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_DDEVTYPE_MAJOR
# Description : CoreSight major type
.equ	M33_DDEVTYPE_MAJOR_RESET, 0x0
.equ	M33_DDEVTYPE_MAJOR_BITS, 0x0000000f
.equ	M33_DDEVTYPE_MAJOR_MSB, 3
.equ	M33_DDEVTYPE_MAJOR_LSB, 0
# =============================================================================
# Register    : M33_DPIDR4
# Description : Provides CoreSight discovery information for the SCS
.equ	M33_DPIDR4_OFFSET, 0x0000efd0
.equ	M33_DPIDR4_BITS, 0x000000ff
.equ	M33_DPIDR4_RESET, 0x00000004
# -----------------------------------------------------------------------------
# Field       : M33_DPIDR4_SIZE
# Description : See CoreSight Architecture Specification
.equ	M33_DPIDR4_SIZE_RESET, 0x0
.equ	M33_DPIDR4_SIZE_BITS, 0x000000f0
.equ	M33_DPIDR4_SIZE_MSB, 7
.equ	M33_DPIDR4_SIZE_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_DPIDR4_DES_2
# Description : See CoreSight Architecture Specification
.equ	M33_DPIDR4_DES_2_RESET, 0x4
.equ	M33_DPIDR4_DES_2_BITS, 0x0000000f
.equ	M33_DPIDR4_DES_2_MSB, 3
.equ	M33_DPIDR4_DES_2_LSB, 0
# =============================================================================
# Register    : M33_DPIDR5
# Description : Provides CoreSight discovery information for the SCS
.equ	M33_DPIDR5_OFFSET, 0x0000efd4
.equ	M33_DPIDR5_BITS, 0x00000000
.equ	M33_DPIDR5_RESET, 0x00000000
.equ	M33_DPIDR5_MSB, 31
.equ	M33_DPIDR5_LSB, 0
# =============================================================================
# Register    : M33_DPIDR6
# Description : Provides CoreSight discovery information for the SCS
.equ	M33_DPIDR6_OFFSET, 0x0000efd8
.equ	M33_DPIDR6_BITS, 0x00000000
.equ	M33_DPIDR6_RESET, 0x00000000
.equ	M33_DPIDR6_MSB, 31
.equ	M33_DPIDR6_LSB, 0
# =============================================================================
# Register    : M33_DPIDR7
# Description : Provides CoreSight discovery information for the SCS
.equ	M33_DPIDR7_OFFSET, 0x0000efdc
.equ	M33_DPIDR7_BITS, 0x00000000
.equ	M33_DPIDR7_RESET, 0x00000000
.equ	M33_DPIDR7_MSB, 31
.equ	M33_DPIDR7_LSB, 0
# =============================================================================
# Register    : M33_DPIDR0
# Description : Provides CoreSight discovery information for the SCS
.equ	M33_DPIDR0_OFFSET, 0x0000efe0
.equ	M33_DPIDR0_BITS, 0x000000ff
.equ	M33_DPIDR0_RESET, 0x00000021
# -----------------------------------------------------------------------------
# Field       : M33_DPIDR0_PART_0
# Description : See CoreSight Architecture Specification
.equ	M33_DPIDR0_PART_0_RESET, 0x21
.equ	M33_DPIDR0_PART_0_BITS, 0x000000ff
.equ	M33_DPIDR0_PART_0_MSB, 7
.equ	M33_DPIDR0_PART_0_LSB, 0
# =============================================================================
# Register    : M33_DPIDR1
# Description : Provides CoreSight discovery information for the SCS
.equ	M33_DPIDR1_OFFSET, 0x0000efe4
.equ	M33_DPIDR1_BITS, 0x000000ff
.equ	M33_DPIDR1_RESET, 0x000000bd
# -----------------------------------------------------------------------------
# Field       : M33_DPIDR1_DES_0
# Description : See CoreSight Architecture Specification
.equ	M33_DPIDR1_DES_0_RESET, 0xb
.equ	M33_DPIDR1_DES_0_BITS, 0x000000f0
.equ	M33_DPIDR1_DES_0_MSB, 7
.equ	M33_DPIDR1_DES_0_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_DPIDR1_PART_1
# Description : See CoreSight Architecture Specification
.equ	M33_DPIDR1_PART_1_RESET, 0xd
.equ	M33_DPIDR1_PART_1_BITS, 0x0000000f
.equ	M33_DPIDR1_PART_1_MSB, 3
.equ	M33_DPIDR1_PART_1_LSB, 0
# =============================================================================
# Register    : M33_DPIDR2
# Description : Provides CoreSight discovery information for the SCS
.equ	M33_DPIDR2_OFFSET, 0x0000efe8
.equ	M33_DPIDR2_BITS, 0x000000ff
.equ	M33_DPIDR2_RESET, 0x0000000b
# -----------------------------------------------------------------------------
# Field       : M33_DPIDR2_REVISION
# Description : See CoreSight Architecture Specification
.equ	M33_DPIDR2_REVISION_RESET, 0x0
.equ	M33_DPIDR2_REVISION_BITS, 0x000000f0
.equ	M33_DPIDR2_REVISION_MSB, 7
.equ	M33_DPIDR2_REVISION_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_DPIDR2_JEDEC
# Description : See CoreSight Architecture Specification
.equ	M33_DPIDR2_JEDEC_RESET, 0x1
.equ	M33_DPIDR2_JEDEC_BITS, 0x00000008
.equ	M33_DPIDR2_JEDEC_MSB, 3
.equ	M33_DPIDR2_JEDEC_LSB, 3
# -----------------------------------------------------------------------------
# Field       : M33_DPIDR2_DES_1
# Description : See CoreSight Architecture Specification
.equ	M33_DPIDR2_DES_1_RESET, 0x3
.equ	M33_DPIDR2_DES_1_BITS, 0x00000007
.equ	M33_DPIDR2_DES_1_MSB, 2
.equ	M33_DPIDR2_DES_1_LSB, 0
# =============================================================================
# Register    : M33_DPIDR3
# Description : Provides CoreSight discovery information for the SCS
.equ	M33_DPIDR3_OFFSET, 0x0000efec
.equ	M33_DPIDR3_BITS, 0x000000ff
.equ	M33_DPIDR3_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_DPIDR3_REVAND
# Description : See CoreSight Architecture Specification
.equ	M33_DPIDR3_REVAND_RESET, 0x0
.equ	M33_DPIDR3_REVAND_BITS, 0x000000f0
.equ	M33_DPIDR3_REVAND_MSB, 7
.equ	M33_DPIDR3_REVAND_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_DPIDR3_CMOD
# Description : See CoreSight Architecture Specification
.equ	M33_DPIDR3_CMOD_RESET, 0x0
.equ	M33_DPIDR3_CMOD_BITS, 0x0000000f
.equ	M33_DPIDR3_CMOD_MSB, 3
.equ	M33_DPIDR3_CMOD_LSB, 0
# =============================================================================
# Register    : M33_DCIDR0
# Description : Provides CoreSight discovery information for the SCS
.equ	M33_DCIDR0_OFFSET, 0x0000eff0
.equ	M33_DCIDR0_BITS, 0x000000ff
.equ	M33_DCIDR0_RESET, 0x0000000d
# -----------------------------------------------------------------------------
# Field       : M33_DCIDR0_PRMBL_0
# Description : See CoreSight Architecture Specification
.equ	M33_DCIDR0_PRMBL_0_RESET, 0x0d
.equ	M33_DCIDR0_PRMBL_0_BITS, 0x000000ff
.equ	M33_DCIDR0_PRMBL_0_MSB, 7
.equ	M33_DCIDR0_PRMBL_0_LSB, 0
# =============================================================================
# Register    : M33_DCIDR1
# Description : Provides CoreSight discovery information for the SCS
.equ	M33_DCIDR1_OFFSET, 0x0000eff4
.equ	M33_DCIDR1_BITS, 0x000000ff
.equ	M33_DCIDR1_RESET, 0x00000090
# -----------------------------------------------------------------------------
# Field       : M33_DCIDR1_CLASS
# Description : See CoreSight Architecture Specification
.equ	M33_DCIDR1_CLASS_RESET, 0x9
.equ	M33_DCIDR1_CLASS_BITS, 0x000000f0
.equ	M33_DCIDR1_CLASS_MSB, 7
.equ	M33_DCIDR1_CLASS_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_DCIDR1_PRMBL_1
# Description : See CoreSight Architecture Specification
.equ	M33_DCIDR1_PRMBL_1_RESET, 0x0
.equ	M33_DCIDR1_PRMBL_1_BITS, 0x0000000f
.equ	M33_DCIDR1_PRMBL_1_MSB, 3
.equ	M33_DCIDR1_PRMBL_1_LSB, 0
# =============================================================================
# Register    : M33_DCIDR2
# Description : Provides CoreSight discovery information for the SCS
.equ	M33_DCIDR2_OFFSET, 0x0000eff8
.equ	M33_DCIDR2_BITS, 0x000000ff
.equ	M33_DCIDR2_RESET, 0x00000005
# -----------------------------------------------------------------------------
# Field       : M33_DCIDR2_PRMBL_2
# Description : See CoreSight Architecture Specification
.equ	M33_DCIDR2_PRMBL_2_RESET, 0x05
.equ	M33_DCIDR2_PRMBL_2_BITS, 0x000000ff
.equ	M33_DCIDR2_PRMBL_2_MSB, 7
.equ	M33_DCIDR2_PRMBL_2_LSB, 0
# =============================================================================
# Register    : M33_DCIDR3
# Description : Provides CoreSight discovery information for the SCS
.equ	M33_DCIDR3_OFFSET, 0x0000effc
.equ	M33_DCIDR3_BITS, 0x000000ff
.equ	M33_DCIDR3_RESET, 0x000000b1
# -----------------------------------------------------------------------------
# Field       : M33_DCIDR3_PRMBL_3
# Description : See CoreSight Architecture Specification
.equ	M33_DCIDR3_PRMBL_3_RESET, 0xb1
.equ	M33_DCIDR3_PRMBL_3_BITS, 0x000000ff
.equ	M33_DCIDR3_PRMBL_3_MSB, 7
.equ	M33_DCIDR3_PRMBL_3_LSB, 0
# =============================================================================
# Register    : M33_TRCPRGCTLR
# Description : Programming Control Register
.equ	M33_TRCPRGCTLR_OFFSET, 0x00041004
.equ	M33_TRCPRGCTLR_BITS, 0x00000001
.equ	M33_TRCPRGCTLR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_TRCPRGCTLR_EN
# Description : Trace Unit Enable
.equ	M33_TRCPRGCTLR_EN_RESET, 0x0
.equ	M33_TRCPRGCTLR_EN_BITS, 0x00000001
.equ	M33_TRCPRGCTLR_EN_MSB, 0
.equ	M33_TRCPRGCTLR_EN_LSB, 0
# =============================================================================
# Register    : M33_TRCSTATR
# Description : The TRCSTATR indicates the ETM-Teal status
.equ	M33_TRCSTATR_OFFSET, 0x0004100c
.equ	M33_TRCSTATR_BITS, 0x00000003
.equ	M33_TRCSTATR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_TRCSTATR_PMSTABLE
# Description : Indicates whether the ETM-Teal registers are stable and can be
#               read
.equ	M33_TRCSTATR_PMSTABLE_RESET, 0x0
.equ	M33_TRCSTATR_PMSTABLE_BITS, 0x00000002
.equ	M33_TRCSTATR_PMSTABLE_MSB, 1
.equ	M33_TRCSTATR_PMSTABLE_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_TRCSTATR_IDLE
# Description : Indicates that the trace unit is inactive
.equ	M33_TRCSTATR_IDLE_RESET, 0x0
.equ	M33_TRCSTATR_IDLE_BITS, 0x00000001
.equ	M33_TRCSTATR_IDLE_MSB, 0
.equ	M33_TRCSTATR_IDLE_LSB, 0
# =============================================================================
# Register    : M33_TRCCONFIGR
# Description : The TRCCONFIGR sets the basic tracing options for the trace
#               unit
.equ	M33_TRCCONFIGR_OFFSET, 0x00041010
.equ	M33_TRCCONFIGR_BITS, 0x00001ff8
.equ	M33_TRCCONFIGR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_TRCCONFIGR_RS
# Description : Return stack enable
.equ	M33_TRCCONFIGR_RS_RESET, 0x0
.equ	M33_TRCCONFIGR_RS_BITS, 0x00001000
.equ	M33_TRCCONFIGR_RS_MSB, 12
.equ	M33_TRCCONFIGR_RS_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_TRCCONFIGR_TS
# Description : Global timestamp tracing
.equ	M33_TRCCONFIGR_TS_RESET, 0x0
.equ	M33_TRCCONFIGR_TS_BITS, 0x00000800
.equ	M33_TRCCONFIGR_TS_MSB, 11
.equ	M33_TRCCONFIGR_TS_LSB, 11
# -----------------------------------------------------------------------------
# Field       : M33_TRCCONFIGR_COND
# Description : Conditional instruction tracing
.equ	M33_TRCCONFIGR_COND_RESET, 0x00
.equ	M33_TRCCONFIGR_COND_BITS, 0x000007e0
.equ	M33_TRCCONFIGR_COND_MSB, 10
.equ	M33_TRCCONFIGR_COND_LSB, 5
# -----------------------------------------------------------------------------
# Field       : M33_TRCCONFIGR_CCI
# Description : Cycle counting in instruction trace
.equ	M33_TRCCONFIGR_CCI_RESET, 0x0
.equ	M33_TRCCONFIGR_CCI_BITS, 0x00000010
.equ	M33_TRCCONFIGR_CCI_MSB, 4
.equ	M33_TRCCONFIGR_CCI_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_TRCCONFIGR_BB
# Description : Branch broadcast mode
.equ	M33_TRCCONFIGR_BB_RESET, 0x0
.equ	M33_TRCCONFIGR_BB_BITS, 0x00000008
.equ	M33_TRCCONFIGR_BB_MSB, 3
.equ	M33_TRCCONFIGR_BB_LSB, 3
# =============================================================================
# Register    : M33_TRCEVENTCTL0R
# Description : The TRCEVENTCTL0R controls the tracing of events in the trace
#               stream. The events also drive the ETM-Teal external outputs.
.equ	M33_TRCEVENTCTL0R_OFFSET, 0x00041020
.equ	M33_TRCEVENTCTL0R_BITS, 0x00008787
.equ	M33_TRCEVENTCTL0R_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_TRCEVENTCTL0R_TYPE1
# Description : Selects the resource type for event 1
.equ	M33_TRCEVENTCTL0R_TYPE1_RESET, 0x0
.equ	M33_TRCEVENTCTL0R_TYPE1_BITS, 0x00008000
.equ	M33_TRCEVENTCTL0R_TYPE1_MSB, 15
.equ	M33_TRCEVENTCTL0R_TYPE1_LSB, 15
# -----------------------------------------------------------------------------
# Field       : M33_TRCEVENTCTL0R_SEL1
# Description : Selects the resource number, based on the value of TYPE1: When
#               TYPE1 is 0, selects a single selected resource from 0-15
#               defined by SEL1[2:0].  When TYPE1 is 1, selects a Boolean
#               combined resource pair from 0-7 defined by SEL1[2:0]
.equ	M33_TRCEVENTCTL0R_SEL1_RESET, 0x0
.equ	M33_TRCEVENTCTL0R_SEL1_BITS, 0x00000700
.equ	M33_TRCEVENTCTL0R_SEL1_MSB, 10
.equ	M33_TRCEVENTCTL0R_SEL1_LSB, 8
# -----------------------------------------------------------------------------
# Field       : M33_TRCEVENTCTL0R_TYPE0
# Description : Selects the resource type for event 0
.equ	M33_TRCEVENTCTL0R_TYPE0_RESET, 0x0
.equ	M33_TRCEVENTCTL0R_TYPE0_BITS, 0x00000080
.equ	M33_TRCEVENTCTL0R_TYPE0_MSB, 7
.equ	M33_TRCEVENTCTL0R_TYPE0_LSB, 7
# -----------------------------------------------------------------------------
# Field       : M33_TRCEVENTCTL0R_SEL0
# Description : Selects the resource number, based on the value of TYPE0: When
#               TYPE1 is 0, selects a single selected resource from 0-15
#               defined by SEL0[2:0].  When TYPE1 is 1, selects a Boolean
#               combined resource pair from 0-7 defined by SEL0[2:0]
.equ	M33_TRCEVENTCTL0R_SEL0_RESET, 0x0
.equ	M33_TRCEVENTCTL0R_SEL0_BITS, 0x00000007
.equ	M33_TRCEVENTCTL0R_SEL0_MSB, 2
.equ	M33_TRCEVENTCTL0R_SEL0_LSB, 0
# =============================================================================
# Register    : M33_TRCEVENTCTL1R
# Description : The TRCEVENTCTL1R controls how the events selected by
#               TRCEVENTCTL0R behave
.equ	M33_TRCEVENTCTL1R_OFFSET, 0x00041024
.equ	M33_TRCEVENTCTL1R_BITS, 0x00001803
.equ	M33_TRCEVENTCTL1R_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_TRCEVENTCTL1R_LPOVERRIDE
# Description : Low power state behavior override
.equ	M33_TRCEVENTCTL1R_LPOVERRIDE_RESET, 0x0
.equ	M33_TRCEVENTCTL1R_LPOVERRIDE_BITS, 0x00001000
.equ	M33_TRCEVENTCTL1R_LPOVERRIDE_MSB, 12
.equ	M33_TRCEVENTCTL1R_LPOVERRIDE_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_TRCEVENTCTL1R_ATB
# Description : ATB enabled
.equ	M33_TRCEVENTCTL1R_ATB_RESET, 0x0
.equ	M33_TRCEVENTCTL1R_ATB_BITS, 0x00000800
.equ	M33_TRCEVENTCTL1R_ATB_MSB, 11
.equ	M33_TRCEVENTCTL1R_ATB_LSB, 11
# -----------------------------------------------------------------------------
# Field       : M33_TRCEVENTCTL1R_INSTEN1
# Description : One bit per event, to enable generation of an event element in
#               the instruction trace stream when the selected event occurs
.equ	M33_TRCEVENTCTL1R_INSTEN1_RESET, 0x0
.equ	M33_TRCEVENTCTL1R_INSTEN1_BITS, 0x00000002
.equ	M33_TRCEVENTCTL1R_INSTEN1_MSB, 1
.equ	M33_TRCEVENTCTL1R_INSTEN1_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_TRCEVENTCTL1R_INSTEN0
# Description : One bit per event, to enable generation of an event element in
#               the instruction trace stream when the selected event occurs
.equ	M33_TRCEVENTCTL1R_INSTEN0_RESET, 0x0
.equ	M33_TRCEVENTCTL1R_INSTEN0_BITS, 0x00000001
.equ	M33_TRCEVENTCTL1R_INSTEN0_MSB, 0
.equ	M33_TRCEVENTCTL1R_INSTEN0_LSB, 0
# =============================================================================
# Register    : M33_TRCSTALLCTLR
# Description : The TRCSTALLCTLR enables ETM-Teal to stall the processor if the
#               ETM-Teal FIFO goes over the programmed level to minimize risk
#               of overflow
.equ	M33_TRCSTALLCTLR_OFFSET, 0x0004102c
.equ	M33_TRCSTALLCTLR_BITS, 0x0000050c
.equ	M33_TRCSTALLCTLR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_TRCSTALLCTLR_INSTPRIORITY
# Description : Reserved, RES0
.equ	M33_TRCSTALLCTLR_INSTPRIORITY_RESET, 0x0
.equ	M33_TRCSTALLCTLR_INSTPRIORITY_BITS, 0x00000400
.equ	M33_TRCSTALLCTLR_INSTPRIORITY_MSB, 10
.equ	M33_TRCSTALLCTLR_INSTPRIORITY_LSB, 10
# -----------------------------------------------------------------------------
# Field       : M33_TRCSTALLCTLR_ISTALL
# Description : Stall processor based on instruction trace buffer space
.equ	M33_TRCSTALLCTLR_ISTALL_RESET, 0x0
.equ	M33_TRCSTALLCTLR_ISTALL_BITS, 0x00000100
.equ	M33_TRCSTALLCTLR_ISTALL_MSB, 8
.equ	M33_TRCSTALLCTLR_ISTALL_LSB, 8
# -----------------------------------------------------------------------------
# Field       : M33_TRCSTALLCTLR_LEVEL
# Description : Threshold at which stalling becomes active. This provides four
#               levels. This level can be varied to optimize the level of
#               invasion caused by stalling, balanced against the risk of a
#               FIFO overflow
.equ	M33_TRCSTALLCTLR_LEVEL_RESET, 0x0
.equ	M33_TRCSTALLCTLR_LEVEL_BITS, 0x0000000c
.equ	M33_TRCSTALLCTLR_LEVEL_MSB, 3
.equ	M33_TRCSTALLCTLR_LEVEL_LSB, 2
# =============================================================================
# Register    : M33_TRCTSCTLR
# Description : The TRCTSCTLR controls the insertion of global timestamps into
#               the trace stream. A timestamp is always inserted into the
#               instruction trace stream
.equ	M33_TRCTSCTLR_OFFSET, 0x00041030
.equ	M33_TRCTSCTLR_BITS, 0x00000083
.equ	M33_TRCTSCTLR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_TRCTSCTLR_TYPE0
# Description : Selects the resource type for event 0
.equ	M33_TRCTSCTLR_TYPE0_RESET, 0x0
.equ	M33_TRCTSCTLR_TYPE0_BITS, 0x00000080
.equ	M33_TRCTSCTLR_TYPE0_MSB, 7
.equ	M33_TRCTSCTLR_TYPE0_LSB, 7
# -----------------------------------------------------------------------------
# Field       : M33_TRCTSCTLR_SEL0
# Description : Selects the resource number, based on the value of TYPE0: When
#               TYPE1 is 0, selects a single selected resource from 0-15
#               defined by SEL0[2:0].  When TYPE1 is 1, selects a Boolean
#               combined resource pair from 0-7 defined by SEL0[2:0]
.equ	M33_TRCTSCTLR_SEL0_RESET, 0x0
.equ	M33_TRCTSCTLR_SEL0_BITS, 0x00000003
.equ	M33_TRCTSCTLR_SEL0_MSB, 1
.equ	M33_TRCTSCTLR_SEL0_LSB, 0
# =============================================================================
# Register    : M33_TRCSYNCPR
# Description : The TRCSYNCPR specifies the period of trace synchronization of
#               the trace streams. TRCSYNCPR defines a number of bytes of trace
#               between requests for trace synchronization. This value is
#               always a power of two
.equ	M33_TRCSYNCPR_OFFSET, 0x00041034
.equ	M33_TRCSYNCPR_BITS, 0x0000001f
.equ	M33_TRCSYNCPR_RESET, 0x0000000a
# -----------------------------------------------------------------------------
# Field       : M33_TRCSYNCPR_PERIOD
# Description : Defines the number of bytes of trace between trace
#               synchronization requests as a total of the number of bytes
#               generated by the instruction stream. The number of bytes is 2N
#               where N is the value of this field: - A value of zero disables
#               these periodic trace synchronization requests, but does not
#               disable other trace synchronization requests.  - The minimum
#               value that can be programmed, other than zero, is 8, providing
#               a minimum trace synchronization period of 256 bytes.  - The
#               maximum value is 20, providing a maximum trace synchronization
#               period of 2^20 bytes
.equ	M33_TRCSYNCPR_PERIOD_RESET, 0x0a
.equ	M33_TRCSYNCPR_PERIOD_BITS, 0x0000001f
.equ	M33_TRCSYNCPR_PERIOD_MSB, 4
.equ	M33_TRCSYNCPR_PERIOD_LSB, 0
# =============================================================================
# Register    : M33_TRCCCCTLR
# Description : The TRCCCCTLR sets the threshold value for instruction trace
#               cycle counting. The threshold represents the minimum interval
#               between cycle count trace packets
.equ	M33_TRCCCCTLR_OFFSET, 0x00041038
.equ	M33_TRCCCCTLR_BITS, 0x00000fff
.equ	M33_TRCCCCTLR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_TRCCCCTLR_THRESHOLD
# Description : Instruction trace cycle count threshold
.equ	M33_TRCCCCTLR_THRESHOLD_RESET, 0x000
.equ	M33_TRCCCCTLR_THRESHOLD_BITS, 0x00000fff
.equ	M33_TRCCCCTLR_THRESHOLD_MSB, 11
.equ	M33_TRCCCCTLR_THRESHOLD_LSB, 0
# =============================================================================
# Register    : M33_TRCVICTLR
# Description : The TRCVICTLR controls instruction trace filtering
.equ	M33_TRCVICTLR_OFFSET, 0x00041080
.equ	M33_TRCVICTLR_BITS, 0x00090e83
.equ	M33_TRCVICTLR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_TRCVICTLR_EXLEVEL_S3
# Description : In Secure state, each bit controls whether instruction tracing
#               is enabled for the corresponding exception level
.equ	M33_TRCVICTLR_EXLEVEL_S3_RESET, 0x0
.equ	M33_TRCVICTLR_EXLEVEL_S3_BITS, 0x00080000
.equ	M33_TRCVICTLR_EXLEVEL_S3_MSB, 19
.equ	M33_TRCVICTLR_EXLEVEL_S3_LSB, 19
# -----------------------------------------------------------------------------
# Field       : M33_TRCVICTLR_EXLEVEL_S0
# Description : In Secure state, each bit controls whether instruction tracing
#               is enabled for the corresponding exception level
.equ	M33_TRCVICTLR_EXLEVEL_S0_RESET, 0x0
.equ	M33_TRCVICTLR_EXLEVEL_S0_BITS, 0x00010000
.equ	M33_TRCVICTLR_EXLEVEL_S0_MSB, 16
.equ	M33_TRCVICTLR_EXLEVEL_S0_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_TRCVICTLR_TRCERR
# Description : Selects whether a system error exception must always be traced
.equ	M33_TRCVICTLR_TRCERR_RESET, 0x0
.equ	M33_TRCVICTLR_TRCERR_BITS, 0x00000800
.equ	M33_TRCVICTLR_TRCERR_MSB, 11
.equ	M33_TRCVICTLR_TRCERR_LSB, 11
# -----------------------------------------------------------------------------
# Field       : M33_TRCVICTLR_TRCRESET
# Description : Selects whether a reset exception must always be traced
.equ	M33_TRCVICTLR_TRCRESET_RESET, 0x0
.equ	M33_TRCVICTLR_TRCRESET_BITS, 0x00000400
.equ	M33_TRCVICTLR_TRCRESET_MSB, 10
.equ	M33_TRCVICTLR_TRCRESET_LSB, 10
# -----------------------------------------------------------------------------
# Field       : M33_TRCVICTLR_SSSTATUS
# Description : Indicates the current status of the start/stop logic
.equ	M33_TRCVICTLR_SSSTATUS_RESET, 0x0
.equ	M33_TRCVICTLR_SSSTATUS_BITS, 0x00000200
.equ	M33_TRCVICTLR_SSSTATUS_MSB, 9
.equ	M33_TRCVICTLR_SSSTATUS_LSB, 9
# -----------------------------------------------------------------------------
# Field       : M33_TRCVICTLR_TYPE0
# Description : Selects the resource type for event 0
.equ	M33_TRCVICTLR_TYPE0_RESET, 0x0
.equ	M33_TRCVICTLR_TYPE0_BITS, 0x00000080
.equ	M33_TRCVICTLR_TYPE0_MSB, 7
.equ	M33_TRCVICTLR_TYPE0_LSB, 7
# -----------------------------------------------------------------------------
# Field       : M33_TRCVICTLR_SEL0
# Description : Selects the resource number, based on the value of TYPE0: When
#               TYPE1 is 0, selects a single selected resource from 0-15
#               defined by SEL0[2:0].  When TYPE1 is 1, selects a Boolean
#               combined resource pair from 0-7 defined by SEL0[2:0]
.equ	M33_TRCVICTLR_SEL0_RESET, 0x0
.equ	M33_TRCVICTLR_SEL0_BITS, 0x00000003
.equ	M33_TRCVICTLR_SEL0_MSB, 1
.equ	M33_TRCVICTLR_SEL0_LSB, 0
# =============================================================================
# Register    : M33_TRCCNTRLDVR0
# Description : The TRCCNTRLDVR defines the reload value for the reduced
#               function counter
.equ	M33_TRCCNTRLDVR0_OFFSET, 0x00041140
.equ	M33_TRCCNTRLDVR0_BITS, 0x0000ffff
.equ	M33_TRCCNTRLDVR0_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_TRCCNTRLDVR0_VALUE
# Description : Defines the reload value for the counter. This value is loaded
#               into the counter each time the reload event occurs
.equ	M33_TRCCNTRLDVR0_VALUE_RESET, 0x0000
.equ	M33_TRCCNTRLDVR0_VALUE_BITS, 0x0000ffff
.equ	M33_TRCCNTRLDVR0_VALUE_MSB, 15
.equ	M33_TRCCNTRLDVR0_VALUE_LSB, 0
# =============================================================================
# Register    : M33_TRCIDR8
# Description : TRCIDR8
.equ	M33_TRCIDR8_OFFSET, 0x00041180
.equ	M33_TRCIDR8_BITS, 0xffffffff
.equ	M33_TRCIDR8_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR8_MAXSPEC
# Description : reads as `ImpDef
.equ	M33_TRCIDR8_MAXSPEC_RESET, 0x00000000
.equ	M33_TRCIDR8_MAXSPEC_BITS, 0xffffffff
.equ	M33_TRCIDR8_MAXSPEC_MSB, 31
.equ	M33_TRCIDR8_MAXSPEC_LSB, 0
# =============================================================================
# Register    : M33_TRCIDR9
# Description : TRCIDR9
.equ	M33_TRCIDR9_OFFSET, 0x00041184
.equ	M33_TRCIDR9_BITS, 0xffffffff
.equ	M33_TRCIDR9_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR9_NUMP0KEY
# Description : reads as `ImpDef
.equ	M33_TRCIDR9_NUMP0KEY_RESET, 0x00000000
.equ	M33_TRCIDR9_NUMP0KEY_BITS, 0xffffffff
.equ	M33_TRCIDR9_NUMP0KEY_MSB, 31
.equ	M33_TRCIDR9_NUMP0KEY_LSB, 0
# =============================================================================
# Register    : M33_TRCIDR10
# Description : TRCIDR10
.equ	M33_TRCIDR10_OFFSET, 0x00041188
.equ	M33_TRCIDR10_BITS, 0xffffffff
.equ	M33_TRCIDR10_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR10_NUMP1KEY
# Description : reads as `ImpDef
.equ	M33_TRCIDR10_NUMP1KEY_RESET, 0x00000000
.equ	M33_TRCIDR10_NUMP1KEY_BITS, 0xffffffff
.equ	M33_TRCIDR10_NUMP1KEY_MSB, 31
.equ	M33_TRCIDR10_NUMP1KEY_LSB, 0
# =============================================================================
# Register    : M33_TRCIDR11
# Description : TRCIDR11
.equ	M33_TRCIDR11_OFFSET, 0x0004118c
.equ	M33_TRCIDR11_BITS, 0xffffffff
.equ	M33_TRCIDR11_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR11_NUMP1SPC
# Description : reads as `ImpDef
.equ	M33_TRCIDR11_NUMP1SPC_RESET, 0x00000000
.equ	M33_TRCIDR11_NUMP1SPC_BITS, 0xffffffff
.equ	M33_TRCIDR11_NUMP1SPC_MSB, 31
.equ	M33_TRCIDR11_NUMP1SPC_LSB, 0
# =============================================================================
# Register    : M33_TRCIDR12
# Description : TRCIDR12
.equ	M33_TRCIDR12_OFFSET, 0x00041190
.equ	M33_TRCIDR12_BITS, 0xffffffff
.equ	M33_TRCIDR12_RESET, 0x00000001
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR12_NUMCONDKEY
# Description : reads as `ImpDef
.equ	M33_TRCIDR12_NUMCONDKEY_RESET, 0x00000001
.equ	M33_TRCIDR12_NUMCONDKEY_BITS, 0xffffffff
.equ	M33_TRCIDR12_NUMCONDKEY_MSB, 31
.equ	M33_TRCIDR12_NUMCONDKEY_LSB, 0
# =============================================================================
# Register    : M33_TRCIDR13
# Description : TRCIDR13
.equ	M33_TRCIDR13_OFFSET, 0x00041194
.equ	M33_TRCIDR13_BITS, 0xffffffff
.equ	M33_TRCIDR13_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR13_NUMCONDSPC
# Description : reads as `ImpDef
.equ	M33_TRCIDR13_NUMCONDSPC_RESET, 0x00000000
.equ	M33_TRCIDR13_NUMCONDSPC_BITS, 0xffffffff
.equ	M33_TRCIDR13_NUMCONDSPC_MSB, 31
.equ	M33_TRCIDR13_NUMCONDSPC_LSB, 0
# =============================================================================
# Register    : M33_TRCIMSPEC
# Description : The TRCIMSPEC shows the presence of any IMPLEMENTATION SPECIFIC
#               features, and enables any features that are provided
.equ	M33_TRCIMSPEC_OFFSET, 0x000411c0
.equ	M33_TRCIMSPEC_BITS, 0x0000000f
.equ	M33_TRCIMSPEC_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_TRCIMSPEC_SUPPORT
# Description : Reserved, RES0
.equ	M33_TRCIMSPEC_SUPPORT_RESET, 0x0
.equ	M33_TRCIMSPEC_SUPPORT_BITS, 0x0000000f
.equ	M33_TRCIMSPEC_SUPPORT_MSB, 3
.equ	M33_TRCIMSPEC_SUPPORT_LSB, 0
# =============================================================================
# Register    : M33_TRCIDR0
# Description : TRCIDR0
.equ	M33_TRCIDR0_OFFSET, 0x000411e0
.equ	M33_TRCIDR0_BITS, 0x3f03feff
.equ	M33_TRCIDR0_RESET, 0x280006e1
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR0_COMMOPT
# Description : reads as `ImpDef
.equ	M33_TRCIDR0_COMMOPT_RESET, 0x1
.equ	M33_TRCIDR0_COMMOPT_BITS, 0x20000000
.equ	M33_TRCIDR0_COMMOPT_MSB, 29
.equ	M33_TRCIDR0_COMMOPT_LSB, 29
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR0_TSSIZE
# Description : reads as `ImpDef
.equ	M33_TRCIDR0_TSSIZE_RESET, 0x08
.equ	M33_TRCIDR0_TSSIZE_BITS, 0x1f000000
.equ	M33_TRCIDR0_TSSIZE_MSB, 28
.equ	M33_TRCIDR0_TSSIZE_LSB, 24
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR0_TRCEXDATA
# Description : reads as `ImpDef
.equ	M33_TRCIDR0_TRCEXDATA_RESET, 0x0
.equ	M33_TRCIDR0_TRCEXDATA_BITS, 0x00020000
.equ	M33_TRCIDR0_TRCEXDATA_MSB, 17
.equ	M33_TRCIDR0_TRCEXDATA_LSB, 17
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR0_QSUPP
# Description : reads as `ImpDef
.equ	M33_TRCIDR0_QSUPP_RESET, 0x0
.equ	M33_TRCIDR0_QSUPP_BITS, 0x00018000
.equ	M33_TRCIDR0_QSUPP_MSB, 16
.equ	M33_TRCIDR0_QSUPP_LSB, 15
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR0_QFILT
# Description : reads as `ImpDef
.equ	M33_TRCIDR0_QFILT_RESET, 0x0
.equ	M33_TRCIDR0_QFILT_BITS, 0x00004000
.equ	M33_TRCIDR0_QFILT_MSB, 14
.equ	M33_TRCIDR0_QFILT_LSB, 14
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR0_CONDTYPE
# Description : reads as `ImpDef
.equ	M33_TRCIDR0_CONDTYPE_RESET, 0x0
.equ	M33_TRCIDR0_CONDTYPE_BITS, 0x00003000
.equ	M33_TRCIDR0_CONDTYPE_MSB, 13
.equ	M33_TRCIDR0_CONDTYPE_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR0_NUMEVENT
# Description : reads as `ImpDef
.equ	M33_TRCIDR0_NUMEVENT_RESET, 0x1
.equ	M33_TRCIDR0_NUMEVENT_BITS, 0x00000c00
.equ	M33_TRCIDR0_NUMEVENT_MSB, 11
.equ	M33_TRCIDR0_NUMEVENT_LSB, 10
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR0_RETSTACK
# Description : reads as `ImpDef
.equ	M33_TRCIDR0_RETSTACK_RESET, 0x1
.equ	M33_TRCIDR0_RETSTACK_BITS, 0x00000200
.equ	M33_TRCIDR0_RETSTACK_MSB, 9
.equ	M33_TRCIDR0_RETSTACK_LSB, 9
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR0_TRCCCI
# Description : reads as `ImpDef
.equ	M33_TRCIDR0_TRCCCI_RESET, 0x1
.equ	M33_TRCIDR0_TRCCCI_BITS, 0x00000080
.equ	M33_TRCIDR0_TRCCCI_MSB, 7
.equ	M33_TRCIDR0_TRCCCI_LSB, 7
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR0_TRCCOND
# Description : reads as `ImpDef
.equ	M33_TRCIDR0_TRCCOND_RESET, 0x1
.equ	M33_TRCIDR0_TRCCOND_BITS, 0x00000040
.equ	M33_TRCIDR0_TRCCOND_MSB, 6
.equ	M33_TRCIDR0_TRCCOND_LSB, 6
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR0_TRCBB
# Description : reads as `ImpDef
.equ	M33_TRCIDR0_TRCBB_RESET, 0x1
.equ	M33_TRCIDR0_TRCBB_BITS, 0x00000020
.equ	M33_TRCIDR0_TRCBB_MSB, 5
.equ	M33_TRCIDR0_TRCBB_LSB, 5
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR0_TRCDATA
# Description : reads as `ImpDef
.equ	M33_TRCIDR0_TRCDATA_RESET, 0x0
.equ	M33_TRCIDR0_TRCDATA_BITS, 0x00000018
.equ	M33_TRCIDR0_TRCDATA_MSB, 4
.equ	M33_TRCIDR0_TRCDATA_LSB, 3
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR0_INSTP0
# Description : reads as `ImpDef
.equ	M33_TRCIDR0_INSTP0_RESET, 0x0
.equ	M33_TRCIDR0_INSTP0_BITS, 0x00000006
.equ	M33_TRCIDR0_INSTP0_MSB, 2
.equ	M33_TRCIDR0_INSTP0_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR0_RES1
# Description : Reserved, RES1
.equ	M33_TRCIDR0_RES1_RESET, 0x1
.equ	M33_TRCIDR0_RES1_BITS, 0x00000001
.equ	M33_TRCIDR0_RES1_MSB, 0
.equ	M33_TRCIDR0_RES1_LSB, 0
# =============================================================================
# Register    : M33_TRCIDR1
# Description : TRCIDR1
.equ	M33_TRCIDR1_OFFSET, 0x000411e4
.equ	M33_TRCIDR1_BITS, 0xff00ffff
.equ	M33_TRCIDR1_RESET, 0x4100f421
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR1_DESIGNER
# Description : reads as `ImpDef
.equ	M33_TRCIDR1_DESIGNER_RESET, 0x41
.equ	M33_TRCIDR1_DESIGNER_BITS, 0xff000000
.equ	M33_TRCIDR1_DESIGNER_MSB, 31
.equ	M33_TRCIDR1_DESIGNER_LSB, 24
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR1_RES1
# Description : Reserved, RES1
.equ	M33_TRCIDR1_RES1_RESET, 0xf
.equ	M33_TRCIDR1_RES1_BITS, 0x0000f000
.equ	M33_TRCIDR1_RES1_MSB, 15
.equ	M33_TRCIDR1_RES1_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR1_TRCARCHMAJ
# Description : reads as 0b0100
.equ	M33_TRCIDR1_TRCARCHMAJ_RESET, 0x4
.equ	M33_TRCIDR1_TRCARCHMAJ_BITS, 0x00000f00
.equ	M33_TRCIDR1_TRCARCHMAJ_MSB, 11
.equ	M33_TRCIDR1_TRCARCHMAJ_LSB, 8
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR1_TRCARCHMIN
# Description : reads as 0b0000
.equ	M33_TRCIDR1_TRCARCHMIN_RESET, 0x2
.equ	M33_TRCIDR1_TRCARCHMIN_BITS, 0x000000f0
.equ	M33_TRCIDR1_TRCARCHMIN_MSB, 7
.equ	M33_TRCIDR1_TRCARCHMIN_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR1_REVISION
# Description : reads as `ImpDef
.equ	M33_TRCIDR1_REVISION_RESET, 0x1
.equ	M33_TRCIDR1_REVISION_BITS, 0x0000000f
.equ	M33_TRCIDR1_REVISION_MSB, 3
.equ	M33_TRCIDR1_REVISION_LSB, 0
# =============================================================================
# Register    : M33_TRCIDR2
# Description : TRCIDR2
.equ	M33_TRCIDR2_OFFSET, 0x000411e8
.equ	M33_TRCIDR2_BITS, 0x1fffffff
.equ	M33_TRCIDR2_RESET, 0x00000004
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR2_CCSIZE
# Description : reads as `ImpDef
.equ	M33_TRCIDR2_CCSIZE_RESET, 0x0
.equ	M33_TRCIDR2_CCSIZE_BITS, 0x1e000000
.equ	M33_TRCIDR2_CCSIZE_MSB, 28
.equ	M33_TRCIDR2_CCSIZE_LSB, 25
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR2_DVSIZE
# Description : reads as `ImpDef
.equ	M33_TRCIDR2_DVSIZE_RESET, 0x00
.equ	M33_TRCIDR2_DVSIZE_BITS, 0x01f00000
.equ	M33_TRCIDR2_DVSIZE_MSB, 24
.equ	M33_TRCIDR2_DVSIZE_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR2_DASIZE
# Description : reads as `ImpDef
.equ	M33_TRCIDR2_DASIZE_RESET, 0x00
.equ	M33_TRCIDR2_DASIZE_BITS, 0x000f8000
.equ	M33_TRCIDR2_DASIZE_MSB, 19
.equ	M33_TRCIDR2_DASIZE_LSB, 15
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR2_VMIDSIZE
# Description : reads as `ImpDef
.equ	M33_TRCIDR2_VMIDSIZE_RESET, 0x00
.equ	M33_TRCIDR2_VMIDSIZE_BITS, 0x00007c00
.equ	M33_TRCIDR2_VMIDSIZE_MSB, 14
.equ	M33_TRCIDR2_VMIDSIZE_LSB, 10
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR2_CIDSIZE
# Description : reads as `ImpDef
.equ	M33_TRCIDR2_CIDSIZE_RESET, 0x00
.equ	M33_TRCIDR2_CIDSIZE_BITS, 0x000003e0
.equ	M33_TRCIDR2_CIDSIZE_MSB, 9
.equ	M33_TRCIDR2_CIDSIZE_LSB, 5
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR2_IASIZE
# Description : reads as `ImpDef
.equ	M33_TRCIDR2_IASIZE_RESET, 0x04
.equ	M33_TRCIDR2_IASIZE_BITS, 0x0000001f
.equ	M33_TRCIDR2_IASIZE_MSB, 4
.equ	M33_TRCIDR2_IASIZE_LSB, 0
# =============================================================================
# Register    : M33_TRCIDR3
# Description : TRCIDR3
.equ	M33_TRCIDR3_OFFSET, 0x000411ec
.equ	M33_TRCIDR3_BITS, 0xffff0fff
.equ	M33_TRCIDR3_RESET, 0x0f090004
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR3_NOOVERFLOW
# Description : reads as `ImpDef
.equ	M33_TRCIDR3_NOOVERFLOW_RESET, 0x0
.equ	M33_TRCIDR3_NOOVERFLOW_BITS, 0x80000000
.equ	M33_TRCIDR3_NOOVERFLOW_MSB, 31
.equ	M33_TRCIDR3_NOOVERFLOW_LSB, 31
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR3_NUMPROC
# Description : reads as `ImpDef
.equ	M33_TRCIDR3_NUMPROC_RESET, 0x0
.equ	M33_TRCIDR3_NUMPROC_BITS, 0x70000000
.equ	M33_TRCIDR3_NUMPROC_MSB, 30
.equ	M33_TRCIDR3_NUMPROC_LSB, 28
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR3_SYSSTALL
# Description : reads as `ImpDef
.equ	M33_TRCIDR3_SYSSTALL_RESET, 0x1
.equ	M33_TRCIDR3_SYSSTALL_BITS, 0x08000000
.equ	M33_TRCIDR3_SYSSTALL_MSB, 27
.equ	M33_TRCIDR3_SYSSTALL_LSB, 27
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR3_STALLCTL
# Description : reads as `ImpDef
.equ	M33_TRCIDR3_STALLCTL_RESET, 0x1
.equ	M33_TRCIDR3_STALLCTL_BITS, 0x04000000
.equ	M33_TRCIDR3_STALLCTL_MSB, 26
.equ	M33_TRCIDR3_STALLCTL_LSB, 26
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR3_SYNCPR
# Description : reads as `ImpDef
.equ	M33_TRCIDR3_SYNCPR_RESET, 0x1
.equ	M33_TRCIDR3_SYNCPR_BITS, 0x02000000
.equ	M33_TRCIDR3_SYNCPR_MSB, 25
.equ	M33_TRCIDR3_SYNCPR_LSB, 25
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR3_TRCERR
# Description : reads as `ImpDef
.equ	M33_TRCIDR3_TRCERR_RESET, 0x1
.equ	M33_TRCIDR3_TRCERR_BITS, 0x01000000
.equ	M33_TRCIDR3_TRCERR_MSB, 24
.equ	M33_TRCIDR3_TRCERR_LSB, 24
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR3_EXLEVEL_NS
# Description : reads as `ImpDef
.equ	M33_TRCIDR3_EXLEVEL_NS_RESET, 0x0
.equ	M33_TRCIDR3_EXLEVEL_NS_BITS, 0x00f00000
.equ	M33_TRCIDR3_EXLEVEL_NS_MSB, 23
.equ	M33_TRCIDR3_EXLEVEL_NS_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR3_EXLEVEL_S
# Description : reads as `ImpDef
.equ	M33_TRCIDR3_EXLEVEL_S_RESET, 0x9
.equ	M33_TRCIDR3_EXLEVEL_S_BITS, 0x000f0000
.equ	M33_TRCIDR3_EXLEVEL_S_MSB, 19
.equ	M33_TRCIDR3_EXLEVEL_S_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR3_CCITMIN
# Description : reads as `ImpDef
.equ	M33_TRCIDR3_CCITMIN_RESET, 0x004
.equ	M33_TRCIDR3_CCITMIN_BITS, 0x00000fff
.equ	M33_TRCIDR3_CCITMIN_MSB, 11
.equ	M33_TRCIDR3_CCITMIN_LSB, 0
# =============================================================================
# Register    : M33_TRCIDR4
# Description : TRCIDR4
.equ	M33_TRCIDR4_OFFSET, 0x000411f0
.equ	M33_TRCIDR4_BITS, 0xfffff1ff
.equ	M33_TRCIDR4_RESET, 0x00114000
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR4_NUMVMIDC
# Description : reads as `ImpDef
.equ	M33_TRCIDR4_NUMVMIDC_RESET, 0x0
.equ	M33_TRCIDR4_NUMVMIDC_BITS, 0xf0000000
.equ	M33_TRCIDR4_NUMVMIDC_MSB, 31
.equ	M33_TRCIDR4_NUMVMIDC_LSB, 28
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR4_NUMCIDC
# Description : reads as `ImpDef
.equ	M33_TRCIDR4_NUMCIDC_RESET, 0x0
.equ	M33_TRCIDR4_NUMCIDC_BITS, 0x0f000000
.equ	M33_TRCIDR4_NUMCIDC_MSB, 27
.equ	M33_TRCIDR4_NUMCIDC_LSB, 24
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR4_NUMSSCC
# Description : reads as `ImpDef
.equ	M33_TRCIDR4_NUMSSCC_RESET, 0x1
.equ	M33_TRCIDR4_NUMSSCC_BITS, 0x00f00000
.equ	M33_TRCIDR4_NUMSSCC_MSB, 23
.equ	M33_TRCIDR4_NUMSSCC_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR4_NUMRSPAIR
# Description : reads as `ImpDef
.equ	M33_TRCIDR4_NUMRSPAIR_RESET, 0x1
.equ	M33_TRCIDR4_NUMRSPAIR_BITS, 0x000f0000
.equ	M33_TRCIDR4_NUMRSPAIR_MSB, 19
.equ	M33_TRCIDR4_NUMRSPAIR_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR4_NUMPC
# Description : reads as `ImpDef
.equ	M33_TRCIDR4_NUMPC_RESET, 0x4
.equ	M33_TRCIDR4_NUMPC_BITS, 0x0000f000
.equ	M33_TRCIDR4_NUMPC_MSB, 15
.equ	M33_TRCIDR4_NUMPC_LSB, 12
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR4_SUPPDAC
# Description : reads as `ImpDef
.equ	M33_TRCIDR4_SUPPDAC_RESET, 0x0
.equ	M33_TRCIDR4_SUPPDAC_BITS, 0x00000100
.equ	M33_TRCIDR4_SUPPDAC_MSB, 8
.equ	M33_TRCIDR4_SUPPDAC_LSB, 8
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR4_NUMDVC
# Description : reads as `ImpDef
.equ	M33_TRCIDR4_NUMDVC_RESET, 0x0
.equ	M33_TRCIDR4_NUMDVC_BITS, 0x000000f0
.equ	M33_TRCIDR4_NUMDVC_MSB, 7
.equ	M33_TRCIDR4_NUMDVC_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR4_NUMACPAIRS
# Description : reads as `ImpDef
.equ	M33_TRCIDR4_NUMACPAIRS_RESET, 0x0
.equ	M33_TRCIDR4_NUMACPAIRS_BITS, 0x0000000f
.equ	M33_TRCIDR4_NUMACPAIRS_MSB, 3
.equ	M33_TRCIDR4_NUMACPAIRS_LSB, 0
# =============================================================================
# Register    : M33_TRCIDR5
# Description : TRCIDR5
.equ	M33_TRCIDR5_OFFSET, 0x000411f4
.equ	M33_TRCIDR5_BITS, 0xfeff0fff
.equ	M33_TRCIDR5_RESET, 0x90c70004
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR5_REDFUNCNTR
# Description : reads as `ImpDef
.equ	M33_TRCIDR5_REDFUNCNTR_RESET, 0x1
.equ	M33_TRCIDR5_REDFUNCNTR_BITS, 0x80000000
.equ	M33_TRCIDR5_REDFUNCNTR_MSB, 31
.equ	M33_TRCIDR5_REDFUNCNTR_LSB, 31
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR5_NUMCNTR
# Description : reads as `ImpDef
.equ	M33_TRCIDR5_NUMCNTR_RESET, 0x1
.equ	M33_TRCIDR5_NUMCNTR_BITS, 0x70000000
.equ	M33_TRCIDR5_NUMCNTR_MSB, 30
.equ	M33_TRCIDR5_NUMCNTR_LSB, 28
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR5_NUMSEQSTATE
# Description : reads as `ImpDef
.equ	M33_TRCIDR5_NUMSEQSTATE_RESET, 0x0
.equ	M33_TRCIDR5_NUMSEQSTATE_BITS, 0x0e000000
.equ	M33_TRCIDR5_NUMSEQSTATE_MSB, 27
.equ	M33_TRCIDR5_NUMSEQSTATE_LSB, 25
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR5_LPOVERRIDE
# Description : reads as `ImpDef
.equ	M33_TRCIDR5_LPOVERRIDE_RESET, 0x1
.equ	M33_TRCIDR5_LPOVERRIDE_BITS, 0x00800000
.equ	M33_TRCIDR5_LPOVERRIDE_MSB, 23
.equ	M33_TRCIDR5_LPOVERRIDE_LSB, 23
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR5_ATBTRIG
# Description : reads as `ImpDef
.equ	M33_TRCIDR5_ATBTRIG_RESET, 0x1
.equ	M33_TRCIDR5_ATBTRIG_BITS, 0x00400000
.equ	M33_TRCIDR5_ATBTRIG_MSB, 22
.equ	M33_TRCIDR5_ATBTRIG_LSB, 22
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR5_TRACEIDSIZE
# Description : reads as 0x07
.equ	M33_TRCIDR5_TRACEIDSIZE_RESET, 0x07
.equ	M33_TRCIDR5_TRACEIDSIZE_BITS, 0x003f0000
.equ	M33_TRCIDR5_TRACEIDSIZE_MSB, 21
.equ	M33_TRCIDR5_TRACEIDSIZE_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR5_NUMEXTINSEL
# Description : reads as `ImpDef
.equ	M33_TRCIDR5_NUMEXTINSEL_RESET, 0x0
.equ	M33_TRCIDR5_NUMEXTINSEL_BITS, 0x00000e00
.equ	M33_TRCIDR5_NUMEXTINSEL_MSB, 11
.equ	M33_TRCIDR5_NUMEXTINSEL_LSB, 9
# -----------------------------------------------------------------------------
# Field       : M33_TRCIDR5_NUMEXTIN
# Description : reads as `ImpDef
.equ	M33_TRCIDR5_NUMEXTIN_RESET, 0x004
.equ	M33_TRCIDR5_NUMEXTIN_BITS, 0x000001ff
.equ	M33_TRCIDR5_NUMEXTIN_MSB, 8
.equ	M33_TRCIDR5_NUMEXTIN_LSB, 0
# =============================================================================
# Register    : M33_TRCIDR6
# Description : TRCIDR6
.equ	M33_TRCIDR6_OFFSET, 0x000411f8
.equ	M33_TRCIDR6_BITS, 0x00000000
.equ	M33_TRCIDR6_RESET, 0x00000000
.equ	M33_TRCIDR6_MSB, 31
.equ	M33_TRCIDR6_LSB, 0
# =============================================================================
# Register    : M33_TRCIDR7
# Description : TRCIDR7
.equ	M33_TRCIDR7_OFFSET, 0x000411fc
.equ	M33_TRCIDR7_BITS, 0x00000000
.equ	M33_TRCIDR7_RESET, 0x00000000
.equ	M33_TRCIDR7_MSB, 31
.equ	M33_TRCIDR7_LSB, 0
# =============================================================================
# Register    : M33_TRCRSCTLR2
# Description : The TRCRSCTLR controls the trace resources
.equ	M33_TRCRSCTLR2_OFFSET, 0x00041208
.equ	M33_TRCRSCTLR2_BITS, 0x003700ff
.equ	M33_TRCRSCTLR2_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_TRCRSCTLR2_PAIRINV
# Description : Inverts the result of a combined pair of resources.  This bit
#               is only implemented on the lower register for a pair of
#               resource selectors
.equ	M33_TRCRSCTLR2_PAIRINV_RESET, 0x0
.equ	M33_TRCRSCTLR2_PAIRINV_BITS, 0x00200000
.equ	M33_TRCRSCTLR2_PAIRINV_MSB, 21
.equ	M33_TRCRSCTLR2_PAIRINV_LSB, 21
# -----------------------------------------------------------------------------
# Field       : M33_TRCRSCTLR2_INV
# Description : Inverts the selected resources
.equ	M33_TRCRSCTLR2_INV_RESET, 0x0
.equ	M33_TRCRSCTLR2_INV_BITS, 0x00100000
.equ	M33_TRCRSCTLR2_INV_MSB, 20
.equ	M33_TRCRSCTLR2_INV_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_TRCRSCTLR2_GROUP
# Description : Selects a group of resource
.equ	M33_TRCRSCTLR2_GROUP_RESET, 0x0
.equ	M33_TRCRSCTLR2_GROUP_BITS, 0x00070000
.equ	M33_TRCRSCTLR2_GROUP_MSB, 18
.equ	M33_TRCRSCTLR2_GROUP_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_TRCRSCTLR2_SELECT
# Description : Selects one or more resources from the wanted group. One bit is
#               provided per resource from the group
.equ	M33_TRCRSCTLR2_SELECT_RESET, 0x00
.equ	M33_TRCRSCTLR2_SELECT_BITS, 0x000000ff
.equ	M33_TRCRSCTLR2_SELECT_MSB, 7
.equ	M33_TRCRSCTLR2_SELECT_LSB, 0
# =============================================================================
# Register    : M33_TRCRSCTLR3
# Description : The TRCRSCTLR controls the trace resources
.equ	M33_TRCRSCTLR3_OFFSET, 0x0004120c
.equ	M33_TRCRSCTLR3_BITS, 0x003700ff
.equ	M33_TRCRSCTLR3_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_TRCRSCTLR3_PAIRINV
# Description : Inverts the result of a combined pair of resources.  This bit
#               is only implemented on the lower register for a pair of
#               resource selectors
.equ	M33_TRCRSCTLR3_PAIRINV_RESET, 0x0
.equ	M33_TRCRSCTLR3_PAIRINV_BITS, 0x00200000
.equ	M33_TRCRSCTLR3_PAIRINV_MSB, 21
.equ	M33_TRCRSCTLR3_PAIRINV_LSB, 21
# -----------------------------------------------------------------------------
# Field       : M33_TRCRSCTLR3_INV
# Description : Inverts the selected resources
.equ	M33_TRCRSCTLR3_INV_RESET, 0x0
.equ	M33_TRCRSCTLR3_INV_BITS, 0x00100000
.equ	M33_TRCRSCTLR3_INV_MSB, 20
.equ	M33_TRCRSCTLR3_INV_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_TRCRSCTLR3_GROUP
# Description : Selects a group of resource
.equ	M33_TRCRSCTLR3_GROUP_RESET, 0x0
.equ	M33_TRCRSCTLR3_GROUP_BITS, 0x00070000
.equ	M33_TRCRSCTLR3_GROUP_MSB, 18
.equ	M33_TRCRSCTLR3_GROUP_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_TRCRSCTLR3_SELECT
# Description : Selects one or more resources from the wanted group. One bit is
#               provided per resource from the group
.equ	M33_TRCRSCTLR3_SELECT_RESET, 0x00
.equ	M33_TRCRSCTLR3_SELECT_BITS, 0x000000ff
.equ	M33_TRCRSCTLR3_SELECT_MSB, 7
.equ	M33_TRCRSCTLR3_SELECT_LSB, 0
# =============================================================================
# Register    : M33_TRCSSCSR
# Description : Controls the corresponding single-shot comparator resource
.equ	M33_TRCSSCSR_OFFSET, 0x000412a0
.equ	M33_TRCSSCSR_BITS, 0x8000000f
.equ	M33_TRCSSCSR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_TRCSSCSR_STATUS
# Description : Single-shot status bit. Indicates if any of the comparators,
#               that TRCSSCCRn.SAC or TRCSSCCRn.ARC selects, have matched
.equ	M33_TRCSSCSR_STATUS_RESET, 0x0
.equ	M33_TRCSSCSR_STATUS_BITS, 0x80000000
.equ	M33_TRCSSCSR_STATUS_MSB, 31
.equ	M33_TRCSSCSR_STATUS_LSB, 31
# -----------------------------------------------------------------------------
# Field       : M33_TRCSSCSR_PC
# Description : Reserved, RES1
.equ	M33_TRCSSCSR_PC_RESET, 0x0
.equ	M33_TRCSSCSR_PC_BITS, 0x00000008
.equ	M33_TRCSSCSR_PC_MSB, 3
.equ	M33_TRCSSCSR_PC_LSB, 3
# -----------------------------------------------------------------------------
# Field       : M33_TRCSSCSR_DV
# Description : Reserved, RES0
.equ	M33_TRCSSCSR_DV_RESET, 0x0
.equ	M33_TRCSSCSR_DV_BITS, 0x00000004
.equ	M33_TRCSSCSR_DV_MSB, 2
.equ	M33_TRCSSCSR_DV_LSB, 2
# -----------------------------------------------------------------------------
# Field       : M33_TRCSSCSR_DA
# Description : Reserved, RES0
.equ	M33_TRCSSCSR_DA_RESET, 0x0
.equ	M33_TRCSSCSR_DA_BITS, 0x00000002
.equ	M33_TRCSSCSR_DA_MSB, 1
.equ	M33_TRCSSCSR_DA_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_TRCSSCSR_INST
# Description : Reserved, RES0
.equ	M33_TRCSSCSR_INST_RESET, 0x0
.equ	M33_TRCSSCSR_INST_BITS, 0x00000001
.equ	M33_TRCSSCSR_INST_MSB, 0
.equ	M33_TRCSSCSR_INST_LSB, 0
# =============================================================================
# Register    : M33_TRCSSPCICR
# Description : Selects the PE comparator inputs for Single-shot control
.equ	M33_TRCSSPCICR_OFFSET, 0x000412c0
.equ	M33_TRCSSPCICR_BITS, 0x0000000f
.equ	M33_TRCSSPCICR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_TRCSSPCICR_PC
# Description : Selects one or more PE comparator inputs for Single-shot
#               control.  TRCIDR4.NUMPC defines the size of the PC field.  1
#               bit is provided for each implemented PE comparator input.  For
#               example, if bit[1] == 1 this selects PE comparator input 1 for
#               Single-shot control
.equ	M33_TRCSSPCICR_PC_RESET, 0x0
.equ	M33_TRCSSPCICR_PC_BITS, 0x0000000f
.equ	M33_TRCSSPCICR_PC_MSB, 3
.equ	M33_TRCSSPCICR_PC_LSB, 0
# =============================================================================
# Register    : M33_TRCPDCR
# Description : Requests the system to provide power to the trace unit
.equ	M33_TRCPDCR_OFFSET, 0x00041310
.equ	M33_TRCPDCR_BITS, 0x00000008
.equ	M33_TRCPDCR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_TRCPDCR_PU
# Description : Powerup request bit:
.equ	M33_TRCPDCR_PU_RESET, 0x0
.equ	M33_TRCPDCR_PU_BITS, 0x00000008
.equ	M33_TRCPDCR_PU_MSB, 3
.equ	M33_TRCPDCR_PU_LSB, 3
# =============================================================================
# Register    : M33_TRCPDSR
# Description : Returns the following information about the trace unit: - OS
#               Lock status.  - Core power domain status.  - Power interruption
#               status
.equ	M33_TRCPDSR_OFFSET, 0x00041314
.equ	M33_TRCPDSR_BITS, 0x00000023
.equ	M33_TRCPDSR_RESET, 0x00000003
# -----------------------------------------------------------------------------
# Field       : M33_TRCPDSR_OSLK
# Description : OS Lock status bit:
.equ	M33_TRCPDSR_OSLK_RESET, 0x0
.equ	M33_TRCPDSR_OSLK_BITS, 0x00000020
.equ	M33_TRCPDSR_OSLK_MSB, 5
.equ	M33_TRCPDSR_OSLK_LSB, 5
# -----------------------------------------------------------------------------
# Field       : M33_TRCPDSR_STICKYPD
# Description : Sticky powerdown status bit. Indicates whether the trace
#               register state is valid:
.equ	M33_TRCPDSR_STICKYPD_RESET, 0x1
.equ	M33_TRCPDSR_STICKYPD_BITS, 0x00000002
.equ	M33_TRCPDSR_STICKYPD_MSB, 1
.equ	M33_TRCPDSR_STICKYPD_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_TRCPDSR_POWER
# Description : Power status bit:
.equ	M33_TRCPDSR_POWER_RESET, 0x1
.equ	M33_TRCPDSR_POWER_BITS, 0x00000001
.equ	M33_TRCPDSR_POWER_MSB, 0
.equ	M33_TRCPDSR_POWER_LSB, 0
# =============================================================================
# Register    : M33_TRCITATBIDR
# Description : Trace Integration ATB Identification Register
.equ	M33_TRCITATBIDR_OFFSET, 0x00041ee4
.equ	M33_TRCITATBIDR_BITS, 0x0000007f
.equ	M33_TRCITATBIDR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_TRCITATBIDR_ID
# Description : Trace ID
.equ	M33_TRCITATBIDR_ID_RESET, 0x00
.equ	M33_TRCITATBIDR_ID_BITS, 0x0000007f
.equ	M33_TRCITATBIDR_ID_MSB, 6
.equ	M33_TRCITATBIDR_ID_LSB, 0
# =============================================================================
# Register    : M33_TRCITIATBINR
# Description : Trace Integration Instruction ATB In Register
.equ	M33_TRCITIATBINR_OFFSET, 0x00041ef4
.equ	M33_TRCITIATBINR_BITS, 0x00000003
.equ	M33_TRCITIATBINR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_TRCITIATBINR_AFVALIDM
# Description : Integration Mode instruction AFVALIDM in
.equ	M33_TRCITIATBINR_AFVALIDM_RESET, 0x0
.equ	M33_TRCITIATBINR_AFVALIDM_BITS, 0x00000002
.equ	M33_TRCITIATBINR_AFVALIDM_MSB, 1
.equ	M33_TRCITIATBINR_AFVALIDM_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_TRCITIATBINR_ATREADYM
# Description : Integration Mode instruction ATREADYM in
.equ	M33_TRCITIATBINR_ATREADYM_RESET, 0x0
.equ	M33_TRCITIATBINR_ATREADYM_BITS, 0x00000001
.equ	M33_TRCITIATBINR_ATREADYM_MSB, 0
.equ	M33_TRCITIATBINR_ATREADYM_LSB, 0
# =============================================================================
# Register    : M33_TRCITIATBOUTR
# Description : Trace Integration Instruction ATB Out Register
.equ	M33_TRCITIATBOUTR_OFFSET, 0x00041efc
.equ	M33_TRCITIATBOUTR_BITS, 0x00000003
.equ	M33_TRCITIATBOUTR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_TRCITIATBOUTR_AFREADY
# Description : Integration Mode instruction AFREADY out
.equ	M33_TRCITIATBOUTR_AFREADY_RESET, 0x0
.equ	M33_TRCITIATBOUTR_AFREADY_BITS, 0x00000002
.equ	M33_TRCITIATBOUTR_AFREADY_MSB, 1
.equ	M33_TRCITIATBOUTR_AFREADY_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_TRCITIATBOUTR_ATVALID
# Description : Integration Mode instruction ATVALID out
.equ	M33_TRCITIATBOUTR_ATVALID_RESET, 0x0
.equ	M33_TRCITIATBOUTR_ATVALID_BITS, 0x00000001
.equ	M33_TRCITIATBOUTR_ATVALID_MSB, 0
.equ	M33_TRCITIATBOUTR_ATVALID_LSB, 0
# =============================================================================
# Register    : M33_TRCCLAIMSET
# Description : Claim Tag Set Register
.equ	M33_TRCCLAIMSET_OFFSET, 0x00041fa0
.equ	M33_TRCCLAIMSET_BITS, 0x0000000f
.equ	M33_TRCCLAIMSET_RESET, 0x0000000f
# -----------------------------------------------------------------------------
# Field       : M33_TRCCLAIMSET_SET3
# Description : When a write to one of these bits occurs, with the value:
.equ	M33_TRCCLAIMSET_SET3_RESET, 0x1
.equ	M33_TRCCLAIMSET_SET3_BITS, 0x00000008
.equ	M33_TRCCLAIMSET_SET3_MSB, 3
.equ	M33_TRCCLAIMSET_SET3_LSB, 3
# -----------------------------------------------------------------------------
# Field       : M33_TRCCLAIMSET_SET2
# Description : When a write to one of these bits occurs, with the value:
.equ	M33_TRCCLAIMSET_SET2_RESET, 0x1
.equ	M33_TRCCLAIMSET_SET2_BITS, 0x00000004
.equ	M33_TRCCLAIMSET_SET2_MSB, 2
.equ	M33_TRCCLAIMSET_SET2_LSB, 2
# -----------------------------------------------------------------------------
# Field       : M33_TRCCLAIMSET_SET1
# Description : When a write to one of these bits occurs, with the value:
.equ	M33_TRCCLAIMSET_SET1_RESET, 0x1
.equ	M33_TRCCLAIMSET_SET1_BITS, 0x00000002
.equ	M33_TRCCLAIMSET_SET1_MSB, 1
.equ	M33_TRCCLAIMSET_SET1_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_TRCCLAIMSET_SET0
# Description : When a write to one of these bits occurs, with the value:
.equ	M33_TRCCLAIMSET_SET0_RESET, 0x1
.equ	M33_TRCCLAIMSET_SET0_BITS, 0x00000001
.equ	M33_TRCCLAIMSET_SET0_MSB, 0
.equ	M33_TRCCLAIMSET_SET0_LSB, 0
# =============================================================================
# Register    : M33_TRCCLAIMCLR
# Description : Claim Tag Clear Register
.equ	M33_TRCCLAIMCLR_OFFSET, 0x00041fa4
.equ	M33_TRCCLAIMCLR_BITS, 0x0000000f
.equ	M33_TRCCLAIMCLR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_TRCCLAIMCLR_CLR3
# Description : When a write to one of these bits occurs, with the value:
.equ	M33_TRCCLAIMCLR_CLR3_RESET, 0x0
.equ	M33_TRCCLAIMCLR_CLR3_BITS, 0x00000008
.equ	M33_TRCCLAIMCLR_CLR3_MSB, 3
.equ	M33_TRCCLAIMCLR_CLR3_LSB, 3
# -----------------------------------------------------------------------------
# Field       : M33_TRCCLAIMCLR_CLR2
# Description : When a write to one of these bits occurs, with the value:
.equ	M33_TRCCLAIMCLR_CLR2_RESET, 0x0
.equ	M33_TRCCLAIMCLR_CLR2_BITS, 0x00000004
.equ	M33_TRCCLAIMCLR_CLR2_MSB, 2
.equ	M33_TRCCLAIMCLR_CLR2_LSB, 2
# -----------------------------------------------------------------------------
# Field       : M33_TRCCLAIMCLR_CLR1
# Description : When a write to one of these bits occurs, with the value:
.equ	M33_TRCCLAIMCLR_CLR1_RESET, 0x0
.equ	M33_TRCCLAIMCLR_CLR1_BITS, 0x00000002
.equ	M33_TRCCLAIMCLR_CLR1_MSB, 1
.equ	M33_TRCCLAIMCLR_CLR1_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_TRCCLAIMCLR_CLR0
# Description : When a write to one of these bits occurs, with the value:
.equ	M33_TRCCLAIMCLR_CLR0_RESET, 0x0
.equ	M33_TRCCLAIMCLR_CLR0_BITS, 0x00000001
.equ	M33_TRCCLAIMCLR_CLR0_MSB, 0
.equ	M33_TRCCLAIMCLR_CLR0_LSB, 0
# =============================================================================
# Register    : M33_TRCAUTHSTATUS
# Description : Returns the level of tracing that the trace unit can support
.equ	M33_TRCAUTHSTATUS_OFFSET, 0x00041fb8
.equ	M33_TRCAUTHSTATUS_BITS, 0x000000ff
.equ	M33_TRCAUTHSTATUS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_TRCAUTHSTATUS_SNID
# Description : Indicates whether the system enables the trace unit to support
#               Secure non-invasive debug:
.equ	M33_TRCAUTHSTATUS_SNID_RESET, 0x0
.equ	M33_TRCAUTHSTATUS_SNID_BITS, 0x000000c0
.equ	M33_TRCAUTHSTATUS_SNID_MSB, 7
.equ	M33_TRCAUTHSTATUS_SNID_LSB, 6
# -----------------------------------------------------------------------------
# Field       : M33_TRCAUTHSTATUS_SID
# Description : Indicates whether the trace unit supports Secure invasive
#               debug:
.equ	M33_TRCAUTHSTATUS_SID_RESET, 0x0
.equ	M33_TRCAUTHSTATUS_SID_BITS, 0x00000030
.equ	M33_TRCAUTHSTATUS_SID_MSB, 5
.equ	M33_TRCAUTHSTATUS_SID_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_TRCAUTHSTATUS_NSNID
# Description : Indicates whether the system enables the trace unit to support
#               Non-secure non-invasive debug:
.equ	M33_TRCAUTHSTATUS_NSNID_RESET, 0x0
.equ	M33_TRCAUTHSTATUS_NSNID_BITS, 0x0000000c
.equ	M33_TRCAUTHSTATUS_NSNID_MSB, 3
.equ	M33_TRCAUTHSTATUS_NSNID_LSB, 2
# -----------------------------------------------------------------------------
# Field       : M33_TRCAUTHSTATUS_NSID
# Description : Indicates whether the trace unit supports Non-secure invasive
#               debug:
.equ	M33_TRCAUTHSTATUS_NSID_RESET, 0x0
.equ	M33_TRCAUTHSTATUS_NSID_BITS, 0x00000003
.equ	M33_TRCAUTHSTATUS_NSID_MSB, 1
.equ	M33_TRCAUTHSTATUS_NSID_LSB, 0
# =============================================================================
# Register    : M33_TRCDEVARCH
# Description : TRCDEVARCH
.equ	M33_TRCDEVARCH_OFFSET, 0x00041fbc
.equ	M33_TRCDEVARCH_BITS, 0xffffffff
.equ	M33_TRCDEVARCH_RESET, 0x47724a13
# -----------------------------------------------------------------------------
# Field       : M33_TRCDEVARCH_ARCHITECT
# Description : reads as 0b01000111011
.equ	M33_TRCDEVARCH_ARCHITECT_RESET, 0x23b
.equ	M33_TRCDEVARCH_ARCHITECT_BITS, 0xffe00000
.equ	M33_TRCDEVARCH_ARCHITECT_MSB, 31
.equ	M33_TRCDEVARCH_ARCHITECT_LSB, 21
# -----------------------------------------------------------------------------
# Field       : M33_TRCDEVARCH_PRESENT
# Description : reads as 0b1
.equ	M33_TRCDEVARCH_PRESENT_RESET, 0x1
.equ	M33_TRCDEVARCH_PRESENT_BITS, 0x00100000
.equ	M33_TRCDEVARCH_PRESENT_MSB, 20
.equ	M33_TRCDEVARCH_PRESENT_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_TRCDEVARCH_REVISION
# Description : reads as 0b0000
.equ	M33_TRCDEVARCH_REVISION_RESET, 0x2
.equ	M33_TRCDEVARCH_REVISION_BITS, 0x000f0000
.equ	M33_TRCDEVARCH_REVISION_MSB, 19
.equ	M33_TRCDEVARCH_REVISION_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_TRCDEVARCH_ARCHID
# Description : reads as 0b0100101000010011
.equ	M33_TRCDEVARCH_ARCHID_RESET, 0x4a13
.equ	M33_TRCDEVARCH_ARCHID_BITS, 0x0000ffff
.equ	M33_TRCDEVARCH_ARCHID_MSB, 15
.equ	M33_TRCDEVARCH_ARCHID_LSB, 0
# =============================================================================
# Register    : M33_TRCDEVID
# Description : TRCDEVID
.equ	M33_TRCDEVID_OFFSET, 0x00041fc8
.equ	M33_TRCDEVID_BITS, 0x00000000
.equ	M33_TRCDEVID_RESET, 0x00000000
.equ	M33_TRCDEVID_MSB, 31
.equ	M33_TRCDEVID_LSB, 0
# =============================================================================
# Register    : M33_TRCDEVTYPE
# Description : TRCDEVTYPE
.equ	M33_TRCDEVTYPE_OFFSET, 0x00041fcc
.equ	M33_TRCDEVTYPE_BITS, 0x000000ff
.equ	M33_TRCDEVTYPE_RESET, 0x00000013
# -----------------------------------------------------------------------------
# Field       : M33_TRCDEVTYPE_SUB
# Description : reads as 0b0001
.equ	M33_TRCDEVTYPE_SUB_RESET, 0x1
.equ	M33_TRCDEVTYPE_SUB_BITS, 0x000000f0
.equ	M33_TRCDEVTYPE_SUB_MSB, 7
.equ	M33_TRCDEVTYPE_SUB_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_TRCDEVTYPE_MAJOR
# Description : reads as 0b0011
.equ	M33_TRCDEVTYPE_MAJOR_RESET, 0x3
.equ	M33_TRCDEVTYPE_MAJOR_BITS, 0x0000000f
.equ	M33_TRCDEVTYPE_MAJOR_MSB, 3
.equ	M33_TRCDEVTYPE_MAJOR_LSB, 0
# =============================================================================
# Register    : M33_TRCPIDR4
# Description : TRCPIDR4
.equ	M33_TRCPIDR4_OFFSET, 0x00041fd0
.equ	M33_TRCPIDR4_BITS, 0x000000ff
.equ	M33_TRCPIDR4_RESET, 0x00000004
# -----------------------------------------------------------------------------
# Field       : M33_TRCPIDR4_SIZE
# Description : reads as `ImpDef
.equ	M33_TRCPIDR4_SIZE_RESET, 0x0
.equ	M33_TRCPIDR4_SIZE_BITS, 0x000000f0
.equ	M33_TRCPIDR4_SIZE_MSB, 7
.equ	M33_TRCPIDR4_SIZE_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_TRCPIDR4_DES_2
# Description : reads as `ImpDef
.equ	M33_TRCPIDR4_DES_2_RESET, 0x4
.equ	M33_TRCPIDR4_DES_2_BITS, 0x0000000f
.equ	M33_TRCPIDR4_DES_2_MSB, 3
.equ	M33_TRCPIDR4_DES_2_LSB, 0
# =============================================================================
# Register    : M33_TRCPIDR5
# Description : TRCPIDR5
.equ	M33_TRCPIDR5_OFFSET, 0x00041fd4
.equ	M33_TRCPIDR5_BITS, 0x00000000
.equ	M33_TRCPIDR5_RESET, 0x00000000
.equ	M33_TRCPIDR5_MSB, 31
.equ	M33_TRCPIDR5_LSB, 0
# =============================================================================
# Register    : M33_TRCPIDR6
# Description : TRCPIDR6
.equ	M33_TRCPIDR6_OFFSET, 0x00041fd8
.equ	M33_TRCPIDR6_BITS, 0x00000000
.equ	M33_TRCPIDR6_RESET, 0x00000000
.equ	M33_TRCPIDR6_MSB, 31
.equ	M33_TRCPIDR6_LSB, 0
# =============================================================================
# Register    : M33_TRCPIDR7
# Description : TRCPIDR7
.equ	M33_TRCPIDR7_OFFSET, 0x00041fdc
.equ	M33_TRCPIDR7_BITS, 0x00000000
.equ	M33_TRCPIDR7_RESET, 0x00000000
.equ	M33_TRCPIDR7_MSB, 31
.equ	M33_TRCPIDR7_LSB, 0
# =============================================================================
# Register    : M33_TRCPIDR0
# Description : TRCPIDR0
.equ	M33_TRCPIDR0_OFFSET, 0x00041fe0
.equ	M33_TRCPIDR0_BITS, 0x000000ff
.equ	M33_TRCPIDR0_RESET, 0x00000021
# -----------------------------------------------------------------------------
# Field       : M33_TRCPIDR0_PART_0
# Description : reads as `ImpDef
.equ	M33_TRCPIDR0_PART_0_RESET, 0x21
.equ	M33_TRCPIDR0_PART_0_BITS, 0x000000ff
.equ	M33_TRCPIDR0_PART_0_MSB, 7
.equ	M33_TRCPIDR0_PART_0_LSB, 0
# =============================================================================
# Register    : M33_TRCPIDR1
# Description : TRCPIDR1
.equ	M33_TRCPIDR1_OFFSET, 0x00041fe4
.equ	M33_TRCPIDR1_BITS, 0x000000ff
.equ	M33_TRCPIDR1_RESET, 0x000000bd
# -----------------------------------------------------------------------------
# Field       : M33_TRCPIDR1_DES_0
# Description : reads as `ImpDef
.equ	M33_TRCPIDR1_DES_0_RESET, 0xb
.equ	M33_TRCPIDR1_DES_0_BITS, 0x000000f0
.equ	M33_TRCPIDR1_DES_0_MSB, 7
.equ	M33_TRCPIDR1_DES_0_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_TRCPIDR1_PART_0
# Description : reads as `ImpDef
.equ	M33_TRCPIDR1_PART_0_RESET, 0xd
.equ	M33_TRCPIDR1_PART_0_BITS, 0x0000000f
.equ	M33_TRCPIDR1_PART_0_MSB, 3
.equ	M33_TRCPIDR1_PART_0_LSB, 0
# =============================================================================
# Register    : M33_TRCPIDR2
# Description : TRCPIDR2
.equ	M33_TRCPIDR2_OFFSET, 0x00041fe8
.equ	M33_TRCPIDR2_BITS, 0x000000ff
.equ	M33_TRCPIDR2_RESET, 0x0000002b
# -----------------------------------------------------------------------------
# Field       : M33_TRCPIDR2_REVISION
# Description : reads as `ImpDef
.equ	M33_TRCPIDR2_REVISION_RESET, 0x2
.equ	M33_TRCPIDR2_REVISION_BITS, 0x000000f0
.equ	M33_TRCPIDR2_REVISION_MSB, 7
.equ	M33_TRCPIDR2_REVISION_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_TRCPIDR2_JEDEC
# Description : reads as 0b1
.equ	M33_TRCPIDR2_JEDEC_RESET, 0x1
.equ	M33_TRCPIDR2_JEDEC_BITS, 0x00000008
.equ	M33_TRCPIDR2_JEDEC_MSB, 3
.equ	M33_TRCPIDR2_JEDEC_LSB, 3
# -----------------------------------------------------------------------------
# Field       : M33_TRCPIDR2_DES_0
# Description : reads as `ImpDef
.equ	M33_TRCPIDR2_DES_0_RESET, 0x3
.equ	M33_TRCPIDR2_DES_0_BITS, 0x00000007
.equ	M33_TRCPIDR2_DES_0_MSB, 2
.equ	M33_TRCPIDR2_DES_0_LSB, 0
# =============================================================================
# Register    : M33_TRCPIDR3
# Description : TRCPIDR3
.equ	M33_TRCPIDR3_OFFSET, 0x00041fec
.equ	M33_TRCPIDR3_BITS, 0x000000ff
.equ	M33_TRCPIDR3_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_TRCPIDR3_REVAND
# Description : reads as `ImpDef
.equ	M33_TRCPIDR3_REVAND_RESET, 0x0
.equ	M33_TRCPIDR3_REVAND_BITS, 0x000000f0
.equ	M33_TRCPIDR3_REVAND_MSB, 7
.equ	M33_TRCPIDR3_REVAND_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_TRCPIDR3_CMOD
# Description : reads as `ImpDef
.equ	M33_TRCPIDR3_CMOD_RESET, 0x0
.equ	M33_TRCPIDR3_CMOD_BITS, 0x0000000f
.equ	M33_TRCPIDR3_CMOD_MSB, 3
.equ	M33_TRCPIDR3_CMOD_LSB, 0
# =============================================================================
# Register    : M33_TRCCIDR0
# Description : TRCCIDR0
.equ	M33_TRCCIDR0_OFFSET, 0x00041ff0
.equ	M33_TRCCIDR0_BITS, 0x000000ff
.equ	M33_TRCCIDR0_RESET, 0x0000000d
# -----------------------------------------------------------------------------
# Field       : M33_TRCCIDR0_PRMBL_0
# Description : reads as 0b00001101
.equ	M33_TRCCIDR0_PRMBL_0_RESET, 0x0d
.equ	M33_TRCCIDR0_PRMBL_0_BITS, 0x000000ff
.equ	M33_TRCCIDR0_PRMBL_0_MSB, 7
.equ	M33_TRCCIDR0_PRMBL_0_LSB, 0
# =============================================================================
# Register    : M33_TRCCIDR1
# Description : TRCCIDR1
.equ	M33_TRCCIDR1_OFFSET, 0x00041ff4
.equ	M33_TRCCIDR1_BITS, 0x000000ff
.equ	M33_TRCCIDR1_RESET, 0x00000090
# -----------------------------------------------------------------------------
# Field       : M33_TRCCIDR1_CLASS
# Description : reads as 0b1001
.equ	M33_TRCCIDR1_CLASS_RESET, 0x9
.equ	M33_TRCCIDR1_CLASS_BITS, 0x000000f0
.equ	M33_TRCCIDR1_CLASS_MSB, 7
.equ	M33_TRCCIDR1_CLASS_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_TRCCIDR1_PRMBL_1
# Description : reads as 0b0000
.equ	M33_TRCCIDR1_PRMBL_1_RESET, 0x0
.equ	M33_TRCCIDR1_PRMBL_1_BITS, 0x0000000f
.equ	M33_TRCCIDR1_PRMBL_1_MSB, 3
.equ	M33_TRCCIDR1_PRMBL_1_LSB, 0
# =============================================================================
# Register    : M33_TRCCIDR2
# Description : TRCCIDR2
.equ	M33_TRCCIDR2_OFFSET, 0x00041ff8
.equ	M33_TRCCIDR2_BITS, 0x000000ff
.equ	M33_TRCCIDR2_RESET, 0x00000005
# -----------------------------------------------------------------------------
# Field       : M33_TRCCIDR2_PRMBL_2
# Description : reads as 0b00000101
.equ	M33_TRCCIDR2_PRMBL_2_RESET, 0x05
.equ	M33_TRCCIDR2_PRMBL_2_BITS, 0x000000ff
.equ	M33_TRCCIDR2_PRMBL_2_MSB, 7
.equ	M33_TRCCIDR2_PRMBL_2_LSB, 0
# =============================================================================
# Register    : M33_TRCCIDR3
# Description : TRCCIDR3
.equ	M33_TRCCIDR3_OFFSET, 0x00041ffc
.equ	M33_TRCCIDR3_BITS, 0x000000ff
.equ	M33_TRCCIDR3_RESET, 0x000000b1
# -----------------------------------------------------------------------------
# Field       : M33_TRCCIDR3_PRMBL_3
# Description : reads as 0b10110001
.equ	M33_TRCCIDR3_PRMBL_3_RESET, 0xb1
.equ	M33_TRCCIDR3_PRMBL_3_BITS, 0x000000ff
.equ	M33_TRCCIDR3_PRMBL_3_MSB, 7
.equ	M33_TRCCIDR3_PRMBL_3_LSB, 0
# =============================================================================
# Register    : M33_CTICONTROL
# Description : CTI Control Register
.equ	M33_CTICONTROL_OFFSET, 0x00042000
.equ	M33_CTICONTROL_BITS, 0x00000001
.equ	M33_CTICONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_CTICONTROL_GLBEN
# Description : Enables or disables the CTI
.equ	M33_CTICONTROL_GLBEN_RESET, 0x0
.equ	M33_CTICONTROL_GLBEN_BITS, 0x00000001
.equ	M33_CTICONTROL_GLBEN_MSB, 0
.equ	M33_CTICONTROL_GLBEN_LSB, 0
# =============================================================================
# Register    : M33_CTIINTACK
# Description : CTI Interrupt Acknowledge Register
.equ	M33_CTIINTACK_OFFSET, 0x00042010
.equ	M33_CTIINTACK_BITS, 0x000000ff
.equ	M33_CTIINTACK_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_CTIINTACK_INTACK
# Description : Acknowledges the corresponding ctitrigout output. There is one
#               bit of the register for each ctitrigout output. When a 1 is
#               written to a bit in this register, the corresponding ctitrigout
#               is acknowledged, causing it to be cleared.
.equ	M33_CTIINTACK_INTACK_RESET, 0x00
.equ	M33_CTIINTACK_INTACK_BITS, 0x000000ff
.equ	M33_CTIINTACK_INTACK_MSB, 7
.equ	M33_CTIINTACK_INTACK_LSB, 0
# =============================================================================
# Register    : M33_CTIAPPSET
# Description : CTI Application Trigger Set Register
.equ	M33_CTIAPPSET_OFFSET, 0x00042014
.equ	M33_CTIAPPSET_BITS, 0x0000000f
.equ	M33_CTIAPPSET_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_CTIAPPSET_APPSET
# Description : Setting a bit HIGH generates a channel event for the selected
#               channel. There is one bit of the register for each channel
.equ	M33_CTIAPPSET_APPSET_RESET, 0x0
.equ	M33_CTIAPPSET_APPSET_BITS, 0x0000000f
.equ	M33_CTIAPPSET_APPSET_MSB, 3
.equ	M33_CTIAPPSET_APPSET_LSB, 0
# =============================================================================
# Register    : M33_CTIAPPCLEAR
# Description : CTI Application Trigger Clear Register
.equ	M33_CTIAPPCLEAR_OFFSET, 0x00042018
.equ	M33_CTIAPPCLEAR_BITS, 0x0000000f
.equ	M33_CTIAPPCLEAR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_CTIAPPCLEAR_APPCLEAR
# Description : Sets the corresponding bits in the CTIAPPSET to 0. There is one
#               bit of the register for each channel.
.equ	M33_CTIAPPCLEAR_APPCLEAR_RESET, 0x0
.equ	M33_CTIAPPCLEAR_APPCLEAR_BITS, 0x0000000f
.equ	M33_CTIAPPCLEAR_APPCLEAR_MSB, 3
.equ	M33_CTIAPPCLEAR_APPCLEAR_LSB, 0
# =============================================================================
# Register    : M33_CTIAPPPULSE
# Description : CTI Application Pulse Register
.equ	M33_CTIAPPPULSE_OFFSET, 0x0004201c
.equ	M33_CTIAPPPULSE_BITS, 0x0000000f
.equ	M33_CTIAPPPULSE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_CTIAPPPULSE_APPULSE
# Description : Setting a bit HIGH generates a channel event pulse for the
#               selected channel. There is one bit of the register for each
#               channel.
.equ	M33_CTIAPPPULSE_APPULSE_RESET, 0x0
.equ	M33_CTIAPPPULSE_APPULSE_BITS, 0x0000000f
.equ	M33_CTIAPPPULSE_APPULSE_MSB, 3
.equ	M33_CTIAPPPULSE_APPULSE_LSB, 0
# =============================================================================
# Register    : M33_CTIINEN0
# Description : CTI Trigger to Channel Enable Registers
.equ	M33_CTIINEN0_OFFSET, 0x00042020
.equ	M33_CTIINEN0_BITS, 0x0000000f
.equ	M33_CTIINEN0_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_CTIINEN0_TRIGINEN
# Description : Enables a cross trigger event to the corresponding channel when
#               a ctitrigin input is activated. There is one bit of the field
#               for each of the four channels
.equ	M33_CTIINEN0_TRIGINEN_RESET, 0x0
.equ	M33_CTIINEN0_TRIGINEN_BITS, 0x0000000f
.equ	M33_CTIINEN0_TRIGINEN_MSB, 3
.equ	M33_CTIINEN0_TRIGINEN_LSB, 0
# =============================================================================
# Register    : M33_CTIINEN1
# Description : CTI Trigger to Channel Enable Registers
.equ	M33_CTIINEN1_OFFSET, 0x00042024
.equ	M33_CTIINEN1_BITS, 0x0000000f
.equ	M33_CTIINEN1_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_CTIINEN1_TRIGINEN
# Description : Enables a cross trigger event to the corresponding channel when
#               a ctitrigin input is activated. There is one bit of the field
#               for each of the four channels
.equ	M33_CTIINEN1_TRIGINEN_RESET, 0x0
.equ	M33_CTIINEN1_TRIGINEN_BITS, 0x0000000f
.equ	M33_CTIINEN1_TRIGINEN_MSB, 3
.equ	M33_CTIINEN1_TRIGINEN_LSB, 0
# =============================================================================
# Register    : M33_CTIINEN2
# Description : CTI Trigger to Channel Enable Registers
.equ	M33_CTIINEN2_OFFSET, 0x00042028
.equ	M33_CTIINEN2_BITS, 0x0000000f
.equ	M33_CTIINEN2_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_CTIINEN2_TRIGINEN
# Description : Enables a cross trigger event to the corresponding channel when
#               a ctitrigin input is activated. There is one bit of the field
#               for each of the four channels
.equ	M33_CTIINEN2_TRIGINEN_RESET, 0x0
.equ	M33_CTIINEN2_TRIGINEN_BITS, 0x0000000f
.equ	M33_CTIINEN2_TRIGINEN_MSB, 3
.equ	M33_CTIINEN2_TRIGINEN_LSB, 0
# =============================================================================
# Register    : M33_CTIINEN3
# Description : CTI Trigger to Channel Enable Registers
.equ	M33_CTIINEN3_OFFSET, 0x0004202c
.equ	M33_CTIINEN3_BITS, 0x0000000f
.equ	M33_CTIINEN3_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_CTIINEN3_TRIGINEN
# Description : Enables a cross trigger event to the corresponding channel when
#               a ctitrigin input is activated. There is one bit of the field
#               for each of the four channels
.equ	M33_CTIINEN3_TRIGINEN_RESET, 0x0
.equ	M33_CTIINEN3_TRIGINEN_BITS, 0x0000000f
.equ	M33_CTIINEN3_TRIGINEN_MSB, 3
.equ	M33_CTIINEN3_TRIGINEN_LSB, 0
# =============================================================================
# Register    : M33_CTIINEN4
# Description : CTI Trigger to Channel Enable Registers
.equ	M33_CTIINEN4_OFFSET, 0x00042030
.equ	M33_CTIINEN4_BITS, 0x0000000f
.equ	M33_CTIINEN4_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_CTIINEN4_TRIGINEN
# Description : Enables a cross trigger event to the corresponding channel when
#               a ctitrigin input is activated. There is one bit of the field
#               for each of the four channels
.equ	M33_CTIINEN4_TRIGINEN_RESET, 0x0
.equ	M33_CTIINEN4_TRIGINEN_BITS, 0x0000000f
.equ	M33_CTIINEN4_TRIGINEN_MSB, 3
.equ	M33_CTIINEN4_TRIGINEN_LSB, 0
# =============================================================================
# Register    : M33_CTIINEN5
# Description : CTI Trigger to Channel Enable Registers
.equ	M33_CTIINEN5_OFFSET, 0x00042034
.equ	M33_CTIINEN5_BITS, 0x0000000f
.equ	M33_CTIINEN5_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_CTIINEN5_TRIGINEN
# Description : Enables a cross trigger event to the corresponding channel when
#               a ctitrigin input is activated. There is one bit of the field
#               for each of the four channels
.equ	M33_CTIINEN5_TRIGINEN_RESET, 0x0
.equ	M33_CTIINEN5_TRIGINEN_BITS, 0x0000000f
.equ	M33_CTIINEN5_TRIGINEN_MSB, 3
.equ	M33_CTIINEN5_TRIGINEN_LSB, 0
# =============================================================================
# Register    : M33_CTIINEN6
# Description : CTI Trigger to Channel Enable Registers
.equ	M33_CTIINEN6_OFFSET, 0x00042038
.equ	M33_CTIINEN6_BITS, 0x0000000f
.equ	M33_CTIINEN6_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_CTIINEN6_TRIGINEN
# Description : Enables a cross trigger event to the corresponding channel when
#               a ctitrigin input is activated. There is one bit of the field
#               for each of the four channels
.equ	M33_CTIINEN6_TRIGINEN_RESET, 0x0
.equ	M33_CTIINEN6_TRIGINEN_BITS, 0x0000000f
.equ	M33_CTIINEN6_TRIGINEN_MSB, 3
.equ	M33_CTIINEN6_TRIGINEN_LSB, 0
# =============================================================================
# Register    : M33_CTIINEN7
# Description : CTI Trigger to Channel Enable Registers
.equ	M33_CTIINEN7_OFFSET, 0x0004203c
.equ	M33_CTIINEN7_BITS, 0x0000000f
.equ	M33_CTIINEN7_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_CTIINEN7_TRIGINEN
# Description : Enables a cross trigger event to the corresponding channel when
#               a ctitrigin input is activated. There is one bit of the field
#               for each of the four channels
.equ	M33_CTIINEN7_TRIGINEN_RESET, 0x0
.equ	M33_CTIINEN7_TRIGINEN_BITS, 0x0000000f
.equ	M33_CTIINEN7_TRIGINEN_MSB, 3
.equ	M33_CTIINEN7_TRIGINEN_LSB, 0
# =============================================================================
# Register    : M33_CTIOUTEN0
# Description : CTI Trigger to Channel Enable Registers
.equ	M33_CTIOUTEN0_OFFSET, 0x000420a0
.equ	M33_CTIOUTEN0_BITS, 0x0000000f
.equ	M33_CTIOUTEN0_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_CTIOUTEN0_TRIGOUTEN
# Description : Enables a cross trigger event to ctitrigout when the
#               corresponding channel is activated. There is one bit of the
#               field for each of the four channels.
.equ	M33_CTIOUTEN0_TRIGOUTEN_RESET, 0x0
.equ	M33_CTIOUTEN0_TRIGOUTEN_BITS, 0x0000000f
.equ	M33_CTIOUTEN0_TRIGOUTEN_MSB, 3
.equ	M33_CTIOUTEN0_TRIGOUTEN_LSB, 0
# =============================================================================
# Register    : M33_CTIOUTEN1
# Description : CTI Trigger to Channel Enable Registers
.equ	M33_CTIOUTEN1_OFFSET, 0x000420a4
.equ	M33_CTIOUTEN1_BITS, 0x0000000f
.equ	M33_CTIOUTEN1_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_CTIOUTEN1_TRIGOUTEN
# Description : Enables a cross trigger event to ctitrigout when the
#               corresponding channel is activated. There is one bit of the
#               field for each of the four channels.
.equ	M33_CTIOUTEN1_TRIGOUTEN_RESET, 0x0
.equ	M33_CTIOUTEN1_TRIGOUTEN_BITS, 0x0000000f
.equ	M33_CTIOUTEN1_TRIGOUTEN_MSB, 3
.equ	M33_CTIOUTEN1_TRIGOUTEN_LSB, 0
# =============================================================================
# Register    : M33_CTIOUTEN2
# Description : CTI Trigger to Channel Enable Registers
.equ	M33_CTIOUTEN2_OFFSET, 0x000420a8
.equ	M33_CTIOUTEN2_BITS, 0x0000000f
.equ	M33_CTIOUTEN2_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_CTIOUTEN2_TRIGOUTEN
# Description : Enables a cross trigger event to ctitrigout when the
#               corresponding channel is activated. There is one bit of the
#               field for each of the four channels.
.equ	M33_CTIOUTEN2_TRIGOUTEN_RESET, 0x0
.equ	M33_CTIOUTEN2_TRIGOUTEN_BITS, 0x0000000f
.equ	M33_CTIOUTEN2_TRIGOUTEN_MSB, 3
.equ	M33_CTIOUTEN2_TRIGOUTEN_LSB, 0
# =============================================================================
# Register    : M33_CTIOUTEN3
# Description : CTI Trigger to Channel Enable Registers
.equ	M33_CTIOUTEN3_OFFSET, 0x000420ac
.equ	M33_CTIOUTEN3_BITS, 0x0000000f
.equ	M33_CTIOUTEN3_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_CTIOUTEN3_TRIGOUTEN
# Description : Enables a cross trigger event to ctitrigout when the
#               corresponding channel is activated. There is one bit of the
#               field for each of the four channels.
.equ	M33_CTIOUTEN3_TRIGOUTEN_RESET, 0x0
.equ	M33_CTIOUTEN3_TRIGOUTEN_BITS, 0x0000000f
.equ	M33_CTIOUTEN3_TRIGOUTEN_MSB, 3
.equ	M33_CTIOUTEN3_TRIGOUTEN_LSB, 0
# =============================================================================
# Register    : M33_CTIOUTEN4
# Description : CTI Trigger to Channel Enable Registers
.equ	M33_CTIOUTEN4_OFFSET, 0x000420b0
.equ	M33_CTIOUTEN4_BITS, 0x0000000f
.equ	M33_CTIOUTEN4_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_CTIOUTEN4_TRIGOUTEN
# Description : Enables a cross trigger event to ctitrigout when the
#               corresponding channel is activated. There is one bit of the
#               field for each of the four channels.
.equ	M33_CTIOUTEN4_TRIGOUTEN_RESET, 0x0
.equ	M33_CTIOUTEN4_TRIGOUTEN_BITS, 0x0000000f
.equ	M33_CTIOUTEN4_TRIGOUTEN_MSB, 3
.equ	M33_CTIOUTEN4_TRIGOUTEN_LSB, 0
# =============================================================================
# Register    : M33_CTIOUTEN5
# Description : CTI Trigger to Channel Enable Registers
.equ	M33_CTIOUTEN5_OFFSET, 0x000420b4
.equ	M33_CTIOUTEN5_BITS, 0x0000000f
.equ	M33_CTIOUTEN5_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_CTIOUTEN5_TRIGOUTEN
# Description : Enables a cross trigger event to ctitrigout when the
#               corresponding channel is activated. There is one bit of the
#               field for each of the four channels.
.equ	M33_CTIOUTEN5_TRIGOUTEN_RESET, 0x0
.equ	M33_CTIOUTEN5_TRIGOUTEN_BITS, 0x0000000f
.equ	M33_CTIOUTEN5_TRIGOUTEN_MSB, 3
.equ	M33_CTIOUTEN5_TRIGOUTEN_LSB, 0
# =============================================================================
# Register    : M33_CTIOUTEN6
# Description : CTI Trigger to Channel Enable Registers
.equ	M33_CTIOUTEN6_OFFSET, 0x000420b8
.equ	M33_CTIOUTEN6_BITS, 0x0000000f
.equ	M33_CTIOUTEN6_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_CTIOUTEN6_TRIGOUTEN
# Description : Enables a cross trigger event to ctitrigout when the
#               corresponding channel is activated. There is one bit of the
#               field for each of the four channels.
.equ	M33_CTIOUTEN6_TRIGOUTEN_RESET, 0x0
.equ	M33_CTIOUTEN6_TRIGOUTEN_BITS, 0x0000000f
.equ	M33_CTIOUTEN6_TRIGOUTEN_MSB, 3
.equ	M33_CTIOUTEN6_TRIGOUTEN_LSB, 0
# =============================================================================
# Register    : M33_CTIOUTEN7
# Description : CTI Trigger to Channel Enable Registers
.equ	M33_CTIOUTEN7_OFFSET, 0x000420bc
.equ	M33_CTIOUTEN7_BITS, 0x0000000f
.equ	M33_CTIOUTEN7_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_CTIOUTEN7_TRIGOUTEN
# Description : Enables a cross trigger event to ctitrigout when the
#               corresponding channel is activated. There is one bit of the
#               field for each of the four channels.
.equ	M33_CTIOUTEN7_TRIGOUTEN_RESET, 0x0
.equ	M33_CTIOUTEN7_TRIGOUTEN_BITS, 0x0000000f
.equ	M33_CTIOUTEN7_TRIGOUTEN_MSB, 3
.equ	M33_CTIOUTEN7_TRIGOUTEN_LSB, 0
# =============================================================================
# Register    : M33_CTITRIGINSTATUS
# Description : CTI Trigger to Channel Enable Registers
.equ	M33_CTITRIGINSTATUS_OFFSET, 0x00042130
.equ	M33_CTITRIGINSTATUS_BITS, 0x000000ff
.equ	M33_CTITRIGINSTATUS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_CTITRIGINSTATUS_TRIGINSTATUS
# Description : Shows the status of the ctitrigin inputs. There is one bit of
#               the field for each trigger input.Because the register provides
#               a view of the raw ctitrigin inputs, the reset value is UNKNOWN.
.equ	M33_CTITRIGINSTATUS_TRIGINSTATUS_RESET, 0x00
.equ	M33_CTITRIGINSTATUS_TRIGINSTATUS_BITS, 0x000000ff
.equ	M33_CTITRIGINSTATUS_TRIGINSTATUS_MSB, 7
.equ	M33_CTITRIGINSTATUS_TRIGINSTATUS_LSB, 0
# =============================================================================
# Register    : M33_CTITRIGOUTSTATUS
# Description : CTI Trigger In Status Register
.equ	M33_CTITRIGOUTSTATUS_OFFSET, 0x00042134
.equ	M33_CTITRIGOUTSTATUS_BITS, 0x000000ff
.equ	M33_CTITRIGOUTSTATUS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_CTITRIGOUTSTATUS_TRIGOUTSTATUS
# Description : Shows the status of the ctitrigout outputs. There is one bit of
#               the field for each trigger output.
.equ	M33_CTITRIGOUTSTATUS_TRIGOUTSTATUS_RESET, 0x00
.equ	M33_CTITRIGOUTSTATUS_TRIGOUTSTATUS_BITS, 0x000000ff
.equ	M33_CTITRIGOUTSTATUS_TRIGOUTSTATUS_MSB, 7
.equ	M33_CTITRIGOUTSTATUS_TRIGOUTSTATUS_LSB, 0
# =============================================================================
# Register    : M33_CTICHINSTATUS
# Description : CTI Channel In Status Register
.equ	M33_CTICHINSTATUS_OFFSET, 0x00042138
.equ	M33_CTICHINSTATUS_BITS, 0x0000000f
.equ	M33_CTICHINSTATUS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_CTICHINSTATUS_CTICHOUTSTATUS
# Description : Shows the status of the ctichout outputs. There is one bit of
#               the field for each channel output
.equ	M33_CTICHINSTATUS_CTICHOUTSTATUS_RESET, 0x0
.equ	M33_CTICHINSTATUS_CTICHOUTSTATUS_BITS, 0x0000000f
.equ	M33_CTICHINSTATUS_CTICHOUTSTATUS_MSB, 3
.equ	M33_CTICHINSTATUS_CTICHOUTSTATUS_LSB, 0
# =============================================================================
# Register    : M33_CTIGATE
# Description : Enable CTI Channel Gate register
.equ	M33_CTIGATE_OFFSET, 0x00042140
.equ	M33_CTIGATE_BITS, 0x0000000f
.equ	M33_CTIGATE_RESET, 0x0000000f
# -----------------------------------------------------------------------------
# Field       : M33_CTIGATE_CTIGATEEN3
# Description : Enable ctichout3. Set to 0 to disable channel propagation.
.equ	M33_CTIGATE_CTIGATEEN3_RESET, 0x1
.equ	M33_CTIGATE_CTIGATEEN3_BITS, 0x00000008
.equ	M33_CTIGATE_CTIGATEEN3_MSB, 3
.equ	M33_CTIGATE_CTIGATEEN3_LSB, 3
# -----------------------------------------------------------------------------
# Field       : M33_CTIGATE_CTIGATEEN2
# Description : Enable ctichout2. Set to 0 to disable channel propagation.
.equ	M33_CTIGATE_CTIGATEEN2_RESET, 0x1
.equ	M33_CTIGATE_CTIGATEEN2_BITS, 0x00000004
.equ	M33_CTIGATE_CTIGATEEN2_MSB, 2
.equ	M33_CTIGATE_CTIGATEEN2_LSB, 2
# -----------------------------------------------------------------------------
# Field       : M33_CTIGATE_CTIGATEEN1
# Description : Enable ctichout1. Set to 0 to disable channel propagation.
.equ	M33_CTIGATE_CTIGATEEN1_RESET, 0x1
.equ	M33_CTIGATE_CTIGATEEN1_BITS, 0x00000002
.equ	M33_CTIGATE_CTIGATEEN1_MSB, 1
.equ	M33_CTIGATE_CTIGATEEN1_LSB, 1
# -----------------------------------------------------------------------------
# Field       : M33_CTIGATE_CTIGATEEN0
# Description : Enable ctichout0. Set to 0 to disable channel propagation.
.equ	M33_CTIGATE_CTIGATEEN0_RESET, 0x1
.equ	M33_CTIGATE_CTIGATEEN0_BITS, 0x00000001
.equ	M33_CTIGATE_CTIGATEEN0_MSB, 0
.equ	M33_CTIGATE_CTIGATEEN0_LSB, 0
# =============================================================================
# Register    : M33_ASICCTL
# Description : External Multiplexer Control register
.equ	M33_ASICCTL_OFFSET, 0x00042144
.equ	M33_ASICCTL_BITS, 0x00000000
.equ	M33_ASICCTL_RESET, 0x00000000
.equ	M33_ASICCTL_MSB, 31
.equ	M33_ASICCTL_LSB, 0
# =============================================================================
# Register    : M33_ITCHOUT
# Description : Integration Test Channel Output register
.equ	M33_ITCHOUT_OFFSET, 0x00042ee4
.equ	M33_ITCHOUT_BITS, 0x0000000f
.equ	M33_ITCHOUT_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITCHOUT_CTCHOUT
# Description : Sets the value of the ctichout outputs
.equ	M33_ITCHOUT_CTCHOUT_RESET, 0x0
.equ	M33_ITCHOUT_CTCHOUT_BITS, 0x0000000f
.equ	M33_ITCHOUT_CTCHOUT_MSB, 3
.equ	M33_ITCHOUT_CTCHOUT_LSB, 0
# =============================================================================
# Register    : M33_ITTRIGOUT
# Description : Integration Test Trigger Output register
.equ	M33_ITTRIGOUT_OFFSET, 0x00042ee8
.equ	M33_ITTRIGOUT_BITS, 0x000000ff
.equ	M33_ITTRIGOUT_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITTRIGOUT_CTTRIGOUT
# Description : Sets the value of the ctitrigout outputs
.equ	M33_ITTRIGOUT_CTTRIGOUT_RESET, 0x00
.equ	M33_ITTRIGOUT_CTTRIGOUT_BITS, 0x000000ff
.equ	M33_ITTRIGOUT_CTTRIGOUT_MSB, 7
.equ	M33_ITTRIGOUT_CTTRIGOUT_LSB, 0
# =============================================================================
# Register    : M33_ITCHIN
# Description : Integration Test Channel Input register
.equ	M33_ITCHIN_OFFSET, 0x00042ef4
.equ	M33_ITCHIN_BITS, 0x0000000f
.equ	M33_ITCHIN_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITCHIN_CTCHIN
# Description : Reads the value of the ctichin inputs.
.equ	M33_ITCHIN_CTCHIN_RESET, 0x0
.equ	M33_ITCHIN_CTCHIN_BITS, 0x0000000f
.equ	M33_ITCHIN_CTCHIN_MSB, 3
.equ	M33_ITCHIN_CTCHIN_LSB, 0
# =============================================================================
# Register    : M33_ITCTRL
# Description : Integration Mode Control register
.equ	M33_ITCTRL_OFFSET, 0x00042f00
.equ	M33_ITCTRL_BITS, 0x00000001
.equ	M33_ITCTRL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_ITCTRL_IME
# Description : Integration Mode Enable
.equ	M33_ITCTRL_IME_RESET, 0x0
.equ	M33_ITCTRL_IME_BITS, 0x00000001
.equ	M33_ITCTRL_IME_MSB, 0
.equ	M33_ITCTRL_IME_LSB, 0
# =============================================================================
# Register    : M33_DEVARCH
# Description : Device Architecture register
.equ	M33_DEVARCH_OFFSET, 0x00042fbc
.equ	M33_DEVARCH_BITS, 0xffffffff
.equ	M33_DEVARCH_RESET, 0x47701a14
# -----------------------------------------------------------------------------
# Field       : M33_DEVARCH_ARCHITECT
# Description : Indicates the component architect
.equ	M33_DEVARCH_ARCHITECT_RESET, 0x23b
.equ	M33_DEVARCH_ARCHITECT_BITS, 0xffe00000
.equ	M33_DEVARCH_ARCHITECT_MSB, 31
.equ	M33_DEVARCH_ARCHITECT_LSB, 21
# -----------------------------------------------------------------------------
# Field       : M33_DEVARCH_PRESENT
# Description : Indicates whether the DEVARCH register is present
.equ	M33_DEVARCH_PRESENT_RESET, 0x1
.equ	M33_DEVARCH_PRESENT_BITS, 0x00100000
.equ	M33_DEVARCH_PRESENT_MSB, 20
.equ	M33_DEVARCH_PRESENT_LSB, 20
# -----------------------------------------------------------------------------
# Field       : M33_DEVARCH_REVISION
# Description : Indicates the architecture revision
.equ	M33_DEVARCH_REVISION_RESET, 0x0
.equ	M33_DEVARCH_REVISION_BITS, 0x000f0000
.equ	M33_DEVARCH_REVISION_MSB, 19
.equ	M33_DEVARCH_REVISION_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_DEVARCH_ARCHID
# Description : Indicates the component
.equ	M33_DEVARCH_ARCHID_RESET, 0x1a14
.equ	M33_DEVARCH_ARCHID_BITS, 0x0000ffff
.equ	M33_DEVARCH_ARCHID_MSB, 15
.equ	M33_DEVARCH_ARCHID_LSB, 0
# =============================================================================
# Register    : M33_DEVID
# Description : Device Configuration register
.equ	M33_DEVID_OFFSET, 0x00042fc8
.equ	M33_DEVID_BITS, 0x000fff1f
.equ	M33_DEVID_RESET, 0x00040800
# -----------------------------------------------------------------------------
# Field       : M33_DEVID_NUMCH
# Description : Number of ECT channels available
.equ	M33_DEVID_NUMCH_RESET, 0x4
.equ	M33_DEVID_NUMCH_BITS, 0x000f0000
.equ	M33_DEVID_NUMCH_MSB, 19
.equ	M33_DEVID_NUMCH_LSB, 16
# -----------------------------------------------------------------------------
# Field       : M33_DEVID_NUMTRIG
# Description : Number of ECT triggers available.
.equ	M33_DEVID_NUMTRIG_RESET, 0x08
.equ	M33_DEVID_NUMTRIG_BITS, 0x0000ff00
.equ	M33_DEVID_NUMTRIG_MSB, 15
.equ	M33_DEVID_NUMTRIG_LSB, 8
# -----------------------------------------------------------------------------
# Field       : M33_DEVID_EXTMUXNUM
# Description : Indicates the number of multiplexers available on Trigger
#               Inputs and Trigger Outputs that are using asicctl. The default
#               value of 0b00000 indicates that no multiplexing is present.
#               This value of this bit depends on the Verilog define EXTMUXNUM
#               that you must change accordingly.
.equ	M33_DEVID_EXTMUXNUM_RESET, 0x00
.equ	M33_DEVID_EXTMUXNUM_BITS, 0x0000001f
.equ	M33_DEVID_EXTMUXNUM_MSB, 4
.equ	M33_DEVID_EXTMUXNUM_LSB, 0
# =============================================================================
# Register    : M33_DEVTYPE
# Description : Device Type Identifier register
.equ	M33_DEVTYPE_OFFSET, 0x00042fcc
.equ	M33_DEVTYPE_BITS, 0x000000ff
.equ	M33_DEVTYPE_RESET, 0x00000014
# -----------------------------------------------------------------------------
# Field       : M33_DEVTYPE_SUB
# Description : Sub-classification of the type of the debug component as
#               specified in the ARM Architecture Specification within the
#               major classification as specified in the MAJOR field.
.equ	M33_DEVTYPE_SUB_RESET, 0x1
.equ	M33_DEVTYPE_SUB_BITS, 0x000000f0
.equ	M33_DEVTYPE_SUB_MSB, 7
.equ	M33_DEVTYPE_SUB_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_DEVTYPE_MAJOR
# Description : Major classification of the type of the debug component as
#               specified in the ARM Architecture Specification for this debug
#               and trace component.
.equ	M33_DEVTYPE_MAJOR_RESET, 0x4
.equ	M33_DEVTYPE_MAJOR_BITS, 0x0000000f
.equ	M33_DEVTYPE_MAJOR_MSB, 3
.equ	M33_DEVTYPE_MAJOR_LSB, 0
# =============================================================================
# Register    : M33_PIDR4
# Description : CoreSight Peripheral ID4
.equ	M33_PIDR4_OFFSET, 0x00042fd0
.equ	M33_PIDR4_BITS, 0x000000ff
.equ	M33_PIDR4_RESET, 0x00000004
# -----------------------------------------------------------------------------
# Field       : M33_PIDR4_SIZE
# Description : Always 0b0000. Indicates that the device only occupies 4KB of
#               memory
.equ	M33_PIDR4_SIZE_RESET, 0x0
.equ	M33_PIDR4_SIZE_BITS, 0x000000f0
.equ	M33_PIDR4_SIZE_MSB, 7
.equ	M33_PIDR4_SIZE_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_PIDR4_DES_2
# Description : Together, PIDR1.DES_0, PIDR2.DES_1, and PIDR4.DES_2 identify
#               the designer of the component.
.equ	M33_PIDR4_DES_2_RESET, 0x4
.equ	M33_PIDR4_DES_2_BITS, 0x0000000f
.equ	M33_PIDR4_DES_2_MSB, 3
.equ	M33_PIDR4_DES_2_LSB, 0
# =============================================================================
# Register    : M33_PIDR5
# Description : CoreSight Peripheral ID5
.equ	M33_PIDR5_OFFSET, 0x00042fd4
.equ	M33_PIDR5_BITS, 0x00000000
.equ	M33_PIDR5_RESET, 0x00000000
.equ	M33_PIDR5_MSB, 31
.equ	M33_PIDR5_LSB, 0
# =============================================================================
# Register    : M33_PIDR6
# Description : CoreSight Peripheral ID6
.equ	M33_PIDR6_OFFSET, 0x00042fd8
.equ	M33_PIDR6_BITS, 0x00000000
.equ	M33_PIDR6_RESET, 0x00000000
.equ	M33_PIDR6_MSB, 31
.equ	M33_PIDR6_LSB, 0
# =============================================================================
# Register    : M33_PIDR7
# Description : CoreSight Peripheral ID7
.equ	M33_PIDR7_OFFSET, 0x00042fdc
.equ	M33_PIDR7_BITS, 0x00000000
.equ	M33_PIDR7_RESET, 0x00000000
.equ	M33_PIDR7_MSB, 31
.equ	M33_PIDR7_LSB, 0
# =============================================================================
# Register    : M33_PIDR0
# Description : CoreSight Peripheral ID0
.equ	M33_PIDR0_OFFSET, 0x00042fe0
.equ	M33_PIDR0_BITS, 0x000000ff
.equ	M33_PIDR0_RESET, 0x00000021
# -----------------------------------------------------------------------------
# Field       : M33_PIDR0_PART_0
# Description : Bits[7:0] of the 12-bit part number of the component. The
#               designer of the component assigns this part number.
.equ	M33_PIDR0_PART_0_RESET, 0x21
.equ	M33_PIDR0_PART_0_BITS, 0x000000ff
.equ	M33_PIDR0_PART_0_MSB, 7
.equ	M33_PIDR0_PART_0_LSB, 0
# =============================================================================
# Register    : M33_PIDR1
# Description : CoreSight Peripheral ID1
.equ	M33_PIDR1_OFFSET, 0x00042fe4
.equ	M33_PIDR1_BITS, 0x000000ff
.equ	M33_PIDR1_RESET, 0x000000bd
# -----------------------------------------------------------------------------
# Field       : M33_PIDR1_DES_0
# Description : Together, PIDR1.DES_0, PIDR2.DES_1, and PIDR4.DES_2 identify
#               the designer of the component.
.equ	M33_PIDR1_DES_0_RESET, 0xb
.equ	M33_PIDR1_DES_0_BITS, 0x000000f0
.equ	M33_PIDR1_DES_0_MSB, 7
.equ	M33_PIDR1_DES_0_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_PIDR1_PART_1
# Description : Bits[11:8] of the 12-bit part number of the component. The
#               designer of the component assigns this part number.
.equ	M33_PIDR1_PART_1_RESET, 0xd
.equ	M33_PIDR1_PART_1_BITS, 0x0000000f
.equ	M33_PIDR1_PART_1_MSB, 3
.equ	M33_PIDR1_PART_1_LSB, 0
# =============================================================================
# Register    : M33_PIDR2
# Description : CoreSight Peripheral ID2
.equ	M33_PIDR2_OFFSET, 0x00042fe8
.equ	M33_PIDR2_BITS, 0x000000ff
.equ	M33_PIDR2_RESET, 0x0000000b
# -----------------------------------------------------------------------------
# Field       : M33_PIDR2_REVISION
# Description : This device is at r1p0
.equ	M33_PIDR2_REVISION_RESET, 0x0
.equ	M33_PIDR2_REVISION_BITS, 0x000000f0
.equ	M33_PIDR2_REVISION_MSB, 7
.equ	M33_PIDR2_REVISION_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_PIDR2_JEDEC
# Description : Always 1. Indicates that the JEDEC-assigned designer ID is
#               used.
.equ	M33_PIDR2_JEDEC_RESET, 0x1
.equ	M33_PIDR2_JEDEC_BITS, 0x00000008
.equ	M33_PIDR2_JEDEC_MSB, 3
.equ	M33_PIDR2_JEDEC_LSB, 3
# -----------------------------------------------------------------------------
# Field       : M33_PIDR2_DES_1
# Description : Together, PIDR1.DES_0, PIDR2.DES_1, and PIDR4.DES_2 identify
#               the designer of the component.
.equ	M33_PIDR2_DES_1_RESET, 0x3
.equ	M33_PIDR2_DES_1_BITS, 0x00000007
.equ	M33_PIDR2_DES_1_MSB, 2
.equ	M33_PIDR2_DES_1_LSB, 0
# =============================================================================
# Register    : M33_PIDR3
# Description : CoreSight Peripheral ID3
.equ	M33_PIDR3_OFFSET, 0x00042fec
.equ	M33_PIDR3_BITS, 0x000000ff
.equ	M33_PIDR3_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : M33_PIDR3_REVAND
# Description : Indicates minor errata fixes specific to the revision of the
#               component being used, for example metal fixes after
#               implementation. In most cases, this field is 0b0000. ARM
#               recommends that the component designers ensure that a metal fix
#               can change this field if required, for example, by driving it
#               from registers that reset to 0b0000.
.equ	M33_PIDR3_REVAND_RESET, 0x0
.equ	M33_PIDR3_REVAND_BITS, 0x000000f0
.equ	M33_PIDR3_REVAND_MSB, 7
.equ	M33_PIDR3_REVAND_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_PIDR3_CMOD
# Description : Customer Modified. Indicates whether the customer has modified
#               the behavior of the component. In most cases, this field is
#               0b0000. Customers change this value when they make authorized
#               modifications to this component.
.equ	M33_PIDR3_CMOD_RESET, 0x0
.equ	M33_PIDR3_CMOD_BITS, 0x0000000f
.equ	M33_PIDR3_CMOD_MSB, 3
.equ	M33_PIDR3_CMOD_LSB, 0
# =============================================================================
# Register    : M33_CIDR0
# Description : CoreSight Component ID0
.equ	M33_CIDR0_OFFSET, 0x00042ff0
.equ	M33_CIDR0_BITS, 0x000000ff
.equ	M33_CIDR0_RESET, 0x0000000d
# -----------------------------------------------------------------------------
# Field       : M33_CIDR0_PRMBL_0
# Description : Preamble[0]. Contains bits[7:0] of the component identification
#               code
.equ	M33_CIDR0_PRMBL_0_RESET, 0x0d
.equ	M33_CIDR0_PRMBL_0_BITS, 0x000000ff
.equ	M33_CIDR0_PRMBL_0_MSB, 7
.equ	M33_CIDR0_PRMBL_0_LSB, 0
# =============================================================================
# Register    : M33_CIDR1
# Description : CoreSight Component ID1
.equ	M33_CIDR1_OFFSET, 0x00042ff4
.equ	M33_CIDR1_BITS, 0x000000ff
.equ	M33_CIDR1_RESET, 0x00000090
# -----------------------------------------------------------------------------
# Field       : M33_CIDR1_CLASS
# Description : Class of the component, for example, whether the component is a
#               ROM table or a generic CoreSight component. Contains
#               bits[15:12] of the component identification code.
.equ	M33_CIDR1_CLASS_RESET, 0x9
.equ	M33_CIDR1_CLASS_BITS, 0x000000f0
.equ	M33_CIDR1_CLASS_MSB, 7
.equ	M33_CIDR1_CLASS_LSB, 4
# -----------------------------------------------------------------------------
# Field       : M33_CIDR1_PRMBL_1
# Description : Preamble[1]. Contains bits[11:8] of the component
#               identification code.
.equ	M33_CIDR1_PRMBL_1_RESET, 0x0
.equ	M33_CIDR1_PRMBL_1_BITS, 0x0000000f
.equ	M33_CIDR1_PRMBL_1_MSB, 3
.equ	M33_CIDR1_PRMBL_1_LSB, 0
# =============================================================================
# Register    : M33_CIDR2
# Description : CoreSight Component ID2
.equ	M33_CIDR2_OFFSET, 0x00042ff8
.equ	M33_CIDR2_BITS, 0x000000ff
.equ	M33_CIDR2_RESET, 0x00000005
# -----------------------------------------------------------------------------
# Field       : M33_CIDR2_PRMBL_2
# Description : Preamble[2]. Contains bits[23:16] of the component
#               identification code.
.equ	M33_CIDR2_PRMBL_2_RESET, 0x05
.equ	M33_CIDR2_PRMBL_2_BITS, 0x000000ff
.equ	M33_CIDR2_PRMBL_2_MSB, 7
.equ	M33_CIDR2_PRMBL_2_LSB, 0
# =============================================================================
# Register    : M33_CIDR3
# Description : CoreSight Component ID3
.equ	M33_CIDR3_OFFSET, 0x00042ffc
.equ	M33_CIDR3_BITS, 0x000000ff
.equ	M33_CIDR3_RESET, 0x000000b1
# -----------------------------------------------------------------------------
# Field       : M33_CIDR3_PRMBL_3
# Description : Preamble[3]. Contains bits[31:24] of the component
#               identification code.
.equ	M33_CIDR3_PRMBL_3_RESET, 0xb1
.equ	M33_CIDR3_PRMBL_3_BITS, 0x000000ff
.equ	M33_CIDR3_PRMBL_3_MSB, 7
.equ	M33_CIDR3_PRMBL_3_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_M33_H
