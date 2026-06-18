#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : RESETS
# Version        : 1
# Bus type       : apb
# =============================================================================
.ifndef	_HARDWARE_REGS_RESETS_H
.set	_HARDWARE_REGS_RESETS_H, 1
# =============================================================================
# Register    : RESETS_RESET
.equ	RESETS_RESET_OFFSET, 0x00000000
.equ	RESETS_RESET_BITS, 0x1fffffff
.equ	RESETS_RESET_RESET, 0x1fffffff
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_USBCTRL
.equ	RESETS_RESET_USBCTRL_RESET, 0x1
.equ	RESETS_RESET_USBCTRL_BITS, 0x10000000
.equ	RESETS_RESET_USBCTRL_MSB, 28
.equ	RESETS_RESET_USBCTRL_LSB, 28
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_UART1
.equ	RESETS_RESET_UART1_RESET, 0x1
.equ	RESETS_RESET_UART1_BITS, 0x08000000
.equ	RESETS_RESET_UART1_MSB, 27
.equ	RESETS_RESET_UART1_LSB, 27
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_UART0
.equ	RESETS_RESET_UART0_RESET, 0x1
.equ	RESETS_RESET_UART0_BITS, 0x04000000
.equ	RESETS_RESET_UART0_MSB, 26
.equ	RESETS_RESET_UART0_LSB, 26
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_TRNG
.equ	RESETS_RESET_TRNG_RESET, 0x1
.equ	RESETS_RESET_TRNG_BITS, 0x02000000
.equ	RESETS_RESET_TRNG_MSB, 25
.equ	RESETS_RESET_TRNG_LSB, 25
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_TIMER1
.equ	RESETS_RESET_TIMER1_RESET, 0x1
.equ	RESETS_RESET_TIMER1_BITS, 0x01000000
.equ	RESETS_RESET_TIMER1_MSB, 24
.equ	RESETS_RESET_TIMER1_LSB, 24
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_TIMER0
.equ	RESETS_RESET_TIMER0_RESET, 0x1
.equ	RESETS_RESET_TIMER0_BITS, 0x00800000
.equ	RESETS_RESET_TIMER0_MSB, 23
.equ	RESETS_RESET_TIMER0_LSB, 23
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_TBMAN
.equ	RESETS_RESET_TBMAN_RESET, 0x1
.equ	RESETS_RESET_TBMAN_BITS, 0x00400000
.equ	RESETS_RESET_TBMAN_MSB, 22
.equ	RESETS_RESET_TBMAN_LSB, 22
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_SYSINFO
.equ	RESETS_RESET_SYSINFO_RESET, 0x1
.equ	RESETS_RESET_SYSINFO_BITS, 0x00200000
.equ	RESETS_RESET_SYSINFO_MSB, 21
.equ	RESETS_RESET_SYSINFO_LSB, 21
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_SYSCFG
.equ	RESETS_RESET_SYSCFG_RESET, 0x1
.equ	RESETS_RESET_SYSCFG_BITS, 0x00100000
.equ	RESETS_RESET_SYSCFG_MSB, 20
.equ	RESETS_RESET_SYSCFG_LSB, 20
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_SPI1
.equ	RESETS_RESET_SPI1_RESET, 0x1
.equ	RESETS_RESET_SPI1_BITS, 0x00080000
.equ	RESETS_RESET_SPI1_MSB, 19
.equ	RESETS_RESET_SPI1_LSB, 19
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_SPI0
.equ	RESETS_RESET_SPI0_RESET, 0x1
.equ	RESETS_RESET_SPI0_BITS, 0x00040000
.equ	RESETS_RESET_SPI0_MSB, 18
.equ	RESETS_RESET_SPI0_LSB, 18
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_SHA256
.equ	RESETS_RESET_SHA256_RESET, 0x1
.equ	RESETS_RESET_SHA256_BITS, 0x00020000
.equ	RESETS_RESET_SHA256_MSB, 17
.equ	RESETS_RESET_SHA256_LSB, 17
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_PWM
.equ	RESETS_RESET_PWM_RESET, 0x1
.equ	RESETS_RESET_PWM_BITS, 0x00010000
.equ	RESETS_RESET_PWM_MSB, 16
.equ	RESETS_RESET_PWM_LSB, 16
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_PLL_USB
.equ	RESETS_RESET_PLL_USB_RESET, 0x1
.equ	RESETS_RESET_PLL_USB_BITS, 0x00008000
.equ	RESETS_RESET_PLL_USB_MSB, 15
.equ	RESETS_RESET_PLL_USB_LSB, 15
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_PLL_SYS
.equ	RESETS_RESET_PLL_SYS_RESET, 0x1
.equ	RESETS_RESET_PLL_SYS_BITS, 0x00004000
.equ	RESETS_RESET_PLL_SYS_MSB, 14
.equ	RESETS_RESET_PLL_SYS_LSB, 14
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_PIO2
.equ	RESETS_RESET_PIO2_RESET, 0x1
.equ	RESETS_RESET_PIO2_BITS, 0x00002000
.equ	RESETS_RESET_PIO2_MSB, 13
.equ	RESETS_RESET_PIO2_LSB, 13
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_PIO1
.equ	RESETS_RESET_PIO1_RESET, 0x1
.equ	RESETS_RESET_PIO1_BITS, 0x00001000
.equ	RESETS_RESET_PIO1_MSB, 12
.equ	RESETS_RESET_PIO1_LSB, 12
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_PIO0
.equ	RESETS_RESET_PIO0_RESET, 0x1
.equ	RESETS_RESET_PIO0_BITS, 0x00000800
.equ	RESETS_RESET_PIO0_MSB, 11
.equ	RESETS_RESET_PIO0_LSB, 11
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_PADS_QSPI
.equ	RESETS_RESET_PADS_QSPI_RESET, 0x1
.equ	RESETS_RESET_PADS_QSPI_BITS, 0x00000400
.equ	RESETS_RESET_PADS_QSPI_MSB, 10
.equ	RESETS_RESET_PADS_QSPI_LSB, 10
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_PADS_BANK0
.equ	RESETS_RESET_PADS_BANK0_RESET, 0x1
.equ	RESETS_RESET_PADS_BANK0_BITS, 0x00000200
.equ	RESETS_RESET_PADS_BANK0_MSB, 9
.equ	RESETS_RESET_PADS_BANK0_LSB, 9
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_JTAG
.equ	RESETS_RESET_JTAG_RESET, 0x1
.equ	RESETS_RESET_JTAG_BITS, 0x00000100
.equ	RESETS_RESET_JTAG_MSB, 8
.equ	RESETS_RESET_JTAG_LSB, 8
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_IO_QSPI
.equ	RESETS_RESET_IO_QSPI_RESET, 0x1
.equ	RESETS_RESET_IO_QSPI_BITS, 0x00000080
.equ	RESETS_RESET_IO_QSPI_MSB, 7
.equ	RESETS_RESET_IO_QSPI_LSB, 7
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_IO_BANK0
.equ	RESETS_RESET_IO_BANK0_RESET, 0x1
.equ	RESETS_RESET_IO_BANK0_BITS, 0x00000040
.equ	RESETS_RESET_IO_BANK0_MSB, 6
.equ	RESETS_RESET_IO_BANK0_LSB, 6
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_I2C1
.equ	RESETS_RESET_I2C1_RESET, 0x1
.equ	RESETS_RESET_I2C1_BITS, 0x00000020
.equ	RESETS_RESET_I2C1_MSB, 5
.equ	RESETS_RESET_I2C1_LSB, 5
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_I2C0
.equ	RESETS_RESET_I2C0_RESET, 0x1
.equ	RESETS_RESET_I2C0_BITS, 0x00000010
.equ	RESETS_RESET_I2C0_MSB, 4
.equ	RESETS_RESET_I2C0_LSB, 4
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_HSTX
.equ	RESETS_RESET_HSTX_RESET, 0x1
.equ	RESETS_RESET_HSTX_BITS, 0x00000008
.equ	RESETS_RESET_HSTX_MSB, 3
.equ	RESETS_RESET_HSTX_LSB, 3
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DMA
.equ	RESETS_RESET_DMA_RESET, 0x1
.equ	RESETS_RESET_DMA_BITS, 0x00000004
.equ	RESETS_RESET_DMA_MSB, 2
.equ	RESETS_RESET_DMA_LSB, 2
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_BUSCTRL
.equ	RESETS_RESET_BUSCTRL_RESET, 0x1
.equ	RESETS_RESET_BUSCTRL_BITS, 0x00000002
.equ	RESETS_RESET_BUSCTRL_MSB, 1
.equ	RESETS_RESET_BUSCTRL_LSB, 1
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_ADC
.equ	RESETS_RESET_ADC_RESET, 0x1
.equ	RESETS_RESET_ADC_BITS, 0x00000001
.equ	RESETS_RESET_ADC_MSB, 0
.equ	RESETS_RESET_ADC_LSB, 0
# =============================================================================
# Register    : RESETS_WDSEL
.equ	RESETS_WDSEL_OFFSET, 0x00000004
.equ	RESETS_WDSEL_BITS, 0x1fffffff
.equ	RESETS_WDSEL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RESETS_WDSEL_USBCTRL
.equ	RESETS_WDSEL_USBCTRL_RESET, 0x0
.equ	RESETS_WDSEL_USBCTRL_BITS, 0x10000000
.equ	RESETS_WDSEL_USBCTRL_MSB, 28
.equ	RESETS_WDSEL_USBCTRL_LSB, 28
# -----------------------------------------------------------------------------
# Field       : RESETS_WDSEL_UART1
.equ	RESETS_WDSEL_UART1_RESET, 0x0
.equ	RESETS_WDSEL_UART1_BITS, 0x08000000
.equ	RESETS_WDSEL_UART1_MSB, 27
.equ	RESETS_WDSEL_UART1_LSB, 27
# -----------------------------------------------------------------------------
# Field       : RESETS_WDSEL_UART0
.equ	RESETS_WDSEL_UART0_RESET, 0x0
.equ	RESETS_WDSEL_UART0_BITS, 0x04000000
.equ	RESETS_WDSEL_UART0_MSB, 26
.equ	RESETS_WDSEL_UART0_LSB, 26
# -----------------------------------------------------------------------------
# Field       : RESETS_WDSEL_TRNG
.equ	RESETS_WDSEL_TRNG_RESET, 0x0
.equ	RESETS_WDSEL_TRNG_BITS, 0x02000000
.equ	RESETS_WDSEL_TRNG_MSB, 25
.equ	RESETS_WDSEL_TRNG_LSB, 25
# -----------------------------------------------------------------------------
# Field       : RESETS_WDSEL_TIMER1
.equ	RESETS_WDSEL_TIMER1_RESET, 0x0
.equ	RESETS_WDSEL_TIMER1_BITS, 0x01000000
.equ	RESETS_WDSEL_TIMER1_MSB, 24
.equ	RESETS_WDSEL_TIMER1_LSB, 24
# -----------------------------------------------------------------------------
# Field       : RESETS_WDSEL_TIMER0
.equ	RESETS_WDSEL_TIMER0_RESET, 0x0
.equ	RESETS_WDSEL_TIMER0_BITS, 0x00800000
.equ	RESETS_WDSEL_TIMER0_MSB, 23
.equ	RESETS_WDSEL_TIMER0_LSB, 23
# -----------------------------------------------------------------------------
# Field       : RESETS_WDSEL_TBMAN
.equ	RESETS_WDSEL_TBMAN_RESET, 0x0
.equ	RESETS_WDSEL_TBMAN_BITS, 0x00400000
.equ	RESETS_WDSEL_TBMAN_MSB, 22
.equ	RESETS_WDSEL_TBMAN_LSB, 22
# -----------------------------------------------------------------------------
# Field       : RESETS_WDSEL_SYSINFO
.equ	RESETS_WDSEL_SYSINFO_RESET, 0x0
.equ	RESETS_WDSEL_SYSINFO_BITS, 0x00200000
.equ	RESETS_WDSEL_SYSINFO_MSB, 21
.equ	RESETS_WDSEL_SYSINFO_LSB, 21
# -----------------------------------------------------------------------------
# Field       : RESETS_WDSEL_SYSCFG
.equ	RESETS_WDSEL_SYSCFG_RESET, 0x0
.equ	RESETS_WDSEL_SYSCFG_BITS, 0x00100000
.equ	RESETS_WDSEL_SYSCFG_MSB, 20
.equ	RESETS_WDSEL_SYSCFG_LSB, 20
# -----------------------------------------------------------------------------
# Field       : RESETS_WDSEL_SPI1
.equ	RESETS_WDSEL_SPI1_RESET, 0x0
.equ	RESETS_WDSEL_SPI1_BITS, 0x00080000
.equ	RESETS_WDSEL_SPI1_MSB, 19
.equ	RESETS_WDSEL_SPI1_LSB, 19
# -----------------------------------------------------------------------------
# Field       : RESETS_WDSEL_SPI0
.equ	RESETS_WDSEL_SPI0_RESET, 0x0
.equ	RESETS_WDSEL_SPI0_BITS, 0x00040000
.equ	RESETS_WDSEL_SPI0_MSB, 18
.equ	RESETS_WDSEL_SPI0_LSB, 18
# -----------------------------------------------------------------------------
# Field       : RESETS_WDSEL_SHA256
.equ	RESETS_WDSEL_SHA256_RESET, 0x0
.equ	RESETS_WDSEL_SHA256_BITS, 0x00020000
.equ	RESETS_WDSEL_SHA256_MSB, 17
.equ	RESETS_WDSEL_SHA256_LSB, 17
# -----------------------------------------------------------------------------
# Field       : RESETS_WDSEL_PWM
.equ	RESETS_WDSEL_PWM_RESET, 0x0
.equ	RESETS_WDSEL_PWM_BITS, 0x00010000
.equ	RESETS_WDSEL_PWM_MSB, 16
.equ	RESETS_WDSEL_PWM_LSB, 16
# -----------------------------------------------------------------------------
# Field       : RESETS_WDSEL_PLL_USB
.equ	RESETS_WDSEL_PLL_USB_RESET, 0x0
.equ	RESETS_WDSEL_PLL_USB_BITS, 0x00008000
.equ	RESETS_WDSEL_PLL_USB_MSB, 15
.equ	RESETS_WDSEL_PLL_USB_LSB, 15
# -----------------------------------------------------------------------------
# Field       : RESETS_WDSEL_PLL_SYS
.equ	RESETS_WDSEL_PLL_SYS_RESET, 0x0
.equ	RESETS_WDSEL_PLL_SYS_BITS, 0x00004000
.equ	RESETS_WDSEL_PLL_SYS_MSB, 14
.equ	RESETS_WDSEL_PLL_SYS_LSB, 14
# -----------------------------------------------------------------------------
# Field       : RESETS_WDSEL_PIO2
.equ	RESETS_WDSEL_PIO2_RESET, 0x0
.equ	RESETS_WDSEL_PIO2_BITS, 0x00002000
.equ	RESETS_WDSEL_PIO2_MSB, 13
.equ	RESETS_WDSEL_PIO2_LSB, 13
# -----------------------------------------------------------------------------
# Field       : RESETS_WDSEL_PIO1
.equ	RESETS_WDSEL_PIO1_RESET, 0x0
.equ	RESETS_WDSEL_PIO1_BITS, 0x00001000
.equ	RESETS_WDSEL_PIO1_MSB, 12
.equ	RESETS_WDSEL_PIO1_LSB, 12
# -----------------------------------------------------------------------------
# Field       : RESETS_WDSEL_PIO0
.equ	RESETS_WDSEL_PIO0_RESET, 0x0
.equ	RESETS_WDSEL_PIO0_BITS, 0x00000800
.equ	RESETS_WDSEL_PIO0_MSB, 11
.equ	RESETS_WDSEL_PIO0_LSB, 11
# -----------------------------------------------------------------------------
# Field       : RESETS_WDSEL_PADS_QSPI
.equ	RESETS_WDSEL_PADS_QSPI_RESET, 0x0
.equ	RESETS_WDSEL_PADS_QSPI_BITS, 0x00000400
.equ	RESETS_WDSEL_PADS_QSPI_MSB, 10
.equ	RESETS_WDSEL_PADS_QSPI_LSB, 10
# -----------------------------------------------------------------------------
# Field       : RESETS_WDSEL_PADS_BANK0
.equ	RESETS_WDSEL_PADS_BANK0_RESET, 0x0
.equ	RESETS_WDSEL_PADS_BANK0_BITS, 0x00000200
.equ	RESETS_WDSEL_PADS_BANK0_MSB, 9
.equ	RESETS_WDSEL_PADS_BANK0_LSB, 9
# -----------------------------------------------------------------------------
# Field       : RESETS_WDSEL_JTAG
.equ	RESETS_WDSEL_JTAG_RESET, 0x0
.equ	RESETS_WDSEL_JTAG_BITS, 0x00000100
.equ	RESETS_WDSEL_JTAG_MSB, 8
.equ	RESETS_WDSEL_JTAG_LSB, 8
# -----------------------------------------------------------------------------
# Field       : RESETS_WDSEL_IO_QSPI
.equ	RESETS_WDSEL_IO_QSPI_RESET, 0x0
.equ	RESETS_WDSEL_IO_QSPI_BITS, 0x00000080
.equ	RESETS_WDSEL_IO_QSPI_MSB, 7
.equ	RESETS_WDSEL_IO_QSPI_LSB, 7
# -----------------------------------------------------------------------------
# Field       : RESETS_WDSEL_IO_BANK0
.equ	RESETS_WDSEL_IO_BANK0_RESET, 0x0
.equ	RESETS_WDSEL_IO_BANK0_BITS, 0x00000040
.equ	RESETS_WDSEL_IO_BANK0_MSB, 6
.equ	RESETS_WDSEL_IO_BANK0_LSB, 6
# -----------------------------------------------------------------------------
# Field       : RESETS_WDSEL_I2C1
.equ	RESETS_WDSEL_I2C1_RESET, 0x0
.equ	RESETS_WDSEL_I2C1_BITS, 0x00000020
.equ	RESETS_WDSEL_I2C1_MSB, 5
.equ	RESETS_WDSEL_I2C1_LSB, 5
# -----------------------------------------------------------------------------
# Field       : RESETS_WDSEL_I2C0
.equ	RESETS_WDSEL_I2C0_RESET, 0x0
.equ	RESETS_WDSEL_I2C0_BITS, 0x00000010
.equ	RESETS_WDSEL_I2C0_MSB, 4
.equ	RESETS_WDSEL_I2C0_LSB, 4
# -----------------------------------------------------------------------------
# Field       : RESETS_WDSEL_HSTX
.equ	RESETS_WDSEL_HSTX_RESET, 0x0
.equ	RESETS_WDSEL_HSTX_BITS, 0x00000008
.equ	RESETS_WDSEL_HSTX_MSB, 3
.equ	RESETS_WDSEL_HSTX_LSB, 3
# -----------------------------------------------------------------------------
# Field       : RESETS_WDSEL_DMA
.equ	RESETS_WDSEL_DMA_RESET, 0x0
.equ	RESETS_WDSEL_DMA_BITS, 0x00000004
.equ	RESETS_WDSEL_DMA_MSB, 2
.equ	RESETS_WDSEL_DMA_LSB, 2
# -----------------------------------------------------------------------------
# Field       : RESETS_WDSEL_BUSCTRL
.equ	RESETS_WDSEL_BUSCTRL_RESET, 0x0
.equ	RESETS_WDSEL_BUSCTRL_BITS, 0x00000002
.equ	RESETS_WDSEL_BUSCTRL_MSB, 1
.equ	RESETS_WDSEL_BUSCTRL_LSB, 1
# -----------------------------------------------------------------------------
# Field       : RESETS_WDSEL_ADC
.equ	RESETS_WDSEL_ADC_RESET, 0x0
.equ	RESETS_WDSEL_ADC_BITS, 0x00000001
.equ	RESETS_WDSEL_ADC_MSB, 0
.equ	RESETS_WDSEL_ADC_LSB, 0
# =============================================================================
# Register    : RESETS_RESET_DONE
.equ	RESETS_RESET_DONE_OFFSET, 0x00000008
.equ	RESETS_RESET_DONE_BITS, 0x1fffffff
.equ	RESETS_RESET_DONE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DONE_USBCTRL
.equ	RESETS_RESET_DONE_USBCTRL_RESET, 0x0
.equ	RESETS_RESET_DONE_USBCTRL_BITS, 0x10000000
.equ	RESETS_RESET_DONE_USBCTRL_MSB, 28
.equ	RESETS_RESET_DONE_USBCTRL_LSB, 28
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DONE_UART1
.equ	RESETS_RESET_DONE_UART1_RESET, 0x0
.equ	RESETS_RESET_DONE_UART1_BITS, 0x08000000
.equ	RESETS_RESET_DONE_UART1_MSB, 27
.equ	RESETS_RESET_DONE_UART1_LSB, 27
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DONE_UART0
.equ	RESETS_RESET_DONE_UART0_RESET, 0x0
.equ	RESETS_RESET_DONE_UART0_BITS, 0x04000000
.equ	RESETS_RESET_DONE_UART0_MSB, 26
.equ	RESETS_RESET_DONE_UART0_LSB, 26
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DONE_TRNG
.equ	RESETS_RESET_DONE_TRNG_RESET, 0x0
.equ	RESETS_RESET_DONE_TRNG_BITS, 0x02000000
.equ	RESETS_RESET_DONE_TRNG_MSB, 25
.equ	RESETS_RESET_DONE_TRNG_LSB, 25
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DONE_TIMER1
.equ	RESETS_RESET_DONE_TIMER1_RESET, 0x0
.equ	RESETS_RESET_DONE_TIMER1_BITS, 0x01000000
.equ	RESETS_RESET_DONE_TIMER1_MSB, 24
.equ	RESETS_RESET_DONE_TIMER1_LSB, 24
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DONE_TIMER0
.equ	RESETS_RESET_DONE_TIMER0_RESET, 0x0
.equ	RESETS_RESET_DONE_TIMER0_BITS, 0x00800000
.equ	RESETS_RESET_DONE_TIMER0_MSB, 23
.equ	RESETS_RESET_DONE_TIMER0_LSB, 23
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DONE_TBMAN
.equ	RESETS_RESET_DONE_TBMAN_RESET, 0x0
.equ	RESETS_RESET_DONE_TBMAN_BITS, 0x00400000
.equ	RESETS_RESET_DONE_TBMAN_MSB, 22
.equ	RESETS_RESET_DONE_TBMAN_LSB, 22
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DONE_SYSINFO
.equ	RESETS_RESET_DONE_SYSINFO_RESET, 0x0
.equ	RESETS_RESET_DONE_SYSINFO_BITS, 0x00200000
.equ	RESETS_RESET_DONE_SYSINFO_MSB, 21
.equ	RESETS_RESET_DONE_SYSINFO_LSB, 21
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DONE_SYSCFG
.equ	RESETS_RESET_DONE_SYSCFG_RESET, 0x0
.equ	RESETS_RESET_DONE_SYSCFG_BITS, 0x00100000
.equ	RESETS_RESET_DONE_SYSCFG_MSB, 20
.equ	RESETS_RESET_DONE_SYSCFG_LSB, 20
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DONE_SPI1
.equ	RESETS_RESET_DONE_SPI1_RESET, 0x0
.equ	RESETS_RESET_DONE_SPI1_BITS, 0x00080000
.equ	RESETS_RESET_DONE_SPI1_MSB, 19
.equ	RESETS_RESET_DONE_SPI1_LSB, 19
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DONE_SPI0
.equ	RESETS_RESET_DONE_SPI0_RESET, 0x0
.equ	RESETS_RESET_DONE_SPI0_BITS, 0x00040000
.equ	RESETS_RESET_DONE_SPI0_MSB, 18
.equ	RESETS_RESET_DONE_SPI0_LSB, 18
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DONE_SHA256
.equ	RESETS_RESET_DONE_SHA256_RESET, 0x0
.equ	RESETS_RESET_DONE_SHA256_BITS, 0x00020000
.equ	RESETS_RESET_DONE_SHA256_MSB, 17
.equ	RESETS_RESET_DONE_SHA256_LSB, 17
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DONE_PWM
.equ	RESETS_RESET_DONE_PWM_RESET, 0x0
.equ	RESETS_RESET_DONE_PWM_BITS, 0x00010000
.equ	RESETS_RESET_DONE_PWM_MSB, 16
.equ	RESETS_RESET_DONE_PWM_LSB, 16
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DONE_PLL_USB
.equ	RESETS_RESET_DONE_PLL_USB_RESET, 0x0
.equ	RESETS_RESET_DONE_PLL_USB_BITS, 0x00008000
.equ	RESETS_RESET_DONE_PLL_USB_MSB, 15
.equ	RESETS_RESET_DONE_PLL_USB_LSB, 15
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DONE_PLL_SYS
.equ	RESETS_RESET_DONE_PLL_SYS_RESET, 0x0
.equ	RESETS_RESET_DONE_PLL_SYS_BITS, 0x00004000
.equ	RESETS_RESET_DONE_PLL_SYS_MSB, 14
.equ	RESETS_RESET_DONE_PLL_SYS_LSB, 14
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DONE_PIO2
.equ	RESETS_RESET_DONE_PIO2_RESET, 0x0
.equ	RESETS_RESET_DONE_PIO2_BITS, 0x00002000
.equ	RESETS_RESET_DONE_PIO2_MSB, 13
.equ	RESETS_RESET_DONE_PIO2_LSB, 13
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DONE_PIO1
.equ	RESETS_RESET_DONE_PIO1_RESET, 0x0
.equ	RESETS_RESET_DONE_PIO1_BITS, 0x00001000
.equ	RESETS_RESET_DONE_PIO1_MSB, 12
.equ	RESETS_RESET_DONE_PIO1_LSB, 12
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DONE_PIO0
.equ	RESETS_RESET_DONE_PIO0_RESET, 0x0
.equ	RESETS_RESET_DONE_PIO0_BITS, 0x00000800
.equ	RESETS_RESET_DONE_PIO0_MSB, 11
.equ	RESETS_RESET_DONE_PIO0_LSB, 11
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DONE_PADS_QSPI
.equ	RESETS_RESET_DONE_PADS_QSPI_RESET, 0x0
.equ	RESETS_RESET_DONE_PADS_QSPI_BITS, 0x00000400
.equ	RESETS_RESET_DONE_PADS_QSPI_MSB, 10
.equ	RESETS_RESET_DONE_PADS_QSPI_LSB, 10
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DONE_PADS_BANK0
.equ	RESETS_RESET_DONE_PADS_BANK0_RESET, 0x0
.equ	RESETS_RESET_DONE_PADS_BANK0_BITS, 0x00000200
.equ	RESETS_RESET_DONE_PADS_BANK0_MSB, 9
.equ	RESETS_RESET_DONE_PADS_BANK0_LSB, 9
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DONE_JTAG
.equ	RESETS_RESET_DONE_JTAG_RESET, 0x0
.equ	RESETS_RESET_DONE_JTAG_BITS, 0x00000100
.equ	RESETS_RESET_DONE_JTAG_MSB, 8
.equ	RESETS_RESET_DONE_JTAG_LSB, 8
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DONE_IO_QSPI
.equ	RESETS_RESET_DONE_IO_QSPI_RESET, 0x0
.equ	RESETS_RESET_DONE_IO_QSPI_BITS, 0x00000080
.equ	RESETS_RESET_DONE_IO_QSPI_MSB, 7
.equ	RESETS_RESET_DONE_IO_QSPI_LSB, 7
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DONE_IO_BANK0
.equ	RESETS_RESET_DONE_IO_BANK0_RESET, 0x0
.equ	RESETS_RESET_DONE_IO_BANK0_BITS, 0x00000040
.equ	RESETS_RESET_DONE_IO_BANK0_MSB, 6
.equ	RESETS_RESET_DONE_IO_BANK0_LSB, 6
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DONE_I2C1
.equ	RESETS_RESET_DONE_I2C1_RESET, 0x0
.equ	RESETS_RESET_DONE_I2C1_BITS, 0x00000020
.equ	RESETS_RESET_DONE_I2C1_MSB, 5
.equ	RESETS_RESET_DONE_I2C1_LSB, 5
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DONE_I2C0
.equ	RESETS_RESET_DONE_I2C0_RESET, 0x0
.equ	RESETS_RESET_DONE_I2C0_BITS, 0x00000010
.equ	RESETS_RESET_DONE_I2C0_MSB, 4
.equ	RESETS_RESET_DONE_I2C0_LSB, 4
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DONE_HSTX
.equ	RESETS_RESET_DONE_HSTX_RESET, 0x0
.equ	RESETS_RESET_DONE_HSTX_BITS, 0x00000008
.equ	RESETS_RESET_DONE_HSTX_MSB, 3
.equ	RESETS_RESET_DONE_HSTX_LSB, 3
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DONE_DMA
.equ	RESETS_RESET_DONE_DMA_RESET, 0x0
.equ	RESETS_RESET_DONE_DMA_BITS, 0x00000004
.equ	RESETS_RESET_DONE_DMA_MSB, 2
.equ	RESETS_RESET_DONE_DMA_LSB, 2
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DONE_BUSCTRL
.equ	RESETS_RESET_DONE_BUSCTRL_RESET, 0x0
.equ	RESETS_RESET_DONE_BUSCTRL_BITS, 0x00000002
.equ	RESETS_RESET_DONE_BUSCTRL_MSB, 1
.equ	RESETS_RESET_DONE_BUSCTRL_LSB, 1
# -----------------------------------------------------------------------------
# Field       : RESETS_RESET_DONE_ADC
.equ	RESETS_RESET_DONE_ADC_RESET, 0x0
.equ	RESETS_RESET_DONE_ADC_BITS, 0x00000001
.equ	RESETS_RESET_DONE_ADC_MSB, 0
.equ	RESETS_RESET_DONE_ADC_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_RESETS_H
