#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : BUSCTRL
# Version        : 1
# Bus type       : apb
# Description    : Register block for busfabric control signals and performance
#                  counters
# =============================================================================
.ifndef	_HARDWARE_REGS_BUSCTRL_H
.set	_HARDWARE_REGS_BUSCTRL_H, 1
# =============================================================================
# Register    : BUSCTRL_BUS_PRIORITY
# Description : Set the priority of each master for bus arbitration.
.equ	BUSCTRL_BUS_PRIORITY_OFFSET, 0x00000000
.equ	BUSCTRL_BUS_PRIORITY_BITS, 0x00001111
.equ	BUSCTRL_BUS_PRIORITY_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : BUSCTRL_BUS_PRIORITY_DMA_W
# Description : 0 - low priority, 1 - high priority
.equ	BUSCTRL_BUS_PRIORITY_DMA_W_RESET, 0x0
.equ	BUSCTRL_BUS_PRIORITY_DMA_W_BITS, 0x00001000
.equ	BUSCTRL_BUS_PRIORITY_DMA_W_MSB, 12
.equ	BUSCTRL_BUS_PRIORITY_DMA_W_LSB, 12
# -----------------------------------------------------------------------------
# Field       : BUSCTRL_BUS_PRIORITY_DMA_R
# Description : 0 - low priority, 1 - high priority
.equ	BUSCTRL_BUS_PRIORITY_DMA_R_RESET, 0x0
.equ	BUSCTRL_BUS_PRIORITY_DMA_R_BITS, 0x00000100
.equ	BUSCTRL_BUS_PRIORITY_DMA_R_MSB, 8
.equ	BUSCTRL_BUS_PRIORITY_DMA_R_LSB, 8
# -----------------------------------------------------------------------------
# Field       : BUSCTRL_BUS_PRIORITY_PROC1
# Description : 0 - low priority, 1 - high priority
.equ	BUSCTRL_BUS_PRIORITY_PROC1_RESET, 0x0
.equ	BUSCTRL_BUS_PRIORITY_PROC1_BITS, 0x00000010
.equ	BUSCTRL_BUS_PRIORITY_PROC1_MSB, 4
.equ	BUSCTRL_BUS_PRIORITY_PROC1_LSB, 4
# -----------------------------------------------------------------------------
# Field       : BUSCTRL_BUS_PRIORITY_PROC0
# Description : 0 - low priority, 1 - high priority
.equ	BUSCTRL_BUS_PRIORITY_PROC0_RESET, 0x0
.equ	BUSCTRL_BUS_PRIORITY_PROC0_BITS, 0x00000001
.equ	BUSCTRL_BUS_PRIORITY_PROC0_MSB, 0
.equ	BUSCTRL_BUS_PRIORITY_PROC0_LSB, 0
# =============================================================================
# Register    : BUSCTRL_BUS_PRIORITY_ACK
# Description : Bus priority acknowledge
#               Goes to 1 once all arbiters have registered the new global
#               priority levels.
#               Arbiters update their local priority when servicing a new
#               nonsequential access.
#               In normal circumstances this will happen almost immediately.
.equ	BUSCTRL_BUS_PRIORITY_ACK_OFFSET, 0x00000004
.equ	BUSCTRL_BUS_PRIORITY_ACK_BITS, 0x00000001
.equ	BUSCTRL_BUS_PRIORITY_ACK_RESET, 0x00000000
.equ	BUSCTRL_BUS_PRIORITY_ACK_MSB, 0
.equ	BUSCTRL_BUS_PRIORITY_ACK_LSB, 0
# =============================================================================
# Register    : BUSCTRL_PERFCTR_EN
# Description : Enable the performance counters. If 0, the performance counters
#               do not increment. This can be used to precisely start/stop
#               event sampling around the profiled section of code.
#
#               The performance counters are initially disabled, to save
#               energy.
.equ	BUSCTRL_PERFCTR_EN_OFFSET, 0x00000008
.equ	BUSCTRL_PERFCTR_EN_BITS, 0x00000001
.equ	BUSCTRL_PERFCTR_EN_RESET, 0x00000000
.equ	BUSCTRL_PERFCTR_EN_MSB, 0
.equ	BUSCTRL_PERFCTR_EN_LSB, 0
# =============================================================================
# Register    : BUSCTRL_PERFCTR0
# Description : Bus fabric performance counter 0
#               Busfabric saturating performance counter 0
#               Count some event signal from the busfabric arbiters, if
#               PERFCTR_EN is set.
#               Write any value to clear. Select an event to count using
#               PERFSEL0
.equ	BUSCTRL_PERFCTR0_OFFSET, 0x0000000c
.equ	BUSCTRL_PERFCTR0_BITS, 0x00ffffff
.equ	BUSCTRL_PERFCTR0_RESET, 0x00000000
.equ	BUSCTRL_PERFCTR0_MSB, 23
.equ	BUSCTRL_PERFCTR0_LSB, 0
# =============================================================================
# Register    : BUSCTRL_PERFSEL0
# Description : Bus fabric performance event select for PERFCTR0
#               Select an event for PERFCTR0. For each downstream port of the
#               main crossbar, four events are available: ACCESS, an access
#               took place; ACCESS_CONTESTED, an access took place that
#               previously stalled due to contention from other masters;
#               STALL_DOWNSTREAM, count cycles where any master stalled due to
#               a stall on the downstream bus; STALL_UPSTREAM, count cycles
#               where any master stalled for any reason, including contention
#               from other masters.
#               0x00 -> siob_proc1_stall_upstream
#               0x01 -> siob_proc1_stall_downstream
#               0x02 -> siob_proc1_access_contested
#               0x03 -> siob_proc1_access
#               0x04 -> siob_proc0_stall_upstream
#               0x05 -> siob_proc0_stall_downstream
#               0x06 -> siob_proc0_access_contested
#               0x07 -> siob_proc0_access
#               0x08 -> apb_stall_upstream
#               0x09 -> apb_stall_downstream
#               0x0a -> apb_access_contested
#               0x0b -> apb_access
#               0x0c -> fastperi_stall_upstream
#               0x0d -> fastperi_stall_downstream
#               0x0e -> fastperi_access_contested
#               0x0f -> fastperi_access
#               0x10 -> sram9_stall_upstream
#               0x11 -> sram9_stall_downstream
#               0x12 -> sram9_access_contested
#               0x13 -> sram9_access
#               0x14 -> sram8_stall_upstream
#               0x15 -> sram8_stall_downstream
#               0x16 -> sram8_access_contested
#               0x17 -> sram8_access
#               0x18 -> sram7_stall_upstream
#               0x19 -> sram7_stall_downstream
#               0x1a -> sram7_access_contested
#               0x1b -> sram7_access
#               0x1c -> sram6_stall_upstream
#               0x1d -> sram6_stall_downstream
#               0x1e -> sram6_access_contested
#               0x1f -> sram6_access
#               0x20 -> sram5_stall_upstream
#               0x21 -> sram5_stall_downstream
#               0x22 -> sram5_access_contested
#               0x23 -> sram5_access
#               0x24 -> sram4_stall_upstream
#               0x25 -> sram4_stall_downstream
#               0x26 -> sram4_access_contested
#               0x27 -> sram4_access
#               0x28 -> sram3_stall_upstream
#               0x29 -> sram3_stall_downstream
#               0x2a -> sram3_access_contested
#               0x2b -> sram3_access
#               0x2c -> sram2_stall_upstream
#               0x2d -> sram2_stall_downstream
#               0x2e -> sram2_access_contested
#               0x2f -> sram2_access
#               0x30 -> sram1_stall_upstream
#               0x31 -> sram1_stall_downstream
#               0x32 -> sram1_access_contested
#               0x33 -> sram1_access
#               0x34 -> sram0_stall_upstream
#               0x35 -> sram0_stall_downstream
#               0x36 -> sram0_access_contested
#               0x37 -> sram0_access
#               0x38 -> xip_main1_stall_upstream
#               0x39 -> xip_main1_stall_downstream
#               0x3a -> xip_main1_access_contested
#               0x3b -> xip_main1_access
#               0x3c -> xip_main0_stall_upstream
#               0x3d -> xip_main0_stall_downstream
#               0x3e -> xip_main0_access_contested
#               0x3f -> xip_main0_access
#               0x40 -> rom_stall_upstream
#               0x41 -> rom_stall_downstream
#               0x42 -> rom_access_contested
#               0x43 -> rom_access
.equ	BUSCTRL_PERFSEL0_OFFSET, 0x00000010
.equ	BUSCTRL_PERFSEL0_BITS, 0x0000007f
.equ	BUSCTRL_PERFSEL0_RESET, 0x0000001f
.equ	BUSCTRL_PERFSEL0_MSB, 6
.equ	BUSCTRL_PERFSEL0_LSB, 0
.equ	BUSCTRL_PERFSEL0_VALUE_SIOB_PROC1_STALL_UPSTREAM, 0x00
.equ	BUSCTRL_PERFSEL0_VALUE_SIOB_PROC1_STALL_DOWNSTREAM, 0x01
.equ	BUSCTRL_PERFSEL0_VALUE_SIOB_PROC1_ACCESS_CONTESTED, 0x02
.equ	BUSCTRL_PERFSEL0_VALUE_SIOB_PROC1_ACCESS, 0x03
.equ	BUSCTRL_PERFSEL0_VALUE_SIOB_PROC0_STALL_UPSTREAM, 0x04
.equ	BUSCTRL_PERFSEL0_VALUE_SIOB_PROC0_STALL_DOWNSTREAM, 0x05
.equ	BUSCTRL_PERFSEL0_VALUE_SIOB_PROC0_ACCESS_CONTESTED, 0x06
.equ	BUSCTRL_PERFSEL0_VALUE_SIOB_PROC0_ACCESS, 0x07
.equ	BUSCTRL_PERFSEL0_VALUE_APB_STALL_UPSTREAM, 0x08
.equ	BUSCTRL_PERFSEL0_VALUE_APB_STALL_DOWNSTREAM, 0x09
.equ	BUSCTRL_PERFSEL0_VALUE_APB_ACCESS_CONTESTED, 0x0a
.equ	BUSCTRL_PERFSEL0_VALUE_APB_ACCESS, 0x0b
.equ	BUSCTRL_PERFSEL0_VALUE_FASTPERI_STALL_UPSTREAM, 0x0c
.equ	BUSCTRL_PERFSEL0_VALUE_FASTPERI_STALL_DOWNSTREAM, 0x0d
.equ	BUSCTRL_PERFSEL0_VALUE_FASTPERI_ACCESS_CONTESTED, 0x0e
.equ	BUSCTRL_PERFSEL0_VALUE_FASTPERI_ACCESS, 0x0f
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM9_STALL_UPSTREAM, 0x10
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM9_STALL_DOWNSTREAM, 0x11
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM9_ACCESS_CONTESTED, 0x12
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM9_ACCESS, 0x13
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM8_STALL_UPSTREAM, 0x14
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM8_STALL_DOWNSTREAM, 0x15
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM8_ACCESS_CONTESTED, 0x16
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM8_ACCESS, 0x17
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM7_STALL_UPSTREAM, 0x18
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM7_STALL_DOWNSTREAM, 0x19
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM7_ACCESS_CONTESTED, 0x1a
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM7_ACCESS, 0x1b
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM6_STALL_UPSTREAM, 0x1c
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM6_STALL_DOWNSTREAM, 0x1d
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM6_ACCESS_CONTESTED, 0x1e
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM6_ACCESS, 0x1f
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM5_STALL_UPSTREAM, 0x20
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM5_STALL_DOWNSTREAM, 0x21
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM5_ACCESS_CONTESTED, 0x22
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM5_ACCESS, 0x23
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM4_STALL_UPSTREAM, 0x24
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM4_STALL_DOWNSTREAM, 0x25
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM4_ACCESS_CONTESTED, 0x26
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM4_ACCESS, 0x27
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM3_STALL_UPSTREAM, 0x28
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM3_STALL_DOWNSTREAM, 0x29
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM3_ACCESS_CONTESTED, 0x2a
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM3_ACCESS, 0x2b
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM2_STALL_UPSTREAM, 0x2c
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM2_STALL_DOWNSTREAM, 0x2d
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM2_ACCESS_CONTESTED, 0x2e
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM2_ACCESS, 0x2f
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM1_STALL_UPSTREAM, 0x30
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM1_STALL_DOWNSTREAM, 0x31
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM1_ACCESS_CONTESTED, 0x32
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM1_ACCESS, 0x33
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM0_STALL_UPSTREAM, 0x34
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM0_STALL_DOWNSTREAM, 0x35
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM0_ACCESS_CONTESTED, 0x36
.equ	BUSCTRL_PERFSEL0_VALUE_SRAM0_ACCESS, 0x37
.equ	BUSCTRL_PERFSEL0_VALUE_XIP_MAIN1_STALL_UPSTREAM, 0x38
.equ	BUSCTRL_PERFSEL0_VALUE_XIP_MAIN1_STALL_DOWNSTREAM, 0x39
.equ	BUSCTRL_PERFSEL0_VALUE_XIP_MAIN1_ACCESS_CONTESTED, 0x3a
.equ	BUSCTRL_PERFSEL0_VALUE_XIP_MAIN1_ACCESS, 0x3b
.equ	BUSCTRL_PERFSEL0_VALUE_XIP_MAIN0_STALL_UPSTREAM, 0x3c
.equ	BUSCTRL_PERFSEL0_VALUE_XIP_MAIN0_STALL_DOWNSTREAM, 0x3d
.equ	BUSCTRL_PERFSEL0_VALUE_XIP_MAIN0_ACCESS_CONTESTED, 0x3e
.equ	BUSCTRL_PERFSEL0_VALUE_XIP_MAIN0_ACCESS, 0x3f
.equ	BUSCTRL_PERFSEL0_VALUE_ROM_STALL_UPSTREAM, 0x40
.equ	BUSCTRL_PERFSEL0_VALUE_ROM_STALL_DOWNSTREAM, 0x41
.equ	BUSCTRL_PERFSEL0_VALUE_ROM_ACCESS_CONTESTED, 0x42
.equ	BUSCTRL_PERFSEL0_VALUE_ROM_ACCESS, 0x43
# =============================================================================
# Register    : BUSCTRL_PERFCTR1
# Description : Bus fabric performance counter 1
#               Busfabric saturating performance counter 1
#               Count some event signal from the busfabric arbiters, if
#               PERFCTR_EN is set.
#               Write any value to clear. Select an event to count using
#               PERFSEL1
.equ	BUSCTRL_PERFCTR1_OFFSET, 0x00000014
.equ	BUSCTRL_PERFCTR1_BITS, 0x00ffffff
.equ	BUSCTRL_PERFCTR1_RESET, 0x00000000
.equ	BUSCTRL_PERFCTR1_MSB, 23
.equ	BUSCTRL_PERFCTR1_LSB, 0
# =============================================================================
# Register    : BUSCTRL_PERFSEL1
# Description : Bus fabric performance event select for PERFCTR1
#               Select an event for PERFCTR1. For each downstream port of the
#               main crossbar, four events are available: ACCESS, an access
#               took place; ACCESS_CONTESTED, an access took place that
#               previously stalled due to contention from other masters;
#               STALL_DOWNSTREAM, count cycles where any master stalled due to
#               a stall on the downstream bus; STALL_UPSTREAM, count cycles
#               where any master stalled for any reason, including contention
#               from other masters.
#               0x00 -> siob_proc1_stall_upstream
#               0x01 -> siob_proc1_stall_downstream
#               0x02 -> siob_proc1_access_contested
#               0x03 -> siob_proc1_access
#               0x04 -> siob_proc0_stall_upstream
#               0x05 -> siob_proc0_stall_downstream
#               0x06 -> siob_proc0_access_contested
#               0x07 -> siob_proc0_access
#               0x08 -> apb_stall_upstream
#               0x09 -> apb_stall_downstream
#               0x0a -> apb_access_contested
#               0x0b -> apb_access
#               0x0c -> fastperi_stall_upstream
#               0x0d -> fastperi_stall_downstream
#               0x0e -> fastperi_access_contested
#               0x0f -> fastperi_access
#               0x10 -> sram9_stall_upstream
#               0x11 -> sram9_stall_downstream
#               0x12 -> sram9_access_contested
#               0x13 -> sram9_access
#               0x14 -> sram8_stall_upstream
#               0x15 -> sram8_stall_downstream
#               0x16 -> sram8_access_contested
#               0x17 -> sram8_access
#               0x18 -> sram7_stall_upstream
#               0x19 -> sram7_stall_downstream
#               0x1a -> sram7_access_contested
#               0x1b -> sram7_access
#               0x1c -> sram6_stall_upstream
#               0x1d -> sram6_stall_downstream
#               0x1e -> sram6_access_contested
#               0x1f -> sram6_access
#               0x20 -> sram5_stall_upstream
#               0x21 -> sram5_stall_downstream
#               0x22 -> sram5_access_contested
#               0x23 -> sram5_access
#               0x24 -> sram4_stall_upstream
#               0x25 -> sram4_stall_downstream
#               0x26 -> sram4_access_contested
#               0x27 -> sram4_access
#               0x28 -> sram3_stall_upstream
#               0x29 -> sram3_stall_downstream
#               0x2a -> sram3_access_contested
#               0x2b -> sram3_access
#               0x2c -> sram2_stall_upstream
#               0x2d -> sram2_stall_downstream
#               0x2e -> sram2_access_contested
#               0x2f -> sram2_access
#               0x30 -> sram1_stall_upstream
#               0x31 -> sram1_stall_downstream
#               0x32 -> sram1_access_contested
#               0x33 -> sram1_access
#               0x34 -> sram0_stall_upstream
#               0x35 -> sram0_stall_downstream
#               0x36 -> sram0_access_contested
#               0x37 -> sram0_access
#               0x38 -> xip_main1_stall_upstream
#               0x39 -> xip_main1_stall_downstream
#               0x3a -> xip_main1_access_contested
#               0x3b -> xip_main1_access
#               0x3c -> xip_main0_stall_upstream
#               0x3d -> xip_main0_stall_downstream
#               0x3e -> xip_main0_access_contested
#               0x3f -> xip_main0_access
#               0x40 -> rom_stall_upstream
#               0x41 -> rom_stall_downstream
#               0x42 -> rom_access_contested
#               0x43 -> rom_access
.equ	BUSCTRL_PERFSEL1_OFFSET, 0x00000018
.equ	BUSCTRL_PERFSEL1_BITS, 0x0000007f
.equ	BUSCTRL_PERFSEL1_RESET, 0x0000001f
.equ	BUSCTRL_PERFSEL1_MSB, 6
.equ	BUSCTRL_PERFSEL1_LSB, 0
.equ	BUSCTRL_PERFSEL1_VALUE_SIOB_PROC1_STALL_UPSTREAM, 0x00
.equ	BUSCTRL_PERFSEL1_VALUE_SIOB_PROC1_STALL_DOWNSTREAM, 0x01
.equ	BUSCTRL_PERFSEL1_VALUE_SIOB_PROC1_ACCESS_CONTESTED, 0x02
.equ	BUSCTRL_PERFSEL1_VALUE_SIOB_PROC1_ACCESS, 0x03
.equ	BUSCTRL_PERFSEL1_VALUE_SIOB_PROC0_STALL_UPSTREAM, 0x04
.equ	BUSCTRL_PERFSEL1_VALUE_SIOB_PROC0_STALL_DOWNSTREAM, 0x05
.equ	BUSCTRL_PERFSEL1_VALUE_SIOB_PROC0_ACCESS_CONTESTED, 0x06
.equ	BUSCTRL_PERFSEL1_VALUE_SIOB_PROC0_ACCESS, 0x07
.equ	BUSCTRL_PERFSEL1_VALUE_APB_STALL_UPSTREAM, 0x08
.equ	BUSCTRL_PERFSEL1_VALUE_APB_STALL_DOWNSTREAM, 0x09
.equ	BUSCTRL_PERFSEL1_VALUE_APB_ACCESS_CONTESTED, 0x0a
.equ	BUSCTRL_PERFSEL1_VALUE_APB_ACCESS, 0x0b
.equ	BUSCTRL_PERFSEL1_VALUE_FASTPERI_STALL_UPSTREAM, 0x0c
.equ	BUSCTRL_PERFSEL1_VALUE_FASTPERI_STALL_DOWNSTREAM, 0x0d
.equ	BUSCTRL_PERFSEL1_VALUE_FASTPERI_ACCESS_CONTESTED, 0x0e
.equ	BUSCTRL_PERFSEL1_VALUE_FASTPERI_ACCESS, 0x0f
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM9_STALL_UPSTREAM, 0x10
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM9_STALL_DOWNSTREAM, 0x11
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM9_ACCESS_CONTESTED, 0x12
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM9_ACCESS, 0x13
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM8_STALL_UPSTREAM, 0x14
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM8_STALL_DOWNSTREAM, 0x15
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM8_ACCESS_CONTESTED, 0x16
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM8_ACCESS, 0x17
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM7_STALL_UPSTREAM, 0x18
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM7_STALL_DOWNSTREAM, 0x19
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM7_ACCESS_CONTESTED, 0x1a
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM7_ACCESS, 0x1b
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM6_STALL_UPSTREAM, 0x1c
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM6_STALL_DOWNSTREAM, 0x1d
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM6_ACCESS_CONTESTED, 0x1e
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM6_ACCESS, 0x1f
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM5_STALL_UPSTREAM, 0x20
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM5_STALL_DOWNSTREAM, 0x21
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM5_ACCESS_CONTESTED, 0x22
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM5_ACCESS, 0x23
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM4_STALL_UPSTREAM, 0x24
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM4_STALL_DOWNSTREAM, 0x25
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM4_ACCESS_CONTESTED, 0x26
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM4_ACCESS, 0x27
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM3_STALL_UPSTREAM, 0x28
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM3_STALL_DOWNSTREAM, 0x29
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM3_ACCESS_CONTESTED, 0x2a
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM3_ACCESS, 0x2b
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM2_STALL_UPSTREAM, 0x2c
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM2_STALL_DOWNSTREAM, 0x2d
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM2_ACCESS_CONTESTED, 0x2e
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM2_ACCESS, 0x2f
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM1_STALL_UPSTREAM, 0x30
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM1_STALL_DOWNSTREAM, 0x31
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM1_ACCESS_CONTESTED, 0x32
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM1_ACCESS, 0x33
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM0_STALL_UPSTREAM, 0x34
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM0_STALL_DOWNSTREAM, 0x35
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM0_ACCESS_CONTESTED, 0x36
.equ	BUSCTRL_PERFSEL1_VALUE_SRAM0_ACCESS, 0x37
.equ	BUSCTRL_PERFSEL1_VALUE_XIP_MAIN1_STALL_UPSTREAM, 0x38
.equ	BUSCTRL_PERFSEL1_VALUE_XIP_MAIN1_STALL_DOWNSTREAM, 0x39
.equ	BUSCTRL_PERFSEL1_VALUE_XIP_MAIN1_ACCESS_CONTESTED, 0x3a
.equ	BUSCTRL_PERFSEL1_VALUE_XIP_MAIN1_ACCESS, 0x3b
.equ	BUSCTRL_PERFSEL1_VALUE_XIP_MAIN0_STALL_UPSTREAM, 0x3c
.equ	BUSCTRL_PERFSEL1_VALUE_XIP_MAIN0_STALL_DOWNSTREAM, 0x3d
.equ	BUSCTRL_PERFSEL1_VALUE_XIP_MAIN0_ACCESS_CONTESTED, 0x3e
.equ	BUSCTRL_PERFSEL1_VALUE_XIP_MAIN0_ACCESS, 0x3f
.equ	BUSCTRL_PERFSEL1_VALUE_ROM_STALL_UPSTREAM, 0x40
.equ	BUSCTRL_PERFSEL1_VALUE_ROM_STALL_DOWNSTREAM, 0x41
.equ	BUSCTRL_PERFSEL1_VALUE_ROM_ACCESS_CONTESTED, 0x42
.equ	BUSCTRL_PERFSEL1_VALUE_ROM_ACCESS, 0x43
# =============================================================================
# Register    : BUSCTRL_PERFCTR2
# Description : Bus fabric performance counter 2
#               Busfabric saturating performance counter 2
#               Count some event signal from the busfabric arbiters, if
#               PERFCTR_EN is set.
#               Write any value to clear. Select an event to count using
#               PERFSEL2
.equ	BUSCTRL_PERFCTR2_OFFSET, 0x0000001c
.equ	BUSCTRL_PERFCTR2_BITS, 0x00ffffff
.equ	BUSCTRL_PERFCTR2_RESET, 0x00000000
.equ	BUSCTRL_PERFCTR2_MSB, 23
.equ	BUSCTRL_PERFCTR2_LSB, 0
# =============================================================================
# Register    : BUSCTRL_PERFSEL2
# Description : Bus fabric performance event select for PERFCTR2
#               Select an event for PERFCTR2. For each downstream port of the
#               main crossbar, four events are available: ACCESS, an access
#               took place; ACCESS_CONTESTED, an access took place that
#               previously stalled due to contention from other masters;
#               STALL_DOWNSTREAM, count cycles where any master stalled due to
#               a stall on the downstream bus; STALL_UPSTREAM, count cycles
#               where any master stalled for any reason, including contention
#               from other masters.
#               0x00 -> siob_proc1_stall_upstream
#               0x01 -> siob_proc1_stall_downstream
#               0x02 -> siob_proc1_access_contested
#               0x03 -> siob_proc1_access
#               0x04 -> siob_proc0_stall_upstream
#               0x05 -> siob_proc0_stall_downstream
#               0x06 -> siob_proc0_access_contested
#               0x07 -> siob_proc0_access
#               0x08 -> apb_stall_upstream
#               0x09 -> apb_stall_downstream
#               0x0a -> apb_access_contested
#               0x0b -> apb_access
#               0x0c -> fastperi_stall_upstream
#               0x0d -> fastperi_stall_downstream
#               0x0e -> fastperi_access_contested
#               0x0f -> fastperi_access
#               0x10 -> sram9_stall_upstream
#               0x11 -> sram9_stall_downstream
#               0x12 -> sram9_access_contested
#               0x13 -> sram9_access
#               0x14 -> sram8_stall_upstream
#               0x15 -> sram8_stall_downstream
#               0x16 -> sram8_access_contested
#               0x17 -> sram8_access
#               0x18 -> sram7_stall_upstream
#               0x19 -> sram7_stall_downstream
#               0x1a -> sram7_access_contested
#               0x1b -> sram7_access
#               0x1c -> sram6_stall_upstream
#               0x1d -> sram6_stall_downstream
#               0x1e -> sram6_access_contested
#               0x1f -> sram6_access
#               0x20 -> sram5_stall_upstream
#               0x21 -> sram5_stall_downstream
#               0x22 -> sram5_access_contested
#               0x23 -> sram5_access
#               0x24 -> sram4_stall_upstream
#               0x25 -> sram4_stall_downstream
#               0x26 -> sram4_access_contested
#               0x27 -> sram4_access
#               0x28 -> sram3_stall_upstream
#               0x29 -> sram3_stall_downstream
#               0x2a -> sram3_access_contested
#               0x2b -> sram3_access
#               0x2c -> sram2_stall_upstream
#               0x2d -> sram2_stall_downstream
#               0x2e -> sram2_access_contested
#               0x2f -> sram2_access
#               0x30 -> sram1_stall_upstream
#               0x31 -> sram1_stall_downstream
#               0x32 -> sram1_access_contested
#               0x33 -> sram1_access
#               0x34 -> sram0_stall_upstream
#               0x35 -> sram0_stall_downstream
#               0x36 -> sram0_access_contested
#               0x37 -> sram0_access
#               0x38 -> xip_main1_stall_upstream
#               0x39 -> xip_main1_stall_downstream
#               0x3a -> xip_main1_access_contested
#               0x3b -> xip_main1_access
#               0x3c -> xip_main0_stall_upstream
#               0x3d -> xip_main0_stall_downstream
#               0x3e -> xip_main0_access_contested
#               0x3f -> xip_main0_access
#               0x40 -> rom_stall_upstream
#               0x41 -> rom_stall_downstream
#               0x42 -> rom_access_contested
#               0x43 -> rom_access
.equ	BUSCTRL_PERFSEL2_OFFSET, 0x00000020
.equ	BUSCTRL_PERFSEL2_BITS, 0x0000007f
.equ	BUSCTRL_PERFSEL2_RESET, 0x0000001f
.equ	BUSCTRL_PERFSEL2_MSB, 6
.equ	BUSCTRL_PERFSEL2_LSB, 0
.equ	BUSCTRL_PERFSEL2_VALUE_SIOB_PROC1_STALL_UPSTREAM, 0x00
.equ	BUSCTRL_PERFSEL2_VALUE_SIOB_PROC1_STALL_DOWNSTREAM, 0x01
.equ	BUSCTRL_PERFSEL2_VALUE_SIOB_PROC1_ACCESS_CONTESTED, 0x02
.equ	BUSCTRL_PERFSEL2_VALUE_SIOB_PROC1_ACCESS, 0x03
.equ	BUSCTRL_PERFSEL2_VALUE_SIOB_PROC0_STALL_UPSTREAM, 0x04
.equ	BUSCTRL_PERFSEL2_VALUE_SIOB_PROC0_STALL_DOWNSTREAM, 0x05
.equ	BUSCTRL_PERFSEL2_VALUE_SIOB_PROC0_ACCESS_CONTESTED, 0x06
.equ	BUSCTRL_PERFSEL2_VALUE_SIOB_PROC0_ACCESS, 0x07
.equ	BUSCTRL_PERFSEL2_VALUE_APB_STALL_UPSTREAM, 0x08
.equ	BUSCTRL_PERFSEL2_VALUE_APB_STALL_DOWNSTREAM, 0x09
.equ	BUSCTRL_PERFSEL2_VALUE_APB_ACCESS_CONTESTED, 0x0a
.equ	BUSCTRL_PERFSEL2_VALUE_APB_ACCESS, 0x0b
.equ	BUSCTRL_PERFSEL2_VALUE_FASTPERI_STALL_UPSTREAM, 0x0c
.equ	BUSCTRL_PERFSEL2_VALUE_FASTPERI_STALL_DOWNSTREAM, 0x0d
.equ	BUSCTRL_PERFSEL2_VALUE_FASTPERI_ACCESS_CONTESTED, 0x0e
.equ	BUSCTRL_PERFSEL2_VALUE_FASTPERI_ACCESS, 0x0f
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM9_STALL_UPSTREAM, 0x10
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM9_STALL_DOWNSTREAM, 0x11
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM9_ACCESS_CONTESTED, 0x12
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM9_ACCESS, 0x13
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM8_STALL_UPSTREAM, 0x14
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM8_STALL_DOWNSTREAM, 0x15
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM8_ACCESS_CONTESTED, 0x16
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM8_ACCESS, 0x17
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM7_STALL_UPSTREAM, 0x18
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM7_STALL_DOWNSTREAM, 0x19
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM7_ACCESS_CONTESTED, 0x1a
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM7_ACCESS, 0x1b
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM6_STALL_UPSTREAM, 0x1c
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM6_STALL_DOWNSTREAM, 0x1d
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM6_ACCESS_CONTESTED, 0x1e
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM6_ACCESS, 0x1f
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM5_STALL_UPSTREAM, 0x20
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM5_STALL_DOWNSTREAM, 0x21
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM5_ACCESS_CONTESTED, 0x22
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM5_ACCESS, 0x23
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM4_STALL_UPSTREAM, 0x24
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM4_STALL_DOWNSTREAM, 0x25
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM4_ACCESS_CONTESTED, 0x26
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM4_ACCESS, 0x27
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM3_STALL_UPSTREAM, 0x28
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM3_STALL_DOWNSTREAM, 0x29
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM3_ACCESS_CONTESTED, 0x2a
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM3_ACCESS, 0x2b
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM2_STALL_UPSTREAM, 0x2c
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM2_STALL_DOWNSTREAM, 0x2d
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM2_ACCESS_CONTESTED, 0x2e
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM2_ACCESS, 0x2f
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM1_STALL_UPSTREAM, 0x30
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM1_STALL_DOWNSTREAM, 0x31
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM1_ACCESS_CONTESTED, 0x32
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM1_ACCESS, 0x33
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM0_STALL_UPSTREAM, 0x34
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM0_STALL_DOWNSTREAM, 0x35
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM0_ACCESS_CONTESTED, 0x36
.equ	BUSCTRL_PERFSEL2_VALUE_SRAM0_ACCESS, 0x37
.equ	BUSCTRL_PERFSEL2_VALUE_XIP_MAIN1_STALL_UPSTREAM, 0x38
.equ	BUSCTRL_PERFSEL2_VALUE_XIP_MAIN1_STALL_DOWNSTREAM, 0x39
.equ	BUSCTRL_PERFSEL2_VALUE_XIP_MAIN1_ACCESS_CONTESTED, 0x3a
.equ	BUSCTRL_PERFSEL2_VALUE_XIP_MAIN1_ACCESS, 0x3b
.equ	BUSCTRL_PERFSEL2_VALUE_XIP_MAIN0_STALL_UPSTREAM, 0x3c
.equ	BUSCTRL_PERFSEL2_VALUE_XIP_MAIN0_STALL_DOWNSTREAM, 0x3d
.equ	BUSCTRL_PERFSEL2_VALUE_XIP_MAIN0_ACCESS_CONTESTED, 0x3e
.equ	BUSCTRL_PERFSEL2_VALUE_XIP_MAIN0_ACCESS, 0x3f
.equ	BUSCTRL_PERFSEL2_VALUE_ROM_STALL_UPSTREAM, 0x40
.equ	BUSCTRL_PERFSEL2_VALUE_ROM_STALL_DOWNSTREAM, 0x41
.equ	BUSCTRL_PERFSEL2_VALUE_ROM_ACCESS_CONTESTED, 0x42
.equ	BUSCTRL_PERFSEL2_VALUE_ROM_ACCESS, 0x43
# =============================================================================
# Register    : BUSCTRL_PERFCTR3
# Description : Bus fabric performance counter 3
#               Busfabric saturating performance counter 3
#               Count some event signal from the busfabric arbiters, if
#               PERFCTR_EN is set.
#               Write any value to clear. Select an event to count using
#               PERFSEL3
.equ	BUSCTRL_PERFCTR3_OFFSET, 0x00000024
.equ	BUSCTRL_PERFCTR3_BITS, 0x00ffffff
.equ	BUSCTRL_PERFCTR3_RESET, 0x00000000
.equ	BUSCTRL_PERFCTR3_MSB, 23
.equ	BUSCTRL_PERFCTR3_LSB, 0
# =============================================================================
# Register    : BUSCTRL_PERFSEL3
# Description : Bus fabric performance event select for PERFCTR3
#               Select an event for PERFCTR3. For each downstream port of the
#               main crossbar, four events are available: ACCESS, an access
#               took place; ACCESS_CONTESTED, an access took place that
#               previously stalled due to contention from other masters;
#               STALL_DOWNSTREAM, count cycles where any master stalled due to
#               a stall on the downstream bus; STALL_UPSTREAM, count cycles
#               where any master stalled for any reason, including contention
#               from other masters.
#               0x00 -> siob_proc1_stall_upstream
#               0x01 -> siob_proc1_stall_downstream
#               0x02 -> siob_proc1_access_contested
#               0x03 -> siob_proc1_access
#               0x04 -> siob_proc0_stall_upstream
#               0x05 -> siob_proc0_stall_downstream
#               0x06 -> siob_proc0_access_contested
#               0x07 -> siob_proc0_access
#               0x08 -> apb_stall_upstream
#               0x09 -> apb_stall_downstream
#               0x0a -> apb_access_contested
#               0x0b -> apb_access
#               0x0c -> fastperi_stall_upstream
#               0x0d -> fastperi_stall_downstream
#               0x0e -> fastperi_access_contested
#               0x0f -> fastperi_access
#               0x10 -> sram9_stall_upstream
#               0x11 -> sram9_stall_downstream
#               0x12 -> sram9_access_contested
#               0x13 -> sram9_access
#               0x14 -> sram8_stall_upstream
#               0x15 -> sram8_stall_downstream
#               0x16 -> sram8_access_contested
#               0x17 -> sram8_access
#               0x18 -> sram7_stall_upstream
#               0x19 -> sram7_stall_downstream
#               0x1a -> sram7_access_contested
#               0x1b -> sram7_access
#               0x1c -> sram6_stall_upstream
#               0x1d -> sram6_stall_downstream
#               0x1e -> sram6_access_contested
#               0x1f -> sram6_access
#               0x20 -> sram5_stall_upstream
#               0x21 -> sram5_stall_downstream
#               0x22 -> sram5_access_contested
#               0x23 -> sram5_access
#               0x24 -> sram4_stall_upstream
#               0x25 -> sram4_stall_downstream
#               0x26 -> sram4_access_contested
#               0x27 -> sram4_access
#               0x28 -> sram3_stall_upstream
#               0x29 -> sram3_stall_downstream
#               0x2a -> sram3_access_contested
#               0x2b -> sram3_access
#               0x2c -> sram2_stall_upstream
#               0x2d -> sram2_stall_downstream
#               0x2e -> sram2_access_contested
#               0x2f -> sram2_access
#               0x30 -> sram1_stall_upstream
#               0x31 -> sram1_stall_downstream
#               0x32 -> sram1_access_contested
#               0x33 -> sram1_access
#               0x34 -> sram0_stall_upstream
#               0x35 -> sram0_stall_downstream
#               0x36 -> sram0_access_contested
#               0x37 -> sram0_access
#               0x38 -> xip_main1_stall_upstream
#               0x39 -> xip_main1_stall_downstream
#               0x3a -> xip_main1_access_contested
#               0x3b -> xip_main1_access
#               0x3c -> xip_main0_stall_upstream
#               0x3d -> xip_main0_stall_downstream
#               0x3e -> xip_main0_access_contested
#               0x3f -> xip_main0_access
#               0x40 -> rom_stall_upstream
#               0x41 -> rom_stall_downstream
#               0x42 -> rom_access_contested
#               0x43 -> rom_access
.equ	BUSCTRL_PERFSEL3_OFFSET, 0x00000028
.equ	BUSCTRL_PERFSEL3_BITS, 0x0000007f
.equ	BUSCTRL_PERFSEL3_RESET, 0x0000001f
.equ	BUSCTRL_PERFSEL3_MSB, 6
.equ	BUSCTRL_PERFSEL3_LSB, 0
.equ	BUSCTRL_PERFSEL3_VALUE_SIOB_PROC1_STALL_UPSTREAM, 0x00
.equ	BUSCTRL_PERFSEL3_VALUE_SIOB_PROC1_STALL_DOWNSTREAM, 0x01
.equ	BUSCTRL_PERFSEL3_VALUE_SIOB_PROC1_ACCESS_CONTESTED, 0x02
.equ	BUSCTRL_PERFSEL3_VALUE_SIOB_PROC1_ACCESS, 0x03
.equ	BUSCTRL_PERFSEL3_VALUE_SIOB_PROC0_STALL_UPSTREAM, 0x04
.equ	BUSCTRL_PERFSEL3_VALUE_SIOB_PROC0_STALL_DOWNSTREAM, 0x05
.equ	BUSCTRL_PERFSEL3_VALUE_SIOB_PROC0_ACCESS_CONTESTED, 0x06
.equ	BUSCTRL_PERFSEL3_VALUE_SIOB_PROC0_ACCESS, 0x07
.equ	BUSCTRL_PERFSEL3_VALUE_APB_STALL_UPSTREAM, 0x08
.equ	BUSCTRL_PERFSEL3_VALUE_APB_STALL_DOWNSTREAM, 0x09
.equ	BUSCTRL_PERFSEL3_VALUE_APB_ACCESS_CONTESTED, 0x0a
.equ	BUSCTRL_PERFSEL3_VALUE_APB_ACCESS, 0x0b
.equ	BUSCTRL_PERFSEL3_VALUE_FASTPERI_STALL_UPSTREAM, 0x0c
.equ	BUSCTRL_PERFSEL3_VALUE_FASTPERI_STALL_DOWNSTREAM, 0x0d
.equ	BUSCTRL_PERFSEL3_VALUE_FASTPERI_ACCESS_CONTESTED, 0x0e
.equ	BUSCTRL_PERFSEL3_VALUE_FASTPERI_ACCESS, 0x0f
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM9_STALL_UPSTREAM, 0x10
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM9_STALL_DOWNSTREAM, 0x11
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM9_ACCESS_CONTESTED, 0x12
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM9_ACCESS, 0x13
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM8_STALL_UPSTREAM, 0x14
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM8_STALL_DOWNSTREAM, 0x15
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM8_ACCESS_CONTESTED, 0x16
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM8_ACCESS, 0x17
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM7_STALL_UPSTREAM, 0x18
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM7_STALL_DOWNSTREAM, 0x19
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM7_ACCESS_CONTESTED, 0x1a
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM7_ACCESS, 0x1b
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM6_STALL_UPSTREAM, 0x1c
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM6_STALL_DOWNSTREAM, 0x1d
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM6_ACCESS_CONTESTED, 0x1e
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM6_ACCESS, 0x1f
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM5_STALL_UPSTREAM, 0x20
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM5_STALL_DOWNSTREAM, 0x21
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM5_ACCESS_CONTESTED, 0x22
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM5_ACCESS, 0x23
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM4_STALL_UPSTREAM, 0x24
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM4_STALL_DOWNSTREAM, 0x25
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM4_ACCESS_CONTESTED, 0x26
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM4_ACCESS, 0x27
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM3_STALL_UPSTREAM, 0x28
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM3_STALL_DOWNSTREAM, 0x29
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM3_ACCESS_CONTESTED, 0x2a
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM3_ACCESS, 0x2b
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM2_STALL_UPSTREAM, 0x2c
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM2_STALL_DOWNSTREAM, 0x2d
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM2_ACCESS_CONTESTED, 0x2e
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM2_ACCESS, 0x2f
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM1_STALL_UPSTREAM, 0x30
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM1_STALL_DOWNSTREAM, 0x31
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM1_ACCESS_CONTESTED, 0x32
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM1_ACCESS, 0x33
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM0_STALL_UPSTREAM, 0x34
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM0_STALL_DOWNSTREAM, 0x35
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM0_ACCESS_CONTESTED, 0x36
.equ	BUSCTRL_PERFSEL3_VALUE_SRAM0_ACCESS, 0x37
.equ	BUSCTRL_PERFSEL3_VALUE_XIP_MAIN1_STALL_UPSTREAM, 0x38
.equ	BUSCTRL_PERFSEL3_VALUE_XIP_MAIN1_STALL_DOWNSTREAM, 0x39
.equ	BUSCTRL_PERFSEL3_VALUE_XIP_MAIN1_ACCESS_CONTESTED, 0x3a
.equ	BUSCTRL_PERFSEL3_VALUE_XIP_MAIN1_ACCESS, 0x3b
.equ	BUSCTRL_PERFSEL3_VALUE_XIP_MAIN0_STALL_UPSTREAM, 0x3c
.equ	BUSCTRL_PERFSEL3_VALUE_XIP_MAIN0_STALL_DOWNSTREAM, 0x3d
.equ	BUSCTRL_PERFSEL3_VALUE_XIP_MAIN0_ACCESS_CONTESTED, 0x3e
.equ	BUSCTRL_PERFSEL3_VALUE_XIP_MAIN0_ACCESS, 0x3f
.equ	BUSCTRL_PERFSEL3_VALUE_ROM_STALL_UPSTREAM, 0x40
.equ	BUSCTRL_PERFSEL3_VALUE_ROM_STALL_DOWNSTREAM, 0x41
.equ	BUSCTRL_PERFSEL3_VALUE_ROM_ACCESS_CONTESTED, 0x42
.equ	BUSCTRL_PERFSEL3_VALUE_ROM_ACCESS, 0x43
# =============================================================================
.endif # _HARDWARE_REGS_BUSCTRL_H
