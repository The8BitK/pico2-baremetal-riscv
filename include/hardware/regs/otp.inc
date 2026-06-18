#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : OTP
# Version        : 1
# Bus type       : apb
# Description    : SNPS OTP control IF (SBPI and RPi wrapper control)
# =============================================================================
.ifndef	_HARDWARE_REGS_OTP_H
.set	_HARDWARE_REGS_OTP_H, 1
# =============================================================================
# Register    : OTP_SW_LOCK0
# Description : Software lock register for page 0.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK0_OFFSET, 0x00000000
.equ	OTP_SW_LOCK0_BITS, 0x0000000f
.equ	OTP_SW_LOCK0_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK0_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK0_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK0_NSEC_MSB, 3
.equ	OTP_SW_LOCK0_NSEC_LSB, 2
.equ	OTP_SW_LOCK0_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK0_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK0_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK0_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK0_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK0_SEC_MSB, 1
.equ	OTP_SW_LOCK0_SEC_LSB, 0
.equ	OTP_SW_LOCK0_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK0_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK0_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK1
# Description : Software lock register for page 1.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK1_OFFSET, 0x00000004
.equ	OTP_SW_LOCK1_BITS, 0x0000000f
.equ	OTP_SW_LOCK1_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK1_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK1_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK1_NSEC_MSB, 3
.equ	OTP_SW_LOCK1_NSEC_LSB, 2
.equ	OTP_SW_LOCK1_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK1_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK1_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK1_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK1_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK1_SEC_MSB, 1
.equ	OTP_SW_LOCK1_SEC_LSB, 0
.equ	OTP_SW_LOCK1_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK1_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK1_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK2
# Description : Software lock register for page 2.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK2_OFFSET, 0x00000008
.equ	OTP_SW_LOCK2_BITS, 0x0000000f
.equ	OTP_SW_LOCK2_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK2_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK2_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK2_NSEC_MSB, 3
.equ	OTP_SW_LOCK2_NSEC_LSB, 2
.equ	OTP_SW_LOCK2_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK2_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK2_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK2_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK2_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK2_SEC_MSB, 1
.equ	OTP_SW_LOCK2_SEC_LSB, 0
.equ	OTP_SW_LOCK2_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK2_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK2_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK3
# Description : Software lock register for page 3.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK3_OFFSET, 0x0000000c
.equ	OTP_SW_LOCK3_BITS, 0x0000000f
.equ	OTP_SW_LOCK3_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK3_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK3_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK3_NSEC_MSB, 3
.equ	OTP_SW_LOCK3_NSEC_LSB, 2
.equ	OTP_SW_LOCK3_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK3_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK3_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK3_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK3_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK3_SEC_MSB, 1
.equ	OTP_SW_LOCK3_SEC_LSB, 0
.equ	OTP_SW_LOCK3_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK3_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK3_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK4
# Description : Software lock register for page 4.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK4_OFFSET, 0x00000010
.equ	OTP_SW_LOCK4_BITS, 0x0000000f
.equ	OTP_SW_LOCK4_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK4_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK4_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK4_NSEC_MSB, 3
.equ	OTP_SW_LOCK4_NSEC_LSB, 2
.equ	OTP_SW_LOCK4_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK4_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK4_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK4_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK4_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK4_SEC_MSB, 1
.equ	OTP_SW_LOCK4_SEC_LSB, 0
.equ	OTP_SW_LOCK4_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK4_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK4_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK5
# Description : Software lock register for page 5.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK5_OFFSET, 0x00000014
.equ	OTP_SW_LOCK5_BITS, 0x0000000f
.equ	OTP_SW_LOCK5_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK5_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK5_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK5_NSEC_MSB, 3
.equ	OTP_SW_LOCK5_NSEC_LSB, 2
.equ	OTP_SW_LOCK5_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK5_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK5_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK5_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK5_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK5_SEC_MSB, 1
.equ	OTP_SW_LOCK5_SEC_LSB, 0
.equ	OTP_SW_LOCK5_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK5_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK5_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK6
# Description : Software lock register for page 6.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK6_OFFSET, 0x00000018
.equ	OTP_SW_LOCK6_BITS, 0x0000000f
.equ	OTP_SW_LOCK6_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK6_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK6_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK6_NSEC_MSB, 3
.equ	OTP_SW_LOCK6_NSEC_LSB, 2
.equ	OTP_SW_LOCK6_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK6_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK6_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK6_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK6_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK6_SEC_MSB, 1
.equ	OTP_SW_LOCK6_SEC_LSB, 0
.equ	OTP_SW_LOCK6_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK6_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK6_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK7
# Description : Software lock register for page 7.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK7_OFFSET, 0x0000001c
.equ	OTP_SW_LOCK7_BITS, 0x0000000f
.equ	OTP_SW_LOCK7_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK7_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK7_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK7_NSEC_MSB, 3
.equ	OTP_SW_LOCK7_NSEC_LSB, 2
.equ	OTP_SW_LOCK7_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK7_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK7_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK7_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK7_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK7_SEC_MSB, 1
.equ	OTP_SW_LOCK7_SEC_LSB, 0
.equ	OTP_SW_LOCK7_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK7_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK7_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK8
# Description : Software lock register for page 8.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK8_OFFSET, 0x00000020
.equ	OTP_SW_LOCK8_BITS, 0x0000000f
.equ	OTP_SW_LOCK8_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK8_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK8_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK8_NSEC_MSB, 3
.equ	OTP_SW_LOCK8_NSEC_LSB, 2
.equ	OTP_SW_LOCK8_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK8_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK8_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK8_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK8_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK8_SEC_MSB, 1
.equ	OTP_SW_LOCK8_SEC_LSB, 0
.equ	OTP_SW_LOCK8_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK8_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK8_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK9
# Description : Software lock register for page 9.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK9_OFFSET, 0x00000024
.equ	OTP_SW_LOCK9_BITS, 0x0000000f
.equ	OTP_SW_LOCK9_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK9_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK9_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK9_NSEC_MSB, 3
.equ	OTP_SW_LOCK9_NSEC_LSB, 2
.equ	OTP_SW_LOCK9_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK9_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK9_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK9_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK9_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK9_SEC_MSB, 1
.equ	OTP_SW_LOCK9_SEC_LSB, 0
.equ	OTP_SW_LOCK9_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK9_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK9_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK10
# Description : Software lock register for page 10.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK10_OFFSET, 0x00000028
.equ	OTP_SW_LOCK10_BITS, 0x0000000f
.equ	OTP_SW_LOCK10_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK10_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK10_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK10_NSEC_MSB, 3
.equ	OTP_SW_LOCK10_NSEC_LSB, 2
.equ	OTP_SW_LOCK10_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK10_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK10_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK10_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK10_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK10_SEC_MSB, 1
.equ	OTP_SW_LOCK10_SEC_LSB, 0
.equ	OTP_SW_LOCK10_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK10_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK10_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK11
# Description : Software lock register for page 11.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK11_OFFSET, 0x0000002c
.equ	OTP_SW_LOCK11_BITS, 0x0000000f
.equ	OTP_SW_LOCK11_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK11_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK11_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK11_NSEC_MSB, 3
.equ	OTP_SW_LOCK11_NSEC_LSB, 2
.equ	OTP_SW_LOCK11_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK11_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK11_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK11_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK11_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK11_SEC_MSB, 1
.equ	OTP_SW_LOCK11_SEC_LSB, 0
.equ	OTP_SW_LOCK11_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK11_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK11_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK12
# Description : Software lock register for page 12.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK12_OFFSET, 0x00000030
.equ	OTP_SW_LOCK12_BITS, 0x0000000f
.equ	OTP_SW_LOCK12_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK12_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK12_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK12_NSEC_MSB, 3
.equ	OTP_SW_LOCK12_NSEC_LSB, 2
.equ	OTP_SW_LOCK12_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK12_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK12_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK12_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK12_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK12_SEC_MSB, 1
.equ	OTP_SW_LOCK12_SEC_LSB, 0
.equ	OTP_SW_LOCK12_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK12_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK12_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK13
# Description : Software lock register for page 13.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK13_OFFSET, 0x00000034
.equ	OTP_SW_LOCK13_BITS, 0x0000000f
.equ	OTP_SW_LOCK13_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK13_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK13_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK13_NSEC_MSB, 3
.equ	OTP_SW_LOCK13_NSEC_LSB, 2
.equ	OTP_SW_LOCK13_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK13_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK13_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK13_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK13_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK13_SEC_MSB, 1
.equ	OTP_SW_LOCK13_SEC_LSB, 0
.equ	OTP_SW_LOCK13_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK13_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK13_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK14
# Description : Software lock register for page 14.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK14_OFFSET, 0x00000038
.equ	OTP_SW_LOCK14_BITS, 0x0000000f
.equ	OTP_SW_LOCK14_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK14_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK14_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK14_NSEC_MSB, 3
.equ	OTP_SW_LOCK14_NSEC_LSB, 2
.equ	OTP_SW_LOCK14_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK14_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK14_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK14_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK14_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK14_SEC_MSB, 1
.equ	OTP_SW_LOCK14_SEC_LSB, 0
.equ	OTP_SW_LOCK14_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK14_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK14_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK15
# Description : Software lock register for page 15.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK15_OFFSET, 0x0000003c
.equ	OTP_SW_LOCK15_BITS, 0x0000000f
.equ	OTP_SW_LOCK15_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK15_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK15_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK15_NSEC_MSB, 3
.equ	OTP_SW_LOCK15_NSEC_LSB, 2
.equ	OTP_SW_LOCK15_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK15_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK15_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK15_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK15_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK15_SEC_MSB, 1
.equ	OTP_SW_LOCK15_SEC_LSB, 0
.equ	OTP_SW_LOCK15_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK15_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK15_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK16
# Description : Software lock register for page 16.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK16_OFFSET, 0x00000040
.equ	OTP_SW_LOCK16_BITS, 0x0000000f
.equ	OTP_SW_LOCK16_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK16_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK16_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK16_NSEC_MSB, 3
.equ	OTP_SW_LOCK16_NSEC_LSB, 2
.equ	OTP_SW_LOCK16_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK16_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK16_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK16_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK16_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK16_SEC_MSB, 1
.equ	OTP_SW_LOCK16_SEC_LSB, 0
.equ	OTP_SW_LOCK16_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK16_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK16_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK17
# Description : Software lock register for page 17.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK17_OFFSET, 0x00000044
.equ	OTP_SW_LOCK17_BITS, 0x0000000f
.equ	OTP_SW_LOCK17_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK17_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK17_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK17_NSEC_MSB, 3
.equ	OTP_SW_LOCK17_NSEC_LSB, 2
.equ	OTP_SW_LOCK17_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK17_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK17_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK17_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK17_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK17_SEC_MSB, 1
.equ	OTP_SW_LOCK17_SEC_LSB, 0
.equ	OTP_SW_LOCK17_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK17_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK17_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK18
# Description : Software lock register for page 18.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK18_OFFSET, 0x00000048
.equ	OTP_SW_LOCK18_BITS, 0x0000000f
.equ	OTP_SW_LOCK18_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK18_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK18_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK18_NSEC_MSB, 3
.equ	OTP_SW_LOCK18_NSEC_LSB, 2
.equ	OTP_SW_LOCK18_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK18_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK18_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK18_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK18_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK18_SEC_MSB, 1
.equ	OTP_SW_LOCK18_SEC_LSB, 0
.equ	OTP_SW_LOCK18_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK18_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK18_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK19
# Description : Software lock register for page 19.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK19_OFFSET, 0x0000004c
.equ	OTP_SW_LOCK19_BITS, 0x0000000f
.equ	OTP_SW_LOCK19_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK19_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK19_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK19_NSEC_MSB, 3
.equ	OTP_SW_LOCK19_NSEC_LSB, 2
.equ	OTP_SW_LOCK19_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK19_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK19_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK19_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK19_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK19_SEC_MSB, 1
.equ	OTP_SW_LOCK19_SEC_LSB, 0
.equ	OTP_SW_LOCK19_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK19_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK19_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK20
# Description : Software lock register for page 20.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK20_OFFSET, 0x00000050
.equ	OTP_SW_LOCK20_BITS, 0x0000000f
.equ	OTP_SW_LOCK20_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK20_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK20_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK20_NSEC_MSB, 3
.equ	OTP_SW_LOCK20_NSEC_LSB, 2
.equ	OTP_SW_LOCK20_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK20_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK20_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK20_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK20_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK20_SEC_MSB, 1
.equ	OTP_SW_LOCK20_SEC_LSB, 0
.equ	OTP_SW_LOCK20_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK20_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK20_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK21
# Description : Software lock register for page 21.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK21_OFFSET, 0x00000054
.equ	OTP_SW_LOCK21_BITS, 0x0000000f
.equ	OTP_SW_LOCK21_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK21_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK21_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK21_NSEC_MSB, 3
.equ	OTP_SW_LOCK21_NSEC_LSB, 2
.equ	OTP_SW_LOCK21_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK21_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK21_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK21_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK21_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK21_SEC_MSB, 1
.equ	OTP_SW_LOCK21_SEC_LSB, 0
.equ	OTP_SW_LOCK21_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK21_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK21_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK22
# Description : Software lock register for page 22.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK22_OFFSET, 0x00000058
.equ	OTP_SW_LOCK22_BITS, 0x0000000f
.equ	OTP_SW_LOCK22_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK22_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK22_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK22_NSEC_MSB, 3
.equ	OTP_SW_LOCK22_NSEC_LSB, 2
.equ	OTP_SW_LOCK22_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK22_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK22_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK22_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK22_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK22_SEC_MSB, 1
.equ	OTP_SW_LOCK22_SEC_LSB, 0
.equ	OTP_SW_LOCK22_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK22_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK22_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK23
# Description : Software lock register for page 23.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK23_OFFSET, 0x0000005c
.equ	OTP_SW_LOCK23_BITS, 0x0000000f
.equ	OTP_SW_LOCK23_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK23_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK23_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK23_NSEC_MSB, 3
.equ	OTP_SW_LOCK23_NSEC_LSB, 2
.equ	OTP_SW_LOCK23_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK23_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK23_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK23_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK23_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK23_SEC_MSB, 1
.equ	OTP_SW_LOCK23_SEC_LSB, 0
.equ	OTP_SW_LOCK23_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK23_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK23_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK24
# Description : Software lock register for page 24.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK24_OFFSET, 0x00000060
.equ	OTP_SW_LOCK24_BITS, 0x0000000f
.equ	OTP_SW_LOCK24_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK24_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK24_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK24_NSEC_MSB, 3
.equ	OTP_SW_LOCK24_NSEC_LSB, 2
.equ	OTP_SW_LOCK24_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK24_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK24_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK24_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK24_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK24_SEC_MSB, 1
.equ	OTP_SW_LOCK24_SEC_LSB, 0
.equ	OTP_SW_LOCK24_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK24_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK24_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK25
# Description : Software lock register for page 25.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK25_OFFSET, 0x00000064
.equ	OTP_SW_LOCK25_BITS, 0x0000000f
.equ	OTP_SW_LOCK25_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK25_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK25_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK25_NSEC_MSB, 3
.equ	OTP_SW_LOCK25_NSEC_LSB, 2
.equ	OTP_SW_LOCK25_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK25_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK25_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK25_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK25_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK25_SEC_MSB, 1
.equ	OTP_SW_LOCK25_SEC_LSB, 0
.equ	OTP_SW_LOCK25_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK25_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK25_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK26
# Description : Software lock register for page 26.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK26_OFFSET, 0x00000068
.equ	OTP_SW_LOCK26_BITS, 0x0000000f
.equ	OTP_SW_LOCK26_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK26_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK26_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK26_NSEC_MSB, 3
.equ	OTP_SW_LOCK26_NSEC_LSB, 2
.equ	OTP_SW_LOCK26_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK26_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK26_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK26_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK26_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK26_SEC_MSB, 1
.equ	OTP_SW_LOCK26_SEC_LSB, 0
.equ	OTP_SW_LOCK26_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK26_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK26_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK27
# Description : Software lock register for page 27.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK27_OFFSET, 0x0000006c
.equ	OTP_SW_LOCK27_BITS, 0x0000000f
.equ	OTP_SW_LOCK27_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK27_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK27_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK27_NSEC_MSB, 3
.equ	OTP_SW_LOCK27_NSEC_LSB, 2
.equ	OTP_SW_LOCK27_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK27_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK27_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK27_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK27_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK27_SEC_MSB, 1
.equ	OTP_SW_LOCK27_SEC_LSB, 0
.equ	OTP_SW_LOCK27_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK27_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK27_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK28
# Description : Software lock register for page 28.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK28_OFFSET, 0x00000070
.equ	OTP_SW_LOCK28_BITS, 0x0000000f
.equ	OTP_SW_LOCK28_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK28_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK28_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK28_NSEC_MSB, 3
.equ	OTP_SW_LOCK28_NSEC_LSB, 2
.equ	OTP_SW_LOCK28_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK28_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK28_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK28_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK28_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK28_SEC_MSB, 1
.equ	OTP_SW_LOCK28_SEC_LSB, 0
.equ	OTP_SW_LOCK28_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK28_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK28_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK29
# Description : Software lock register for page 29.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK29_OFFSET, 0x00000074
.equ	OTP_SW_LOCK29_BITS, 0x0000000f
.equ	OTP_SW_LOCK29_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK29_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK29_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK29_NSEC_MSB, 3
.equ	OTP_SW_LOCK29_NSEC_LSB, 2
.equ	OTP_SW_LOCK29_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK29_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK29_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK29_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK29_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK29_SEC_MSB, 1
.equ	OTP_SW_LOCK29_SEC_LSB, 0
.equ	OTP_SW_LOCK29_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK29_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK29_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK30
# Description : Software lock register for page 30.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK30_OFFSET, 0x00000078
.equ	OTP_SW_LOCK30_BITS, 0x0000000f
.equ	OTP_SW_LOCK30_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK30_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK30_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK30_NSEC_MSB, 3
.equ	OTP_SW_LOCK30_NSEC_LSB, 2
.equ	OTP_SW_LOCK30_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK30_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK30_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK30_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK30_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK30_SEC_MSB, 1
.equ	OTP_SW_LOCK30_SEC_LSB, 0
.equ	OTP_SW_LOCK30_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK30_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK30_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK31
# Description : Software lock register for page 31.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK31_OFFSET, 0x0000007c
.equ	OTP_SW_LOCK31_BITS, 0x0000000f
.equ	OTP_SW_LOCK31_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK31_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK31_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK31_NSEC_MSB, 3
.equ	OTP_SW_LOCK31_NSEC_LSB, 2
.equ	OTP_SW_LOCK31_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK31_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK31_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK31_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK31_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK31_SEC_MSB, 1
.equ	OTP_SW_LOCK31_SEC_LSB, 0
.equ	OTP_SW_LOCK31_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK31_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK31_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK32
# Description : Software lock register for page 32.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK32_OFFSET, 0x00000080
.equ	OTP_SW_LOCK32_BITS, 0x0000000f
.equ	OTP_SW_LOCK32_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK32_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK32_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK32_NSEC_MSB, 3
.equ	OTP_SW_LOCK32_NSEC_LSB, 2
.equ	OTP_SW_LOCK32_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK32_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK32_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK32_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK32_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK32_SEC_MSB, 1
.equ	OTP_SW_LOCK32_SEC_LSB, 0
.equ	OTP_SW_LOCK32_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK32_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK32_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK33
# Description : Software lock register for page 33.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK33_OFFSET, 0x00000084
.equ	OTP_SW_LOCK33_BITS, 0x0000000f
.equ	OTP_SW_LOCK33_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK33_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK33_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK33_NSEC_MSB, 3
.equ	OTP_SW_LOCK33_NSEC_LSB, 2
.equ	OTP_SW_LOCK33_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK33_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK33_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK33_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK33_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK33_SEC_MSB, 1
.equ	OTP_SW_LOCK33_SEC_LSB, 0
.equ	OTP_SW_LOCK33_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK33_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK33_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK34
# Description : Software lock register for page 34.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK34_OFFSET, 0x00000088
.equ	OTP_SW_LOCK34_BITS, 0x0000000f
.equ	OTP_SW_LOCK34_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK34_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK34_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK34_NSEC_MSB, 3
.equ	OTP_SW_LOCK34_NSEC_LSB, 2
.equ	OTP_SW_LOCK34_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK34_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK34_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK34_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK34_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK34_SEC_MSB, 1
.equ	OTP_SW_LOCK34_SEC_LSB, 0
.equ	OTP_SW_LOCK34_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK34_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK34_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK35
# Description : Software lock register for page 35.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK35_OFFSET, 0x0000008c
.equ	OTP_SW_LOCK35_BITS, 0x0000000f
.equ	OTP_SW_LOCK35_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK35_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK35_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK35_NSEC_MSB, 3
.equ	OTP_SW_LOCK35_NSEC_LSB, 2
.equ	OTP_SW_LOCK35_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK35_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK35_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK35_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK35_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK35_SEC_MSB, 1
.equ	OTP_SW_LOCK35_SEC_LSB, 0
.equ	OTP_SW_LOCK35_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK35_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK35_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK36
# Description : Software lock register for page 36.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK36_OFFSET, 0x00000090
.equ	OTP_SW_LOCK36_BITS, 0x0000000f
.equ	OTP_SW_LOCK36_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK36_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK36_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK36_NSEC_MSB, 3
.equ	OTP_SW_LOCK36_NSEC_LSB, 2
.equ	OTP_SW_LOCK36_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK36_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK36_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK36_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK36_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK36_SEC_MSB, 1
.equ	OTP_SW_LOCK36_SEC_LSB, 0
.equ	OTP_SW_LOCK36_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK36_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK36_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK37
# Description : Software lock register for page 37.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK37_OFFSET, 0x00000094
.equ	OTP_SW_LOCK37_BITS, 0x0000000f
.equ	OTP_SW_LOCK37_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK37_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK37_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK37_NSEC_MSB, 3
.equ	OTP_SW_LOCK37_NSEC_LSB, 2
.equ	OTP_SW_LOCK37_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK37_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK37_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK37_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK37_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK37_SEC_MSB, 1
.equ	OTP_SW_LOCK37_SEC_LSB, 0
.equ	OTP_SW_LOCK37_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK37_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK37_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK38
# Description : Software lock register for page 38.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK38_OFFSET, 0x00000098
.equ	OTP_SW_LOCK38_BITS, 0x0000000f
.equ	OTP_SW_LOCK38_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK38_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK38_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK38_NSEC_MSB, 3
.equ	OTP_SW_LOCK38_NSEC_LSB, 2
.equ	OTP_SW_LOCK38_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK38_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK38_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK38_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK38_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK38_SEC_MSB, 1
.equ	OTP_SW_LOCK38_SEC_LSB, 0
.equ	OTP_SW_LOCK38_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK38_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK38_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK39
# Description : Software lock register for page 39.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK39_OFFSET, 0x0000009c
.equ	OTP_SW_LOCK39_BITS, 0x0000000f
.equ	OTP_SW_LOCK39_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK39_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK39_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK39_NSEC_MSB, 3
.equ	OTP_SW_LOCK39_NSEC_LSB, 2
.equ	OTP_SW_LOCK39_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK39_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK39_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK39_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK39_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK39_SEC_MSB, 1
.equ	OTP_SW_LOCK39_SEC_LSB, 0
.equ	OTP_SW_LOCK39_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK39_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK39_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK40
# Description : Software lock register for page 40.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK40_OFFSET, 0x000000a0
.equ	OTP_SW_LOCK40_BITS, 0x0000000f
.equ	OTP_SW_LOCK40_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK40_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK40_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK40_NSEC_MSB, 3
.equ	OTP_SW_LOCK40_NSEC_LSB, 2
.equ	OTP_SW_LOCK40_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK40_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK40_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK40_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK40_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK40_SEC_MSB, 1
.equ	OTP_SW_LOCK40_SEC_LSB, 0
.equ	OTP_SW_LOCK40_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK40_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK40_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK41
# Description : Software lock register for page 41.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK41_OFFSET, 0x000000a4
.equ	OTP_SW_LOCK41_BITS, 0x0000000f
.equ	OTP_SW_LOCK41_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK41_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK41_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK41_NSEC_MSB, 3
.equ	OTP_SW_LOCK41_NSEC_LSB, 2
.equ	OTP_SW_LOCK41_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK41_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK41_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK41_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK41_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK41_SEC_MSB, 1
.equ	OTP_SW_LOCK41_SEC_LSB, 0
.equ	OTP_SW_LOCK41_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK41_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK41_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK42
# Description : Software lock register for page 42.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK42_OFFSET, 0x000000a8
.equ	OTP_SW_LOCK42_BITS, 0x0000000f
.equ	OTP_SW_LOCK42_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK42_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK42_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK42_NSEC_MSB, 3
.equ	OTP_SW_LOCK42_NSEC_LSB, 2
.equ	OTP_SW_LOCK42_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK42_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK42_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK42_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK42_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK42_SEC_MSB, 1
.equ	OTP_SW_LOCK42_SEC_LSB, 0
.equ	OTP_SW_LOCK42_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK42_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK42_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK43
# Description : Software lock register for page 43.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK43_OFFSET, 0x000000ac
.equ	OTP_SW_LOCK43_BITS, 0x0000000f
.equ	OTP_SW_LOCK43_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK43_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK43_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK43_NSEC_MSB, 3
.equ	OTP_SW_LOCK43_NSEC_LSB, 2
.equ	OTP_SW_LOCK43_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK43_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK43_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK43_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK43_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK43_SEC_MSB, 1
.equ	OTP_SW_LOCK43_SEC_LSB, 0
.equ	OTP_SW_LOCK43_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK43_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK43_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK44
# Description : Software lock register for page 44.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK44_OFFSET, 0x000000b0
.equ	OTP_SW_LOCK44_BITS, 0x0000000f
.equ	OTP_SW_LOCK44_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK44_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK44_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK44_NSEC_MSB, 3
.equ	OTP_SW_LOCK44_NSEC_LSB, 2
.equ	OTP_SW_LOCK44_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK44_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK44_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK44_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK44_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK44_SEC_MSB, 1
.equ	OTP_SW_LOCK44_SEC_LSB, 0
.equ	OTP_SW_LOCK44_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK44_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK44_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK45
# Description : Software lock register for page 45.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK45_OFFSET, 0x000000b4
.equ	OTP_SW_LOCK45_BITS, 0x0000000f
.equ	OTP_SW_LOCK45_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK45_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK45_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK45_NSEC_MSB, 3
.equ	OTP_SW_LOCK45_NSEC_LSB, 2
.equ	OTP_SW_LOCK45_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK45_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK45_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK45_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK45_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK45_SEC_MSB, 1
.equ	OTP_SW_LOCK45_SEC_LSB, 0
.equ	OTP_SW_LOCK45_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK45_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK45_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK46
# Description : Software lock register for page 46.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK46_OFFSET, 0x000000b8
.equ	OTP_SW_LOCK46_BITS, 0x0000000f
.equ	OTP_SW_LOCK46_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK46_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK46_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK46_NSEC_MSB, 3
.equ	OTP_SW_LOCK46_NSEC_LSB, 2
.equ	OTP_SW_LOCK46_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK46_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK46_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK46_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK46_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK46_SEC_MSB, 1
.equ	OTP_SW_LOCK46_SEC_LSB, 0
.equ	OTP_SW_LOCK46_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK46_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK46_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK47
# Description : Software lock register for page 47.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK47_OFFSET, 0x000000bc
.equ	OTP_SW_LOCK47_BITS, 0x0000000f
.equ	OTP_SW_LOCK47_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK47_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK47_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK47_NSEC_MSB, 3
.equ	OTP_SW_LOCK47_NSEC_LSB, 2
.equ	OTP_SW_LOCK47_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK47_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK47_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK47_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK47_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK47_SEC_MSB, 1
.equ	OTP_SW_LOCK47_SEC_LSB, 0
.equ	OTP_SW_LOCK47_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK47_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK47_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK48
# Description : Software lock register for page 48.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK48_OFFSET, 0x000000c0
.equ	OTP_SW_LOCK48_BITS, 0x0000000f
.equ	OTP_SW_LOCK48_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK48_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK48_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK48_NSEC_MSB, 3
.equ	OTP_SW_LOCK48_NSEC_LSB, 2
.equ	OTP_SW_LOCK48_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK48_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK48_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK48_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK48_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK48_SEC_MSB, 1
.equ	OTP_SW_LOCK48_SEC_LSB, 0
.equ	OTP_SW_LOCK48_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK48_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK48_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK49
# Description : Software lock register for page 49.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK49_OFFSET, 0x000000c4
.equ	OTP_SW_LOCK49_BITS, 0x0000000f
.equ	OTP_SW_LOCK49_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK49_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK49_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK49_NSEC_MSB, 3
.equ	OTP_SW_LOCK49_NSEC_LSB, 2
.equ	OTP_SW_LOCK49_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK49_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK49_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK49_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK49_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK49_SEC_MSB, 1
.equ	OTP_SW_LOCK49_SEC_LSB, 0
.equ	OTP_SW_LOCK49_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK49_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK49_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK50
# Description : Software lock register for page 50.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK50_OFFSET, 0x000000c8
.equ	OTP_SW_LOCK50_BITS, 0x0000000f
.equ	OTP_SW_LOCK50_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK50_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK50_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK50_NSEC_MSB, 3
.equ	OTP_SW_LOCK50_NSEC_LSB, 2
.equ	OTP_SW_LOCK50_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK50_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK50_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK50_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK50_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK50_SEC_MSB, 1
.equ	OTP_SW_LOCK50_SEC_LSB, 0
.equ	OTP_SW_LOCK50_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK50_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK50_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK51
# Description : Software lock register for page 51.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK51_OFFSET, 0x000000cc
.equ	OTP_SW_LOCK51_BITS, 0x0000000f
.equ	OTP_SW_LOCK51_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK51_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK51_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK51_NSEC_MSB, 3
.equ	OTP_SW_LOCK51_NSEC_LSB, 2
.equ	OTP_SW_LOCK51_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK51_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK51_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK51_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK51_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK51_SEC_MSB, 1
.equ	OTP_SW_LOCK51_SEC_LSB, 0
.equ	OTP_SW_LOCK51_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK51_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK51_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK52
# Description : Software lock register for page 52.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK52_OFFSET, 0x000000d0
.equ	OTP_SW_LOCK52_BITS, 0x0000000f
.equ	OTP_SW_LOCK52_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK52_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK52_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK52_NSEC_MSB, 3
.equ	OTP_SW_LOCK52_NSEC_LSB, 2
.equ	OTP_SW_LOCK52_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK52_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK52_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK52_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK52_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK52_SEC_MSB, 1
.equ	OTP_SW_LOCK52_SEC_LSB, 0
.equ	OTP_SW_LOCK52_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK52_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK52_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK53
# Description : Software lock register for page 53.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK53_OFFSET, 0x000000d4
.equ	OTP_SW_LOCK53_BITS, 0x0000000f
.equ	OTP_SW_LOCK53_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK53_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK53_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK53_NSEC_MSB, 3
.equ	OTP_SW_LOCK53_NSEC_LSB, 2
.equ	OTP_SW_LOCK53_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK53_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK53_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK53_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK53_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK53_SEC_MSB, 1
.equ	OTP_SW_LOCK53_SEC_LSB, 0
.equ	OTP_SW_LOCK53_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK53_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK53_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK54
# Description : Software lock register for page 54.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK54_OFFSET, 0x000000d8
.equ	OTP_SW_LOCK54_BITS, 0x0000000f
.equ	OTP_SW_LOCK54_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK54_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK54_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK54_NSEC_MSB, 3
.equ	OTP_SW_LOCK54_NSEC_LSB, 2
.equ	OTP_SW_LOCK54_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK54_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK54_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK54_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK54_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK54_SEC_MSB, 1
.equ	OTP_SW_LOCK54_SEC_LSB, 0
.equ	OTP_SW_LOCK54_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK54_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK54_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK55
# Description : Software lock register for page 55.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK55_OFFSET, 0x000000dc
.equ	OTP_SW_LOCK55_BITS, 0x0000000f
.equ	OTP_SW_LOCK55_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK55_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK55_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK55_NSEC_MSB, 3
.equ	OTP_SW_LOCK55_NSEC_LSB, 2
.equ	OTP_SW_LOCK55_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK55_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK55_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK55_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK55_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK55_SEC_MSB, 1
.equ	OTP_SW_LOCK55_SEC_LSB, 0
.equ	OTP_SW_LOCK55_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK55_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK55_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK56
# Description : Software lock register for page 56.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK56_OFFSET, 0x000000e0
.equ	OTP_SW_LOCK56_BITS, 0x0000000f
.equ	OTP_SW_LOCK56_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK56_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK56_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK56_NSEC_MSB, 3
.equ	OTP_SW_LOCK56_NSEC_LSB, 2
.equ	OTP_SW_LOCK56_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK56_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK56_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK56_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK56_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK56_SEC_MSB, 1
.equ	OTP_SW_LOCK56_SEC_LSB, 0
.equ	OTP_SW_LOCK56_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK56_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK56_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK57
# Description : Software lock register for page 57.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK57_OFFSET, 0x000000e4
.equ	OTP_SW_LOCK57_BITS, 0x0000000f
.equ	OTP_SW_LOCK57_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK57_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK57_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK57_NSEC_MSB, 3
.equ	OTP_SW_LOCK57_NSEC_LSB, 2
.equ	OTP_SW_LOCK57_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK57_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK57_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK57_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK57_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK57_SEC_MSB, 1
.equ	OTP_SW_LOCK57_SEC_LSB, 0
.equ	OTP_SW_LOCK57_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK57_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK57_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK58
# Description : Software lock register for page 58.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK58_OFFSET, 0x000000e8
.equ	OTP_SW_LOCK58_BITS, 0x0000000f
.equ	OTP_SW_LOCK58_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK58_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK58_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK58_NSEC_MSB, 3
.equ	OTP_SW_LOCK58_NSEC_LSB, 2
.equ	OTP_SW_LOCK58_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK58_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK58_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK58_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK58_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK58_SEC_MSB, 1
.equ	OTP_SW_LOCK58_SEC_LSB, 0
.equ	OTP_SW_LOCK58_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK58_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK58_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK59
# Description : Software lock register for page 59.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK59_OFFSET, 0x000000ec
.equ	OTP_SW_LOCK59_BITS, 0x0000000f
.equ	OTP_SW_LOCK59_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK59_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK59_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK59_NSEC_MSB, 3
.equ	OTP_SW_LOCK59_NSEC_LSB, 2
.equ	OTP_SW_LOCK59_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK59_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK59_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK59_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK59_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK59_SEC_MSB, 1
.equ	OTP_SW_LOCK59_SEC_LSB, 0
.equ	OTP_SW_LOCK59_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK59_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK59_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK60
# Description : Software lock register for page 60.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK60_OFFSET, 0x000000f0
.equ	OTP_SW_LOCK60_BITS, 0x0000000f
.equ	OTP_SW_LOCK60_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK60_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK60_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK60_NSEC_MSB, 3
.equ	OTP_SW_LOCK60_NSEC_LSB, 2
.equ	OTP_SW_LOCK60_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK60_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK60_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK60_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK60_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK60_SEC_MSB, 1
.equ	OTP_SW_LOCK60_SEC_LSB, 0
.equ	OTP_SW_LOCK60_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK60_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK60_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK61
# Description : Software lock register for page 61.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK61_OFFSET, 0x000000f4
.equ	OTP_SW_LOCK61_BITS, 0x0000000f
.equ	OTP_SW_LOCK61_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK61_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK61_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK61_NSEC_MSB, 3
.equ	OTP_SW_LOCK61_NSEC_LSB, 2
.equ	OTP_SW_LOCK61_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK61_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK61_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK61_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK61_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK61_SEC_MSB, 1
.equ	OTP_SW_LOCK61_SEC_LSB, 0
.equ	OTP_SW_LOCK61_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK61_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK61_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK62
# Description : Software lock register for page 62.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK62_OFFSET, 0x000000f8
.equ	OTP_SW_LOCK62_BITS, 0x0000000f
.equ	OTP_SW_LOCK62_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK62_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK62_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK62_NSEC_MSB, 3
.equ	OTP_SW_LOCK62_NSEC_LSB, 2
.equ	OTP_SW_LOCK62_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK62_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK62_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK62_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK62_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK62_SEC_MSB, 1
.equ	OTP_SW_LOCK62_SEC_LSB, 0
.equ	OTP_SW_LOCK62_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK62_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK62_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SW_LOCK63
# Description : Software lock register for page 63.
#
#               Locks are initialised from the OTP lock pages at reset. This
#               register can be written to further advance the lock state of
#               each page (until next reset), and read to check the current
#               lock state of a page.
.equ	OTP_SW_LOCK63_OFFSET, 0x000000fc
.equ	OTP_SW_LOCK63_BITS, 0x0000000f
.equ	OTP_SW_LOCK63_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK63_NSEC
# Description : Non-secure lock status. Writes are OR'd with the current value.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK63_NSEC_BITS, 0x0000000c
.equ	OTP_SW_LOCK63_NSEC_MSB, 3
.equ	OTP_SW_LOCK63_NSEC_LSB, 2
.equ	OTP_SW_LOCK63_NSEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK63_NSEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK63_NSEC_VALUE_INACCESSIBLE, 0x3
# -----------------------------------------------------------------------------
# Field       : OTP_SW_LOCK63_SEC
# Description : Secure lock status. Writes are OR'd with the current value.
#               This field is read-only to Non-secure code.
#               0x0 -> read_write
#               0x1 -> read_only
#               0x3 -> inaccessible
.equ	OTP_SW_LOCK63_SEC_BITS, 0x00000003
.equ	OTP_SW_LOCK63_SEC_MSB, 1
.equ	OTP_SW_LOCK63_SEC_LSB, 0
.equ	OTP_SW_LOCK63_SEC_VALUE_READ_WRITE, 0x0
.equ	OTP_SW_LOCK63_SEC_VALUE_READ_ONLY, 0x1
.equ	OTP_SW_LOCK63_SEC_VALUE_INACCESSIBLE, 0x3
# =============================================================================
# Register    : OTP_SBPI_INSTR
# Description : Dispatch instructions to the SBPI interface, used for
#               programming the OTP fuses.
.equ	OTP_SBPI_INSTR_OFFSET, 0x00000100
.equ	OTP_SBPI_INSTR_BITS, 0x7fffffff
.equ	OTP_SBPI_INSTR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SBPI_INSTR_EXEC
# Description : Execute instruction
.equ	OTP_SBPI_INSTR_EXEC_RESET, 0x0
.equ	OTP_SBPI_INSTR_EXEC_BITS, 0x40000000
.equ	OTP_SBPI_INSTR_EXEC_MSB, 30
.equ	OTP_SBPI_INSTR_EXEC_LSB, 30
# -----------------------------------------------------------------------------
# Field       : OTP_SBPI_INSTR_IS_WR
# Description : Payload type is write
.equ	OTP_SBPI_INSTR_IS_WR_RESET, 0x0
.equ	OTP_SBPI_INSTR_IS_WR_BITS, 0x20000000
.equ	OTP_SBPI_INSTR_IS_WR_MSB, 29
.equ	OTP_SBPI_INSTR_IS_WR_LSB, 29
# -----------------------------------------------------------------------------
# Field       : OTP_SBPI_INSTR_HAS_PAYLOAD
# Description : Instruction has payload (data to be written or to be read)
.equ	OTP_SBPI_INSTR_HAS_PAYLOAD_RESET, 0x0
.equ	OTP_SBPI_INSTR_HAS_PAYLOAD_BITS, 0x10000000
.equ	OTP_SBPI_INSTR_HAS_PAYLOAD_MSB, 28
.equ	OTP_SBPI_INSTR_HAS_PAYLOAD_LSB, 28
# -----------------------------------------------------------------------------
# Field       : OTP_SBPI_INSTR_PAYLOAD_SIZE_M1
# Description : Instruction payload size in bytes minus 1
.equ	OTP_SBPI_INSTR_PAYLOAD_SIZE_M1_RESET, 0x0
.equ	OTP_SBPI_INSTR_PAYLOAD_SIZE_M1_BITS, 0x0f000000
.equ	OTP_SBPI_INSTR_PAYLOAD_SIZE_M1_MSB, 27
.equ	OTP_SBPI_INSTR_PAYLOAD_SIZE_M1_LSB, 24
# -----------------------------------------------------------------------------
# Field       : OTP_SBPI_INSTR_TARGET
# Description : Instruction target, it can be PMC (0x3a) or DAP (0x02)
.equ	OTP_SBPI_INSTR_TARGET_RESET, 0x00
.equ	OTP_SBPI_INSTR_TARGET_BITS, 0x00ff0000
.equ	OTP_SBPI_INSTR_TARGET_MSB, 23
.equ	OTP_SBPI_INSTR_TARGET_LSB, 16
# -----------------------------------------------------------------------------
# Field       : OTP_SBPI_INSTR_CMD
.equ	OTP_SBPI_INSTR_CMD_RESET, 0x00
.equ	OTP_SBPI_INSTR_CMD_BITS, 0x0000ff00
.equ	OTP_SBPI_INSTR_CMD_MSB, 15
.equ	OTP_SBPI_INSTR_CMD_LSB, 8
# -----------------------------------------------------------------------------
# Field       : OTP_SBPI_INSTR_SHORT_WDATA
# Description : wdata to be used only when payload_size_m1=0
.equ	OTP_SBPI_INSTR_SHORT_WDATA_RESET, 0x00
.equ	OTP_SBPI_INSTR_SHORT_WDATA_BITS, 0x000000ff
.equ	OTP_SBPI_INSTR_SHORT_WDATA_MSB, 7
.equ	OTP_SBPI_INSTR_SHORT_WDATA_LSB, 0
# =============================================================================
# Register    : OTP_SBPI_WDATA_0
# Description : SBPI write payload bytes 3..0
.equ	OTP_SBPI_WDATA_0_OFFSET, 0x00000104
.equ	OTP_SBPI_WDATA_0_BITS, 0xffffffff
.equ	OTP_SBPI_WDATA_0_RESET, 0x00000000
.equ	OTP_SBPI_WDATA_0_MSB, 31
.equ	OTP_SBPI_WDATA_0_LSB, 0
# =============================================================================
# Register    : OTP_SBPI_WDATA_1
# Description : SBPI write payload bytes 7..4
.equ	OTP_SBPI_WDATA_1_OFFSET, 0x00000108
.equ	OTP_SBPI_WDATA_1_BITS, 0xffffffff
.equ	OTP_SBPI_WDATA_1_RESET, 0x00000000
.equ	OTP_SBPI_WDATA_1_MSB, 31
.equ	OTP_SBPI_WDATA_1_LSB, 0
# =============================================================================
# Register    : OTP_SBPI_WDATA_2
# Description : SBPI write payload bytes 11..8
.equ	OTP_SBPI_WDATA_2_OFFSET, 0x0000010c
.equ	OTP_SBPI_WDATA_2_BITS, 0xffffffff
.equ	OTP_SBPI_WDATA_2_RESET, 0x00000000
.equ	OTP_SBPI_WDATA_2_MSB, 31
.equ	OTP_SBPI_WDATA_2_LSB, 0
# =============================================================================
# Register    : OTP_SBPI_WDATA_3
# Description : SBPI write payload bytes 15..12
.equ	OTP_SBPI_WDATA_3_OFFSET, 0x00000110
.equ	OTP_SBPI_WDATA_3_BITS, 0xffffffff
.equ	OTP_SBPI_WDATA_3_RESET, 0x00000000
.equ	OTP_SBPI_WDATA_3_MSB, 31
.equ	OTP_SBPI_WDATA_3_LSB, 0
# =============================================================================
# Register    : OTP_SBPI_RDATA_0
# Description : Read payload bytes 3..0. Once read, the data in the register
#               will automatically clear to 0.
.equ	OTP_SBPI_RDATA_0_OFFSET, 0x00000114
.equ	OTP_SBPI_RDATA_0_BITS, 0xffffffff
.equ	OTP_SBPI_RDATA_0_RESET, 0x00000000
.equ	OTP_SBPI_RDATA_0_MSB, 31
.equ	OTP_SBPI_RDATA_0_LSB, 0
# =============================================================================
# Register    : OTP_SBPI_RDATA_1
# Description : Read payload bytes 7..4. Once read, the data in the register
#               will automatically clear to 0.
.equ	OTP_SBPI_RDATA_1_OFFSET, 0x00000118
.equ	OTP_SBPI_RDATA_1_BITS, 0xffffffff
.equ	OTP_SBPI_RDATA_1_RESET, 0x00000000
.equ	OTP_SBPI_RDATA_1_MSB, 31
.equ	OTP_SBPI_RDATA_1_LSB, 0
# =============================================================================
# Register    : OTP_SBPI_RDATA_2
# Description : Read payload bytes 11..8. Once read, the data in the register
#               will automatically clear to 0.
.equ	OTP_SBPI_RDATA_2_OFFSET, 0x0000011c
.equ	OTP_SBPI_RDATA_2_BITS, 0xffffffff
.equ	OTP_SBPI_RDATA_2_RESET, 0x00000000
.equ	OTP_SBPI_RDATA_2_MSB, 31
.equ	OTP_SBPI_RDATA_2_LSB, 0
# =============================================================================
# Register    : OTP_SBPI_RDATA_3
# Description : Read payload bytes 15..12. Once read, the data in the register
#               will automatically clear to 0.
.equ	OTP_SBPI_RDATA_3_OFFSET, 0x00000120
.equ	OTP_SBPI_RDATA_3_BITS, 0xffffffff
.equ	OTP_SBPI_RDATA_3_RESET, 0x00000000
.equ	OTP_SBPI_RDATA_3_MSB, 31
.equ	OTP_SBPI_RDATA_3_LSB, 0
# =============================================================================
# Register    : OTP_SBPI_STATUS
.equ	OTP_SBPI_STATUS_OFFSET, 0x00000124
.equ	OTP_SBPI_STATUS_BITS, 0x00ff1111
.equ	OTP_SBPI_STATUS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_SBPI_STATUS_MISO
# Description : SBPI MISO (master in - slave out): response from SBPI
.equ	OTP_SBPI_STATUS_MISO_BITS, 0x00ff0000
.equ	OTP_SBPI_STATUS_MISO_MSB, 23
.equ	OTP_SBPI_STATUS_MISO_LSB, 16
# -----------------------------------------------------------------------------
# Field       : OTP_SBPI_STATUS_FLAG
# Description : SBPI flag
.equ	OTP_SBPI_STATUS_FLAG_BITS, 0x00001000
.equ	OTP_SBPI_STATUS_FLAG_MSB, 12
.equ	OTP_SBPI_STATUS_FLAG_LSB, 12
# -----------------------------------------------------------------------------
# Field       : OTP_SBPI_STATUS_INSTR_MISS
# Description : Last instruction missed (dropped), as the previous has not
#               finished running
.equ	OTP_SBPI_STATUS_INSTR_MISS_RESET, 0x0
.equ	OTP_SBPI_STATUS_INSTR_MISS_BITS, 0x00000100
.equ	OTP_SBPI_STATUS_INSTR_MISS_MSB, 8
.equ	OTP_SBPI_STATUS_INSTR_MISS_LSB, 8
# -----------------------------------------------------------------------------
# Field       : OTP_SBPI_STATUS_INSTR_DONE
# Description : Last instruction done
.equ	OTP_SBPI_STATUS_INSTR_DONE_RESET, 0x0
.equ	OTP_SBPI_STATUS_INSTR_DONE_BITS, 0x00000010
.equ	OTP_SBPI_STATUS_INSTR_DONE_MSB, 4
.equ	OTP_SBPI_STATUS_INSTR_DONE_LSB, 4
# -----------------------------------------------------------------------------
# Field       : OTP_SBPI_STATUS_RDATA_VLD
# Description : Read command has returned data
.equ	OTP_SBPI_STATUS_RDATA_VLD_RESET, 0x0
.equ	OTP_SBPI_STATUS_RDATA_VLD_BITS, 0x00000001
.equ	OTP_SBPI_STATUS_RDATA_VLD_MSB, 0
.equ	OTP_SBPI_STATUS_RDATA_VLD_LSB, 0
# =============================================================================
# Register    : OTP_USR
# Description : Controls for APB data read interface (USER interface)
.equ	OTP_USR_OFFSET, 0x00000128
.equ	OTP_USR_BITS, 0x00000011
.equ	OTP_USR_RESET, 0x00000001
# -----------------------------------------------------------------------------
# Field       : OTP_USR_PD
# Description : Power-down; 1 disables current reference. Must be 0 to read
#               data from the OTP.
.equ	OTP_USR_PD_RESET, 0x0
.equ	OTP_USR_PD_BITS, 0x00000010
.equ	OTP_USR_PD_MSB, 4
.equ	OTP_USR_PD_LSB, 4
# -----------------------------------------------------------------------------
# Field       : OTP_USR_DCTRL
# Description : 1 enables USER interface; 0 disables USER interface (enables
#               SBPI).
#
#               This bit must be cleared before performing any SBPI access,
#               such as when programming the OTP. The APB data read interface
#               (USER interface) will be inaccessible during this time, and
#               will return a bus error if any read is attempted.
.equ	OTP_USR_DCTRL_RESET, 0x1
.equ	OTP_USR_DCTRL_BITS, 0x00000001
.equ	OTP_USR_DCTRL_MSB, 0
.equ	OTP_USR_DCTRL_LSB, 0
# =============================================================================
# Register    : OTP_DBG
# Description : Debug for OTP power-on state machine
.equ	OTP_DBG_OFFSET, 0x0000012c
.equ	OTP_DBG_BITS, 0x000010ff
.equ	OTP_DBG_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_DBG_CUSTOMER_RMA_FLAG
# Description : The chip is in RMA mode
.equ	OTP_DBG_CUSTOMER_RMA_FLAG_BITS, 0x00001000
.equ	OTP_DBG_CUSTOMER_RMA_FLAG_MSB, 12
.equ	OTP_DBG_CUSTOMER_RMA_FLAG_LSB, 12
# -----------------------------------------------------------------------------
# Field       : OTP_DBG_PSM_STATE
# Description : Monitor the PSM FSM's state
.equ	OTP_DBG_PSM_STATE_BITS, 0x000000f0
.equ	OTP_DBG_PSM_STATE_MSB, 7
.equ	OTP_DBG_PSM_STATE_LSB, 4
# -----------------------------------------------------------------------------
# Field       : OTP_DBG_ROSC_UP
# Description : Ring oscillator is up and running
.equ	OTP_DBG_ROSC_UP_BITS, 0x00000008
.equ	OTP_DBG_ROSC_UP_MSB, 3
.equ	OTP_DBG_ROSC_UP_LSB, 3
# -----------------------------------------------------------------------------
# Field       : OTP_DBG_ROSC_UP_SEEN
# Description : Ring oscillator was seen up and running
.equ	OTP_DBG_ROSC_UP_SEEN_RESET, 0x0
.equ	OTP_DBG_ROSC_UP_SEEN_BITS, 0x00000004
.equ	OTP_DBG_ROSC_UP_SEEN_MSB, 2
.equ	OTP_DBG_ROSC_UP_SEEN_LSB, 2
# -----------------------------------------------------------------------------
# Field       : OTP_DBG_BOOT_DONE
# Description : PSM boot done status flag
.equ	OTP_DBG_BOOT_DONE_BITS, 0x00000002
.equ	OTP_DBG_BOOT_DONE_MSB, 1
.equ	OTP_DBG_BOOT_DONE_LSB, 1
# -----------------------------------------------------------------------------
# Field       : OTP_DBG_PSM_DONE
# Description : PSM done status flag
.equ	OTP_DBG_PSM_DONE_BITS, 0x00000001
.equ	OTP_DBG_PSM_DONE_MSB, 0
.equ	OTP_DBG_PSM_DONE_LSB, 0
# =============================================================================
# Register    : OTP_BIST
# Description : During BIST, count address locations that have at least one
#               leaky bit
.equ	OTP_BIST_OFFSET, 0x00000134
.equ	OTP_BIST_BITS, 0x7fff1fff
.equ	OTP_BIST_RESET, 0x0fff0000
# -----------------------------------------------------------------------------
# Field       : OTP_BIST_CNT_FAIL
# Description : Flag if the count of address locations with at least one leaky
#               bit exceeds cnt_max
.equ	OTP_BIST_CNT_FAIL_BITS, 0x40000000
.equ	OTP_BIST_CNT_FAIL_MSB, 30
.equ	OTP_BIST_CNT_FAIL_LSB, 30
# -----------------------------------------------------------------------------
# Field       : OTP_BIST_CNT_CLR
# Description : Clear counter before use
.equ	OTP_BIST_CNT_CLR_RESET, 0x0
.equ	OTP_BIST_CNT_CLR_BITS, 0x20000000
.equ	OTP_BIST_CNT_CLR_MSB, 29
.equ	OTP_BIST_CNT_CLR_LSB, 29
# -----------------------------------------------------------------------------
# Field       : OTP_BIST_CNT_ENA
# Description : Enable the counter before the BIST function is initiated
.equ	OTP_BIST_CNT_ENA_RESET, 0x0
.equ	OTP_BIST_CNT_ENA_BITS, 0x10000000
.equ	OTP_BIST_CNT_ENA_MSB, 28
.equ	OTP_BIST_CNT_ENA_LSB, 28
# -----------------------------------------------------------------------------
# Field       : OTP_BIST_CNT_MAX
# Description : The cnt_fail flag will be set if the number of leaky locations
#               exceeds this number
.equ	OTP_BIST_CNT_MAX_RESET, 0xfff
.equ	OTP_BIST_CNT_MAX_BITS, 0x0fff0000
.equ	OTP_BIST_CNT_MAX_MSB, 27
.equ	OTP_BIST_CNT_MAX_LSB, 16
# -----------------------------------------------------------------------------
# Field       : OTP_BIST_CNT
# Description : Number of locations that have at least one leaky bit. Note:
#               This count is true only if the BIST was initiated without the
#               fix option.
.equ	OTP_BIST_CNT_BITS, 0x00001fff
.equ	OTP_BIST_CNT_MSB, 12
.equ	OTP_BIST_CNT_LSB, 0
# =============================================================================
# Register    : OTP_CRT_KEY_W0
# Description : Word 0 (bits 31..0) of the key. Write only, read returns 0x0
.equ	OTP_CRT_KEY_W0_OFFSET, 0x00000138
.equ	OTP_CRT_KEY_W0_BITS, 0xffffffff
.equ	OTP_CRT_KEY_W0_RESET, 0x00000000
.equ	OTP_CRT_KEY_W0_MSB, 31
.equ	OTP_CRT_KEY_W0_LSB, 0
# =============================================================================
# Register    : OTP_CRT_KEY_W1
# Description : Word 1 (bits 63..32) of the key. Write only, read returns 0x0
.equ	OTP_CRT_KEY_W1_OFFSET, 0x0000013c
.equ	OTP_CRT_KEY_W1_BITS, 0xffffffff
.equ	OTP_CRT_KEY_W1_RESET, 0x00000000
.equ	OTP_CRT_KEY_W1_MSB, 31
.equ	OTP_CRT_KEY_W1_LSB, 0
# =============================================================================
# Register    : OTP_CRT_KEY_W2
# Description : Word 2 (bits 95..64) of the key. Write only, read returns 0x0
.equ	OTP_CRT_KEY_W2_OFFSET, 0x00000140
.equ	OTP_CRT_KEY_W2_BITS, 0xffffffff
.equ	OTP_CRT_KEY_W2_RESET, 0x00000000
.equ	OTP_CRT_KEY_W2_MSB, 31
.equ	OTP_CRT_KEY_W2_LSB, 0
# =============================================================================
# Register    : OTP_CRT_KEY_W3
# Description : Word 3 (bits 127..96) of the key. Write only, read returns 0x0
.equ	OTP_CRT_KEY_W3_OFFSET, 0x00000144
.equ	OTP_CRT_KEY_W3_BITS, 0xffffffff
.equ	OTP_CRT_KEY_W3_RESET, 0x00000000
.equ	OTP_CRT_KEY_W3_MSB, 31
.equ	OTP_CRT_KEY_W3_LSB, 0
# =============================================================================
# Register    : OTP_CRITICAL
# Description : Quickly check values of critical flags read during boot up
.equ	OTP_CRITICAL_OFFSET, 0x00000148
.equ	OTP_CRITICAL_BITS, 0x0003007f
.equ	OTP_CRITICAL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_CRITICAL_RISCV_DISABLE
.equ	OTP_CRITICAL_RISCV_DISABLE_RESET, 0x0
.equ	OTP_CRITICAL_RISCV_DISABLE_BITS, 0x00020000
.equ	OTP_CRITICAL_RISCV_DISABLE_MSB, 17
.equ	OTP_CRITICAL_RISCV_DISABLE_LSB, 17
# -----------------------------------------------------------------------------
# Field       : OTP_CRITICAL_ARM_DISABLE
.equ	OTP_CRITICAL_ARM_DISABLE_RESET, 0x0
.equ	OTP_CRITICAL_ARM_DISABLE_BITS, 0x00010000
.equ	OTP_CRITICAL_ARM_DISABLE_MSB, 16
.equ	OTP_CRITICAL_ARM_DISABLE_LSB, 16
# -----------------------------------------------------------------------------
# Field       : OTP_CRITICAL_GLITCH_DETECTOR_SENS
.equ	OTP_CRITICAL_GLITCH_DETECTOR_SENS_RESET, 0x0
.equ	OTP_CRITICAL_GLITCH_DETECTOR_SENS_BITS, 0x00000060
.equ	OTP_CRITICAL_GLITCH_DETECTOR_SENS_MSB, 6
.equ	OTP_CRITICAL_GLITCH_DETECTOR_SENS_LSB, 5
# -----------------------------------------------------------------------------
# Field       : OTP_CRITICAL_GLITCH_DETECTOR_ENABLE
.equ	OTP_CRITICAL_GLITCH_DETECTOR_ENABLE_RESET, 0x0
.equ	OTP_CRITICAL_GLITCH_DETECTOR_ENABLE_BITS, 0x00000010
.equ	OTP_CRITICAL_GLITCH_DETECTOR_ENABLE_MSB, 4
.equ	OTP_CRITICAL_GLITCH_DETECTOR_ENABLE_LSB, 4
# -----------------------------------------------------------------------------
# Field       : OTP_CRITICAL_DEFAULT_ARCHSEL
.equ	OTP_CRITICAL_DEFAULT_ARCHSEL_RESET, 0x0
.equ	OTP_CRITICAL_DEFAULT_ARCHSEL_BITS, 0x00000008
.equ	OTP_CRITICAL_DEFAULT_ARCHSEL_MSB, 3
.equ	OTP_CRITICAL_DEFAULT_ARCHSEL_LSB, 3
# -----------------------------------------------------------------------------
# Field       : OTP_CRITICAL_DEBUG_DISABLE
.equ	OTP_CRITICAL_DEBUG_DISABLE_RESET, 0x0
.equ	OTP_CRITICAL_DEBUG_DISABLE_BITS, 0x00000004
.equ	OTP_CRITICAL_DEBUG_DISABLE_MSB, 2
.equ	OTP_CRITICAL_DEBUG_DISABLE_LSB, 2
# -----------------------------------------------------------------------------
# Field       : OTP_CRITICAL_SECURE_DEBUG_DISABLE
.equ	OTP_CRITICAL_SECURE_DEBUG_DISABLE_RESET, 0x0
.equ	OTP_CRITICAL_SECURE_DEBUG_DISABLE_BITS, 0x00000002
.equ	OTP_CRITICAL_SECURE_DEBUG_DISABLE_MSB, 1
.equ	OTP_CRITICAL_SECURE_DEBUG_DISABLE_LSB, 1
# -----------------------------------------------------------------------------
# Field       : OTP_CRITICAL_SECURE_BOOT_ENABLE
.equ	OTP_CRITICAL_SECURE_BOOT_ENABLE_RESET, 0x0
.equ	OTP_CRITICAL_SECURE_BOOT_ENABLE_BITS, 0x00000001
.equ	OTP_CRITICAL_SECURE_BOOT_ENABLE_MSB, 0
.equ	OTP_CRITICAL_SECURE_BOOT_ENABLE_LSB, 0
# =============================================================================
# Register    : OTP_KEY_VALID
# Description : Which keys were valid (enrolled) at boot time
.equ	OTP_KEY_VALID_OFFSET, 0x0000014c
.equ	OTP_KEY_VALID_BITS, 0x000000ff
.equ	OTP_KEY_VALID_RESET, 0x00000000
.equ	OTP_KEY_VALID_MSB, 7
.equ	OTP_KEY_VALID_LSB, 0
# =============================================================================
# Register    : OTP_DEBUGEN
# Description : Enable a debug feature that has been disabled. Debug features
#               are disabled if one of the relevant critical boot flags is set
#               in OTP (DEBUG_DISABLE or SECURE_DEBUG_DISABLE), OR if a debug
#               key is marked valid in OTP, and the matching key value has not
#               been supplied over SWD.
#
#               Specifically:
#
#               - The DEBUG_DISABLE flag disables all debug features. This can
#               be fully overridden by setting all bits of this register.
#
#               - The SECURE_DEBUG_DISABLE flag disables secure processor
#               debug. This can be fully overridden by setting the PROC0_SECURE
#               and PROC1_SECURE bits of this register.
#
#               - If a single debug key has been registered, and no matching
#               key value has been supplied over SWD, then all debug features
#               are disabled. This can be fully overridden by setting all bits
#               of this register.
#
#               - If both debug keys have been registered, and the Non-secure
#               key's value (key 6) has been supplied over SWD, secure
#               processor debug is disabled. This can be fully overridden by
#               setting the PROC0_SECURE and PROC1_SECURE bits of this
#               register.
#
#               - If both debug keys have been registered, and the Secure key's
#               value (key 5) has been supplied over SWD, then no debug
#               features are disabled by the key mechanism. However, note that
#               in this case debug features may still be disabled by the
#               critical boot flags.
.equ	OTP_DEBUGEN_OFFSET, 0x00000150
.equ	OTP_DEBUGEN_BITS, 0x0000010f
.equ	OTP_DEBUGEN_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_DEBUGEN_MISC
# Description : Enable other debug components. Specifically, the CTI, and the
#               APB-AP used to access the RISC-V Debug Module.
#
#               These components are disabled by default if either of the debug
#               disable critical flags is set, or if at least one debug key has
#               been enrolled and the least secure of these enrolled key values
#               has not been provided over SWD.
.equ	OTP_DEBUGEN_MISC_RESET, 0x0
.equ	OTP_DEBUGEN_MISC_BITS, 0x00000100
.equ	OTP_DEBUGEN_MISC_MSB, 8
.equ	OTP_DEBUGEN_MISC_LSB, 8
# -----------------------------------------------------------------------------
# Field       : OTP_DEBUGEN_PROC1_SECURE
# Description : Permit core 1's Mem-AP to generate Secure accesses, assuming it
#               is enabled at all. Also enable secure debug of core 1 (SPIDEN
#               and SPNIDEN).
#
#               Secure debug of core 1 is disabled by default if the secure
#               debug disable critical flag is set, or if at least one debug
#               key has been enrolled and the most secure of these enrolled key
#               values not yet provided over SWD.
.equ	OTP_DEBUGEN_PROC1_SECURE_RESET, 0x0
.equ	OTP_DEBUGEN_PROC1_SECURE_BITS, 0x00000008
.equ	OTP_DEBUGEN_PROC1_SECURE_MSB, 3
.equ	OTP_DEBUGEN_PROC1_SECURE_LSB, 3
# -----------------------------------------------------------------------------
# Field       : OTP_DEBUGEN_PROC1
# Description : Enable core 1's Mem-AP if it is currently disabled.
#
#               The Mem-AP is disabled by default if either of the debug
#               disable critical flags is set, or if at least one debug key has
#               been enrolled and the least secure of these enrolled key values
#               has not been provided over SWD.
.equ	OTP_DEBUGEN_PROC1_RESET, 0x0
.equ	OTP_DEBUGEN_PROC1_BITS, 0x00000004
.equ	OTP_DEBUGEN_PROC1_MSB, 2
.equ	OTP_DEBUGEN_PROC1_LSB, 2
# -----------------------------------------------------------------------------
# Field       : OTP_DEBUGEN_PROC0_SECURE
# Description : Permit core 0's Mem-AP to generate Secure accesses, assuming it
#               is enabled at all. Also enable secure debug of core 0 (SPIDEN
#               and SPNIDEN).
#
#               Secure debug of core 0 is disabled by default if the secure
#               debug disable critical flag is set, or if at least one debug
#               key has been enrolled and the most secure of these enrolled key
#               values not yet provided over SWD.
#
#               Note also that core Mem-APs are unconditionally disabled when a
#               core is switched to RISC-V mode (by setting the ARCHSEL bit and
#               performing a warm reset of the core).
.equ	OTP_DEBUGEN_PROC0_SECURE_RESET, 0x0
.equ	OTP_DEBUGEN_PROC0_SECURE_BITS, 0x00000002
.equ	OTP_DEBUGEN_PROC0_SECURE_MSB, 1
.equ	OTP_DEBUGEN_PROC0_SECURE_LSB, 1
# -----------------------------------------------------------------------------
# Field       : OTP_DEBUGEN_PROC0
# Description : Enable core 0's Mem-AP if it is currently disabled.
#
#               The Mem-AP is disabled by default if either of the debug
#               disable critical flags is set, or if at least one debug key has
#               been enrolled and the least secure of these enrolled key values
#               has not been provided over SWD.
#
#               Note also that core Mem-APs are unconditionally disabled when a
#               core is switched to RISC-V mode (by setting the ARCHSEL bit and
#               performing a warm reset of the core).
.equ	OTP_DEBUGEN_PROC0_RESET, 0x0
.equ	OTP_DEBUGEN_PROC0_BITS, 0x00000001
.equ	OTP_DEBUGEN_PROC0_MSB, 0
.equ	OTP_DEBUGEN_PROC0_LSB, 0
# =============================================================================
# Register    : OTP_DEBUGEN_LOCK
# Description : Write 1s to lock corresponding bits in DEBUGEN. This register
#               is reset by the processor cold reset.
.equ	OTP_DEBUGEN_LOCK_OFFSET, 0x00000154
.equ	OTP_DEBUGEN_LOCK_BITS, 0x0000010f
.equ	OTP_DEBUGEN_LOCK_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_DEBUGEN_LOCK_MISC
# Description : Write 1 to lock the MISC bit of DEBUGEN. Can't be cleared once
#               set.
.equ	OTP_DEBUGEN_LOCK_MISC_RESET, 0x0
.equ	OTP_DEBUGEN_LOCK_MISC_BITS, 0x00000100
.equ	OTP_DEBUGEN_LOCK_MISC_MSB, 8
.equ	OTP_DEBUGEN_LOCK_MISC_LSB, 8
# -----------------------------------------------------------------------------
# Field       : OTP_DEBUGEN_LOCK_PROC1_SECURE
# Description : Write 1 to lock the PROC1_SECURE bit of DEBUGEN. Can't be
#               cleared once set.
.equ	OTP_DEBUGEN_LOCK_PROC1_SECURE_RESET, 0x0
.equ	OTP_DEBUGEN_LOCK_PROC1_SECURE_BITS, 0x00000008
.equ	OTP_DEBUGEN_LOCK_PROC1_SECURE_MSB, 3
.equ	OTP_DEBUGEN_LOCK_PROC1_SECURE_LSB, 3
# -----------------------------------------------------------------------------
# Field       : OTP_DEBUGEN_LOCK_PROC1
# Description : Write 1 to lock the PROC1 bit of DEBUGEN. Can't be cleared once
#               set.
.equ	OTP_DEBUGEN_LOCK_PROC1_RESET, 0x0
.equ	OTP_DEBUGEN_LOCK_PROC1_BITS, 0x00000004
.equ	OTP_DEBUGEN_LOCK_PROC1_MSB, 2
.equ	OTP_DEBUGEN_LOCK_PROC1_LSB, 2
# -----------------------------------------------------------------------------
# Field       : OTP_DEBUGEN_LOCK_PROC0_SECURE
# Description : Write 1 to lock the PROC0_SECURE bit of DEBUGEN. Can't be
#               cleared once set.
.equ	OTP_DEBUGEN_LOCK_PROC0_SECURE_RESET, 0x0
.equ	OTP_DEBUGEN_LOCK_PROC0_SECURE_BITS, 0x00000002
.equ	OTP_DEBUGEN_LOCK_PROC0_SECURE_MSB, 1
.equ	OTP_DEBUGEN_LOCK_PROC0_SECURE_LSB, 1
# -----------------------------------------------------------------------------
# Field       : OTP_DEBUGEN_LOCK_PROC0
# Description : Write 1 to lock the PROC0 bit of DEBUGEN. Can't be cleared once
#               set.
.equ	OTP_DEBUGEN_LOCK_PROC0_RESET, 0x0
.equ	OTP_DEBUGEN_LOCK_PROC0_BITS, 0x00000001
.equ	OTP_DEBUGEN_LOCK_PROC0_MSB, 0
.equ	OTP_DEBUGEN_LOCK_PROC0_LSB, 0
# =============================================================================
# Register    : OTP_ARCHSEL
# Description : Architecture select (Arm/RISC-V). The default and allowable
#               values of this register are constrained by the critical boot
#               flags.
#
#               This register is reset by the earliest reset in the switched
#               core power domain (before a processor cold reset).
#
#               Cores sample their architecture select signal on a warm reset.
#               The source of the warm reset could be the system power-up state
#               machine, the watchdog timer, Arm SYSRESETREQ or from RISC-V
#               hartresetreq.
#
#               Note that when an Arm core is deselected, its cold reset domain
#               is also held in reset, since in particular the SYSRESETREQ bit
#               becomes inaccessible once the core is deselected. Note also the
#               RISC-V cores do not have a cold reset domain, since their
#               corresponding controls are located in the Debug Module.
.equ	OTP_ARCHSEL_OFFSET, 0x00000158
.equ	OTP_ARCHSEL_BITS, 0x00000003
.equ	OTP_ARCHSEL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_ARCHSEL_CORE1
# Description : Select architecture for core 1.
#               0x0 -> Switch core 1 to Arm (Cortex-M33)
#               0x1 -> Switch core 1 to RISC-V (Hazard3)
.equ	OTP_ARCHSEL_CORE1_RESET, 0x0
.equ	OTP_ARCHSEL_CORE1_BITS, 0x00000002
.equ	OTP_ARCHSEL_CORE1_MSB, 1
.equ	OTP_ARCHSEL_CORE1_LSB, 1
.equ	OTP_ARCHSEL_CORE1_VALUE_ARM, 0x0
.equ	OTP_ARCHSEL_CORE1_VALUE_RISCV, 0x1
# -----------------------------------------------------------------------------
# Field       : OTP_ARCHSEL_CORE0
# Description : Select architecture for core 0.
#               0x0 -> Switch core 0 to Arm (Cortex-M33)
#               0x1 -> Switch core 0 to RISC-V (Hazard3)
.equ	OTP_ARCHSEL_CORE0_RESET, 0x0
.equ	OTP_ARCHSEL_CORE0_BITS, 0x00000001
.equ	OTP_ARCHSEL_CORE0_MSB, 0
.equ	OTP_ARCHSEL_CORE0_LSB, 0
.equ	OTP_ARCHSEL_CORE0_VALUE_ARM, 0x0
.equ	OTP_ARCHSEL_CORE0_VALUE_RISCV, 0x1
# =============================================================================
# Register    : OTP_ARCHSEL_STATUS
# Description : Get the current architecture select state of each core. Cores
#               sample the current value of the ARCHSEL register when their
#               warm reset is released, at which point the corresponding bit in
#               this register will also update.
.equ	OTP_ARCHSEL_STATUS_OFFSET, 0x0000015c
.equ	OTP_ARCHSEL_STATUS_BITS, 0x00000003
.equ	OTP_ARCHSEL_STATUS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_ARCHSEL_STATUS_CORE1
# Description : Current architecture for core 0. Updated on processor warm
#               reset.
#               0x0 -> Core 1 is currently Arm (Cortex-M33)
#               0x1 -> Core 1 is currently RISC-V (Hazard3)
.equ	OTP_ARCHSEL_STATUS_CORE1_RESET, 0x0
.equ	OTP_ARCHSEL_STATUS_CORE1_BITS, 0x00000002
.equ	OTP_ARCHSEL_STATUS_CORE1_MSB, 1
.equ	OTP_ARCHSEL_STATUS_CORE1_LSB, 1
.equ	OTP_ARCHSEL_STATUS_CORE1_VALUE_ARM, 0x0
.equ	OTP_ARCHSEL_STATUS_CORE1_VALUE_RISCV, 0x1
# -----------------------------------------------------------------------------
# Field       : OTP_ARCHSEL_STATUS_CORE0
# Description : Current architecture for core 0. Updated on processor warm
#               reset.
#               0x0 -> Core 0 is currently Arm (Cortex-M33)
#               0x1 -> Core 0 is currently RISC-V (Hazard3)
.equ	OTP_ARCHSEL_STATUS_CORE0_RESET, 0x0
.equ	OTP_ARCHSEL_STATUS_CORE0_BITS, 0x00000001
.equ	OTP_ARCHSEL_STATUS_CORE0_MSB, 0
.equ	OTP_ARCHSEL_STATUS_CORE0_LSB, 0
.equ	OTP_ARCHSEL_STATUS_CORE0_VALUE_ARM, 0x0
.equ	OTP_ARCHSEL_STATUS_CORE0_VALUE_RISCV, 0x1
# =============================================================================
# Register    : OTP_BOOTDIS
# Description : Tell the bootrom to ignore scratch register boot vectors (both
#               power manager and watchdog) on the next power up.
#
#               If an early boot stage has soft-locked some OTP pages in order
#               to protect their contents from later stages, there is a risk
#               that Secure code running at a later stage can unlock the pages
#               by performing a watchdog reset that resets the OTP.
#
#               This register can be used to ensure that the bootloader runs as
#               normal on the next power up, preventing Secure code at a later
#               stage from accessing OTP in its unlocked state.
#
#               Should be used in conjunction with the power manager BOOTDIS
#               register.
.equ	OTP_BOOTDIS_OFFSET, 0x00000160
.equ	OTP_BOOTDIS_BITS, 0x00000003
.equ	OTP_BOOTDIS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_BOOTDIS_NEXT
# Description : This flag always ORs writes into its current contents. It can
#               be set but not cleared by software.
#
#               The BOOTDIS_NEXT bit is OR'd into the BOOTDIS_NOW bit when the
#               core is powered down. Simultaneously, the BOOTDIS_NEXT bit is
#               cleared. Setting this bit means that the boot scratch registers
#               will be ignored following the next core power down.
#
#               This flag should be set by an early boot stage that has soft-
#               locked OTP pages, to prevent later stages from unlocking it via
#               watchdog reset.
.equ	OTP_BOOTDIS_NEXT_RESET, 0x0
.equ	OTP_BOOTDIS_NEXT_BITS, 0x00000002
.equ	OTP_BOOTDIS_NEXT_MSB, 1
.equ	OTP_BOOTDIS_NEXT_LSB, 1
# -----------------------------------------------------------------------------
# Field       : OTP_BOOTDIS_NOW
# Description : When the core is powered down, the current value of
#               BOOTDIS_NEXT is OR'd into BOOTDIS_NOW, and BOOTDIS_NEXT is
#               cleared.
#
#               The bootrom checks this flag before reading the boot scratch
#               registers. If it is set, the bootrom clears it, and ignores the
#               BOOT registers. This prevents Secure software from diverting
#               the boot path before a bootloader has had the chance to soft
#               lock OTP pages containing sensitive data.
.equ	OTP_BOOTDIS_NOW_RESET, 0x0
.equ	OTP_BOOTDIS_NOW_BITS, 0x00000001
.equ	OTP_BOOTDIS_NOW_MSB, 0
.equ	OTP_BOOTDIS_NOW_LSB, 0
# =============================================================================
# Register    : OTP_INTR
# Description : Raw Interrupts
.equ	OTP_INTR_OFFSET, 0x00000164
.equ	OTP_INTR_BITS, 0x0000001f
.equ	OTP_INTR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_INTR_APB_RD_NSEC_FAIL
.equ	OTP_INTR_APB_RD_NSEC_FAIL_RESET, 0x0
.equ	OTP_INTR_APB_RD_NSEC_FAIL_BITS, 0x00000010
.equ	OTP_INTR_APB_RD_NSEC_FAIL_MSB, 4
.equ	OTP_INTR_APB_RD_NSEC_FAIL_LSB, 4
# -----------------------------------------------------------------------------
# Field       : OTP_INTR_APB_RD_SEC_FAIL
.equ	OTP_INTR_APB_RD_SEC_FAIL_RESET, 0x0
.equ	OTP_INTR_APB_RD_SEC_FAIL_BITS, 0x00000008
.equ	OTP_INTR_APB_RD_SEC_FAIL_MSB, 3
.equ	OTP_INTR_APB_RD_SEC_FAIL_LSB, 3
# -----------------------------------------------------------------------------
# Field       : OTP_INTR_APB_DCTRL_FAIL
.equ	OTP_INTR_APB_DCTRL_FAIL_RESET, 0x0
.equ	OTP_INTR_APB_DCTRL_FAIL_BITS, 0x00000004
.equ	OTP_INTR_APB_DCTRL_FAIL_MSB, 2
.equ	OTP_INTR_APB_DCTRL_FAIL_LSB, 2
# -----------------------------------------------------------------------------
# Field       : OTP_INTR_SBPI_WR_FAIL
.equ	OTP_INTR_SBPI_WR_FAIL_RESET, 0x0
.equ	OTP_INTR_SBPI_WR_FAIL_BITS, 0x00000002
.equ	OTP_INTR_SBPI_WR_FAIL_MSB, 1
.equ	OTP_INTR_SBPI_WR_FAIL_LSB, 1
# -----------------------------------------------------------------------------
# Field       : OTP_INTR_SBPI_FLAG_N
.equ	OTP_INTR_SBPI_FLAG_N_RESET, 0x0
.equ	OTP_INTR_SBPI_FLAG_N_BITS, 0x00000001
.equ	OTP_INTR_SBPI_FLAG_N_MSB, 0
.equ	OTP_INTR_SBPI_FLAG_N_LSB, 0
# =============================================================================
# Register    : OTP_INTE
# Description : Interrupt Enable
.equ	OTP_INTE_OFFSET, 0x00000168
.equ	OTP_INTE_BITS, 0x0000001f
.equ	OTP_INTE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_INTE_APB_RD_NSEC_FAIL
.equ	OTP_INTE_APB_RD_NSEC_FAIL_RESET, 0x0
.equ	OTP_INTE_APB_RD_NSEC_FAIL_BITS, 0x00000010
.equ	OTP_INTE_APB_RD_NSEC_FAIL_MSB, 4
.equ	OTP_INTE_APB_RD_NSEC_FAIL_LSB, 4
# -----------------------------------------------------------------------------
# Field       : OTP_INTE_APB_RD_SEC_FAIL
.equ	OTP_INTE_APB_RD_SEC_FAIL_RESET, 0x0
.equ	OTP_INTE_APB_RD_SEC_FAIL_BITS, 0x00000008
.equ	OTP_INTE_APB_RD_SEC_FAIL_MSB, 3
.equ	OTP_INTE_APB_RD_SEC_FAIL_LSB, 3
# -----------------------------------------------------------------------------
# Field       : OTP_INTE_APB_DCTRL_FAIL
.equ	OTP_INTE_APB_DCTRL_FAIL_RESET, 0x0
.equ	OTP_INTE_APB_DCTRL_FAIL_BITS, 0x00000004
.equ	OTP_INTE_APB_DCTRL_FAIL_MSB, 2
.equ	OTP_INTE_APB_DCTRL_FAIL_LSB, 2
# -----------------------------------------------------------------------------
# Field       : OTP_INTE_SBPI_WR_FAIL
.equ	OTP_INTE_SBPI_WR_FAIL_RESET, 0x0
.equ	OTP_INTE_SBPI_WR_FAIL_BITS, 0x00000002
.equ	OTP_INTE_SBPI_WR_FAIL_MSB, 1
.equ	OTP_INTE_SBPI_WR_FAIL_LSB, 1
# -----------------------------------------------------------------------------
# Field       : OTP_INTE_SBPI_FLAG_N
.equ	OTP_INTE_SBPI_FLAG_N_RESET, 0x0
.equ	OTP_INTE_SBPI_FLAG_N_BITS, 0x00000001
.equ	OTP_INTE_SBPI_FLAG_N_MSB, 0
.equ	OTP_INTE_SBPI_FLAG_N_LSB, 0
# =============================================================================
# Register    : OTP_INTF
# Description : Interrupt Force
.equ	OTP_INTF_OFFSET, 0x0000016c
.equ	OTP_INTF_BITS, 0x0000001f
.equ	OTP_INTF_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_INTF_APB_RD_NSEC_FAIL
.equ	OTP_INTF_APB_RD_NSEC_FAIL_RESET, 0x0
.equ	OTP_INTF_APB_RD_NSEC_FAIL_BITS, 0x00000010
.equ	OTP_INTF_APB_RD_NSEC_FAIL_MSB, 4
.equ	OTP_INTF_APB_RD_NSEC_FAIL_LSB, 4
# -----------------------------------------------------------------------------
# Field       : OTP_INTF_APB_RD_SEC_FAIL
.equ	OTP_INTF_APB_RD_SEC_FAIL_RESET, 0x0
.equ	OTP_INTF_APB_RD_SEC_FAIL_BITS, 0x00000008
.equ	OTP_INTF_APB_RD_SEC_FAIL_MSB, 3
.equ	OTP_INTF_APB_RD_SEC_FAIL_LSB, 3
# -----------------------------------------------------------------------------
# Field       : OTP_INTF_APB_DCTRL_FAIL
.equ	OTP_INTF_APB_DCTRL_FAIL_RESET, 0x0
.equ	OTP_INTF_APB_DCTRL_FAIL_BITS, 0x00000004
.equ	OTP_INTF_APB_DCTRL_FAIL_MSB, 2
.equ	OTP_INTF_APB_DCTRL_FAIL_LSB, 2
# -----------------------------------------------------------------------------
# Field       : OTP_INTF_SBPI_WR_FAIL
.equ	OTP_INTF_SBPI_WR_FAIL_RESET, 0x0
.equ	OTP_INTF_SBPI_WR_FAIL_BITS, 0x00000002
.equ	OTP_INTF_SBPI_WR_FAIL_MSB, 1
.equ	OTP_INTF_SBPI_WR_FAIL_LSB, 1
# -----------------------------------------------------------------------------
# Field       : OTP_INTF_SBPI_FLAG_N
.equ	OTP_INTF_SBPI_FLAG_N_RESET, 0x0
.equ	OTP_INTF_SBPI_FLAG_N_BITS, 0x00000001
.equ	OTP_INTF_SBPI_FLAG_N_MSB, 0
.equ	OTP_INTF_SBPI_FLAG_N_LSB, 0
# =============================================================================
# Register    : OTP_INTS
# Description : Interrupt status after masking & forcing
.equ	OTP_INTS_OFFSET, 0x00000170
.equ	OTP_INTS_BITS, 0x0000001f
.equ	OTP_INTS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : OTP_INTS_APB_RD_NSEC_FAIL
.equ	OTP_INTS_APB_RD_NSEC_FAIL_RESET, 0x0
.equ	OTP_INTS_APB_RD_NSEC_FAIL_BITS, 0x00000010
.equ	OTP_INTS_APB_RD_NSEC_FAIL_MSB, 4
.equ	OTP_INTS_APB_RD_NSEC_FAIL_LSB, 4
# -----------------------------------------------------------------------------
# Field       : OTP_INTS_APB_RD_SEC_FAIL
.equ	OTP_INTS_APB_RD_SEC_FAIL_RESET, 0x0
.equ	OTP_INTS_APB_RD_SEC_FAIL_BITS, 0x00000008
.equ	OTP_INTS_APB_RD_SEC_FAIL_MSB, 3
.equ	OTP_INTS_APB_RD_SEC_FAIL_LSB, 3
# -----------------------------------------------------------------------------
# Field       : OTP_INTS_APB_DCTRL_FAIL
.equ	OTP_INTS_APB_DCTRL_FAIL_RESET, 0x0
.equ	OTP_INTS_APB_DCTRL_FAIL_BITS, 0x00000004
.equ	OTP_INTS_APB_DCTRL_FAIL_MSB, 2
.equ	OTP_INTS_APB_DCTRL_FAIL_LSB, 2
# -----------------------------------------------------------------------------
# Field       : OTP_INTS_SBPI_WR_FAIL
.equ	OTP_INTS_SBPI_WR_FAIL_RESET, 0x0
.equ	OTP_INTS_SBPI_WR_FAIL_BITS, 0x00000002
.equ	OTP_INTS_SBPI_WR_FAIL_MSB, 1
.equ	OTP_INTS_SBPI_WR_FAIL_LSB, 1
# -----------------------------------------------------------------------------
# Field       : OTP_INTS_SBPI_FLAG_N
.equ	OTP_INTS_SBPI_FLAG_N_RESET, 0x0
.equ	OTP_INTS_SBPI_FLAG_N_BITS, 0x00000001
.equ	OTP_INTS_SBPI_FLAG_N_MSB, 0
.equ	OTP_INTS_SBPI_FLAG_N_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_OTP_H
