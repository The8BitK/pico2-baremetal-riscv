#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
.ifndef _DREQ_H
.set    _DREQ_H, 1

.equ    DREQ_PIO0_TX0, 0
.equ    DREQ_PIO0_TX1, 1
.equ    DREQ_PIO0_TX2, 2
.equ    DREQ_PIO0_TX3, 3
.equ    DREQ_PIO0_RX0, 4
.equ    DREQ_PIO0_RX1, 5
.equ    DREQ_PIO0_RX2, 6
.equ    DREQ_PIO0_RX3, 7
.equ    DREQ_PIO1_TX0, 8
.equ    DREQ_PIO1_TX1, 9
.equ    DREQ_PIO1_TX2, 10
.equ    DREQ_PIO1_TX3, 11
.equ    DREQ_PIO1_RX0, 12
.equ    DREQ_PIO1_RX1, 13
.equ    DREQ_PIO1_RX2, 14
.equ    DREQ_PIO1_RX3, 15
.equ    DREQ_PIO2_TX0, 16
.equ    DREQ_PIO2_TX1, 17
.equ    DREQ_PIO2_TX2, 18
.equ    DREQ_PIO2_TX3, 19
.equ    DREQ_PIO2_RX0, 20
.equ    DREQ_PIO2_RX1, 21
.equ    DREQ_PIO2_RX2, 22
.equ    DREQ_PIO2_RX3, 23
.equ    DREQ_SPI0_TX, 24
.equ    DREQ_SPI0_RX, 25
.equ    DREQ_SPI1_TX, 26
.equ    DREQ_SPI1_RX, 27
.equ    DREQ_UART0_TX, 28
.equ    DREQ_UART0_RX, 29
.equ    DREQ_UART1_TX, 30
.equ    DREQ_UART1_RX, 31
.equ    DREQ_PWM_WRAP0, 32
.equ    DREQ_PWM_WRAP1, 33
.equ    DREQ_PWM_WRAP2, 34
.equ    DREQ_PWM_WRAP3, 35
.equ    DREQ_PWM_WRAP4, 36
.equ    DREQ_PWM_WRAP5, 37
.equ    DREQ_PWM_WRAP6, 38
.equ    DREQ_PWM_WRAP7, 39
.equ    DREQ_PWM_WRAP8, 40
.equ    DREQ_PWM_WRAP9, 41
.equ    DREQ_PWM_WRAP10, 42
.equ    DREQ_PWM_WRAP11, 43
.equ    DREQ_I2C0_TX, 44
.equ    DREQ_I2C0_RX, 45
.equ    DREQ_I2C1_TX, 46
.equ    DREQ_I2C1_RX, 47
.equ    DREQ_ADC, 48
.equ    DREQ_XIP_STREAM, 49
.equ    DREQ_XIP_QMITX, 50
.equ    DREQ_XIP_QMIRX, 51
.equ    DREQ_HSTX, 52
.equ    DREQ_CORESIGHT, 53
.equ    DREQ_SHA256, 54
.equ    DREQ_DMA_TIMER0, 59
.equ    DREQ_DMA_TIMER1, 60
.equ    DREQ_DMA_TIMER2, 61
.equ    DREQ_DMA_TIMER3, 62
.equ    DREQ_FORCE, 63

.endif # _DREQ_H
