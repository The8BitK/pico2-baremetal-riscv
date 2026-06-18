#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : TRNG
# Version        : 1
# Bus type       : apb
# Description    : ARM TrustZone RNG register block
# =============================================================================
.ifndef	_HARDWARE_REGS_TRNG_H
.set	_HARDWARE_REGS_TRNG_H, 1
# =============================================================================
# Register    : TRNG_RNG_IMR
# Description : Interrupt masking.
.equ	TRNG_RNG_IMR_OFFSET, 0x00000100
.equ	TRNG_RNG_IMR_BITS, 0xffffffff
.equ	TRNG_RNG_IMR_RESET, 0x0000000f
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_IMR_RESERVED
# Description : RESERVED
.equ	TRNG_RNG_IMR_RESERVED_RESET, 0x0000000
.equ	TRNG_RNG_IMR_RESERVED_BITS, 0xfffffff0
.equ	TRNG_RNG_IMR_RESERVED_MSB, 31
.equ	TRNG_RNG_IMR_RESERVED_LSB, 4
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_IMR_VN_ERR_INT_MASK
# Description : 1'b1-mask interrupt, no interrupt will be generated. See
#               RNG_ISR for an explanation on this interrupt.
.equ	TRNG_RNG_IMR_VN_ERR_INT_MASK_RESET, 0x1
.equ	TRNG_RNG_IMR_VN_ERR_INT_MASK_BITS, 0x00000008
.equ	TRNG_RNG_IMR_VN_ERR_INT_MASK_MSB, 3
.equ	TRNG_RNG_IMR_VN_ERR_INT_MASK_LSB, 3
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_IMR_CRNGT_ERR_INT_MASK
# Description : 1'b1-mask interrupt, no interrupt will be generated. See
#               RNG_ISR for an explanation on this interrupt.
.equ	TRNG_RNG_IMR_CRNGT_ERR_INT_MASK_RESET, 0x1
.equ	TRNG_RNG_IMR_CRNGT_ERR_INT_MASK_BITS, 0x00000004
.equ	TRNG_RNG_IMR_CRNGT_ERR_INT_MASK_MSB, 2
.equ	TRNG_RNG_IMR_CRNGT_ERR_INT_MASK_LSB, 2
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_IMR_AUTOCORR_ERR_INT_MASK
# Description : 1'b1-mask interrupt, no interrupt will be generated. See
#               RNG_ISR for an explanation on this interrupt.
.equ	TRNG_RNG_IMR_AUTOCORR_ERR_INT_MASK_RESET, 0x1
.equ	TRNG_RNG_IMR_AUTOCORR_ERR_INT_MASK_BITS, 0x00000002
.equ	TRNG_RNG_IMR_AUTOCORR_ERR_INT_MASK_MSB, 1
.equ	TRNG_RNG_IMR_AUTOCORR_ERR_INT_MASK_LSB, 1
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_IMR_EHR_VALID_INT_MASK
# Description : 1'b1-mask interrupt, no interrupt will be generated. See
#               RNG_ISR for an explanation on this interrupt.
.equ	TRNG_RNG_IMR_EHR_VALID_INT_MASK_RESET, 0x1
.equ	TRNG_RNG_IMR_EHR_VALID_INT_MASK_BITS, 0x00000001
.equ	TRNG_RNG_IMR_EHR_VALID_INT_MASK_MSB, 0
.equ	TRNG_RNG_IMR_EHR_VALID_INT_MASK_LSB, 0
# =============================================================================
# Register    : TRNG_RNG_ISR
# Description : RNG status register. If corresponding RNG_IMR bit is unmasked,
#               an interrupt will be generated.
.equ	TRNG_RNG_ISR_OFFSET, 0x00000104
.equ	TRNG_RNG_ISR_BITS, 0xffffffff
.equ	TRNG_RNG_ISR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_ISR_RESERVED
# Description : RESERVED
.equ	TRNG_RNG_ISR_RESERVED_RESET, 0x0000000
.equ	TRNG_RNG_ISR_RESERVED_BITS, 0xfffffff0
.equ	TRNG_RNG_ISR_RESERVED_MSB, 31
.equ	TRNG_RNG_ISR_RESERVED_LSB, 4
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_ISR_VN_ERR
# Description : 1'b1 indicates Von Neuman error. Error in von Neuman occurs if
#               32 consecutive collected bits are identical, ZERO or ONE.
.equ	TRNG_RNG_ISR_VN_ERR_RESET, 0x0
.equ	TRNG_RNG_ISR_VN_ERR_BITS, 0x00000008
.equ	TRNG_RNG_ISR_VN_ERR_MSB, 3
.equ	TRNG_RNG_ISR_VN_ERR_LSB, 3
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_ISR_CRNGT_ERR
# Description : 1'b1 indicates CRNGT in the RNG test failed. Failure occurs
#               when two consecutive blocks of 16 collected bits are equal.
.equ	TRNG_RNG_ISR_CRNGT_ERR_RESET, 0x0
.equ	TRNG_RNG_ISR_CRNGT_ERR_BITS, 0x00000004
.equ	TRNG_RNG_ISR_CRNGT_ERR_MSB, 2
.equ	TRNG_RNG_ISR_CRNGT_ERR_LSB, 2
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_ISR_AUTOCORR_ERR
# Description : 1'b1 indicates Autocorrelation test failed four times in a row.
#               When set, RNG cease from functioning until next reset.
.equ	TRNG_RNG_ISR_AUTOCORR_ERR_RESET, 0x0
.equ	TRNG_RNG_ISR_AUTOCORR_ERR_BITS, 0x00000002
.equ	TRNG_RNG_ISR_AUTOCORR_ERR_MSB, 1
.equ	TRNG_RNG_ISR_AUTOCORR_ERR_LSB, 1
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_ISR_EHR_VALID
# Description : 1'b1 indicates that 192 bits have been collected in the RNG,
#               and are ready to be read.
.equ	TRNG_RNG_ISR_EHR_VALID_RESET, 0x0
.equ	TRNG_RNG_ISR_EHR_VALID_BITS, 0x00000001
.equ	TRNG_RNG_ISR_EHR_VALID_MSB, 0
.equ	TRNG_RNG_ISR_EHR_VALID_LSB, 0
# =============================================================================
# Register    : TRNG_RNG_ICR
# Description : Interrupt/status bit clear Register.
.equ	TRNG_RNG_ICR_OFFSET, 0x00000108
.equ	TRNG_RNG_ICR_BITS, 0xffffffff
.equ	TRNG_RNG_ICR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_ICR_RESERVED
# Description : RESERVED
.equ	TRNG_RNG_ICR_RESERVED_RESET, 0x0000000
.equ	TRNG_RNG_ICR_RESERVED_BITS, 0xfffffff0
.equ	TRNG_RNG_ICR_RESERVED_MSB, 31
.equ	TRNG_RNG_ICR_RESERVED_LSB, 4
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_ICR_VN_ERR
# Description : Write 1'b1 - clear corresponding bit in RNG_ISR.
.equ	TRNG_RNG_ICR_VN_ERR_RESET, 0x0
.equ	TRNG_RNG_ICR_VN_ERR_BITS, 0x00000008
.equ	TRNG_RNG_ICR_VN_ERR_MSB, 3
.equ	TRNG_RNG_ICR_VN_ERR_LSB, 3
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_ICR_CRNGT_ERR
# Description : Write 1'b1 - clear corresponding bit in RNG_ISR.
.equ	TRNG_RNG_ICR_CRNGT_ERR_RESET, 0x0
.equ	TRNG_RNG_ICR_CRNGT_ERR_BITS, 0x00000004
.equ	TRNG_RNG_ICR_CRNGT_ERR_MSB, 2
.equ	TRNG_RNG_ICR_CRNGT_ERR_LSB, 2
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_ICR_AUTOCORR_ERR
# Description : Cannot be cleared by SW! Only RNG reset clears this bit.
.equ	TRNG_RNG_ICR_AUTOCORR_ERR_RESET, 0x0
.equ	TRNG_RNG_ICR_AUTOCORR_ERR_BITS, 0x00000002
.equ	TRNG_RNG_ICR_AUTOCORR_ERR_MSB, 1
.equ	TRNG_RNG_ICR_AUTOCORR_ERR_LSB, 1
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_ICR_EHR_VALID
# Description : Write 1'b1 - clear corresponding bit in RNG_ISR.
.equ	TRNG_RNG_ICR_EHR_VALID_RESET, 0x0
.equ	TRNG_RNG_ICR_EHR_VALID_BITS, 0x00000001
.equ	TRNG_RNG_ICR_EHR_VALID_MSB, 0
.equ	TRNG_RNG_ICR_EHR_VALID_LSB, 0
# =============================================================================
# Register    : TRNG_TRNG_CONFIG
# Description : Selecting the inverter-chain length.
.equ	TRNG_TRNG_CONFIG_OFFSET, 0x0000010c
.equ	TRNG_TRNG_CONFIG_BITS, 0xffffffff
.equ	TRNG_TRNG_CONFIG_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : TRNG_TRNG_CONFIG_RESERVED
# Description : RESERVED
.equ	TRNG_TRNG_CONFIG_RESERVED_RESET, 0x00000000
.equ	TRNG_TRNG_CONFIG_RESERVED_BITS, 0xfffffffc
.equ	TRNG_TRNG_CONFIG_RESERVED_MSB, 31
.equ	TRNG_TRNG_CONFIG_RESERVED_LSB, 2
# -----------------------------------------------------------------------------
# Field       : TRNG_TRNG_CONFIG_RND_SRC_SEL
# Description : Selects the number of inverters (out of four possible
#               selections) in the ring oscillator (the entropy source).
.equ	TRNG_TRNG_CONFIG_RND_SRC_SEL_RESET, 0x0
.equ	TRNG_TRNG_CONFIG_RND_SRC_SEL_BITS, 0x00000003
.equ	TRNG_TRNG_CONFIG_RND_SRC_SEL_MSB, 1
.equ	TRNG_TRNG_CONFIG_RND_SRC_SEL_LSB, 0
# =============================================================================
# Register    : TRNG_TRNG_VALID
# Description : 192 bit collection indication.
.equ	TRNG_TRNG_VALID_OFFSET, 0x00000110
.equ	TRNG_TRNG_VALID_BITS, 0xffffffff
.equ	TRNG_TRNG_VALID_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : TRNG_TRNG_VALID_RESERVED
# Description : RESERVED
.equ	TRNG_TRNG_VALID_RESERVED_RESET, 0x00000000
.equ	TRNG_TRNG_VALID_RESERVED_BITS, 0xfffffffe
.equ	TRNG_TRNG_VALID_RESERVED_MSB, 31
.equ	TRNG_TRNG_VALID_RESERVED_LSB, 1
# -----------------------------------------------------------------------------
# Field       : TRNG_TRNG_VALID_EHR_VALID
# Description : 1'b1 indicates that collection of bits in the RNG is completed,
#               and data can be read from EHR_DATA register.
.equ	TRNG_TRNG_VALID_EHR_VALID_RESET, 0x0
.equ	TRNG_TRNG_VALID_EHR_VALID_BITS, 0x00000001
.equ	TRNG_TRNG_VALID_EHR_VALID_MSB, 0
.equ	TRNG_TRNG_VALID_EHR_VALID_LSB, 0
# =============================================================================
# Register    : TRNG_EHR_DATA0
# Description : RNG collected bits.
#               Bits [31:0] of Entropy Holding Register (EHR) - RNG output
#               register
.equ	TRNG_EHR_DATA0_OFFSET, 0x00000114
.equ	TRNG_EHR_DATA0_BITS, 0xffffffff
.equ	TRNG_EHR_DATA0_RESET, 0x00000000
.equ	TRNG_EHR_DATA0_MSB, 31
.equ	TRNG_EHR_DATA0_LSB, 0
# =============================================================================
# Register    : TRNG_EHR_DATA1
# Description : RNG collected bits.
#               Bits [63:32] of Entropy Holding Register (EHR) - RNG output
#               register
.equ	TRNG_EHR_DATA1_OFFSET, 0x00000118
.equ	TRNG_EHR_DATA1_BITS, 0xffffffff
.equ	TRNG_EHR_DATA1_RESET, 0x00000000
.equ	TRNG_EHR_DATA1_MSB, 31
.equ	TRNG_EHR_DATA1_LSB, 0
# =============================================================================
# Register    : TRNG_EHR_DATA2
# Description : RNG collected bits.
#               Bits [95:64] of Entropy Holding Register (EHR) - RNG output
#               register
.equ	TRNG_EHR_DATA2_OFFSET, 0x0000011c
.equ	TRNG_EHR_DATA2_BITS, 0xffffffff
.equ	TRNG_EHR_DATA2_RESET, 0x00000000
.equ	TRNG_EHR_DATA2_MSB, 31
.equ	TRNG_EHR_DATA2_LSB, 0
# =============================================================================
# Register    : TRNG_EHR_DATA3
# Description : RNG collected bits.
#               Bits [127:96] of Entropy Holding Register (EHR) - RNG output
#               register
.equ	TRNG_EHR_DATA3_OFFSET, 0x00000120
.equ	TRNG_EHR_DATA3_BITS, 0xffffffff
.equ	TRNG_EHR_DATA3_RESET, 0x00000000
.equ	TRNG_EHR_DATA3_MSB, 31
.equ	TRNG_EHR_DATA3_LSB, 0
# =============================================================================
# Register    : TRNG_EHR_DATA4
# Description : RNG collected bits.
#               Bits [159:128] of Entropy Holding Register (EHR) - RNG output
#               register
.equ	TRNG_EHR_DATA4_OFFSET, 0x00000124
.equ	TRNG_EHR_DATA4_BITS, 0xffffffff
.equ	TRNG_EHR_DATA4_RESET, 0x00000000
.equ	TRNG_EHR_DATA4_MSB, 31
.equ	TRNG_EHR_DATA4_LSB, 0
# =============================================================================
# Register    : TRNG_EHR_DATA5
# Description : RNG collected bits.
#               Bits [191:160] of Entropy Holding Register (EHR) - RNG output
#               register
.equ	TRNG_EHR_DATA5_OFFSET, 0x00000128
.equ	TRNG_EHR_DATA5_BITS, 0xffffffff
.equ	TRNG_EHR_DATA5_RESET, 0x00000000
.equ	TRNG_EHR_DATA5_MSB, 31
.equ	TRNG_EHR_DATA5_LSB, 0
# =============================================================================
# Register    : TRNG_RND_SOURCE_ENABLE
# Description : Enable signal for the random source.
.equ	TRNG_RND_SOURCE_ENABLE_OFFSET, 0x0000012c
.equ	TRNG_RND_SOURCE_ENABLE_BITS, 0xffffffff
.equ	TRNG_RND_SOURCE_ENABLE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : TRNG_RND_SOURCE_ENABLE_RESERVED
# Description : RESERVED
.equ	TRNG_RND_SOURCE_ENABLE_RESERVED_RESET, 0x00000000
.equ	TRNG_RND_SOURCE_ENABLE_RESERVED_BITS, 0xfffffffe
.equ	TRNG_RND_SOURCE_ENABLE_RESERVED_MSB, 31
.equ	TRNG_RND_SOURCE_ENABLE_RESERVED_LSB, 1
# -----------------------------------------------------------------------------
# Field       : TRNG_RND_SOURCE_ENABLE_RND_SRC_EN
# Description : * 1'b1 - entropy source is enabled. *1'b0 - entropy source is
#               disabled
.equ	TRNG_RND_SOURCE_ENABLE_RND_SRC_EN_RESET, 0x0
.equ	TRNG_RND_SOURCE_ENABLE_RND_SRC_EN_BITS, 0x00000001
.equ	TRNG_RND_SOURCE_ENABLE_RND_SRC_EN_MSB, 0
.equ	TRNG_RND_SOURCE_ENABLE_RND_SRC_EN_LSB, 0
# =============================================================================
# Register    : TRNG_SAMPLE_CNT1
# Description : Counts clocks between sampling of random bit.
.equ	TRNG_SAMPLE_CNT1_OFFSET, 0x00000130
.equ	TRNG_SAMPLE_CNT1_BITS, 0xffffffff
.equ	TRNG_SAMPLE_CNT1_RESET, 0x0000ffff
# -----------------------------------------------------------------------------
# Field       : TRNG_SAMPLE_CNT1_SAMPLE_CNTR1
# Description : Sets the number of rng_clk cycles between two consecutive ring
#               oscillator samples. Note! If the Von-Neuman is bypassed, the
#               minimum value for sample counter must not be less then decimal
#               seventeen
.equ	TRNG_SAMPLE_CNT1_SAMPLE_CNTR1_RESET, 0x0000ffff
.equ	TRNG_SAMPLE_CNT1_SAMPLE_CNTR1_BITS, 0xffffffff
.equ	TRNG_SAMPLE_CNT1_SAMPLE_CNTR1_MSB, 31
.equ	TRNG_SAMPLE_CNT1_SAMPLE_CNTR1_LSB, 0
# =============================================================================
# Register    : TRNG_AUTOCORR_STATISTIC
# Description : Statistic about Autocorrelation test activations.
.equ	TRNG_AUTOCORR_STATISTIC_OFFSET, 0x00000134
.equ	TRNG_AUTOCORR_STATISTIC_BITS, 0xffffffff
.equ	TRNG_AUTOCORR_STATISTIC_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : TRNG_AUTOCORR_STATISTIC_RESERVED
# Description : RESERVED
.equ	TRNG_AUTOCORR_STATISTIC_RESERVED_RESET, 0x000
.equ	TRNG_AUTOCORR_STATISTIC_RESERVED_BITS, 0xffc00000
.equ	TRNG_AUTOCORR_STATISTIC_RESERVED_MSB, 31
.equ	TRNG_AUTOCORR_STATISTIC_RESERVED_LSB, 22
# -----------------------------------------------------------------------------
# Field       : TRNG_AUTOCORR_STATISTIC_AUTOCORR_FAILS
# Description : Count each time an autocorrelation test fails. Any write to the
#               register reset the counter. Stop collecting statistic if one of
#               the counters reached the limit.
.equ	TRNG_AUTOCORR_STATISTIC_AUTOCORR_FAILS_RESET, 0x00
.equ	TRNG_AUTOCORR_STATISTIC_AUTOCORR_FAILS_BITS, 0x003fc000
.equ	TRNG_AUTOCORR_STATISTIC_AUTOCORR_FAILS_MSB, 21
.equ	TRNG_AUTOCORR_STATISTIC_AUTOCORR_FAILS_LSB, 14
# -----------------------------------------------------------------------------
# Field       : TRNG_AUTOCORR_STATISTIC_AUTOCORR_TRYS
# Description : Count each time an autocorrelation test starts. Any write to
#               the register reset the counter. Stop collecting statistic if
#               one of the counters reached the limit.
.equ	TRNG_AUTOCORR_STATISTIC_AUTOCORR_TRYS_RESET, 0x0000
.equ	TRNG_AUTOCORR_STATISTIC_AUTOCORR_TRYS_BITS, 0x00003fff
.equ	TRNG_AUTOCORR_STATISTIC_AUTOCORR_TRYS_MSB, 13
.equ	TRNG_AUTOCORR_STATISTIC_AUTOCORR_TRYS_LSB, 0
# =============================================================================
# Register    : TRNG_TRNG_DEBUG_CONTROL
# Description : Debug register.
.equ	TRNG_TRNG_DEBUG_CONTROL_OFFSET, 0x00000138
.equ	TRNG_TRNG_DEBUG_CONTROL_BITS, 0x0000000f
.equ	TRNG_TRNG_DEBUG_CONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : TRNG_TRNG_DEBUG_CONTROL_AUTO_CORRELATE_BYPASS
# Description : When set, the autocorrelation test in the TRNG module is
#               bypassed.
.equ	TRNG_TRNG_DEBUG_CONTROL_AUTO_CORRELATE_BYPASS_RESET, 0x0
.equ	TRNG_TRNG_DEBUG_CONTROL_AUTO_CORRELATE_BYPASS_BITS, 0x00000008
.equ	TRNG_TRNG_DEBUG_CONTROL_AUTO_CORRELATE_BYPASS_MSB, 3
.equ	TRNG_TRNG_DEBUG_CONTROL_AUTO_CORRELATE_BYPASS_LSB, 3
# -----------------------------------------------------------------------------
# Field       : TRNG_TRNG_DEBUG_CONTROL_TRNG_CRNGT_BYPASS
# Description : When set, the CRNGT test in the RNG is bypassed.
.equ	TRNG_TRNG_DEBUG_CONTROL_TRNG_CRNGT_BYPASS_RESET, 0x0
.equ	TRNG_TRNG_DEBUG_CONTROL_TRNG_CRNGT_BYPASS_BITS, 0x00000004
.equ	TRNG_TRNG_DEBUG_CONTROL_TRNG_CRNGT_BYPASS_MSB, 2
.equ	TRNG_TRNG_DEBUG_CONTROL_TRNG_CRNGT_BYPASS_LSB, 2
# -----------------------------------------------------------------------------
# Field       : TRNG_TRNG_DEBUG_CONTROL_VNC_BYPASS
# Description : When set, the Von-Neuman balancer is bypassed (including the 32
#               consecutive bits test).
.equ	TRNG_TRNG_DEBUG_CONTROL_VNC_BYPASS_RESET, 0x0
.equ	TRNG_TRNG_DEBUG_CONTROL_VNC_BYPASS_BITS, 0x00000002
.equ	TRNG_TRNG_DEBUG_CONTROL_VNC_BYPASS_MSB, 1
.equ	TRNG_TRNG_DEBUG_CONTROL_VNC_BYPASS_LSB, 1
# -----------------------------------------------------------------------------
# Field       : TRNG_TRNG_DEBUG_CONTROL_RESERVED
# Description : N/A
.equ	TRNG_TRNG_DEBUG_CONTROL_RESERVED_RESET, 0x0
.equ	TRNG_TRNG_DEBUG_CONTROL_RESERVED_BITS, 0x00000001
.equ	TRNG_TRNG_DEBUG_CONTROL_RESERVED_MSB, 0
.equ	TRNG_TRNG_DEBUG_CONTROL_RESERVED_LSB, 0
# =============================================================================
# Register    : TRNG_TRNG_SW_RESET
# Description : Generate internal SW reset within the RNG block.
.equ	TRNG_TRNG_SW_RESET_OFFSET, 0x00000140
.equ	TRNG_TRNG_SW_RESET_BITS, 0xffffffff
.equ	TRNG_TRNG_SW_RESET_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : TRNG_TRNG_SW_RESET_RESERVED
# Description : RESERVED
.equ	TRNG_TRNG_SW_RESET_RESERVED_RESET, 0x00000000
.equ	TRNG_TRNG_SW_RESET_RESERVED_BITS, 0xfffffffe
.equ	TRNG_TRNG_SW_RESET_RESERVED_MSB, 31
.equ	TRNG_TRNG_SW_RESET_RESERVED_LSB, 1
# -----------------------------------------------------------------------------
# Field       : TRNG_TRNG_SW_RESET_TRNG_SW_RESET
# Description : Writing 1'b1 to this register causes an internal RNG reset.
.equ	TRNG_TRNG_SW_RESET_TRNG_SW_RESET_RESET, 0x0
.equ	TRNG_TRNG_SW_RESET_TRNG_SW_RESET_BITS, 0x00000001
.equ	TRNG_TRNG_SW_RESET_TRNG_SW_RESET_MSB, 0
.equ	TRNG_TRNG_SW_RESET_TRNG_SW_RESET_LSB, 0
# =============================================================================
# Register    : TRNG_RNG_DEBUG_EN_INPUT
# Description : Enable the RNG debug mode
.equ	TRNG_RNG_DEBUG_EN_INPUT_OFFSET, 0x000001b4
.equ	TRNG_RNG_DEBUG_EN_INPUT_BITS, 0xffffffff
.equ	TRNG_RNG_DEBUG_EN_INPUT_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_DEBUG_EN_INPUT_RESERVED
# Description : RESERVED
.equ	TRNG_RNG_DEBUG_EN_INPUT_RESERVED_RESET, 0x00000000
.equ	TRNG_RNG_DEBUG_EN_INPUT_RESERVED_BITS, 0xfffffffe
.equ	TRNG_RNG_DEBUG_EN_INPUT_RESERVED_MSB, 31
.equ	TRNG_RNG_DEBUG_EN_INPUT_RESERVED_LSB, 1
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_DEBUG_EN_INPUT_RNG_DEBUG_EN
# Description : * 1'b1 - debug mode is enabled. *1'b0 - debug mode is disabled
.equ	TRNG_RNG_DEBUG_EN_INPUT_RNG_DEBUG_EN_RESET, 0x0
.equ	TRNG_RNG_DEBUG_EN_INPUT_RNG_DEBUG_EN_BITS, 0x00000001
.equ	TRNG_RNG_DEBUG_EN_INPUT_RNG_DEBUG_EN_MSB, 0
.equ	TRNG_RNG_DEBUG_EN_INPUT_RNG_DEBUG_EN_LSB, 0
# =============================================================================
# Register    : TRNG_TRNG_BUSY
# Description : RNG Busy indication.
.equ	TRNG_TRNG_BUSY_OFFSET, 0x000001b8
.equ	TRNG_TRNG_BUSY_BITS, 0xffffffff
.equ	TRNG_TRNG_BUSY_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : TRNG_TRNG_BUSY_RESERVED
# Description : RESERVED
.equ	TRNG_TRNG_BUSY_RESERVED_RESET, 0x00000000
.equ	TRNG_TRNG_BUSY_RESERVED_BITS, 0xfffffffe
.equ	TRNG_TRNG_BUSY_RESERVED_MSB, 31
.equ	TRNG_TRNG_BUSY_RESERVED_LSB, 1
# -----------------------------------------------------------------------------
# Field       : TRNG_TRNG_BUSY_TRNG_BUSY
# Description : Reflects rng_busy status.
.equ	TRNG_TRNG_BUSY_TRNG_BUSY_RESET, 0x0
.equ	TRNG_TRNG_BUSY_TRNG_BUSY_BITS, 0x00000001
.equ	TRNG_TRNG_BUSY_TRNG_BUSY_MSB, 0
.equ	TRNG_TRNG_BUSY_TRNG_BUSY_LSB, 0
# =============================================================================
# Register    : TRNG_RST_BITS_COUNTER
# Description : Reset the counter of collected bits in the RNG.
.equ	TRNG_RST_BITS_COUNTER_OFFSET, 0x000001bc
.equ	TRNG_RST_BITS_COUNTER_BITS, 0xffffffff
.equ	TRNG_RST_BITS_COUNTER_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : TRNG_RST_BITS_COUNTER_RESERVED
# Description : RESERVED
.equ	TRNG_RST_BITS_COUNTER_RESERVED_RESET, 0x00000000
.equ	TRNG_RST_BITS_COUNTER_RESERVED_BITS, 0xfffffffe
.equ	TRNG_RST_BITS_COUNTER_RESERVED_MSB, 31
.equ	TRNG_RST_BITS_COUNTER_RESERVED_LSB, 1
# -----------------------------------------------------------------------------
# Field       : TRNG_RST_BITS_COUNTER_RST_BITS_COUNTER
# Description : Writing any value to this address will reset the bits counter
#               and RNG valid registers. RND_SORCE_ENABLE register must be
#               unset in order for the reset to take place.
.equ	TRNG_RST_BITS_COUNTER_RST_BITS_COUNTER_RESET, 0x0
.equ	TRNG_RST_BITS_COUNTER_RST_BITS_COUNTER_BITS, 0x00000001
.equ	TRNG_RST_BITS_COUNTER_RST_BITS_COUNTER_MSB, 0
.equ	TRNG_RST_BITS_COUNTER_RST_BITS_COUNTER_LSB, 0
# =============================================================================
# Register    : TRNG_RNG_VERSION
# Description : Displays the version settings of the TRNG.
.equ	TRNG_RNG_VERSION_OFFSET, 0x000001c0
.equ	TRNG_RNG_VERSION_BITS, 0xffffffff
.equ	TRNG_RNG_VERSION_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_VERSION_RESERVED
# Description : RESERVED
.equ	TRNG_RNG_VERSION_RESERVED_RESET, 0x000000
.equ	TRNG_RNG_VERSION_RESERVED_BITS, 0xffffff00
.equ	TRNG_RNG_VERSION_RESERVED_MSB, 31
.equ	TRNG_RNG_VERSION_RESERVED_LSB, 8
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_VERSION_RNG_USE_5_SBOXES
# Description : * 1'b1 - 5 SBOX AES. *1'b0 - 20 SBOX AES
.equ	TRNG_RNG_VERSION_RNG_USE_5_SBOXES_RESET, 0x0
.equ	TRNG_RNG_VERSION_RNG_USE_5_SBOXES_BITS, 0x00000080
.equ	TRNG_RNG_VERSION_RNG_USE_5_SBOXES_MSB, 7
.equ	TRNG_RNG_VERSION_RNG_USE_5_SBOXES_LSB, 7
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_VERSION_RESEEDING_EXISTS
# Description : * 1'b1 - Exists. *1'b0 - Does not exist
.equ	TRNG_RNG_VERSION_RESEEDING_EXISTS_RESET, 0x0
.equ	TRNG_RNG_VERSION_RESEEDING_EXISTS_BITS, 0x00000040
.equ	TRNG_RNG_VERSION_RESEEDING_EXISTS_MSB, 6
.equ	TRNG_RNG_VERSION_RESEEDING_EXISTS_LSB, 6
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_VERSION_KAT_EXISTS
# Description : * 1'b1 - Exists. *1'b0 - Does not exist
.equ	TRNG_RNG_VERSION_KAT_EXISTS_RESET, 0x0
.equ	TRNG_RNG_VERSION_KAT_EXISTS_BITS, 0x00000020
.equ	TRNG_RNG_VERSION_KAT_EXISTS_MSB, 5
.equ	TRNG_RNG_VERSION_KAT_EXISTS_LSB, 5
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_VERSION_PRNG_EXISTS
# Description : * 1'b1 - Exists. *1'b0 - Does not exist
.equ	TRNG_RNG_VERSION_PRNG_EXISTS_RESET, 0x0
.equ	TRNG_RNG_VERSION_PRNG_EXISTS_BITS, 0x00000010
.equ	TRNG_RNG_VERSION_PRNG_EXISTS_MSB, 4
.equ	TRNG_RNG_VERSION_PRNG_EXISTS_LSB, 4
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_VERSION_TRNG_TESTS_BYPASS_EN
# Description : * 1'b1 - Exists. *1'b0 - Does not exist
.equ	TRNG_RNG_VERSION_TRNG_TESTS_BYPASS_EN_RESET, 0x0
.equ	TRNG_RNG_VERSION_TRNG_TESTS_BYPASS_EN_BITS, 0x00000008
.equ	TRNG_RNG_VERSION_TRNG_TESTS_BYPASS_EN_MSB, 3
.equ	TRNG_RNG_VERSION_TRNG_TESTS_BYPASS_EN_LSB, 3
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_VERSION_AUTOCORR_EXISTS
# Description : * 1'b1 - Exists. *1'b0 - Does not exist
.equ	TRNG_RNG_VERSION_AUTOCORR_EXISTS_RESET, 0x0
.equ	TRNG_RNG_VERSION_AUTOCORR_EXISTS_BITS, 0x00000004
.equ	TRNG_RNG_VERSION_AUTOCORR_EXISTS_MSB, 2
.equ	TRNG_RNG_VERSION_AUTOCORR_EXISTS_LSB, 2
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_VERSION_CRNGT_EXISTS
# Description : * 1'b1 - Exists. *1'b0 - Does not exist
.equ	TRNG_RNG_VERSION_CRNGT_EXISTS_RESET, 0x0
.equ	TRNG_RNG_VERSION_CRNGT_EXISTS_BITS, 0x00000002
.equ	TRNG_RNG_VERSION_CRNGT_EXISTS_MSB, 1
.equ	TRNG_RNG_VERSION_CRNGT_EXISTS_LSB, 1
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_VERSION_EHR_WIDTH_192
# Description : * 1'b1 - 192-bit EHR. *1'b0 - 128-bit EHR
.equ	TRNG_RNG_VERSION_EHR_WIDTH_192_RESET, 0x0
.equ	TRNG_RNG_VERSION_EHR_WIDTH_192_BITS, 0x00000001
.equ	TRNG_RNG_VERSION_EHR_WIDTH_192_MSB, 0
.equ	TRNG_RNG_VERSION_EHR_WIDTH_192_LSB, 0
# =============================================================================
# Register    : TRNG_RNG_BIST_CNTR_0
# Description : Collected BIST results.
.equ	TRNG_RNG_BIST_CNTR_0_OFFSET, 0x000001e0
.equ	TRNG_RNG_BIST_CNTR_0_BITS, 0xffffffff
.equ	TRNG_RNG_BIST_CNTR_0_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_BIST_CNTR_0_RESERVED
# Description : RESERVED
.equ	TRNG_RNG_BIST_CNTR_0_RESERVED_RESET, 0x000
.equ	TRNG_RNG_BIST_CNTR_0_RESERVED_BITS, 0xffc00000
.equ	TRNG_RNG_BIST_CNTR_0_RESERVED_MSB, 31
.equ	TRNG_RNG_BIST_CNTR_0_RESERVED_LSB, 22
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_BIST_CNTR_0_ROSC_CNTR_VAL
# Description : Reflects the results of RNG BIST counter.
.equ	TRNG_RNG_BIST_CNTR_0_ROSC_CNTR_VAL_RESET, 0x000000
.equ	TRNG_RNG_BIST_CNTR_0_ROSC_CNTR_VAL_BITS, 0x003fffff
.equ	TRNG_RNG_BIST_CNTR_0_ROSC_CNTR_VAL_MSB, 21
.equ	TRNG_RNG_BIST_CNTR_0_ROSC_CNTR_VAL_LSB, 0
# =============================================================================
# Register    : TRNG_RNG_BIST_CNTR_1
# Description : Collected BIST results.
.equ	TRNG_RNG_BIST_CNTR_1_OFFSET, 0x000001e4
.equ	TRNG_RNG_BIST_CNTR_1_BITS, 0xffffffff
.equ	TRNG_RNG_BIST_CNTR_1_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_BIST_CNTR_1_RESERVED
# Description : RESERVED
.equ	TRNG_RNG_BIST_CNTR_1_RESERVED_RESET, 0x000
.equ	TRNG_RNG_BIST_CNTR_1_RESERVED_BITS, 0xffc00000
.equ	TRNG_RNG_BIST_CNTR_1_RESERVED_MSB, 31
.equ	TRNG_RNG_BIST_CNTR_1_RESERVED_LSB, 22
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_BIST_CNTR_1_ROSC_CNTR_VAL
# Description : Reflects the results of RNG BIST counter.
.equ	TRNG_RNG_BIST_CNTR_1_ROSC_CNTR_VAL_RESET, 0x000000
.equ	TRNG_RNG_BIST_CNTR_1_ROSC_CNTR_VAL_BITS, 0x003fffff
.equ	TRNG_RNG_BIST_CNTR_1_ROSC_CNTR_VAL_MSB, 21
.equ	TRNG_RNG_BIST_CNTR_1_ROSC_CNTR_VAL_LSB, 0
# =============================================================================
# Register    : TRNG_RNG_BIST_CNTR_2
# Description : Collected BIST results.
.equ	TRNG_RNG_BIST_CNTR_2_OFFSET, 0x000001e8
.equ	TRNG_RNG_BIST_CNTR_2_BITS, 0xffffffff
.equ	TRNG_RNG_BIST_CNTR_2_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_BIST_CNTR_2_RESERVED
# Description : RESERVED
.equ	TRNG_RNG_BIST_CNTR_2_RESERVED_RESET, 0x000
.equ	TRNG_RNG_BIST_CNTR_2_RESERVED_BITS, 0xffc00000
.equ	TRNG_RNG_BIST_CNTR_2_RESERVED_MSB, 31
.equ	TRNG_RNG_BIST_CNTR_2_RESERVED_LSB, 22
# -----------------------------------------------------------------------------
# Field       : TRNG_RNG_BIST_CNTR_2_ROSC_CNTR_VAL
# Description : Reflects the results of RNG BIST counter.
.equ	TRNG_RNG_BIST_CNTR_2_ROSC_CNTR_VAL_RESET, 0x000000
.equ	TRNG_RNG_BIST_CNTR_2_ROSC_CNTR_VAL_BITS, 0x003fffff
.equ	TRNG_RNG_BIST_CNTR_2_ROSC_CNTR_VAL_MSB, 21
.equ	TRNG_RNG_BIST_CNTR_2_ROSC_CNTR_VAL_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_TRNG_H
