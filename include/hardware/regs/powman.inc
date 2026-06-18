#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : POWMAN
# Version        : 1
# Bus type       : apb
# Description    : Controls vreg, bor, lposc, chip resets & xosc startup,
#                  powman and provides scratch register for general use and for
#                  bootcode use
# =============================================================================
.ifndef	_HARDWARE_REGS_POWMAN_H
.set	_HARDWARE_REGS_POWMAN_H, 1
# =============================================================================
# Register    : POWMAN_BADPASSWD
# Description : Indicates a bad password has been used
.equ	POWMAN_BADPASSWD_OFFSET, 0x00000000
.equ	POWMAN_BADPASSWD_BITS, 0x00000001
.equ	POWMAN_BADPASSWD_RESET, 0x00000000
.equ	POWMAN_BADPASSWD_MSB, 0
.equ	POWMAN_BADPASSWD_LSB, 0
# =============================================================================
# Register    : POWMAN_VREG_CTRL
# Description : Voltage Regulator Control
.equ	POWMAN_VREG_CTRL_OFFSET, 0x00000004
.equ	POWMAN_VREG_CTRL_BITS, 0x0000b170
.equ	POWMAN_VREG_CTRL_RESET, 0x00008050
# -----------------------------------------------------------------------------
# Field       : POWMAN_VREG_CTRL_RST_N
# Description : returns the regulator to its startup settings
#               0 - reset
#               1 - not reset (default)
.equ	POWMAN_VREG_CTRL_RST_N_RESET, 0x1
.equ	POWMAN_VREG_CTRL_RST_N_BITS, 0x00008000
.equ	POWMAN_VREG_CTRL_RST_N_MSB, 15
.equ	POWMAN_VREG_CTRL_RST_N_LSB, 15
# -----------------------------------------------------------------------------
# Field       : POWMAN_VREG_CTRL_UNLOCK
# Description : unlocks the VREG control interface after power up
#               0 - Locked (default)
#               1 - Unlocked
#               It cannot be relocked when it is unlocked.
.equ	POWMAN_VREG_CTRL_UNLOCK_RESET, 0x0
.equ	POWMAN_VREG_CTRL_UNLOCK_BITS, 0x00002000
.equ	POWMAN_VREG_CTRL_UNLOCK_MSB, 13
.equ	POWMAN_VREG_CTRL_UNLOCK_LSB, 13
# -----------------------------------------------------------------------------
# Field       : POWMAN_VREG_CTRL_ISOLATE
# Description : isolates the VREG control interface
#               0 - not isolated (default)
#               1 - isolated
.equ	POWMAN_VREG_CTRL_ISOLATE_RESET, 0x0
.equ	POWMAN_VREG_CTRL_ISOLATE_BITS, 0x00001000
.equ	POWMAN_VREG_CTRL_ISOLATE_MSB, 12
.equ	POWMAN_VREG_CTRL_ISOLATE_LSB, 12
# -----------------------------------------------------------------------------
# Field       : POWMAN_VREG_CTRL_DISABLE_VOLTAGE_LIMIT
# Description : 0=not disabled, 1=enabled
.equ	POWMAN_VREG_CTRL_DISABLE_VOLTAGE_LIMIT_RESET, 0x0
.equ	POWMAN_VREG_CTRL_DISABLE_VOLTAGE_LIMIT_BITS, 0x00000100
.equ	POWMAN_VREG_CTRL_DISABLE_VOLTAGE_LIMIT_MSB, 8
.equ	POWMAN_VREG_CTRL_DISABLE_VOLTAGE_LIMIT_LSB, 8
# -----------------------------------------------------------------------------
# Field       : POWMAN_VREG_CTRL_HT_TH
# Description : high temperature protection threshold
#               regulator power transistors are disabled when junction
#               temperature exceeds threshold
#               000 - 100C
#               001 - 105C
#               010 - 110C
#               011 - 115C
#               100 - 120C
#               101 - 125C
#               110 - 135C
#               111 - 150C
.equ	POWMAN_VREG_CTRL_HT_TH_RESET, 0x5
.equ	POWMAN_VREG_CTRL_HT_TH_BITS, 0x00000070
.equ	POWMAN_VREG_CTRL_HT_TH_MSB, 6
.equ	POWMAN_VREG_CTRL_HT_TH_LSB, 4
# =============================================================================
# Register    : POWMAN_VREG_STS
# Description : Voltage Regulator Status
.equ	POWMAN_VREG_STS_OFFSET, 0x00000008
.equ	POWMAN_VREG_STS_BITS, 0x00000011
.equ	POWMAN_VREG_STS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : POWMAN_VREG_STS_VOUT_OK
# Description : output regulation status
#               0=not in regulation, 1=in regulation
.equ	POWMAN_VREG_STS_VOUT_OK_RESET, 0x0
.equ	POWMAN_VREG_STS_VOUT_OK_BITS, 0x00000010
.equ	POWMAN_VREG_STS_VOUT_OK_MSB, 4
.equ	POWMAN_VREG_STS_VOUT_OK_LSB, 4
# -----------------------------------------------------------------------------
# Field       : POWMAN_VREG_STS_STARTUP
# Description : startup status
#               0=startup complete, 1=starting up
.equ	POWMAN_VREG_STS_STARTUP_RESET, 0x0
.equ	POWMAN_VREG_STS_STARTUP_BITS, 0x00000001
.equ	POWMAN_VREG_STS_STARTUP_MSB, 0
.equ	POWMAN_VREG_STS_STARTUP_LSB, 0
# =============================================================================
# Register    : POWMAN_VREG
# Description : Voltage Regulator Settings
.equ	POWMAN_VREG_OFFSET, 0x0000000c
.equ	POWMAN_VREG_BITS, 0x000081f2
.equ	POWMAN_VREG_RESET, 0x000000b0
# -----------------------------------------------------------------------------
# Field       : POWMAN_VREG_UPDATE_IN_PROGRESS
# Description : regulator state is being updated
#               writes to the vreg register will be ignored when this field is
#               set
.equ	POWMAN_VREG_UPDATE_IN_PROGRESS_RESET, 0x0
.equ	POWMAN_VREG_UPDATE_IN_PROGRESS_BITS, 0x00008000
.equ	POWMAN_VREG_UPDATE_IN_PROGRESS_MSB, 15
.equ	POWMAN_VREG_UPDATE_IN_PROGRESS_LSB, 15
# -----------------------------------------------------------------------------
# Field       : POWMAN_VREG_VSEL
# Description : output voltage select
#               the regulator output voltage is limited to 1.3V unless the
#               voltage limit
#               is disabled using the disable_voltage_limit field in the
#               vreg_ctrl register
#               00000 - 0.55V
#               00001 - 0.60V
#               00010 - 0.65V
#               00011 - 0.70V
#               00100 - 0.75V
#               00101 - 0.80V
#               00110 - 0.85V
#               00111 - 0.90V
#               01000 - 0.95V
#               01001 - 1.00V
#               01010 - 1.05V
#               01011 - 1.10V (default)
#               01100 - 1.15V
#               01101 - 1.20V
#               01110 - 1.25V
#               01111 - 1.30V
#               10000 - 1.35V
#               10001 - 1.40V
#               10010 - 1.50V
#               10011 - 1.60V
#               10100 - 1.65V
#               10101 - 1.70V
#               10110 - 1.80V
#               10111 - 1.90V
#               11000 - 2.00V
#               11001 - 2.35V
#               11010 - 2.50V
#               11011 - 2.65V
#               11100 - 2.80V
#               11101 - 3.00V
#               11110 - 3.15V
#               11111 - 3.30V
.equ	POWMAN_VREG_VSEL_RESET, 0x0b
.equ	POWMAN_VREG_VSEL_BITS, 0x000001f0
.equ	POWMAN_VREG_VSEL_MSB, 8
.equ	POWMAN_VREG_VSEL_LSB, 4
# -----------------------------------------------------------------------------
# Field       : POWMAN_VREG_HIZ
# Description : high impedance mode select
#               0=not in high impedance mode, 1=in high impedance mode
.equ	POWMAN_VREG_HIZ_RESET, 0x0
.equ	POWMAN_VREG_HIZ_BITS, 0x00000002
.equ	POWMAN_VREG_HIZ_MSB, 1
.equ	POWMAN_VREG_HIZ_LSB, 1
# =============================================================================
# Register    : POWMAN_VREG_LP_ENTRY
# Description : Voltage Regulator Low Power Entry Settings
.equ	POWMAN_VREG_LP_ENTRY_OFFSET, 0x00000010
.equ	POWMAN_VREG_LP_ENTRY_BITS, 0x000001f6
.equ	POWMAN_VREG_LP_ENTRY_RESET, 0x000000b4
# -----------------------------------------------------------------------------
# Field       : POWMAN_VREG_LP_ENTRY_VSEL
# Description : output voltage select
#               the regulator output voltage is limited to 1.3V unless the
#               voltage limit
#               is disabled using the disable_voltage_limit field in the
#               vreg_ctrl register
#               00000 - 0.55V
#               00001 - 0.60V
#               00010 - 0.65V
#               00011 - 0.70V
#               00100 - 0.75V
#               00101 - 0.80V
#               00110 - 0.85V
#               00111 - 0.90V
#               01000 - 0.95V
#               01001 - 1.00V
#               01010 - 1.05V
#               01011 - 1.10V (default)
#               01100 - 1.15V
#               01101 - 1.20V
#               01110 - 1.25V
#               01111 - 1.30V
#               10000 - 1.35V
#               10001 - 1.40V
#               10010 - 1.50V
#               10011 - 1.60V
#               10100 - 1.65V
#               10101 - 1.70V
#               10110 - 1.80V
#               10111 - 1.90V
#               11000 - 2.00V
#               11001 - 2.35V
#               11010 - 2.50V
#               11011 - 2.65V
#               11100 - 2.80V
#               11101 - 3.00V
#               11110 - 3.15V
#               11111 - 3.30V
.equ	POWMAN_VREG_LP_ENTRY_VSEL_RESET, 0x0b
.equ	POWMAN_VREG_LP_ENTRY_VSEL_BITS, 0x000001f0
.equ	POWMAN_VREG_LP_ENTRY_VSEL_MSB, 8
.equ	POWMAN_VREG_LP_ENTRY_VSEL_LSB, 4
# -----------------------------------------------------------------------------
# Field       : POWMAN_VREG_LP_ENTRY_MODE
# Description : selects either normal (switching) mode or low power (linear)
#               mode
#               low power mode can only be selected for output voltages up to
#               1.3V
#               0 = normal mode (switching)
#               1 = low power mode (linear)
.equ	POWMAN_VREG_LP_ENTRY_MODE_RESET, 0x1
.equ	POWMAN_VREG_LP_ENTRY_MODE_BITS, 0x00000004
.equ	POWMAN_VREG_LP_ENTRY_MODE_MSB, 2
.equ	POWMAN_VREG_LP_ENTRY_MODE_LSB, 2
# -----------------------------------------------------------------------------
# Field       : POWMAN_VREG_LP_ENTRY_HIZ
# Description : high impedance mode select
#               0=not in high impedance mode, 1=in high impedance mode
.equ	POWMAN_VREG_LP_ENTRY_HIZ_RESET, 0x0
.equ	POWMAN_VREG_LP_ENTRY_HIZ_BITS, 0x00000002
.equ	POWMAN_VREG_LP_ENTRY_HIZ_MSB, 1
.equ	POWMAN_VREG_LP_ENTRY_HIZ_LSB, 1
# =============================================================================
# Register    : POWMAN_VREG_LP_EXIT
# Description : Voltage Regulator Low Power Exit Settings
.equ	POWMAN_VREG_LP_EXIT_OFFSET, 0x00000014
.equ	POWMAN_VREG_LP_EXIT_BITS, 0x000001f6
.equ	POWMAN_VREG_LP_EXIT_RESET, 0x000000b0
# -----------------------------------------------------------------------------
# Field       : POWMAN_VREG_LP_EXIT_VSEL
# Description : output voltage select
#               the regulator output voltage is limited to 1.3V unless the
#               voltage limit
#               is disabled using the disable_voltage_limit field in the
#               vreg_ctrl register
#               00000 - 0.55V
#               00001 - 0.60V
#               00010 - 0.65V
#               00011 - 0.70V
#               00100 - 0.75V
#               00101 - 0.80V
#               00110 - 0.85V
#               00111 - 0.90V
#               01000 - 0.95V
#               01001 - 1.00V
#               01010 - 1.05V
#               01011 - 1.10V (default)
#               01100 - 1.15V
#               01101 - 1.20V
#               01110 - 1.25V
#               01111 - 1.30V
#               10000 - 1.35V
#               10001 - 1.40V
#               10010 - 1.50V
#               10011 - 1.60V
#               10100 - 1.65V
#               10101 - 1.70V
#               10110 - 1.80V
#               10111 - 1.90V
#               11000 - 2.00V
#               11001 - 2.35V
#               11010 - 2.50V
#               11011 - 2.65V
#               11100 - 2.80V
#               11101 - 3.00V
#               11110 - 3.15V
#               11111 - 3.30V
.equ	POWMAN_VREG_LP_EXIT_VSEL_RESET, 0x0b
.equ	POWMAN_VREG_LP_EXIT_VSEL_BITS, 0x000001f0
.equ	POWMAN_VREG_LP_EXIT_VSEL_MSB, 8
.equ	POWMAN_VREG_LP_EXIT_VSEL_LSB, 4
# -----------------------------------------------------------------------------
# Field       : POWMAN_VREG_LP_EXIT_MODE
# Description : selects either normal (switching) mode or low power (linear)
#               mode
#               low power mode can only be selected for output voltages up to
#               1.3V
#               0 = normal mode (switching)
#               1 = low power mode (linear)
.equ	POWMAN_VREG_LP_EXIT_MODE_RESET, 0x0
.equ	POWMAN_VREG_LP_EXIT_MODE_BITS, 0x00000004
.equ	POWMAN_VREG_LP_EXIT_MODE_MSB, 2
.equ	POWMAN_VREG_LP_EXIT_MODE_LSB, 2
# -----------------------------------------------------------------------------
# Field       : POWMAN_VREG_LP_EXIT_HIZ
# Description : high impedance mode select
#               0=not in high impedance mode, 1=in high impedance mode
.equ	POWMAN_VREG_LP_EXIT_HIZ_RESET, 0x0
.equ	POWMAN_VREG_LP_EXIT_HIZ_BITS, 0x00000002
.equ	POWMAN_VREG_LP_EXIT_HIZ_MSB, 1
.equ	POWMAN_VREG_LP_EXIT_HIZ_LSB, 1
# =============================================================================
# Register    : POWMAN_BOD_CTRL
# Description : Brown-out Detection Control
.equ	POWMAN_BOD_CTRL_OFFSET, 0x00000018
.equ	POWMAN_BOD_CTRL_BITS, 0x00001000
.equ	POWMAN_BOD_CTRL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : POWMAN_BOD_CTRL_ISOLATE
# Description : isolates the brown-out detection control interface
#               0 - not isolated (default)
#               1 - isolated
.equ	POWMAN_BOD_CTRL_ISOLATE_RESET, 0x0
.equ	POWMAN_BOD_CTRL_ISOLATE_BITS, 0x00001000
.equ	POWMAN_BOD_CTRL_ISOLATE_MSB, 12
.equ	POWMAN_BOD_CTRL_ISOLATE_LSB, 12
# =============================================================================
# Register    : POWMAN_BOD
# Description : Brown-out Detection Settings
.equ	POWMAN_BOD_OFFSET, 0x0000001c
.equ	POWMAN_BOD_BITS, 0x000001f1
.equ	POWMAN_BOD_RESET, 0x000000b1
# -----------------------------------------------------------------------------
# Field       : POWMAN_BOD_VSEL
# Description : threshold select
#               00000 - 0.473V
#               00001 - 0.516V
#               00010 - 0.559V
#               00011 - 0.602V
#               00100 - 0.645VS
#               00101 - 0.688V
#               00110 - 0.731V
#               00111 - 0.774V
#               01000 - 0.817V
#               01001 - 0.860V (default)
#               01010 - 0.903V
#               01011 - 0.946V
#               01100 - 0.989V
#               01101 - 1.032V
#               01110 - 1.075V
#               01111 - 1.118V
#               10000 - 1.161
#               10001 - 1.204V
.equ	POWMAN_BOD_VSEL_RESET, 0x0b
.equ	POWMAN_BOD_VSEL_BITS, 0x000001f0
.equ	POWMAN_BOD_VSEL_MSB, 8
.equ	POWMAN_BOD_VSEL_LSB, 4
# -----------------------------------------------------------------------------
# Field       : POWMAN_BOD_EN
# Description : enable brown-out detection
#               0=not enabled, 1=enabled
.equ	POWMAN_BOD_EN_RESET, 0x1
.equ	POWMAN_BOD_EN_BITS, 0x00000001
.equ	POWMAN_BOD_EN_MSB, 0
.equ	POWMAN_BOD_EN_LSB, 0
# =============================================================================
# Register    : POWMAN_BOD_LP_ENTRY
# Description : Brown-out Detection Low Power Entry Settings
.equ	POWMAN_BOD_LP_ENTRY_OFFSET, 0x00000020
.equ	POWMAN_BOD_LP_ENTRY_BITS, 0x000001f1
.equ	POWMAN_BOD_LP_ENTRY_RESET, 0x000000b0
# -----------------------------------------------------------------------------
# Field       : POWMAN_BOD_LP_ENTRY_VSEL
# Description : threshold select
#               00000 - 0.473V
#               00001 - 0.516V
#               00010 - 0.559V
#               00011 - 0.602V
#               00100 - 0.645VS
#               00101 - 0.688V
#               00110 - 0.731V
#               00111 - 0.774V
#               01000 - 0.817V
#               01001 - 0.860V (default)
#               01010 - 0.903V
#               01011 - 0.946V
#               01100 - 0.989V
#               01101 - 1.032V
#               01110 - 1.075V
#               01111 - 1.118V
#               10000 - 1.161
#               10001 - 1.204V
.equ	POWMAN_BOD_LP_ENTRY_VSEL_RESET, 0x0b
.equ	POWMAN_BOD_LP_ENTRY_VSEL_BITS, 0x000001f0
.equ	POWMAN_BOD_LP_ENTRY_VSEL_MSB, 8
.equ	POWMAN_BOD_LP_ENTRY_VSEL_LSB, 4
# -----------------------------------------------------------------------------
# Field       : POWMAN_BOD_LP_ENTRY_EN
# Description : enable brown-out detection
#               0=not enabled, 1=enabled
.equ	POWMAN_BOD_LP_ENTRY_EN_RESET, 0x0
.equ	POWMAN_BOD_LP_ENTRY_EN_BITS, 0x00000001
.equ	POWMAN_BOD_LP_ENTRY_EN_MSB, 0
.equ	POWMAN_BOD_LP_ENTRY_EN_LSB, 0
# =============================================================================
# Register    : POWMAN_BOD_LP_EXIT
# Description : Brown-out Detection Low Power Exit Settings
.equ	POWMAN_BOD_LP_EXIT_OFFSET, 0x00000024
.equ	POWMAN_BOD_LP_EXIT_BITS, 0x000001f1
.equ	POWMAN_BOD_LP_EXIT_RESET, 0x000000b1
# -----------------------------------------------------------------------------
# Field       : POWMAN_BOD_LP_EXIT_VSEL
# Description : threshold select
#               00000 - 0.473V
#               00001 - 0.516V
#               00010 - 0.559V
#               00011 - 0.602V
#               00100 - 0.645VS
#               00101 - 0.688V
#               00110 - 0.731V
#               00111 - 0.774V
#               01000 - 0.817V
#               01001 - 0.860V (default)
#               01010 - 0.903V
#               01011 - 0.946V
#               01100 - 0.989V
#               01101 - 1.032V
#               01110 - 1.075V
#               01111 - 1.118V
#               10000 - 1.161
#               10001 - 1.204V
.equ	POWMAN_BOD_LP_EXIT_VSEL_RESET, 0x0b
.equ	POWMAN_BOD_LP_EXIT_VSEL_BITS, 0x000001f0
.equ	POWMAN_BOD_LP_EXIT_VSEL_MSB, 8
.equ	POWMAN_BOD_LP_EXIT_VSEL_LSB, 4
# -----------------------------------------------------------------------------
# Field       : POWMAN_BOD_LP_EXIT_EN
# Description : enable brown-out detection
#               0=not enabled, 1=enabled
.equ	POWMAN_BOD_LP_EXIT_EN_RESET, 0x1
.equ	POWMAN_BOD_LP_EXIT_EN_BITS, 0x00000001
.equ	POWMAN_BOD_LP_EXIT_EN_MSB, 0
.equ	POWMAN_BOD_LP_EXIT_EN_LSB, 0
# =============================================================================
# Register    : POWMAN_LPOSC
# Description : Low power oscillator control register.
.equ	POWMAN_LPOSC_OFFSET, 0x00000028
.equ	POWMAN_LPOSC_BITS, 0x000003f3
.equ	POWMAN_LPOSC_RESET, 0x00000203
# -----------------------------------------------------------------------------
# Field       : POWMAN_LPOSC_TRIM
# Description : Frequency trim - the trim step is typically 1% of the reset
#               frequency, but can be up to 3%
.equ	POWMAN_LPOSC_TRIM_RESET, 0x20
.equ	POWMAN_LPOSC_TRIM_BITS, 0x000003f0
.equ	POWMAN_LPOSC_TRIM_MSB, 9
.equ	POWMAN_LPOSC_TRIM_LSB, 4
# -----------------------------------------------------------------------------
# Field       : POWMAN_LPOSC_MODE
# Description : This feature has been removed
.equ	POWMAN_LPOSC_MODE_RESET, 0x3
.equ	POWMAN_LPOSC_MODE_BITS, 0x00000003
.equ	POWMAN_LPOSC_MODE_MSB, 1
.equ	POWMAN_LPOSC_MODE_LSB, 0
# =============================================================================
# Register    : POWMAN_CHIP_RESET
# Description : Chip reset control and status
.equ	POWMAN_CHIP_RESET_OFFSET, 0x0000002c
.equ	POWMAN_CHIP_RESET_BITS, 0x1fef0011
.equ	POWMAN_CHIP_RESET_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_RSM
# Description : Last reset was a watchdog timeout which was configured to reset
#               the power-on state machine
#               This resets:
#               double_tap flag    no
#               DP                 no
#               RPAP               no
#               rescue_flag        no
#               timer              no
#               powman             no
#               swcore             no
#               psm                yes
#               and does not change the power state
.equ	POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_RSM_RESET, 0x0
.equ	POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_RSM_BITS, 0x10000000
.equ	POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_RSM_MSB, 28
.equ	POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_RSM_LSB, 28
# -----------------------------------------------------------------------------
# Field       : POWMAN_CHIP_RESET_HAD_HZD_SYS_RESET_REQ
# Description : Last reset was a system reset from the hazard debugger
#               This resets:
#               double_tap flag    no
#               DP                 no
#               RPAP               no
#               rescue_flag        no
#               timer              no
#               powman             no
#               swcore             no
#               psm                yes
#               and does not change the power state
.equ	POWMAN_CHIP_RESET_HAD_HZD_SYS_RESET_REQ_RESET, 0x0
.equ	POWMAN_CHIP_RESET_HAD_HZD_SYS_RESET_REQ_BITS, 0x08000000
.equ	POWMAN_CHIP_RESET_HAD_HZD_SYS_RESET_REQ_MSB, 27
.equ	POWMAN_CHIP_RESET_HAD_HZD_SYS_RESET_REQ_LSB, 27
# -----------------------------------------------------------------------------
# Field       : POWMAN_CHIP_RESET_HAD_GLITCH_DETECT
# Description : Last reset was due to a power supply glitch
#               This resets:
#               double_tap flag    no
#               DP                 no
#               RPAP               no
#               rescue_flag        no
#               timer              no
#               powman             no
#               swcore             no
#               psm                yes
#               and does not change the power state
.equ	POWMAN_CHIP_RESET_HAD_GLITCH_DETECT_RESET, 0x0
.equ	POWMAN_CHIP_RESET_HAD_GLITCH_DETECT_BITS, 0x04000000
.equ	POWMAN_CHIP_RESET_HAD_GLITCH_DETECT_MSB, 26
.equ	POWMAN_CHIP_RESET_HAD_GLITCH_DETECT_LSB, 26
# -----------------------------------------------------------------------------
# Field       : POWMAN_CHIP_RESET_HAD_SWCORE_PD
# Description : Last reset was a switched core powerdown
#               This resets:
#               double_tap flag    no
#               DP                 no
#               RPAP               no
#               rescue_flag        no
#               timer              no
#               powman             no
#               swcore             yes
#               psm                yes
#               then starts the power sequencer
.equ	POWMAN_CHIP_RESET_HAD_SWCORE_PD_RESET, 0x0
.equ	POWMAN_CHIP_RESET_HAD_SWCORE_PD_BITS, 0x02000000
.equ	POWMAN_CHIP_RESET_HAD_SWCORE_PD_MSB, 25
.equ	POWMAN_CHIP_RESET_HAD_SWCORE_PD_LSB, 25
# -----------------------------------------------------------------------------
# Field       : POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_SWCORE
# Description : Last reset was a watchdog timeout which was configured to reset
#               the switched-core
#               This resets:
#               double_tap flag    no
#               DP                 no
#               RPAP               no
#               rescue_flag        no
#               timer              no
#               powman             no
#               swcore             yes
#               psm                yes
#               then starts the power sequencer
.equ	POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_SWCORE_RESET, 0x0
.equ	POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_SWCORE_BITS, 0x01000000
.equ	POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_SWCORE_MSB, 24
.equ	POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_SWCORE_LSB, 24
# -----------------------------------------------------------------------------
# Field       : POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_POWMAN
# Description : Last reset was a watchdog timeout which was configured to reset
#               the power manager
#               This resets:
#               double_tap flag    no
#               DP                 no
#               RPAP               no
#               rescue_flag        no
#               timer              yes
#               powman             yes
#               swcore             yes
#               psm                yes
#               then starts the power sequencer
.equ	POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_POWMAN_RESET, 0x0
.equ	POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_POWMAN_BITS, 0x00800000
.equ	POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_POWMAN_MSB, 23
.equ	POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_POWMAN_LSB, 23
# -----------------------------------------------------------------------------
# Field       : POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_POWMAN_ASYNC
# Description : Last reset was a watchdog timeout which was configured to reset
#               the power manager asynchronously
#               This resets:
#               double_tap flag    no
#               DP                 no
#               RPAP               no
#               rescue_flag        no
#               timer              yes
#               powman             yes
#               swcore             yes
#               psm                yes
#               then starts the power sequencer
.equ	POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_POWMAN_ASYNC_RESET, 0x0
.equ	POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_POWMAN_ASYNC_BITS, 0x00400000
.equ	POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_POWMAN_ASYNC_MSB, 22
.equ	POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_POWMAN_ASYNC_LSB, 22
# -----------------------------------------------------------------------------
# Field       : POWMAN_CHIP_RESET_HAD_RESCUE
# Description : Last reset was a rescue reset from the debugger
#               This resets:
#               double_tap flag    no
#               DP                 no
#               RPAP               no
#               rescue_flag        no, it sets this flag
#               timer              yes
#               powman             yes
#               swcore             yes
#               psm                yes
#               then starts the power sequencer
.equ	POWMAN_CHIP_RESET_HAD_RESCUE_RESET, 0x0
.equ	POWMAN_CHIP_RESET_HAD_RESCUE_BITS, 0x00200000
.equ	POWMAN_CHIP_RESET_HAD_RESCUE_MSB, 21
.equ	POWMAN_CHIP_RESET_HAD_RESCUE_LSB, 21
# -----------------------------------------------------------------------------
# Field       : POWMAN_CHIP_RESET_HAD_DP_RESET_REQ
# Description : Last reset was an reset request from the arm debugger
#               This resets:
#               double_tap flag    no
#               DP                 no
#               RPAP               no
#               rescue_flag        yes
#               timer              yes
#               powman             yes
#               swcore             yes
#               psm                yes
#               then starts the power sequencer
.equ	POWMAN_CHIP_RESET_HAD_DP_RESET_REQ_RESET, 0x0
.equ	POWMAN_CHIP_RESET_HAD_DP_RESET_REQ_BITS, 0x00080000
.equ	POWMAN_CHIP_RESET_HAD_DP_RESET_REQ_MSB, 19
.equ	POWMAN_CHIP_RESET_HAD_DP_RESET_REQ_LSB, 19
# -----------------------------------------------------------------------------
# Field       : POWMAN_CHIP_RESET_HAD_RUN_LOW
# Description : Last reset was from the RUN pin
#               This resets:
#               double_tap flag    no
#               DP                 yes
#               RPAP               yes
#               rescue_flag        yes
#               timer              yes
#               powman             yes
#               swcore             yes
#               psm                yes
#               then starts the power sequencer
.equ	POWMAN_CHIP_RESET_HAD_RUN_LOW_RESET, 0x0
.equ	POWMAN_CHIP_RESET_HAD_RUN_LOW_BITS, 0x00040000
.equ	POWMAN_CHIP_RESET_HAD_RUN_LOW_MSB, 18
.equ	POWMAN_CHIP_RESET_HAD_RUN_LOW_LSB, 18
# -----------------------------------------------------------------------------
# Field       : POWMAN_CHIP_RESET_HAD_BOR
# Description : Last reset was from the brown-out detection block
#               This resets:
#               double_tap flag    yes
#               DP                 yes
#               RPAP               yes
#               rescue_flag        yes
#               timer              yes
#               powman             yes
#               swcore             yes
#               psm                yes
#               then starts the power sequencer
.equ	POWMAN_CHIP_RESET_HAD_BOR_RESET, 0x0
.equ	POWMAN_CHIP_RESET_HAD_BOR_BITS, 0x00020000
.equ	POWMAN_CHIP_RESET_HAD_BOR_MSB, 17
.equ	POWMAN_CHIP_RESET_HAD_BOR_LSB, 17
# -----------------------------------------------------------------------------
# Field       : POWMAN_CHIP_RESET_HAD_POR
# Description : Last reset was from the power-on reset
#               This resets:
#               double_tap flag    yes
#               DP                 yes
#               RPAP               yes
#               rescue_flag        yes
#               timer              yes
#               powman             yes
#               swcore             yes
#               psm                yes
#               then starts the power sequencer
.equ	POWMAN_CHIP_RESET_HAD_POR_RESET, 0x0
.equ	POWMAN_CHIP_RESET_HAD_POR_BITS, 0x00010000
.equ	POWMAN_CHIP_RESET_HAD_POR_MSB, 16
.equ	POWMAN_CHIP_RESET_HAD_POR_LSB, 16
# -----------------------------------------------------------------------------
# Field       : POWMAN_CHIP_RESET_RESCUE_FLAG
# Description : This is set by a rescue reset from the RP-AP.
#               Its purpose is to halt before the bootrom before booting from
#               flash in order to recover from a boot lock-up.
#               The debugger can then attach once the bootrom has been halted
#               and flash some working code that does not lock up.
.equ	POWMAN_CHIP_RESET_RESCUE_FLAG_RESET, 0x0
.equ	POWMAN_CHIP_RESET_RESCUE_FLAG_BITS, 0x00000010
.equ	POWMAN_CHIP_RESET_RESCUE_FLAG_MSB, 4
.equ	POWMAN_CHIP_RESET_RESCUE_FLAG_LSB, 4
# -----------------------------------------------------------------------------
# Field       : POWMAN_CHIP_RESET_DOUBLE_TAP
# Description : This flag is set by double-tapping RUN. It tells bootcode to go
#               into the bootloader.
.equ	POWMAN_CHIP_RESET_DOUBLE_TAP_RESET, 0x0
.equ	POWMAN_CHIP_RESET_DOUBLE_TAP_BITS, 0x00000001
.equ	POWMAN_CHIP_RESET_DOUBLE_TAP_MSB, 0
.equ	POWMAN_CHIP_RESET_DOUBLE_TAP_LSB, 0
# =============================================================================
# Register    : POWMAN_WDSEL
# Description : Allows a watchdog reset to reset the internal state of powman
#               in addition to the power-on state machine (PSM).
#               Note that powman ignores watchdog resets that do not select at
#               least the CLOCKS stage or earlier stages in the PSM. If using
#               these bits, it's recommended to set PSM_WDSEL to all-ones in
#               addition to the desired bits in this register. Failing to
#               select CLOCKS or earlier will result in the POWMAN_WDSEL
#               register having no effect.
.equ	POWMAN_WDSEL_OFFSET, 0x00000030
.equ	POWMAN_WDSEL_BITS, 0x00001111
.equ	POWMAN_WDSEL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : POWMAN_WDSEL_RESET_RSM
# Description : If set to 1, a watchdog reset will run the full power-on state
#               machine (PSM) sequence
#               From a user perspective it is the same as setting
#               RSM_WDSEL_PROC_COLD
#               From a hardware debug perspective it has the same effect as a
#               reset from a glitch detector
.equ	POWMAN_WDSEL_RESET_RSM_RESET, 0x0
.equ	POWMAN_WDSEL_RESET_RSM_BITS, 0x00001000
.equ	POWMAN_WDSEL_RESET_RSM_MSB, 12
.equ	POWMAN_WDSEL_RESET_RSM_LSB, 12
# -----------------------------------------------------------------------------
# Field       : POWMAN_WDSEL_RESET_SWCORE
# Description : If set to 1, a watchdog reset will reset the switched core
#               power domain and run the full power-on state machine (PSM)
#               sequence
#               From a user perspective it is the same as setting
#               RSM_WDSEL_PROC_COLD
#               From a hardware debug perspective it has the same effect as a
#               power-on reset for the switched core power domain
.equ	POWMAN_WDSEL_RESET_SWCORE_RESET, 0x0
.equ	POWMAN_WDSEL_RESET_SWCORE_BITS, 0x00000100
.equ	POWMAN_WDSEL_RESET_SWCORE_MSB, 8
.equ	POWMAN_WDSEL_RESET_SWCORE_LSB, 8
# -----------------------------------------------------------------------------
# Field       : POWMAN_WDSEL_RESET_POWMAN
# Description : If set to 1, a watchdog reset will restore powman defaults,
#               reset the timer, reset the switched core power domain
#               and run the full power-on state machine (PSM) sequence
#               This relies on clk_ref running. Use reset_powman_async if that
#               may not be true
.equ	POWMAN_WDSEL_RESET_POWMAN_RESET, 0x0
.equ	POWMAN_WDSEL_RESET_POWMAN_BITS, 0x00000010
.equ	POWMAN_WDSEL_RESET_POWMAN_MSB, 4
.equ	POWMAN_WDSEL_RESET_POWMAN_LSB, 4
# -----------------------------------------------------------------------------
# Field       : POWMAN_WDSEL_RESET_POWMAN_ASYNC
# Description : If set to 1, a watchdog reset will restore powman defaults,
#               reset the timer,
#               reset the switched core domain and run the full power-on state
#               machine (PSM) sequence
#               This does not rely on clk_ref running
.equ	POWMAN_WDSEL_RESET_POWMAN_ASYNC_RESET, 0x0
.equ	POWMAN_WDSEL_RESET_POWMAN_ASYNC_BITS, 0x00000001
.equ	POWMAN_WDSEL_RESET_POWMAN_ASYNC_MSB, 0
.equ	POWMAN_WDSEL_RESET_POWMAN_ASYNC_LSB, 0
# =============================================================================
# Register    : POWMAN_SEQ_CFG
# Description : For configuration of the power sequencer
#               Writes are ignored while POWMAN_STATE_CHANGING=1
.equ	POWMAN_SEQ_CFG_OFFSET, 0x00000034
.equ	POWMAN_SEQ_CFG_BITS, 0x001311f3
.equ	POWMAN_SEQ_CFG_RESET, 0x001011f0
# -----------------------------------------------------------------------------
# Field       : POWMAN_SEQ_CFG_USING_FAST_POWCK
# Description : 0 indicates the POWMAN clock is running from the low power
#               oscillator (32kHz)
#               1 indicates the POWMAN clock is running from the reference
#               clock (2-50MHz)
.equ	POWMAN_SEQ_CFG_USING_FAST_POWCK_RESET, 0x1
.equ	POWMAN_SEQ_CFG_USING_FAST_POWCK_BITS, 0x00100000
.equ	POWMAN_SEQ_CFG_USING_FAST_POWCK_MSB, 20
.equ	POWMAN_SEQ_CFG_USING_FAST_POWCK_LSB, 20
# -----------------------------------------------------------------------------
# Field       : POWMAN_SEQ_CFG_USING_BOD_LP
# Description : Indicates the brown-out detector (BOD) mode
#               0 = BOD high power mode which is the default
#               1 = BOD low power mode
.equ	POWMAN_SEQ_CFG_USING_BOD_LP_RESET, 0x0
.equ	POWMAN_SEQ_CFG_USING_BOD_LP_BITS, 0x00020000
.equ	POWMAN_SEQ_CFG_USING_BOD_LP_MSB, 17
.equ	POWMAN_SEQ_CFG_USING_BOD_LP_LSB, 17
# -----------------------------------------------------------------------------
# Field       : POWMAN_SEQ_CFG_USING_VREG_LP
# Description : Indicates the voltage regulator (VREG) mode
#               0 = VREG high power mode which is the default
#               1 = VREG low power mode
.equ	POWMAN_SEQ_CFG_USING_VREG_LP_RESET, 0x0
.equ	POWMAN_SEQ_CFG_USING_VREG_LP_BITS, 0x00010000
.equ	POWMAN_SEQ_CFG_USING_VREG_LP_MSB, 16
.equ	POWMAN_SEQ_CFG_USING_VREG_LP_LSB, 16
# -----------------------------------------------------------------------------
# Field       : POWMAN_SEQ_CFG_USE_FAST_POWCK
# Description : selects the reference clock (clk_ref) as the source of the
#               POWMAN clock when switched-core is powered. The POWMAN clock
#               always switches to the slow clock (lposc) when switched-core is
#               powered down because the fast clock stops running.
#               0 always run the POWMAN clock from the slow clock (lposc)
#               1 run the POWMAN clock from the fast clock when available
#               This setting takes effect when a power up sequence is next run
.equ	POWMAN_SEQ_CFG_USE_FAST_POWCK_RESET, 0x1
.equ	POWMAN_SEQ_CFG_USE_FAST_POWCK_BITS, 0x00001000
.equ	POWMAN_SEQ_CFG_USE_FAST_POWCK_MSB, 12
.equ	POWMAN_SEQ_CFG_USE_FAST_POWCK_LSB, 12
# -----------------------------------------------------------------------------
# Field       : POWMAN_SEQ_CFG_RUN_LPOSC_IN_LP
# Description : Set to 0 to stop the low power osc when the switched-core is
#               powered down, which is unwise if using it to clock the timer
#               This setting takes effect when the swcore is next powered down
.equ	POWMAN_SEQ_CFG_RUN_LPOSC_IN_LP_RESET, 0x1
.equ	POWMAN_SEQ_CFG_RUN_LPOSC_IN_LP_BITS, 0x00000100
.equ	POWMAN_SEQ_CFG_RUN_LPOSC_IN_LP_MSB, 8
.equ	POWMAN_SEQ_CFG_RUN_LPOSC_IN_LP_LSB, 8
# -----------------------------------------------------------------------------
# Field       : POWMAN_SEQ_CFG_USE_BOD_HP
# Description : Set to 0 to prevent automatic switching to bod high power mode
#               when switched-core is powered up
#               This setting takes effect when the swcore is next powered up
.equ	POWMAN_SEQ_CFG_USE_BOD_HP_RESET, 0x1
.equ	POWMAN_SEQ_CFG_USE_BOD_HP_BITS, 0x00000080
.equ	POWMAN_SEQ_CFG_USE_BOD_HP_MSB, 7
.equ	POWMAN_SEQ_CFG_USE_BOD_HP_LSB, 7
# -----------------------------------------------------------------------------
# Field       : POWMAN_SEQ_CFG_USE_BOD_LP
# Description : Set to 0 to prevent automatic switching to bod low power mode
#               when switched-core is powered down
#               This setting takes effect when the swcore is next powered down
.equ	POWMAN_SEQ_CFG_USE_BOD_LP_RESET, 0x1
.equ	POWMAN_SEQ_CFG_USE_BOD_LP_BITS, 0x00000040
.equ	POWMAN_SEQ_CFG_USE_BOD_LP_MSB, 6
.equ	POWMAN_SEQ_CFG_USE_BOD_LP_LSB, 6
# -----------------------------------------------------------------------------
# Field       : POWMAN_SEQ_CFG_USE_VREG_HP
# Description : Set to 0 to prevent automatic switching to vreg high power mode
#               when switched-core is powered up
#               This setting takes effect when the swcore is next powered up
.equ	POWMAN_SEQ_CFG_USE_VREG_HP_RESET, 0x1
.equ	POWMAN_SEQ_CFG_USE_VREG_HP_BITS, 0x00000020
.equ	POWMAN_SEQ_CFG_USE_VREG_HP_MSB, 5
.equ	POWMAN_SEQ_CFG_USE_VREG_HP_LSB, 5
# -----------------------------------------------------------------------------
# Field       : POWMAN_SEQ_CFG_USE_VREG_LP
# Description : Set to 0 to prevent automatic switching to vreg low power mode
#               when switched-core is powered down
#               This setting takes effect when the swcore is next powered down
.equ	POWMAN_SEQ_CFG_USE_VREG_LP_RESET, 0x1
.equ	POWMAN_SEQ_CFG_USE_VREG_LP_BITS, 0x00000010
.equ	POWMAN_SEQ_CFG_USE_VREG_LP_MSB, 4
.equ	POWMAN_SEQ_CFG_USE_VREG_LP_LSB, 4
# -----------------------------------------------------------------------------
# Field       : POWMAN_SEQ_CFG_HW_PWRUP_SRAM0
# Description : Specifies the power state of SRAM0 when powering up swcore from
#               a low power state (P1.xxx) to a high power state (P0.0xx).
#               0=power-up
#               1=no change
.equ	POWMAN_SEQ_CFG_HW_PWRUP_SRAM0_RESET, 0x0
.equ	POWMAN_SEQ_CFG_HW_PWRUP_SRAM0_BITS, 0x00000002
.equ	POWMAN_SEQ_CFG_HW_PWRUP_SRAM0_MSB, 1
.equ	POWMAN_SEQ_CFG_HW_PWRUP_SRAM0_LSB, 1
# -----------------------------------------------------------------------------
# Field       : POWMAN_SEQ_CFG_HW_PWRUP_SRAM1
# Description : Specifies the power state of SRAM1 when powering up swcore from
#               a low power state (P1.xxx) to a high power state (P0.0xx).
#               0=power-up
#               1=no change
.equ	POWMAN_SEQ_CFG_HW_PWRUP_SRAM1_RESET, 0x0
.equ	POWMAN_SEQ_CFG_HW_PWRUP_SRAM1_BITS, 0x00000001
.equ	POWMAN_SEQ_CFG_HW_PWRUP_SRAM1_MSB, 0
.equ	POWMAN_SEQ_CFG_HW_PWRUP_SRAM1_LSB, 0
# =============================================================================
# Register    : POWMAN_STATE
# Description : This register controls the power state of the 4 power domains.
#               The current power state is indicated in POWMAN_STATE_CURRENT
#               which is read-only.
#               To change the state, write to POWMAN_STATE_REQ.
#               The coding of POWMAN_STATE_CURRENT & POWMAN_STATE_REQ
#               corresponds to the power states
#               defined in the datasheet:
#               bit 3 = SWCORE
#               bit 2 = XIP cache
#               bit 1 = SRAM0
#               bit 0 = SRAM1
#               0 = powered up
#               1 = powered down
#               When POWMAN_STATE_REQ is written, the POWMAN_STATE_WAITING flag
#               is set while the Power Manager determines what is required. If
#               an invalid transition is requested the Power Manager will still
#               register the request in POWMAN_STATE_REQ but will also set the
#               POWMAN_BAD_REQ flag. It will then implement the power-up
#               requests and ignore the power down requests. To do nothing
#               would risk entering an unrecoverable lock-up state. Invalid
#               requests are: any combination of power up and power down
#               requests any request that results in swcore boing powered and
#               xip unpowered If the request is to power down the switched-core
#               domain then POWMAN_STATE_WAITING stays active until the
#               processors halt. During this time the POWMAN_STATE_REQ field
#               can be re-written to change or cancel the request. When the
#               power state transition begins the POWMAN_STATE_WAITING_flag is
#               cleared, the POWMAN_STATE_CHANGING flag is set and POWMAN
#               register writes are ignored until the transition completes.
.equ	POWMAN_STATE_OFFSET, 0x00000038
.equ	POWMAN_STATE_BITS, 0x00003fff
.equ	POWMAN_STATE_RESET, 0x0000000f
# -----------------------------------------------------------------------------
# Field       : POWMAN_STATE_CHANGING
.equ	POWMAN_STATE_CHANGING_RESET, 0x0
.equ	POWMAN_STATE_CHANGING_BITS, 0x00002000
.equ	POWMAN_STATE_CHANGING_MSB, 13
.equ	POWMAN_STATE_CHANGING_LSB, 13
# -----------------------------------------------------------------------------
# Field       : POWMAN_STATE_WAITING
.equ	POWMAN_STATE_WAITING_RESET, 0x0
.equ	POWMAN_STATE_WAITING_BITS, 0x00001000
.equ	POWMAN_STATE_WAITING_MSB, 12
.equ	POWMAN_STATE_WAITING_LSB, 12
# -----------------------------------------------------------------------------
# Field       : POWMAN_STATE_BAD_HW_REQ
# Description : Bad hardware initiated state request. Went back to state 0
#               (i.e. everything powered up)
.equ	POWMAN_STATE_BAD_HW_REQ_RESET, 0x0
.equ	POWMAN_STATE_BAD_HW_REQ_BITS, 0x00000800
.equ	POWMAN_STATE_BAD_HW_REQ_MSB, 11
.equ	POWMAN_STATE_BAD_HW_REQ_LSB, 11
# -----------------------------------------------------------------------------
# Field       : POWMAN_STATE_BAD_SW_REQ
# Description : Bad software initiated state request. No action taken.
.equ	POWMAN_STATE_BAD_SW_REQ_RESET, 0x0
.equ	POWMAN_STATE_BAD_SW_REQ_BITS, 0x00000400
.equ	POWMAN_STATE_BAD_SW_REQ_MSB, 10
.equ	POWMAN_STATE_BAD_SW_REQ_LSB, 10
# -----------------------------------------------------------------------------
# Field       : POWMAN_STATE_PWRUP_WHILE_WAITING
# Description : Request ignored because of a pending pwrup request. See
#               current_pwrup_req. Note this blocks powering up AND powering
#               down.
.equ	POWMAN_STATE_PWRUP_WHILE_WAITING_RESET, 0x0
.equ	POWMAN_STATE_PWRUP_WHILE_WAITING_BITS, 0x00000200
.equ	POWMAN_STATE_PWRUP_WHILE_WAITING_MSB, 9
.equ	POWMAN_STATE_PWRUP_WHILE_WAITING_LSB, 9
# -----------------------------------------------------------------------------
# Field       : POWMAN_STATE_REQ_IGNORED
.equ	POWMAN_STATE_REQ_IGNORED_RESET, 0x0
.equ	POWMAN_STATE_REQ_IGNORED_BITS, 0x00000100
.equ	POWMAN_STATE_REQ_IGNORED_MSB, 8
.equ	POWMAN_STATE_REQ_IGNORED_LSB, 8
# -----------------------------------------------------------------------------
# Field       : POWMAN_STATE_REQ
.equ	POWMAN_STATE_REQ_RESET, 0x0
.equ	POWMAN_STATE_REQ_BITS, 0x000000f0
.equ	POWMAN_STATE_REQ_MSB, 7
.equ	POWMAN_STATE_REQ_LSB, 4
# -----------------------------------------------------------------------------
# Field       : POWMAN_STATE_CURRENT
.equ	POWMAN_STATE_CURRENT_RESET, 0xf
.equ	POWMAN_STATE_CURRENT_BITS, 0x0000000f
.equ	POWMAN_STATE_CURRENT_MSB, 3
.equ	POWMAN_STATE_CURRENT_LSB, 0
# =============================================================================
# Register    : POWMAN_POW_FASTDIV
# Description : None
#               divides the POWMAN clock to provide a tick for the delay module
#               and state machines
#               when clk_pow is running from the slow clock it is not divided
#               when clk_pow is running from the fast clock it is divided by
#               tick_div
.equ	POWMAN_POW_FASTDIV_OFFSET, 0x0000003c
.equ	POWMAN_POW_FASTDIV_BITS, 0x000007ff
.equ	POWMAN_POW_FASTDIV_RESET, 0x00000040
.equ	POWMAN_POW_FASTDIV_MSB, 10
.equ	POWMAN_POW_FASTDIV_LSB, 0
# =============================================================================
# Register    : POWMAN_POW_DELAY
# Description : power state machine delays
.equ	POWMAN_POW_DELAY_OFFSET, 0x00000040
.equ	POWMAN_POW_DELAY_BITS, 0x0000ffff
.equ	POWMAN_POW_DELAY_RESET, 0x00002011
# -----------------------------------------------------------------------------
# Field       : POWMAN_POW_DELAY_SRAM_STEP
# Description : timing between the sram0 and sram1 power state machine steps
#               measured in units of the powman tick period (>=1us), 0 gives a
#               delay of 1 unit
.equ	POWMAN_POW_DELAY_SRAM_STEP_RESET, 0x20
.equ	POWMAN_POW_DELAY_SRAM_STEP_BITS, 0x0000ff00
.equ	POWMAN_POW_DELAY_SRAM_STEP_MSB, 15
.equ	POWMAN_POW_DELAY_SRAM_STEP_LSB, 8
# -----------------------------------------------------------------------------
# Field       : POWMAN_POW_DELAY_XIP_STEP
# Description : timing between the xip power state machine steps
#               measured in units of the lposc period, 0 gives a delay of 1
#               unit
.equ	POWMAN_POW_DELAY_XIP_STEP_RESET, 0x1
.equ	POWMAN_POW_DELAY_XIP_STEP_BITS, 0x000000f0
.equ	POWMAN_POW_DELAY_XIP_STEP_MSB, 7
.equ	POWMAN_POW_DELAY_XIP_STEP_LSB, 4
# -----------------------------------------------------------------------------
# Field       : POWMAN_POW_DELAY_SWCORE_STEP
# Description : timing between the swcore power state machine steps
#               measured in units of the lposc period, 0 gives a delay of 1
#               unit
.equ	POWMAN_POW_DELAY_SWCORE_STEP_RESET, 0x1
.equ	POWMAN_POW_DELAY_SWCORE_STEP_BITS, 0x0000000f
.equ	POWMAN_POW_DELAY_SWCORE_STEP_MSB, 3
.equ	POWMAN_POW_DELAY_SWCORE_STEP_LSB, 0
# =============================================================================
# Register    : POWMAN_EXT_CTRL0
# Description : Configures a gpio as a power mode aware control output
.equ	POWMAN_EXT_CTRL0_OFFSET, 0x00000044
.equ	POWMAN_EXT_CTRL0_BITS, 0x0000713f
.equ	POWMAN_EXT_CTRL0_RESET, 0x0000003f
# -----------------------------------------------------------------------------
# Field       : POWMAN_EXT_CTRL0_LP_EXIT_STATE
# Description : output level when exiting the low power state
.equ	POWMAN_EXT_CTRL0_LP_EXIT_STATE_RESET, 0x0
.equ	POWMAN_EXT_CTRL0_LP_EXIT_STATE_BITS, 0x00004000
.equ	POWMAN_EXT_CTRL0_LP_EXIT_STATE_MSB, 14
.equ	POWMAN_EXT_CTRL0_LP_EXIT_STATE_LSB, 14
# -----------------------------------------------------------------------------
# Field       : POWMAN_EXT_CTRL0_LP_ENTRY_STATE
# Description : output level when entering the low power state
.equ	POWMAN_EXT_CTRL0_LP_ENTRY_STATE_RESET, 0x0
.equ	POWMAN_EXT_CTRL0_LP_ENTRY_STATE_BITS, 0x00002000
.equ	POWMAN_EXT_CTRL0_LP_ENTRY_STATE_MSB, 13
.equ	POWMAN_EXT_CTRL0_LP_ENTRY_STATE_LSB, 13
# -----------------------------------------------------------------------------
# Field       : POWMAN_EXT_CTRL0_INIT_STATE
.equ	POWMAN_EXT_CTRL0_INIT_STATE_RESET, 0x0
.equ	POWMAN_EXT_CTRL0_INIT_STATE_BITS, 0x00001000
.equ	POWMAN_EXT_CTRL0_INIT_STATE_MSB, 12
.equ	POWMAN_EXT_CTRL0_INIT_STATE_LSB, 12
# -----------------------------------------------------------------------------
# Field       : POWMAN_EXT_CTRL0_INIT
.equ	POWMAN_EXT_CTRL0_INIT_RESET, 0x0
.equ	POWMAN_EXT_CTRL0_INIT_BITS, 0x00000100
.equ	POWMAN_EXT_CTRL0_INIT_MSB, 8
.equ	POWMAN_EXT_CTRL0_INIT_LSB, 8
# -----------------------------------------------------------------------------
# Field       : POWMAN_EXT_CTRL0_GPIO_SELECT
# Description : selects from gpio 0->30
#               set to 31 to disable this feature
.equ	POWMAN_EXT_CTRL0_GPIO_SELECT_RESET, 0x3f
.equ	POWMAN_EXT_CTRL0_GPIO_SELECT_BITS, 0x0000003f
.equ	POWMAN_EXT_CTRL0_GPIO_SELECT_MSB, 5
.equ	POWMAN_EXT_CTRL0_GPIO_SELECT_LSB, 0
# =============================================================================
# Register    : POWMAN_EXT_CTRL1
# Description : Configures a gpio as a power mode aware control output
.equ	POWMAN_EXT_CTRL1_OFFSET, 0x00000048
.equ	POWMAN_EXT_CTRL1_BITS, 0x0000713f
.equ	POWMAN_EXT_CTRL1_RESET, 0x0000003f
# -----------------------------------------------------------------------------
# Field       : POWMAN_EXT_CTRL1_LP_EXIT_STATE
# Description : output level when exiting the low power state
.equ	POWMAN_EXT_CTRL1_LP_EXIT_STATE_RESET, 0x0
.equ	POWMAN_EXT_CTRL1_LP_EXIT_STATE_BITS, 0x00004000
.equ	POWMAN_EXT_CTRL1_LP_EXIT_STATE_MSB, 14
.equ	POWMAN_EXT_CTRL1_LP_EXIT_STATE_LSB, 14
# -----------------------------------------------------------------------------
# Field       : POWMAN_EXT_CTRL1_LP_ENTRY_STATE
# Description : output level when entering the low power state
.equ	POWMAN_EXT_CTRL1_LP_ENTRY_STATE_RESET, 0x0
.equ	POWMAN_EXT_CTRL1_LP_ENTRY_STATE_BITS, 0x00002000
.equ	POWMAN_EXT_CTRL1_LP_ENTRY_STATE_MSB, 13
.equ	POWMAN_EXT_CTRL1_LP_ENTRY_STATE_LSB, 13
# -----------------------------------------------------------------------------
# Field       : POWMAN_EXT_CTRL1_INIT_STATE
.equ	POWMAN_EXT_CTRL1_INIT_STATE_RESET, 0x0
.equ	POWMAN_EXT_CTRL1_INIT_STATE_BITS, 0x00001000
.equ	POWMAN_EXT_CTRL1_INIT_STATE_MSB, 12
.equ	POWMAN_EXT_CTRL1_INIT_STATE_LSB, 12
# -----------------------------------------------------------------------------
# Field       : POWMAN_EXT_CTRL1_INIT
.equ	POWMAN_EXT_CTRL1_INIT_RESET, 0x0
.equ	POWMAN_EXT_CTRL1_INIT_BITS, 0x00000100
.equ	POWMAN_EXT_CTRL1_INIT_MSB, 8
.equ	POWMAN_EXT_CTRL1_INIT_LSB, 8
# -----------------------------------------------------------------------------
# Field       : POWMAN_EXT_CTRL1_GPIO_SELECT
# Description : selects from gpio 0->30
#               set to 31 to disable this feature
.equ	POWMAN_EXT_CTRL1_GPIO_SELECT_RESET, 0x3f
.equ	POWMAN_EXT_CTRL1_GPIO_SELECT_BITS, 0x0000003f
.equ	POWMAN_EXT_CTRL1_GPIO_SELECT_MSB, 5
.equ	POWMAN_EXT_CTRL1_GPIO_SELECT_LSB, 0
# =============================================================================
# Register    : POWMAN_EXT_TIME_REF
# Description : Select a GPIO to use as a time reference, the source can be
#               used to drive the low power clock at 32kHz, or to provide a 1ms
#               tick to the timer, or provide a 1Hz tick to the timer. The tick
#               selection is controlled by the POWMAN_TIMER register.
.equ	POWMAN_EXT_TIME_REF_OFFSET, 0x0000004c
.equ	POWMAN_EXT_TIME_REF_BITS, 0x00000013
.equ	POWMAN_EXT_TIME_REF_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : POWMAN_EXT_TIME_REF_DRIVE_LPCK
# Description : Use the selected GPIO to drive the 32kHz low power clock, in
#               place of LPOSC. This field must only be written when
#               POWMAN_TIMER_RUN=0
.equ	POWMAN_EXT_TIME_REF_DRIVE_LPCK_RESET, 0x0
.equ	POWMAN_EXT_TIME_REF_DRIVE_LPCK_BITS, 0x00000010
.equ	POWMAN_EXT_TIME_REF_DRIVE_LPCK_MSB, 4
.equ	POWMAN_EXT_TIME_REF_DRIVE_LPCK_LSB, 4
# -----------------------------------------------------------------------------
# Field       : POWMAN_EXT_TIME_REF_SOURCE_SEL
# Description : 0 ->  gpio12
#               1 ->  gpio20
#               2 ->  gpio14
#               3 ->  gpio22
.equ	POWMAN_EXT_TIME_REF_SOURCE_SEL_RESET, 0x0
.equ	POWMAN_EXT_TIME_REF_SOURCE_SEL_BITS, 0x00000003
.equ	POWMAN_EXT_TIME_REF_SOURCE_SEL_MSB, 1
.equ	POWMAN_EXT_TIME_REF_SOURCE_SEL_LSB, 0
# =============================================================================
# Register    : POWMAN_LPOSC_FREQ_KHZ_INT
# Description : Informs the AON Timer of the integer component of the clock
#               frequency when running off the LPOSC.
#               Integer component of the LPOSC or GPIO clock source frequency
#               in kHz. Default = 32 This field must only be written when
#               POWMAN_TIMER_RUN=0 or POWMAN_TIMER_USING_XOSC=1
.equ	POWMAN_LPOSC_FREQ_KHZ_INT_OFFSET, 0x00000050
.equ	POWMAN_LPOSC_FREQ_KHZ_INT_BITS, 0x0000003f
.equ	POWMAN_LPOSC_FREQ_KHZ_INT_RESET, 0x00000020
.equ	POWMAN_LPOSC_FREQ_KHZ_INT_MSB, 5
.equ	POWMAN_LPOSC_FREQ_KHZ_INT_LSB, 0
# =============================================================================
# Register    : POWMAN_LPOSC_FREQ_KHZ_FRAC
# Description : Informs the AON Timer of the fractional component of the clock
#               frequency when running off the LPOSC.
#               Fractional component of the LPOSC or GPIO clock source
#               frequency in kHz. Default = 0.768 This field must only be
#               written when POWMAN_TIMER_RUN=0 or POWMAN_TIMER_USING_XOSC=1
.equ	POWMAN_LPOSC_FREQ_KHZ_FRAC_OFFSET, 0x00000054
.equ	POWMAN_LPOSC_FREQ_KHZ_FRAC_BITS, 0x0000ffff
.equ	POWMAN_LPOSC_FREQ_KHZ_FRAC_RESET, 0x0000c49c
.equ	POWMAN_LPOSC_FREQ_KHZ_FRAC_MSB, 15
.equ	POWMAN_LPOSC_FREQ_KHZ_FRAC_LSB, 0
# =============================================================================
# Register    : POWMAN_XOSC_FREQ_KHZ_INT
# Description : Informs the AON Timer of the integer component of the clock
#               frequency when running off the XOSC.
#               Integer component of the XOSC frequency in kHz. Default = 12000
#               Must be >1 This field must only be written when
#               POWMAN_TIMER_RUN=0 or POWMAN_TIMER_USING_XOSC=0
.equ	POWMAN_XOSC_FREQ_KHZ_INT_OFFSET, 0x00000058
.equ	POWMAN_XOSC_FREQ_KHZ_INT_BITS, 0x0000ffff
.equ	POWMAN_XOSC_FREQ_KHZ_INT_RESET, 0x00002ee0
.equ	POWMAN_XOSC_FREQ_KHZ_INT_MSB, 15
.equ	POWMAN_XOSC_FREQ_KHZ_INT_LSB, 0
# =============================================================================
# Register    : POWMAN_XOSC_FREQ_KHZ_FRAC
# Description : Informs the AON Timer of the fractional component of the clock
#               frequency when running off the XOSC.
#               Fractional component of the XOSC frequency in kHz. This field
#               must only be written when POWMAN_TIMER_RUN=0 or
#               POWMAN_TIMER_USING_XOSC=0
.equ	POWMAN_XOSC_FREQ_KHZ_FRAC_OFFSET, 0x0000005c
.equ	POWMAN_XOSC_FREQ_KHZ_FRAC_BITS, 0x0000ffff
.equ	POWMAN_XOSC_FREQ_KHZ_FRAC_RESET, 0x00000000
.equ	POWMAN_XOSC_FREQ_KHZ_FRAC_MSB, 15
.equ	POWMAN_XOSC_FREQ_KHZ_FRAC_LSB, 0
# =============================================================================
# Register    : POWMAN_SET_TIME_63TO48
# Description : None
#               For setting the time, do not use for reading the time, use
#               POWMAN_READ_TIME_UPPER and POWMAN_READ_TIME_LOWER. This field
#               must only be written when POWMAN_TIMER_RUN=0
.equ	POWMAN_SET_TIME_63TO48_OFFSET, 0x00000060
.equ	POWMAN_SET_TIME_63TO48_BITS, 0x0000ffff
.equ	POWMAN_SET_TIME_63TO48_RESET, 0x00000000
.equ	POWMAN_SET_TIME_63TO48_MSB, 15
.equ	POWMAN_SET_TIME_63TO48_LSB, 0
# =============================================================================
# Register    : POWMAN_SET_TIME_47TO32
# Description : None
#               For setting the time, do not use for reading the time, use
#               POWMAN_READ_TIME_UPPER and POWMAN_READ_TIME_LOWER. This field
#               must only be written when POWMAN_TIMER_RUN=0
.equ	POWMAN_SET_TIME_47TO32_OFFSET, 0x00000064
.equ	POWMAN_SET_TIME_47TO32_BITS, 0x0000ffff
.equ	POWMAN_SET_TIME_47TO32_RESET, 0x00000000
.equ	POWMAN_SET_TIME_47TO32_MSB, 15
.equ	POWMAN_SET_TIME_47TO32_LSB, 0
# =============================================================================
# Register    : POWMAN_SET_TIME_31TO16
# Description : None
#               For setting the time, do not use for reading the time, use
#               POWMAN_READ_TIME_UPPER and POWMAN_READ_TIME_LOWER. This field
#               must only be written when POWMAN_TIMER_RUN=0
.equ	POWMAN_SET_TIME_31TO16_OFFSET, 0x00000068
.equ	POWMAN_SET_TIME_31TO16_BITS, 0x0000ffff
.equ	POWMAN_SET_TIME_31TO16_RESET, 0x00000000
.equ	POWMAN_SET_TIME_31TO16_MSB, 15
.equ	POWMAN_SET_TIME_31TO16_LSB, 0
# =============================================================================
# Register    : POWMAN_SET_TIME_15TO0
# Description : None
#               For setting the time, do not use for reading the time, use
#               POWMAN_READ_TIME_UPPER and POWMAN_READ_TIME_LOWER. This field
#               must only be written when POWMAN_TIMER_RUN=0
.equ	POWMAN_SET_TIME_15TO0_OFFSET, 0x0000006c
.equ	POWMAN_SET_TIME_15TO0_BITS, 0x0000ffff
.equ	POWMAN_SET_TIME_15TO0_RESET, 0x00000000
.equ	POWMAN_SET_TIME_15TO0_MSB, 15
.equ	POWMAN_SET_TIME_15TO0_LSB, 0
# =============================================================================
# Register    : POWMAN_READ_TIME_UPPER
# Description : None
#               For reading bits 63:32 of the timer. When reading all 64 bits
#               it is possible for the LOWER count to rollover during the read.
#               It is recommended to read UPPER, then LOWER, then re-read UPPER
#               and, if it has changed, re-read LOWER.
.equ	POWMAN_READ_TIME_UPPER_OFFSET, 0x00000070
.equ	POWMAN_READ_TIME_UPPER_BITS, 0xffffffff
.equ	POWMAN_READ_TIME_UPPER_RESET, 0x00000000
.equ	POWMAN_READ_TIME_UPPER_MSB, 31
.equ	POWMAN_READ_TIME_UPPER_LSB, 0
# =============================================================================
# Register    : POWMAN_READ_TIME_LOWER
# Description : None
#               For reading bits 31:0 of the timer.
.equ	POWMAN_READ_TIME_LOWER_OFFSET, 0x00000074
.equ	POWMAN_READ_TIME_LOWER_BITS, 0xffffffff
.equ	POWMAN_READ_TIME_LOWER_RESET, 0x00000000
.equ	POWMAN_READ_TIME_LOWER_MSB, 31
.equ	POWMAN_READ_TIME_LOWER_LSB, 0
# =============================================================================
# Register    : POWMAN_ALARM_TIME_63TO48
# Description : None
#               This field must only be written when POWMAN_ALARM_ENAB=0
.equ	POWMAN_ALARM_TIME_63TO48_OFFSET, 0x00000078
.equ	POWMAN_ALARM_TIME_63TO48_BITS, 0x0000ffff
.equ	POWMAN_ALARM_TIME_63TO48_RESET, 0x00000000
.equ	POWMAN_ALARM_TIME_63TO48_MSB, 15
.equ	POWMAN_ALARM_TIME_63TO48_LSB, 0
# =============================================================================
# Register    : POWMAN_ALARM_TIME_47TO32
# Description : None
#               This field must only be written when POWMAN_ALARM_ENAB=0
.equ	POWMAN_ALARM_TIME_47TO32_OFFSET, 0x0000007c
.equ	POWMAN_ALARM_TIME_47TO32_BITS, 0x0000ffff
.equ	POWMAN_ALARM_TIME_47TO32_RESET, 0x00000000
.equ	POWMAN_ALARM_TIME_47TO32_MSB, 15
.equ	POWMAN_ALARM_TIME_47TO32_LSB, 0
# =============================================================================
# Register    : POWMAN_ALARM_TIME_31TO16
# Description : None
#               This field must only be written when POWMAN_ALARM_ENAB=0
.equ	POWMAN_ALARM_TIME_31TO16_OFFSET, 0x00000080
.equ	POWMAN_ALARM_TIME_31TO16_BITS, 0x0000ffff
.equ	POWMAN_ALARM_TIME_31TO16_RESET, 0x00000000
.equ	POWMAN_ALARM_TIME_31TO16_MSB, 15
.equ	POWMAN_ALARM_TIME_31TO16_LSB, 0
# =============================================================================
# Register    : POWMAN_ALARM_TIME_15TO0
# Description : None
#               This field must only be written when POWMAN_ALARM_ENAB=0
.equ	POWMAN_ALARM_TIME_15TO0_OFFSET, 0x00000084
.equ	POWMAN_ALARM_TIME_15TO0_BITS, 0x0000ffff
.equ	POWMAN_ALARM_TIME_15TO0_RESET, 0x00000000
.equ	POWMAN_ALARM_TIME_15TO0_MSB, 15
.equ	POWMAN_ALARM_TIME_15TO0_LSB, 0
# =============================================================================
# Register    : POWMAN_TIMER
.equ	POWMAN_TIMER_OFFSET, 0x00000088
.equ	POWMAN_TIMER_BITS, 0x000f2777
.equ	POWMAN_TIMER_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : POWMAN_TIMER_USING_GPIO_1HZ
# Description : Timer is synchronised to a 1hz gpio source
.equ	POWMAN_TIMER_USING_GPIO_1HZ_RESET, 0x0
.equ	POWMAN_TIMER_USING_GPIO_1HZ_BITS, 0x00080000
.equ	POWMAN_TIMER_USING_GPIO_1HZ_MSB, 19
.equ	POWMAN_TIMER_USING_GPIO_1HZ_LSB, 19
# -----------------------------------------------------------------------------
# Field       : POWMAN_TIMER_USING_GPIO_1KHZ
# Description : Timer is running from a 1khz gpio source
.equ	POWMAN_TIMER_USING_GPIO_1KHZ_RESET, 0x0
.equ	POWMAN_TIMER_USING_GPIO_1KHZ_BITS, 0x00040000
.equ	POWMAN_TIMER_USING_GPIO_1KHZ_MSB, 18
.equ	POWMAN_TIMER_USING_GPIO_1KHZ_LSB, 18
# -----------------------------------------------------------------------------
# Field       : POWMAN_TIMER_USING_LPOSC
# Description : Timer is running from lposc
.equ	POWMAN_TIMER_USING_LPOSC_RESET, 0x0
.equ	POWMAN_TIMER_USING_LPOSC_BITS, 0x00020000
.equ	POWMAN_TIMER_USING_LPOSC_MSB, 17
.equ	POWMAN_TIMER_USING_LPOSC_LSB, 17
# -----------------------------------------------------------------------------
# Field       : POWMAN_TIMER_USING_XOSC
# Description : Timer is running from xosc
.equ	POWMAN_TIMER_USING_XOSC_RESET, 0x0
.equ	POWMAN_TIMER_USING_XOSC_BITS, 0x00010000
.equ	POWMAN_TIMER_USING_XOSC_MSB, 16
.equ	POWMAN_TIMER_USING_XOSC_LSB, 16
# -----------------------------------------------------------------------------
# Field       : POWMAN_TIMER_USE_GPIO_1HZ
# Description : Selects the gpio source as the reference for the sec counter.
#               The msec counter will continue to use the lposc or xosc
#               reference.
.equ	POWMAN_TIMER_USE_GPIO_1HZ_RESET, 0x0
.equ	POWMAN_TIMER_USE_GPIO_1HZ_BITS, 0x00002000
.equ	POWMAN_TIMER_USE_GPIO_1HZ_MSB, 13
.equ	POWMAN_TIMER_USE_GPIO_1HZ_LSB, 13
# -----------------------------------------------------------------------------
# Field       : POWMAN_TIMER_USE_GPIO_1KHZ
# Description : switch to gpio as the source of the 1kHz timer tick
.equ	POWMAN_TIMER_USE_GPIO_1KHZ_RESET, 0x0
.equ	POWMAN_TIMER_USE_GPIO_1KHZ_BITS, 0x00000400
.equ	POWMAN_TIMER_USE_GPIO_1KHZ_MSB, 10
.equ	POWMAN_TIMER_USE_GPIO_1KHZ_LSB, 10
# -----------------------------------------------------------------------------
# Field       : POWMAN_TIMER_USE_XOSC
# Description : switch to xosc as the source of the 1kHz timer tick
.equ	POWMAN_TIMER_USE_XOSC_RESET, 0x0
.equ	POWMAN_TIMER_USE_XOSC_BITS, 0x00000200
.equ	POWMAN_TIMER_USE_XOSC_MSB, 9
.equ	POWMAN_TIMER_USE_XOSC_LSB, 9
# -----------------------------------------------------------------------------
# Field       : POWMAN_TIMER_USE_LPOSC
# Description : Switch to lposc as the source of the 1kHz timer tick
.equ	POWMAN_TIMER_USE_LPOSC_RESET, 0x0
.equ	POWMAN_TIMER_USE_LPOSC_BITS, 0x00000100
.equ	POWMAN_TIMER_USE_LPOSC_MSB, 8
.equ	POWMAN_TIMER_USE_LPOSC_LSB, 8
# -----------------------------------------------------------------------------
# Field       : POWMAN_TIMER_ALARM
# Description : Alarm has fired. Write to 1 to clear the alarm.
.equ	POWMAN_TIMER_ALARM_RESET, 0x0
.equ	POWMAN_TIMER_ALARM_BITS, 0x00000040
.equ	POWMAN_TIMER_ALARM_MSB, 6
.equ	POWMAN_TIMER_ALARM_LSB, 6
# -----------------------------------------------------------------------------
# Field       : POWMAN_TIMER_PWRUP_ON_ALARM
# Description : Alarm wakes the chip from low power mode
.equ	POWMAN_TIMER_PWRUP_ON_ALARM_RESET, 0x0
.equ	POWMAN_TIMER_PWRUP_ON_ALARM_BITS, 0x00000020
.equ	POWMAN_TIMER_PWRUP_ON_ALARM_MSB, 5
.equ	POWMAN_TIMER_PWRUP_ON_ALARM_LSB, 5
# -----------------------------------------------------------------------------
# Field       : POWMAN_TIMER_ALARM_ENAB
# Description : Enables the alarm. The alarm must be disabled while writing the
#               alarm time.
.equ	POWMAN_TIMER_ALARM_ENAB_RESET, 0x0
.equ	POWMAN_TIMER_ALARM_ENAB_BITS, 0x00000010
.equ	POWMAN_TIMER_ALARM_ENAB_MSB, 4
.equ	POWMAN_TIMER_ALARM_ENAB_LSB, 4
# -----------------------------------------------------------------------------
# Field       : POWMAN_TIMER_CLEAR
# Description : Clears the timer, does not disable the timer and does not
#               affect the alarm. This control can be written at any time.
.equ	POWMAN_TIMER_CLEAR_RESET, 0x0
.equ	POWMAN_TIMER_CLEAR_BITS, 0x00000004
.equ	POWMAN_TIMER_CLEAR_MSB, 2
.equ	POWMAN_TIMER_CLEAR_LSB, 2
# -----------------------------------------------------------------------------
# Field       : POWMAN_TIMER_RUN
# Description : Timer enable. Setting this bit causes the timer to begin
#               counting up from its current value. Clearing this bit stops the
#               timer from counting.
#
#               Before enabling the timer, set the POWMAN_LPOSC_FREQ* and
#               POWMAN_XOSC_FREQ* registers to configure the count rate, and
#               initialise the current time by writing to SET_TIME_63TO48
#               through SET_TIME_15TO0. You must not write to the SET_TIME_x
#               registers when the timer is running.
#
#               Once configured, start the timer by setting POWMAN_TIMER_RUN=1.
#               This will start the timer running from the LPOSC. When the XOSC
#               is available switch the reference clock to XOSC then select it
#               as the timer clock by setting POWMAN_TIMER_USE_XOSC=1
.equ	POWMAN_TIMER_RUN_RESET, 0x0
.equ	POWMAN_TIMER_RUN_BITS, 0x00000002
.equ	POWMAN_TIMER_RUN_MSB, 1
.equ	POWMAN_TIMER_RUN_LSB, 1
# -----------------------------------------------------------------------------
# Field       : POWMAN_TIMER_NONSEC_WRITE
# Description : Control whether Non-secure software can write to the timer
#               registers. All other registers are hardwired to be inaccessible
#               to Non-secure.
.equ	POWMAN_TIMER_NONSEC_WRITE_RESET, 0x0
.equ	POWMAN_TIMER_NONSEC_WRITE_BITS, 0x00000001
.equ	POWMAN_TIMER_NONSEC_WRITE_MSB, 0
.equ	POWMAN_TIMER_NONSEC_WRITE_LSB, 0
# =============================================================================
# Register    : POWMAN_PWRUP0
# Description : 4 GPIO powerup events can be configured to wake the chip up
#               from a low power state.
#               The pwrups are level/edge sensitive and can be set to trigger
#               on a high/rising or low/falling event
#               The number of gpios available depends on the package option. An
#               invalid selection will be ignored
#               source = 0 selects gpio0
#               .
#               .
#               source = 47 selects gpio47
#               source = 48 selects qspi_ss
#               source = 49 selects qspi_sd0
#               source = 50 selects qspi_sd1
#               source = 51 selects qspi_sd2
#               source = 52 selects qspi_sd3
#               source = 53 selects qspi_sclk
#               level  = 0 triggers the pwrup when the source is low
#               level  = 1 triggers the pwrup when the source is high
.equ	POWMAN_PWRUP0_OFFSET, 0x0000008c
.equ	POWMAN_PWRUP0_BITS, 0x000007ff
.equ	POWMAN_PWRUP0_RESET, 0x0000003f
# -----------------------------------------------------------------------------
# Field       : POWMAN_PWRUP0_RAW_STATUS
# Description : Value of selected gpio pin (only if enable == 1)
.equ	POWMAN_PWRUP0_RAW_STATUS_RESET, 0x0
.equ	POWMAN_PWRUP0_RAW_STATUS_BITS, 0x00000400
.equ	POWMAN_PWRUP0_RAW_STATUS_MSB, 10
.equ	POWMAN_PWRUP0_RAW_STATUS_LSB, 10
# -----------------------------------------------------------------------------
# Field       : POWMAN_PWRUP0_STATUS
# Description : Status of gpio wakeup. Write to 1 to clear a latched edge
#               detect.
.equ	POWMAN_PWRUP0_STATUS_RESET, 0x0
.equ	POWMAN_PWRUP0_STATUS_BITS, 0x00000200
.equ	POWMAN_PWRUP0_STATUS_MSB, 9
.equ	POWMAN_PWRUP0_STATUS_LSB, 9
# -----------------------------------------------------------------------------
# Field       : POWMAN_PWRUP0_MODE
# Description : Edge or level detect. Edge will detect a 0 to 1 transition (or
#               1 to 0 transition). Level will detect a 1 or 0. Both types of
#               event get latched into the current_pwrup_req register.
#               0x0 -> level
#               0x1 -> edge
.equ	POWMAN_PWRUP0_MODE_RESET, 0x0
.equ	POWMAN_PWRUP0_MODE_BITS, 0x00000100
.equ	POWMAN_PWRUP0_MODE_MSB, 8
.equ	POWMAN_PWRUP0_MODE_LSB, 8
.equ	POWMAN_PWRUP0_MODE_VALUE_LEVEL, 0x0
.equ	POWMAN_PWRUP0_MODE_VALUE_EDGE, 0x1
# -----------------------------------------------------------------------------
# Field       : POWMAN_PWRUP0_DIRECTION
#               0x0 -> low_falling
#               0x1 -> high_rising
.equ	POWMAN_PWRUP0_DIRECTION_RESET, 0x0
.equ	POWMAN_PWRUP0_DIRECTION_BITS, 0x00000080
.equ	POWMAN_PWRUP0_DIRECTION_MSB, 7
.equ	POWMAN_PWRUP0_DIRECTION_LSB, 7
.equ	POWMAN_PWRUP0_DIRECTION_VALUE_LOW_FALLING, 0x0
.equ	POWMAN_PWRUP0_DIRECTION_VALUE_HIGH_RISING, 0x1
# -----------------------------------------------------------------------------
# Field       : POWMAN_PWRUP0_ENABLE
# Description : Set to 1 to enable the wakeup source. Set to 0 to disable the
#               wakeup source and clear a pending wakeup event.
#               If using edge detect a latched edge needs to be cleared by
#               writing 1 to the status register also.
.equ	POWMAN_PWRUP0_ENABLE_RESET, 0x0
.equ	POWMAN_PWRUP0_ENABLE_BITS, 0x00000040
.equ	POWMAN_PWRUP0_ENABLE_MSB, 6
.equ	POWMAN_PWRUP0_ENABLE_LSB, 6
# -----------------------------------------------------------------------------
# Field       : POWMAN_PWRUP0_SOURCE
.equ	POWMAN_PWRUP0_SOURCE_RESET, 0x3f
.equ	POWMAN_PWRUP0_SOURCE_BITS, 0x0000003f
.equ	POWMAN_PWRUP0_SOURCE_MSB, 5
.equ	POWMAN_PWRUP0_SOURCE_LSB, 0
# =============================================================================
# Register    : POWMAN_PWRUP1
# Description : 4 GPIO powerup events can be configured to wake the chip up
#               from a low power state.
#               The pwrups are level/edge sensitive and can be set to trigger
#               on a high/rising or low/falling event
#               The number of gpios available depends on the package option. An
#               invalid selection will be ignored
#               source = 0 selects gpio0
#               .
#               .
#               source = 47 selects gpio47
#               source = 48 selects qspi_ss
#               source = 49 selects qspi_sd0
#               source = 50 selects qspi_sd1
#               source = 51 selects qspi_sd2
#               source = 52 selects qspi_sd3
#               source = 53 selects qspi_sclk
#               level  = 0 triggers the pwrup when the source is low
#               level  = 1 triggers the pwrup when the source is high
.equ	POWMAN_PWRUP1_OFFSET, 0x00000090
.equ	POWMAN_PWRUP1_BITS, 0x000007ff
.equ	POWMAN_PWRUP1_RESET, 0x0000003f
# -----------------------------------------------------------------------------
# Field       : POWMAN_PWRUP1_RAW_STATUS
# Description : Value of selected gpio pin (only if enable == 1)
.equ	POWMAN_PWRUP1_RAW_STATUS_RESET, 0x0
.equ	POWMAN_PWRUP1_RAW_STATUS_BITS, 0x00000400
.equ	POWMAN_PWRUP1_RAW_STATUS_MSB, 10
.equ	POWMAN_PWRUP1_RAW_STATUS_LSB, 10
# -----------------------------------------------------------------------------
# Field       : POWMAN_PWRUP1_STATUS
# Description : Status of gpio wakeup. Write to 1 to clear a latched edge
#               detect.
.equ	POWMAN_PWRUP1_STATUS_RESET, 0x0
.equ	POWMAN_PWRUP1_STATUS_BITS, 0x00000200
.equ	POWMAN_PWRUP1_STATUS_MSB, 9
.equ	POWMAN_PWRUP1_STATUS_LSB, 9
# -----------------------------------------------------------------------------
# Field       : POWMAN_PWRUP1_MODE
# Description : Edge or level detect. Edge will detect a 0 to 1 transition (or
#               1 to 0 transition). Level will detect a 1 or 0. Both types of
#               event get latched into the current_pwrup_req register.
#               0x0 -> level
#               0x1 -> edge
.equ	POWMAN_PWRUP1_MODE_RESET, 0x0
.equ	POWMAN_PWRUP1_MODE_BITS, 0x00000100
.equ	POWMAN_PWRUP1_MODE_MSB, 8
.equ	POWMAN_PWRUP1_MODE_LSB, 8
.equ	POWMAN_PWRUP1_MODE_VALUE_LEVEL, 0x0
.equ	POWMAN_PWRUP1_MODE_VALUE_EDGE, 0x1
# -----------------------------------------------------------------------------
# Field       : POWMAN_PWRUP1_DIRECTION
#               0x0 -> low_falling
#               0x1 -> high_rising
.equ	POWMAN_PWRUP1_DIRECTION_RESET, 0x0
.equ	POWMAN_PWRUP1_DIRECTION_BITS, 0x00000080
.equ	POWMAN_PWRUP1_DIRECTION_MSB, 7
.equ	POWMAN_PWRUP1_DIRECTION_LSB, 7
.equ	POWMAN_PWRUP1_DIRECTION_VALUE_LOW_FALLING, 0x0
.equ	POWMAN_PWRUP1_DIRECTION_VALUE_HIGH_RISING, 0x1
# -----------------------------------------------------------------------------
# Field       : POWMAN_PWRUP1_ENABLE
# Description : Set to 1 to enable the wakeup source. Set to 0 to disable the
#               wakeup source and clear a pending wakeup event.
#               If using edge detect a latched edge needs to be cleared by
#               writing 1 to the status register also.
.equ	POWMAN_PWRUP1_ENABLE_RESET, 0x0
.equ	POWMAN_PWRUP1_ENABLE_BITS, 0x00000040
.equ	POWMAN_PWRUP1_ENABLE_MSB, 6
.equ	POWMAN_PWRUP1_ENABLE_LSB, 6
# -----------------------------------------------------------------------------
# Field       : POWMAN_PWRUP1_SOURCE
.equ	POWMAN_PWRUP1_SOURCE_RESET, 0x3f
.equ	POWMAN_PWRUP1_SOURCE_BITS, 0x0000003f
.equ	POWMAN_PWRUP1_SOURCE_MSB, 5
.equ	POWMAN_PWRUP1_SOURCE_LSB, 0
# =============================================================================
# Register    : POWMAN_PWRUP2
# Description : 4 GPIO powerup events can be configured to wake the chip up
#               from a low power state.
#               The pwrups are level/edge sensitive and can be set to trigger
#               on a high/rising or low/falling event
#               The number of gpios available depends on the package option. An
#               invalid selection will be ignored
#               source = 0 selects gpio0
#               .
#               .
#               source = 47 selects gpio47
#               source = 48 selects qspi_ss
#               source = 49 selects qspi_sd0
#               source = 50 selects qspi_sd1
#               source = 51 selects qspi_sd2
#               source = 52 selects qspi_sd3
#               source = 53 selects qspi_sclk
#               level  = 0 triggers the pwrup when the source is low
#               level  = 1 triggers the pwrup when the source is high
.equ	POWMAN_PWRUP2_OFFSET, 0x00000094
.equ	POWMAN_PWRUP2_BITS, 0x000007ff
.equ	POWMAN_PWRUP2_RESET, 0x0000003f
# -----------------------------------------------------------------------------
# Field       : POWMAN_PWRUP2_RAW_STATUS
# Description : Value of selected gpio pin (only if enable == 1)
.equ	POWMAN_PWRUP2_RAW_STATUS_RESET, 0x0
.equ	POWMAN_PWRUP2_RAW_STATUS_BITS, 0x00000400
.equ	POWMAN_PWRUP2_RAW_STATUS_MSB, 10
.equ	POWMAN_PWRUP2_RAW_STATUS_LSB, 10
# -----------------------------------------------------------------------------
# Field       : POWMAN_PWRUP2_STATUS
# Description : Status of gpio wakeup. Write to 1 to clear a latched edge
#               detect.
.equ	POWMAN_PWRUP2_STATUS_RESET, 0x0
.equ	POWMAN_PWRUP2_STATUS_BITS, 0x00000200
.equ	POWMAN_PWRUP2_STATUS_MSB, 9
.equ	POWMAN_PWRUP2_STATUS_LSB, 9
# -----------------------------------------------------------------------------
# Field       : POWMAN_PWRUP2_MODE
# Description : Edge or level detect. Edge will detect a 0 to 1 transition (or
#               1 to 0 transition). Level will detect a 1 or 0. Both types of
#               event get latched into the current_pwrup_req register.
#               0x0 -> level
#               0x1 -> edge
.equ	POWMAN_PWRUP2_MODE_RESET, 0x0
.equ	POWMAN_PWRUP2_MODE_BITS, 0x00000100
.equ	POWMAN_PWRUP2_MODE_MSB, 8
.equ	POWMAN_PWRUP2_MODE_LSB, 8
.equ	POWMAN_PWRUP2_MODE_VALUE_LEVEL, 0x0
.equ	POWMAN_PWRUP2_MODE_VALUE_EDGE, 0x1
# -----------------------------------------------------------------------------
# Field       : POWMAN_PWRUP2_DIRECTION
#               0x0 -> low_falling
#               0x1 -> high_rising
.equ	POWMAN_PWRUP2_DIRECTION_RESET, 0x0
.equ	POWMAN_PWRUP2_DIRECTION_BITS, 0x00000080
.equ	POWMAN_PWRUP2_DIRECTION_MSB, 7
.equ	POWMAN_PWRUP2_DIRECTION_LSB, 7
.equ	POWMAN_PWRUP2_DIRECTION_VALUE_LOW_FALLING, 0x0
.equ	POWMAN_PWRUP2_DIRECTION_VALUE_HIGH_RISING, 0x1
# -----------------------------------------------------------------------------
# Field       : POWMAN_PWRUP2_ENABLE
# Description : Set to 1 to enable the wakeup source. Set to 0 to disable the
#               wakeup source and clear a pending wakeup event.
#               If using edge detect a latched edge needs to be cleared by
#               writing 1 to the status register also.
.equ	POWMAN_PWRUP2_ENABLE_RESET, 0x0
.equ	POWMAN_PWRUP2_ENABLE_BITS, 0x00000040
.equ	POWMAN_PWRUP2_ENABLE_MSB, 6
.equ	POWMAN_PWRUP2_ENABLE_LSB, 6
# -----------------------------------------------------------------------------
# Field       : POWMAN_PWRUP2_SOURCE
.equ	POWMAN_PWRUP2_SOURCE_RESET, 0x3f
.equ	POWMAN_PWRUP2_SOURCE_BITS, 0x0000003f
.equ	POWMAN_PWRUP2_SOURCE_MSB, 5
.equ	POWMAN_PWRUP2_SOURCE_LSB, 0
# =============================================================================
# Register    : POWMAN_PWRUP3
# Description : 4 GPIO powerup events can be configured to wake the chip up
#               from a low power state.
#               The pwrups are level/edge sensitive and can be set to trigger
#               on a high/rising or low/falling event
#               The number of gpios available depends on the package option. An
#               invalid selection will be ignored
#               source = 0 selects gpio0
#               .
#               .
#               source = 47 selects gpio47
#               source = 48 selects qspi_ss
#               source = 49 selects qspi_sd0
#               source = 50 selects qspi_sd1
#               source = 51 selects qspi_sd2
#               source = 52 selects qspi_sd3
#               source = 53 selects qspi_sclk
#               level  = 0 triggers the pwrup when the source is low
#               level  = 1 triggers the pwrup when the source is high
.equ	POWMAN_PWRUP3_OFFSET, 0x00000098
.equ	POWMAN_PWRUP3_BITS, 0x000007ff
.equ	POWMAN_PWRUP3_RESET, 0x0000003f
# -----------------------------------------------------------------------------
# Field       : POWMAN_PWRUP3_RAW_STATUS
# Description : Value of selected gpio pin (only if enable == 1)
.equ	POWMAN_PWRUP3_RAW_STATUS_RESET, 0x0
.equ	POWMAN_PWRUP3_RAW_STATUS_BITS, 0x00000400
.equ	POWMAN_PWRUP3_RAW_STATUS_MSB, 10
.equ	POWMAN_PWRUP3_RAW_STATUS_LSB, 10
# -----------------------------------------------------------------------------
# Field       : POWMAN_PWRUP3_STATUS
# Description : Status of gpio wakeup. Write to 1 to clear a latched edge
#               detect.
.equ	POWMAN_PWRUP3_STATUS_RESET, 0x0
.equ	POWMAN_PWRUP3_STATUS_BITS, 0x00000200
.equ	POWMAN_PWRUP3_STATUS_MSB, 9
.equ	POWMAN_PWRUP3_STATUS_LSB, 9
# -----------------------------------------------------------------------------
# Field       : POWMAN_PWRUP3_MODE
# Description : Edge or level detect. Edge will detect a 0 to 1 transition (or
#               1 to 0 transition). Level will detect a 1 or 0. Both types of
#               event get latched into the current_pwrup_req register.
#               0x0 -> level
#               0x1 -> edge
.equ	POWMAN_PWRUP3_MODE_RESET, 0x0
.equ	POWMAN_PWRUP3_MODE_BITS, 0x00000100
.equ	POWMAN_PWRUP3_MODE_MSB, 8
.equ	POWMAN_PWRUP3_MODE_LSB, 8
.equ	POWMAN_PWRUP3_MODE_VALUE_LEVEL, 0x0
.equ	POWMAN_PWRUP3_MODE_VALUE_EDGE, 0x1
# -----------------------------------------------------------------------------
# Field       : POWMAN_PWRUP3_DIRECTION
#               0x0 -> low_falling
#               0x1 -> high_rising
.equ	POWMAN_PWRUP3_DIRECTION_RESET, 0x0
.equ	POWMAN_PWRUP3_DIRECTION_BITS, 0x00000080
.equ	POWMAN_PWRUP3_DIRECTION_MSB, 7
.equ	POWMAN_PWRUP3_DIRECTION_LSB, 7
.equ	POWMAN_PWRUP3_DIRECTION_VALUE_LOW_FALLING, 0x0
.equ	POWMAN_PWRUP3_DIRECTION_VALUE_HIGH_RISING, 0x1
# -----------------------------------------------------------------------------
# Field       : POWMAN_PWRUP3_ENABLE
# Description : Set to 1 to enable the wakeup source. Set to 0 to disable the
#               wakeup source and clear a pending wakeup event.
#               If using edge detect a latched edge needs to be cleared by
#               writing 1 to the status register also.
.equ	POWMAN_PWRUP3_ENABLE_RESET, 0x0
.equ	POWMAN_PWRUP3_ENABLE_BITS, 0x00000040
.equ	POWMAN_PWRUP3_ENABLE_MSB, 6
.equ	POWMAN_PWRUP3_ENABLE_LSB, 6
# -----------------------------------------------------------------------------
# Field       : POWMAN_PWRUP3_SOURCE
.equ	POWMAN_PWRUP3_SOURCE_RESET, 0x3f
.equ	POWMAN_PWRUP3_SOURCE_BITS, 0x0000003f
.equ	POWMAN_PWRUP3_SOURCE_MSB, 5
.equ	POWMAN_PWRUP3_SOURCE_LSB, 0
# =============================================================================
# Register    : POWMAN_CURRENT_PWRUP_REQ
# Description : Indicates current powerup request state
#               pwrup events can be cleared by removing the enable from the
#               pwrup register. The alarm pwrup req can be cleared by clearing
#               timer.alarm_enab
#               0 = chip reset, for the source of the last reset see
#               POWMAN_CHIP_RESET
#               1 = pwrup0
#               2 = pwrup1
#               3 = pwrup2
#               4 = pwrup3
#               5 = coresight_pwrup
#               6 = alarm_pwrup
.equ	POWMAN_CURRENT_PWRUP_REQ_OFFSET, 0x0000009c
.equ	POWMAN_CURRENT_PWRUP_REQ_BITS, 0x0000007f
.equ	POWMAN_CURRENT_PWRUP_REQ_RESET, 0x00000000
.equ	POWMAN_CURRENT_PWRUP_REQ_MSB, 6
.equ	POWMAN_CURRENT_PWRUP_REQ_LSB, 0
# =============================================================================
# Register    : POWMAN_LAST_SWCORE_PWRUP
# Description : Indicates which pwrup source triggered the last switched-core
#               power up
#               0 = chip reset, for the source of the last reset see
#               POWMAN_CHIP_RESET
#               1 = pwrup0
#               2 = pwrup1
#               3 = pwrup2
#               4 = pwrup3
#               5 = coresight_pwrup
#               6 = alarm_pwrup
.equ	POWMAN_LAST_SWCORE_PWRUP_OFFSET, 0x000000a0
.equ	POWMAN_LAST_SWCORE_PWRUP_BITS, 0x0000007f
.equ	POWMAN_LAST_SWCORE_PWRUP_RESET, 0x00000000
.equ	POWMAN_LAST_SWCORE_PWRUP_MSB, 6
.equ	POWMAN_LAST_SWCORE_PWRUP_LSB, 0
# =============================================================================
# Register    : POWMAN_DBG_PWRCFG
.equ	POWMAN_DBG_PWRCFG_OFFSET, 0x000000a4
.equ	POWMAN_DBG_PWRCFG_BITS, 0x00000001
.equ	POWMAN_DBG_PWRCFG_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : POWMAN_DBG_PWRCFG_IGNORE
# Description : Ignore pwrup req from debugger. If pwrup req is asserted then
#               this will prevent power down and set powerdown blocked. Set
#               ignore to stop paying attention to pwrup_req
.equ	POWMAN_DBG_PWRCFG_IGNORE_RESET, 0x0
.equ	POWMAN_DBG_PWRCFG_IGNORE_BITS, 0x00000001
.equ	POWMAN_DBG_PWRCFG_IGNORE_MSB, 0
.equ	POWMAN_DBG_PWRCFG_IGNORE_LSB, 0
# =============================================================================
# Register    : POWMAN_BOOTDIS
# Description : Tell the bootrom to ignore the BOOT0..3 registers following the
#               next RSM reset (e.g. the next core power down/up).
#
#               If an early boot stage has soft-locked some OTP pages in order
#               to protect their contents from later stages, there is a risk
#               that Secure code running at a later stage can unlock the pages
#               by powering the core up and down.
#
#               This register can be used to ensure that the bootloader runs as
#               normal on the next power up, preventing Secure code at a later
#               stage from accessing OTP in its unlocked state.
#
#               Should be used in conjunction with the OTP BOOTDIS register.
.equ	POWMAN_BOOTDIS_OFFSET, 0x000000a8
.equ	POWMAN_BOOTDIS_BITS, 0x00000003
.equ	POWMAN_BOOTDIS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : POWMAN_BOOTDIS_NEXT
# Description : This flag always ORs writes into its current contents. It can
#               be set but not cleared by software.
#
#               The BOOTDIS_NEXT bit is OR'd into the BOOTDIS_NOW bit when the
#               core is powered down. Simultaneously, the BOOTDIS_NEXT bit is
#               cleared. Setting this bit means that the BOOT0..3 registers
#               will be ignored following the next reset of the RSM by powman.
#
#               This flag should be set by an early boot stage that has soft-
#               locked OTP pages, to prevent later stages from unlocking it by
#               power cycling.
.equ	POWMAN_BOOTDIS_NEXT_RESET, 0x0
.equ	POWMAN_BOOTDIS_NEXT_BITS, 0x00000002
.equ	POWMAN_BOOTDIS_NEXT_MSB, 1
.equ	POWMAN_BOOTDIS_NEXT_LSB, 1
# -----------------------------------------------------------------------------
# Field       : POWMAN_BOOTDIS_NOW
# Description : When powman resets the RSM, the current value of BOOTDIS_NEXT
#               is OR'd into BOOTDIS_NOW, and BOOTDIS_NEXT is cleared.
#
#               The bootrom checks this flag before reading the BOOT0..3
#               registers. If it is set, the bootrom clears it, and ignores the
#               BOOT registers. This prevents Secure software from diverting
#               the boot path before a bootloader has had the chance to soft
#               lock OTP pages containing sensitive data.
.equ	POWMAN_BOOTDIS_NOW_RESET, 0x0
.equ	POWMAN_BOOTDIS_NOW_BITS, 0x00000001
.equ	POWMAN_BOOTDIS_NOW_MSB, 0
.equ	POWMAN_BOOTDIS_NOW_LSB, 0
# =============================================================================
# Register    : POWMAN_DBGCONFIG
.equ	POWMAN_DBGCONFIG_OFFSET, 0x000000ac
.equ	POWMAN_DBGCONFIG_BITS, 0x0000000f
.equ	POWMAN_DBGCONFIG_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : POWMAN_DBGCONFIG_DP_INSTID
# Description : Configure DP instance ID for SWD multidrop selection.
#               Recommend that this is NOT changed until you require debug
#               access in multi-chip environment
.equ	POWMAN_DBGCONFIG_DP_INSTID_RESET, 0x0
.equ	POWMAN_DBGCONFIG_DP_INSTID_BITS, 0x0000000f
.equ	POWMAN_DBGCONFIG_DP_INSTID_MSB, 3
.equ	POWMAN_DBGCONFIG_DP_INSTID_LSB, 0
# =============================================================================
# Register    : POWMAN_SCRATCH0
# Description : Scratch register. Information persists in low power mode
.equ	POWMAN_SCRATCH0_OFFSET, 0x000000b0
.equ	POWMAN_SCRATCH0_BITS, 0xffffffff
.equ	POWMAN_SCRATCH0_RESET, 0x00000000
.equ	POWMAN_SCRATCH0_MSB, 31
.equ	POWMAN_SCRATCH0_LSB, 0
# =============================================================================
# Register    : POWMAN_SCRATCH1
# Description : Scratch register. Information persists in low power mode
.equ	POWMAN_SCRATCH1_OFFSET, 0x000000b4
.equ	POWMAN_SCRATCH1_BITS, 0xffffffff
.equ	POWMAN_SCRATCH1_RESET, 0x00000000
.equ	POWMAN_SCRATCH1_MSB, 31
.equ	POWMAN_SCRATCH1_LSB, 0
# =============================================================================
# Register    : POWMAN_SCRATCH2
# Description : Scratch register. Information persists in low power mode
.equ	POWMAN_SCRATCH2_OFFSET, 0x000000b8
.equ	POWMAN_SCRATCH2_BITS, 0xffffffff
.equ	POWMAN_SCRATCH2_RESET, 0x00000000
.equ	POWMAN_SCRATCH2_MSB, 31
.equ	POWMAN_SCRATCH2_LSB, 0
# =============================================================================
# Register    : POWMAN_SCRATCH3
# Description : Scratch register. Information persists in low power mode
.equ	POWMAN_SCRATCH3_OFFSET, 0x000000bc
.equ	POWMAN_SCRATCH3_BITS, 0xffffffff
.equ	POWMAN_SCRATCH3_RESET, 0x00000000
.equ	POWMAN_SCRATCH3_MSB, 31
.equ	POWMAN_SCRATCH3_LSB, 0
# =============================================================================
# Register    : POWMAN_SCRATCH4
# Description : Scratch register. Information persists in low power mode
.equ	POWMAN_SCRATCH4_OFFSET, 0x000000c0
.equ	POWMAN_SCRATCH4_BITS, 0xffffffff
.equ	POWMAN_SCRATCH4_RESET, 0x00000000
.equ	POWMAN_SCRATCH4_MSB, 31
.equ	POWMAN_SCRATCH4_LSB, 0
# =============================================================================
# Register    : POWMAN_SCRATCH5
# Description : Scratch register. Information persists in low power mode
.equ	POWMAN_SCRATCH5_OFFSET, 0x000000c4
.equ	POWMAN_SCRATCH5_BITS, 0xffffffff
.equ	POWMAN_SCRATCH5_RESET, 0x00000000
.equ	POWMAN_SCRATCH5_MSB, 31
.equ	POWMAN_SCRATCH5_LSB, 0
# =============================================================================
# Register    : POWMAN_SCRATCH6
# Description : Scratch register. Information persists in low power mode
.equ	POWMAN_SCRATCH6_OFFSET, 0x000000c8
.equ	POWMAN_SCRATCH6_BITS, 0xffffffff
.equ	POWMAN_SCRATCH6_RESET, 0x00000000
.equ	POWMAN_SCRATCH6_MSB, 31
.equ	POWMAN_SCRATCH6_LSB, 0
# =============================================================================
# Register    : POWMAN_SCRATCH7
# Description : Scratch register. Information persists in low power mode
.equ	POWMAN_SCRATCH7_OFFSET, 0x000000cc
.equ	POWMAN_SCRATCH7_BITS, 0xffffffff
.equ	POWMAN_SCRATCH7_RESET, 0x00000000
.equ	POWMAN_SCRATCH7_MSB, 31
.equ	POWMAN_SCRATCH7_LSB, 0
# =============================================================================
# Register    : POWMAN_BOOT0
# Description : Scratch register. Information persists in low power mode
.equ	POWMAN_BOOT0_OFFSET, 0x000000d0
.equ	POWMAN_BOOT0_BITS, 0xffffffff
.equ	POWMAN_BOOT0_RESET, 0x00000000
.equ	POWMAN_BOOT0_MSB, 31
.equ	POWMAN_BOOT0_LSB, 0
# =============================================================================
# Register    : POWMAN_BOOT1
# Description : Scratch register. Information persists in low power mode
.equ	POWMAN_BOOT1_OFFSET, 0x000000d4
.equ	POWMAN_BOOT1_BITS, 0xffffffff
.equ	POWMAN_BOOT1_RESET, 0x00000000
.equ	POWMAN_BOOT1_MSB, 31
.equ	POWMAN_BOOT1_LSB, 0
# =============================================================================
# Register    : POWMAN_BOOT2
# Description : Scratch register. Information persists in low power mode
.equ	POWMAN_BOOT2_OFFSET, 0x000000d8
.equ	POWMAN_BOOT2_BITS, 0xffffffff
.equ	POWMAN_BOOT2_RESET, 0x00000000
.equ	POWMAN_BOOT2_MSB, 31
.equ	POWMAN_BOOT2_LSB, 0
# =============================================================================
# Register    : POWMAN_BOOT3
# Description : Scratch register. Information persists in low power mode
.equ	POWMAN_BOOT3_OFFSET, 0x000000dc
.equ	POWMAN_BOOT3_BITS, 0xffffffff
.equ	POWMAN_BOOT3_RESET, 0x00000000
.equ	POWMAN_BOOT3_MSB, 31
.equ	POWMAN_BOOT3_LSB, 0
# =============================================================================
# Register    : POWMAN_INTR
# Description : Raw Interrupts
.equ	POWMAN_INTR_OFFSET, 0x000000e0
.equ	POWMAN_INTR_BITS, 0x0000000f
.equ	POWMAN_INTR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : POWMAN_INTR_PWRUP_WHILE_WAITING
# Description : Source is state.pwrup_while_waiting
.equ	POWMAN_INTR_PWRUP_WHILE_WAITING_RESET, 0x0
.equ	POWMAN_INTR_PWRUP_WHILE_WAITING_BITS, 0x00000008
.equ	POWMAN_INTR_PWRUP_WHILE_WAITING_MSB, 3
.equ	POWMAN_INTR_PWRUP_WHILE_WAITING_LSB, 3
# -----------------------------------------------------------------------------
# Field       : POWMAN_INTR_STATE_REQ_IGNORED
# Description : Source is state.req_ignored
.equ	POWMAN_INTR_STATE_REQ_IGNORED_RESET, 0x0
.equ	POWMAN_INTR_STATE_REQ_IGNORED_BITS, 0x00000004
.equ	POWMAN_INTR_STATE_REQ_IGNORED_MSB, 2
.equ	POWMAN_INTR_STATE_REQ_IGNORED_LSB, 2
# -----------------------------------------------------------------------------
# Field       : POWMAN_INTR_TIMER
.equ	POWMAN_INTR_TIMER_RESET, 0x0
.equ	POWMAN_INTR_TIMER_BITS, 0x00000002
.equ	POWMAN_INTR_TIMER_MSB, 1
.equ	POWMAN_INTR_TIMER_LSB, 1
# -----------------------------------------------------------------------------
# Field       : POWMAN_INTR_VREG_OUTPUT_LOW
.equ	POWMAN_INTR_VREG_OUTPUT_LOW_RESET, 0x0
.equ	POWMAN_INTR_VREG_OUTPUT_LOW_BITS, 0x00000001
.equ	POWMAN_INTR_VREG_OUTPUT_LOW_MSB, 0
.equ	POWMAN_INTR_VREG_OUTPUT_LOW_LSB, 0
# =============================================================================
# Register    : POWMAN_INTE
# Description : Interrupt Enable
.equ	POWMAN_INTE_OFFSET, 0x000000e4
.equ	POWMAN_INTE_BITS, 0x0000000f
.equ	POWMAN_INTE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : POWMAN_INTE_PWRUP_WHILE_WAITING
# Description : Source is state.pwrup_while_waiting
.equ	POWMAN_INTE_PWRUP_WHILE_WAITING_RESET, 0x0
.equ	POWMAN_INTE_PWRUP_WHILE_WAITING_BITS, 0x00000008
.equ	POWMAN_INTE_PWRUP_WHILE_WAITING_MSB, 3
.equ	POWMAN_INTE_PWRUP_WHILE_WAITING_LSB, 3
# -----------------------------------------------------------------------------
# Field       : POWMAN_INTE_STATE_REQ_IGNORED
# Description : Source is state.req_ignored
.equ	POWMAN_INTE_STATE_REQ_IGNORED_RESET, 0x0
.equ	POWMAN_INTE_STATE_REQ_IGNORED_BITS, 0x00000004
.equ	POWMAN_INTE_STATE_REQ_IGNORED_MSB, 2
.equ	POWMAN_INTE_STATE_REQ_IGNORED_LSB, 2
# -----------------------------------------------------------------------------
# Field       : POWMAN_INTE_TIMER
.equ	POWMAN_INTE_TIMER_RESET, 0x0
.equ	POWMAN_INTE_TIMER_BITS, 0x00000002
.equ	POWMAN_INTE_TIMER_MSB, 1
.equ	POWMAN_INTE_TIMER_LSB, 1
# -----------------------------------------------------------------------------
# Field       : POWMAN_INTE_VREG_OUTPUT_LOW
.equ	POWMAN_INTE_VREG_OUTPUT_LOW_RESET, 0x0
.equ	POWMAN_INTE_VREG_OUTPUT_LOW_BITS, 0x00000001
.equ	POWMAN_INTE_VREG_OUTPUT_LOW_MSB, 0
.equ	POWMAN_INTE_VREG_OUTPUT_LOW_LSB, 0
# =============================================================================
# Register    : POWMAN_INTF
# Description : Interrupt Force
.equ	POWMAN_INTF_OFFSET, 0x000000e8
.equ	POWMAN_INTF_BITS, 0x0000000f
.equ	POWMAN_INTF_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : POWMAN_INTF_PWRUP_WHILE_WAITING
# Description : Source is state.pwrup_while_waiting
.equ	POWMAN_INTF_PWRUP_WHILE_WAITING_RESET, 0x0
.equ	POWMAN_INTF_PWRUP_WHILE_WAITING_BITS, 0x00000008
.equ	POWMAN_INTF_PWRUP_WHILE_WAITING_MSB, 3
.equ	POWMAN_INTF_PWRUP_WHILE_WAITING_LSB, 3
# -----------------------------------------------------------------------------
# Field       : POWMAN_INTF_STATE_REQ_IGNORED
# Description : Source is state.req_ignored
.equ	POWMAN_INTF_STATE_REQ_IGNORED_RESET, 0x0
.equ	POWMAN_INTF_STATE_REQ_IGNORED_BITS, 0x00000004
.equ	POWMAN_INTF_STATE_REQ_IGNORED_MSB, 2
.equ	POWMAN_INTF_STATE_REQ_IGNORED_LSB, 2
# -----------------------------------------------------------------------------
# Field       : POWMAN_INTF_TIMER
.equ	POWMAN_INTF_TIMER_RESET, 0x0
.equ	POWMAN_INTF_TIMER_BITS, 0x00000002
.equ	POWMAN_INTF_TIMER_MSB, 1
.equ	POWMAN_INTF_TIMER_LSB, 1
# -----------------------------------------------------------------------------
# Field       : POWMAN_INTF_VREG_OUTPUT_LOW
.equ	POWMAN_INTF_VREG_OUTPUT_LOW_RESET, 0x0
.equ	POWMAN_INTF_VREG_OUTPUT_LOW_BITS, 0x00000001
.equ	POWMAN_INTF_VREG_OUTPUT_LOW_MSB, 0
.equ	POWMAN_INTF_VREG_OUTPUT_LOW_LSB, 0
# =============================================================================
# Register    : POWMAN_INTS
# Description : Interrupt status after masking & forcing
.equ	POWMAN_INTS_OFFSET, 0x000000ec
.equ	POWMAN_INTS_BITS, 0x0000000f
.equ	POWMAN_INTS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : POWMAN_INTS_PWRUP_WHILE_WAITING
# Description : Source is state.pwrup_while_waiting
.equ	POWMAN_INTS_PWRUP_WHILE_WAITING_RESET, 0x0
.equ	POWMAN_INTS_PWRUP_WHILE_WAITING_BITS, 0x00000008
.equ	POWMAN_INTS_PWRUP_WHILE_WAITING_MSB, 3
.equ	POWMAN_INTS_PWRUP_WHILE_WAITING_LSB, 3
# -----------------------------------------------------------------------------
# Field       : POWMAN_INTS_STATE_REQ_IGNORED
# Description : Source is state.req_ignored
.equ	POWMAN_INTS_STATE_REQ_IGNORED_RESET, 0x0
.equ	POWMAN_INTS_STATE_REQ_IGNORED_BITS, 0x00000004
.equ	POWMAN_INTS_STATE_REQ_IGNORED_MSB, 2
.equ	POWMAN_INTS_STATE_REQ_IGNORED_LSB, 2
# -----------------------------------------------------------------------------
# Field       : POWMAN_INTS_TIMER
.equ	POWMAN_INTS_TIMER_RESET, 0x0
.equ	POWMAN_INTS_TIMER_BITS, 0x00000002
.equ	POWMAN_INTS_TIMER_MSB, 1
.equ	POWMAN_INTS_TIMER_LSB, 1
# -----------------------------------------------------------------------------
# Field       : POWMAN_INTS_VREG_OUTPUT_LOW
.equ	POWMAN_INTS_VREG_OUTPUT_LOW_RESET, 0x0
.equ	POWMAN_INTS_VREG_OUTPUT_LOW_BITS, 0x00000001
.equ	POWMAN_INTS_VREG_OUTPUT_LOW_MSB, 0
.equ	POWMAN_INTS_VREG_OUTPUT_LOW_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_POWMAN_H
