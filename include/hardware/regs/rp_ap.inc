#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : RP_AP
# Version        : 1
# Bus type       : apb
# =============================================================================
.ifndef	_HARDWARE_REGS_RP_AP_H
.set	_HARDWARE_REGS_RP_AP_H
# =============================================================================
# Register    : RP_AP_CTRL
# Description : This register is primarily used for DFT but can also be used to
#               overcome some power up problems. However, it should not be used
#               to force power up of domains. Use DBG_POW_OVRD for that.
.equ	RP_AP_CTRL_OFFSET, 0x00000000
.equ	RP_AP_CTRL_BITS, 0xc000007f
.equ	RP_AP_CTRL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RP_AP_CTRL_RESCUE_RESTART
# Description : Allows debug of boot problems by restarting the chip with
#               minimal boot code execution. Write to 1 to put the chip in
#               reset then write to 0 to restart the chip with the rescue flag
#               set. The rescue flag is in the POWMAN_CHIP_RESET register and
#               is read by boot code. The rescue flag is cleared by writing 0
#               to POWMAN_CHIP_RESET_RESCUE_FLAG or by resetting the chip by
#               any means other than RESCUE_RESTART.
.equ	RP_AP_CTRL_RESCUE_RESTART_RESET, 0x0
.equ	RP_AP_CTRL_RESCUE_RESTART_BITS, 0x80000000
.equ	RP_AP_CTRL_RESCUE_RESTART_MSB, 31
.equ	RP_AP_CTRL_RESCUE_RESTART_LSB, 31
# -----------------------------------------------------------------------------
# Field       : RP_AP_CTRL_SPARE
# Description : Unused
.equ	RP_AP_CTRL_SPARE_RESET, 0x0
.equ	RP_AP_CTRL_SPARE_BITS, 0x40000000
.equ	RP_AP_CTRL_SPARE_MSB, 30
.equ	RP_AP_CTRL_SPARE_LSB, 30
# -----------------------------------------------------------------------------
# Field       : RP_AP_CTRL_DBG_FRCE_GPIO_LPCK
# Description : Allows chip start-up when the Low Power Oscillator (LPOSC) is
#               inoperative or malfunctioning and also allows the initial power
#               sequencing rate to be adjusted. Write to 1 to force the LPOSC
#               output to be driven from a GPIO (gpio20 on 80-pin package,
#               gpio34 on the 60-pin package). If the LPOSC is inoperative or
#               malfunctioning it may also be necessary to set the
#               LPOSC_STABLE_FRCE bit in this register. The user must provide a
#               clock on the GPIO. For normal operation use a clock running at
#               around 32kHz. Adjusting the frequency will speed up or slow
#               down the initial power-up sequence.
.equ	RP_AP_CTRL_DBG_FRCE_GPIO_LPCK_RESET, 0x0
.equ	RP_AP_CTRL_DBG_FRCE_GPIO_LPCK_BITS, 0x00000040
.equ	RP_AP_CTRL_DBG_FRCE_GPIO_LPCK_MSB, 6
.equ	RP_AP_CTRL_DBG_FRCE_GPIO_LPCK_LSB, 6
# -----------------------------------------------------------------------------
# Field       : RP_AP_CTRL_LPOSC_STABLE_FRCE
# Description : Allows the chip to start-up even though the Low Power
#               Oscillator (LPOSC) is failing to set its stable flag. Initial
#               power sequencing is clocked by LPOSC at around 32kHz but does
#               not start until the LPOSC declares itself to be stable. If the
#               LPOSC is otherwise working correctly the chip will boot when
#               this bit is set. If the LPOSC is not working then
#               DBG_FRCE_GPIO_LPCK must be set and an external clock provided.
.equ	RP_AP_CTRL_LPOSC_STABLE_FRCE_RESET, 0x0
.equ	RP_AP_CTRL_LPOSC_STABLE_FRCE_BITS, 0x00000020
.equ	RP_AP_CTRL_LPOSC_STABLE_FRCE_MSB, 5
.equ	RP_AP_CTRL_LPOSC_STABLE_FRCE_LSB, 5
# -----------------------------------------------------------------------------
# Field       : RP_AP_CTRL_POWMAN_DFT_ISO_OFF
# Description : Holds the isolation gates between power domains in the open
#               state. This is intended to hold the gates open for DFT and
#               power manager debug. It is not intended to force the isolation
#               gates open. Use the overrides in DBG_POW_OVRD to force the
#               isolation gates open or closed.
.equ	RP_AP_CTRL_POWMAN_DFT_ISO_OFF_RESET, 0x0
.equ	RP_AP_CTRL_POWMAN_DFT_ISO_OFF_BITS, 0x00000010
.equ	RP_AP_CTRL_POWMAN_DFT_ISO_OFF_MSB, 4
.equ	RP_AP_CTRL_POWMAN_DFT_ISO_OFF_LSB, 4
# -----------------------------------------------------------------------------
# Field       : RP_AP_CTRL_POWMAN_DFT_PWRON
# Description : Holds the power switches on for all domains. This is intended
#               to keep the power on for DFT and debug, rather than for
#               switching the power on. The power switches are not sequenced
#               and the sudden demand for current could cause the always-on
#               power domain to brown out. This register is in the always-on
#               domain therefore chaos could ensue. It is recommended to use
#               the DBG_POW_OVRD controls instead.
.equ	RP_AP_CTRL_POWMAN_DFT_PWRON_RESET, 0x0
.equ	RP_AP_CTRL_POWMAN_DFT_PWRON_BITS, 0x00000008
.equ	RP_AP_CTRL_POWMAN_DFT_PWRON_MSB, 3
.equ	RP_AP_CTRL_POWMAN_DFT_PWRON_LSB, 3
# -----------------------------------------------------------------------------
# Field       : RP_AP_CTRL_POWMAN_DBGMODE
# Description : This prevents the power manager from powering down and
#               resetting the switched-core power domain. It is intended for
#               DFT and for debugging the power manager after the chip has
#               booted. It cannot be used to force initial power on because it
#               simultaneously deasserts the reset.
.equ	RP_AP_CTRL_POWMAN_DBGMODE_RESET, 0x0
.equ	RP_AP_CTRL_POWMAN_DBGMODE_BITS, 0x00000004
.equ	RP_AP_CTRL_POWMAN_DBGMODE_MSB, 2
.equ	RP_AP_CTRL_POWMAN_DBGMODE_LSB, 2
# -----------------------------------------------------------------------------
# Field       : RP_AP_CTRL_JTAG_FUNCSEL
# Description : Multiplexes the JTAG ports onto GPIO0-3
.equ	RP_AP_CTRL_JTAG_FUNCSEL_RESET, 0x0
.equ	RP_AP_CTRL_JTAG_FUNCSEL_BITS, 0x00000002
.equ	RP_AP_CTRL_JTAG_FUNCSEL_MSB, 1
.equ	RP_AP_CTRL_JTAG_FUNCSEL_LSB, 1
# -----------------------------------------------------------------------------
# Field       : RP_AP_CTRL_JTAG_TRSTN
# Description : Resets the JTAG module. Active low.
.equ	RP_AP_CTRL_JTAG_TRSTN_RESET, 0x0
.equ	RP_AP_CTRL_JTAG_TRSTN_BITS, 0x00000001
.equ	RP_AP_CTRL_JTAG_TRSTN_MSB, 0
.equ	RP_AP_CTRL_JTAG_TRSTN_LSB, 0
# =============================================================================
# Register    : RP_AP_DBGKEY
# Description : Serial key load interface (write-only)
.equ	RP_AP_DBGKEY_OFFSET, 0x00000004
.equ	RP_AP_DBGKEY_BITS, 0x00000007
.equ	RP_AP_DBGKEY_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBGKEY_RESET
# Description : Reset (before sending a new key)
.equ	RP_AP_DBGKEY_RESET_RESET, 0x0
.equ	RP_AP_DBGKEY_RESET_BITS, 0x00000004
.equ	RP_AP_DBGKEY_RESET_MSB, 2
.equ	RP_AP_DBGKEY_RESET_LSB, 2
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBGKEY_PUSH
.equ	RP_AP_DBGKEY_PUSH_RESET, 0x0
.equ	RP_AP_DBGKEY_PUSH_BITS, 0x00000002
.equ	RP_AP_DBGKEY_PUSH_MSB, 1
.equ	RP_AP_DBGKEY_PUSH_LSB, 1
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBGKEY_DATA
.equ	RP_AP_DBGKEY_DATA_RESET, 0x0
.equ	RP_AP_DBGKEY_DATA_BITS, 0x00000001
.equ	RP_AP_DBGKEY_DATA_MSB, 0
.equ	RP_AP_DBGKEY_DATA_LSB, 0
# =============================================================================
# Register    : RP_AP_DBG_POW_STATE_SWCORE
# Description : This register indicates the state of the power sequencer for
#               the switched-core domain.
#               The sequencer timing is managed by the POWMAN_SEQ_* registers.
#               See the header file for those registers for more information on
#               the timing.
#               Power up of the domain commences by clearing bit 0 (IS_PD) then
#               bits 1-8 are set in sequence. Bit 8 (IS_PU) indicates the
#               sequence is complete.
#               Power down of the domain commences by clearing bit 8 (IS_PU)
#               then bits 7-1 are cleared in sequence. Bit 0 (IS_PU) is then
#               set to indicate the sequence is complete.
#               Bits 9-11 describe the states of the power manager clocks which
#               change as clock generators in the switched-core become
#               available following switched-core power up.
#               This bus can be sent to GPIO for debug. See
#               DBG_POW_OUTPUT_TO_GPIO in the DBG_POW_OVRD register.
.equ	RP_AP_DBG_POW_STATE_SWCORE_OFFSET, 0x00000008
.equ	RP_AP_DBG_POW_STATE_SWCORE_BITS, 0x00000fff
.equ	RP_AP_DBG_POW_STATE_SWCORE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SWCORE_USING_FAST_POWCK
# Description : Indicates the source of the power manager clock. On switched-
#               core power up the clock switches from the LPOSC to clk_ref and
#               this flag will be set. clk_ref will be running from the ROSC
#               initially but will switch to XOSC when it comes available. On
#               switched-core power down the clock switches to LPOSC and this
#               flag will be cleared.
.equ	RP_AP_DBG_POW_STATE_SWCORE_USING_FAST_POWCK_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SWCORE_USING_FAST_POWCK_BITS, 0x00000800
.equ	RP_AP_DBG_POW_STATE_SWCORE_USING_FAST_POWCK_MSB, 11
.equ	RP_AP_DBG_POW_STATE_SWCORE_USING_FAST_POWCK_LSB, 11
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SWCORE_WAITING_POWCK
# Description : Indicates the switched-core power sequencer is waiting for the
#               power manager clock to update. On switched-core power up the
#               clock switches from the LPOSC to clk_ref. clk_ref will be
#               running from the ROSC initially but will switch to XOSC when it
#               comes available. On switched-core power down the clock switches
#               to LPOSC.
#               If the switched-core power up sequence stalls with this flag
#               active then it means clk_ref is not running which indicates a
#               problem with the ROSC. If that happens then set
#               DBG_POW_RESTART_FROM_XOSC in the DBG_POW_OVRD register to avoid
#               using the ROSC.
#               If the switched-core power down sequence stalls with this flag
#               active then it means LPOSC is not running. The solution is to
#               not stop LPOSC when the switched-core power domain is powered.
.equ	RP_AP_DBG_POW_STATE_SWCORE_WAITING_POWCK_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SWCORE_WAITING_POWCK_BITS, 0x00000400
.equ	RP_AP_DBG_POW_STATE_SWCORE_WAITING_POWCK_MSB, 10
.equ	RP_AP_DBG_POW_STATE_SWCORE_WAITING_POWCK_LSB, 10
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SWCORE_WAITING_TIMCK
# Description : Indicates that the switched-core power sequencer is waiting for
#               the AON-Timer to update. On switched-core power-up there is
#               nothing to be done. The AON-Timer continues to run from the
#               LPOSC so this flag will not be set. Software decides whether to
#               switch the AON-Timer clock to XOSC (via clk_ref). On switched-
#               core power-down the sequencer will switch the AON-Timer back to
#               LPOSC if software switched it to XOSC. During the switchover
#               the WAITING_TIMCK flag will be set. If the switched-core power
#               down sequence stalls with this flag active then the only
#               recourse is to reset the chip and change software to not select
#               XOSC as the AON-Timer source.
.equ	RP_AP_DBG_POW_STATE_SWCORE_WAITING_TIMCK_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SWCORE_WAITING_TIMCK_BITS, 0x00000200
.equ	RP_AP_DBG_POW_STATE_SWCORE_WAITING_TIMCK_MSB, 9
.equ	RP_AP_DBG_POW_STATE_SWCORE_WAITING_TIMCK_LSB, 9
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SWCORE_IS_PU
# Description : Indicates the power somain is fully powered up.
.equ	RP_AP_DBG_POW_STATE_SWCORE_IS_PU_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SWCORE_IS_PU_BITS, 0x00000100
.equ	RP_AP_DBG_POW_STATE_SWCORE_IS_PU_MSB, 8
.equ	RP_AP_DBG_POW_STATE_SWCORE_IS_PU_LSB, 8
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SWCORE_RESET_FROM_SEQ
# Description : Indicates the state of the reset to the power domain.
.equ	RP_AP_DBG_POW_STATE_SWCORE_RESET_FROM_SEQ_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SWCORE_RESET_FROM_SEQ_BITS, 0x00000080
.equ	RP_AP_DBG_POW_STATE_SWCORE_RESET_FROM_SEQ_MSB, 7
.equ	RP_AP_DBG_POW_STATE_SWCORE_RESET_FROM_SEQ_LSB, 7
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SWCORE_ENAB_ACK
# Description : Indicates the state of the enable to the power domain.
.equ	RP_AP_DBG_POW_STATE_SWCORE_ENAB_ACK_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SWCORE_ENAB_ACK_BITS, 0x00000040
.equ	RP_AP_DBG_POW_STATE_SWCORE_ENAB_ACK_MSB, 6
.equ	RP_AP_DBG_POW_STATE_SWCORE_ENAB_ACK_LSB, 6
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SWCORE_ISOLATE_FROM_SEQ
# Description : Indicates the state of the isolation control to the power
#               domain.
.equ	RP_AP_DBG_POW_STATE_SWCORE_ISOLATE_FROM_SEQ_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SWCORE_ISOLATE_FROM_SEQ_BITS, 0x00000020
.equ	RP_AP_DBG_POW_STATE_SWCORE_ISOLATE_FROM_SEQ_MSB, 5
.equ	RP_AP_DBG_POW_STATE_SWCORE_ISOLATE_FROM_SEQ_LSB, 5
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SWCORE_LARGE_ACK
# Description : Indicates the state of the large power switches for the power
#               domain.
.equ	RP_AP_DBG_POW_STATE_SWCORE_LARGE_ACK_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SWCORE_LARGE_ACK_BITS, 0x00000010
.equ	RP_AP_DBG_POW_STATE_SWCORE_LARGE_ACK_MSB, 4
.equ	RP_AP_DBG_POW_STATE_SWCORE_LARGE_ACK_LSB, 4
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SWCORE_SMALL_ACK2
# Description : The small switches are split into 3 chains. In the power up
#               sequence they are switched on separately to allow management of
#               the VDD rise time. In the power down sequence they switch off
#               simultaneously with the large power switches.
#               This bit indicates the state of the last element in small power
#               switch chain 2.
.equ	RP_AP_DBG_POW_STATE_SWCORE_SMALL_ACK2_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SWCORE_SMALL_ACK2_BITS, 0x00000008
.equ	RP_AP_DBG_POW_STATE_SWCORE_SMALL_ACK2_MSB, 3
.equ	RP_AP_DBG_POW_STATE_SWCORE_SMALL_ACK2_LSB, 3
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SWCORE_SMALL_ACK1
# Description : This bit indicates the state of the last element in small power
#               switch chain 1.
.equ	RP_AP_DBG_POW_STATE_SWCORE_SMALL_ACK1_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SWCORE_SMALL_ACK1_BITS, 0x00000004
.equ	RP_AP_DBG_POW_STATE_SWCORE_SMALL_ACK1_MSB, 2
.equ	RP_AP_DBG_POW_STATE_SWCORE_SMALL_ACK1_LSB, 2
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SWCORE_SMALL_ACK0
# Description : This bit indicates the state of the last element in small power
#               switch chain 0.
.equ	RP_AP_DBG_POW_STATE_SWCORE_SMALL_ACK0_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SWCORE_SMALL_ACK0_BITS, 0x00000002
.equ	RP_AP_DBG_POW_STATE_SWCORE_SMALL_ACK0_MSB, 1
.equ	RP_AP_DBG_POW_STATE_SWCORE_SMALL_ACK0_LSB, 1
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SWCORE_IS_PD
# Description : Indicates the power somain is fully powered down.
.equ	RP_AP_DBG_POW_STATE_SWCORE_IS_PD_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SWCORE_IS_PD_BITS, 0x00000001
.equ	RP_AP_DBG_POW_STATE_SWCORE_IS_PD_MSB, 0
.equ	RP_AP_DBG_POW_STATE_SWCORE_IS_PD_LSB, 0
# =============================================================================
# Register    : RP_AP_DBG_POW_STATE_XIP
# Description : This register indicates the state of the power sequencer for
#               the XIP domain.
#               The sequencer timing is managed by the POWMAN_SEQ_* registers.
#               See the header file for those registers for more information on
#               the timing.
#               Power up of the domain commences by clearing bit 0 (IS_PD) then
#               bits 1-8 are set in sequence. Bit 8 (IS_PU) indicates the
#               sequence is complete.
#               Power down of the domain commences by clearing bit 8 (IS_PU)
#               then bits 7-1 are cleared in sequence. Bit 0 (IS_PU) is then
#               set to indicate the sequence is complete.
.equ	RP_AP_DBG_POW_STATE_XIP_OFFSET, 0x0000000c
.equ	RP_AP_DBG_POW_STATE_XIP_BITS, 0x000001ff
.equ	RP_AP_DBG_POW_STATE_XIP_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_XIP_IS_PU
# Description : Indicates the power somain is fully powered up.
.equ	RP_AP_DBG_POW_STATE_XIP_IS_PU_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_XIP_IS_PU_BITS, 0x00000100
.equ	RP_AP_DBG_POW_STATE_XIP_IS_PU_MSB, 8
.equ	RP_AP_DBG_POW_STATE_XIP_IS_PU_LSB, 8
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_XIP_RESET_FROM_SEQ
# Description : Indicates the state of the reset to the power domain.
.equ	RP_AP_DBG_POW_STATE_XIP_RESET_FROM_SEQ_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_XIP_RESET_FROM_SEQ_BITS, 0x00000080
.equ	RP_AP_DBG_POW_STATE_XIP_RESET_FROM_SEQ_MSB, 7
.equ	RP_AP_DBG_POW_STATE_XIP_RESET_FROM_SEQ_LSB, 7
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_XIP_ENAB_ACK
# Description : Indicates the state of the enable to the power domain.
.equ	RP_AP_DBG_POW_STATE_XIP_ENAB_ACK_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_XIP_ENAB_ACK_BITS, 0x00000040
.equ	RP_AP_DBG_POW_STATE_XIP_ENAB_ACK_MSB, 6
.equ	RP_AP_DBG_POW_STATE_XIP_ENAB_ACK_LSB, 6
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_XIP_ISOLATE_FROM_SEQ
# Description : Indicates the state of the isolation control to the power
#               domain.
.equ	RP_AP_DBG_POW_STATE_XIP_ISOLATE_FROM_SEQ_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_XIP_ISOLATE_FROM_SEQ_BITS, 0x00000020
.equ	RP_AP_DBG_POW_STATE_XIP_ISOLATE_FROM_SEQ_MSB, 5
.equ	RP_AP_DBG_POW_STATE_XIP_ISOLATE_FROM_SEQ_LSB, 5
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_XIP_LARGE_ACK
# Description : Indicates the state of the large power switches for the power
#               domain.
.equ	RP_AP_DBG_POW_STATE_XIP_LARGE_ACK_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_XIP_LARGE_ACK_BITS, 0x00000010
.equ	RP_AP_DBG_POW_STATE_XIP_LARGE_ACK_MSB, 4
.equ	RP_AP_DBG_POW_STATE_XIP_LARGE_ACK_LSB, 4
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_XIP_SMALL_ACK2
# Description : The small switches are split into 3 chains. In the power up
#               sequence they are switched on separately to allow management of
#               the VDD rise time. In the power down sequence they switch off
#               simultaneously with the large power switches.
#               This bit indicates the state of the last element in small power
#               switch chain 2.
.equ	RP_AP_DBG_POW_STATE_XIP_SMALL_ACK2_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_XIP_SMALL_ACK2_BITS, 0x00000008
.equ	RP_AP_DBG_POW_STATE_XIP_SMALL_ACK2_MSB, 3
.equ	RP_AP_DBG_POW_STATE_XIP_SMALL_ACK2_LSB, 3
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_XIP_SMALL_ACK1
# Description : This bit indicates the state of the last element in small power
#               switch chain 1.
.equ	RP_AP_DBG_POW_STATE_XIP_SMALL_ACK1_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_XIP_SMALL_ACK1_BITS, 0x00000004
.equ	RP_AP_DBG_POW_STATE_XIP_SMALL_ACK1_MSB, 2
.equ	RP_AP_DBG_POW_STATE_XIP_SMALL_ACK1_LSB, 2
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_XIP_SMALL_ACK0
# Description : This bit indicates the state of the last element in small power
#               switch chain 0.
.equ	RP_AP_DBG_POW_STATE_XIP_SMALL_ACK0_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_XIP_SMALL_ACK0_BITS, 0x00000002
.equ	RP_AP_DBG_POW_STATE_XIP_SMALL_ACK0_MSB, 1
.equ	RP_AP_DBG_POW_STATE_XIP_SMALL_ACK0_LSB, 1
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_XIP_IS_PD
# Description : Indicates the power somain is fully powered down.
.equ	RP_AP_DBG_POW_STATE_XIP_IS_PD_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_XIP_IS_PD_BITS, 0x00000001
.equ	RP_AP_DBG_POW_STATE_XIP_IS_PD_MSB, 0
.equ	RP_AP_DBG_POW_STATE_XIP_IS_PD_LSB, 0
# =============================================================================
# Register    : RP_AP_DBG_POW_STATE_SRAM0
# Description : This register indicates the state of the power sequencer for
#               the SRAM0 domain.
#               The sequencer timing is managed by the POWMAN_SEQ_* registers.
#               See the header file for those registers for more information on
#               the timing.
#               Power up of the domain commences by clearing bit 0 (IS_PD) then
#               bits 1-8 are set in sequence. Bit 8 (IS_PU) indicates the
#               sequence is complete.
#               Power down of the domain commences by clearing bit 8 (IS_PU)
#               then bits 7-1 are cleared in sequence. Bit 0 (IS_PU) is then
#               set to indicate the sequence is complete.
.equ	RP_AP_DBG_POW_STATE_SRAM0_OFFSET, 0x00000010
.equ	RP_AP_DBG_POW_STATE_SRAM0_BITS, 0x000001ff
.equ	RP_AP_DBG_POW_STATE_SRAM0_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SRAM0_IS_PU
# Description : Indicates the power somain is fully powered up.
.equ	RP_AP_DBG_POW_STATE_SRAM0_IS_PU_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SRAM0_IS_PU_BITS, 0x00000100
.equ	RP_AP_DBG_POW_STATE_SRAM0_IS_PU_MSB, 8
.equ	RP_AP_DBG_POW_STATE_SRAM0_IS_PU_LSB, 8
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SRAM0_RESET_FROM_SEQ
# Description : Indicates the state of the reset to the power domain.
.equ	RP_AP_DBG_POW_STATE_SRAM0_RESET_FROM_SEQ_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SRAM0_RESET_FROM_SEQ_BITS, 0x00000080
.equ	RP_AP_DBG_POW_STATE_SRAM0_RESET_FROM_SEQ_MSB, 7
.equ	RP_AP_DBG_POW_STATE_SRAM0_RESET_FROM_SEQ_LSB, 7
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SRAM0_ENAB_ACK
# Description : Indicates the state of the enable to the power domain.
.equ	RP_AP_DBG_POW_STATE_SRAM0_ENAB_ACK_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SRAM0_ENAB_ACK_BITS, 0x00000040
.equ	RP_AP_DBG_POW_STATE_SRAM0_ENAB_ACK_MSB, 6
.equ	RP_AP_DBG_POW_STATE_SRAM0_ENAB_ACK_LSB, 6
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SRAM0_ISOLATE_FROM_SEQ
# Description : Indicates the state of the isolation control to the power
#               domain.
.equ	RP_AP_DBG_POW_STATE_SRAM0_ISOLATE_FROM_SEQ_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SRAM0_ISOLATE_FROM_SEQ_BITS, 0x00000020
.equ	RP_AP_DBG_POW_STATE_SRAM0_ISOLATE_FROM_SEQ_MSB, 5
.equ	RP_AP_DBG_POW_STATE_SRAM0_ISOLATE_FROM_SEQ_LSB, 5
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SRAM0_LARGE_ACK
# Description : Indicates the state of the large power switches for the power
#               domain.
.equ	RP_AP_DBG_POW_STATE_SRAM0_LARGE_ACK_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SRAM0_LARGE_ACK_BITS, 0x00000010
.equ	RP_AP_DBG_POW_STATE_SRAM0_LARGE_ACK_MSB, 4
.equ	RP_AP_DBG_POW_STATE_SRAM0_LARGE_ACK_LSB, 4
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SRAM0_SMALL_ACK2
# Description : The small switches are split into 3 chains. In the power up
#               sequence they are switched on separately to allow management of
#               the VDD rise time. In the power down sequence they switch off
#               simultaneously with the large power switches.
#               This bit indicates the state of the last element in small power
#               switch chain 2.
.equ	RP_AP_DBG_POW_STATE_SRAM0_SMALL_ACK2_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SRAM0_SMALL_ACK2_BITS, 0x00000008
.equ	RP_AP_DBG_POW_STATE_SRAM0_SMALL_ACK2_MSB, 3
.equ	RP_AP_DBG_POW_STATE_SRAM0_SMALL_ACK2_LSB, 3
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SRAM0_SMALL_ACK1
# Description : This bit indicates the state of the last element in small power
#               switch chain 1.
.equ	RP_AP_DBG_POW_STATE_SRAM0_SMALL_ACK1_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SRAM0_SMALL_ACK1_BITS, 0x00000004
.equ	RP_AP_DBG_POW_STATE_SRAM0_SMALL_ACK1_MSB, 2
.equ	RP_AP_DBG_POW_STATE_SRAM0_SMALL_ACK1_LSB, 2
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SRAM0_SMALL_ACK0
# Description : This bit indicates the state of the last element in small power
#               switch chain 0.
.equ	RP_AP_DBG_POW_STATE_SRAM0_SMALL_ACK0_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SRAM0_SMALL_ACK0_BITS, 0x00000002
.equ	RP_AP_DBG_POW_STATE_SRAM0_SMALL_ACK0_MSB, 1
.equ	RP_AP_DBG_POW_STATE_SRAM0_SMALL_ACK0_LSB, 1
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SRAM0_IS_PD
# Description : Indicates the power somain is fully powered down.
.equ	RP_AP_DBG_POW_STATE_SRAM0_IS_PD_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SRAM0_IS_PD_BITS, 0x00000001
.equ	RP_AP_DBG_POW_STATE_SRAM0_IS_PD_MSB, 0
.equ	RP_AP_DBG_POW_STATE_SRAM0_IS_PD_LSB, 0
# =============================================================================
# Register    : RP_AP_DBG_POW_STATE_SRAM1
# Description : This register indicates the state of the power sequencer for
#               the SRAM1 domain.
#               The sequencer timing is managed by the POWMAN_SEQ_* registers.
#               See the header file for those registers for more information on
#               the timing.
#               Power up of the domain commences by clearing bit 0 (IS_PD) then
#               bits 1-8 are set in sequence. Bit 8 (IS_PU) indicates the
#               sequence is complete.
#               Power down of the domain commences by clearing bit 8 (IS_PU)
#               then bits 7-1 are cleared in sequence. Bit 0 (IS_PU) is then
#               set to indicate the sequence is complete.
.equ	RP_AP_DBG_POW_STATE_SRAM1_OFFSET, 0x00000014
.equ	RP_AP_DBG_POW_STATE_SRAM1_BITS, 0x000001ff
.equ	RP_AP_DBG_POW_STATE_SRAM1_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SRAM1_IS_PU
# Description : Indicates the power somain is fully powered up.
.equ	RP_AP_DBG_POW_STATE_SRAM1_IS_PU_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SRAM1_IS_PU_BITS, 0x00000100
.equ	RP_AP_DBG_POW_STATE_SRAM1_IS_PU_MSB, 8
.equ	RP_AP_DBG_POW_STATE_SRAM1_IS_PU_LSB, 8
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SRAM1_RESET_FROM_SEQ
# Description : Indicates the state of the reset to the power domain.
.equ	RP_AP_DBG_POW_STATE_SRAM1_RESET_FROM_SEQ_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SRAM1_RESET_FROM_SEQ_BITS, 0x00000080
.equ	RP_AP_DBG_POW_STATE_SRAM1_RESET_FROM_SEQ_MSB, 7
.equ	RP_AP_DBG_POW_STATE_SRAM1_RESET_FROM_SEQ_LSB, 7
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SRAM1_ENAB_ACK
# Description : Indicates the state of the enable to the power domain.
.equ	RP_AP_DBG_POW_STATE_SRAM1_ENAB_ACK_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SRAM1_ENAB_ACK_BITS, 0x00000040
.equ	RP_AP_DBG_POW_STATE_SRAM1_ENAB_ACK_MSB, 6
.equ	RP_AP_DBG_POW_STATE_SRAM1_ENAB_ACK_LSB, 6
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SRAM1_ISOLATE_FROM_SEQ
# Description : Indicates the state of the isolation control to the power
#               domain.
.equ	RP_AP_DBG_POW_STATE_SRAM1_ISOLATE_FROM_SEQ_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SRAM1_ISOLATE_FROM_SEQ_BITS, 0x00000020
.equ	RP_AP_DBG_POW_STATE_SRAM1_ISOLATE_FROM_SEQ_MSB, 5
.equ	RP_AP_DBG_POW_STATE_SRAM1_ISOLATE_FROM_SEQ_LSB, 5
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SRAM1_LARGE_ACK
# Description : Indicates the state of the large power switches for the power
#               domain.
.equ	RP_AP_DBG_POW_STATE_SRAM1_LARGE_ACK_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SRAM1_LARGE_ACK_BITS, 0x00000010
.equ	RP_AP_DBG_POW_STATE_SRAM1_LARGE_ACK_MSB, 4
.equ	RP_AP_DBG_POW_STATE_SRAM1_LARGE_ACK_LSB, 4
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SRAM1_SMALL_ACK2
# Description : The small switches are split into 3 chains. In the power up
#               sequence they are switched on separately to allow management of
#               the VDD rise time. In the power down sequence they switch off
#               simultaneously with the large power switches.
#               This bit indicates the state of the last element in small power
#               switch chain 2.
.equ	RP_AP_DBG_POW_STATE_SRAM1_SMALL_ACK2_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SRAM1_SMALL_ACK2_BITS, 0x00000008
.equ	RP_AP_DBG_POW_STATE_SRAM1_SMALL_ACK2_MSB, 3
.equ	RP_AP_DBG_POW_STATE_SRAM1_SMALL_ACK2_LSB, 3
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SRAM1_SMALL_ACK1
# Description : This bit indicates the state of the last element in small power
#               switch chain 1.
.equ	RP_AP_DBG_POW_STATE_SRAM1_SMALL_ACK1_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SRAM1_SMALL_ACK1_BITS, 0x00000004
.equ	RP_AP_DBG_POW_STATE_SRAM1_SMALL_ACK1_MSB, 2
.equ	RP_AP_DBG_POW_STATE_SRAM1_SMALL_ACK1_LSB, 2
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SRAM1_SMALL_ACK0
# Description : This bit indicates the state of the last element in small power
#               switch chain 0.
.equ	RP_AP_DBG_POW_STATE_SRAM1_SMALL_ACK0_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SRAM1_SMALL_ACK0_BITS, 0x00000002
.equ	RP_AP_DBG_POW_STATE_SRAM1_SMALL_ACK0_MSB, 1
.equ	RP_AP_DBG_POW_STATE_SRAM1_SMALL_ACK0_LSB, 1
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_STATE_SRAM1_IS_PD
# Description : Indicates the power somain is fully powered down.
.equ	RP_AP_DBG_POW_STATE_SRAM1_IS_PD_RESET, 0x0
.equ	RP_AP_DBG_POW_STATE_SRAM1_IS_PD_BITS, 0x00000001
.equ	RP_AP_DBG_POW_STATE_SRAM1_IS_PD_MSB, 0
.equ	RP_AP_DBG_POW_STATE_SRAM1_IS_PD_LSB, 0
# =============================================================================
# Register    : RP_AP_DBG_POW_OVRD
# Description : This register allows external control of the power sequencer
#               outputs for all the switched power domains. If any of the power
#               sequencers stall at any stage then force power up operation of
#               all domains by running this sequence:
#               - set DBG_POW_OVRD = 0x3b to force small power switches on,
#               large power switches off, resets on and isolation on
#               - allow time for the domain power supplies to reach full rail
#               - set DBG_POW_OVRD = 0x3b to force large power switches on
#               - set DBG_POW_OVRD = 0x37 to remove isolation
#               - set DBG_POW_OVRD = 0x17 to remove resets
.equ	RP_AP_DBG_POW_OVRD_OFFSET, 0x00000018
.equ	RP_AP_DBG_POW_OVRD_BITS, 0x0000007f
.equ	RP_AP_DBG_POW_OVRD_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_OVRD_DBG_POW_RESTART_FROM_XOSC
# Description : By default the system begins boot as soon as a clock is
#               available from the ROSC, then it switches to the XOSC when it
#               is available. This is done because the XOSC takes several ms to
#               start up. If there is a problem with the ROSC then the default
#               behaviour can be changed to not use the ROSC and wait for XOSC.
#               However, this requires a mask change to modify the reset value
#               of the Power Manager START_FROM_XOSC register. To allow
#               experimentation the default can be temporarily changed by
#               setting this register bit to 1. After setting this bit the core
#               must be reset by a Coresight dprst or a rescue reset (see
#               RESCUE_RESTART in the RP_AP_CTRL register above). A power-on
#               reset, brown-out reset or RUN pin reset will reset this control
#               and revert to the default behaviour.
.equ	RP_AP_DBG_POW_OVRD_DBG_POW_RESTART_FROM_XOSC_RESET, 0x0
.equ	RP_AP_DBG_POW_OVRD_DBG_POW_RESTART_FROM_XOSC_BITS, 0x00000040
.equ	RP_AP_DBG_POW_OVRD_DBG_POW_RESTART_FROM_XOSC_MSB, 6
.equ	RP_AP_DBG_POW_OVRD_DBG_POW_RESTART_FROM_XOSC_LSB, 6
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_OVRD_DBG_POW_RESET
# Description : When DBG_POW_OVRD_RESET=1 this register bit controls the resets
#               for all domains. 1 = reset. 0 = not reset.
.equ	RP_AP_DBG_POW_OVRD_DBG_POW_RESET_RESET, 0x0
.equ	RP_AP_DBG_POW_OVRD_DBG_POW_RESET_BITS, 0x00000020
.equ	RP_AP_DBG_POW_OVRD_DBG_POW_RESET_MSB, 5
.equ	RP_AP_DBG_POW_OVRD_DBG_POW_RESET_LSB, 5
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_OVRD_DBG_POW_OVRD_RESET
# Description : Enables DBG_POW_RESET to control the resets for the power
#               manager and the switched-core. Essentially that is everythjing
#               except the Coresight 2-wire interface and the RP_AP registers.
.equ	RP_AP_DBG_POW_OVRD_DBG_POW_OVRD_RESET_RESET, 0x0
.equ	RP_AP_DBG_POW_OVRD_DBG_POW_OVRD_RESET_BITS, 0x00000010
.equ	RP_AP_DBG_POW_OVRD_DBG_POW_OVRD_RESET_MSB, 4
.equ	RP_AP_DBG_POW_OVRD_DBG_POW_OVRD_RESET_LSB, 4
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_OVRD_DBG_POW_ISO
# Description : When DBG_POW_OVRD_ISO=1 this register bit controls the
#               isolation gates for all domains. 1 = isolated. 0 = not
#               isolated.
.equ	RP_AP_DBG_POW_OVRD_DBG_POW_ISO_RESET, 0x0
.equ	RP_AP_DBG_POW_OVRD_DBG_POW_ISO_BITS, 0x00000008
.equ	RP_AP_DBG_POW_OVRD_DBG_POW_ISO_MSB, 3
.equ	RP_AP_DBG_POW_OVRD_DBG_POW_ISO_LSB, 3
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_OVRD_DBG_POW_OVRD_ISO
# Description : Enables DBG_POW_ISO to control the isolation gates between
#               domains.
.equ	RP_AP_DBG_POW_OVRD_DBG_POW_OVRD_ISO_RESET, 0x0
.equ	RP_AP_DBG_POW_OVRD_DBG_POW_OVRD_ISO_BITS, 0x00000004
.equ	RP_AP_DBG_POW_OVRD_DBG_POW_OVRD_ISO_MSB, 2
.equ	RP_AP_DBG_POW_OVRD_DBG_POW_OVRD_ISO_LSB, 2
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_OVRD_DBG_POW_OVRD_LARGE_REQ
# Description : Turn on the large power switches for all domains. This should
#               not be done until sufficient time has been allowed for the
#               small switches to bring the supplies up. Switching the large
#               switches on too soon risks browning out the always-on domain
#               and corrupting these very registers.
.equ	RP_AP_DBG_POW_OVRD_DBG_POW_OVRD_LARGE_REQ_RESET, 0x0
.equ	RP_AP_DBG_POW_OVRD_DBG_POW_OVRD_LARGE_REQ_BITS, 0x00000002
.equ	RP_AP_DBG_POW_OVRD_DBG_POW_OVRD_LARGE_REQ_MSB, 1
.equ	RP_AP_DBG_POW_OVRD_DBG_POW_OVRD_LARGE_REQ_LSB, 1
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_OVRD_DBG_POW_OVRD_SMALL_REQ
# Description : Turn on the small power switches for all domains. This switches
#               on chain 0 for each domain and switches off chains 2 & 3 and
#               the large power switch chain. This will bring the power up for
#               all domains without browning out the always-on power domain.
.equ	RP_AP_DBG_POW_OVRD_DBG_POW_OVRD_SMALL_REQ_RESET, 0x0
.equ	RP_AP_DBG_POW_OVRD_DBG_POW_OVRD_SMALL_REQ_BITS, 0x00000001
.equ	RP_AP_DBG_POW_OVRD_DBG_POW_OVRD_SMALL_REQ_MSB, 0
.equ	RP_AP_DBG_POW_OVRD_DBG_POW_OVRD_SMALL_REQ_LSB, 0
# =============================================================================
# Register    : RP_AP_DBG_POW_OUTPUT_TO_GPIO
# Description : Send some, or all, bits of DBG_POW_STATE_SWCORE to gpios.
#               Bit 0  sends bit 0  of DBG_POW_STATE_SWCORE to GPIO 34
#               Bit 1  sends bit 1  of DBG_POW_STATE_SWCORE to GPIO 35
#               Bit 2  sends bit 2  of DBG_POW_STATE_SWCORE to GPIO 36
#               .
#               .
#               Bit 11 sends bit 11 of DBG_POW_STATE_SWCORE to GPIO 45
.equ	RP_AP_DBG_POW_OUTPUT_TO_GPIO_OFFSET, 0x0000001c
.equ	RP_AP_DBG_POW_OUTPUT_TO_GPIO_BITS, 0x00000fff
.equ	RP_AP_DBG_POW_OUTPUT_TO_GPIO_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RP_AP_DBG_POW_OUTPUT_TO_GPIO_ENABLE
.equ	RP_AP_DBG_POW_OUTPUT_TO_GPIO_ENABLE_RESET, 0x000
.equ	RP_AP_DBG_POW_OUTPUT_TO_GPIO_ENABLE_BITS, 0x00000fff
.equ	RP_AP_DBG_POW_OUTPUT_TO_GPIO_ENABLE_MSB, 11
.equ	RP_AP_DBG_POW_OUTPUT_TO_GPIO_ENABLE_LSB, 0
# =============================================================================
# Register    : RP_AP_IDR
# Description : Standard Coresight ID Register
.equ	RP_AP_IDR_OFFSET, 0x00000dfc
.equ	RP_AP_IDR_BITS, 0xffffffff
.equ	RP_AP_IDR_MSB, 31
.equ	RP_AP_IDR_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_RP_AP_H
