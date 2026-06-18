#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
.ifndef	_INTCTRL_H
.set	_INTCTRL_H, 1

.equ	TIMER0_IRQ_0, 0
.equ	TIMER0_IRQ_1, 1
.equ	TIMER0_IRQ_2, 2
.equ	TIMER0_IRQ_3, 3
.equ	TIMER1_IRQ_0, 4
.equ	TIMER1_IRQ_1, 5
.equ	TIMER1_IRQ_2, 6
.equ	TIMER1_IRQ_3, 7
.equ	PWM_IRQ_WRAP_0, 8
.equ	PWM_IRQ_WRAP_1, 9
.equ	DMA_IRQ_0, 10
.equ	DMA_IRQ_1, 11
.equ	DMA_IRQ_2, 12
.equ	DMA_IRQ_3, 13
.equ	USBCTRL_IRQ, 14
.equ	PIO0_IRQ_0, 15
.equ	PIO0_IRQ_1, 16
.equ	PIO1_IRQ_0, 17
.equ	PIO1_IRQ_1, 18
.equ	PIO2_IRQ_0, 19
.equ	PIO2_IRQ_1, 20
.equ	IO_IRQ_BANK0, 21
.equ	IO_IRQ_BANK0_NS, 22
.equ	IO_IRQ_QSPI, 23
.equ	IO_IRQ_QSPI_NS, 24
.equ	SIO_IRQ_FIFO, 25
.equ	SIO_IRQ_BELL, 26
.equ	SIO_IRQ_FIFO_NS, 27
.equ	SIO_IRQ_BELL_NS, 28
.equ	SIO_IRQ_MTIMECMP, 29
.equ	CLOCKS_IRQ, 30
.equ	SPI0_IRQ, 31
.equ	SPI1_IRQ, 32
.equ	UART0_IRQ, 33
.equ	UART1_IRQ, 34
.equ	ADC_IRQ_FIFO, 35
.equ	I2C0_IRQ, 36
.equ	I2C1_IRQ, 37
.equ	OTP_IRQ, 38
.equ	TRNG_IRQ, 39
.equ	PROC0_IRQ_CTI, 40
.equ	PROC1_IRQ_CTI, 41
.equ	PLL_SYS_IRQ, 42
.equ	PLL_USB_IRQ, 43
.equ	POWMAN_IRQ_POW, 44
.equ	POWMAN_IRQ_TIMER, 45
.equ	SPAREIRQ_IRQ_0, 46
.equ	SPAREIRQ_IRQ_1, 47
.equ	SPAREIRQ_IRQ_2, 48
.equ	SPAREIRQ_IRQ_3, 49
.equ	SPAREIRQ_IRQ_4, 50
.equ	SPAREIRQ_IRQ_5, 51

# .equ	isr_timer0_0, isr_irq0
# .equ	isr_timer0_1, isr_irq1
# .equ	isr_timer0_2, isr_irq2
# .equ	isr_timer0_3, isr_irq3
# .equ	isr_timer1_0, isr_irq4
# .equ	isr_timer1_1, isr_irq5
# .equ	isr_timer1_2, isr_irq6
# .equ	isr_timer1_3, isr_irq7
# .equ	isr_pwm_wrap_0, isr_irq8
# .equ	isr_pwm_wrap_1, isr_irq9
# .equ	isr_dma_0, isr_irq10
# .equ	isr_dma_1, isr_irq11
# .equ	isr_dma_2, isr_irq12
# .equ	isr_dma_3, isr_irq13
# .equ	isr_usbctrl, isr_irq14
# .equ	isr_pio0_0, isr_irq15
# .equ	isr_pio0_1, isr_irq16
# .equ	isr_pio1_0, isr_irq17
# .equ	isr_pio1_1, isr_irq18
# .equ	isr_pio2_0, isr_irq19
# .equ	isr_pio2_1, isr_irq20
# .equ	isr_io_bank0, isr_irq21
# .equ	isr_io_bank0_ns, isr_irq22
# .equ	isr_io_qspi, isr_irq23
# .equ	isr_io_qspi_ns, isr_irq24
# .equ	isr_sio_fifo, isr_irq25
# .equ	isr_sio_bell, isr_irq26
# .equ	isr_sio_fifo_ns, isr_irq27
# .equ	isr_sio_bell_ns, isr_irq28
# .equ	isr_sio_mtimecmp, isr_irq29
# .equ	isr_clocks, isr_irq30
# .equ	isr_spi0, isr_irq31
# .equ	isr_spi1, isr_irq32
# .equ	isr_uart0, isr_irq33
# .equ	isr_uart1, isr_irq34
# .equ	isr_adc_fifo, isr_irq35
# .equ	isr_i2c0, isr_irq36
# .equ	isr_i2c1, isr_irq37
# .equ	isr_otp, isr_irq38
# .equ	isr_trng, isr_irq39
# .equ	isr_proc0_cti, isr_irq40
# .equ	isr_proc1_cti, isr_irq41
# .equ	isr_pll_sys, isr_irq42
# .equ	isr_pll_usb, isr_irq43
# .equ	isr_powman_pow, isr_irq44
# .equ	isr_powman_timer, isr_irq45
# .equ	isr_spare_0, isr_irq46
# .equ	isr_spare_1, isr_irq47
# .equ	isr_spare_2, isr_irq48
# .equ	isr_spare_3, isr_irq49
# .equ	isr_spare_4, isr_irq50
# .equ	isr_spare_5, isr_irq51

.endif # _INTCTRL_H
