#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : XIP
# Version        : 1
# Bus type       : ahb
# Description    : QSPI flash execute-in-place block
# =============================================================================
.ifndef	_HARDWARE_REGS_XIP_H
.set	_HARDWARE_REGS_XIP_H, 1
# =============================================================================
# Register    : XIP_CTRL
# Description : Cache control register. Read-only from a Non-secure context.
.equ	XIP_CTRL_OFFSET, 0x00000000
.equ	XIP_CTRL_BITS, 0x00000ffb
.equ	XIP_CTRL_RESET, 0x00000083
# -----------------------------------------------------------------------------
# Field       : XIP_CTRL_WRITABLE_M1
# Description : If 1, enable writes to XIP memory window 1 (addresses
#               0x11000000 through 0x11ffffff, and their uncached mirrors). If
#               0, this region is read-only.
#
#               XIP memory is *read-only by default*. This bit must be set to
#               enable writes if a RAM device is attached on QSPI chip select
#               1.
#
#               The default read-only behaviour avoids two issues with writing
#               to a read-only QSPI device (e.g. flash). First, a write will
#               initially appear to succeed due to caching, but the data will
#               eventually be lost when the written line is evicted, causing
#               unpredictable behaviour.
#
#               Second, when a written line is evicted, it will cause a write
#               command to be issued to the flash, which can break the flash
#               out of its continuous read mode. After this point, flash reads
#               will return garbage. This is a security concern, as it allows
#               Non-secure software to break Secure flash reads if it has
#               permission to write to any flash address.
#
#               Note the read-only behaviour is implemented by downgrading
#               writes to reads, so writes will still cause allocation of an
#               address, but have no other effect.
.equ	XIP_CTRL_WRITABLE_M1_RESET, 0x0
.equ	XIP_CTRL_WRITABLE_M1_BITS, 0x00000800
.equ	XIP_CTRL_WRITABLE_M1_MSB, 11
.equ	XIP_CTRL_WRITABLE_M1_LSB, 11
# -----------------------------------------------------------------------------
# Field       : XIP_CTRL_WRITABLE_M0
# Description : If 1, enable writes to XIP memory window 0 (addresses
#               0x10000000 through 0x10ffffff, and their uncached mirrors). If
#               0, this region is read-only.
#
#               XIP memory is *read-only by default*. This bit must be set to
#               enable writes if a RAM device is attached on QSPI chip select
#               0.
#
#               The default read-only behaviour avoids two issues with writing
#               to a read-only QSPI device (e.g. flash). First, a write will
#               initially appear to succeed due to caching, but the data will
#               eventually be lost when the written line is evicted, causing
#               unpredictable behaviour.
#
#               Second, when a written line is evicted, it will cause a write
#               command to be issued to the flash, which can break the flash
#               out of its continuous read mode. After this point, flash reads
#               will return garbage. This is a security concern, as it allows
#               Non-secure software to break Secure flash reads if it has
#               permission to write to any flash address.
#
#               Note the read-only behaviour is implemented by downgrading
#               writes to reads, so writes will still cause allocation of an
#               address, but have no other effect.
.equ	XIP_CTRL_WRITABLE_M0_RESET, 0x0
.equ	XIP_CTRL_WRITABLE_M0_BITS, 0x00000400
.equ	XIP_CTRL_WRITABLE_M0_MSB, 10
.equ	XIP_CTRL_WRITABLE_M0_LSB, 10
# -----------------------------------------------------------------------------
# Field       : XIP_CTRL_SPLIT_WAYS
# Description : When 1, route all cached+Secure accesses to way 0 of the cache,
#               and route all cached+Non-secure accesses to way 1 of the cache.
#
#               This partitions the cache into two half-sized direct-mapped
#               regions, such that Non-secure code can not observe cache line
#               state changes caused by Secure execution.
#
#               A full cache flush is required when changing the value of
#               SPLIT_WAYS. The flush should be performed whilst SPLIT_WAYS is
#               0, so that both cache ways are accessible for invalidation.
.equ	XIP_CTRL_SPLIT_WAYS_RESET, 0x0
.equ	XIP_CTRL_SPLIT_WAYS_BITS, 0x00000200
.equ	XIP_CTRL_SPLIT_WAYS_MSB, 9
.equ	XIP_CTRL_SPLIT_WAYS_LSB, 9
# -----------------------------------------------------------------------------
# Field       : XIP_CTRL_MAINT_NONSEC
# Description : When 0, Non-secure accesses to the cache maintenance address
#               window (addr[27] == 1, addr[26] == 0) will generate a bus
#               error. When 1, Non-secure accesses can perform cache
#               maintenance operations by writing to the cache maintenance
#               address window.
#
#               Cache maintenance operations may be used to corrupt Secure data
#               by invalidating cache lines inappropriately, or map Secure
#               content into a Non-secure region by pinning cache lines.
#               Therefore this bit should generally be set to 0, unless Secure
#               code is not using the cache.
#
#               Care should also be taken to clear the cache data memory and
#               tag memory before granting maintenance operations to Non-secure
#               code.
.equ	XIP_CTRL_MAINT_NONSEC_RESET, 0x0
.equ	XIP_CTRL_MAINT_NONSEC_BITS, 0x00000100
.equ	XIP_CTRL_MAINT_NONSEC_MSB, 8
.equ	XIP_CTRL_MAINT_NONSEC_LSB, 8
# -----------------------------------------------------------------------------
# Field       : XIP_CTRL_NO_UNTRANSLATED_NONSEC
# Description : When 1, Non-secure accesses to the uncached, untranslated
#               window (addr[27:26] == 3) will generate a bus error.
.equ	XIP_CTRL_NO_UNTRANSLATED_NONSEC_RESET, 0x1
.equ	XIP_CTRL_NO_UNTRANSLATED_NONSEC_BITS, 0x00000080
.equ	XIP_CTRL_NO_UNTRANSLATED_NONSEC_MSB, 7
.equ	XIP_CTRL_NO_UNTRANSLATED_NONSEC_LSB, 7
# -----------------------------------------------------------------------------
# Field       : XIP_CTRL_NO_UNTRANSLATED_SEC
# Description : When 1, Secure accesses to the uncached, untranslated window
#               (addr[27:26] == 3) will generate a bus error.
.equ	XIP_CTRL_NO_UNTRANSLATED_SEC_RESET, 0x0
.equ	XIP_CTRL_NO_UNTRANSLATED_SEC_BITS, 0x00000040
.equ	XIP_CTRL_NO_UNTRANSLATED_SEC_MSB, 6
.equ	XIP_CTRL_NO_UNTRANSLATED_SEC_LSB, 6
# -----------------------------------------------------------------------------
# Field       : XIP_CTRL_NO_UNCACHED_NONSEC
# Description : When 1, Non-secure accesses to the uncached window (addr[27:26]
#               == 1) will generate a bus error. This may reduce the number of
#               SAU/MPU/PMP regions required to protect flash contents.
#
#               Note this does not disable access to the uncached, untranslated
#               window -- see NO_UNTRANSLATED_SEC.
.equ	XIP_CTRL_NO_UNCACHED_NONSEC_RESET, 0x0
.equ	XIP_CTRL_NO_UNCACHED_NONSEC_BITS, 0x00000020
.equ	XIP_CTRL_NO_UNCACHED_NONSEC_MSB, 5
.equ	XIP_CTRL_NO_UNCACHED_NONSEC_LSB, 5
# -----------------------------------------------------------------------------
# Field       : XIP_CTRL_NO_UNCACHED_SEC
# Description : When 1, Secure accesses to the uncached window (addr[27:26] ==
#               1) will generate a bus error. This may reduce the number of
#               SAU/MPU/PMP regions required to protect flash contents.
#
#               Note this does not disable access to the uncached, untranslated
#               window -- see NO_UNTRANSLATED_SEC.
.equ	XIP_CTRL_NO_UNCACHED_SEC_RESET, 0x0
.equ	XIP_CTRL_NO_UNCACHED_SEC_BITS, 0x00000010
.equ	XIP_CTRL_NO_UNCACHED_SEC_MSB, 4
.equ	XIP_CTRL_NO_UNCACHED_SEC_LSB, 4
# -----------------------------------------------------------------------------
# Field       : XIP_CTRL_POWER_DOWN
# Description : When 1, the cache memories are powered down. They retain state,
#               but can not be accessed. This reduces static power dissipation.
#               Writing 1 to this bit forces CTRL_EN_SECURE and
#               CTRL_EN_NONSECURE to 0, i.e. the cache cannot be enabled when
#               powered down.
.equ	XIP_CTRL_POWER_DOWN_RESET, 0x0
.equ	XIP_CTRL_POWER_DOWN_BITS, 0x00000008
.equ	XIP_CTRL_POWER_DOWN_MSB, 3
.equ	XIP_CTRL_POWER_DOWN_LSB, 3
# -----------------------------------------------------------------------------
# Field       : XIP_CTRL_EN_NONSECURE
# Description : When 1, enable the cache for Non-secure accesses. When enabled,
#               Non-secure XIP accesses to the cached (addr[26] == 0) window
#               will query the cache, and QSPI accesses are performed only if
#               the requested data is not present. When disabled, Secure access
#               ignore the cache contents, and always access the QSPI
#               interface.
#
#               Accesses to the uncached (addr[26] == 1) window will never
#               query the cache, irrespective of this bit.
.equ	XIP_CTRL_EN_NONSECURE_RESET, 0x1
.equ	XIP_CTRL_EN_NONSECURE_BITS, 0x00000002
.equ	XIP_CTRL_EN_NONSECURE_MSB, 1
.equ	XIP_CTRL_EN_NONSECURE_LSB, 1
# -----------------------------------------------------------------------------
# Field       : XIP_CTRL_EN_SECURE
# Description : When 1, enable the cache for Secure accesses. When enabled,
#               Secure XIP accesses to the cached (addr[26] == 0) window will
#               query the cache, and QSPI accesses are performed only if the
#               requested data is not present. When disabled, Secure access
#               ignore the cache contents, and always access the QSPI
#               interface.
#
#               Accesses to the uncached (addr[26] == 1) window will never
#               query the cache, irrespective of this bit.
#
#               There is no cache-as-SRAM address window. Cache lines are
#               allocated for SRAM-like use by individually pinning them, and
#               keeping the cache enabled.
.equ	XIP_CTRL_EN_SECURE_RESET, 0x1
.equ	XIP_CTRL_EN_SECURE_BITS, 0x00000001
.equ	XIP_CTRL_EN_SECURE_MSB, 0
.equ	XIP_CTRL_EN_SECURE_LSB, 0
# =============================================================================
# Register    : XIP_STAT
.equ	XIP_STAT_OFFSET, 0x00000008
.equ	XIP_STAT_BITS, 0x00000006
.equ	XIP_STAT_RESET, 0x00000002
# -----------------------------------------------------------------------------
# Field       : XIP_STAT_FIFO_FULL
# Description : When 1, indicates the XIP streaming FIFO is completely full.
#               The streaming FIFO is 2 entries deep, so the full and empty
#               flag allow its level to be ascertained.
.equ	XIP_STAT_FIFO_FULL_RESET, 0x0
.equ	XIP_STAT_FIFO_FULL_BITS, 0x00000004
.equ	XIP_STAT_FIFO_FULL_MSB, 2
.equ	XIP_STAT_FIFO_FULL_LSB, 2
# -----------------------------------------------------------------------------
# Field       : XIP_STAT_FIFO_EMPTY
# Description : When 1, indicates the XIP streaming FIFO is completely empty.
.equ	XIP_STAT_FIFO_EMPTY_RESET, 0x1
.equ	XIP_STAT_FIFO_EMPTY_BITS, 0x00000002
.equ	XIP_STAT_FIFO_EMPTY_MSB, 1
.equ	XIP_STAT_FIFO_EMPTY_LSB, 1
# =============================================================================
# Register    : XIP_CTR_HIT
# Description : Cache Hit counter
#               A 32 bit saturating counter that increments upon each cache
#               hit,
#               i.e. when an XIP access is serviced directly from cached data.
#               Write any value to clear.
.equ	XIP_CTR_HIT_OFFSET, 0x0000000c
.equ	XIP_CTR_HIT_BITS, 0xffffffff
.equ	XIP_CTR_HIT_RESET, 0x00000000
.equ	XIP_CTR_HIT_MSB, 31
.equ	XIP_CTR_HIT_LSB, 0
# =============================================================================
# Register    : XIP_CTR_ACC
# Description : Cache Access counter
#               A 32 bit saturating counter that increments upon each XIP
#               access,
#               whether the cache is hit or not. This includes noncacheable
#               accesses.
#               Write any value to clear.
.equ	XIP_CTR_ACC_OFFSET, 0x00000010
.equ	XIP_CTR_ACC_BITS, 0xffffffff
.equ	XIP_CTR_ACC_RESET, 0x00000000
.equ	XIP_CTR_ACC_MSB, 31
.equ	XIP_CTR_ACC_LSB, 0
# =============================================================================
# Register    : XIP_STREAM_ADDR
# Description : FIFO stream address
#               The address of the next word to be streamed from flash to the
#               streaming FIFO.
#               Increments automatically after each flash access.
#               Write the initial access address here before starting a
#               streaming read.
.equ	XIP_STREAM_ADDR_OFFSET, 0x00000014
.equ	XIP_STREAM_ADDR_BITS, 0xfffffffc
.equ	XIP_STREAM_ADDR_RESET, 0x00000000
.equ	XIP_STREAM_ADDR_MSB, 31
.equ	XIP_STREAM_ADDR_LSB, 2
# =============================================================================
# Register    : XIP_STREAM_CTR
# Description : FIFO stream control
#               Write a nonzero value to start a streaming read. This will then
#               progress in the background, using flash idle cycles to transfer
#               a linear data block from flash to the streaming FIFO.
#               Decrements automatically (1 at a time) as the stream
#               progresses, and halts on reaching 0.
#               Write 0 to halt an in-progress stream, and discard any in-
#               flight
#               read, so that a new stream can immediately be started (after
#               draining the FIFO and reinitialising STREAM_ADDR)
.equ	XIP_STREAM_CTR_OFFSET, 0x00000018
.equ	XIP_STREAM_CTR_BITS, 0x003fffff
.equ	XIP_STREAM_CTR_RESET, 0x00000000
.equ	XIP_STREAM_CTR_MSB, 21
.equ	XIP_STREAM_CTR_LSB, 0
# =============================================================================
# Register    : XIP_STREAM_FIFO
# Description : FIFO stream data
#               Streamed data is buffered here, for retrieval by the system
#               DMA.
#               This FIFO can also be accessed via the XIP_AUX slave, to avoid
#               exposing
#               the DMA to bus stalls caused by other XIP traffic.
.equ	XIP_STREAM_FIFO_OFFSET, 0x0000001c
.equ	XIP_STREAM_FIFO_BITS, 0xffffffff
.equ	XIP_STREAM_FIFO_RESET, 0x00000000
.equ	XIP_STREAM_FIFO_MSB, 31
.equ	XIP_STREAM_FIFO_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_XIP_H
