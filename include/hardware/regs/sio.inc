#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
#  =============================================================================
#  Register block : SIO
#  Version        : 1
#  Bus type       : apb
#  Description    : Single-cycle IO block
#                   Provides core-local and inter-core hardware for the two
#                   processors, with single-cycle access.
#  =============================================================================
.ifndef	_HARDWARE_REGS_SIO_H
.set	_HARDWARE_REGS_SIO_H, 1
#  =============================================================================
#  Register    : SIO_CPUID
#  Description : Processor core identifier
#                Value is 0 when read from processor core 0, and 1 when read
#                from processor core 1.
.equ	SIO_CPUID_OFFSET, 0x00000000
.equ	SIO_CPUID_BITS, 0xffffffff
.equ	SIO_CPUID_MSB, 31
.equ	SIO_CPUID_LSB, 0
#  =============================================================================
#  Register    : SIO_GPIO_IN
#  Description : Input value for GPIO0...31.
# 
#                In the Non-secure SIO, Secure-only GPIOs (as per ACCESSCTRL)
#                appear as zero.
.equ	SIO_GPIO_IN_OFFSET, 0x00000004
.equ	SIO_GPIO_IN_BITS, 0xffffffff
.equ	SIO_GPIO_IN_RESET, 0x00000000
.equ	SIO_GPIO_IN_MSB, 31
.equ	SIO_GPIO_IN_LSB, 0
#  =============================================================================
#  Register    : SIO_GPIO_HI_IN
#  Description : Input value on GPIO32...47, QSPI IOs and USB pins
# 
#                In the Non-secure SIO, Secure-only GPIOs (as per ACCESSCTRL)
#                appear as zero.
.equ	SIO_GPIO_HI_IN_OFFSET, 0x00000008
.equ	SIO_GPIO_HI_IN_BITS, 0xff00ffff
.equ	SIO_GPIO_HI_IN_RESET, 0x00000000
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_IN_QSPI_SD
#  Description : Input value on QSPI SD0 (MOSI), SD1 (MISO), SD2 and SD3 pins
.equ	SIO_GPIO_HI_IN_QSPI_SD_RESET, 0x0
.equ	SIO_GPIO_HI_IN_QSPI_SD_BITS, 0xf0000000
.equ	SIO_GPIO_HI_IN_QSPI_SD_MSB, 31
.equ	SIO_GPIO_HI_IN_QSPI_SD_LSB, 28
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_IN_QSPI_CSN
#  Description : Input value on QSPI CSn pin
.equ	SIO_GPIO_HI_IN_QSPI_CSN_RESET, 0x0
.equ	SIO_GPIO_HI_IN_QSPI_CSN_BITS, 0x08000000
.equ	SIO_GPIO_HI_IN_QSPI_CSN_MSB, 27
.equ	SIO_GPIO_HI_IN_QSPI_CSN_LSB, 27
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_IN_QSPI_SCK
#  Description : Input value on QSPI SCK pin
.equ	SIO_GPIO_HI_IN_QSPI_SCK_RESET, 0x0
.equ	SIO_GPIO_HI_IN_QSPI_SCK_BITS, 0x04000000
.equ	SIO_GPIO_HI_IN_QSPI_SCK_MSB, 26
.equ	SIO_GPIO_HI_IN_QSPI_SCK_LSB, 26
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_IN_USB_DM
#  Description : Input value on USB D- pin
.equ	SIO_GPIO_HI_IN_USB_DM_RESET, 0x0
.equ	SIO_GPIO_HI_IN_USB_DM_BITS, 0x02000000
.equ	SIO_GPIO_HI_IN_USB_DM_MSB, 25
.equ	SIO_GPIO_HI_IN_USB_DM_LSB, 25
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_IN_USB_DP
#  Description : Input value on USB D+ pin
.equ	SIO_GPIO_HI_IN_USB_DP_RESET, 0x0
.equ	SIO_GPIO_HI_IN_USB_DP_BITS, 0x01000000
.equ	SIO_GPIO_HI_IN_USB_DP_MSB, 24
.equ	SIO_GPIO_HI_IN_USB_DP_LSB, 24
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_IN_GPIO
#  Description : Input value on GPIO32...47
.equ	SIO_GPIO_HI_IN_GPIO_RESET, 0x0000
.equ	SIO_GPIO_HI_IN_GPIO_BITS, 0x0000ffff
.equ	SIO_GPIO_HI_IN_GPIO_MSB, 15
.equ	SIO_GPIO_HI_IN_GPIO_LSB, 0
#  =============================================================================
#  Register    : SIO_GPIO_OUT
#  Description : GPIO0...31 output value
#                Set output level (1/0 -> high/low) for GPIO0...31. Reading back
#                gives the last value written, NOT the input value from the
#                pins.
# 
#                If core 0 and core 1 both write to GPIO_OUT simultaneously (or
#                to a SET/CLR/XOR alias), the result is as though the write from
#                core 0 took place first, and the write from core 1 was then
#                applied to that intermediate result.
# 
#                In the Non-secure SIO, Secure-only GPIOs (as per ACCESSCTRL)
#                ignore writes, and their output status reads back as zero. This
#                is also true for SET/CLR/XOR aliases of this register.
.equ	SIO_GPIO_OUT_OFFSET, 0x00000010
.equ	SIO_GPIO_OUT_BITS, 0xffffffff
.equ	SIO_GPIO_OUT_RESET, 0x00000000
.equ	SIO_GPIO_OUT_MSB, 31
.equ	SIO_GPIO_OUT_LSB, 0
#  =============================================================================
#  Register    : SIO_GPIO_HI_OUT
#  Description : Output value for GPIO32...47, QSPI IOs and USB pins.
# 
#                Write to set output level (1/0 -> high/low). Reading back gives
#                the last value written, NOT the input value from the pins. If
#                core 0 and core 1 both write to GPIO_HI_OUT simultaneously (or
#                to a SET/CLR/XOR alias), the result is as though the write from
#                core 0 took place first, and the write from core 1 was then
#                applied to that intermediate result.
# 
#                In the Non-secure SIO, Secure-only GPIOs (as per ACCESSCTRL)
#                ignore writes, and their output status reads back as zero. This
#                is also true for SET/CLR/XOR aliases of this register.
.equ	SIO_GPIO_HI_OUT_OFFSET, 0x00000014
.equ	SIO_GPIO_HI_OUT_BITS, 0xff00ffff
.equ	SIO_GPIO_HI_OUT_RESET, 0x00000000
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OUT_QSPI_SD
#  Description : Output value for QSPI SD0 (MOSI), SD1 (MISO), SD2 and SD3 pins
.equ	SIO_GPIO_HI_OUT_QSPI_SD_RESET, 0x0
.equ	SIO_GPIO_HI_OUT_QSPI_SD_BITS, 0xf0000000
.equ	SIO_GPIO_HI_OUT_QSPI_SD_MSB, 31
.equ	SIO_GPIO_HI_OUT_QSPI_SD_LSB, 28
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OUT_QSPI_CSN
#  Description : Output value for QSPI CSn pin
.equ	SIO_GPIO_HI_OUT_QSPI_CSN_RESET, 0x0
.equ	SIO_GPIO_HI_OUT_QSPI_CSN_BITS, 0x08000000
.equ	SIO_GPIO_HI_OUT_QSPI_CSN_MSB, 27
.equ	SIO_GPIO_HI_OUT_QSPI_CSN_LSB, 27
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OUT_QSPI_SCK
#  Description : Output value for QSPI SCK pin
.equ	SIO_GPIO_HI_OUT_QSPI_SCK_RESET, 0x0
.equ	SIO_GPIO_HI_OUT_QSPI_SCK_BITS, 0x04000000
.equ	SIO_GPIO_HI_OUT_QSPI_SCK_MSB, 26
.equ	SIO_GPIO_HI_OUT_QSPI_SCK_LSB, 26
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OUT_USB_DM
#  Description : Output value for USB D- pin
.equ	SIO_GPIO_HI_OUT_USB_DM_RESET, 0x0
.equ	SIO_GPIO_HI_OUT_USB_DM_BITS, 0x02000000
.equ	SIO_GPIO_HI_OUT_USB_DM_MSB, 25
.equ	SIO_GPIO_HI_OUT_USB_DM_LSB, 25
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OUT_USB_DP
#  Description : Output value for USB D+ pin
.equ	SIO_GPIO_HI_OUT_USB_DP_RESET, 0x0
.equ	SIO_GPIO_HI_OUT_USB_DP_BITS, 0x01000000
.equ	SIO_GPIO_HI_OUT_USB_DP_MSB, 24
.equ	SIO_GPIO_HI_OUT_USB_DP_LSB, 24
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OUT_GPIO
#  Description : Output value for GPIO32...47
.equ	SIO_GPIO_HI_OUT_GPIO_RESET, 0x0000
.equ	SIO_GPIO_HI_OUT_GPIO_BITS, 0x0000ffff
.equ	SIO_GPIO_HI_OUT_GPIO_MSB, 15
.equ	SIO_GPIO_HI_OUT_GPIO_LSB, 0
#  =============================================================================
#  Register    : SIO_GPIO_OUT_SET
#  Description : GPIO0...31 output value set
#                Perform an atomic bit-set on GPIO_OUT, i.e. `GPIO_OUT |= wdata`
.equ	SIO_GPIO_OUT_SET_OFFSET, 0x00000018
.equ	SIO_GPIO_OUT_SET_BITS, 0xffffffff
.equ	SIO_GPIO_OUT_SET_RESET, 0x00000000
.equ	SIO_GPIO_OUT_SET_MSB, 31
.equ	SIO_GPIO_OUT_SET_LSB, 0
#  =============================================================================
#  Register    : SIO_GPIO_HI_OUT_SET
#  Description : Output value set for GPIO32..47, QSPI IOs and USB pins.
#                Perform an atomic bit-set on GPIO_HI_OUT, i.e. `GPIO_HI_OUT |=
#                wdata`
.equ	SIO_GPIO_HI_OUT_SET_OFFSET, 0x0000001c
.equ	SIO_GPIO_HI_OUT_SET_BITS, 0xff00ffff
.equ	SIO_GPIO_HI_OUT_SET_RESET, 0x00000000
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OUT_SET_QSPI_SD
.equ	SIO_GPIO_HI_OUT_SET_QSPI_SD_RESET, 0x0
.equ	SIO_GPIO_HI_OUT_SET_QSPI_SD_BITS, 0xf0000000
.equ	SIO_GPIO_HI_OUT_SET_QSPI_SD_MSB, 31
.equ	SIO_GPIO_HI_OUT_SET_QSPI_SD_LSB, 28
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OUT_SET_QSPI_CSN
.equ	SIO_GPIO_HI_OUT_SET_QSPI_CSN_RESET, 0x0
.equ	SIO_GPIO_HI_OUT_SET_QSPI_CSN_BITS, 0x08000000
.equ	SIO_GPIO_HI_OUT_SET_QSPI_CSN_MSB, 27
.equ	SIO_GPIO_HI_OUT_SET_QSPI_CSN_LSB, 27
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OUT_SET_QSPI_SCK
.equ	SIO_GPIO_HI_OUT_SET_QSPI_SCK_RESET, 0x0
.equ	SIO_GPIO_HI_OUT_SET_QSPI_SCK_BITS, 0x04000000
.equ	SIO_GPIO_HI_OUT_SET_QSPI_SCK_MSB, 26
.equ	SIO_GPIO_HI_OUT_SET_QSPI_SCK_LSB, 26
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OUT_SET_USB_DM
.equ	SIO_GPIO_HI_OUT_SET_USB_DM_RESET, 0x0
.equ	SIO_GPIO_HI_OUT_SET_USB_DM_BITS, 0x02000000
.equ	SIO_GPIO_HI_OUT_SET_USB_DM_MSB, 25
.equ	SIO_GPIO_HI_OUT_SET_USB_DM_LSB, 25
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OUT_SET_USB_DP
.equ	SIO_GPIO_HI_OUT_SET_USB_DP_RESET, 0x0
.equ	SIO_GPIO_HI_OUT_SET_USB_DP_BITS, 0x01000000
.equ	SIO_GPIO_HI_OUT_SET_USB_DP_MSB, 24
.equ	SIO_GPIO_HI_OUT_SET_USB_DP_LSB, 24
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OUT_SET_GPIO
.equ	SIO_GPIO_HI_OUT_SET_GPIO_RESET, 0x0000
.equ	SIO_GPIO_HI_OUT_SET_GPIO_BITS, 0x0000ffff
.equ	SIO_GPIO_HI_OUT_SET_GPIO_MSB, 15
.equ	SIO_GPIO_HI_OUT_SET_GPIO_LSB, 0
#  =============================================================================
#  Register    : SIO_GPIO_OUT_CLR
#  Description : GPIO0...31 output value clear
#                Perform an atomic bit-clear on GPIO_OUT, i.e. `GPIO_OUT &=
#                ~wdata`
.equ	SIO_GPIO_OUT_CLR_OFFSET, 0x00000020
.equ	SIO_GPIO_OUT_CLR_BITS, 0xffffffff
.equ	SIO_GPIO_OUT_CLR_RESET, 0x00000000
.equ	SIO_GPIO_OUT_CLR_MSB, 31
.equ	SIO_GPIO_OUT_CLR_LSB, 0
#  =============================================================================
#  Register    : SIO_GPIO_HI_OUT_CLR
#  Description : Output value clear for GPIO32..47, QSPI IOs and USB pins.
#                Perform an atomic bit-clear on GPIO_HI_OUT, i.e. `GPIO_HI_OUT
#                &= ~wdata`
.equ	SIO_GPIO_HI_OUT_CLR_OFFSET, 0x00000024
.equ	SIO_GPIO_HI_OUT_CLR_BITS, 0xff00ffff
.equ	SIO_GPIO_HI_OUT_CLR_RESET, 0x00000000
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OUT_CLR_QSPI_SD
.equ	SIO_GPIO_HI_OUT_CLR_QSPI_SD_RESET, 0x0
.equ	SIO_GPIO_HI_OUT_CLR_QSPI_SD_BITS, 0xf0000000
.equ	SIO_GPIO_HI_OUT_CLR_QSPI_SD_MSB, 31
.equ	SIO_GPIO_HI_OUT_CLR_QSPI_SD_LSB, 28
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OUT_CLR_QSPI_CSN
.equ	SIO_GPIO_HI_OUT_CLR_QSPI_CSN_RESET, 0x0
.equ	SIO_GPIO_HI_OUT_CLR_QSPI_CSN_BITS, 0x08000000
.equ	SIO_GPIO_HI_OUT_CLR_QSPI_CSN_MSB, 27
.equ	SIO_GPIO_HI_OUT_CLR_QSPI_CSN_LSB, 27
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OUT_CLR_QSPI_SCK
.equ	SIO_GPIO_HI_OUT_CLR_QSPI_SCK_RESET, 0x0
.equ	SIO_GPIO_HI_OUT_CLR_QSPI_SCK_BITS, 0x04000000
.equ	SIO_GPIO_HI_OUT_CLR_QSPI_SCK_MSB, 26
.equ	SIO_GPIO_HI_OUT_CLR_QSPI_SCK_LSB, 26
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OUT_CLR_USB_DM
.equ	SIO_GPIO_HI_OUT_CLR_USB_DM_RESET, 0x0
.equ	SIO_GPIO_HI_OUT_CLR_USB_DM_BITS, 0x02000000
.equ	SIO_GPIO_HI_OUT_CLR_USB_DM_MSB, 25
.equ	SIO_GPIO_HI_OUT_CLR_USB_DM_LSB, 25
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OUT_CLR_USB_DP
.equ	SIO_GPIO_HI_OUT_CLR_USB_DP_RESET, 0x0
.equ	SIO_GPIO_HI_OUT_CLR_USB_DP_BITS, 0x01000000
.equ	SIO_GPIO_HI_OUT_CLR_USB_DP_MSB, 24
.equ	SIO_GPIO_HI_OUT_CLR_USB_DP_LSB, 24
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OUT_CLR_GPIO
.equ	SIO_GPIO_HI_OUT_CLR_GPIO_RESET, 0x0000
.equ	SIO_GPIO_HI_OUT_CLR_GPIO_BITS, 0x0000ffff
.equ	SIO_GPIO_HI_OUT_CLR_GPIO_MSB, 15
.equ	SIO_GPIO_HI_OUT_CLR_GPIO_LSB, 0
#  =============================================================================
#  Register    : SIO_GPIO_OUT_XOR
#  Description : GPIO0...31 output value XOR
#                Perform an atomic bitwise XOR on GPIO_OUT, i.e. `GPIO_OUT ^=
#                wdata`
.equ	SIO_GPIO_OUT_XOR_OFFSET, 0x00000028
.equ	SIO_GPIO_OUT_XOR_BITS, 0xffffffff
.equ	SIO_GPIO_OUT_XOR_RESET, 0x00000000
.equ	SIO_GPIO_OUT_XOR_MSB, 31
.equ	SIO_GPIO_OUT_XOR_LSB, 0
#  =============================================================================
#  Register    : SIO_GPIO_HI_OUT_XOR
#  Description : Output value XOR for GPIO32..47, QSPI IOs and USB pins.
#                Perform an atomic bitwise XOR on GPIO_HI_OUT, i.e. `GPIO_HI_OUT
#                ^= wdata`
.equ	SIO_GPIO_HI_OUT_XOR_OFFSET, 0x0000002c
.equ	SIO_GPIO_HI_OUT_XOR_BITS, 0xff00ffff
.equ	SIO_GPIO_HI_OUT_XOR_RESET, 0x00000000
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OUT_XOR_QSPI_SD
.equ	SIO_GPIO_HI_OUT_XOR_QSPI_SD_RESET, 0x0
.equ	SIO_GPIO_HI_OUT_XOR_QSPI_SD_BITS, 0xf0000000
.equ	SIO_GPIO_HI_OUT_XOR_QSPI_SD_MSB, 31
.equ	SIO_GPIO_HI_OUT_XOR_QSPI_SD_LSB, 28
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OUT_XOR_QSPI_CSN
.equ	SIO_GPIO_HI_OUT_XOR_QSPI_CSN_RESET, 0x0
.equ	SIO_GPIO_HI_OUT_XOR_QSPI_CSN_BITS, 0x08000000
.equ	SIO_GPIO_HI_OUT_XOR_QSPI_CSN_MSB, 27
.equ	SIO_GPIO_HI_OUT_XOR_QSPI_CSN_LSB, 27
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OUT_XOR_QSPI_SCK
.equ	SIO_GPIO_HI_OUT_XOR_QSPI_SCK_RESET, 0x0
.equ	SIO_GPIO_HI_OUT_XOR_QSPI_SCK_BITS, 0x04000000
.equ	SIO_GPIO_HI_OUT_XOR_QSPI_SCK_MSB, 26
.equ	SIO_GPIO_HI_OUT_XOR_QSPI_SCK_LSB, 26
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OUT_XOR_USB_DM
.equ	SIO_GPIO_HI_OUT_XOR_USB_DM_RESET, 0x0
.equ	SIO_GPIO_HI_OUT_XOR_USB_DM_BITS, 0x02000000
.equ	SIO_GPIO_HI_OUT_XOR_USB_DM_MSB, 25
.equ	SIO_GPIO_HI_OUT_XOR_USB_DM_LSB, 25
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OUT_XOR_USB_DP
.equ	SIO_GPIO_HI_OUT_XOR_USB_DP_RESET, 0x0
.equ	SIO_GPIO_HI_OUT_XOR_USB_DP_BITS, 0x01000000
.equ	SIO_GPIO_HI_OUT_XOR_USB_DP_MSB, 24
.equ	SIO_GPIO_HI_OUT_XOR_USB_DP_LSB, 24
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OUT_XOR_GPIO
.equ	SIO_GPIO_HI_OUT_XOR_GPIO_RESET, 0x0000
.equ	SIO_GPIO_HI_OUT_XOR_GPIO_BITS, 0x0000ffff
.equ	SIO_GPIO_HI_OUT_XOR_GPIO_MSB, 15
.equ	SIO_GPIO_HI_OUT_XOR_GPIO_LSB, 0
#  =============================================================================
#  Register    : SIO_GPIO_OE
#  Description : GPIO0...31 output enable
#                Set output enable (1/0 -> output/input) for GPIO0...31. Reading
#                back gives the last value written.
# 
#                If core 0 and core 1 both write to GPIO_OE simultaneously (or
#                to a SET/CLR/XOR alias), the result is as though the write from
#                core 0 took place first, and the write from core 1 was then
#                applied to that intermediate result.
# 
#                In the Non-secure SIO, Secure-only GPIOs (as per ACCESSCTRL)
#                ignore writes, and their output status reads back as zero. This
#                is also true for SET/CLR/XOR aliases of this register.
.equ	SIO_GPIO_OE_OFFSET, 0x00000030
.equ	SIO_GPIO_OE_BITS, 0xffffffff
.equ	SIO_GPIO_OE_RESET, 0x00000000
.equ	SIO_GPIO_OE_MSB, 31
.equ	SIO_GPIO_OE_LSB, 0
#  =============================================================================
#  Register    : SIO_GPIO_HI_OE
#  Description : Output enable value for GPIO32...47, QSPI IOs and USB pins.
# 
#                Write output enable (1/0 -> output/input). Reading back gives
#                the last value written. If core 0 and core 1 both write to
#                GPIO_HI_OE simultaneously (or to a SET/CLR/XOR alias), the
#                result is as though the write from core 0 took place first, and
#                the write from core 1 was then applied to that intermediate
#                result.
# 
#                In the Non-secure SIO, Secure-only GPIOs (as per ACCESSCTRL)
#                ignore writes, and their output status reads back as zero. This
#                is also true for SET/CLR/XOR aliases of this register.
.equ	SIO_GPIO_HI_OE_OFFSET, 0x00000034
.equ	SIO_GPIO_HI_OE_BITS, 0xff00ffff
.equ	SIO_GPIO_HI_OE_RESET, 0x00000000
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OE_QSPI_SD
#  Description : Output enable value for QSPI SD0 (MOSI), SD1 (MISO), SD2 and
#                SD3 pins
.equ	SIO_GPIO_HI_OE_QSPI_SD_RESET, 0x0
.equ	SIO_GPIO_HI_OE_QSPI_SD_BITS, 0xf0000000
.equ	SIO_GPIO_HI_OE_QSPI_SD_MSB, 31
.equ	SIO_GPIO_HI_OE_QSPI_SD_LSB, 28
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OE_QSPI_CSN
#  Description : Output enable value for QSPI CSn pin
.equ	SIO_GPIO_HI_OE_QSPI_CSN_RESET, 0x0
.equ	SIO_GPIO_HI_OE_QSPI_CSN_BITS, 0x08000000
.equ	SIO_GPIO_HI_OE_QSPI_CSN_MSB, 27
.equ	SIO_GPIO_HI_OE_QSPI_CSN_LSB, 27
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OE_QSPI_SCK
#  Description : Output enable value for QSPI SCK pin
.equ	SIO_GPIO_HI_OE_QSPI_SCK_RESET, 0x0
.equ	SIO_GPIO_HI_OE_QSPI_SCK_BITS, 0x04000000
.equ	SIO_GPIO_HI_OE_QSPI_SCK_MSB, 26
.equ	SIO_GPIO_HI_OE_QSPI_SCK_LSB, 26
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OE_USB_DM
#  Description : Output enable value for USB D- pin
.equ	SIO_GPIO_HI_OE_USB_DM_RESET, 0x0
.equ	SIO_GPIO_HI_OE_USB_DM_BITS, 0x02000000
.equ	SIO_GPIO_HI_OE_USB_DM_MSB, 25
.equ	SIO_GPIO_HI_OE_USB_DM_LSB, 25
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OE_USB_DP
#  Description : Output enable value for USB D+ pin
.equ	SIO_GPIO_HI_OE_USB_DP_RESET, 0x0
.equ	SIO_GPIO_HI_OE_USB_DP_BITS, 0x01000000
.equ	SIO_GPIO_HI_OE_USB_DP_MSB, 24
.equ	SIO_GPIO_HI_OE_USB_DP_LSB, 24
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OE_GPIO
#  Description : Output enable value for GPIO32...47
.equ	SIO_GPIO_HI_OE_GPIO_RESET, 0x0000
.equ	SIO_GPIO_HI_OE_GPIO_BITS, 0x0000ffff
.equ	SIO_GPIO_HI_OE_GPIO_MSB, 15
.equ	SIO_GPIO_HI_OE_GPIO_LSB, 0
#  =============================================================================
#  Register    : SIO_GPIO_OE_SET
#  Description : GPIO0...31 output enable set
#                Perform an atomic bit-set on GPIO_OE, i.e. `GPIO_OE |= wdata`
.equ	SIO_GPIO_OE_SET_OFFSET, 0x00000038
.equ	SIO_GPIO_OE_SET_BITS, 0xffffffff
.equ	SIO_GPIO_OE_SET_RESET, 0x00000000
.equ	SIO_GPIO_OE_SET_MSB, 31
.equ	SIO_GPIO_OE_SET_LSB, 0
#  =============================================================================
#  Register    : SIO_GPIO_HI_OE_SET
#  Description : Output enable set for GPIO32...47, QSPI IOs and USB pins.
#                Perform an atomic bit-set on GPIO_HI_OE, i.e. `GPIO_HI_OE |=
#                wdata`
.equ	SIO_GPIO_HI_OE_SET_OFFSET, 0x0000003c
.equ	SIO_GPIO_HI_OE_SET_BITS, 0xff00ffff
.equ	SIO_GPIO_HI_OE_SET_RESET, 0x00000000
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OE_SET_QSPI_SD
.equ	SIO_GPIO_HI_OE_SET_QSPI_SD_RESET, 0x0
.equ	SIO_GPIO_HI_OE_SET_QSPI_SD_BITS, 0xf0000000
.equ	SIO_GPIO_HI_OE_SET_QSPI_SD_MSB, 31
.equ	SIO_GPIO_HI_OE_SET_QSPI_SD_LSB, 28
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OE_SET_QSPI_CSN
.equ	SIO_GPIO_HI_OE_SET_QSPI_CSN_RESET, 0x0
.equ	SIO_GPIO_HI_OE_SET_QSPI_CSN_BITS, 0x08000000
.equ	SIO_GPIO_HI_OE_SET_QSPI_CSN_MSB, 27
.equ	SIO_GPIO_HI_OE_SET_QSPI_CSN_LSB, 27
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OE_SET_QSPI_SCK
.equ	SIO_GPIO_HI_OE_SET_QSPI_SCK_RESET, 0x0
.equ	SIO_GPIO_HI_OE_SET_QSPI_SCK_BITS, 0x04000000
.equ	SIO_GPIO_HI_OE_SET_QSPI_SCK_MSB, 26
.equ	SIO_GPIO_HI_OE_SET_QSPI_SCK_LSB, 26
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OE_SET_USB_DM
.equ	SIO_GPIO_HI_OE_SET_USB_DM_RESET, 0x0
.equ	SIO_GPIO_HI_OE_SET_USB_DM_BITS, 0x02000000
.equ	SIO_GPIO_HI_OE_SET_USB_DM_MSB, 25
.equ	SIO_GPIO_HI_OE_SET_USB_DM_LSB, 25
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OE_SET_USB_DP
.equ	SIO_GPIO_HI_OE_SET_USB_DP_RESET, 0x0
.equ	SIO_GPIO_HI_OE_SET_USB_DP_BITS, 0x01000000
.equ	SIO_GPIO_HI_OE_SET_USB_DP_MSB, 24
.equ	SIO_GPIO_HI_OE_SET_USB_DP_LSB, 24
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OE_SET_GPIO
.equ	SIO_GPIO_HI_OE_SET_GPIO_RESET, 0x0000
.equ	SIO_GPIO_HI_OE_SET_GPIO_BITS, 0x0000ffff
.equ	SIO_GPIO_HI_OE_SET_GPIO_MSB, 15
.equ	SIO_GPIO_HI_OE_SET_GPIO_LSB, 0
#  =============================================================================
#  Register    : SIO_GPIO_OE_CLR
#  Description : GPIO0...31 output enable clear
#                Perform an atomic bit-clear on GPIO_OE, i.e. `GPIO_OE &=
#                ~wdata`
.equ	SIO_GPIO_OE_CLR_OFFSET, 0x00000040
.equ	SIO_GPIO_OE_CLR_BITS, 0xffffffff
.equ	SIO_GPIO_OE_CLR_RESET, 0x00000000
.equ	SIO_GPIO_OE_CLR_MSB, 31
.equ	SIO_GPIO_OE_CLR_LSB, 0
#  =============================================================================
#  Register    : SIO_GPIO_HI_OE_CLR
#  Description : Output enable clear for GPIO32...47, QSPI IOs and USB pins.
#                Perform an atomic bit-clear on GPIO_HI_OE, i.e. `GPIO_HI_OE &=
#                ~wdata`
.equ	SIO_GPIO_HI_OE_CLR_OFFSET, 0x00000044
.equ	SIO_GPIO_HI_OE_CLR_BITS, 0xff00ffff
.equ	SIO_GPIO_HI_OE_CLR_RESET, 0x00000000
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OE_CLR_QSPI_SD
.equ	SIO_GPIO_HI_OE_CLR_QSPI_SD_RESET, 0x0
.equ	SIO_GPIO_HI_OE_CLR_QSPI_SD_BITS, 0xf0000000
.equ	SIO_GPIO_HI_OE_CLR_QSPI_SD_MSB, 31
.equ	SIO_GPIO_HI_OE_CLR_QSPI_SD_LSB, 28
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OE_CLR_QSPI_CSN
.equ	SIO_GPIO_HI_OE_CLR_QSPI_CSN_RESET, 0x0
.equ	SIO_GPIO_HI_OE_CLR_QSPI_CSN_BITS, 0x08000000
.equ	SIO_GPIO_HI_OE_CLR_QSPI_CSN_MSB, 27
.equ	SIO_GPIO_HI_OE_CLR_QSPI_CSN_LSB, 27
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OE_CLR_QSPI_SCK
.equ	SIO_GPIO_HI_OE_CLR_QSPI_SCK_RESET, 0x0
.equ	SIO_GPIO_HI_OE_CLR_QSPI_SCK_BITS, 0x04000000
.equ	SIO_GPIO_HI_OE_CLR_QSPI_SCK_MSB, 26
.equ	SIO_GPIO_HI_OE_CLR_QSPI_SCK_LSB, 26
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OE_CLR_USB_DM
.equ	SIO_GPIO_HI_OE_CLR_USB_DM_RESET, 0x0
.equ	SIO_GPIO_HI_OE_CLR_USB_DM_BITS, 0x02000000
.equ	SIO_GPIO_HI_OE_CLR_USB_DM_MSB, 25
.equ	SIO_GPIO_HI_OE_CLR_USB_DM_LSB, 25
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OE_CLR_USB_DP
.equ	SIO_GPIO_HI_OE_CLR_USB_DP_RESET, 0x0
.equ	SIO_GPIO_HI_OE_CLR_USB_DP_BITS, 0x01000000
.equ	SIO_GPIO_HI_OE_CLR_USB_DP_MSB, 24
.equ	SIO_GPIO_HI_OE_CLR_USB_DP_LSB, 24
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OE_CLR_GPIO
.equ	SIO_GPIO_HI_OE_CLR_GPIO_RESET, 0x0000
.equ	SIO_GPIO_HI_OE_CLR_GPIO_BITS, 0x0000ffff
.equ	SIO_GPIO_HI_OE_CLR_GPIO_MSB, 15
.equ	SIO_GPIO_HI_OE_CLR_GPIO_LSB, 0
#  =============================================================================
#  Register    : SIO_GPIO_OE_XOR
#  Description : GPIO0...31 output enable XOR
#                Perform an atomic bitwise XOR on GPIO_OE, i.e. `GPIO_OE ^=
#                wdata`
.equ	SIO_GPIO_OE_XOR_OFFSET, 0x00000048
.equ	SIO_GPIO_OE_XOR_BITS, 0xffffffff
.equ	SIO_GPIO_OE_XOR_RESET, 0x00000000
.equ	SIO_GPIO_OE_XOR_MSB, 31
.equ	SIO_GPIO_OE_XOR_LSB, 0
#  =============================================================================
#  Register    : SIO_GPIO_HI_OE_XOR
#  Description : Output enable XOR for GPIO32...47, QSPI IOs and USB pins.
#                Perform an atomic bitwise XOR on GPIO_HI_OE, i.e. `GPIO_HI_OE
#                ^= wdata`
.equ	SIO_GPIO_HI_OE_XOR_OFFSET, 0x0000004c
.equ	SIO_GPIO_HI_OE_XOR_BITS, 0xff00ffff
.equ	SIO_GPIO_HI_OE_XOR_RESET, 0x00000000
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OE_XOR_QSPI_SD
.equ	SIO_GPIO_HI_OE_XOR_QSPI_SD_RESET, 0x0
.equ	SIO_GPIO_HI_OE_XOR_QSPI_SD_BITS, 0xf0000000
.equ	SIO_GPIO_HI_OE_XOR_QSPI_SD_MSB, 31
.equ	SIO_GPIO_HI_OE_XOR_QSPI_SD_LSB, 28
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OE_XOR_QSPI_CSN
.equ	SIO_GPIO_HI_OE_XOR_QSPI_CSN_RESET, 0x0
.equ	SIO_GPIO_HI_OE_XOR_QSPI_CSN_BITS, 0x08000000
.equ	SIO_GPIO_HI_OE_XOR_QSPI_CSN_MSB, 27
.equ	SIO_GPIO_HI_OE_XOR_QSPI_CSN_LSB, 27
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OE_XOR_QSPI_SCK
.equ	SIO_GPIO_HI_OE_XOR_QSPI_SCK_RESET, 0x0
.equ	SIO_GPIO_HI_OE_XOR_QSPI_SCK_BITS, 0x04000000
.equ	SIO_GPIO_HI_OE_XOR_QSPI_SCK_MSB, 26
.equ	SIO_GPIO_HI_OE_XOR_QSPI_SCK_LSB, 26
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OE_XOR_USB_DM
.equ	SIO_GPIO_HI_OE_XOR_USB_DM_RESET, 0x0
.equ	SIO_GPIO_HI_OE_XOR_USB_DM_BITS, 0x02000000
.equ	SIO_GPIO_HI_OE_XOR_USB_DM_MSB, 25
.equ	SIO_GPIO_HI_OE_XOR_USB_DM_LSB, 25
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OE_XOR_USB_DP
.equ	SIO_GPIO_HI_OE_XOR_USB_DP_RESET, 0x0
.equ	SIO_GPIO_HI_OE_XOR_USB_DP_BITS, 0x01000000
.equ	SIO_GPIO_HI_OE_XOR_USB_DP_MSB, 24
.equ	SIO_GPIO_HI_OE_XOR_USB_DP_LSB, 24
#  -----------------------------------------------------------------------------
#  Field       : SIO_GPIO_HI_OE_XOR_GPIO
.equ	SIO_GPIO_HI_OE_XOR_GPIO_RESET, 0x0000
.equ	SIO_GPIO_HI_OE_XOR_GPIO_BITS, 0x0000ffff
.equ	SIO_GPIO_HI_OE_XOR_GPIO_MSB, 15
.equ	SIO_GPIO_HI_OE_XOR_GPIO_LSB, 0
#  =============================================================================
#  Register    : SIO_FIFO_ST
#  Description : Status register for inter-core FIFOs (mailboxes).
#                There is one FIFO in the core 0 -> core 1 direction, and one
#                core 1 -> core 0. Both are 32 bits wide and 8 words deep.
#                Core 0 can see the read side of the 1->0 FIFO (RX), and the
#                write side of 0->1 FIFO (TX).
#                Core 1 can see the read side of the 0->1 FIFO (RX), and the
#                write side of 1->0 FIFO (TX).
#                The SIO IRQ for each core is the logical OR of the VLD, WOF and
#                ROE fields of its FIFO_ST register.
.equ	SIO_FIFO_ST_OFFSET, 0x00000050
.equ	SIO_FIFO_ST_BITS, 0x0000000f
.equ	SIO_FIFO_ST_RESET, 0x00000002
#  -----------------------------------------------------------------------------
#  Field       : SIO_FIFO_ST_ROE
#  Description : Sticky flag indicating the RX FIFO was read when empty. This
#                read was ignored by the FIFO.
.equ	SIO_FIFO_ST_ROE_RESET, 0x0
.equ	SIO_FIFO_ST_ROE_BITS, 0x00000008
.equ	SIO_FIFO_ST_ROE_MSB, 3
.equ	SIO_FIFO_ST_ROE_LSB, 3
#  -----------------------------------------------------------------------------
#  Field       : SIO_FIFO_ST_WOF
#  Description : Sticky flag indicating the TX FIFO was written when full. This
#                write was ignored by the FIFO.
.equ	SIO_FIFO_ST_WOF_RESET, 0x0
.equ	SIO_FIFO_ST_WOF_BITS, 0x00000004
.equ	SIO_FIFO_ST_WOF_MSB, 2
.equ	SIO_FIFO_ST_WOF_LSB, 2
#  -----------------------------------------------------------------------------
#  Field       : SIO_FIFO_ST_RDY
#  Description : Value is 1 if this core's TX FIFO is not full (i.e. if FIFO_WR
#                is ready for more data)
.equ	SIO_FIFO_ST_RDY_RESET, 0x1
.equ	SIO_FIFO_ST_RDY_BITS, 0x00000002
.equ	SIO_FIFO_ST_RDY_MSB, 1
.equ	SIO_FIFO_ST_RDY_LSB, 1
#  -----------------------------------------------------------------------------
#  Field       : SIO_FIFO_ST_VLD
#  Description : Value is 1 if this core's RX FIFO is not empty (i.e. if FIFO_RD
#                is valid)
.equ	SIO_FIFO_ST_VLD_RESET, 0x0
.equ	SIO_FIFO_ST_VLD_BITS, 0x00000001
.equ	SIO_FIFO_ST_VLD_MSB, 0
.equ	SIO_FIFO_ST_VLD_LSB, 0
#  =============================================================================
#  Register    : SIO_FIFO_WR
#  Description : Write access to this core's TX FIFO
.equ	SIO_FIFO_WR_OFFSET, 0x00000054
.equ	SIO_FIFO_WR_BITS, 0xffffffff
.equ	SIO_FIFO_WR_RESET, 0x00000000
.equ	SIO_FIFO_WR_MSB, 31
.equ	SIO_FIFO_WR_LSB, 0
#  =============================================================================
#  Register    : SIO_FIFO_RD
#  Description : Read access to this core's RX FIFO
.equ	SIO_FIFO_RD_OFFSET, 0x00000058
.equ	SIO_FIFO_RD_BITS, 0xffffffff
.equ	SIO_FIFO_RD_MSB, 31
.equ	SIO_FIFO_RD_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK_ST
#  Description : Spinlock state
#                A bitmap containing the state of all 32 spinlocks (1=locked).
#                Mainly intended for debugging.
.equ	SIO_SPINLOCK_ST_OFFSET, 0x0000005c
.equ	SIO_SPINLOCK_ST_BITS, 0xffffffff
.equ	SIO_SPINLOCK_ST_RESET, 0x00000000
.equ	SIO_SPINLOCK_ST_MSB, 31
.equ	SIO_SPINLOCK_ST_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP0_ACCUM0
#  Description : Read/write access to accumulator 0
.equ	SIO_INTERP0_ACCUM0_OFFSET, 0x00000080
.equ	SIO_INTERP0_ACCUM0_BITS, 0xffffffff
.equ	SIO_INTERP0_ACCUM0_RESET, 0x00000000
.equ	SIO_INTERP0_ACCUM0_MSB, 31
.equ	SIO_INTERP0_ACCUM0_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP0_ACCUM1
#  Description : Read/write access to accumulator 1
.equ	SIO_INTERP0_ACCUM1_OFFSET, 0x00000084
.equ	SIO_INTERP0_ACCUM1_BITS, 0xffffffff
.equ	SIO_INTERP0_ACCUM1_RESET, 0x00000000
.equ	SIO_INTERP0_ACCUM1_MSB, 31
.equ	SIO_INTERP0_ACCUM1_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP0_BASE0
#  Description : Read/write access to BASE0 register.
.equ	SIO_INTERP0_BASE0_OFFSET, 0x00000088
.equ	SIO_INTERP0_BASE0_BITS, 0xffffffff
.equ	SIO_INTERP0_BASE0_RESET, 0x00000000
.equ	SIO_INTERP0_BASE0_MSB, 31
.equ	SIO_INTERP0_BASE0_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP0_BASE1
#  Description : Read/write access to BASE1 register.
.equ	SIO_INTERP0_BASE1_OFFSET, 0x0000008c
.equ	SIO_INTERP0_BASE1_BITS, 0xffffffff
.equ	SIO_INTERP0_BASE1_RESET, 0x00000000
.equ	SIO_INTERP0_BASE1_MSB, 31
.equ	SIO_INTERP0_BASE1_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP0_BASE2
#  Description : Read/write access to BASE2 register.
.equ	SIO_INTERP0_BASE2_OFFSET, 0x00000090
.equ	SIO_INTERP0_BASE2_BITS, 0xffffffff
.equ	SIO_INTERP0_BASE2_RESET, 0x00000000
.equ	SIO_INTERP0_BASE2_MSB, 31
.equ	SIO_INTERP0_BASE2_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP0_POP_LANE0
#  Description : Read LANE0 result, and simultaneously write lane results to
#                both accumulators (POP).
.equ	SIO_INTERP0_POP_LANE0_OFFSET, 0x00000094
.equ	SIO_INTERP0_POP_LANE0_BITS, 0xffffffff
.equ	SIO_INTERP0_POP_LANE0_RESET, 0x00000000
.equ	SIO_INTERP0_POP_LANE0_MSB, 31
.equ	SIO_INTERP0_POP_LANE0_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP0_POP_LANE1
#  Description : Read LANE1 result, and simultaneously write lane results to
#                both accumulators (POP).
.equ	SIO_INTERP0_POP_LANE1_OFFSET, 0x00000098
.equ	SIO_INTERP0_POP_LANE1_BITS, 0xffffffff
.equ	SIO_INTERP0_POP_LANE1_RESET, 0x00000000
.equ	SIO_INTERP0_POP_LANE1_MSB, 31
.equ	SIO_INTERP0_POP_LANE1_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP0_POP_FULL
#  Description : Read FULL result, and simultaneously write lane results to both
#                accumulators (POP).
.equ	SIO_INTERP0_POP_FULL_OFFSET, 0x0000009c
.equ	SIO_INTERP0_POP_FULL_BITS, 0xffffffff
.equ	SIO_INTERP0_POP_FULL_RESET, 0x00000000
.equ	SIO_INTERP0_POP_FULL_MSB, 31
.equ	SIO_INTERP0_POP_FULL_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP0_PEEK_LANE0
#  Description : Read LANE0 result, without altering any internal state (PEEK).
.equ	SIO_INTERP0_PEEK_LANE0_OFFSET, 0x000000a0
.equ	SIO_INTERP0_PEEK_LANE0_BITS, 0xffffffff
.equ	SIO_INTERP0_PEEK_LANE0_RESET, 0x00000000
.equ	SIO_INTERP0_PEEK_LANE0_MSB, 31
.equ	SIO_INTERP0_PEEK_LANE0_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP0_PEEK_LANE1
#  Description : Read LANE1 result, without altering any internal state (PEEK).
.equ	SIO_INTERP0_PEEK_LANE1_OFFSET, 0x000000a4
.equ	SIO_INTERP0_PEEK_LANE1_BITS, 0xffffffff
.equ	SIO_INTERP0_PEEK_LANE1_RESET, 0x00000000
.equ	SIO_INTERP0_PEEK_LANE1_MSB, 31
.equ	SIO_INTERP0_PEEK_LANE1_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP0_PEEK_FULL
#  Description : Read FULL result, without altering any internal state (PEEK).
.equ	SIO_INTERP0_PEEK_FULL_OFFSET, 0x000000a8
.equ	SIO_INTERP0_PEEK_FULL_BITS, 0xffffffff
.equ	SIO_INTERP0_PEEK_FULL_RESET, 0x00000000
.equ	SIO_INTERP0_PEEK_FULL_MSB, 31
.equ	SIO_INTERP0_PEEK_FULL_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP0_CTRL_LANE0
#  Description : Control register for lane 0
.equ	SIO_INTERP0_CTRL_LANE0_OFFSET, 0x000000ac
.equ	SIO_INTERP0_CTRL_LANE0_BITS, 0x03bfffff
.equ	SIO_INTERP0_CTRL_LANE0_RESET, 0x00000000
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP0_CTRL_LANE0_OVERF
#  Description : Set if either OVERF0 or OVERF1 is set.
.equ	SIO_INTERP0_CTRL_LANE0_OVERF_RESET, 0x0
.equ	SIO_INTERP0_CTRL_LANE0_OVERF_BITS, 0x02000000
.equ	SIO_INTERP0_CTRL_LANE0_OVERF_MSB, 25
.equ	SIO_INTERP0_CTRL_LANE0_OVERF_LSB, 25
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP0_CTRL_LANE0_OVERF1
#  Description : Indicates if any masked-off MSBs in ACCUM1 are set.
.equ	SIO_INTERP0_CTRL_LANE0_OVERF1_RESET, 0x0
.equ	SIO_INTERP0_CTRL_LANE0_OVERF1_BITS, 0x01000000
.equ	SIO_INTERP0_CTRL_LANE0_OVERF1_MSB, 24
.equ	SIO_INTERP0_CTRL_LANE0_OVERF1_LSB, 24
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP0_CTRL_LANE0_OVERF0
#  Description : Indicates if any masked-off MSBs in ACCUM0 are set.
.equ	SIO_INTERP0_CTRL_LANE0_OVERF0_RESET, 0x0
.equ	SIO_INTERP0_CTRL_LANE0_OVERF0_BITS, 0x00800000
.equ	SIO_INTERP0_CTRL_LANE0_OVERF0_MSB, 23
.equ	SIO_INTERP0_CTRL_LANE0_OVERF0_LSB, 23
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP0_CTRL_LANE0_BLEND
#  Description : Only present on INTERP0 on each core. If BLEND mode is enabled:
#                - LANE1 result is a linear interpolation between BASE0 and
#                BASE1, controlled
#                by the 8 LSBs of lane 1 shift and mask value (a fractional
#                number between
#                0 and 255/256ths)
#                - LANE0 result does not have BASE0 added (yields only the 8
#                LSBs of lane 1 shift+mask value)
#                - FULL result does not have lane 1 shift+mask value added
#                (BASE2 + lane 0 shift+mask)
#                LANE1 SIGNED flag controls whether the interpolation is signed
#                or unsigned.
.equ	SIO_INTERP0_CTRL_LANE0_BLEND_RESET, 0x0
.equ	SIO_INTERP0_CTRL_LANE0_BLEND_BITS, 0x00200000
.equ	SIO_INTERP0_CTRL_LANE0_BLEND_MSB, 21
.equ	SIO_INTERP0_CTRL_LANE0_BLEND_LSB, 21
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP0_CTRL_LANE0_FORCE_MSB
#  Description : ORed into bits 29:28 of the lane result presented to the
#                processor on the bus.
#                No effect on the internal 32-bit datapath. Handy for using a
#                lane to generate sequence
#                of pointers into flash or SRAM.
.equ	SIO_INTERP0_CTRL_LANE0_FORCE_MSB_RESET, 0x0
.equ	SIO_INTERP0_CTRL_LANE0_FORCE_MSB_BITS, 0x00180000
.equ	SIO_INTERP0_CTRL_LANE0_FORCE_MSB_MSB, 20
.equ	SIO_INTERP0_CTRL_LANE0_FORCE_MSB_LSB, 19
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP0_CTRL_LANE0_ADD_RAW
#  Description : If 1, mask + shift is bypassed for LANE0 result. This does not
#                affect FULL result.
.equ	SIO_INTERP0_CTRL_LANE0_ADD_RAW_RESET, 0x0
.equ	SIO_INTERP0_CTRL_LANE0_ADD_RAW_BITS, 0x00040000
.equ	SIO_INTERP0_CTRL_LANE0_ADD_RAW_MSB, 18
.equ	SIO_INTERP0_CTRL_LANE0_ADD_RAW_LSB, 18
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP0_CTRL_LANE0_CROSS_RESULT
#  Description : If 1, feed the opposite lane's result into this lane's
#                accumulator on POP.
.equ	SIO_INTERP0_CTRL_LANE0_CROSS_RESULT_RESET, 0x0
.equ	SIO_INTERP0_CTRL_LANE0_CROSS_RESULT_BITS, 0x00020000
.equ	SIO_INTERP0_CTRL_LANE0_CROSS_RESULT_MSB, 17
.equ	SIO_INTERP0_CTRL_LANE0_CROSS_RESULT_LSB, 17
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP0_CTRL_LANE0_CROSS_INPUT
#  Description : If 1, feed the opposite lane's accumulator into this lane's
#                shift + mask hardware.
#                Takes effect even if ADD_RAW is set (the CROSS_INPUT mux is
#                before the shift+mask bypass)
.equ	SIO_INTERP0_CTRL_LANE0_CROSS_INPUT_RESET, 0x0
.equ	SIO_INTERP0_CTRL_LANE0_CROSS_INPUT_BITS, 0x00010000
.equ	SIO_INTERP0_CTRL_LANE0_CROSS_INPUT_MSB, 16
.equ	SIO_INTERP0_CTRL_LANE0_CROSS_INPUT_LSB, 16
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP0_CTRL_LANE0_SIGNED
#  Description : If SIGNED is set, the shifted and masked accumulator value is
#                sign-extended to 32 bits
#                before adding to BASE0, and LANE0 PEEK/POP appear extended to
#                32 bits when read by processor.
.equ	SIO_INTERP0_CTRL_LANE0_SIGNED_RESET, 0x0
.equ	SIO_INTERP0_CTRL_LANE0_SIGNED_BITS, 0x00008000
.equ	SIO_INTERP0_CTRL_LANE0_SIGNED_MSB, 15
.equ	SIO_INTERP0_CTRL_LANE0_SIGNED_LSB, 15
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP0_CTRL_LANE0_MASK_MSB
#  Description : The most-significant bit allowed to pass by the mask
#                (inclusive)
#                Setting MSB < LSB may cause chip to turn inside-out
.equ	SIO_INTERP0_CTRL_LANE0_MASK_MSB_RESET, 0x00
.equ	SIO_INTERP0_CTRL_LANE0_MASK_MSB_BITS, 0x00007c00
.equ	SIO_INTERP0_CTRL_LANE0_MASK_MSB_MSB, 14
.equ	SIO_INTERP0_CTRL_LANE0_MASK_MSB_LSB, 10
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP0_CTRL_LANE0_MASK_LSB
#  Description : The least-significant bit allowed to pass by the mask
#                (inclusive)
.equ	SIO_INTERP0_CTRL_LANE0_MASK_LSB_RESET, 0x00
.equ	SIO_INTERP0_CTRL_LANE0_MASK_LSB_BITS, 0x000003e0
.equ	SIO_INTERP0_CTRL_LANE0_MASK_LSB_MSB, 9
.equ	SIO_INTERP0_CTRL_LANE0_MASK_LSB_LSB, 5
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP0_CTRL_LANE0_SHIFT
#  Description : Right-rotate applied to accumulator before masking. By
#                appropriately configuring the masks, left and right shifts can
#                be synthesised.
.equ	SIO_INTERP0_CTRL_LANE0_SHIFT_RESET, 0x00
.equ	SIO_INTERP0_CTRL_LANE0_SHIFT_BITS, 0x0000001f
.equ	SIO_INTERP0_CTRL_LANE0_SHIFT_MSB, 4
.equ	SIO_INTERP0_CTRL_LANE0_SHIFT_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP0_CTRL_LANE1
#  Description : Control register for lane 1
.equ	SIO_INTERP0_CTRL_LANE1_OFFSET, 0x000000b0
.equ	SIO_INTERP0_CTRL_LANE1_BITS, 0x001fffff
.equ	SIO_INTERP0_CTRL_LANE1_RESET, 0x00000000
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP0_CTRL_LANE1_FORCE_MSB
#  Description : ORed into bits 29:28 of the lane result presented to the
#                processor on the bus.
#                No effect on the internal 32-bit datapath. Handy for using a
#                lane to generate sequence
#                of pointers into flash or SRAM.
.equ	SIO_INTERP0_CTRL_LANE1_FORCE_MSB_RESET, 0x0
.equ	SIO_INTERP0_CTRL_LANE1_FORCE_MSB_BITS, 0x00180000
.equ	SIO_INTERP0_CTRL_LANE1_FORCE_MSB_MSB, 20
.equ	SIO_INTERP0_CTRL_LANE1_FORCE_MSB_LSB, 19
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP0_CTRL_LANE1_ADD_RAW
#  Description : If 1, mask + shift is bypassed for LANE1 result. This does not
#                affect FULL result.
.equ	SIO_INTERP0_CTRL_LANE1_ADD_RAW_RESET, 0x0
.equ	SIO_INTERP0_CTRL_LANE1_ADD_RAW_BITS, 0x00040000
.equ	SIO_INTERP0_CTRL_LANE1_ADD_RAW_MSB, 18
.equ	SIO_INTERP0_CTRL_LANE1_ADD_RAW_LSB, 18
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP0_CTRL_LANE1_CROSS_RESULT
#  Description : If 1, feed the opposite lane's result into this lane's
#                accumulator on POP.
.equ	SIO_INTERP0_CTRL_LANE1_CROSS_RESULT_RESET, 0x0
.equ	SIO_INTERP0_CTRL_LANE1_CROSS_RESULT_BITS, 0x00020000
.equ	SIO_INTERP0_CTRL_LANE1_CROSS_RESULT_MSB, 17
.equ	SIO_INTERP0_CTRL_LANE1_CROSS_RESULT_LSB, 17
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP0_CTRL_LANE1_CROSS_INPUT
#  Description : If 1, feed the opposite lane's accumulator into this lane's
#                shift + mask hardware.
#                Takes effect even if ADD_RAW is set (the CROSS_INPUT mux is
#                before the shift+mask bypass)
.equ	SIO_INTERP0_CTRL_LANE1_CROSS_INPUT_RESET, 0x0
.equ	SIO_INTERP0_CTRL_LANE1_CROSS_INPUT_BITS, 0x00010000
.equ	SIO_INTERP0_CTRL_LANE1_CROSS_INPUT_MSB, 16
.equ	SIO_INTERP0_CTRL_LANE1_CROSS_INPUT_LSB, 16
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP0_CTRL_LANE1_SIGNED
#  Description : If SIGNED is set, the shifted and masked accumulator value is
#                sign-extended to 32 bits
#                before adding to BASE1, and LANE1 PEEK/POP appear extended to
#                32 bits when read by processor.
.equ	SIO_INTERP0_CTRL_LANE1_SIGNED_RESET, 0x0
.equ	SIO_INTERP0_CTRL_LANE1_SIGNED_BITS, 0x00008000
.equ	SIO_INTERP0_CTRL_LANE1_SIGNED_MSB, 15
.equ	SIO_INTERP0_CTRL_LANE1_SIGNED_LSB, 15
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP0_CTRL_LANE1_MASK_MSB
#  Description : The most-significant bit allowed to pass by the mask
#                (inclusive)
#                Setting MSB < LSB may cause chip to turn inside-out
.equ	SIO_INTERP0_CTRL_LANE1_MASK_MSB_RESET, 0x00
.equ	SIO_INTERP0_CTRL_LANE1_MASK_MSB_BITS, 0x00007c00
.equ	SIO_INTERP0_CTRL_LANE1_MASK_MSB_MSB, 14
.equ	SIO_INTERP0_CTRL_LANE1_MASK_MSB_LSB, 10
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP0_CTRL_LANE1_MASK_LSB
#  Description : The least-significant bit allowed to pass by the mask
#                (inclusive)
.equ	SIO_INTERP0_CTRL_LANE1_MASK_LSB_RESET, 0x00
.equ	SIO_INTERP0_CTRL_LANE1_MASK_LSB_BITS, 0x000003e0
.equ	SIO_INTERP0_CTRL_LANE1_MASK_LSB_MSB, 9
.equ	SIO_INTERP0_CTRL_LANE1_MASK_LSB_LSB, 5
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP0_CTRL_LANE1_SHIFT
#  Description : Right-rotate applied to accumulator before masking. By
#                appropriately configuring the masks, left and right shifts can
#                be synthesised.
.equ	SIO_INTERP0_CTRL_LANE1_SHIFT_RESET, 0x00
.equ	SIO_INTERP0_CTRL_LANE1_SHIFT_BITS, 0x0000001f
.equ	SIO_INTERP0_CTRL_LANE1_SHIFT_MSB, 4
.equ	SIO_INTERP0_CTRL_LANE1_SHIFT_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP0_ACCUM0_ADD
#  Description : Values written here are atomically added to ACCUM0
#                Reading yields lane 0's raw shift and mask value (BASE0 not
#                added).
.equ	SIO_INTERP0_ACCUM0_ADD_OFFSET, 0x000000b4
.equ	SIO_INTERP0_ACCUM0_ADD_BITS, 0x00ffffff
.equ	SIO_INTERP0_ACCUM0_ADD_RESET, 0x00000000
.equ	SIO_INTERP0_ACCUM0_ADD_MSB, 23
.equ	SIO_INTERP0_ACCUM0_ADD_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP0_ACCUM1_ADD
#  Description : Values written here are atomically added to ACCUM1
#                Reading yields lane 1's raw shift and mask value (BASE1 not
#                added).
.equ	SIO_INTERP0_ACCUM1_ADD_OFFSET, 0x000000b8
.equ	SIO_INTERP0_ACCUM1_ADD_BITS, 0x00ffffff
.equ	SIO_INTERP0_ACCUM1_ADD_RESET, 0x00000000
.equ	SIO_INTERP0_ACCUM1_ADD_MSB, 23
.equ	SIO_INTERP0_ACCUM1_ADD_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP0_BASE_1AND0
#  Description : On write, the lower 16 bits go to BASE0, upper bits to BASE1
#                simultaneously.
#                Each half is sign-extended to 32 bits if that lane's SIGNED
#                flag is set.
.equ	SIO_INTERP0_BASE_1AND0_OFFSET, 0x000000bc
.equ	SIO_INTERP0_BASE_1AND0_BITS, 0xffffffff
.equ	SIO_INTERP0_BASE_1AND0_RESET, 0x00000000
.equ	SIO_INTERP0_BASE_1AND0_MSB, 31
.equ	SIO_INTERP0_BASE_1AND0_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP1_ACCUM0
#  Description : Read/write access to accumulator 0
.equ	SIO_INTERP1_ACCUM0_OFFSET, 0x000000c0
.equ	SIO_INTERP1_ACCUM0_BITS, 0xffffffff
.equ	SIO_INTERP1_ACCUM0_RESET, 0x00000000
.equ	SIO_INTERP1_ACCUM0_MSB, 31
.equ	SIO_INTERP1_ACCUM0_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP1_ACCUM1
#  Description : Read/write access to accumulator 1
.equ	SIO_INTERP1_ACCUM1_OFFSET, 0x000000c4
.equ	SIO_INTERP1_ACCUM1_BITS, 0xffffffff
.equ	SIO_INTERP1_ACCUM1_RESET, 0x00000000
.equ	SIO_INTERP1_ACCUM1_MSB, 31
.equ	SIO_INTERP1_ACCUM1_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP1_BASE0
#  Description : Read/write access to BASE0 register.
.equ	SIO_INTERP1_BASE0_OFFSET, 0x000000c8
.equ	SIO_INTERP1_BASE0_BITS, 0xffffffff
.equ	SIO_INTERP1_BASE0_RESET, 0x00000000
.equ	SIO_INTERP1_BASE0_MSB, 31
.equ	SIO_INTERP1_BASE0_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP1_BASE1
#  Description : Read/write access to BASE1 register.
.equ	SIO_INTERP1_BASE1_OFFSET, 0x000000cc
.equ	SIO_INTERP1_BASE1_BITS, 0xffffffff
.equ	SIO_INTERP1_BASE1_RESET, 0x00000000
.equ	SIO_INTERP1_BASE1_MSB, 31
.equ	SIO_INTERP1_BASE1_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP1_BASE2
#  Description : Read/write access to BASE2 register.
.equ	SIO_INTERP1_BASE2_OFFSET, 0x000000d0
.equ	SIO_INTERP1_BASE2_BITS, 0xffffffff
.equ	SIO_INTERP1_BASE2_RESET, 0x00000000
.equ	SIO_INTERP1_BASE2_MSB, 31
.equ	SIO_INTERP1_BASE2_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP1_POP_LANE0
#  Description : Read LANE0 result, and simultaneously write lane results to
#                both accumulators (POP).
.equ	SIO_INTERP1_POP_LANE0_OFFSET, 0x000000d4
.equ	SIO_INTERP1_POP_LANE0_BITS, 0xffffffff
.equ	SIO_INTERP1_POP_LANE0_RESET, 0x00000000
.equ	SIO_INTERP1_POP_LANE0_MSB, 31
.equ	SIO_INTERP1_POP_LANE0_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP1_POP_LANE1
#  Description : Read LANE1 result, and simultaneously write lane results to
#                both accumulators (POP).
.equ	SIO_INTERP1_POP_LANE1_OFFSET, 0x000000d8
.equ	SIO_INTERP1_POP_LANE1_BITS, 0xffffffff
.equ	SIO_INTERP1_POP_LANE1_RESET, 0x00000000
.equ	SIO_INTERP1_POP_LANE1_MSB, 31
.equ	SIO_INTERP1_POP_LANE1_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP1_POP_FULL
#  Description : Read FULL result, and simultaneously write lane results to both
#                accumulators (POP).
.equ	SIO_INTERP1_POP_FULL_OFFSET, 0x000000dc
.equ	SIO_INTERP1_POP_FULL_BITS, 0xffffffff
.equ	SIO_INTERP1_POP_FULL_RESET, 0x00000000
.equ	SIO_INTERP1_POP_FULL_MSB, 31
.equ	SIO_INTERP1_POP_FULL_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP1_PEEK_LANE0
#  Description : Read LANE0 result, without altering any internal state (PEEK).
.equ	SIO_INTERP1_PEEK_LANE0_OFFSET, 0x000000e0
.equ	SIO_INTERP1_PEEK_LANE0_BITS, 0xffffffff
.equ	SIO_INTERP1_PEEK_LANE0_RESET, 0x00000000
.equ	SIO_INTERP1_PEEK_LANE0_MSB, 31
.equ	SIO_INTERP1_PEEK_LANE0_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP1_PEEK_LANE1
#  Description : Read LANE1 result, without altering any internal state (PEEK).
.equ	SIO_INTERP1_PEEK_LANE1_OFFSET, 0x000000e4
.equ	SIO_INTERP1_PEEK_LANE1_BITS, 0xffffffff
.equ	SIO_INTERP1_PEEK_LANE1_RESET, 0x00000000
.equ	SIO_INTERP1_PEEK_LANE1_MSB, 31
.equ	SIO_INTERP1_PEEK_LANE1_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP1_PEEK_FULL
#  Description : Read FULL result, without altering any internal state (PEEK).
.equ	SIO_INTERP1_PEEK_FULL_OFFSET, 0x000000e8
.equ	SIO_INTERP1_PEEK_FULL_BITS, 0xffffffff
.equ	SIO_INTERP1_PEEK_FULL_RESET, 0x00000000
.equ	SIO_INTERP1_PEEK_FULL_MSB, 31
.equ	SIO_INTERP1_PEEK_FULL_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP1_CTRL_LANE0
#  Description : Control register for lane 0
.equ	SIO_INTERP1_CTRL_LANE0_OFFSET, 0x000000ec
.equ	SIO_INTERP1_CTRL_LANE0_BITS, 0x03dfffff
.equ	SIO_INTERP1_CTRL_LANE0_RESET, 0x00000000
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP1_CTRL_LANE0_OVERF
#  Description : Set if either OVERF0 or OVERF1 is set.
.equ	SIO_INTERP1_CTRL_LANE0_OVERF_RESET, 0x0
.equ	SIO_INTERP1_CTRL_LANE0_OVERF_BITS, 0x02000000
.equ	SIO_INTERP1_CTRL_LANE0_OVERF_MSB, 25
.equ	SIO_INTERP1_CTRL_LANE0_OVERF_LSB, 25
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP1_CTRL_LANE0_OVERF1
#  Description : Indicates if any masked-off MSBs in ACCUM1 are set.
.equ	SIO_INTERP1_CTRL_LANE0_OVERF1_RESET, 0x0
.equ	SIO_INTERP1_CTRL_LANE0_OVERF1_BITS, 0x01000000
.equ	SIO_INTERP1_CTRL_LANE0_OVERF1_MSB, 24
.equ	SIO_INTERP1_CTRL_LANE0_OVERF1_LSB, 24
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP1_CTRL_LANE0_OVERF0
#  Description : Indicates if any masked-off MSBs in ACCUM0 are set.
.equ	SIO_INTERP1_CTRL_LANE0_OVERF0_RESET, 0x0
.equ	SIO_INTERP1_CTRL_LANE0_OVERF0_BITS, 0x00800000
.equ	SIO_INTERP1_CTRL_LANE0_OVERF0_MSB, 23
.equ	SIO_INTERP1_CTRL_LANE0_OVERF0_LSB, 23
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP1_CTRL_LANE0_CLAMP
#  Description : Only present on INTERP1 on each core. If CLAMP mode is enabled:
#                - LANE0 result is shifted and masked ACCUM0, clamped by a lower
#                bound of
#                BASE0 and an upper bound of BASE1.
#                - Signedness of these comparisons is determined by
#                LANE0_CTRL_SIGNED
.equ	SIO_INTERP1_CTRL_LANE0_CLAMP_RESET, 0x0
.equ	SIO_INTERP1_CTRL_LANE0_CLAMP_BITS, 0x00400000
.equ	SIO_INTERP1_CTRL_LANE0_CLAMP_MSB, 22
.equ	SIO_INTERP1_CTRL_LANE0_CLAMP_LSB, 22
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP1_CTRL_LANE0_FORCE_MSB
#  Description : ORed into bits 29:28 of the lane result presented to the
#                processor on the bus.
#                No effect on the internal 32-bit datapath. Handy for using a
#                lane to generate sequence
#                of pointers into flash or SRAM.
.equ	SIO_INTERP1_CTRL_LANE0_FORCE_MSB_RESET, 0x0
.equ	SIO_INTERP1_CTRL_LANE0_FORCE_MSB_BITS, 0x00180000
.equ	SIO_INTERP1_CTRL_LANE0_FORCE_MSB_MSB, 20
.equ	SIO_INTERP1_CTRL_LANE0_FORCE_MSB_LSB, 19
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP1_CTRL_LANE0_ADD_RAW
#  Description : If 1, mask + shift is bypassed for LANE0 result. This does not
#                affect FULL result.
.equ	SIO_INTERP1_CTRL_LANE0_ADD_RAW_RESET, 0x0
.equ	SIO_INTERP1_CTRL_LANE0_ADD_RAW_BITS, 0x00040000
.equ	SIO_INTERP1_CTRL_LANE0_ADD_RAW_MSB, 18
.equ	SIO_INTERP1_CTRL_LANE0_ADD_RAW_LSB, 18
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP1_CTRL_LANE0_CROSS_RESULT
#  Description : If 1, feed the opposite lane's result into this lane's
#                accumulator on POP.
.equ	SIO_INTERP1_CTRL_LANE0_CROSS_RESULT_RESET, 0x0
.equ	SIO_INTERP1_CTRL_LANE0_CROSS_RESULT_BITS, 0x00020000
.equ	SIO_INTERP1_CTRL_LANE0_CROSS_RESULT_MSB, 17
.equ	SIO_INTERP1_CTRL_LANE0_CROSS_RESULT_LSB, 17
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP1_CTRL_LANE0_CROSS_INPUT
#  Description : If 1, feed the opposite lane's accumulator into this lane's
#                shift + mask hardware.
#                Takes effect even if ADD_RAW is set (the CROSS_INPUT mux is
#                before the shift+mask bypass)
.equ	SIO_INTERP1_CTRL_LANE0_CROSS_INPUT_RESET, 0x0
.equ	SIO_INTERP1_CTRL_LANE0_CROSS_INPUT_BITS, 0x00010000
.equ	SIO_INTERP1_CTRL_LANE0_CROSS_INPUT_MSB, 16
.equ	SIO_INTERP1_CTRL_LANE0_CROSS_INPUT_LSB, 16
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP1_CTRL_LANE0_SIGNED
#  Description : If SIGNED is set, the shifted and masked accumulator value is
#                sign-extended to 32 bits
#                before adding to BASE0, and LANE0 PEEK/POP appear extended to
#                32 bits when read by processor.
.equ	SIO_INTERP1_CTRL_LANE0_SIGNED_RESET, 0x0
.equ	SIO_INTERP1_CTRL_LANE0_SIGNED_BITS, 0x00008000
.equ	SIO_INTERP1_CTRL_LANE0_SIGNED_MSB, 15
.equ	SIO_INTERP1_CTRL_LANE0_SIGNED_LSB, 15
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP1_CTRL_LANE0_MASK_MSB
#  Description : The most-significant bit allowed to pass by the mask
#                (inclusive)
#                Setting MSB < LSB may cause chip to turn inside-out
.equ	SIO_INTERP1_CTRL_LANE0_MASK_MSB_RESET, 0x00
.equ	SIO_INTERP1_CTRL_LANE0_MASK_MSB_BITS, 0x00007c00
.equ	SIO_INTERP1_CTRL_LANE0_MASK_MSB_MSB, 14
.equ	SIO_INTERP1_CTRL_LANE0_MASK_MSB_LSB, 10
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP1_CTRL_LANE0_MASK_LSB
#  Description : The least-significant bit allowed to pass by the mask
#                (inclusive)
.equ	SIO_INTERP1_CTRL_LANE0_MASK_LSB_RESET, 0x00
.equ	SIO_INTERP1_CTRL_LANE0_MASK_LSB_BITS, 0x000003e0
.equ	SIO_INTERP1_CTRL_LANE0_MASK_LSB_MSB, 9
.equ	SIO_INTERP1_CTRL_LANE0_MASK_LSB_LSB, 5
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP1_CTRL_LANE0_SHIFT
#  Description : Right-rotate applied to accumulator before masking. By
#                appropriately configuring the masks, left and right shifts can
#                be synthesised.
.equ	SIO_INTERP1_CTRL_LANE0_SHIFT_RESET, 0x00
.equ	SIO_INTERP1_CTRL_LANE0_SHIFT_BITS, 0x0000001f
.equ	SIO_INTERP1_CTRL_LANE0_SHIFT_MSB, 4
.equ	SIO_INTERP1_CTRL_LANE0_SHIFT_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP1_CTRL_LANE1
#  Description : Control register for lane 1
.equ	SIO_INTERP1_CTRL_LANE1_OFFSET, 0x000000f0
.equ	SIO_INTERP1_CTRL_LANE1_BITS, 0x001fffff
.equ	SIO_INTERP1_CTRL_LANE1_RESET, 0x00000000
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP1_CTRL_LANE1_FORCE_MSB
#  Description : ORed into bits 29:28 of the lane result presented to the
#                processor on the bus.
#                No effect on the internal 32-bit datapath. Handy for using a
#                lane to generate sequence
#                of pointers into flash or SRAM.
.equ	SIO_INTERP1_CTRL_LANE1_FORCE_MSB_RESET, 0x0
.equ	SIO_INTERP1_CTRL_LANE1_FORCE_MSB_BITS, 0x00180000
.equ	SIO_INTERP1_CTRL_LANE1_FORCE_MSB_MSB, 20
.equ	SIO_INTERP1_CTRL_LANE1_FORCE_MSB_LSB, 19
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP1_CTRL_LANE1_ADD_RAW
#  Description : If 1, mask + shift is bypassed for LANE1 result. This does not
#                affect FULL result.
.equ	SIO_INTERP1_CTRL_LANE1_ADD_RAW_RESET, 0x0
.equ	SIO_INTERP1_CTRL_LANE1_ADD_RAW_BITS, 0x00040000
.equ	SIO_INTERP1_CTRL_LANE1_ADD_RAW_MSB, 18
.equ	SIO_INTERP1_CTRL_LANE1_ADD_RAW_LSB, 18
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP1_CTRL_LANE1_CROSS_RESULT
#  Description : If 1, feed the opposite lane's result into this lane's
#                accumulator on POP.
.equ	SIO_INTERP1_CTRL_LANE1_CROSS_RESULT_RESET, 0x0
.equ	SIO_INTERP1_CTRL_LANE1_CROSS_RESULT_BITS, 0x00020000
.equ	SIO_INTERP1_CTRL_LANE1_CROSS_RESULT_MSB, 17
.equ	SIO_INTERP1_CTRL_LANE1_CROSS_RESULT_LSB, 17
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP1_CTRL_LANE1_CROSS_INPUT
#  Description : If 1, feed the opposite lane's accumulator into this lane's
#                shift + mask hardware.
#                Takes effect even if ADD_RAW is set (the CROSS_INPUT mux is
#                before the shift+mask bypass)
.equ	SIO_INTERP1_CTRL_LANE1_CROSS_INPUT_RESET, 0x0
.equ	SIO_INTERP1_CTRL_LANE1_CROSS_INPUT_BITS, 0x00010000
.equ	SIO_INTERP1_CTRL_LANE1_CROSS_INPUT_MSB, 16
.equ	SIO_INTERP1_CTRL_LANE1_CROSS_INPUT_LSB, 16
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP1_CTRL_LANE1_SIGNED
#  Description : If SIGNED is set, the shifted and masked accumulator value is
#                sign-extended to 32 bits
#                before adding to BASE1, and LANE1 PEEK/POP appear extended to
#                32 bits when read by processor.
.equ	SIO_INTERP1_CTRL_LANE1_SIGNED_RESET, 0x0
.equ	SIO_INTERP1_CTRL_LANE1_SIGNED_BITS, 0x00008000
.equ	SIO_INTERP1_CTRL_LANE1_SIGNED_MSB, 15
.equ	SIO_INTERP1_CTRL_LANE1_SIGNED_LSB, 15
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP1_CTRL_LANE1_MASK_MSB
#  Description : The most-significant bit allowed to pass by the mask
#                (inclusive)
#                Setting MSB < LSB may cause chip to turn inside-out
.equ	SIO_INTERP1_CTRL_LANE1_MASK_MSB_RESET, 0x00
.equ	SIO_INTERP1_CTRL_LANE1_MASK_MSB_BITS, 0x00007c00
.equ	SIO_INTERP1_CTRL_LANE1_MASK_MSB_MSB, 14
.equ	SIO_INTERP1_CTRL_LANE1_MASK_MSB_LSB, 10
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP1_CTRL_LANE1_MASK_LSB
#  Description : The least-significant bit allowed to pass by the mask
#                (inclusive)
.equ	SIO_INTERP1_CTRL_LANE1_MASK_LSB_RESET, 0x00
.equ	SIO_INTERP1_CTRL_LANE1_MASK_LSB_BITS, 0x000003e0
.equ	SIO_INTERP1_CTRL_LANE1_MASK_LSB_MSB, 9
.equ	SIO_INTERP1_CTRL_LANE1_MASK_LSB_LSB, 5
#  -----------------------------------------------------------------------------
#  Field       : SIO_INTERP1_CTRL_LANE1_SHIFT
#  Description : Right-rotate applied to accumulator before masking. By
#                appropriately configuring the masks, left and right shifts can
#                be synthesised.
.equ	SIO_INTERP1_CTRL_LANE1_SHIFT_RESET, 0x00
.equ	SIO_INTERP1_CTRL_LANE1_SHIFT_BITS, 0x0000001f
.equ	SIO_INTERP1_CTRL_LANE1_SHIFT_MSB, 4
.equ	SIO_INTERP1_CTRL_LANE1_SHIFT_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP1_ACCUM0_ADD
#  Description : Values written here are atomically added to ACCUM0
#                Reading yields lane 0's raw shift and mask value (BASE0 not
#                added).
.equ	SIO_INTERP1_ACCUM0_ADD_OFFSET, 0x000000f4
.equ	SIO_INTERP1_ACCUM0_ADD_BITS, 0x00ffffff
.equ	SIO_INTERP1_ACCUM0_ADD_RESET, 0x00000000
.equ	SIO_INTERP1_ACCUM0_ADD_MSB, 23
.equ	SIO_INTERP1_ACCUM0_ADD_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP1_ACCUM1_ADD
#  Description : Values written here are atomically added to ACCUM1
#                Reading yields lane 1's raw shift and mask value (BASE1 not
#                added).
.equ	SIO_INTERP1_ACCUM1_ADD_OFFSET, 0x000000f8
.equ	SIO_INTERP1_ACCUM1_ADD_BITS, 0x00ffffff
.equ	SIO_INTERP1_ACCUM1_ADD_RESET, 0x00000000
.equ	SIO_INTERP1_ACCUM1_ADD_MSB, 23
.equ	SIO_INTERP1_ACCUM1_ADD_LSB, 0
#  =============================================================================
#  Register    : SIO_INTERP1_BASE_1AND0
#  Description : On write, the lower 16 bits go to BASE0, upper bits to BASE1
#                simultaneously.
#                Each half is sign-extended to 32 bits if that lane's SIGNED
#                flag is set.
.equ	SIO_INTERP1_BASE_1AND0_OFFSET, 0x000000fc
.equ	SIO_INTERP1_BASE_1AND0_BITS, 0xffffffff
.equ	SIO_INTERP1_BASE_1AND0_RESET, 0x00000000
.equ	SIO_INTERP1_BASE_1AND0_MSB, 31
.equ	SIO_INTERP1_BASE_1AND0_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK0
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK0_OFFSET, 0x00000100
.equ	SIO_SPINLOCK0_BITS, 0xffffffff
.equ	SIO_SPINLOCK0_RESET, 0x00000000
.equ	SIO_SPINLOCK0_MSB, 31
.equ	SIO_SPINLOCK0_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK1
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK1_OFFSET, 0x00000104
.equ	SIO_SPINLOCK1_BITS, 0xffffffff
.equ	SIO_SPINLOCK1_RESET, 0x00000000
.equ	SIO_SPINLOCK1_MSB, 31
.equ	SIO_SPINLOCK1_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK2
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK2_OFFSET, 0x00000108
.equ	SIO_SPINLOCK2_BITS, 0xffffffff
.equ	SIO_SPINLOCK2_RESET, 0x00000000
.equ	SIO_SPINLOCK2_MSB, 31
.equ	SIO_SPINLOCK2_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK3
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK3_OFFSET, 0x0000010c
.equ	SIO_SPINLOCK3_BITS, 0xffffffff
.equ	SIO_SPINLOCK3_RESET, 0x00000000
.equ	SIO_SPINLOCK3_MSB, 31
.equ	SIO_SPINLOCK3_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK4
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK4_OFFSET, 0x00000110
.equ	SIO_SPINLOCK4_BITS, 0xffffffff
.equ	SIO_SPINLOCK4_RESET, 0x00000000
.equ	SIO_SPINLOCK4_MSB, 31
.equ	SIO_SPINLOCK4_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK5
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK5_OFFSET, 0x00000114
.equ	SIO_SPINLOCK5_BITS, 0xffffffff
.equ	SIO_SPINLOCK5_RESET, 0x00000000
.equ	SIO_SPINLOCK5_MSB, 31
.equ	SIO_SPINLOCK5_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK6
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK6_OFFSET, 0x00000118
.equ	SIO_SPINLOCK6_BITS, 0xffffffff
.equ	SIO_SPINLOCK6_RESET, 0x00000000
.equ	SIO_SPINLOCK6_MSB, 31
.equ	SIO_SPINLOCK6_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK7
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK7_OFFSET, 0x0000011c
.equ	SIO_SPINLOCK7_BITS, 0xffffffff
.equ	SIO_SPINLOCK7_RESET, 0x00000000
.equ	SIO_SPINLOCK7_MSB, 31
.equ	SIO_SPINLOCK7_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK8
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK8_OFFSET, 0x00000120
.equ	SIO_SPINLOCK8_BITS, 0xffffffff
.equ	SIO_SPINLOCK8_RESET, 0x00000000
.equ	SIO_SPINLOCK8_MSB, 31
.equ	SIO_SPINLOCK8_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK9
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK9_OFFSET, 0x00000124
.equ	SIO_SPINLOCK9_BITS, 0xffffffff
.equ	SIO_SPINLOCK9_RESET, 0x00000000
.equ	SIO_SPINLOCK9_MSB, 31
.equ	SIO_SPINLOCK9_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK10
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK10_OFFSET, 0x00000128
.equ	SIO_SPINLOCK10_BITS, 0xffffffff
.equ	SIO_SPINLOCK10_RESET, 0x00000000
.equ	SIO_SPINLOCK10_MSB, 31
.equ	SIO_SPINLOCK10_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK11
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK11_OFFSET, 0x0000012c
.equ	SIO_SPINLOCK11_BITS, 0xffffffff
.equ	SIO_SPINLOCK11_RESET, 0x00000000
.equ	SIO_SPINLOCK11_MSB, 31
.equ	SIO_SPINLOCK11_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK12
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK12_OFFSET, 0x00000130
.equ	SIO_SPINLOCK12_BITS, 0xffffffff
.equ	SIO_SPINLOCK12_RESET, 0x00000000
.equ	SIO_SPINLOCK12_MSB, 31
.equ	SIO_SPINLOCK12_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK13
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK13_OFFSET, 0x00000134
.equ	SIO_SPINLOCK13_BITS, 0xffffffff
.equ	SIO_SPINLOCK13_RESET, 0x00000000
.equ	SIO_SPINLOCK13_MSB, 31
.equ	SIO_SPINLOCK13_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK14
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK14_OFFSET, 0x00000138
.equ	SIO_SPINLOCK14_BITS, 0xffffffff
.equ	SIO_SPINLOCK14_RESET, 0x00000000
.equ	SIO_SPINLOCK14_MSB, 31
.equ	SIO_SPINLOCK14_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK15
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK15_OFFSET, 0x0000013c
.equ	SIO_SPINLOCK15_BITS, 0xffffffff
.equ	SIO_SPINLOCK15_RESET, 0x00000000
.equ	SIO_SPINLOCK15_MSB, 31
.equ	SIO_SPINLOCK15_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK16
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK16_OFFSET, 0x00000140
.equ	SIO_SPINLOCK16_BITS, 0xffffffff
.equ	SIO_SPINLOCK16_RESET, 0x00000000
.equ	SIO_SPINLOCK16_MSB, 31
.equ	SIO_SPINLOCK16_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK17
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK17_OFFSET, 0x00000144
.equ	SIO_SPINLOCK17_BITS, 0xffffffff
.equ	SIO_SPINLOCK17_RESET, 0x00000000
.equ	SIO_SPINLOCK17_MSB, 31
.equ	SIO_SPINLOCK17_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK18
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK18_OFFSET, 0x00000148
.equ	SIO_SPINLOCK18_BITS, 0xffffffff
.equ	SIO_SPINLOCK18_RESET, 0x00000000
.equ	SIO_SPINLOCK18_MSB, 31
.equ	SIO_SPINLOCK18_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK19
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK19_OFFSET, 0x0000014c
.equ	SIO_SPINLOCK19_BITS, 0xffffffff
.equ	SIO_SPINLOCK19_RESET, 0x00000000
.equ	SIO_SPINLOCK19_MSB, 31
.equ	SIO_SPINLOCK19_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK20
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK20_OFFSET, 0x00000150
.equ	SIO_SPINLOCK20_BITS, 0xffffffff
.equ	SIO_SPINLOCK20_RESET, 0x00000000
.equ	SIO_SPINLOCK20_MSB, 31
.equ	SIO_SPINLOCK20_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK21
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK21_OFFSET, 0x00000154
.equ	SIO_SPINLOCK21_BITS, 0xffffffff
.equ	SIO_SPINLOCK21_RESET, 0x00000000
.equ	SIO_SPINLOCK21_MSB, 31
.equ	SIO_SPINLOCK21_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK22
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK22_OFFSET, 0x00000158
.equ	SIO_SPINLOCK22_BITS, 0xffffffff
.equ	SIO_SPINLOCK22_RESET, 0x00000000
.equ	SIO_SPINLOCK22_MSB, 31
.equ	SIO_SPINLOCK22_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK23
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK23_OFFSET, 0x0000015c
.equ	SIO_SPINLOCK23_BITS, 0xffffffff
.equ	SIO_SPINLOCK23_RESET, 0x00000000
.equ	SIO_SPINLOCK23_MSB, 31
.equ	SIO_SPINLOCK23_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK24
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK24_OFFSET, 0x00000160
.equ	SIO_SPINLOCK24_BITS, 0xffffffff
.equ	SIO_SPINLOCK24_RESET, 0x00000000
.equ	SIO_SPINLOCK24_MSB, 31
.equ	SIO_SPINLOCK24_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK25
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK25_OFFSET, 0x00000164
.equ	SIO_SPINLOCK25_BITS, 0xffffffff
.equ	SIO_SPINLOCK25_RESET, 0x00000000
.equ	SIO_SPINLOCK25_MSB, 31
.equ	SIO_SPINLOCK25_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK26
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK26_OFFSET, 0x00000168
.equ	SIO_SPINLOCK26_BITS, 0xffffffff
.equ	SIO_SPINLOCK26_RESET, 0x00000000
.equ	SIO_SPINLOCK26_MSB, 31
.equ	SIO_SPINLOCK26_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK27
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK27_OFFSET, 0x0000016c
.equ	SIO_SPINLOCK27_BITS, 0xffffffff
.equ	SIO_SPINLOCK27_RESET, 0x00000000
.equ	SIO_SPINLOCK27_MSB, 31
.equ	SIO_SPINLOCK27_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK28
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK28_OFFSET, 0x00000170
.equ	SIO_SPINLOCK28_BITS, 0xffffffff
.equ	SIO_SPINLOCK28_RESET, 0x00000000
.equ	SIO_SPINLOCK28_MSB, 31
.equ	SIO_SPINLOCK28_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK29
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK29_OFFSET, 0x00000174
.equ	SIO_SPINLOCK29_BITS, 0xffffffff
.equ	SIO_SPINLOCK29_RESET, 0x00000000
.equ	SIO_SPINLOCK29_MSB, 31
.equ	SIO_SPINLOCK29_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK30
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK30_OFFSET, 0x00000178
.equ	SIO_SPINLOCK30_BITS, 0xffffffff
.equ	SIO_SPINLOCK30_RESET, 0x00000000
.equ	SIO_SPINLOCK30_MSB, 31
.equ	SIO_SPINLOCK30_LSB, 0
#  =============================================================================
#  Register    : SIO_SPINLOCK31
#  Description : Reading from a spinlock address will:
#                - Return 0 if lock is already locked
#                - Otherwise return nonzero, and simultaneously claim the lock
# 
#                Writing (any value) releases the lock.
#                If core 0 and core 1 attempt to claim the same lock
#                simultaneously, core 0 wins.
#                The value returned on success is 0x1 << lock number.
.equ	SIO_SPINLOCK31_OFFSET, 0x0000017c
.equ	SIO_SPINLOCK31_BITS, 0xffffffff
.equ	SIO_SPINLOCK31_RESET, 0x00000000
.equ	SIO_SPINLOCK31_MSB, 31
.equ	SIO_SPINLOCK31_LSB, 0
#  =============================================================================
#  Register    : SIO_DOORBELL_OUT_SET
#  Description : Trigger a doorbell interrupt on the opposite core.
# 
#                Write 1 to a bit to set the corresponding bit in DOORBELL_IN on
#                the opposite core. This raises the opposite core's doorbell
#                interrupt.
# 
#                Read to get the status of the doorbells currently asserted on
#                the opposite core. This is equivalent to that core reading its
#                own DOORBELL_IN status.
.equ	SIO_DOORBELL_OUT_SET_OFFSET, 0x00000180
.equ	SIO_DOORBELL_OUT_SET_BITS, 0x000000ff
.equ	SIO_DOORBELL_OUT_SET_RESET, 0x00000000
.equ	SIO_DOORBELL_OUT_SET_MSB, 7
.equ	SIO_DOORBELL_OUT_SET_LSB, 0
#  =============================================================================
#  Register    : SIO_DOORBELL_OUT_CLR
#  Description : Clear doorbells which have been posted to the opposite core.
#                This register is intended for debugging and initialisation
#                purposes.
# 
#                Writing 1 to a bit in DOORBELL_OUT_CLR clears the corresponding
#                bit in DOORBELL_IN on the opposite core. Clearing all bits will
#                cause that core's doorbell interrupt to deassert. Since the
#                usual order of events is for software to send events using
#                DOORBELL_OUT_SET, and acknowledge incoming events by writing to
#                DOORBELL_IN_CLR, this register should be used with caution to
#                avoid race conditions.
# 
#                Reading returns the status of the doorbells currently asserted
#                on the other core, i.e. is equivalent to that core reading its
#                own DOORBELL_IN status.
.equ	SIO_DOORBELL_OUT_CLR_OFFSET, 0x00000184
.equ	SIO_DOORBELL_OUT_CLR_BITS, 0x000000ff
.equ	SIO_DOORBELL_OUT_CLR_RESET, 0x00000000
.equ	SIO_DOORBELL_OUT_CLR_MSB, 7
.equ	SIO_DOORBELL_OUT_CLR_LSB, 0
#  =============================================================================
#  Register    : SIO_DOORBELL_IN_SET
#  Description : Write 1s to trigger doorbell interrupts on this core. Read to
#                get status of doorbells currently asserted on this core.
.equ	SIO_DOORBELL_IN_SET_OFFSET, 0x00000188
.equ	SIO_DOORBELL_IN_SET_BITS, 0x000000ff
.equ	SIO_DOORBELL_IN_SET_RESET, 0x00000000
.equ	SIO_DOORBELL_IN_SET_MSB, 7
.equ	SIO_DOORBELL_IN_SET_LSB, 0
#  =============================================================================
#  Register    : SIO_DOORBELL_IN_CLR
#  Description : Check and acknowledge doorbells posted to this core. This
#                core's doorbell interrupt is asserted when any bit in this
#                register is 1.
# 
#                Write 1 to each bit to clear that bit. The doorbell interrupt
#                deasserts once all bits are cleared. Read to get status of
#                doorbells currently asserted on this core.
.equ	SIO_DOORBELL_IN_CLR_OFFSET, 0x0000018c
.equ	SIO_DOORBELL_IN_CLR_BITS, 0x000000ff
.equ	SIO_DOORBELL_IN_CLR_RESET, 0x00000000
.equ	SIO_DOORBELL_IN_CLR_MSB, 7
.equ	SIO_DOORBELL_IN_CLR_LSB, 0
#  =============================================================================
#  Register    : SIO_PERI_NONSEC
#  Description : Detach certain core-local peripherals from Secure SIO, and
#                attach them to Non-secure SIO, so that Non-secure software can
#                use them. Attempting to access one of these peripherals from
#                the Secure SIO when it is attached to the Non-secure SIO, or
#                vice versa, will generate a bus error.
# 
#                This register is per-core, and is only present on the Secure
#                SIO.
# 
#                Most SIO hardware is duplicated across the Secure and Non-
#                secure SIO, so is not listed in this register.
.equ	SIO_PERI_NONSEC_OFFSET, 0x00000190
.equ	SIO_PERI_NONSEC_BITS, 0x00000023
.equ	SIO_PERI_NONSEC_RESET, 0x00000000
#  -----------------------------------------------------------------------------
#  Field       : SIO_PERI_NONSEC_TMDS
#  Description : IF 1, detach TMDS encoder (of this core) from the Secure SIO,
#                and attach to the Non-secure SIO.
.equ	SIO_PERI_NONSEC_TMDS_RESET, 0x0
.equ	SIO_PERI_NONSEC_TMDS_BITS, 0x00000020
.equ	SIO_PERI_NONSEC_TMDS_MSB, 5
.equ	SIO_PERI_NONSEC_TMDS_LSB, 5
#  -----------------------------------------------------------------------------
#  Field       : SIO_PERI_NONSEC_INTERP1
#  Description : If 1, detach interpolator 1 (of this core) from the Secure SIO,
#                and attach to the Non-secure SIO.
.equ	SIO_PERI_NONSEC_INTERP1_RESET, 0x0
.equ	SIO_PERI_NONSEC_INTERP1_BITS, 0x00000002
.equ	SIO_PERI_NONSEC_INTERP1_MSB, 1
.equ	SIO_PERI_NONSEC_INTERP1_LSB, 1
#  -----------------------------------------------------------------------------
#  Field       : SIO_PERI_NONSEC_INTERP0
#  Description : If 1, detach interpolator 0 (of this core) from the Secure SIO,
#                and attach to the Non-secure SIO.
.equ	SIO_PERI_NONSEC_INTERP0_RESET, 0x0
.equ	SIO_PERI_NONSEC_INTERP0_BITS, 0x00000001
.equ	SIO_PERI_NONSEC_INTERP0_MSB, 0
.equ	SIO_PERI_NONSEC_INTERP0_LSB, 0
#  =============================================================================
#  Register    : SIO_RISCV_SOFTIRQ
#  Description : Control the assertion of the standard software interrupt
#                (MIP.MSIP) on the RISC-V cores.
# 
#                Unlike the RISC-V timer, this interrupt is not routed to a
#                normal system-level interrupt line, so can not be used by the
#                Arm cores.
# 
#                It is safe for both cores to write to this register on the same
#                cycle. The set/clear effect is accumulated across both cores,
#                and then applied. If a flag is both set and cleared on the same
#                cycle, only the set takes effect.
.equ	SIO_RISCV_SOFTIRQ_OFFSET, 0x000001a0
.equ	SIO_RISCV_SOFTIRQ_BITS, 0x00000303
.equ	SIO_RISCV_SOFTIRQ_RESET, 0x00000000
#  -----------------------------------------------------------------------------
#  Field       : SIO_RISCV_SOFTIRQ_CORE1_CLR
#  Description : Write 1 to atomically clear the core 1 software interrupt flag.
#                Read to get the status of this flag.
.equ	SIO_RISCV_SOFTIRQ_CORE1_CLR_RESET, 0x0
.equ	SIO_RISCV_SOFTIRQ_CORE1_CLR_BITS, 0x00000200
.equ	SIO_RISCV_SOFTIRQ_CORE1_CLR_MSB, 9
.equ	SIO_RISCV_SOFTIRQ_CORE1_CLR_LSB, 9
#  -----------------------------------------------------------------------------
#  Field       : SIO_RISCV_SOFTIRQ_CORE0_CLR
#  Description : Write 1 to atomically clear the core 0 software interrupt flag.
#                Read to get the status of this flag.
.equ	SIO_RISCV_SOFTIRQ_CORE0_CLR_RESET, 0x0
.equ	SIO_RISCV_SOFTIRQ_CORE0_CLR_BITS, 0x00000100
.equ	SIO_RISCV_SOFTIRQ_CORE0_CLR_MSB, 8
.equ	SIO_RISCV_SOFTIRQ_CORE0_CLR_LSB, 8
#  -----------------------------------------------------------------------------
#  Field       : SIO_RISCV_SOFTIRQ_CORE1_SET
#  Description : Write 1 to atomically set the core 1 software interrupt flag.
#                Read to get the status of this flag.
.equ	SIO_RISCV_SOFTIRQ_CORE1_SET_RESET, 0x0
.equ	SIO_RISCV_SOFTIRQ_CORE1_SET_BITS, 0x00000002
.equ	SIO_RISCV_SOFTIRQ_CORE1_SET_MSB, 1
.equ	SIO_RISCV_SOFTIRQ_CORE1_SET_LSB, 1
#  -----------------------------------------------------------------------------
#  Field       : SIO_RISCV_SOFTIRQ_CORE0_SET
#  Description : Write 1 to atomically set the core 0 software interrupt flag.
#                Read to get the status of this flag.
.equ	SIO_RISCV_SOFTIRQ_CORE0_SET_RESET, 0x0
.equ	SIO_RISCV_SOFTIRQ_CORE0_SET_BITS, 0x00000001
.equ	SIO_RISCV_SOFTIRQ_CORE0_SET_MSB, 0
.equ	SIO_RISCV_SOFTIRQ_CORE0_SET_LSB, 0
#  =============================================================================
#  Register    : SIO_MTIME_CTRL
#  Description : Control register for the RISC-V 64-bit Machine-mode timer. This
#                timer is only present in the Secure SIO, so is only accessible
#                to an Arm core in Secure mode or a RISC-V core in Machine mode.
# 
#                Note whilst this timer follows the RISC-V privileged
#                specification, it is equally usable by the Arm cores. The
#                interrupts are routed to normal system-level interrupt lines as
#                well as to the MIP.MTIP inputs on the RISC-V cores.
.equ	SIO_MTIME_CTRL_OFFSET, 0x000001a4
.equ	SIO_MTIME_CTRL_BITS, 0x0000000f
.equ	SIO_MTIME_CTRL_RESET, 0x0000000d
#  -----------------------------------------------------------------------------
#  Field       : SIO_MTIME_CTRL_DBGPAUSE_CORE1
#  Description : If 1, the timer pauses when core 1 is in the debug halt state.
.equ	SIO_MTIME_CTRL_DBGPAUSE_CORE1_RESET, 0x1
.equ	SIO_MTIME_CTRL_DBGPAUSE_CORE1_BITS, 0x00000008
.equ	SIO_MTIME_CTRL_DBGPAUSE_CORE1_MSB, 3
.equ	SIO_MTIME_CTRL_DBGPAUSE_CORE1_LSB, 3
#  -----------------------------------------------------------------------------
#  Field       : SIO_MTIME_CTRL_DBGPAUSE_CORE0
#  Description : If 1, the timer pauses when core 0 is in the debug halt state.
.equ	SIO_MTIME_CTRL_DBGPAUSE_CORE0_RESET, 0x1
.equ	SIO_MTIME_CTRL_DBGPAUSE_CORE0_BITS, 0x00000004
.equ	SIO_MTIME_CTRL_DBGPAUSE_CORE0_MSB, 2
.equ	SIO_MTIME_CTRL_DBGPAUSE_CORE0_LSB, 2
#  -----------------------------------------------------------------------------
#  Field       : SIO_MTIME_CTRL_FULLSPEED
#  Description : If 1, increment the timer every cycle (i.e. run directly from
#                the system clock), rather than incrementing on the system-level
#                timer tick input.
.equ	SIO_MTIME_CTRL_FULLSPEED_RESET, 0x0
.equ	SIO_MTIME_CTRL_FULLSPEED_BITS, 0x00000002
.equ	SIO_MTIME_CTRL_FULLSPEED_MSB, 1
.equ	SIO_MTIME_CTRL_FULLSPEED_LSB, 1
#  -----------------------------------------------------------------------------
#  Field       : SIO_MTIME_CTRL_EN
#  Description : Timer enable bit. When 0, the timer will not increment
#                automatically.
.equ	SIO_MTIME_CTRL_EN_RESET, 0x1
.equ	SIO_MTIME_CTRL_EN_BITS, 0x00000001
.equ	SIO_MTIME_CTRL_EN_MSB, 0
.equ	SIO_MTIME_CTRL_EN_LSB, 0
#  =============================================================================
#  Register    : SIO_MTIME
#  Description : Read/write access to the high half of RISC-V Machine-mode
#                timer. This register is shared between both cores. If both
#                cores write on the same cycle, core 1 takes precedence.
.equ	SIO_MTIME_OFFSET, 0x000001b0
.equ	SIO_MTIME_BITS, 0xffffffff
.equ	SIO_MTIME_RESET, 0x00000000
.equ	SIO_MTIME_MSB, 31
.equ	SIO_MTIME_LSB, 0
#  =============================================================================
#  Register    : SIO_MTIMEH
#  Description : Read/write access to the high half of RISC-V Machine-mode
#                timer. This register is shared between both cores. If both
#                cores write on the same cycle, core 1 takes precedence.
.equ	SIO_MTIMEH_OFFSET, 0x000001b4
.equ	SIO_MTIMEH_BITS, 0xffffffff
.equ	SIO_MTIMEH_RESET, 0x00000000
.equ	SIO_MTIMEH_MSB, 31
.equ	SIO_MTIMEH_LSB, 0
#  =============================================================================
#  Register    : SIO_MTIMECMP
#  Description : Low half of RISC-V Machine-mode timer comparator. This register
#                is core-local, i.e., each core gets a copy of this register,
#                with the comparison result routed to its own interrupt line.
# 
#                The timer interrupt is asserted whenever MTIME is greater than
#                or equal to MTIMECMP. This comparison is unsigned, and
#                performed on the full 64-bit values.
.equ	SIO_MTIMECMP_OFFSET, 0x000001b8
.equ	SIO_MTIMECMP_BITS, 0xffffffff
.equ	SIO_MTIMECMP_RESET, 0xffffffff
.equ	SIO_MTIMECMP_MSB, 31
.equ	SIO_MTIMECMP_LSB, 0
#  =============================================================================
#  Register    : SIO_MTIMECMPH
#  Description : High half of RISC-V Machine-mode timer comparator. This
#                register is core-local.
# 
#                The timer interrupt is asserted whenever MTIME is greater than
#                or equal to MTIMECMP. This comparison is unsigned, and
#                performed on the full 64-bit values.
.equ	SIO_MTIMECMPH_OFFSET, 0x000001bc
.equ	SIO_MTIMECMPH_BITS, 0xffffffff
.equ	SIO_MTIMECMPH_RESET, 0xffffffff
.equ	SIO_MTIMECMPH_MSB, 31
.equ	SIO_MTIMECMPH_LSB, 0
#  =============================================================================
#  Register    : SIO_TMDS_CTRL
#  Description : Control register for TMDS encoder.
.equ	SIO_TMDS_CTRL_OFFSET, 0x000001c0
.equ	SIO_TMDS_CTRL_BITS, 0x1f9fffff
.equ	SIO_TMDS_CTRL_RESET, 0x00000000
#  -----------------------------------------------------------------------------
#  Field       : SIO_TMDS_CTRL_CLEAR_BALANCE
#  Description : Clear the running DC balance state of the TMDS encoders. This
#                bit should be written once at the beginning of each scanline.
.equ	SIO_TMDS_CTRL_CLEAR_BALANCE_RESET, 0x0
.equ	SIO_TMDS_CTRL_CLEAR_BALANCE_BITS, 0x10000000
.equ	SIO_TMDS_CTRL_CLEAR_BALANCE_MSB, 28
.equ	SIO_TMDS_CTRL_CLEAR_BALANCE_LSB, 28
#  -----------------------------------------------------------------------------
#  Field       : SIO_TMDS_CTRL_PIX2_NOSHIFT
#  Description : When encoding two pixels's worth of symbols in one cycle (a
#                read of a PEEK/POP_DOUBLE register), the second encoder sees a
#                shifted version of the colour data register.
# 
#                This control disables that shift, so that both encoder layers
#                see the same pixel data. This is used for pixel doubling.
.equ	SIO_TMDS_CTRL_PIX2_NOSHIFT_RESET, 0x0
.equ	SIO_TMDS_CTRL_PIX2_NOSHIFT_BITS, 0x08000000
.equ	SIO_TMDS_CTRL_PIX2_NOSHIFT_MSB, 27
.equ	SIO_TMDS_CTRL_PIX2_NOSHIFT_LSB, 27
#  -----------------------------------------------------------------------------
#  Field       : SIO_TMDS_CTRL_PIX_SHIFT
#  Description : Shift applied to the colour data register with each read of a
#                POP alias register.
# 
#                Reading from the POP_SINGLE register, or reading from the
#                POP_DOUBLE register with PIX2_NOSHIFT set (for pixel doubling),
#                shifts by the indicated amount.
# 
#                Reading from a POP_DOUBLE register when PIX2_NOSHIFT is clear
#                will shift by double the indicated amount. (Shift by 32 means
#                no shift.)
#                0x0 -> Do not shift the colour data register.
#                0x1 -> Shift the colour data register by 1 bit
#                0x2 -> Shift the colour data register by 2 bits
#                0x3 -> Shift the colour data register by 4 bits
#                0x4 -> Shift the colour data register by 8 bits
#                0x5 -> Shift the colour data register by 16 bits
.equ	SIO_TMDS_CTRL_PIX_SHIFT_RESET, 0x0
.equ	SIO_TMDS_CTRL_PIX_SHIFT_BITS, 0x07000000
.equ	SIO_TMDS_CTRL_PIX_SHIFT_MSB, 26
.equ	SIO_TMDS_CTRL_PIX_SHIFT_LSB, 24
.equ	SIO_TMDS_CTRL_PIX_SHIFT_VALUE_0, 0x0
.equ	SIO_TMDS_CTRL_PIX_SHIFT_VALUE_1, 0x1
.equ	SIO_TMDS_CTRL_PIX_SHIFT_VALUE_2, 0x2
.equ	SIO_TMDS_CTRL_PIX_SHIFT_VALUE_4, 0x3
.equ	SIO_TMDS_CTRL_PIX_SHIFT_VALUE_8, 0x4
.equ	SIO_TMDS_CTRL_PIX_SHIFT_VALUE_16, 0x5
#  -----------------------------------------------------------------------------
#  Field       : SIO_TMDS_CTRL_INTERLEAVE
#  Description : Enable lane interleaving for reads of PEEK_SINGLE/POP_SINGLE.
# 
#                When interleaving is disabled, each of the 3 symbols appears as
#                a contiguous 10-bit field, with lane 0 being the least-
#                significant and starting at bit 0 of the register.
# 
#                When interleaving is enabled, the symbols are packed into 5
#                chunks of 3 lanes times 2 bits (30 bits total). Each chunk
#                contains two bits of a TMDS symbol per lane, with lane 0 being
#                the least significant.
.equ	SIO_TMDS_CTRL_INTERLEAVE_RESET, 0x0
.equ	SIO_TMDS_CTRL_INTERLEAVE_BITS, 0x00800000
.equ	SIO_TMDS_CTRL_INTERLEAVE_MSB, 23
.equ	SIO_TMDS_CTRL_INTERLEAVE_LSB, 23
#  -----------------------------------------------------------------------------
#  Field       : SIO_TMDS_CTRL_L2_NBITS
#  Description : Number of valid colour MSBs for lane 2 (1-8 bits, encoded as 0
#                through 7). Remaining LSBs are masked to 0 after the rotate.
.equ	SIO_TMDS_CTRL_L2_NBITS_RESET, 0x0
.equ	SIO_TMDS_CTRL_L2_NBITS_BITS, 0x001c0000
.equ	SIO_TMDS_CTRL_L2_NBITS_MSB, 20
.equ	SIO_TMDS_CTRL_L2_NBITS_LSB, 18
#  -----------------------------------------------------------------------------
#  Field       : SIO_TMDS_CTRL_L1_NBITS
#  Description : Number of valid colour MSBs for lane 1 (1-8 bits, encoded as 0
#                through 7). Remaining LSBs are masked to 0 after the rotate.
.equ	SIO_TMDS_CTRL_L1_NBITS_RESET, 0x0
.equ	SIO_TMDS_CTRL_L1_NBITS_BITS, 0x00038000
.equ	SIO_TMDS_CTRL_L1_NBITS_MSB, 17
.equ	SIO_TMDS_CTRL_L1_NBITS_LSB, 15
#  -----------------------------------------------------------------------------
#  Field       : SIO_TMDS_CTRL_L0_NBITS
#  Description : Number of valid colour MSBs for lane 0 (1-8 bits, encoded as 0
#                through 7). Remaining LSBs are masked to 0 after the rotate.
.equ	SIO_TMDS_CTRL_L0_NBITS_RESET, 0x0
.equ	SIO_TMDS_CTRL_L0_NBITS_BITS, 0x00007000
.equ	SIO_TMDS_CTRL_L0_NBITS_MSB, 14
.equ	SIO_TMDS_CTRL_L0_NBITS_LSB, 12
#  -----------------------------------------------------------------------------
#  Field       : SIO_TMDS_CTRL_L2_ROT
#  Description : Right-rotate the 16 LSBs of the colour accumulator by 0-15
#                bits, in order to get the MSB of the lane 2 (red) colour data
#                aligned with the MSB of the 8-bit encoder input.
# 
#                For example, for RGB565 (red most significant), red is bits
#                15:11, so should be right-rotated by 8 bits to align with bits
#                7:3 of the encoder input.
.equ	SIO_TMDS_CTRL_L2_ROT_RESET, 0x0
.equ	SIO_TMDS_CTRL_L2_ROT_BITS, 0x00000f00
.equ	SIO_TMDS_CTRL_L2_ROT_MSB, 11
.equ	SIO_TMDS_CTRL_L2_ROT_LSB, 8
#  -----------------------------------------------------------------------------
#  Field       : SIO_TMDS_CTRL_L1_ROT
#  Description : Right-rotate the 16 LSBs of the colour accumulator by 0-15
#                bits, in order to get the MSB of the lane 1 (green) colour data
#                aligned with the MSB of the 8-bit encoder input.
# 
#                For example, for RGB565, green is bits 10:5, so should be
#                right-rotated by 3 bits to align with bits 7:2 of the encoder
#                input.
.equ	SIO_TMDS_CTRL_L1_ROT_RESET, 0x0
.equ	SIO_TMDS_CTRL_L1_ROT_BITS, 0x000000f0
.equ	SIO_TMDS_CTRL_L1_ROT_MSB, 7
.equ	SIO_TMDS_CTRL_L1_ROT_LSB, 4
#  -----------------------------------------------------------------------------
#  Field       : SIO_TMDS_CTRL_L0_ROT
#  Description : Right-rotate the 16 LSBs of the colour accumulator by 0-15
#                bits, in order to get the MSB of the lane 0 (blue) colour data
#                aligned with the MSB of the 8-bit encoder input.
# 
#                For example, for RGB565 (red most significant), blue is bits
#                4:0, so should be right-rotated by 13 to align with bits 7:3 of
#                the encoder input.
.equ	SIO_TMDS_CTRL_L0_ROT_RESET, 0x0
.equ	SIO_TMDS_CTRL_L0_ROT_BITS, 0x0000000f
.equ	SIO_TMDS_CTRL_L0_ROT_MSB, 3
.equ	SIO_TMDS_CTRL_L0_ROT_LSB, 0
#  =============================================================================
#  Register    : SIO_TMDS_WDATA
#  Description : Write-only access to the TMDS colour data register.
.equ	SIO_TMDS_WDATA_OFFSET, 0x000001c4
.equ	SIO_TMDS_WDATA_BITS, 0xffffffff
.equ	SIO_TMDS_WDATA_RESET, 0x00000000
.equ	SIO_TMDS_WDATA_MSB, 31
.equ	SIO_TMDS_WDATA_LSB, 0
#  =============================================================================
#  Register    : SIO_TMDS_PEEK_SINGLE
#  Description : Get the encoding of one pixel's worth of colour data, packed
#                into a 32-bit value (3x10-bit symbols).
# 
#                The PEEK alias does not shift the colour register when read,
#                but still advances the running DC balance state of each
#                encoder. This is useful for pixel doubling.
.equ	SIO_TMDS_PEEK_SINGLE_OFFSET, 0x000001c8
.equ	SIO_TMDS_PEEK_SINGLE_BITS, 0xffffffff
.equ	SIO_TMDS_PEEK_SINGLE_RESET, 0x00000000
.equ	SIO_TMDS_PEEK_SINGLE_MSB, 31
.equ	SIO_TMDS_PEEK_SINGLE_LSB, 0
#  =============================================================================
#  Register    : SIO_TMDS_POP_SINGLE
#  Description : Get the encoding of one pixel's worth of colour data, packed
#                into a 32-bit value. The packing is 5 chunks of 3 lanes times 2
#                bits (30 bits total). Each chunk contains two bits of a TMDS
#                symbol per lane. This format is intended for shifting out with
#                the HSTX peripheral on RP2350.
# 
#                The POP alias shifts the colour register when read, as well as
#                advancing the running DC balance state of each encoder.
.equ	SIO_TMDS_POP_SINGLE_OFFSET, 0x000001cc
.equ	SIO_TMDS_POP_SINGLE_BITS, 0xffffffff
.equ	SIO_TMDS_POP_SINGLE_RESET, 0x00000000
.equ	SIO_TMDS_POP_SINGLE_MSB, 31
.equ	SIO_TMDS_POP_SINGLE_LSB, 0
#  =============================================================================
#  Register    : SIO_TMDS_PEEK_DOUBLE_L0
#  Description : Get lane 0 of the encoding of two pixels' worth of colour data.
#                Two 10-bit TMDS symbols are packed at the bottom of a 32-bit
#                word.
# 
#                The PEEK alias does not shift the colour register when read,
#                but still advances the lane 0 DC balance state. This is useful
#                if all 3 lanes' worth of encode are to be read at once, rather
#                than processing the entire scanline for one lane before moving
#                to the next lane.
.equ	SIO_TMDS_PEEK_DOUBLE_L0_OFFSET, 0x000001d0
.equ	SIO_TMDS_PEEK_DOUBLE_L0_BITS, 0xffffffff
.equ	SIO_TMDS_PEEK_DOUBLE_L0_RESET, 0x00000000
.equ	SIO_TMDS_PEEK_DOUBLE_L0_MSB, 31
.equ	SIO_TMDS_PEEK_DOUBLE_L0_LSB, 0
#  =============================================================================
#  Register    : SIO_TMDS_POP_DOUBLE_L0
#  Description : Get lane 0 of the encoding of two pixels' worth of colour data.
#                Two 10-bit TMDS symbols are packed at the bottom of a 32-bit
#                word.
# 
#                The POP alias shifts the colour register when read, according
#                to the values of PIX_SHIFT and PIX2_NOSHIFT.
.equ	SIO_TMDS_POP_DOUBLE_L0_OFFSET, 0x000001d4
.equ	SIO_TMDS_POP_DOUBLE_L0_BITS, 0xffffffff
.equ	SIO_TMDS_POP_DOUBLE_L0_RESET, 0x00000000
.equ	SIO_TMDS_POP_DOUBLE_L0_MSB, 31
.equ	SIO_TMDS_POP_DOUBLE_L0_LSB, 0
#  =============================================================================
#  Register    : SIO_TMDS_PEEK_DOUBLE_L1
#  Description : Get lane 1 of the encoding of two pixels' worth of colour data.
#                Two 10-bit TMDS symbols are packed at the bottom of a 32-bit
#                word.
# 
#                The PEEK alias does not shift the colour register when read,
#                but still advances the lane 1 DC balance state. This is useful
#                if all 3 lanes' worth of encode are to be read at once, rather
#                than processing the entire scanline for one lane before moving
#                to the next lane.
.equ	SIO_TMDS_PEEK_DOUBLE_L1_OFFSET, 0x000001d8
.equ	SIO_TMDS_PEEK_DOUBLE_L1_BITS, 0xffffffff
.equ	SIO_TMDS_PEEK_DOUBLE_L1_RESET, 0x00000000
.equ	SIO_TMDS_PEEK_DOUBLE_L1_MSB, 31
.equ	SIO_TMDS_PEEK_DOUBLE_L1_LSB, 0
#  =============================================================================
#  Register    : SIO_TMDS_POP_DOUBLE_L1
#  Description : Get lane 1 of the encoding of two pixels' worth of colour data.
#                Two 10-bit TMDS symbols are packed at the bottom of a 32-bit
#                word.
# 
#                The POP alias shifts the colour register when read, according
#                to the values of PIX_SHIFT and PIX2_NOSHIFT.
.equ	SIO_TMDS_POP_DOUBLE_L1_OFFSET, 0x000001dc
.equ	SIO_TMDS_POP_DOUBLE_L1_BITS, 0xffffffff
.equ	SIO_TMDS_POP_DOUBLE_L1_RESET, 0x00000000
.equ	SIO_TMDS_POP_DOUBLE_L1_MSB, 31
.equ	SIO_TMDS_POP_DOUBLE_L1_LSB, 0
#  =============================================================================
#  Register    : SIO_TMDS_PEEK_DOUBLE_L2
#  Description : Get lane 2 of the encoding of two pixels' worth of colour data.
#                Two 10-bit TMDS symbols are packed at the bottom of a 32-bit
#                word.
# 
#                The PEEK alias does not shift the colour register when read,
#                but still advances the lane 2 DC balance state. This is useful
#                if all 3 lanes' worth of encode are to be read at once, rather
#                than processing the entire scanline for one lane before moving
#                to the next lane.
.equ	SIO_TMDS_PEEK_DOUBLE_L2_OFFSET, 0x000001e0
.equ	SIO_TMDS_PEEK_DOUBLE_L2_BITS, 0xffffffff
.equ	SIO_TMDS_PEEK_DOUBLE_L2_RESET, 0x00000000
.equ	SIO_TMDS_PEEK_DOUBLE_L2_MSB, 31
.equ	SIO_TMDS_PEEK_DOUBLE_L2_LSB, 0
#  =============================================================================
#  Register    : SIO_TMDS_POP_DOUBLE_L2
#  Description : Get lane 2 of the encoding of two pixels' worth of colour data.
#                Two 10-bit TMDS symbols are packed at the bottom of a 32-bit
#                word.
# 
#                The POP alias shifts the colour register when read, according
#                to the values of PIX_SHIFT and PIX2_NOSHIFT.
.equ	SIO_TMDS_POP_DOUBLE_L2_OFFSET, 0x000001e4
.equ	SIO_TMDS_POP_DOUBLE_L2_BITS, 0xffffffff
.equ	SIO_TMDS_POP_DOUBLE_L2_RESET, 0x00000000
.equ	SIO_TMDS_POP_DOUBLE_L2_MSB, 31
.equ	SIO_TMDS_POP_DOUBLE_L2_LSB, 0
#  =============================================================================
.endif # _HARDWARE_REGS_SIO_H
