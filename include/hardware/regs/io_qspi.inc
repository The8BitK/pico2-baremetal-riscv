#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : IO_QSPI
# Version        : 1
# Bus type       : apb
# =============================================================================
.ifndef	_HARDWARE_REGS_IO_QSPI_H
.set	_HARDWARE_REGS_IO_QSPI_H, 1
# =============================================================================
# Register    : IO_QSPI_USBPHY_DP_STATUS
.equ	IO_QSPI_USBPHY_DP_STATUS_OFFSET, 0x00000000
.equ	IO_QSPI_USBPHY_DP_STATUS_BITS, 0x04022200
.equ	IO_QSPI_USBPHY_DP_STATUS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_USBPHY_DP_STATUS_IRQTOPROC
# Description : interrupt to processors, after override is applied
.equ	IO_QSPI_USBPHY_DP_STATUS_IRQTOPROC_RESET, 0x0
.equ	IO_QSPI_USBPHY_DP_STATUS_IRQTOPROC_BITS, 0x04000000
.equ	IO_QSPI_USBPHY_DP_STATUS_IRQTOPROC_MSB, 26
.equ	IO_QSPI_USBPHY_DP_STATUS_IRQTOPROC_LSB, 26
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_USBPHY_DP_STATUS_INFROMPAD
# Description : input signal from pad, before filtering and override are
#               applied
.equ	IO_QSPI_USBPHY_DP_STATUS_INFROMPAD_RESET, 0x0
.equ	IO_QSPI_USBPHY_DP_STATUS_INFROMPAD_BITS, 0x00020000
.equ	IO_QSPI_USBPHY_DP_STATUS_INFROMPAD_MSB, 17
.equ	IO_QSPI_USBPHY_DP_STATUS_INFROMPAD_LSB, 17
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_USBPHY_DP_STATUS_OETOPAD
# Description : output enable to pad after register override is applied
.equ	IO_QSPI_USBPHY_DP_STATUS_OETOPAD_RESET, 0x0
.equ	IO_QSPI_USBPHY_DP_STATUS_OETOPAD_BITS, 0x00002000
.equ	IO_QSPI_USBPHY_DP_STATUS_OETOPAD_MSB, 13
.equ	IO_QSPI_USBPHY_DP_STATUS_OETOPAD_LSB, 13
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_USBPHY_DP_STATUS_OUTTOPAD
# Description : output signal to pad after register override is applied
.equ	IO_QSPI_USBPHY_DP_STATUS_OUTTOPAD_RESET, 0x0
.equ	IO_QSPI_USBPHY_DP_STATUS_OUTTOPAD_BITS, 0x00000200
.equ	IO_QSPI_USBPHY_DP_STATUS_OUTTOPAD_MSB, 9
.equ	IO_QSPI_USBPHY_DP_STATUS_OUTTOPAD_LSB, 9
# =============================================================================
# Register    : IO_QSPI_USBPHY_DP_CTRL
.equ	IO_QSPI_USBPHY_DP_CTRL_OFFSET, 0x00000004
.equ	IO_QSPI_USBPHY_DP_CTRL_BITS, 0x3003f01f
.equ	IO_QSPI_USBPHY_DP_CTRL_RESET, 0x0000001f
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_USBPHY_DP_CTRL_IRQOVER
#               0x0 -> don't invert the interrupt
#               0x1 -> invert the interrupt
#               0x2 -> drive interrupt low
#               0x3 -> drive interrupt high
.equ	IO_QSPI_USBPHY_DP_CTRL_IRQOVER_RESET, 0x0
.equ	IO_QSPI_USBPHY_DP_CTRL_IRQOVER_BITS, 0x30000000
.equ	IO_QSPI_USBPHY_DP_CTRL_IRQOVER_MSB, 29
.equ	IO_QSPI_USBPHY_DP_CTRL_IRQOVER_LSB, 28
.equ	IO_QSPI_USBPHY_DP_CTRL_IRQOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_USBPHY_DP_CTRL_IRQOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_USBPHY_DP_CTRL_IRQOVER_VALUE_LOW, 0x2
.equ	IO_QSPI_USBPHY_DP_CTRL_IRQOVER_VALUE_HIGH, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_USBPHY_DP_CTRL_INOVER
#               0x0 -> don't invert the peri input
#               0x1 -> invert the peri input
#               0x2 -> drive peri input low
#               0x3 -> drive peri input high
.equ	IO_QSPI_USBPHY_DP_CTRL_INOVER_RESET, 0x0
.equ	IO_QSPI_USBPHY_DP_CTRL_INOVER_BITS, 0x00030000
.equ	IO_QSPI_USBPHY_DP_CTRL_INOVER_MSB, 17
.equ	IO_QSPI_USBPHY_DP_CTRL_INOVER_LSB, 16
.equ	IO_QSPI_USBPHY_DP_CTRL_INOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_USBPHY_DP_CTRL_INOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_USBPHY_DP_CTRL_INOVER_VALUE_LOW, 0x2
.equ	IO_QSPI_USBPHY_DP_CTRL_INOVER_VALUE_HIGH, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_USBPHY_DP_CTRL_OEOVER
#               0x0 -> drive output enable from peripheral signal selected by funcsel
#               0x1 -> drive output enable from inverse of peripheral signal selected by funcsel
#               0x2 -> disable output
#               0x3 -> enable output
.equ	IO_QSPI_USBPHY_DP_CTRL_OEOVER_RESET, 0x0
.equ	IO_QSPI_USBPHY_DP_CTRL_OEOVER_BITS, 0x0000c000
.equ	IO_QSPI_USBPHY_DP_CTRL_OEOVER_MSB, 15
.equ	IO_QSPI_USBPHY_DP_CTRL_OEOVER_LSB, 14
.equ	IO_QSPI_USBPHY_DP_CTRL_OEOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_USBPHY_DP_CTRL_OEOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_USBPHY_DP_CTRL_OEOVER_VALUE_DISABLE, 0x2
.equ	IO_QSPI_USBPHY_DP_CTRL_OEOVER_VALUE_ENABLE, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_USBPHY_DP_CTRL_OUTOVER
#               0x0 -> drive output from peripheral signal selected by funcsel
#               0x1 -> drive output from inverse of peripheral signal selected by funcsel
#               0x2 -> drive output low
#               0x3 -> drive output high
.equ	IO_QSPI_USBPHY_DP_CTRL_OUTOVER_RESET, 0x0
.equ	IO_QSPI_USBPHY_DP_CTRL_OUTOVER_BITS, 0x00003000
.equ	IO_QSPI_USBPHY_DP_CTRL_OUTOVER_MSB, 13
.equ	IO_QSPI_USBPHY_DP_CTRL_OUTOVER_LSB, 12
.equ	IO_QSPI_USBPHY_DP_CTRL_OUTOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_USBPHY_DP_CTRL_OUTOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_USBPHY_DP_CTRL_OUTOVER_VALUE_LOW, 0x2
.equ	IO_QSPI_USBPHY_DP_CTRL_OUTOVER_VALUE_HIGH, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_USBPHY_DP_CTRL_FUNCSEL
# Description : 0-31 -> selects pin function according to the gpio table
#               31 == NULL
#               0x02 -> uart1_tx
#               0x03 -> i2c0_sda
#               0x05 -> siob_proc_56
#               0x1f -> null
.equ	IO_QSPI_USBPHY_DP_CTRL_FUNCSEL_RESET, 0x1f
.equ	IO_QSPI_USBPHY_DP_CTRL_FUNCSEL_BITS, 0x0000001f
.equ	IO_QSPI_USBPHY_DP_CTRL_FUNCSEL_MSB, 4
.equ	IO_QSPI_USBPHY_DP_CTRL_FUNCSEL_LSB, 0
.equ	IO_QSPI_USBPHY_DP_CTRL_FUNCSEL_VALUE_UART1_TX, 0x02
.equ	IO_QSPI_USBPHY_DP_CTRL_FUNCSEL_VALUE_I2C0_SDA, 0x03
.equ	IO_QSPI_USBPHY_DP_CTRL_FUNCSEL_VALUE_SIOB_PROC_56, 0x05
.equ	IO_QSPI_USBPHY_DP_CTRL_FUNCSEL_VALUE_NULL, 0x1f
# =============================================================================
# Register    : IO_QSPI_USBPHY_DM_STATUS
.equ	IO_QSPI_USBPHY_DM_STATUS_OFFSET, 0x00000008
.equ	IO_QSPI_USBPHY_DM_STATUS_BITS, 0x04022200
.equ	IO_QSPI_USBPHY_DM_STATUS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_USBPHY_DM_STATUS_IRQTOPROC
# Description : interrupt to processors, after override is applied
.equ	IO_QSPI_USBPHY_DM_STATUS_IRQTOPROC_RESET, 0x0
.equ	IO_QSPI_USBPHY_DM_STATUS_IRQTOPROC_BITS, 0x04000000
.equ	IO_QSPI_USBPHY_DM_STATUS_IRQTOPROC_MSB, 26
.equ	IO_QSPI_USBPHY_DM_STATUS_IRQTOPROC_LSB, 26
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_USBPHY_DM_STATUS_INFROMPAD
# Description : input signal from pad, before filtering and override are
#               applied
.equ	IO_QSPI_USBPHY_DM_STATUS_INFROMPAD_RESET, 0x0
.equ	IO_QSPI_USBPHY_DM_STATUS_INFROMPAD_BITS, 0x00020000
.equ	IO_QSPI_USBPHY_DM_STATUS_INFROMPAD_MSB, 17
.equ	IO_QSPI_USBPHY_DM_STATUS_INFROMPAD_LSB, 17
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_USBPHY_DM_STATUS_OETOPAD
# Description : output enable to pad after register override is applied
.equ	IO_QSPI_USBPHY_DM_STATUS_OETOPAD_RESET, 0x0
.equ	IO_QSPI_USBPHY_DM_STATUS_OETOPAD_BITS, 0x00002000
.equ	IO_QSPI_USBPHY_DM_STATUS_OETOPAD_MSB, 13
.equ	IO_QSPI_USBPHY_DM_STATUS_OETOPAD_LSB, 13
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_USBPHY_DM_STATUS_OUTTOPAD
# Description : output signal to pad after register override is applied
.equ	IO_QSPI_USBPHY_DM_STATUS_OUTTOPAD_RESET, 0x0
.equ	IO_QSPI_USBPHY_DM_STATUS_OUTTOPAD_BITS, 0x00000200
.equ	IO_QSPI_USBPHY_DM_STATUS_OUTTOPAD_MSB, 9
.equ	IO_QSPI_USBPHY_DM_STATUS_OUTTOPAD_LSB, 9
# =============================================================================
# Register    : IO_QSPI_USBPHY_DM_CTRL
.equ	IO_QSPI_USBPHY_DM_CTRL_OFFSET, 0x0000000c
.equ	IO_QSPI_USBPHY_DM_CTRL_BITS, 0x3003f01f
.equ	IO_QSPI_USBPHY_DM_CTRL_RESET, 0x0000001f
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_USBPHY_DM_CTRL_IRQOVER
#               0x0 -> don't invert the interrupt
#               0x1 -> invert the interrupt
#               0x2 -> drive interrupt low
#               0x3 -> drive interrupt high
.equ	IO_QSPI_USBPHY_DM_CTRL_IRQOVER_RESET, 0x0
.equ	IO_QSPI_USBPHY_DM_CTRL_IRQOVER_BITS, 0x30000000
.equ	IO_QSPI_USBPHY_DM_CTRL_IRQOVER_MSB, 29
.equ	IO_QSPI_USBPHY_DM_CTRL_IRQOVER_LSB, 28
.equ	IO_QSPI_USBPHY_DM_CTRL_IRQOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_USBPHY_DM_CTRL_IRQOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_USBPHY_DM_CTRL_IRQOVER_VALUE_LOW, 0x2
.equ	IO_QSPI_USBPHY_DM_CTRL_IRQOVER_VALUE_HIGH, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_USBPHY_DM_CTRL_INOVER
#               0x0 -> don't invert the peri input
#               0x1 -> invert the peri input
#               0x2 -> drive peri input low
#               0x3 -> drive peri input high
.equ	IO_QSPI_USBPHY_DM_CTRL_INOVER_RESET, 0x0
.equ	IO_QSPI_USBPHY_DM_CTRL_INOVER_BITS, 0x00030000
.equ	IO_QSPI_USBPHY_DM_CTRL_INOVER_MSB, 17
.equ	IO_QSPI_USBPHY_DM_CTRL_INOVER_LSB, 16
.equ	IO_QSPI_USBPHY_DM_CTRL_INOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_USBPHY_DM_CTRL_INOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_USBPHY_DM_CTRL_INOVER_VALUE_LOW, 0x2
.equ	IO_QSPI_USBPHY_DM_CTRL_INOVER_VALUE_HIGH, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_USBPHY_DM_CTRL_OEOVER
#               0x0 -> drive output enable from peripheral signal selected by funcsel
#               0x1 -> drive output enable from inverse of peripheral signal selected by funcsel
#               0x2 -> disable output
#               0x3 -> enable output
.equ	IO_QSPI_USBPHY_DM_CTRL_OEOVER_RESET, 0x0
.equ	IO_QSPI_USBPHY_DM_CTRL_OEOVER_BITS, 0x0000c000
.equ	IO_QSPI_USBPHY_DM_CTRL_OEOVER_MSB, 15
.equ	IO_QSPI_USBPHY_DM_CTRL_OEOVER_LSB, 14
.equ	IO_QSPI_USBPHY_DM_CTRL_OEOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_USBPHY_DM_CTRL_OEOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_USBPHY_DM_CTRL_OEOVER_VALUE_DISABLE, 0x2
.equ	IO_QSPI_USBPHY_DM_CTRL_OEOVER_VALUE_ENABLE, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_USBPHY_DM_CTRL_OUTOVER
#               0x0 -> drive output from peripheral signal selected by funcsel
#               0x1 -> drive output from inverse of peripheral signal selected by funcsel
#               0x2 -> drive output low
#               0x3 -> drive output high
.equ	IO_QSPI_USBPHY_DM_CTRL_OUTOVER_RESET, 0x0
.equ	IO_QSPI_USBPHY_DM_CTRL_OUTOVER_BITS, 0x00003000
.equ	IO_QSPI_USBPHY_DM_CTRL_OUTOVER_MSB, 13
.equ	IO_QSPI_USBPHY_DM_CTRL_OUTOVER_LSB, 12
.equ	IO_QSPI_USBPHY_DM_CTRL_OUTOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_USBPHY_DM_CTRL_OUTOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_USBPHY_DM_CTRL_OUTOVER_VALUE_LOW, 0x2
.equ	IO_QSPI_USBPHY_DM_CTRL_OUTOVER_VALUE_HIGH, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_USBPHY_DM_CTRL_FUNCSEL
# Description : 0-31 -> selects pin function according to the gpio table
#               31 == NULL
#               0x02 -> uart1_rx
#               0x03 -> i2c0_scl
#               0x05 -> siob_proc_57
#               0x1f -> null
.equ	IO_QSPI_USBPHY_DM_CTRL_FUNCSEL_RESET, 0x1f
.equ	IO_QSPI_USBPHY_DM_CTRL_FUNCSEL_BITS, 0x0000001f
.equ	IO_QSPI_USBPHY_DM_CTRL_FUNCSEL_MSB, 4
.equ	IO_QSPI_USBPHY_DM_CTRL_FUNCSEL_LSB, 0
.equ	IO_QSPI_USBPHY_DM_CTRL_FUNCSEL_VALUE_UART1_RX, 0x02
.equ	IO_QSPI_USBPHY_DM_CTRL_FUNCSEL_VALUE_I2C0_SCL, 0x03
.equ	IO_QSPI_USBPHY_DM_CTRL_FUNCSEL_VALUE_SIOB_PROC_57, 0x05
.equ	IO_QSPI_USBPHY_DM_CTRL_FUNCSEL_VALUE_NULL, 0x1f
# =============================================================================
# Register    : IO_QSPI_GPIO_QSPI_SCLK_STATUS
.equ	IO_QSPI_GPIO_QSPI_SCLK_STATUS_OFFSET, 0x00000010
.equ	IO_QSPI_GPIO_QSPI_SCLK_STATUS_BITS, 0x04022200
.equ	IO_QSPI_GPIO_QSPI_SCLK_STATUS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SCLK_STATUS_IRQTOPROC
# Description : interrupt to processors, after override is applied
.equ	IO_QSPI_GPIO_QSPI_SCLK_STATUS_IRQTOPROC_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SCLK_STATUS_IRQTOPROC_BITS, 0x04000000
.equ	IO_QSPI_GPIO_QSPI_SCLK_STATUS_IRQTOPROC_MSB, 26
.equ	IO_QSPI_GPIO_QSPI_SCLK_STATUS_IRQTOPROC_LSB, 26
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SCLK_STATUS_INFROMPAD
# Description : input signal from pad, before filtering and override are
#               applied
.equ	IO_QSPI_GPIO_QSPI_SCLK_STATUS_INFROMPAD_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SCLK_STATUS_INFROMPAD_BITS, 0x00020000
.equ	IO_QSPI_GPIO_QSPI_SCLK_STATUS_INFROMPAD_MSB, 17
.equ	IO_QSPI_GPIO_QSPI_SCLK_STATUS_INFROMPAD_LSB, 17
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SCLK_STATUS_OETOPAD
# Description : output enable to pad after register override is applied
.equ	IO_QSPI_GPIO_QSPI_SCLK_STATUS_OETOPAD_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SCLK_STATUS_OETOPAD_BITS, 0x00002000
.equ	IO_QSPI_GPIO_QSPI_SCLK_STATUS_OETOPAD_MSB, 13
.equ	IO_QSPI_GPIO_QSPI_SCLK_STATUS_OETOPAD_LSB, 13
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SCLK_STATUS_OUTTOPAD
# Description : output signal to pad after register override is applied
.equ	IO_QSPI_GPIO_QSPI_SCLK_STATUS_OUTTOPAD_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SCLK_STATUS_OUTTOPAD_BITS, 0x00000200
.equ	IO_QSPI_GPIO_QSPI_SCLK_STATUS_OUTTOPAD_MSB, 9
.equ	IO_QSPI_GPIO_QSPI_SCLK_STATUS_OUTTOPAD_LSB, 9
# =============================================================================
# Register    : IO_QSPI_GPIO_QSPI_SCLK_CTRL
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_OFFSET, 0x00000014
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_BITS, 0x3003f01f
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_RESET, 0x0000001f
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SCLK_CTRL_IRQOVER
#               0x0 -> don't invert the interrupt
#               0x1 -> invert the interrupt
#               0x2 -> drive interrupt low
#               0x3 -> drive interrupt high
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_IRQOVER_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_IRQOVER_BITS, 0x30000000
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_IRQOVER_MSB, 29
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_IRQOVER_LSB, 28
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_IRQOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_IRQOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_IRQOVER_VALUE_LOW, 0x2
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_IRQOVER_VALUE_HIGH, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SCLK_CTRL_INOVER
#               0x0 -> don't invert the peri input
#               0x1 -> invert the peri input
#               0x2 -> drive peri input low
#               0x3 -> drive peri input high
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_INOVER_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_INOVER_BITS, 0x00030000
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_INOVER_MSB, 17
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_INOVER_LSB, 16
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_INOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_INOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_INOVER_VALUE_LOW, 0x2
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_INOVER_VALUE_HIGH, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SCLK_CTRL_OEOVER
#               0x0 -> drive output enable from peripheral signal selected by funcsel
#               0x1 -> drive output enable from inverse of peripheral signal selected by funcsel
#               0x2 -> disable output
#               0x3 -> enable output
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_OEOVER_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_OEOVER_BITS, 0x0000c000
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_OEOVER_MSB, 15
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_OEOVER_LSB, 14
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_OEOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_OEOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_OEOVER_VALUE_DISABLE, 0x2
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_OEOVER_VALUE_ENABLE, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SCLK_CTRL_OUTOVER
#               0x0 -> drive output from peripheral signal selected by funcsel
#               0x1 -> drive output from inverse of peripheral signal selected by funcsel
#               0x2 -> drive output low
#               0x3 -> drive output high
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_OUTOVER_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_OUTOVER_BITS, 0x00003000
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_OUTOVER_MSB, 13
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_OUTOVER_LSB, 12
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_OUTOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_OUTOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_OUTOVER_VALUE_LOW, 0x2
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_OUTOVER_VALUE_HIGH, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SCLK_CTRL_FUNCSEL
# Description : 0-31 -> selects pin function according to the gpio table
#               31 == NULL
#               0x00 -> xip_sclk
#               0x02 -> uart1_cts
#               0x03 -> i2c1_sda
#               0x05 -> siob_proc_58
#               0x0b -> uart1_tx
#               0x1f -> null
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_FUNCSEL_RESET, 0x1f
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_FUNCSEL_BITS, 0x0000001f
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_FUNCSEL_MSB, 4
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_FUNCSEL_LSB, 0
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_FUNCSEL_VALUE_XIP_SCLK, 0x00
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_FUNCSEL_VALUE_UART1_CTS, 0x02
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_FUNCSEL_VALUE_I2C1_SDA, 0x03
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_FUNCSEL_VALUE_SIOB_PROC_58, 0x05
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_FUNCSEL_VALUE_UART1_TX, 0x0b
.equ	IO_QSPI_GPIO_QSPI_SCLK_CTRL_FUNCSEL_VALUE_NULL, 0x1f
# =============================================================================
# Register    : IO_QSPI_GPIO_QSPI_SS_STATUS
.equ	IO_QSPI_GPIO_QSPI_SS_STATUS_OFFSET, 0x00000018
.equ	IO_QSPI_GPIO_QSPI_SS_STATUS_BITS, 0x04022200
.equ	IO_QSPI_GPIO_QSPI_SS_STATUS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SS_STATUS_IRQTOPROC
# Description : interrupt to processors, after override is applied
.equ	IO_QSPI_GPIO_QSPI_SS_STATUS_IRQTOPROC_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SS_STATUS_IRQTOPROC_BITS, 0x04000000
.equ	IO_QSPI_GPIO_QSPI_SS_STATUS_IRQTOPROC_MSB, 26
.equ	IO_QSPI_GPIO_QSPI_SS_STATUS_IRQTOPROC_LSB, 26
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SS_STATUS_INFROMPAD
# Description : input signal from pad, before filtering and override are
#               applied
.equ	IO_QSPI_GPIO_QSPI_SS_STATUS_INFROMPAD_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SS_STATUS_INFROMPAD_BITS, 0x00020000
.equ	IO_QSPI_GPIO_QSPI_SS_STATUS_INFROMPAD_MSB, 17
.equ	IO_QSPI_GPIO_QSPI_SS_STATUS_INFROMPAD_LSB, 17
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SS_STATUS_OETOPAD
# Description : output enable to pad after register override is applied
.equ	IO_QSPI_GPIO_QSPI_SS_STATUS_OETOPAD_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SS_STATUS_OETOPAD_BITS, 0x00002000
.equ	IO_QSPI_GPIO_QSPI_SS_STATUS_OETOPAD_MSB, 13
.equ	IO_QSPI_GPIO_QSPI_SS_STATUS_OETOPAD_LSB, 13
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SS_STATUS_OUTTOPAD
# Description : output signal to pad after register override is applied
.equ	IO_QSPI_GPIO_QSPI_SS_STATUS_OUTTOPAD_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SS_STATUS_OUTTOPAD_BITS, 0x00000200
.equ	IO_QSPI_GPIO_QSPI_SS_STATUS_OUTTOPAD_MSB, 9
.equ	IO_QSPI_GPIO_QSPI_SS_STATUS_OUTTOPAD_LSB, 9
# =============================================================================
# Register    : IO_QSPI_GPIO_QSPI_SS_CTRL
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_OFFSET, 0x0000001c
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_BITS, 0x3003f01f
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_RESET, 0x0000001f
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SS_CTRL_IRQOVER
#               0x0 -> don't invert the interrupt
#               0x1 -> invert the interrupt
#               0x2 -> drive interrupt low
#               0x3 -> drive interrupt high
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_IRQOVER_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_IRQOVER_BITS, 0x30000000
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_IRQOVER_MSB, 29
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_IRQOVER_LSB, 28
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_IRQOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_IRQOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_IRQOVER_VALUE_LOW, 0x2
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_IRQOVER_VALUE_HIGH, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SS_CTRL_INOVER
#               0x0 -> don't invert the peri input
#               0x1 -> invert the peri input
#               0x2 -> drive peri input low
#               0x3 -> drive peri input high
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_INOVER_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_INOVER_BITS, 0x00030000
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_INOVER_MSB, 17
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_INOVER_LSB, 16
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_INOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_INOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_INOVER_VALUE_LOW, 0x2
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_INOVER_VALUE_HIGH, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SS_CTRL_OEOVER
#               0x0 -> drive output enable from peripheral signal selected by funcsel
#               0x1 -> drive output enable from inverse of peripheral signal selected by funcsel
#               0x2 -> disable output
#               0x3 -> enable output
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_OEOVER_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_OEOVER_BITS, 0x0000c000
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_OEOVER_MSB, 15
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_OEOVER_LSB, 14
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_OEOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_OEOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_OEOVER_VALUE_DISABLE, 0x2
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_OEOVER_VALUE_ENABLE, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SS_CTRL_OUTOVER
#               0x0 -> drive output from peripheral signal selected by funcsel
#               0x1 -> drive output from inverse of peripheral signal selected by funcsel
#               0x2 -> drive output low
#               0x3 -> drive output high
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_OUTOVER_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_OUTOVER_BITS, 0x00003000
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_OUTOVER_MSB, 13
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_OUTOVER_LSB, 12
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_OUTOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_OUTOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_OUTOVER_VALUE_LOW, 0x2
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_OUTOVER_VALUE_HIGH, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SS_CTRL_FUNCSEL
# Description : 0-31 -> selects pin function according to the gpio table
#               31 == NULL
#               0x00 -> xip_ss_n_0
#               0x02 -> uart1_rts
#               0x03 -> i2c1_scl
#               0x05 -> siob_proc_59
#               0x0b -> uart1_rx
#               0x1f -> null
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_FUNCSEL_RESET, 0x1f
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_FUNCSEL_BITS, 0x0000001f
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_FUNCSEL_MSB, 4
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_FUNCSEL_LSB, 0
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_FUNCSEL_VALUE_XIP_SS_N_0, 0x00
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_FUNCSEL_VALUE_UART1_RTS, 0x02
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_FUNCSEL_VALUE_I2C1_SCL, 0x03
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_FUNCSEL_VALUE_SIOB_PROC_59, 0x05
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_FUNCSEL_VALUE_UART1_RX, 0x0b
.equ	IO_QSPI_GPIO_QSPI_SS_CTRL_FUNCSEL_VALUE_NULL, 0x1f
# =============================================================================
# Register    : IO_QSPI_GPIO_QSPI_SD0_STATUS
.equ	IO_QSPI_GPIO_QSPI_SD0_STATUS_OFFSET, 0x00000020
.equ	IO_QSPI_GPIO_QSPI_SD0_STATUS_BITS, 0x04022200
.equ	IO_QSPI_GPIO_QSPI_SD0_STATUS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD0_STATUS_IRQTOPROC
# Description : interrupt to processors, after override is applied
.equ	IO_QSPI_GPIO_QSPI_SD0_STATUS_IRQTOPROC_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD0_STATUS_IRQTOPROC_BITS, 0x04000000
.equ	IO_QSPI_GPIO_QSPI_SD0_STATUS_IRQTOPROC_MSB, 26
.equ	IO_QSPI_GPIO_QSPI_SD0_STATUS_IRQTOPROC_LSB, 26
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD0_STATUS_INFROMPAD
# Description : input signal from pad, before filtering and override are
#               applied
.equ	IO_QSPI_GPIO_QSPI_SD0_STATUS_INFROMPAD_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD0_STATUS_INFROMPAD_BITS, 0x00020000
.equ	IO_QSPI_GPIO_QSPI_SD0_STATUS_INFROMPAD_MSB, 17
.equ	IO_QSPI_GPIO_QSPI_SD0_STATUS_INFROMPAD_LSB, 17
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD0_STATUS_OETOPAD
# Description : output enable to pad after register override is applied
.equ	IO_QSPI_GPIO_QSPI_SD0_STATUS_OETOPAD_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD0_STATUS_OETOPAD_BITS, 0x00002000
.equ	IO_QSPI_GPIO_QSPI_SD0_STATUS_OETOPAD_MSB, 13
.equ	IO_QSPI_GPIO_QSPI_SD0_STATUS_OETOPAD_LSB, 13
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD0_STATUS_OUTTOPAD
# Description : output signal to pad after register override is applied
.equ	IO_QSPI_GPIO_QSPI_SD0_STATUS_OUTTOPAD_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD0_STATUS_OUTTOPAD_BITS, 0x00000200
.equ	IO_QSPI_GPIO_QSPI_SD0_STATUS_OUTTOPAD_MSB, 9
.equ	IO_QSPI_GPIO_QSPI_SD0_STATUS_OUTTOPAD_LSB, 9
# =============================================================================
# Register    : IO_QSPI_GPIO_QSPI_SD0_CTRL
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_OFFSET, 0x00000024
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_BITS, 0x3003f01f
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_RESET, 0x0000001f
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD0_CTRL_IRQOVER
#               0x0 -> don't invert the interrupt
#               0x1 -> invert the interrupt
#               0x2 -> drive interrupt low
#               0x3 -> drive interrupt high
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_IRQOVER_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_IRQOVER_BITS, 0x30000000
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_IRQOVER_MSB, 29
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_IRQOVER_LSB, 28
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_IRQOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_IRQOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_IRQOVER_VALUE_LOW, 0x2
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_IRQOVER_VALUE_HIGH, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD0_CTRL_INOVER
#               0x0 -> don't invert the peri input
#               0x1 -> invert the peri input
#               0x2 -> drive peri input low
#               0x3 -> drive peri input high
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_INOVER_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_INOVER_BITS, 0x00030000
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_INOVER_MSB, 17
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_INOVER_LSB, 16
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_INOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_INOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_INOVER_VALUE_LOW, 0x2
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_INOVER_VALUE_HIGH, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD0_CTRL_OEOVER
#               0x0 -> drive output enable from peripheral signal selected by funcsel
#               0x1 -> drive output enable from inverse of peripheral signal selected by funcsel
#               0x2 -> disable output
#               0x3 -> enable output
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_OEOVER_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_OEOVER_BITS, 0x0000c000
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_OEOVER_MSB, 15
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_OEOVER_LSB, 14
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_OEOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_OEOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_OEOVER_VALUE_DISABLE, 0x2
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_OEOVER_VALUE_ENABLE, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD0_CTRL_OUTOVER
#               0x0 -> drive output from peripheral signal selected by funcsel
#               0x1 -> drive output from inverse of peripheral signal selected by funcsel
#               0x2 -> drive output low
#               0x3 -> drive output high
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_OUTOVER_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_OUTOVER_BITS, 0x00003000
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_OUTOVER_MSB, 13
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_OUTOVER_LSB, 12
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_OUTOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_OUTOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_OUTOVER_VALUE_LOW, 0x2
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_OUTOVER_VALUE_HIGH, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD0_CTRL_FUNCSEL
# Description : 0-31 -> selects pin function according to the gpio table
#               31 == NULL
#               0x00 -> xip_sd0
#               0x02 -> uart0_tx
#               0x03 -> i2c0_sda
#               0x05 -> siob_proc_60
#               0x1f -> null
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_FUNCSEL_RESET, 0x1f
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_FUNCSEL_BITS, 0x0000001f
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_FUNCSEL_MSB, 4
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_FUNCSEL_LSB, 0
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_FUNCSEL_VALUE_XIP_SD0, 0x00
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_FUNCSEL_VALUE_UART0_TX, 0x02
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_FUNCSEL_VALUE_I2C0_SDA, 0x03
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_FUNCSEL_VALUE_SIOB_PROC_60, 0x05
.equ	IO_QSPI_GPIO_QSPI_SD0_CTRL_FUNCSEL_VALUE_NULL, 0x1f
# =============================================================================
# Register    : IO_QSPI_GPIO_QSPI_SD1_STATUS
.equ	IO_QSPI_GPIO_QSPI_SD1_STATUS_OFFSET, 0x00000028
.equ	IO_QSPI_GPIO_QSPI_SD1_STATUS_BITS, 0x04022200
.equ	IO_QSPI_GPIO_QSPI_SD1_STATUS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD1_STATUS_IRQTOPROC
# Description : interrupt to processors, after override is applied
.equ	IO_QSPI_GPIO_QSPI_SD1_STATUS_IRQTOPROC_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD1_STATUS_IRQTOPROC_BITS, 0x04000000
.equ	IO_QSPI_GPIO_QSPI_SD1_STATUS_IRQTOPROC_MSB, 26
.equ	IO_QSPI_GPIO_QSPI_SD1_STATUS_IRQTOPROC_LSB, 26
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD1_STATUS_INFROMPAD
# Description : input signal from pad, before filtering and override are
#               applied
.equ	IO_QSPI_GPIO_QSPI_SD1_STATUS_INFROMPAD_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD1_STATUS_INFROMPAD_BITS, 0x00020000
.equ	IO_QSPI_GPIO_QSPI_SD1_STATUS_INFROMPAD_MSB, 17
.equ	IO_QSPI_GPIO_QSPI_SD1_STATUS_INFROMPAD_LSB, 17
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD1_STATUS_OETOPAD
# Description : output enable to pad after register override is applied
.equ	IO_QSPI_GPIO_QSPI_SD1_STATUS_OETOPAD_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD1_STATUS_OETOPAD_BITS, 0x00002000
.equ	IO_QSPI_GPIO_QSPI_SD1_STATUS_OETOPAD_MSB, 13
.equ	IO_QSPI_GPIO_QSPI_SD1_STATUS_OETOPAD_LSB, 13
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD1_STATUS_OUTTOPAD
# Description : output signal to pad after register override is applied
.equ	IO_QSPI_GPIO_QSPI_SD1_STATUS_OUTTOPAD_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD1_STATUS_OUTTOPAD_BITS, 0x00000200
.equ	IO_QSPI_GPIO_QSPI_SD1_STATUS_OUTTOPAD_MSB, 9
.equ	IO_QSPI_GPIO_QSPI_SD1_STATUS_OUTTOPAD_LSB, 9
# =============================================================================
# Register    : IO_QSPI_GPIO_QSPI_SD1_CTRL
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_OFFSET, 0x0000002c
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_BITS, 0x3003f01f
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_RESET, 0x0000001f
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD1_CTRL_IRQOVER
#               0x0 -> don't invert the interrupt
#               0x1 -> invert the interrupt
#               0x2 -> drive interrupt low
#               0x3 -> drive interrupt high
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_IRQOVER_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_IRQOVER_BITS, 0x30000000
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_IRQOVER_MSB, 29
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_IRQOVER_LSB, 28
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_IRQOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_IRQOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_IRQOVER_VALUE_LOW, 0x2
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_IRQOVER_VALUE_HIGH, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD1_CTRL_INOVER
#               0x0 -> don't invert the peri input
#               0x1 -> invert the peri input
#               0x2 -> drive peri input low
#               0x3 -> drive peri input high
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_INOVER_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_INOVER_BITS, 0x00030000
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_INOVER_MSB, 17
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_INOVER_LSB, 16
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_INOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_INOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_INOVER_VALUE_LOW, 0x2
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_INOVER_VALUE_HIGH, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD1_CTRL_OEOVER
#               0x0 -> drive output enable from peripheral signal selected by funcsel
#               0x1 -> drive output enable from inverse of peripheral signal selected by funcsel
#               0x2 -> disable output
#               0x3 -> enable output
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_OEOVER_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_OEOVER_BITS, 0x0000c000
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_OEOVER_MSB, 15
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_OEOVER_LSB, 14
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_OEOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_OEOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_OEOVER_VALUE_DISABLE, 0x2
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_OEOVER_VALUE_ENABLE, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD1_CTRL_OUTOVER
#               0x0 -> drive output from peripheral signal selected by funcsel
#               0x1 -> drive output from inverse of peripheral signal selected by funcsel
#               0x2 -> drive output low
#               0x3 -> drive output high
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_OUTOVER_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_OUTOVER_BITS, 0x00003000
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_OUTOVER_MSB, 13
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_OUTOVER_LSB, 12
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_OUTOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_OUTOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_OUTOVER_VALUE_LOW, 0x2
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_OUTOVER_VALUE_HIGH, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD1_CTRL_FUNCSEL
# Description : 0-31 -> selects pin function according to the gpio table
#               31 == NULL
#               0x00 -> xip_sd1
#               0x02 -> uart0_rx
#               0x03 -> i2c0_scl
#               0x05 -> siob_proc_61
#               0x1f -> null
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_FUNCSEL_RESET, 0x1f
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_FUNCSEL_BITS, 0x0000001f
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_FUNCSEL_MSB, 4
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_FUNCSEL_LSB, 0
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_FUNCSEL_VALUE_XIP_SD1, 0x00
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_FUNCSEL_VALUE_UART0_RX, 0x02
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_FUNCSEL_VALUE_I2C0_SCL, 0x03
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_FUNCSEL_VALUE_SIOB_PROC_61, 0x05
.equ	IO_QSPI_GPIO_QSPI_SD1_CTRL_FUNCSEL_VALUE_NULL, 0x1f
# =============================================================================
# Register    : IO_QSPI_GPIO_QSPI_SD2_STATUS
.equ	IO_QSPI_GPIO_QSPI_SD2_STATUS_OFFSET, 0x00000030
.equ	IO_QSPI_GPIO_QSPI_SD2_STATUS_BITS, 0x04022200
.equ	IO_QSPI_GPIO_QSPI_SD2_STATUS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD2_STATUS_IRQTOPROC
# Description : interrupt to processors, after override is applied
.equ	IO_QSPI_GPIO_QSPI_SD2_STATUS_IRQTOPROC_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD2_STATUS_IRQTOPROC_BITS, 0x04000000
.equ	IO_QSPI_GPIO_QSPI_SD2_STATUS_IRQTOPROC_MSB, 26
.equ	IO_QSPI_GPIO_QSPI_SD2_STATUS_IRQTOPROC_LSB, 26
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD2_STATUS_INFROMPAD
# Description : input signal from pad, before filtering and override are
#               applied
.equ	IO_QSPI_GPIO_QSPI_SD2_STATUS_INFROMPAD_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD2_STATUS_INFROMPAD_BITS, 0x00020000
.equ	IO_QSPI_GPIO_QSPI_SD2_STATUS_INFROMPAD_MSB, 17
.equ	IO_QSPI_GPIO_QSPI_SD2_STATUS_INFROMPAD_LSB, 17
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD2_STATUS_OETOPAD
# Description : output enable to pad after register override is applied
.equ	IO_QSPI_GPIO_QSPI_SD2_STATUS_OETOPAD_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD2_STATUS_OETOPAD_BITS, 0x00002000
.equ	IO_QSPI_GPIO_QSPI_SD2_STATUS_OETOPAD_MSB, 13
.equ	IO_QSPI_GPIO_QSPI_SD2_STATUS_OETOPAD_LSB, 13
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD2_STATUS_OUTTOPAD
# Description : output signal to pad after register override is applied
.equ	IO_QSPI_GPIO_QSPI_SD2_STATUS_OUTTOPAD_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD2_STATUS_OUTTOPAD_BITS, 0x00000200
.equ	IO_QSPI_GPIO_QSPI_SD2_STATUS_OUTTOPAD_MSB, 9
.equ	IO_QSPI_GPIO_QSPI_SD2_STATUS_OUTTOPAD_LSB, 9
# =============================================================================
# Register    : IO_QSPI_GPIO_QSPI_SD2_CTRL
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_OFFSET, 0x00000034
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_BITS, 0x3003f01f
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_RESET, 0x0000001f
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD2_CTRL_IRQOVER
#               0x0 -> don't invert the interrupt
#               0x1 -> invert the interrupt
#               0x2 -> drive interrupt low
#               0x3 -> drive interrupt high
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_IRQOVER_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_IRQOVER_BITS, 0x30000000
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_IRQOVER_MSB, 29
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_IRQOVER_LSB, 28
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_IRQOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_IRQOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_IRQOVER_VALUE_LOW, 0x2
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_IRQOVER_VALUE_HIGH, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD2_CTRL_INOVER
#               0x0 -> don't invert the peri input
#               0x1 -> invert the peri input
#               0x2 -> drive peri input low
#               0x3 -> drive peri input high
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_INOVER_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_INOVER_BITS, 0x00030000
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_INOVER_MSB, 17
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_INOVER_LSB, 16
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_INOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_INOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_INOVER_VALUE_LOW, 0x2
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_INOVER_VALUE_HIGH, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD2_CTRL_OEOVER
#               0x0 -> drive output enable from peripheral signal selected by funcsel
#               0x1 -> drive output enable from inverse of peripheral signal selected by funcsel
#               0x2 -> disable output
#               0x3 -> enable output
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_OEOVER_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_OEOVER_BITS, 0x0000c000
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_OEOVER_MSB, 15
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_OEOVER_LSB, 14
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_OEOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_OEOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_OEOVER_VALUE_DISABLE, 0x2
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_OEOVER_VALUE_ENABLE, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD2_CTRL_OUTOVER
#               0x0 -> drive output from peripheral signal selected by funcsel
#               0x1 -> drive output from inverse of peripheral signal selected by funcsel
#               0x2 -> drive output low
#               0x3 -> drive output high
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_OUTOVER_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_OUTOVER_BITS, 0x00003000
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_OUTOVER_MSB, 13
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_OUTOVER_LSB, 12
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_OUTOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_OUTOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_OUTOVER_VALUE_LOW, 0x2
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_OUTOVER_VALUE_HIGH, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD2_CTRL_FUNCSEL
# Description : 0-31 -> selects pin function according to the gpio table
#               31 == NULL
#               0x00 -> xip_sd2
#               0x02 -> uart0_cts
#               0x03 -> i2c1_sda
#               0x05 -> siob_proc_62
#               0x0b -> uart0_tx
#               0x1f -> null
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_FUNCSEL_RESET, 0x1f
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_FUNCSEL_BITS, 0x0000001f
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_FUNCSEL_MSB, 4
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_FUNCSEL_LSB, 0
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_FUNCSEL_VALUE_XIP_SD2, 0x00
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_FUNCSEL_VALUE_UART0_CTS, 0x02
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_FUNCSEL_VALUE_I2C1_SDA, 0x03
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_FUNCSEL_VALUE_SIOB_PROC_62, 0x05
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_FUNCSEL_VALUE_UART0_TX, 0x0b
.equ	IO_QSPI_GPIO_QSPI_SD2_CTRL_FUNCSEL_VALUE_NULL, 0x1f
# =============================================================================
# Register    : IO_QSPI_GPIO_QSPI_SD3_STATUS
.equ	IO_QSPI_GPIO_QSPI_SD3_STATUS_OFFSET, 0x00000038
.equ	IO_QSPI_GPIO_QSPI_SD3_STATUS_BITS, 0x04022200
.equ	IO_QSPI_GPIO_QSPI_SD3_STATUS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD3_STATUS_IRQTOPROC
# Description : interrupt to processors, after override is applied
.equ	IO_QSPI_GPIO_QSPI_SD3_STATUS_IRQTOPROC_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD3_STATUS_IRQTOPROC_BITS, 0x04000000
.equ	IO_QSPI_GPIO_QSPI_SD3_STATUS_IRQTOPROC_MSB, 26
.equ	IO_QSPI_GPIO_QSPI_SD3_STATUS_IRQTOPROC_LSB, 26
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD3_STATUS_INFROMPAD
# Description : input signal from pad, before filtering and override are
#               applied
.equ	IO_QSPI_GPIO_QSPI_SD3_STATUS_INFROMPAD_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD3_STATUS_INFROMPAD_BITS, 0x00020000
.equ	IO_QSPI_GPIO_QSPI_SD3_STATUS_INFROMPAD_MSB, 17
.equ	IO_QSPI_GPIO_QSPI_SD3_STATUS_INFROMPAD_LSB, 17
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD3_STATUS_OETOPAD
# Description : output enable to pad after register override is applied
.equ	IO_QSPI_GPIO_QSPI_SD3_STATUS_OETOPAD_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD3_STATUS_OETOPAD_BITS, 0x00002000
.equ	IO_QSPI_GPIO_QSPI_SD3_STATUS_OETOPAD_MSB, 13
.equ	IO_QSPI_GPIO_QSPI_SD3_STATUS_OETOPAD_LSB, 13
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD3_STATUS_OUTTOPAD
# Description : output signal to pad after register override is applied
.equ	IO_QSPI_GPIO_QSPI_SD3_STATUS_OUTTOPAD_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD3_STATUS_OUTTOPAD_BITS, 0x00000200
.equ	IO_QSPI_GPIO_QSPI_SD3_STATUS_OUTTOPAD_MSB, 9
.equ	IO_QSPI_GPIO_QSPI_SD3_STATUS_OUTTOPAD_LSB, 9
# =============================================================================
# Register    : IO_QSPI_GPIO_QSPI_SD3_CTRL
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_OFFSET, 0x0000003c
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_BITS, 0x3003f01f
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_RESET, 0x0000001f
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD3_CTRL_IRQOVER
#               0x0 -> don't invert the interrupt
#               0x1 -> invert the interrupt
#               0x2 -> drive interrupt low
#               0x3 -> drive interrupt high
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_IRQOVER_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_IRQOVER_BITS, 0x30000000
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_IRQOVER_MSB, 29
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_IRQOVER_LSB, 28
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_IRQOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_IRQOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_IRQOVER_VALUE_LOW, 0x2
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_IRQOVER_VALUE_HIGH, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD3_CTRL_INOVER
#               0x0 -> don't invert the peri input
#               0x1 -> invert the peri input
#               0x2 -> drive peri input low
#               0x3 -> drive peri input high
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_INOVER_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_INOVER_BITS, 0x00030000
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_INOVER_MSB, 17
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_INOVER_LSB, 16
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_INOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_INOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_INOVER_VALUE_LOW, 0x2
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_INOVER_VALUE_HIGH, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD3_CTRL_OEOVER
#               0x0 -> drive output enable from peripheral signal selected by funcsel
#               0x1 -> drive output enable from inverse of peripheral signal selected by funcsel
#               0x2 -> disable output
#               0x3 -> enable output
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_OEOVER_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_OEOVER_BITS, 0x0000c000
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_OEOVER_MSB, 15
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_OEOVER_LSB, 14
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_OEOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_OEOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_OEOVER_VALUE_DISABLE, 0x2
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_OEOVER_VALUE_ENABLE, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD3_CTRL_OUTOVER
#               0x0 -> drive output from peripheral signal selected by funcsel
#               0x1 -> drive output from inverse of peripheral signal selected by funcsel
#               0x2 -> drive output low
#               0x3 -> drive output high
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_OUTOVER_RESET, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_OUTOVER_BITS, 0x00003000
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_OUTOVER_MSB, 13
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_OUTOVER_LSB, 12
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_OUTOVER_VALUE_NORMAL, 0x0
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_OUTOVER_VALUE_INVERT, 0x1
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_OUTOVER_VALUE_LOW, 0x2
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_OUTOVER_VALUE_HIGH, 0x3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_GPIO_QSPI_SD3_CTRL_FUNCSEL
# Description : 0-31 -> selects pin function according to the gpio table
#               31 == NULL
#               0x00 -> xip_sd3
#               0x02 -> uart0_rts
#               0x03 -> i2c1_scl
#               0x05 -> siob_proc_63
#               0x0b -> uart0_rx
#               0x1f -> null
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_FUNCSEL_RESET, 0x1f
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_FUNCSEL_BITS, 0x0000001f
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_FUNCSEL_MSB, 4
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_FUNCSEL_LSB, 0
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_FUNCSEL_VALUE_XIP_SD3, 0x00
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_FUNCSEL_VALUE_UART0_RTS, 0x02
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_FUNCSEL_VALUE_I2C1_SCL, 0x03
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_FUNCSEL_VALUE_SIOB_PROC_63, 0x05
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_FUNCSEL_VALUE_UART0_RX, 0x0b
.equ	IO_QSPI_GPIO_QSPI_SD3_CTRL_FUNCSEL_VALUE_NULL, 0x1f
# =============================================================================
# Register    : IO_QSPI_IRQSUMMARY_PROC0_SECURE
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_OFFSET, 0x00000200
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_BITS, 0x000000ff
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SD3
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SD3_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SD3_BITS, 0x00000080
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SD3_MSB, 7
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SD3_LSB, 7
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SD2
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SD2_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SD2_BITS, 0x00000040
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SD2_MSB, 6
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SD2_LSB, 6
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SD1
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SD1_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SD1_BITS, 0x00000020
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SD1_MSB, 5
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SD1_LSB, 5
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SD0
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SD0_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SD0_BITS, 0x00000010
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SD0_MSB, 4
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SD0_LSB, 4
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SS
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SS_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SS_BITS, 0x00000008
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SS_MSB, 3
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SS_LSB, 3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SCLK
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SCLK_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SCLK_BITS, 0x00000004
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SCLK_MSB, 2
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_GPIO_QSPI_SCLK_LSB, 2
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC0_SECURE_USBPHY_DM
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_USBPHY_DM_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_USBPHY_DM_BITS, 0x00000002
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_USBPHY_DM_MSB, 1
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_USBPHY_DM_LSB, 1
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC0_SECURE_USBPHY_DP
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_USBPHY_DP_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_USBPHY_DP_BITS, 0x00000001
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_USBPHY_DP_MSB, 0
.equ	IO_QSPI_IRQSUMMARY_PROC0_SECURE_USBPHY_DP_LSB, 0
# =============================================================================
# Register    : IO_QSPI_IRQSUMMARY_PROC0_NONSECURE
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_OFFSET, 0x00000204
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_BITS, 0x000000ff
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SD3
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SD3_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SD3_BITS, 0x00000080
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SD3_MSB, 7
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SD3_LSB, 7
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SD2
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SD2_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SD2_BITS, 0x00000040
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SD2_MSB, 6
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SD2_LSB, 6
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SD1
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SD1_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SD1_BITS, 0x00000020
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SD1_MSB, 5
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SD1_LSB, 5
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SD0
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SD0_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SD0_BITS, 0x00000010
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SD0_MSB, 4
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SD0_LSB, 4
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SS
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SS_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SS_BITS, 0x00000008
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SS_MSB, 3
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SS_LSB, 3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SCLK
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SCLK_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SCLK_BITS, 0x00000004
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SCLK_MSB, 2
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_GPIO_QSPI_SCLK_LSB, 2
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_USBPHY_DM
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_USBPHY_DM_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_USBPHY_DM_BITS, 0x00000002
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_USBPHY_DM_MSB, 1
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_USBPHY_DM_LSB, 1
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_USBPHY_DP
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_USBPHY_DP_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_USBPHY_DP_BITS, 0x00000001
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_USBPHY_DP_MSB, 0
.equ	IO_QSPI_IRQSUMMARY_PROC0_NONSECURE_USBPHY_DP_LSB, 0
# =============================================================================
# Register    : IO_QSPI_IRQSUMMARY_PROC1_SECURE
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_OFFSET, 0x00000208
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_BITS, 0x000000ff
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SD3
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SD3_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SD3_BITS, 0x00000080
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SD3_MSB, 7
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SD3_LSB, 7
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SD2
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SD2_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SD2_BITS, 0x00000040
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SD2_MSB, 6
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SD2_LSB, 6
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SD1
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SD1_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SD1_BITS, 0x00000020
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SD1_MSB, 5
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SD1_LSB, 5
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SD0
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SD0_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SD0_BITS, 0x00000010
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SD0_MSB, 4
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SD0_LSB, 4
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SS
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SS_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SS_BITS, 0x00000008
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SS_MSB, 3
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SS_LSB, 3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SCLK
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SCLK_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SCLK_BITS, 0x00000004
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SCLK_MSB, 2
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_GPIO_QSPI_SCLK_LSB, 2
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC1_SECURE_USBPHY_DM
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_USBPHY_DM_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_USBPHY_DM_BITS, 0x00000002
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_USBPHY_DM_MSB, 1
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_USBPHY_DM_LSB, 1
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC1_SECURE_USBPHY_DP
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_USBPHY_DP_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_USBPHY_DP_BITS, 0x00000001
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_USBPHY_DP_MSB, 0
.equ	IO_QSPI_IRQSUMMARY_PROC1_SECURE_USBPHY_DP_LSB, 0
# =============================================================================
# Register    : IO_QSPI_IRQSUMMARY_PROC1_NONSECURE
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_OFFSET, 0x0000020c
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_BITS, 0x000000ff
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SD3
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SD3_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SD3_BITS, 0x00000080
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SD3_MSB, 7
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SD3_LSB, 7
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SD2
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SD2_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SD2_BITS, 0x00000040
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SD2_MSB, 6
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SD2_LSB, 6
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SD1
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SD1_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SD1_BITS, 0x00000020
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SD1_MSB, 5
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SD1_LSB, 5
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SD0
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SD0_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SD0_BITS, 0x00000010
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SD0_MSB, 4
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SD0_LSB, 4
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SS
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SS_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SS_BITS, 0x00000008
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SS_MSB, 3
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SS_LSB, 3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SCLK
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SCLK_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SCLK_BITS, 0x00000004
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SCLK_MSB, 2
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_GPIO_QSPI_SCLK_LSB, 2
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_USBPHY_DM
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_USBPHY_DM_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_USBPHY_DM_BITS, 0x00000002
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_USBPHY_DM_MSB, 1
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_USBPHY_DM_LSB, 1
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_USBPHY_DP
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_USBPHY_DP_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_USBPHY_DP_BITS, 0x00000001
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_USBPHY_DP_MSB, 0
.equ	IO_QSPI_IRQSUMMARY_PROC1_NONSECURE_USBPHY_DP_LSB, 0
# =============================================================================
# Register    : IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_OFFSET, 0x00000210
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_BITS, 0x000000ff
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SD3
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SD3_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SD3_BITS, 0x00000080
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SD3_MSB, 7
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SD3_LSB, 7
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SD2
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SD2_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SD2_BITS, 0x00000040
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SD2_MSB, 6
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SD2_LSB, 6
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SD1
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SD1_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SD1_BITS, 0x00000020
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SD1_MSB, 5
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SD1_LSB, 5
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SD0
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SD0_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SD0_BITS, 0x00000010
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SD0_MSB, 4
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SD0_LSB, 4
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SS
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SS_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SS_BITS, 0x00000008
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SS_MSB, 3
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SS_LSB, 3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SCLK
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SCLK_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SCLK_BITS, 0x00000004
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SCLK_MSB, 2
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_GPIO_QSPI_SCLK_LSB, 2
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_USBPHY_DM
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_USBPHY_DM_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_USBPHY_DM_BITS, 0x00000002
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_USBPHY_DM_MSB, 1
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_USBPHY_DM_LSB, 1
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_USBPHY_DP
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_USBPHY_DP_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_USBPHY_DP_BITS, 0x00000001
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_USBPHY_DP_MSB, 0
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_SECURE_USBPHY_DP_LSB, 0
# =============================================================================
# Register    : IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_OFFSET, 0x00000214
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_BITS, 0x000000ff
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SD3
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SD3_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SD3_BITS, 0x00000080
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SD3_MSB, 7
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SD3_LSB, 7
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SD2
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SD2_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SD2_BITS, 0x00000040
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SD2_MSB, 6
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SD2_LSB, 6
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SD1
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SD1_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SD1_BITS, 0x00000020
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SD1_MSB, 5
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SD1_LSB, 5
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SD0
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SD0_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SD0_BITS, 0x00000010
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SD0_MSB, 4
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SD0_LSB, 4
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SS
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SS_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SS_BITS, 0x00000008
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SS_MSB, 3
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SS_LSB, 3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SCLK
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SCLK_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SCLK_BITS, 0x00000004
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SCLK_MSB, 2
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_GPIO_QSPI_SCLK_LSB, 2
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_USBPHY_DM
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_USBPHY_DM_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_USBPHY_DM_BITS, 0x00000002
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_USBPHY_DM_MSB, 1
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_USBPHY_DM_LSB, 1
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_USBPHY_DP
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_USBPHY_DP_RESET, 0x0
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_USBPHY_DP_BITS, 0x00000001
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_USBPHY_DP_MSB, 0
.equ	IO_QSPI_IRQSUMMARY_DORMANT_WAKE_NONSECURE_USBPHY_DP_LSB, 0
# =============================================================================
# Register    : IO_QSPI_INTR
# Description : Raw Interrupts
.equ	IO_QSPI_INTR_OFFSET, 0x00000218
.equ	IO_QSPI_INTR_BITS, 0xffffffff
.equ	IO_QSPI_INTR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_GPIO_QSPI_SD3_EDGE_HIGH
.equ	IO_QSPI_INTR_GPIO_QSPI_SD3_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_INTR_GPIO_QSPI_SD3_EDGE_HIGH_BITS, 0x80000000
.equ	IO_QSPI_INTR_GPIO_QSPI_SD3_EDGE_HIGH_MSB, 31
.equ	IO_QSPI_INTR_GPIO_QSPI_SD3_EDGE_HIGH_LSB, 31
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_GPIO_QSPI_SD3_EDGE_LOW
.equ	IO_QSPI_INTR_GPIO_QSPI_SD3_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_INTR_GPIO_QSPI_SD3_EDGE_LOW_BITS, 0x40000000
.equ	IO_QSPI_INTR_GPIO_QSPI_SD3_EDGE_LOW_MSB, 30
.equ	IO_QSPI_INTR_GPIO_QSPI_SD3_EDGE_LOW_LSB, 30
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_GPIO_QSPI_SD3_LEVEL_HIGH
.equ	IO_QSPI_INTR_GPIO_QSPI_SD3_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_INTR_GPIO_QSPI_SD3_LEVEL_HIGH_BITS, 0x20000000
.equ	IO_QSPI_INTR_GPIO_QSPI_SD3_LEVEL_HIGH_MSB, 29
.equ	IO_QSPI_INTR_GPIO_QSPI_SD3_LEVEL_HIGH_LSB, 29
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_GPIO_QSPI_SD3_LEVEL_LOW
.equ	IO_QSPI_INTR_GPIO_QSPI_SD3_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_INTR_GPIO_QSPI_SD3_LEVEL_LOW_BITS, 0x10000000
.equ	IO_QSPI_INTR_GPIO_QSPI_SD3_LEVEL_LOW_MSB, 28
.equ	IO_QSPI_INTR_GPIO_QSPI_SD3_LEVEL_LOW_LSB, 28
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_GPIO_QSPI_SD2_EDGE_HIGH
.equ	IO_QSPI_INTR_GPIO_QSPI_SD2_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_INTR_GPIO_QSPI_SD2_EDGE_HIGH_BITS, 0x08000000
.equ	IO_QSPI_INTR_GPIO_QSPI_SD2_EDGE_HIGH_MSB, 27
.equ	IO_QSPI_INTR_GPIO_QSPI_SD2_EDGE_HIGH_LSB, 27
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_GPIO_QSPI_SD2_EDGE_LOW
.equ	IO_QSPI_INTR_GPIO_QSPI_SD2_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_INTR_GPIO_QSPI_SD2_EDGE_LOW_BITS, 0x04000000
.equ	IO_QSPI_INTR_GPIO_QSPI_SD2_EDGE_LOW_MSB, 26
.equ	IO_QSPI_INTR_GPIO_QSPI_SD2_EDGE_LOW_LSB, 26
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_GPIO_QSPI_SD2_LEVEL_HIGH
.equ	IO_QSPI_INTR_GPIO_QSPI_SD2_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_INTR_GPIO_QSPI_SD2_LEVEL_HIGH_BITS, 0x02000000
.equ	IO_QSPI_INTR_GPIO_QSPI_SD2_LEVEL_HIGH_MSB, 25
.equ	IO_QSPI_INTR_GPIO_QSPI_SD2_LEVEL_HIGH_LSB, 25
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_GPIO_QSPI_SD2_LEVEL_LOW
.equ	IO_QSPI_INTR_GPIO_QSPI_SD2_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_INTR_GPIO_QSPI_SD2_LEVEL_LOW_BITS, 0x01000000
.equ	IO_QSPI_INTR_GPIO_QSPI_SD2_LEVEL_LOW_MSB, 24
.equ	IO_QSPI_INTR_GPIO_QSPI_SD2_LEVEL_LOW_LSB, 24
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_GPIO_QSPI_SD1_EDGE_HIGH
.equ	IO_QSPI_INTR_GPIO_QSPI_SD1_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_INTR_GPIO_QSPI_SD1_EDGE_HIGH_BITS, 0x00800000
.equ	IO_QSPI_INTR_GPIO_QSPI_SD1_EDGE_HIGH_MSB, 23
.equ	IO_QSPI_INTR_GPIO_QSPI_SD1_EDGE_HIGH_LSB, 23
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_GPIO_QSPI_SD1_EDGE_LOW
.equ	IO_QSPI_INTR_GPIO_QSPI_SD1_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_INTR_GPIO_QSPI_SD1_EDGE_LOW_BITS, 0x00400000
.equ	IO_QSPI_INTR_GPIO_QSPI_SD1_EDGE_LOW_MSB, 22
.equ	IO_QSPI_INTR_GPIO_QSPI_SD1_EDGE_LOW_LSB, 22
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_GPIO_QSPI_SD1_LEVEL_HIGH
.equ	IO_QSPI_INTR_GPIO_QSPI_SD1_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_INTR_GPIO_QSPI_SD1_LEVEL_HIGH_BITS, 0x00200000
.equ	IO_QSPI_INTR_GPIO_QSPI_SD1_LEVEL_HIGH_MSB, 21
.equ	IO_QSPI_INTR_GPIO_QSPI_SD1_LEVEL_HIGH_LSB, 21
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_GPIO_QSPI_SD1_LEVEL_LOW
.equ	IO_QSPI_INTR_GPIO_QSPI_SD1_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_INTR_GPIO_QSPI_SD1_LEVEL_LOW_BITS, 0x00100000
.equ	IO_QSPI_INTR_GPIO_QSPI_SD1_LEVEL_LOW_MSB, 20
.equ	IO_QSPI_INTR_GPIO_QSPI_SD1_LEVEL_LOW_LSB, 20
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_GPIO_QSPI_SD0_EDGE_HIGH
.equ	IO_QSPI_INTR_GPIO_QSPI_SD0_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_INTR_GPIO_QSPI_SD0_EDGE_HIGH_BITS, 0x00080000
.equ	IO_QSPI_INTR_GPIO_QSPI_SD0_EDGE_HIGH_MSB, 19
.equ	IO_QSPI_INTR_GPIO_QSPI_SD0_EDGE_HIGH_LSB, 19
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_GPIO_QSPI_SD0_EDGE_LOW
.equ	IO_QSPI_INTR_GPIO_QSPI_SD0_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_INTR_GPIO_QSPI_SD0_EDGE_LOW_BITS, 0x00040000
.equ	IO_QSPI_INTR_GPIO_QSPI_SD0_EDGE_LOW_MSB, 18
.equ	IO_QSPI_INTR_GPIO_QSPI_SD0_EDGE_LOW_LSB, 18
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_GPIO_QSPI_SD0_LEVEL_HIGH
.equ	IO_QSPI_INTR_GPIO_QSPI_SD0_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_INTR_GPIO_QSPI_SD0_LEVEL_HIGH_BITS, 0x00020000
.equ	IO_QSPI_INTR_GPIO_QSPI_SD0_LEVEL_HIGH_MSB, 17
.equ	IO_QSPI_INTR_GPIO_QSPI_SD0_LEVEL_HIGH_LSB, 17
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_GPIO_QSPI_SD0_LEVEL_LOW
.equ	IO_QSPI_INTR_GPIO_QSPI_SD0_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_INTR_GPIO_QSPI_SD0_LEVEL_LOW_BITS, 0x00010000
.equ	IO_QSPI_INTR_GPIO_QSPI_SD0_LEVEL_LOW_MSB, 16
.equ	IO_QSPI_INTR_GPIO_QSPI_SD0_LEVEL_LOW_LSB, 16
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_GPIO_QSPI_SS_EDGE_HIGH
.equ	IO_QSPI_INTR_GPIO_QSPI_SS_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_INTR_GPIO_QSPI_SS_EDGE_HIGH_BITS, 0x00008000
.equ	IO_QSPI_INTR_GPIO_QSPI_SS_EDGE_HIGH_MSB, 15
.equ	IO_QSPI_INTR_GPIO_QSPI_SS_EDGE_HIGH_LSB, 15
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_GPIO_QSPI_SS_EDGE_LOW
.equ	IO_QSPI_INTR_GPIO_QSPI_SS_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_INTR_GPIO_QSPI_SS_EDGE_LOW_BITS, 0x00004000
.equ	IO_QSPI_INTR_GPIO_QSPI_SS_EDGE_LOW_MSB, 14
.equ	IO_QSPI_INTR_GPIO_QSPI_SS_EDGE_LOW_LSB, 14
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_GPIO_QSPI_SS_LEVEL_HIGH
.equ	IO_QSPI_INTR_GPIO_QSPI_SS_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_INTR_GPIO_QSPI_SS_LEVEL_HIGH_BITS, 0x00002000
.equ	IO_QSPI_INTR_GPIO_QSPI_SS_LEVEL_HIGH_MSB, 13
.equ	IO_QSPI_INTR_GPIO_QSPI_SS_LEVEL_HIGH_LSB, 13
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_GPIO_QSPI_SS_LEVEL_LOW
.equ	IO_QSPI_INTR_GPIO_QSPI_SS_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_INTR_GPIO_QSPI_SS_LEVEL_LOW_BITS, 0x00001000
.equ	IO_QSPI_INTR_GPIO_QSPI_SS_LEVEL_LOW_MSB, 12
.equ	IO_QSPI_INTR_GPIO_QSPI_SS_LEVEL_LOW_LSB, 12
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_GPIO_QSPI_SCLK_EDGE_HIGH
.equ	IO_QSPI_INTR_GPIO_QSPI_SCLK_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_INTR_GPIO_QSPI_SCLK_EDGE_HIGH_BITS, 0x00000800
.equ	IO_QSPI_INTR_GPIO_QSPI_SCLK_EDGE_HIGH_MSB, 11
.equ	IO_QSPI_INTR_GPIO_QSPI_SCLK_EDGE_HIGH_LSB, 11
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_GPIO_QSPI_SCLK_EDGE_LOW
.equ	IO_QSPI_INTR_GPIO_QSPI_SCLK_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_INTR_GPIO_QSPI_SCLK_EDGE_LOW_BITS, 0x00000400
.equ	IO_QSPI_INTR_GPIO_QSPI_SCLK_EDGE_LOW_MSB, 10
.equ	IO_QSPI_INTR_GPIO_QSPI_SCLK_EDGE_LOW_LSB, 10
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_GPIO_QSPI_SCLK_LEVEL_HIGH
.equ	IO_QSPI_INTR_GPIO_QSPI_SCLK_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_INTR_GPIO_QSPI_SCLK_LEVEL_HIGH_BITS, 0x00000200
.equ	IO_QSPI_INTR_GPIO_QSPI_SCLK_LEVEL_HIGH_MSB, 9
.equ	IO_QSPI_INTR_GPIO_QSPI_SCLK_LEVEL_HIGH_LSB, 9
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_GPIO_QSPI_SCLK_LEVEL_LOW
.equ	IO_QSPI_INTR_GPIO_QSPI_SCLK_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_INTR_GPIO_QSPI_SCLK_LEVEL_LOW_BITS, 0x00000100
.equ	IO_QSPI_INTR_GPIO_QSPI_SCLK_LEVEL_LOW_MSB, 8
.equ	IO_QSPI_INTR_GPIO_QSPI_SCLK_LEVEL_LOW_LSB, 8
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_USBPHY_DM_EDGE_HIGH
.equ	IO_QSPI_INTR_USBPHY_DM_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_INTR_USBPHY_DM_EDGE_HIGH_BITS, 0x00000080
.equ	IO_QSPI_INTR_USBPHY_DM_EDGE_HIGH_MSB, 7
.equ	IO_QSPI_INTR_USBPHY_DM_EDGE_HIGH_LSB, 7
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_USBPHY_DM_EDGE_LOW
.equ	IO_QSPI_INTR_USBPHY_DM_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_INTR_USBPHY_DM_EDGE_LOW_BITS, 0x00000040
.equ	IO_QSPI_INTR_USBPHY_DM_EDGE_LOW_MSB, 6
.equ	IO_QSPI_INTR_USBPHY_DM_EDGE_LOW_LSB, 6
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_USBPHY_DM_LEVEL_HIGH
.equ	IO_QSPI_INTR_USBPHY_DM_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_INTR_USBPHY_DM_LEVEL_HIGH_BITS, 0x00000020
.equ	IO_QSPI_INTR_USBPHY_DM_LEVEL_HIGH_MSB, 5
.equ	IO_QSPI_INTR_USBPHY_DM_LEVEL_HIGH_LSB, 5
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_USBPHY_DM_LEVEL_LOW
.equ	IO_QSPI_INTR_USBPHY_DM_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_INTR_USBPHY_DM_LEVEL_LOW_BITS, 0x00000010
.equ	IO_QSPI_INTR_USBPHY_DM_LEVEL_LOW_MSB, 4
.equ	IO_QSPI_INTR_USBPHY_DM_LEVEL_LOW_LSB, 4
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_USBPHY_DP_EDGE_HIGH
.equ	IO_QSPI_INTR_USBPHY_DP_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_INTR_USBPHY_DP_EDGE_HIGH_BITS, 0x00000008
.equ	IO_QSPI_INTR_USBPHY_DP_EDGE_HIGH_MSB, 3
.equ	IO_QSPI_INTR_USBPHY_DP_EDGE_HIGH_LSB, 3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_USBPHY_DP_EDGE_LOW
.equ	IO_QSPI_INTR_USBPHY_DP_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_INTR_USBPHY_DP_EDGE_LOW_BITS, 0x00000004
.equ	IO_QSPI_INTR_USBPHY_DP_EDGE_LOW_MSB, 2
.equ	IO_QSPI_INTR_USBPHY_DP_EDGE_LOW_LSB, 2
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_USBPHY_DP_LEVEL_HIGH
.equ	IO_QSPI_INTR_USBPHY_DP_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_INTR_USBPHY_DP_LEVEL_HIGH_BITS, 0x00000002
.equ	IO_QSPI_INTR_USBPHY_DP_LEVEL_HIGH_MSB, 1
.equ	IO_QSPI_INTR_USBPHY_DP_LEVEL_HIGH_LSB, 1
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_INTR_USBPHY_DP_LEVEL_LOW
.equ	IO_QSPI_INTR_USBPHY_DP_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_INTR_USBPHY_DP_LEVEL_LOW_BITS, 0x00000001
.equ	IO_QSPI_INTR_USBPHY_DP_LEVEL_LOW_MSB, 0
.equ	IO_QSPI_INTR_USBPHY_DP_LEVEL_LOW_LSB, 0
# =============================================================================
# Register    : IO_QSPI_PROC0_INTE
# Description : Interrupt Enable for proc0
.equ	IO_QSPI_PROC0_INTE_OFFSET, 0x0000021c
.equ	IO_QSPI_PROC0_INTE_BITS, 0xffffffff
.equ	IO_QSPI_PROC0_INTE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_GPIO_QSPI_SD3_EDGE_HIGH
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD3_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD3_EDGE_HIGH_BITS, 0x80000000
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD3_EDGE_HIGH_MSB, 31
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD3_EDGE_HIGH_LSB, 31
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_GPIO_QSPI_SD3_EDGE_LOW
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD3_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD3_EDGE_LOW_BITS, 0x40000000
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD3_EDGE_LOW_MSB, 30
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD3_EDGE_LOW_LSB, 30
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_GPIO_QSPI_SD3_LEVEL_HIGH
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD3_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD3_LEVEL_HIGH_BITS, 0x20000000
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD3_LEVEL_HIGH_MSB, 29
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD3_LEVEL_HIGH_LSB, 29
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_GPIO_QSPI_SD3_LEVEL_LOW
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD3_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD3_LEVEL_LOW_BITS, 0x10000000
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD3_LEVEL_LOW_MSB, 28
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD3_LEVEL_LOW_LSB, 28
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_GPIO_QSPI_SD2_EDGE_HIGH
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD2_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD2_EDGE_HIGH_BITS, 0x08000000
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD2_EDGE_HIGH_MSB, 27
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD2_EDGE_HIGH_LSB, 27
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_GPIO_QSPI_SD2_EDGE_LOW
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD2_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD2_EDGE_LOW_BITS, 0x04000000
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD2_EDGE_LOW_MSB, 26
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD2_EDGE_LOW_LSB, 26
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_GPIO_QSPI_SD2_LEVEL_HIGH
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD2_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD2_LEVEL_HIGH_BITS, 0x02000000
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD2_LEVEL_HIGH_MSB, 25
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD2_LEVEL_HIGH_LSB, 25
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_GPIO_QSPI_SD2_LEVEL_LOW
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD2_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD2_LEVEL_LOW_BITS, 0x01000000
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD2_LEVEL_LOW_MSB, 24
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD2_LEVEL_LOW_LSB, 24
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_GPIO_QSPI_SD1_EDGE_HIGH
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD1_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD1_EDGE_HIGH_BITS, 0x00800000
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD1_EDGE_HIGH_MSB, 23
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD1_EDGE_HIGH_LSB, 23
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_GPIO_QSPI_SD1_EDGE_LOW
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD1_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD1_EDGE_LOW_BITS, 0x00400000
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD1_EDGE_LOW_MSB, 22
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD1_EDGE_LOW_LSB, 22
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_GPIO_QSPI_SD1_LEVEL_HIGH
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD1_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD1_LEVEL_HIGH_BITS, 0x00200000
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD1_LEVEL_HIGH_MSB, 21
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD1_LEVEL_HIGH_LSB, 21
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_GPIO_QSPI_SD1_LEVEL_LOW
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD1_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD1_LEVEL_LOW_BITS, 0x00100000
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD1_LEVEL_LOW_MSB, 20
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD1_LEVEL_LOW_LSB, 20
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_GPIO_QSPI_SD0_EDGE_HIGH
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD0_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD0_EDGE_HIGH_BITS, 0x00080000
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD0_EDGE_HIGH_MSB, 19
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD0_EDGE_HIGH_LSB, 19
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_GPIO_QSPI_SD0_EDGE_LOW
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD0_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD0_EDGE_LOW_BITS, 0x00040000
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD0_EDGE_LOW_MSB, 18
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD0_EDGE_LOW_LSB, 18
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_GPIO_QSPI_SD0_LEVEL_HIGH
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD0_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD0_LEVEL_HIGH_BITS, 0x00020000
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD0_LEVEL_HIGH_MSB, 17
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD0_LEVEL_HIGH_LSB, 17
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_GPIO_QSPI_SD0_LEVEL_LOW
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD0_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD0_LEVEL_LOW_BITS, 0x00010000
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD0_LEVEL_LOW_MSB, 16
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SD0_LEVEL_LOW_LSB, 16
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_GPIO_QSPI_SS_EDGE_HIGH
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SS_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SS_EDGE_HIGH_BITS, 0x00008000
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SS_EDGE_HIGH_MSB, 15
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SS_EDGE_HIGH_LSB, 15
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_GPIO_QSPI_SS_EDGE_LOW
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SS_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SS_EDGE_LOW_BITS, 0x00004000
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SS_EDGE_LOW_MSB, 14
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SS_EDGE_LOW_LSB, 14
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_GPIO_QSPI_SS_LEVEL_HIGH
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SS_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SS_LEVEL_HIGH_BITS, 0x00002000
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SS_LEVEL_HIGH_MSB, 13
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SS_LEVEL_HIGH_LSB, 13
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_GPIO_QSPI_SS_LEVEL_LOW
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SS_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SS_LEVEL_LOW_BITS, 0x00001000
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SS_LEVEL_LOW_MSB, 12
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SS_LEVEL_LOW_LSB, 12
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_GPIO_QSPI_SCLK_EDGE_HIGH
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SCLK_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SCLK_EDGE_HIGH_BITS, 0x00000800
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SCLK_EDGE_HIGH_MSB, 11
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SCLK_EDGE_HIGH_LSB, 11
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_GPIO_QSPI_SCLK_EDGE_LOW
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SCLK_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SCLK_EDGE_LOW_BITS, 0x00000400
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SCLK_EDGE_LOW_MSB, 10
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SCLK_EDGE_LOW_LSB, 10
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_GPIO_QSPI_SCLK_LEVEL_HIGH
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SCLK_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SCLK_LEVEL_HIGH_BITS, 0x00000200
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SCLK_LEVEL_HIGH_MSB, 9
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SCLK_LEVEL_HIGH_LSB, 9
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_GPIO_QSPI_SCLK_LEVEL_LOW
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SCLK_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SCLK_LEVEL_LOW_BITS, 0x00000100
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SCLK_LEVEL_LOW_MSB, 8
.equ	IO_QSPI_PROC0_INTE_GPIO_QSPI_SCLK_LEVEL_LOW_LSB, 8
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_USBPHY_DM_EDGE_HIGH
.equ	IO_QSPI_PROC0_INTE_USBPHY_DM_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_USBPHY_DM_EDGE_HIGH_BITS, 0x00000080
.equ	IO_QSPI_PROC0_INTE_USBPHY_DM_EDGE_HIGH_MSB, 7
.equ	IO_QSPI_PROC0_INTE_USBPHY_DM_EDGE_HIGH_LSB, 7
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_USBPHY_DM_EDGE_LOW
.equ	IO_QSPI_PROC0_INTE_USBPHY_DM_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_USBPHY_DM_EDGE_LOW_BITS, 0x00000040
.equ	IO_QSPI_PROC0_INTE_USBPHY_DM_EDGE_LOW_MSB, 6
.equ	IO_QSPI_PROC0_INTE_USBPHY_DM_EDGE_LOW_LSB, 6
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_USBPHY_DM_LEVEL_HIGH
.equ	IO_QSPI_PROC0_INTE_USBPHY_DM_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_USBPHY_DM_LEVEL_HIGH_BITS, 0x00000020
.equ	IO_QSPI_PROC0_INTE_USBPHY_DM_LEVEL_HIGH_MSB, 5
.equ	IO_QSPI_PROC0_INTE_USBPHY_DM_LEVEL_HIGH_LSB, 5
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_USBPHY_DM_LEVEL_LOW
.equ	IO_QSPI_PROC0_INTE_USBPHY_DM_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_USBPHY_DM_LEVEL_LOW_BITS, 0x00000010
.equ	IO_QSPI_PROC0_INTE_USBPHY_DM_LEVEL_LOW_MSB, 4
.equ	IO_QSPI_PROC0_INTE_USBPHY_DM_LEVEL_LOW_LSB, 4
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_USBPHY_DP_EDGE_HIGH
.equ	IO_QSPI_PROC0_INTE_USBPHY_DP_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_USBPHY_DP_EDGE_HIGH_BITS, 0x00000008
.equ	IO_QSPI_PROC0_INTE_USBPHY_DP_EDGE_HIGH_MSB, 3
.equ	IO_QSPI_PROC0_INTE_USBPHY_DP_EDGE_HIGH_LSB, 3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_USBPHY_DP_EDGE_LOW
.equ	IO_QSPI_PROC0_INTE_USBPHY_DP_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_USBPHY_DP_EDGE_LOW_BITS, 0x00000004
.equ	IO_QSPI_PROC0_INTE_USBPHY_DP_EDGE_LOW_MSB, 2
.equ	IO_QSPI_PROC0_INTE_USBPHY_DP_EDGE_LOW_LSB, 2
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_USBPHY_DP_LEVEL_HIGH
.equ	IO_QSPI_PROC0_INTE_USBPHY_DP_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_USBPHY_DP_LEVEL_HIGH_BITS, 0x00000002
.equ	IO_QSPI_PROC0_INTE_USBPHY_DP_LEVEL_HIGH_MSB, 1
.equ	IO_QSPI_PROC0_INTE_USBPHY_DP_LEVEL_HIGH_LSB, 1
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTE_USBPHY_DP_LEVEL_LOW
.equ	IO_QSPI_PROC0_INTE_USBPHY_DP_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTE_USBPHY_DP_LEVEL_LOW_BITS, 0x00000001
.equ	IO_QSPI_PROC0_INTE_USBPHY_DP_LEVEL_LOW_MSB, 0
.equ	IO_QSPI_PROC0_INTE_USBPHY_DP_LEVEL_LOW_LSB, 0
# =============================================================================
# Register    : IO_QSPI_PROC0_INTF
# Description : Interrupt Force for proc0
.equ	IO_QSPI_PROC0_INTF_OFFSET, 0x00000220
.equ	IO_QSPI_PROC0_INTF_BITS, 0xffffffff
.equ	IO_QSPI_PROC0_INTF_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_GPIO_QSPI_SD3_EDGE_HIGH
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD3_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD3_EDGE_HIGH_BITS, 0x80000000
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD3_EDGE_HIGH_MSB, 31
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD3_EDGE_HIGH_LSB, 31
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_GPIO_QSPI_SD3_EDGE_LOW
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD3_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD3_EDGE_LOW_BITS, 0x40000000
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD3_EDGE_LOW_MSB, 30
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD3_EDGE_LOW_LSB, 30
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_GPIO_QSPI_SD3_LEVEL_HIGH
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD3_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD3_LEVEL_HIGH_BITS, 0x20000000
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD3_LEVEL_HIGH_MSB, 29
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD3_LEVEL_HIGH_LSB, 29
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_GPIO_QSPI_SD3_LEVEL_LOW
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD3_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD3_LEVEL_LOW_BITS, 0x10000000
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD3_LEVEL_LOW_MSB, 28
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD3_LEVEL_LOW_LSB, 28
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_GPIO_QSPI_SD2_EDGE_HIGH
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD2_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD2_EDGE_HIGH_BITS, 0x08000000
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD2_EDGE_HIGH_MSB, 27
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD2_EDGE_HIGH_LSB, 27
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_GPIO_QSPI_SD2_EDGE_LOW
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD2_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD2_EDGE_LOW_BITS, 0x04000000
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD2_EDGE_LOW_MSB, 26
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD2_EDGE_LOW_LSB, 26
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_GPIO_QSPI_SD2_LEVEL_HIGH
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD2_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD2_LEVEL_HIGH_BITS, 0x02000000
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD2_LEVEL_HIGH_MSB, 25
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD2_LEVEL_HIGH_LSB, 25
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_GPIO_QSPI_SD2_LEVEL_LOW
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD2_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD2_LEVEL_LOW_BITS, 0x01000000
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD2_LEVEL_LOW_MSB, 24
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD2_LEVEL_LOW_LSB, 24
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_GPIO_QSPI_SD1_EDGE_HIGH
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD1_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD1_EDGE_HIGH_BITS, 0x00800000
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD1_EDGE_HIGH_MSB, 23
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD1_EDGE_HIGH_LSB, 23
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_GPIO_QSPI_SD1_EDGE_LOW
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD1_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD1_EDGE_LOW_BITS, 0x00400000
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD1_EDGE_LOW_MSB, 22
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD1_EDGE_LOW_LSB, 22
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_GPIO_QSPI_SD1_LEVEL_HIGH
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD1_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD1_LEVEL_HIGH_BITS, 0x00200000
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD1_LEVEL_HIGH_MSB, 21
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD1_LEVEL_HIGH_LSB, 21
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_GPIO_QSPI_SD1_LEVEL_LOW
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD1_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD1_LEVEL_LOW_BITS, 0x00100000
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD1_LEVEL_LOW_MSB, 20
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD1_LEVEL_LOW_LSB, 20
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_GPIO_QSPI_SD0_EDGE_HIGH
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD0_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD0_EDGE_HIGH_BITS, 0x00080000
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD0_EDGE_HIGH_MSB, 19
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD0_EDGE_HIGH_LSB, 19
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_GPIO_QSPI_SD0_EDGE_LOW
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD0_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD0_EDGE_LOW_BITS, 0x00040000
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD0_EDGE_LOW_MSB, 18
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD0_EDGE_LOW_LSB, 18
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_GPIO_QSPI_SD0_LEVEL_HIGH
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD0_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD0_LEVEL_HIGH_BITS, 0x00020000
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD0_LEVEL_HIGH_MSB, 17
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD0_LEVEL_HIGH_LSB, 17
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_GPIO_QSPI_SD0_LEVEL_LOW
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD0_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD0_LEVEL_LOW_BITS, 0x00010000
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD0_LEVEL_LOW_MSB, 16
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SD0_LEVEL_LOW_LSB, 16
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_GPIO_QSPI_SS_EDGE_HIGH
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SS_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SS_EDGE_HIGH_BITS, 0x00008000
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SS_EDGE_HIGH_MSB, 15
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SS_EDGE_HIGH_LSB, 15
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_GPIO_QSPI_SS_EDGE_LOW
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SS_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SS_EDGE_LOW_BITS, 0x00004000
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SS_EDGE_LOW_MSB, 14
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SS_EDGE_LOW_LSB, 14
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_GPIO_QSPI_SS_LEVEL_HIGH
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SS_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SS_LEVEL_HIGH_BITS, 0x00002000
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SS_LEVEL_HIGH_MSB, 13
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SS_LEVEL_HIGH_LSB, 13
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_GPIO_QSPI_SS_LEVEL_LOW
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SS_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SS_LEVEL_LOW_BITS, 0x00001000
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SS_LEVEL_LOW_MSB, 12
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SS_LEVEL_LOW_LSB, 12
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_GPIO_QSPI_SCLK_EDGE_HIGH
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SCLK_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SCLK_EDGE_HIGH_BITS, 0x00000800
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SCLK_EDGE_HIGH_MSB, 11
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SCLK_EDGE_HIGH_LSB, 11
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_GPIO_QSPI_SCLK_EDGE_LOW
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SCLK_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SCLK_EDGE_LOW_BITS, 0x00000400
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SCLK_EDGE_LOW_MSB, 10
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SCLK_EDGE_LOW_LSB, 10
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_GPIO_QSPI_SCLK_LEVEL_HIGH
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SCLK_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SCLK_LEVEL_HIGH_BITS, 0x00000200
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SCLK_LEVEL_HIGH_MSB, 9
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SCLK_LEVEL_HIGH_LSB, 9
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_GPIO_QSPI_SCLK_LEVEL_LOW
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SCLK_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SCLK_LEVEL_LOW_BITS, 0x00000100
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SCLK_LEVEL_LOW_MSB, 8
.equ	IO_QSPI_PROC0_INTF_GPIO_QSPI_SCLK_LEVEL_LOW_LSB, 8
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_USBPHY_DM_EDGE_HIGH
.equ	IO_QSPI_PROC0_INTF_USBPHY_DM_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_USBPHY_DM_EDGE_HIGH_BITS, 0x00000080
.equ	IO_QSPI_PROC0_INTF_USBPHY_DM_EDGE_HIGH_MSB, 7
.equ	IO_QSPI_PROC0_INTF_USBPHY_DM_EDGE_HIGH_LSB, 7
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_USBPHY_DM_EDGE_LOW
.equ	IO_QSPI_PROC0_INTF_USBPHY_DM_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_USBPHY_DM_EDGE_LOW_BITS, 0x00000040
.equ	IO_QSPI_PROC0_INTF_USBPHY_DM_EDGE_LOW_MSB, 6
.equ	IO_QSPI_PROC0_INTF_USBPHY_DM_EDGE_LOW_LSB, 6
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_USBPHY_DM_LEVEL_HIGH
.equ	IO_QSPI_PROC0_INTF_USBPHY_DM_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_USBPHY_DM_LEVEL_HIGH_BITS, 0x00000020
.equ	IO_QSPI_PROC0_INTF_USBPHY_DM_LEVEL_HIGH_MSB, 5
.equ	IO_QSPI_PROC0_INTF_USBPHY_DM_LEVEL_HIGH_LSB, 5
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_USBPHY_DM_LEVEL_LOW
.equ	IO_QSPI_PROC0_INTF_USBPHY_DM_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_USBPHY_DM_LEVEL_LOW_BITS, 0x00000010
.equ	IO_QSPI_PROC0_INTF_USBPHY_DM_LEVEL_LOW_MSB, 4
.equ	IO_QSPI_PROC0_INTF_USBPHY_DM_LEVEL_LOW_LSB, 4
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_USBPHY_DP_EDGE_HIGH
.equ	IO_QSPI_PROC0_INTF_USBPHY_DP_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_USBPHY_DP_EDGE_HIGH_BITS, 0x00000008
.equ	IO_QSPI_PROC0_INTF_USBPHY_DP_EDGE_HIGH_MSB, 3
.equ	IO_QSPI_PROC0_INTF_USBPHY_DP_EDGE_HIGH_LSB, 3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_USBPHY_DP_EDGE_LOW
.equ	IO_QSPI_PROC0_INTF_USBPHY_DP_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_USBPHY_DP_EDGE_LOW_BITS, 0x00000004
.equ	IO_QSPI_PROC0_INTF_USBPHY_DP_EDGE_LOW_MSB, 2
.equ	IO_QSPI_PROC0_INTF_USBPHY_DP_EDGE_LOW_LSB, 2
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_USBPHY_DP_LEVEL_HIGH
.equ	IO_QSPI_PROC0_INTF_USBPHY_DP_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_USBPHY_DP_LEVEL_HIGH_BITS, 0x00000002
.equ	IO_QSPI_PROC0_INTF_USBPHY_DP_LEVEL_HIGH_MSB, 1
.equ	IO_QSPI_PROC0_INTF_USBPHY_DP_LEVEL_HIGH_LSB, 1
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTF_USBPHY_DP_LEVEL_LOW
.equ	IO_QSPI_PROC0_INTF_USBPHY_DP_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTF_USBPHY_DP_LEVEL_LOW_BITS, 0x00000001
.equ	IO_QSPI_PROC0_INTF_USBPHY_DP_LEVEL_LOW_MSB, 0
.equ	IO_QSPI_PROC0_INTF_USBPHY_DP_LEVEL_LOW_LSB, 0
# =============================================================================
# Register    : IO_QSPI_PROC0_INTS
# Description : Interrupt status after masking & forcing for proc0
.equ	IO_QSPI_PROC0_INTS_OFFSET, 0x00000224
.equ	IO_QSPI_PROC0_INTS_BITS, 0xffffffff
.equ	IO_QSPI_PROC0_INTS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_GPIO_QSPI_SD3_EDGE_HIGH
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD3_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD3_EDGE_HIGH_BITS, 0x80000000
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD3_EDGE_HIGH_MSB, 31
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD3_EDGE_HIGH_LSB, 31
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_GPIO_QSPI_SD3_EDGE_LOW
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD3_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD3_EDGE_LOW_BITS, 0x40000000
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD3_EDGE_LOW_MSB, 30
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD3_EDGE_LOW_LSB, 30
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_GPIO_QSPI_SD3_LEVEL_HIGH
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD3_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD3_LEVEL_HIGH_BITS, 0x20000000
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD3_LEVEL_HIGH_MSB, 29
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD3_LEVEL_HIGH_LSB, 29
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_GPIO_QSPI_SD3_LEVEL_LOW
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD3_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD3_LEVEL_LOW_BITS, 0x10000000
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD3_LEVEL_LOW_MSB, 28
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD3_LEVEL_LOW_LSB, 28
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_GPIO_QSPI_SD2_EDGE_HIGH
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD2_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD2_EDGE_HIGH_BITS, 0x08000000
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD2_EDGE_HIGH_MSB, 27
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD2_EDGE_HIGH_LSB, 27
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_GPIO_QSPI_SD2_EDGE_LOW
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD2_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD2_EDGE_LOW_BITS, 0x04000000
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD2_EDGE_LOW_MSB, 26
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD2_EDGE_LOW_LSB, 26
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_GPIO_QSPI_SD2_LEVEL_HIGH
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD2_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD2_LEVEL_HIGH_BITS, 0x02000000
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD2_LEVEL_HIGH_MSB, 25
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD2_LEVEL_HIGH_LSB, 25
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_GPIO_QSPI_SD2_LEVEL_LOW
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD2_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD2_LEVEL_LOW_BITS, 0x01000000
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD2_LEVEL_LOW_MSB, 24
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD2_LEVEL_LOW_LSB, 24
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_GPIO_QSPI_SD1_EDGE_HIGH
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD1_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD1_EDGE_HIGH_BITS, 0x00800000
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD1_EDGE_HIGH_MSB, 23
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD1_EDGE_HIGH_LSB, 23
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_GPIO_QSPI_SD1_EDGE_LOW
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD1_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD1_EDGE_LOW_BITS, 0x00400000
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD1_EDGE_LOW_MSB, 22
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD1_EDGE_LOW_LSB, 22
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_GPIO_QSPI_SD1_LEVEL_HIGH
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD1_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD1_LEVEL_HIGH_BITS, 0x00200000
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD1_LEVEL_HIGH_MSB, 21
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD1_LEVEL_HIGH_LSB, 21
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_GPIO_QSPI_SD1_LEVEL_LOW
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD1_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD1_LEVEL_LOW_BITS, 0x00100000
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD1_LEVEL_LOW_MSB, 20
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD1_LEVEL_LOW_LSB, 20
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_GPIO_QSPI_SD0_EDGE_HIGH
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD0_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD0_EDGE_HIGH_BITS, 0x00080000
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD0_EDGE_HIGH_MSB, 19
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD0_EDGE_HIGH_LSB, 19
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_GPIO_QSPI_SD0_EDGE_LOW
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD0_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD0_EDGE_LOW_BITS, 0x00040000
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD0_EDGE_LOW_MSB, 18
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD0_EDGE_LOW_LSB, 18
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_GPIO_QSPI_SD0_LEVEL_HIGH
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD0_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD0_LEVEL_HIGH_BITS, 0x00020000
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD0_LEVEL_HIGH_MSB, 17
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD0_LEVEL_HIGH_LSB, 17
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_GPIO_QSPI_SD0_LEVEL_LOW
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD0_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD0_LEVEL_LOW_BITS, 0x00010000
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD0_LEVEL_LOW_MSB, 16
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SD0_LEVEL_LOW_LSB, 16
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_GPIO_QSPI_SS_EDGE_HIGH
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SS_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SS_EDGE_HIGH_BITS, 0x00008000
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SS_EDGE_HIGH_MSB, 15
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SS_EDGE_HIGH_LSB, 15
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_GPIO_QSPI_SS_EDGE_LOW
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SS_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SS_EDGE_LOW_BITS, 0x00004000
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SS_EDGE_LOW_MSB, 14
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SS_EDGE_LOW_LSB, 14
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_GPIO_QSPI_SS_LEVEL_HIGH
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SS_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SS_LEVEL_HIGH_BITS, 0x00002000
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SS_LEVEL_HIGH_MSB, 13
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SS_LEVEL_HIGH_LSB, 13
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_GPIO_QSPI_SS_LEVEL_LOW
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SS_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SS_LEVEL_LOW_BITS, 0x00001000
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SS_LEVEL_LOW_MSB, 12
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SS_LEVEL_LOW_LSB, 12
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_GPIO_QSPI_SCLK_EDGE_HIGH
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SCLK_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SCLK_EDGE_HIGH_BITS, 0x00000800
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SCLK_EDGE_HIGH_MSB, 11
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SCLK_EDGE_HIGH_LSB, 11
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_GPIO_QSPI_SCLK_EDGE_LOW
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SCLK_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SCLK_EDGE_LOW_BITS, 0x00000400
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SCLK_EDGE_LOW_MSB, 10
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SCLK_EDGE_LOW_LSB, 10
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_GPIO_QSPI_SCLK_LEVEL_HIGH
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SCLK_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SCLK_LEVEL_HIGH_BITS, 0x00000200
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SCLK_LEVEL_HIGH_MSB, 9
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SCLK_LEVEL_HIGH_LSB, 9
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_GPIO_QSPI_SCLK_LEVEL_LOW
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SCLK_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SCLK_LEVEL_LOW_BITS, 0x00000100
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SCLK_LEVEL_LOW_MSB, 8
.equ	IO_QSPI_PROC0_INTS_GPIO_QSPI_SCLK_LEVEL_LOW_LSB, 8
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_USBPHY_DM_EDGE_HIGH
.equ	IO_QSPI_PROC0_INTS_USBPHY_DM_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_USBPHY_DM_EDGE_HIGH_BITS, 0x00000080
.equ	IO_QSPI_PROC0_INTS_USBPHY_DM_EDGE_HIGH_MSB, 7
.equ	IO_QSPI_PROC0_INTS_USBPHY_DM_EDGE_HIGH_LSB, 7
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_USBPHY_DM_EDGE_LOW
.equ	IO_QSPI_PROC0_INTS_USBPHY_DM_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_USBPHY_DM_EDGE_LOW_BITS, 0x00000040
.equ	IO_QSPI_PROC0_INTS_USBPHY_DM_EDGE_LOW_MSB, 6
.equ	IO_QSPI_PROC0_INTS_USBPHY_DM_EDGE_LOW_LSB, 6
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_USBPHY_DM_LEVEL_HIGH
.equ	IO_QSPI_PROC0_INTS_USBPHY_DM_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_USBPHY_DM_LEVEL_HIGH_BITS, 0x00000020
.equ	IO_QSPI_PROC0_INTS_USBPHY_DM_LEVEL_HIGH_MSB, 5
.equ	IO_QSPI_PROC0_INTS_USBPHY_DM_LEVEL_HIGH_LSB, 5
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_USBPHY_DM_LEVEL_LOW
.equ	IO_QSPI_PROC0_INTS_USBPHY_DM_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_USBPHY_DM_LEVEL_LOW_BITS, 0x00000010
.equ	IO_QSPI_PROC0_INTS_USBPHY_DM_LEVEL_LOW_MSB, 4
.equ	IO_QSPI_PROC0_INTS_USBPHY_DM_LEVEL_LOW_LSB, 4
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_USBPHY_DP_EDGE_HIGH
.equ	IO_QSPI_PROC0_INTS_USBPHY_DP_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_USBPHY_DP_EDGE_HIGH_BITS, 0x00000008
.equ	IO_QSPI_PROC0_INTS_USBPHY_DP_EDGE_HIGH_MSB, 3
.equ	IO_QSPI_PROC0_INTS_USBPHY_DP_EDGE_HIGH_LSB, 3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_USBPHY_DP_EDGE_LOW
.equ	IO_QSPI_PROC0_INTS_USBPHY_DP_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_USBPHY_DP_EDGE_LOW_BITS, 0x00000004
.equ	IO_QSPI_PROC0_INTS_USBPHY_DP_EDGE_LOW_MSB, 2
.equ	IO_QSPI_PROC0_INTS_USBPHY_DP_EDGE_LOW_LSB, 2
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_USBPHY_DP_LEVEL_HIGH
.equ	IO_QSPI_PROC0_INTS_USBPHY_DP_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_USBPHY_DP_LEVEL_HIGH_BITS, 0x00000002
.equ	IO_QSPI_PROC0_INTS_USBPHY_DP_LEVEL_HIGH_MSB, 1
.equ	IO_QSPI_PROC0_INTS_USBPHY_DP_LEVEL_HIGH_LSB, 1
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC0_INTS_USBPHY_DP_LEVEL_LOW
.equ	IO_QSPI_PROC0_INTS_USBPHY_DP_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC0_INTS_USBPHY_DP_LEVEL_LOW_BITS, 0x00000001
.equ	IO_QSPI_PROC0_INTS_USBPHY_DP_LEVEL_LOW_MSB, 0
.equ	IO_QSPI_PROC0_INTS_USBPHY_DP_LEVEL_LOW_LSB, 0
# =============================================================================
# Register    : IO_QSPI_PROC1_INTE
# Description : Interrupt Enable for proc1
.equ	IO_QSPI_PROC1_INTE_OFFSET, 0x00000228
.equ	IO_QSPI_PROC1_INTE_BITS, 0xffffffff
.equ	IO_QSPI_PROC1_INTE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_GPIO_QSPI_SD3_EDGE_HIGH
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD3_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD3_EDGE_HIGH_BITS, 0x80000000
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD3_EDGE_HIGH_MSB, 31
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD3_EDGE_HIGH_LSB, 31
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_GPIO_QSPI_SD3_EDGE_LOW
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD3_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD3_EDGE_LOW_BITS, 0x40000000
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD3_EDGE_LOW_MSB, 30
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD3_EDGE_LOW_LSB, 30
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_GPIO_QSPI_SD3_LEVEL_HIGH
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD3_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD3_LEVEL_HIGH_BITS, 0x20000000
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD3_LEVEL_HIGH_MSB, 29
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD3_LEVEL_HIGH_LSB, 29
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_GPIO_QSPI_SD3_LEVEL_LOW
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD3_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD3_LEVEL_LOW_BITS, 0x10000000
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD3_LEVEL_LOW_MSB, 28
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD3_LEVEL_LOW_LSB, 28
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_GPIO_QSPI_SD2_EDGE_HIGH
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD2_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD2_EDGE_HIGH_BITS, 0x08000000
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD2_EDGE_HIGH_MSB, 27
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD2_EDGE_HIGH_LSB, 27
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_GPIO_QSPI_SD2_EDGE_LOW
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD2_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD2_EDGE_LOW_BITS, 0x04000000
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD2_EDGE_LOW_MSB, 26
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD2_EDGE_LOW_LSB, 26
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_GPIO_QSPI_SD2_LEVEL_HIGH
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD2_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD2_LEVEL_HIGH_BITS, 0x02000000
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD2_LEVEL_HIGH_MSB, 25
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD2_LEVEL_HIGH_LSB, 25
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_GPIO_QSPI_SD2_LEVEL_LOW
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD2_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD2_LEVEL_LOW_BITS, 0x01000000
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD2_LEVEL_LOW_MSB, 24
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD2_LEVEL_LOW_LSB, 24
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_GPIO_QSPI_SD1_EDGE_HIGH
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD1_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD1_EDGE_HIGH_BITS, 0x00800000
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD1_EDGE_HIGH_MSB, 23
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD1_EDGE_HIGH_LSB, 23
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_GPIO_QSPI_SD1_EDGE_LOW
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD1_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD1_EDGE_LOW_BITS, 0x00400000
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD1_EDGE_LOW_MSB, 22
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD1_EDGE_LOW_LSB, 22
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_GPIO_QSPI_SD1_LEVEL_HIGH
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD1_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD1_LEVEL_HIGH_BITS, 0x00200000
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD1_LEVEL_HIGH_MSB, 21
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD1_LEVEL_HIGH_LSB, 21
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_GPIO_QSPI_SD1_LEVEL_LOW
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD1_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD1_LEVEL_LOW_BITS, 0x00100000
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD1_LEVEL_LOW_MSB, 20
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD1_LEVEL_LOW_LSB, 20
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_GPIO_QSPI_SD0_EDGE_HIGH
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD0_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD0_EDGE_HIGH_BITS, 0x00080000
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD0_EDGE_HIGH_MSB, 19
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD0_EDGE_HIGH_LSB, 19
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_GPIO_QSPI_SD0_EDGE_LOW
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD0_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD0_EDGE_LOW_BITS, 0x00040000
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD0_EDGE_LOW_MSB, 18
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD0_EDGE_LOW_LSB, 18
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_GPIO_QSPI_SD0_LEVEL_HIGH
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD0_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD0_LEVEL_HIGH_BITS, 0x00020000
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD0_LEVEL_HIGH_MSB, 17
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD0_LEVEL_HIGH_LSB, 17
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_GPIO_QSPI_SD0_LEVEL_LOW
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD0_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD0_LEVEL_LOW_BITS, 0x00010000
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD0_LEVEL_LOW_MSB, 16
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SD0_LEVEL_LOW_LSB, 16
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_GPIO_QSPI_SS_EDGE_HIGH
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SS_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SS_EDGE_HIGH_BITS, 0x00008000
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SS_EDGE_HIGH_MSB, 15
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SS_EDGE_HIGH_LSB, 15
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_GPIO_QSPI_SS_EDGE_LOW
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SS_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SS_EDGE_LOW_BITS, 0x00004000
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SS_EDGE_LOW_MSB, 14
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SS_EDGE_LOW_LSB, 14
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_GPIO_QSPI_SS_LEVEL_HIGH
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SS_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SS_LEVEL_HIGH_BITS, 0x00002000
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SS_LEVEL_HIGH_MSB, 13
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SS_LEVEL_HIGH_LSB, 13
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_GPIO_QSPI_SS_LEVEL_LOW
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SS_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SS_LEVEL_LOW_BITS, 0x00001000
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SS_LEVEL_LOW_MSB, 12
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SS_LEVEL_LOW_LSB, 12
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_GPIO_QSPI_SCLK_EDGE_HIGH
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SCLK_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SCLK_EDGE_HIGH_BITS, 0x00000800
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SCLK_EDGE_HIGH_MSB, 11
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SCLK_EDGE_HIGH_LSB, 11
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_GPIO_QSPI_SCLK_EDGE_LOW
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SCLK_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SCLK_EDGE_LOW_BITS, 0x00000400
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SCLK_EDGE_LOW_MSB, 10
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SCLK_EDGE_LOW_LSB, 10
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_GPIO_QSPI_SCLK_LEVEL_HIGH
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SCLK_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SCLK_LEVEL_HIGH_BITS, 0x00000200
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SCLK_LEVEL_HIGH_MSB, 9
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SCLK_LEVEL_HIGH_LSB, 9
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_GPIO_QSPI_SCLK_LEVEL_LOW
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SCLK_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SCLK_LEVEL_LOW_BITS, 0x00000100
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SCLK_LEVEL_LOW_MSB, 8
.equ	IO_QSPI_PROC1_INTE_GPIO_QSPI_SCLK_LEVEL_LOW_LSB, 8
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_USBPHY_DM_EDGE_HIGH
.equ	IO_QSPI_PROC1_INTE_USBPHY_DM_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_USBPHY_DM_EDGE_HIGH_BITS, 0x00000080
.equ	IO_QSPI_PROC1_INTE_USBPHY_DM_EDGE_HIGH_MSB, 7
.equ	IO_QSPI_PROC1_INTE_USBPHY_DM_EDGE_HIGH_LSB, 7
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_USBPHY_DM_EDGE_LOW
.equ	IO_QSPI_PROC1_INTE_USBPHY_DM_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_USBPHY_DM_EDGE_LOW_BITS, 0x00000040
.equ	IO_QSPI_PROC1_INTE_USBPHY_DM_EDGE_LOW_MSB, 6
.equ	IO_QSPI_PROC1_INTE_USBPHY_DM_EDGE_LOW_LSB, 6
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_USBPHY_DM_LEVEL_HIGH
.equ	IO_QSPI_PROC1_INTE_USBPHY_DM_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_USBPHY_DM_LEVEL_HIGH_BITS, 0x00000020
.equ	IO_QSPI_PROC1_INTE_USBPHY_DM_LEVEL_HIGH_MSB, 5
.equ	IO_QSPI_PROC1_INTE_USBPHY_DM_LEVEL_HIGH_LSB, 5
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_USBPHY_DM_LEVEL_LOW
.equ	IO_QSPI_PROC1_INTE_USBPHY_DM_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_USBPHY_DM_LEVEL_LOW_BITS, 0x00000010
.equ	IO_QSPI_PROC1_INTE_USBPHY_DM_LEVEL_LOW_MSB, 4
.equ	IO_QSPI_PROC1_INTE_USBPHY_DM_LEVEL_LOW_LSB, 4
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_USBPHY_DP_EDGE_HIGH
.equ	IO_QSPI_PROC1_INTE_USBPHY_DP_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_USBPHY_DP_EDGE_HIGH_BITS, 0x00000008
.equ	IO_QSPI_PROC1_INTE_USBPHY_DP_EDGE_HIGH_MSB, 3
.equ	IO_QSPI_PROC1_INTE_USBPHY_DP_EDGE_HIGH_LSB, 3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_USBPHY_DP_EDGE_LOW
.equ	IO_QSPI_PROC1_INTE_USBPHY_DP_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_USBPHY_DP_EDGE_LOW_BITS, 0x00000004
.equ	IO_QSPI_PROC1_INTE_USBPHY_DP_EDGE_LOW_MSB, 2
.equ	IO_QSPI_PROC1_INTE_USBPHY_DP_EDGE_LOW_LSB, 2
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_USBPHY_DP_LEVEL_HIGH
.equ	IO_QSPI_PROC1_INTE_USBPHY_DP_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_USBPHY_DP_LEVEL_HIGH_BITS, 0x00000002
.equ	IO_QSPI_PROC1_INTE_USBPHY_DP_LEVEL_HIGH_MSB, 1
.equ	IO_QSPI_PROC1_INTE_USBPHY_DP_LEVEL_HIGH_LSB, 1
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTE_USBPHY_DP_LEVEL_LOW
.equ	IO_QSPI_PROC1_INTE_USBPHY_DP_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTE_USBPHY_DP_LEVEL_LOW_BITS, 0x00000001
.equ	IO_QSPI_PROC1_INTE_USBPHY_DP_LEVEL_LOW_MSB, 0
.equ	IO_QSPI_PROC1_INTE_USBPHY_DP_LEVEL_LOW_LSB, 0
# =============================================================================
# Register    : IO_QSPI_PROC1_INTF
# Description : Interrupt Force for proc1
.equ	IO_QSPI_PROC1_INTF_OFFSET, 0x0000022c
.equ	IO_QSPI_PROC1_INTF_BITS, 0xffffffff
.equ	IO_QSPI_PROC1_INTF_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_GPIO_QSPI_SD3_EDGE_HIGH
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD3_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD3_EDGE_HIGH_BITS, 0x80000000
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD3_EDGE_HIGH_MSB, 31
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD3_EDGE_HIGH_LSB, 31
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_GPIO_QSPI_SD3_EDGE_LOW
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD3_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD3_EDGE_LOW_BITS, 0x40000000
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD3_EDGE_LOW_MSB, 30
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD3_EDGE_LOW_LSB, 30
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_GPIO_QSPI_SD3_LEVEL_HIGH
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD3_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD3_LEVEL_HIGH_BITS, 0x20000000
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD3_LEVEL_HIGH_MSB, 29
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD3_LEVEL_HIGH_LSB, 29
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_GPIO_QSPI_SD3_LEVEL_LOW
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD3_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD3_LEVEL_LOW_BITS, 0x10000000
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD3_LEVEL_LOW_MSB, 28
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD3_LEVEL_LOW_LSB, 28
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_GPIO_QSPI_SD2_EDGE_HIGH
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD2_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD2_EDGE_HIGH_BITS, 0x08000000
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD2_EDGE_HIGH_MSB, 27
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD2_EDGE_HIGH_LSB, 27
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_GPIO_QSPI_SD2_EDGE_LOW
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD2_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD2_EDGE_LOW_BITS, 0x04000000
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD2_EDGE_LOW_MSB, 26
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD2_EDGE_LOW_LSB, 26
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_GPIO_QSPI_SD2_LEVEL_HIGH
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD2_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD2_LEVEL_HIGH_BITS, 0x02000000
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD2_LEVEL_HIGH_MSB, 25
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD2_LEVEL_HIGH_LSB, 25
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_GPIO_QSPI_SD2_LEVEL_LOW
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD2_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD2_LEVEL_LOW_BITS, 0x01000000
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD2_LEVEL_LOW_MSB, 24
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD2_LEVEL_LOW_LSB, 24
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_GPIO_QSPI_SD1_EDGE_HIGH
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD1_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD1_EDGE_HIGH_BITS, 0x00800000
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD1_EDGE_HIGH_MSB, 23
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD1_EDGE_HIGH_LSB, 23
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_GPIO_QSPI_SD1_EDGE_LOW
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD1_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD1_EDGE_LOW_BITS, 0x00400000
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD1_EDGE_LOW_MSB, 22
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD1_EDGE_LOW_LSB, 22
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_GPIO_QSPI_SD1_LEVEL_HIGH
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD1_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD1_LEVEL_HIGH_BITS, 0x00200000
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD1_LEVEL_HIGH_MSB, 21
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD1_LEVEL_HIGH_LSB, 21
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_GPIO_QSPI_SD1_LEVEL_LOW
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD1_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD1_LEVEL_LOW_BITS, 0x00100000
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD1_LEVEL_LOW_MSB, 20
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD1_LEVEL_LOW_LSB, 20
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_GPIO_QSPI_SD0_EDGE_HIGH
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD0_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD0_EDGE_HIGH_BITS, 0x00080000
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD0_EDGE_HIGH_MSB, 19
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD0_EDGE_HIGH_LSB, 19
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_GPIO_QSPI_SD0_EDGE_LOW
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD0_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD0_EDGE_LOW_BITS, 0x00040000
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD0_EDGE_LOW_MSB, 18
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD0_EDGE_LOW_LSB, 18
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_GPIO_QSPI_SD0_LEVEL_HIGH
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD0_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD0_LEVEL_HIGH_BITS, 0x00020000
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD0_LEVEL_HIGH_MSB, 17
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD0_LEVEL_HIGH_LSB, 17
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_GPIO_QSPI_SD0_LEVEL_LOW
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD0_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD0_LEVEL_LOW_BITS, 0x00010000
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD0_LEVEL_LOW_MSB, 16
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SD0_LEVEL_LOW_LSB, 16
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_GPIO_QSPI_SS_EDGE_HIGH
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SS_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SS_EDGE_HIGH_BITS, 0x00008000
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SS_EDGE_HIGH_MSB, 15
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SS_EDGE_HIGH_LSB, 15
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_GPIO_QSPI_SS_EDGE_LOW
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SS_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SS_EDGE_LOW_BITS, 0x00004000
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SS_EDGE_LOW_MSB, 14
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SS_EDGE_LOW_LSB, 14
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_GPIO_QSPI_SS_LEVEL_HIGH
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SS_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SS_LEVEL_HIGH_BITS, 0x00002000
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SS_LEVEL_HIGH_MSB, 13
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SS_LEVEL_HIGH_LSB, 13
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_GPIO_QSPI_SS_LEVEL_LOW
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SS_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SS_LEVEL_LOW_BITS, 0x00001000
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SS_LEVEL_LOW_MSB, 12
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SS_LEVEL_LOW_LSB, 12
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_GPIO_QSPI_SCLK_EDGE_HIGH
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SCLK_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SCLK_EDGE_HIGH_BITS, 0x00000800
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SCLK_EDGE_HIGH_MSB, 11
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SCLK_EDGE_HIGH_LSB, 11
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_GPIO_QSPI_SCLK_EDGE_LOW
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SCLK_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SCLK_EDGE_LOW_BITS, 0x00000400
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SCLK_EDGE_LOW_MSB, 10
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SCLK_EDGE_LOW_LSB, 10
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_GPIO_QSPI_SCLK_LEVEL_HIGH
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SCLK_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SCLK_LEVEL_HIGH_BITS, 0x00000200
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SCLK_LEVEL_HIGH_MSB, 9
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SCLK_LEVEL_HIGH_LSB, 9
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_GPIO_QSPI_SCLK_LEVEL_LOW
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SCLK_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SCLK_LEVEL_LOW_BITS, 0x00000100
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SCLK_LEVEL_LOW_MSB, 8
.equ	IO_QSPI_PROC1_INTF_GPIO_QSPI_SCLK_LEVEL_LOW_LSB, 8
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_USBPHY_DM_EDGE_HIGH
.equ	IO_QSPI_PROC1_INTF_USBPHY_DM_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_USBPHY_DM_EDGE_HIGH_BITS, 0x00000080
.equ	IO_QSPI_PROC1_INTF_USBPHY_DM_EDGE_HIGH_MSB, 7
.equ	IO_QSPI_PROC1_INTF_USBPHY_DM_EDGE_HIGH_LSB, 7
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_USBPHY_DM_EDGE_LOW
.equ	IO_QSPI_PROC1_INTF_USBPHY_DM_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_USBPHY_DM_EDGE_LOW_BITS, 0x00000040
.equ	IO_QSPI_PROC1_INTF_USBPHY_DM_EDGE_LOW_MSB, 6
.equ	IO_QSPI_PROC1_INTF_USBPHY_DM_EDGE_LOW_LSB, 6
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_USBPHY_DM_LEVEL_HIGH
.equ	IO_QSPI_PROC1_INTF_USBPHY_DM_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_USBPHY_DM_LEVEL_HIGH_BITS, 0x00000020
.equ	IO_QSPI_PROC1_INTF_USBPHY_DM_LEVEL_HIGH_MSB, 5
.equ	IO_QSPI_PROC1_INTF_USBPHY_DM_LEVEL_HIGH_LSB, 5
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_USBPHY_DM_LEVEL_LOW
.equ	IO_QSPI_PROC1_INTF_USBPHY_DM_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_USBPHY_DM_LEVEL_LOW_BITS, 0x00000010
.equ	IO_QSPI_PROC1_INTF_USBPHY_DM_LEVEL_LOW_MSB, 4
.equ	IO_QSPI_PROC1_INTF_USBPHY_DM_LEVEL_LOW_LSB, 4
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_USBPHY_DP_EDGE_HIGH
.equ	IO_QSPI_PROC1_INTF_USBPHY_DP_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_USBPHY_DP_EDGE_HIGH_BITS, 0x00000008
.equ	IO_QSPI_PROC1_INTF_USBPHY_DP_EDGE_HIGH_MSB, 3
.equ	IO_QSPI_PROC1_INTF_USBPHY_DP_EDGE_HIGH_LSB, 3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_USBPHY_DP_EDGE_LOW
.equ	IO_QSPI_PROC1_INTF_USBPHY_DP_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_USBPHY_DP_EDGE_LOW_BITS, 0x00000004
.equ	IO_QSPI_PROC1_INTF_USBPHY_DP_EDGE_LOW_MSB, 2
.equ	IO_QSPI_PROC1_INTF_USBPHY_DP_EDGE_LOW_LSB, 2
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_USBPHY_DP_LEVEL_HIGH
.equ	IO_QSPI_PROC1_INTF_USBPHY_DP_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_USBPHY_DP_LEVEL_HIGH_BITS, 0x00000002
.equ	IO_QSPI_PROC1_INTF_USBPHY_DP_LEVEL_HIGH_MSB, 1
.equ	IO_QSPI_PROC1_INTF_USBPHY_DP_LEVEL_HIGH_LSB, 1
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTF_USBPHY_DP_LEVEL_LOW
.equ	IO_QSPI_PROC1_INTF_USBPHY_DP_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTF_USBPHY_DP_LEVEL_LOW_BITS, 0x00000001
.equ	IO_QSPI_PROC1_INTF_USBPHY_DP_LEVEL_LOW_MSB, 0
.equ	IO_QSPI_PROC1_INTF_USBPHY_DP_LEVEL_LOW_LSB, 0
# =============================================================================
# Register    : IO_QSPI_PROC1_INTS
# Description : Interrupt status after masking & forcing for proc1
.equ	IO_QSPI_PROC1_INTS_OFFSET, 0x00000230
.equ	IO_QSPI_PROC1_INTS_BITS, 0xffffffff
.equ	IO_QSPI_PROC1_INTS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_GPIO_QSPI_SD3_EDGE_HIGH
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD3_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD3_EDGE_HIGH_BITS, 0x80000000
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD3_EDGE_HIGH_MSB, 31
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD3_EDGE_HIGH_LSB, 31
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_GPIO_QSPI_SD3_EDGE_LOW
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD3_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD3_EDGE_LOW_BITS, 0x40000000
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD3_EDGE_LOW_MSB, 30
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD3_EDGE_LOW_LSB, 30
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_GPIO_QSPI_SD3_LEVEL_HIGH
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD3_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD3_LEVEL_HIGH_BITS, 0x20000000
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD3_LEVEL_HIGH_MSB, 29
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD3_LEVEL_HIGH_LSB, 29
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_GPIO_QSPI_SD3_LEVEL_LOW
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD3_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD3_LEVEL_LOW_BITS, 0x10000000
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD3_LEVEL_LOW_MSB, 28
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD3_LEVEL_LOW_LSB, 28
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_GPIO_QSPI_SD2_EDGE_HIGH
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD2_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD2_EDGE_HIGH_BITS, 0x08000000
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD2_EDGE_HIGH_MSB, 27
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD2_EDGE_HIGH_LSB, 27
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_GPIO_QSPI_SD2_EDGE_LOW
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD2_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD2_EDGE_LOW_BITS, 0x04000000
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD2_EDGE_LOW_MSB, 26
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD2_EDGE_LOW_LSB, 26
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_GPIO_QSPI_SD2_LEVEL_HIGH
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD2_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD2_LEVEL_HIGH_BITS, 0x02000000
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD2_LEVEL_HIGH_MSB, 25
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD2_LEVEL_HIGH_LSB, 25
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_GPIO_QSPI_SD2_LEVEL_LOW
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD2_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD2_LEVEL_LOW_BITS, 0x01000000
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD2_LEVEL_LOW_MSB, 24
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD2_LEVEL_LOW_LSB, 24
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_GPIO_QSPI_SD1_EDGE_HIGH
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD1_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD1_EDGE_HIGH_BITS, 0x00800000
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD1_EDGE_HIGH_MSB, 23
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD1_EDGE_HIGH_LSB, 23
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_GPIO_QSPI_SD1_EDGE_LOW
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD1_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD1_EDGE_LOW_BITS, 0x00400000
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD1_EDGE_LOW_MSB, 22
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD1_EDGE_LOW_LSB, 22
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_GPIO_QSPI_SD1_LEVEL_HIGH
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD1_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD1_LEVEL_HIGH_BITS, 0x00200000
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD1_LEVEL_HIGH_MSB, 21
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD1_LEVEL_HIGH_LSB, 21
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_GPIO_QSPI_SD1_LEVEL_LOW
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD1_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD1_LEVEL_LOW_BITS, 0x00100000
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD1_LEVEL_LOW_MSB, 20
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD1_LEVEL_LOW_LSB, 20
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_GPIO_QSPI_SD0_EDGE_HIGH
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD0_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD0_EDGE_HIGH_BITS, 0x00080000
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD0_EDGE_HIGH_MSB, 19
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD0_EDGE_HIGH_LSB, 19
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_GPIO_QSPI_SD0_EDGE_LOW
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD0_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD0_EDGE_LOW_BITS, 0x00040000
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD0_EDGE_LOW_MSB, 18
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD0_EDGE_LOW_LSB, 18
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_GPIO_QSPI_SD0_LEVEL_HIGH
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD0_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD0_LEVEL_HIGH_BITS, 0x00020000
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD0_LEVEL_HIGH_MSB, 17
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD0_LEVEL_HIGH_LSB, 17
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_GPIO_QSPI_SD0_LEVEL_LOW
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD0_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD0_LEVEL_LOW_BITS, 0x00010000
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD0_LEVEL_LOW_MSB, 16
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SD0_LEVEL_LOW_LSB, 16
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_GPIO_QSPI_SS_EDGE_HIGH
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SS_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SS_EDGE_HIGH_BITS, 0x00008000
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SS_EDGE_HIGH_MSB, 15
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SS_EDGE_HIGH_LSB, 15
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_GPIO_QSPI_SS_EDGE_LOW
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SS_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SS_EDGE_LOW_BITS, 0x00004000
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SS_EDGE_LOW_MSB, 14
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SS_EDGE_LOW_LSB, 14
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_GPIO_QSPI_SS_LEVEL_HIGH
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SS_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SS_LEVEL_HIGH_BITS, 0x00002000
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SS_LEVEL_HIGH_MSB, 13
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SS_LEVEL_HIGH_LSB, 13
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_GPIO_QSPI_SS_LEVEL_LOW
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SS_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SS_LEVEL_LOW_BITS, 0x00001000
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SS_LEVEL_LOW_MSB, 12
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SS_LEVEL_LOW_LSB, 12
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_GPIO_QSPI_SCLK_EDGE_HIGH
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SCLK_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SCLK_EDGE_HIGH_BITS, 0x00000800
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SCLK_EDGE_HIGH_MSB, 11
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SCLK_EDGE_HIGH_LSB, 11
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_GPIO_QSPI_SCLK_EDGE_LOW
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SCLK_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SCLK_EDGE_LOW_BITS, 0x00000400
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SCLK_EDGE_LOW_MSB, 10
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SCLK_EDGE_LOW_LSB, 10
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_GPIO_QSPI_SCLK_LEVEL_HIGH
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SCLK_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SCLK_LEVEL_HIGH_BITS, 0x00000200
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SCLK_LEVEL_HIGH_MSB, 9
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SCLK_LEVEL_HIGH_LSB, 9
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_GPIO_QSPI_SCLK_LEVEL_LOW
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SCLK_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SCLK_LEVEL_LOW_BITS, 0x00000100
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SCLK_LEVEL_LOW_MSB, 8
.equ	IO_QSPI_PROC1_INTS_GPIO_QSPI_SCLK_LEVEL_LOW_LSB, 8
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_USBPHY_DM_EDGE_HIGH
.equ	IO_QSPI_PROC1_INTS_USBPHY_DM_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_USBPHY_DM_EDGE_HIGH_BITS, 0x00000080
.equ	IO_QSPI_PROC1_INTS_USBPHY_DM_EDGE_HIGH_MSB, 7
.equ	IO_QSPI_PROC1_INTS_USBPHY_DM_EDGE_HIGH_LSB, 7
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_USBPHY_DM_EDGE_LOW
.equ	IO_QSPI_PROC1_INTS_USBPHY_DM_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_USBPHY_DM_EDGE_LOW_BITS, 0x00000040
.equ	IO_QSPI_PROC1_INTS_USBPHY_DM_EDGE_LOW_MSB, 6
.equ	IO_QSPI_PROC1_INTS_USBPHY_DM_EDGE_LOW_LSB, 6
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_USBPHY_DM_LEVEL_HIGH
.equ	IO_QSPI_PROC1_INTS_USBPHY_DM_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_USBPHY_DM_LEVEL_HIGH_BITS, 0x00000020
.equ	IO_QSPI_PROC1_INTS_USBPHY_DM_LEVEL_HIGH_MSB, 5
.equ	IO_QSPI_PROC1_INTS_USBPHY_DM_LEVEL_HIGH_LSB, 5
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_USBPHY_DM_LEVEL_LOW
.equ	IO_QSPI_PROC1_INTS_USBPHY_DM_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_USBPHY_DM_LEVEL_LOW_BITS, 0x00000010
.equ	IO_QSPI_PROC1_INTS_USBPHY_DM_LEVEL_LOW_MSB, 4
.equ	IO_QSPI_PROC1_INTS_USBPHY_DM_LEVEL_LOW_LSB, 4
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_USBPHY_DP_EDGE_HIGH
.equ	IO_QSPI_PROC1_INTS_USBPHY_DP_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_USBPHY_DP_EDGE_HIGH_BITS, 0x00000008
.equ	IO_QSPI_PROC1_INTS_USBPHY_DP_EDGE_HIGH_MSB, 3
.equ	IO_QSPI_PROC1_INTS_USBPHY_DP_EDGE_HIGH_LSB, 3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_USBPHY_DP_EDGE_LOW
.equ	IO_QSPI_PROC1_INTS_USBPHY_DP_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_USBPHY_DP_EDGE_LOW_BITS, 0x00000004
.equ	IO_QSPI_PROC1_INTS_USBPHY_DP_EDGE_LOW_MSB, 2
.equ	IO_QSPI_PROC1_INTS_USBPHY_DP_EDGE_LOW_LSB, 2
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_USBPHY_DP_LEVEL_HIGH
.equ	IO_QSPI_PROC1_INTS_USBPHY_DP_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_USBPHY_DP_LEVEL_HIGH_BITS, 0x00000002
.equ	IO_QSPI_PROC1_INTS_USBPHY_DP_LEVEL_HIGH_MSB, 1
.equ	IO_QSPI_PROC1_INTS_USBPHY_DP_LEVEL_HIGH_LSB, 1
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_PROC1_INTS_USBPHY_DP_LEVEL_LOW
.equ	IO_QSPI_PROC1_INTS_USBPHY_DP_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_PROC1_INTS_USBPHY_DP_LEVEL_LOW_BITS, 0x00000001
.equ	IO_QSPI_PROC1_INTS_USBPHY_DP_LEVEL_LOW_MSB, 0
.equ	IO_QSPI_PROC1_INTS_USBPHY_DP_LEVEL_LOW_LSB, 0
# =============================================================================
# Register    : IO_QSPI_DORMANT_WAKE_INTE
# Description : Interrupt Enable for dormant_wake
.equ	IO_QSPI_DORMANT_WAKE_INTE_OFFSET, 0x00000234
.equ	IO_QSPI_DORMANT_WAKE_INTE_BITS, 0xffffffff
.equ	IO_QSPI_DORMANT_WAKE_INTE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD3_EDGE_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD3_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD3_EDGE_HIGH_BITS, 0x80000000
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD3_EDGE_HIGH_MSB, 31
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD3_EDGE_HIGH_LSB, 31
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD3_EDGE_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD3_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD3_EDGE_LOW_BITS, 0x40000000
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD3_EDGE_LOW_MSB, 30
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD3_EDGE_LOW_LSB, 30
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD3_LEVEL_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD3_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD3_LEVEL_HIGH_BITS, 0x20000000
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD3_LEVEL_HIGH_MSB, 29
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD3_LEVEL_HIGH_LSB, 29
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD3_LEVEL_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD3_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD3_LEVEL_LOW_BITS, 0x10000000
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD3_LEVEL_LOW_MSB, 28
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD3_LEVEL_LOW_LSB, 28
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD2_EDGE_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD2_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD2_EDGE_HIGH_BITS, 0x08000000
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD2_EDGE_HIGH_MSB, 27
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD2_EDGE_HIGH_LSB, 27
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD2_EDGE_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD2_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD2_EDGE_LOW_BITS, 0x04000000
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD2_EDGE_LOW_MSB, 26
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD2_EDGE_LOW_LSB, 26
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD2_LEVEL_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD2_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD2_LEVEL_HIGH_BITS, 0x02000000
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD2_LEVEL_HIGH_MSB, 25
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD2_LEVEL_HIGH_LSB, 25
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD2_LEVEL_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD2_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD2_LEVEL_LOW_BITS, 0x01000000
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD2_LEVEL_LOW_MSB, 24
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD2_LEVEL_LOW_LSB, 24
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD1_EDGE_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD1_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD1_EDGE_HIGH_BITS, 0x00800000
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD1_EDGE_HIGH_MSB, 23
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD1_EDGE_HIGH_LSB, 23
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD1_EDGE_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD1_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD1_EDGE_LOW_BITS, 0x00400000
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD1_EDGE_LOW_MSB, 22
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD1_EDGE_LOW_LSB, 22
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD1_LEVEL_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD1_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD1_LEVEL_HIGH_BITS, 0x00200000
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD1_LEVEL_HIGH_MSB, 21
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD1_LEVEL_HIGH_LSB, 21
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD1_LEVEL_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD1_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD1_LEVEL_LOW_BITS, 0x00100000
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD1_LEVEL_LOW_MSB, 20
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD1_LEVEL_LOW_LSB, 20
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD0_EDGE_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD0_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD0_EDGE_HIGH_BITS, 0x00080000
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD0_EDGE_HIGH_MSB, 19
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD0_EDGE_HIGH_LSB, 19
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD0_EDGE_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD0_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD0_EDGE_LOW_BITS, 0x00040000
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD0_EDGE_LOW_MSB, 18
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD0_EDGE_LOW_LSB, 18
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD0_LEVEL_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD0_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD0_LEVEL_HIGH_BITS, 0x00020000
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD0_LEVEL_HIGH_MSB, 17
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD0_LEVEL_HIGH_LSB, 17
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD0_LEVEL_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD0_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD0_LEVEL_LOW_BITS, 0x00010000
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD0_LEVEL_LOW_MSB, 16
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SD0_LEVEL_LOW_LSB, 16
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SS_EDGE_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SS_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SS_EDGE_HIGH_BITS, 0x00008000
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SS_EDGE_HIGH_MSB, 15
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SS_EDGE_HIGH_LSB, 15
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SS_EDGE_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SS_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SS_EDGE_LOW_BITS, 0x00004000
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SS_EDGE_LOW_MSB, 14
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SS_EDGE_LOW_LSB, 14
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SS_LEVEL_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SS_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SS_LEVEL_HIGH_BITS, 0x00002000
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SS_LEVEL_HIGH_MSB, 13
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SS_LEVEL_HIGH_LSB, 13
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SS_LEVEL_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SS_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SS_LEVEL_LOW_BITS, 0x00001000
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SS_LEVEL_LOW_MSB, 12
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SS_LEVEL_LOW_LSB, 12
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SCLK_EDGE_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SCLK_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SCLK_EDGE_HIGH_BITS, 0x00000800
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SCLK_EDGE_HIGH_MSB, 11
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SCLK_EDGE_HIGH_LSB, 11
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SCLK_EDGE_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SCLK_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SCLK_EDGE_LOW_BITS, 0x00000400
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SCLK_EDGE_LOW_MSB, 10
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SCLK_EDGE_LOW_LSB, 10
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SCLK_LEVEL_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SCLK_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SCLK_LEVEL_HIGH_BITS, 0x00000200
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SCLK_LEVEL_HIGH_MSB, 9
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SCLK_LEVEL_HIGH_LSB, 9
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SCLK_LEVEL_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SCLK_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SCLK_LEVEL_LOW_BITS, 0x00000100
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SCLK_LEVEL_LOW_MSB, 8
.equ	IO_QSPI_DORMANT_WAKE_INTE_GPIO_QSPI_SCLK_LEVEL_LOW_LSB, 8
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DM_EDGE_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DM_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DM_EDGE_HIGH_BITS, 0x00000080
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DM_EDGE_HIGH_MSB, 7
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DM_EDGE_HIGH_LSB, 7
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DM_EDGE_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DM_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DM_EDGE_LOW_BITS, 0x00000040
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DM_EDGE_LOW_MSB, 6
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DM_EDGE_LOW_LSB, 6
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DM_LEVEL_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DM_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DM_LEVEL_HIGH_BITS, 0x00000020
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DM_LEVEL_HIGH_MSB, 5
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DM_LEVEL_HIGH_LSB, 5
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DM_LEVEL_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DM_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DM_LEVEL_LOW_BITS, 0x00000010
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DM_LEVEL_LOW_MSB, 4
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DM_LEVEL_LOW_LSB, 4
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DP_EDGE_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DP_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DP_EDGE_HIGH_BITS, 0x00000008
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DP_EDGE_HIGH_MSB, 3
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DP_EDGE_HIGH_LSB, 3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DP_EDGE_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DP_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DP_EDGE_LOW_BITS, 0x00000004
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DP_EDGE_LOW_MSB, 2
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DP_EDGE_LOW_LSB, 2
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DP_LEVEL_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DP_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DP_LEVEL_HIGH_BITS, 0x00000002
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DP_LEVEL_HIGH_MSB, 1
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DP_LEVEL_HIGH_LSB, 1
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DP_LEVEL_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DP_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DP_LEVEL_LOW_BITS, 0x00000001
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DP_LEVEL_LOW_MSB, 0
.equ	IO_QSPI_DORMANT_WAKE_INTE_USBPHY_DP_LEVEL_LOW_LSB, 0
# =============================================================================
# Register    : IO_QSPI_DORMANT_WAKE_INTF
# Description : Interrupt Force for dormant_wake
.equ	IO_QSPI_DORMANT_WAKE_INTF_OFFSET, 0x00000238
.equ	IO_QSPI_DORMANT_WAKE_INTF_BITS, 0xffffffff
.equ	IO_QSPI_DORMANT_WAKE_INTF_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD3_EDGE_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD3_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD3_EDGE_HIGH_BITS, 0x80000000
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD3_EDGE_HIGH_MSB, 31
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD3_EDGE_HIGH_LSB, 31
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD3_EDGE_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD3_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD3_EDGE_LOW_BITS, 0x40000000
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD3_EDGE_LOW_MSB, 30
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD3_EDGE_LOW_LSB, 30
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD3_LEVEL_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD3_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD3_LEVEL_HIGH_BITS, 0x20000000
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD3_LEVEL_HIGH_MSB, 29
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD3_LEVEL_HIGH_LSB, 29
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD3_LEVEL_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD3_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD3_LEVEL_LOW_BITS, 0x10000000
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD3_LEVEL_LOW_MSB, 28
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD3_LEVEL_LOW_LSB, 28
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD2_EDGE_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD2_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD2_EDGE_HIGH_BITS, 0x08000000
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD2_EDGE_HIGH_MSB, 27
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD2_EDGE_HIGH_LSB, 27
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD2_EDGE_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD2_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD2_EDGE_LOW_BITS, 0x04000000
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD2_EDGE_LOW_MSB, 26
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD2_EDGE_LOW_LSB, 26
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD2_LEVEL_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD2_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD2_LEVEL_HIGH_BITS, 0x02000000
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD2_LEVEL_HIGH_MSB, 25
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD2_LEVEL_HIGH_LSB, 25
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD2_LEVEL_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD2_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD2_LEVEL_LOW_BITS, 0x01000000
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD2_LEVEL_LOW_MSB, 24
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD2_LEVEL_LOW_LSB, 24
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD1_EDGE_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD1_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD1_EDGE_HIGH_BITS, 0x00800000
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD1_EDGE_HIGH_MSB, 23
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD1_EDGE_HIGH_LSB, 23
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD1_EDGE_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD1_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD1_EDGE_LOW_BITS, 0x00400000
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD1_EDGE_LOW_MSB, 22
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD1_EDGE_LOW_LSB, 22
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD1_LEVEL_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD1_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD1_LEVEL_HIGH_BITS, 0x00200000
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD1_LEVEL_HIGH_MSB, 21
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD1_LEVEL_HIGH_LSB, 21
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD1_LEVEL_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD1_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD1_LEVEL_LOW_BITS, 0x00100000
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD1_LEVEL_LOW_MSB, 20
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD1_LEVEL_LOW_LSB, 20
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD0_EDGE_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD0_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD0_EDGE_HIGH_BITS, 0x00080000
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD0_EDGE_HIGH_MSB, 19
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD0_EDGE_HIGH_LSB, 19
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD0_EDGE_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD0_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD0_EDGE_LOW_BITS, 0x00040000
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD0_EDGE_LOW_MSB, 18
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD0_EDGE_LOW_LSB, 18
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD0_LEVEL_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD0_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD0_LEVEL_HIGH_BITS, 0x00020000
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD0_LEVEL_HIGH_MSB, 17
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD0_LEVEL_HIGH_LSB, 17
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD0_LEVEL_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD0_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD0_LEVEL_LOW_BITS, 0x00010000
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD0_LEVEL_LOW_MSB, 16
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SD0_LEVEL_LOW_LSB, 16
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SS_EDGE_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SS_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SS_EDGE_HIGH_BITS, 0x00008000
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SS_EDGE_HIGH_MSB, 15
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SS_EDGE_HIGH_LSB, 15
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SS_EDGE_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SS_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SS_EDGE_LOW_BITS, 0x00004000
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SS_EDGE_LOW_MSB, 14
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SS_EDGE_LOW_LSB, 14
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SS_LEVEL_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SS_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SS_LEVEL_HIGH_BITS, 0x00002000
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SS_LEVEL_HIGH_MSB, 13
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SS_LEVEL_HIGH_LSB, 13
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SS_LEVEL_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SS_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SS_LEVEL_LOW_BITS, 0x00001000
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SS_LEVEL_LOW_MSB, 12
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SS_LEVEL_LOW_LSB, 12
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SCLK_EDGE_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SCLK_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SCLK_EDGE_HIGH_BITS, 0x00000800
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SCLK_EDGE_HIGH_MSB, 11
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SCLK_EDGE_HIGH_LSB, 11
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SCLK_EDGE_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SCLK_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SCLK_EDGE_LOW_BITS, 0x00000400
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SCLK_EDGE_LOW_MSB, 10
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SCLK_EDGE_LOW_LSB, 10
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SCLK_LEVEL_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SCLK_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SCLK_LEVEL_HIGH_BITS, 0x00000200
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SCLK_LEVEL_HIGH_MSB, 9
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SCLK_LEVEL_HIGH_LSB, 9
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SCLK_LEVEL_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SCLK_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SCLK_LEVEL_LOW_BITS, 0x00000100
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SCLK_LEVEL_LOW_MSB, 8
.equ	IO_QSPI_DORMANT_WAKE_INTF_GPIO_QSPI_SCLK_LEVEL_LOW_LSB, 8
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DM_EDGE_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DM_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DM_EDGE_HIGH_BITS, 0x00000080
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DM_EDGE_HIGH_MSB, 7
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DM_EDGE_HIGH_LSB, 7
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DM_EDGE_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DM_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DM_EDGE_LOW_BITS, 0x00000040
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DM_EDGE_LOW_MSB, 6
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DM_EDGE_LOW_LSB, 6
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DM_LEVEL_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DM_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DM_LEVEL_HIGH_BITS, 0x00000020
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DM_LEVEL_HIGH_MSB, 5
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DM_LEVEL_HIGH_LSB, 5
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DM_LEVEL_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DM_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DM_LEVEL_LOW_BITS, 0x00000010
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DM_LEVEL_LOW_MSB, 4
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DM_LEVEL_LOW_LSB, 4
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DP_EDGE_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DP_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DP_EDGE_HIGH_BITS, 0x00000008
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DP_EDGE_HIGH_MSB, 3
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DP_EDGE_HIGH_LSB, 3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DP_EDGE_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DP_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DP_EDGE_LOW_BITS, 0x00000004
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DP_EDGE_LOW_MSB, 2
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DP_EDGE_LOW_LSB, 2
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DP_LEVEL_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DP_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DP_LEVEL_HIGH_BITS, 0x00000002
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DP_LEVEL_HIGH_MSB, 1
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DP_LEVEL_HIGH_LSB, 1
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DP_LEVEL_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DP_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DP_LEVEL_LOW_BITS, 0x00000001
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DP_LEVEL_LOW_MSB, 0
.equ	IO_QSPI_DORMANT_WAKE_INTF_USBPHY_DP_LEVEL_LOW_LSB, 0
# =============================================================================
# Register    : IO_QSPI_DORMANT_WAKE_INTS
# Description : Interrupt status after masking & forcing for dormant_wake
.equ	IO_QSPI_DORMANT_WAKE_INTS_OFFSET, 0x0000023c
.equ	IO_QSPI_DORMANT_WAKE_INTS_BITS, 0xffffffff
.equ	IO_QSPI_DORMANT_WAKE_INTS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD3_EDGE_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD3_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD3_EDGE_HIGH_BITS, 0x80000000
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD3_EDGE_HIGH_MSB, 31
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD3_EDGE_HIGH_LSB, 31
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD3_EDGE_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD3_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD3_EDGE_LOW_BITS, 0x40000000
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD3_EDGE_LOW_MSB, 30
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD3_EDGE_LOW_LSB, 30
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD3_LEVEL_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD3_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD3_LEVEL_HIGH_BITS, 0x20000000
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD3_LEVEL_HIGH_MSB, 29
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD3_LEVEL_HIGH_LSB, 29
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD3_LEVEL_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD3_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD3_LEVEL_LOW_BITS, 0x10000000
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD3_LEVEL_LOW_MSB, 28
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD3_LEVEL_LOW_LSB, 28
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD2_EDGE_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD2_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD2_EDGE_HIGH_BITS, 0x08000000
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD2_EDGE_HIGH_MSB, 27
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD2_EDGE_HIGH_LSB, 27
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD2_EDGE_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD2_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD2_EDGE_LOW_BITS, 0x04000000
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD2_EDGE_LOW_MSB, 26
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD2_EDGE_LOW_LSB, 26
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD2_LEVEL_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD2_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD2_LEVEL_HIGH_BITS, 0x02000000
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD2_LEVEL_HIGH_MSB, 25
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD2_LEVEL_HIGH_LSB, 25
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD2_LEVEL_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD2_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD2_LEVEL_LOW_BITS, 0x01000000
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD2_LEVEL_LOW_MSB, 24
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD2_LEVEL_LOW_LSB, 24
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD1_EDGE_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD1_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD1_EDGE_HIGH_BITS, 0x00800000
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD1_EDGE_HIGH_MSB, 23
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD1_EDGE_HIGH_LSB, 23
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD1_EDGE_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD1_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD1_EDGE_LOW_BITS, 0x00400000
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD1_EDGE_LOW_MSB, 22
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD1_EDGE_LOW_LSB, 22
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD1_LEVEL_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD1_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD1_LEVEL_HIGH_BITS, 0x00200000
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD1_LEVEL_HIGH_MSB, 21
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD1_LEVEL_HIGH_LSB, 21
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD1_LEVEL_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD1_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD1_LEVEL_LOW_BITS, 0x00100000
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD1_LEVEL_LOW_MSB, 20
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD1_LEVEL_LOW_LSB, 20
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD0_EDGE_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD0_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD0_EDGE_HIGH_BITS, 0x00080000
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD0_EDGE_HIGH_MSB, 19
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD0_EDGE_HIGH_LSB, 19
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD0_EDGE_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD0_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD0_EDGE_LOW_BITS, 0x00040000
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD0_EDGE_LOW_MSB, 18
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD0_EDGE_LOW_LSB, 18
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD0_LEVEL_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD0_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD0_LEVEL_HIGH_BITS, 0x00020000
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD0_LEVEL_HIGH_MSB, 17
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD0_LEVEL_HIGH_LSB, 17
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD0_LEVEL_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD0_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD0_LEVEL_LOW_BITS, 0x00010000
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD0_LEVEL_LOW_MSB, 16
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SD0_LEVEL_LOW_LSB, 16
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SS_EDGE_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SS_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SS_EDGE_HIGH_BITS, 0x00008000
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SS_EDGE_HIGH_MSB, 15
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SS_EDGE_HIGH_LSB, 15
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SS_EDGE_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SS_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SS_EDGE_LOW_BITS, 0x00004000
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SS_EDGE_LOW_MSB, 14
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SS_EDGE_LOW_LSB, 14
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SS_LEVEL_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SS_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SS_LEVEL_HIGH_BITS, 0x00002000
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SS_LEVEL_HIGH_MSB, 13
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SS_LEVEL_HIGH_LSB, 13
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SS_LEVEL_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SS_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SS_LEVEL_LOW_BITS, 0x00001000
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SS_LEVEL_LOW_MSB, 12
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SS_LEVEL_LOW_LSB, 12
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SCLK_EDGE_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SCLK_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SCLK_EDGE_HIGH_BITS, 0x00000800
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SCLK_EDGE_HIGH_MSB, 11
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SCLK_EDGE_HIGH_LSB, 11
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SCLK_EDGE_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SCLK_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SCLK_EDGE_LOW_BITS, 0x00000400
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SCLK_EDGE_LOW_MSB, 10
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SCLK_EDGE_LOW_LSB, 10
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SCLK_LEVEL_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SCLK_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SCLK_LEVEL_HIGH_BITS, 0x00000200
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SCLK_LEVEL_HIGH_MSB, 9
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SCLK_LEVEL_HIGH_LSB, 9
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SCLK_LEVEL_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SCLK_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SCLK_LEVEL_LOW_BITS, 0x00000100
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SCLK_LEVEL_LOW_MSB, 8
.equ	IO_QSPI_DORMANT_WAKE_INTS_GPIO_QSPI_SCLK_LEVEL_LOW_LSB, 8
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DM_EDGE_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DM_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DM_EDGE_HIGH_BITS, 0x00000080
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DM_EDGE_HIGH_MSB, 7
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DM_EDGE_HIGH_LSB, 7
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DM_EDGE_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DM_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DM_EDGE_LOW_BITS, 0x00000040
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DM_EDGE_LOW_MSB, 6
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DM_EDGE_LOW_LSB, 6
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DM_LEVEL_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DM_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DM_LEVEL_HIGH_BITS, 0x00000020
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DM_LEVEL_HIGH_MSB, 5
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DM_LEVEL_HIGH_LSB, 5
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DM_LEVEL_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DM_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DM_LEVEL_LOW_BITS, 0x00000010
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DM_LEVEL_LOW_MSB, 4
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DM_LEVEL_LOW_LSB, 4
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DP_EDGE_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DP_EDGE_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DP_EDGE_HIGH_BITS, 0x00000008
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DP_EDGE_HIGH_MSB, 3
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DP_EDGE_HIGH_LSB, 3
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DP_EDGE_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DP_EDGE_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DP_EDGE_LOW_BITS, 0x00000004
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DP_EDGE_LOW_MSB, 2
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DP_EDGE_LOW_LSB, 2
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DP_LEVEL_HIGH
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DP_LEVEL_HIGH_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DP_LEVEL_HIGH_BITS, 0x00000002
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DP_LEVEL_HIGH_MSB, 1
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DP_LEVEL_HIGH_LSB, 1
# -----------------------------------------------------------------------------
# Field       : IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DP_LEVEL_LOW
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DP_LEVEL_LOW_RESET, 0x0
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DP_LEVEL_LOW_BITS, 0x00000001
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DP_LEVEL_LOW_MSB, 0
.equ	IO_QSPI_DORMANT_WAKE_INTS_USBPHY_DP_LEVEL_LOW_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_IO_QSPI_H
