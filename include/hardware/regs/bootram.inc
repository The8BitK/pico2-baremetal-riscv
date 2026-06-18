#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : BOOTRAM
# Version        : 1
# Bus type       : apb
# Description    : Additional registers mapped adjacent to the bootram, for use
#                  by the bootrom.
# =============================================================================
.ifndef	_HARDWARE_REGS_BOOTRAM_H
.set	_HARDWARE_REGS_BOOTRAM_H, 1
# =============================================================================
# Register    : BOOTRAM_WRITE_ONCE0
# Description : This registers always ORs writes into its current contents.
#               Once a bit is set, it can only be cleared by a reset.
.equ	BOOTRAM_WRITE_ONCE0_OFFSET, 0x00000800
.equ	BOOTRAM_WRITE_ONCE0_BITS, 0xffffffff
.equ	BOOTRAM_WRITE_ONCE0_RESET, 0x00000000
.equ	BOOTRAM_WRITE_ONCE0_MSB, 31
.equ	BOOTRAM_WRITE_ONCE0_LSB, 0
# =============================================================================
# Register    : BOOTRAM_WRITE_ONCE1
# Description : This registers always ORs writes into its current contents.
#               Once a bit is set, it can only be cleared by a reset.
.equ	BOOTRAM_WRITE_ONCE1_OFFSET, 0x00000804
.equ	BOOTRAM_WRITE_ONCE1_BITS, 0xffffffff
.equ	BOOTRAM_WRITE_ONCE1_RESET, 0x00000000
.equ	BOOTRAM_WRITE_ONCE1_MSB, 31
.equ	BOOTRAM_WRITE_ONCE1_LSB, 0
# =============================================================================
# Register    : BOOTRAM_BOOTLOCK_STAT
# Description : Bootlock status register. 1=unclaimed, 0=claimed. These locks
#               function identically to the SIO spinlocks, but are reserved for
#               bootrom use.
.equ	BOOTRAM_BOOTLOCK_STAT_OFFSET, 0x00000808
.equ	BOOTRAM_BOOTLOCK_STAT_BITS, 0x000000ff
.equ	BOOTRAM_BOOTLOCK_STAT_RESET, 0x000000ff
.equ	BOOTRAM_BOOTLOCK_STAT_MSB, 7
.equ	BOOTRAM_BOOTLOCK_STAT_LSB, 0
# =============================================================================
# Register    : BOOTRAM_BOOTLOCK0
# Description : Read to claim and check. Write to unclaim. The value returned
#               on successful claim is 1 << n, and on failed claim is zero.
.equ	BOOTRAM_BOOTLOCK0_OFFSET, 0x0000080c
.equ	BOOTRAM_BOOTLOCK0_BITS, 0xffffffff
.equ	BOOTRAM_BOOTLOCK0_RESET, 0x00000000
.equ	BOOTRAM_BOOTLOCK0_MSB, 31
.equ	BOOTRAM_BOOTLOCK0_LSB, 0
# =============================================================================
# Register    : BOOTRAM_BOOTLOCK1
# Description : Read to claim and check. Write to unclaim. The value returned
#               on successful claim is 1 << n, and on failed claim is zero.
.equ	BOOTRAM_BOOTLOCK1_OFFSET, 0x00000810
.equ	BOOTRAM_BOOTLOCK1_BITS, 0xffffffff
.equ	BOOTRAM_BOOTLOCK1_RESET, 0x00000000
.equ	BOOTRAM_BOOTLOCK1_MSB, 31
.equ	BOOTRAM_BOOTLOCK1_LSB, 0
# =============================================================================
# Register    : BOOTRAM_BOOTLOCK2
# Description : Read to claim and check. Write to unclaim. The value returned
#               on successful claim is 1 << n, and on failed claim is zero.
.equ	BOOTRAM_BOOTLOCK2_OFFSET, 0x00000814
.equ	BOOTRAM_BOOTLOCK2_BITS, 0xffffffff
.equ	BOOTRAM_BOOTLOCK2_RESET, 0x00000000
.equ	BOOTRAM_BOOTLOCK2_MSB, 31
.equ	BOOTRAM_BOOTLOCK2_LSB, 0
# =============================================================================
# Register    : BOOTRAM_BOOTLOCK3
# Description : Read to claim and check. Write to unclaim. The value returned
#               on successful claim is 1 << n, and on failed claim is zero.
.equ	BOOTRAM_BOOTLOCK3_OFFSET, 0x00000818
.equ	BOOTRAM_BOOTLOCK3_BITS, 0xffffffff
.equ	BOOTRAM_BOOTLOCK3_RESET, 0x00000000
.equ	BOOTRAM_BOOTLOCK3_MSB, 31
.equ	BOOTRAM_BOOTLOCK3_LSB, 0
# =============================================================================
# Register    : BOOTRAM_BOOTLOCK4
# Description : Read to claim and check. Write to unclaim. The value returned
#               on successful claim is 1 << n, and on failed claim is zero.
.equ	BOOTRAM_BOOTLOCK4_OFFSET, 0x0000081c
.equ	BOOTRAM_BOOTLOCK4_BITS, 0xffffffff
.equ	BOOTRAM_BOOTLOCK4_RESET, 0x00000000
.equ	BOOTRAM_BOOTLOCK4_MSB, 31
.equ	BOOTRAM_BOOTLOCK4_LSB, 0
# =============================================================================
# Register    : BOOTRAM_BOOTLOCK5
# Description : Read to claim and check. Write to unclaim. The value returned
#               on successful claim is 1 << n, and on failed claim is zero.
.equ	BOOTRAM_BOOTLOCK5_OFFSET, 0x00000820
.equ	BOOTRAM_BOOTLOCK5_BITS, 0xffffffff
.equ	BOOTRAM_BOOTLOCK5_RESET, 0x00000000
.equ	BOOTRAM_BOOTLOCK5_MSB, 31
.equ	BOOTRAM_BOOTLOCK5_LSB, 0
# =============================================================================
# Register    : BOOTRAM_BOOTLOCK6
# Description : Read to claim and check. Write to unclaim. The value returned
#               on successful claim is 1 << n, and on failed claim is zero.
.equ	BOOTRAM_BOOTLOCK6_OFFSET, 0x00000824
.equ	BOOTRAM_BOOTLOCK6_BITS, 0xffffffff
.equ	BOOTRAM_BOOTLOCK6_RESET, 0x00000000
.equ	BOOTRAM_BOOTLOCK6_MSB, 31
.equ	BOOTRAM_BOOTLOCK6_LSB, 0
# =============================================================================
# Register    : BOOTRAM_BOOTLOCK7
# Description : Read to claim and check. Write to unclaim. The value returned
#               on successful claim is 1 << n, and on failed claim is zero.
.equ	BOOTRAM_BOOTLOCK7_OFFSET, 0x00000828
.equ	BOOTRAM_BOOTLOCK7_BITS, 0xffffffff
.equ	BOOTRAM_BOOTLOCK7_RESET, 0x00000000
.equ	BOOTRAM_BOOTLOCK7_MSB, 31
.equ	BOOTRAM_BOOTLOCK7_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_BOOTRAM_H
