#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : RISCV_DM
# Version        : 1
# Bus type       : apb
# Description    : RISC-V Debug module registers (Hazard3 subset only). Read-
#                  only information fields (such as dmstatus.version) are
#                  listed here with the values they have on the RP2350
#                  instantiation of Hazard3.
# =============================================================================
.ifndef	_HARDWARE_REGS_RISCV_DM_H
.set	_HARDWARE_REGS_RISCV_DM_H, 1
# =============================================================================
# Register    : RISCV_DM_DATA0
# Description : data0 through data11 are basic read/write registers that may be
#               read or changed by abstract commands. abstractcs.datacount
#               indicates how many of them are implemented, starting at data0,
#               counting up.
#
#               Accessing these registers while an abstract command is
#               executing causes abstractcs.cmderr to be set to 1 (busy) if it
#               is 0.
#
#               Attempts to write them while abstractcs.busy is set does not
#               change their value.
#
#               The values in these registers may not be preserved after an
#               abstract command is executed. The only guarantees on their
#               contents are the ones offered by the command in question. If
#               the command fails, no assumptions can be made about the
#               contents of these registers.
#
#               (Note: Hazard3 implements data0 only.)
.equ	RISCV_DM_DATA0_OFFSET, 0x00000010
.equ	RISCV_DM_DATA0_BITS, 0xffffffff
.equ	RISCV_DM_DATA0_RESET, 0x00000000
.equ	RISCV_DM_DATA0_MSB, 31
.equ	RISCV_DM_DATA0_LSB, 0
# =============================================================================
# Register    : RISCV_DM_DMCONTROL
# Description : This register controls the overall Debug Module as well as the
#               currently selected harts, as defined in hasel.
.equ	RISCV_DM_DMCONTROL_OFFSET, 0x00000040
.equ	RISCV_DM_DMCONTROL_BITS, 0xf7ffffcf
.equ	RISCV_DM_DMCONTROL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_DMCONTROL_HALTREQ
# Description : Writing 0 clears the halt request bit for all currently
#               selected harts. This may cancel outstanding halt requests for
#               those harts.
#
#               Writing 1 sets the halt request bit for all currently selected
#               harts. Running harts will halt whenever their halt request bit
#               is set.
#
#               Writes apply to the new value of hartsel and hasel.
.equ	RISCV_DM_DMCONTROL_HALTREQ_RESET, 0x0
.equ	RISCV_DM_DMCONTROL_HALTREQ_BITS, 0x80000000
.equ	RISCV_DM_DMCONTROL_HALTREQ_MSB, 31
.equ	RISCV_DM_DMCONTROL_HALTREQ_LSB, 31
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_DMCONTROL_RESUMEREQ
# Description : Writing 1 causes the currently selected harts to resume once,
#               if they are halted when the write occurs. It also clears the
#               resume ack bit for those harts.
#
#               resumereq is ignored if haltreq is set.
#
#               Writes apply to the new value of hartsel and hasel.
.equ	RISCV_DM_DMCONTROL_RESUMEREQ_RESET, 0x0
.equ	RISCV_DM_DMCONTROL_RESUMEREQ_BITS, 0x40000000
.equ	RISCV_DM_DMCONTROL_RESUMEREQ_MSB, 30
.equ	RISCV_DM_DMCONTROL_RESUMEREQ_LSB, 30
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_DMCONTROL_HARTRESET
# Description : This optional field writes the reset bit for all the currently
#               selected harts. To perform a reset the debugger writes 1, and
#               then writes 0 to deassert the reset signal.
#
#               While this bit is 1, the debugger must not change which harts
#               are selected.
#
#               Writes apply to the new value of hartsel and hasel.
#
#               (The exact behaviour of this field is implementation-defined:
#               on RP2350 it (triggers a local reset of the selected core(s)
#               only.)
.equ	RISCV_DM_DMCONTROL_HARTRESET_RESET, 0x0
.equ	RISCV_DM_DMCONTROL_HARTRESET_BITS, 0x20000000
.equ	RISCV_DM_DMCONTROL_HARTRESET_MSB, 29
.equ	RISCV_DM_DMCONTROL_HARTRESET_LSB, 29
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_DMCONTROL_ACKHAVERESET
# Description : 0: No effect.
#
#               1: Clears havereset for any selected harts.
#
#               Writes apply to the new value of hartsel and hasel.
.equ	RISCV_DM_DMCONTROL_ACKHAVERESET_RESET, 0x0
.equ	RISCV_DM_DMCONTROL_ACKHAVERESET_BITS, 0x10000000
.equ	RISCV_DM_DMCONTROL_ACKHAVERESET_MSB, 28
.equ	RISCV_DM_DMCONTROL_ACKHAVERESET_LSB, 28
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_DMCONTROL_HASEL
# Description : Selects the definition of currently selected harts.
#
#               0: There is a single currently selected hart, that is selected
#               by hartsel.
#
#               1: There may be multiple currently selected harts – the hart
#               selected by hartsel, plus those selected by the hart array mask
#               register.
#
#               Hazard3 does support the hart array mask.
.equ	RISCV_DM_DMCONTROL_HASEL_RESET, 0x0
.equ	RISCV_DM_DMCONTROL_HASEL_BITS, 0x04000000
.equ	RISCV_DM_DMCONTROL_HASEL_MSB, 26
.equ	RISCV_DM_DMCONTROL_HASEL_LSB, 26
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_DMCONTROL_HARTSELLO
# Description : The low 10 bits of hartsel: the DM-specific index of the hart
#               to select. This hart is always part of the currently selected
#               harts.
#
#               On RP2350, since there are only two cores (with one hart each),
#               only the least-significant bit is writable. The others are tied
#               to 0.
.equ	RISCV_DM_DMCONTROL_HARTSELLO_RESET, 0x000
.equ	RISCV_DM_DMCONTROL_HARTSELLO_BITS, 0x03ff0000
.equ	RISCV_DM_DMCONTROL_HARTSELLO_MSB, 25
.equ	RISCV_DM_DMCONTROL_HARTSELLO_LSB, 16
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_DMCONTROL_HARTSELHI
# Description : The high 10 bits of hartsel: the DM-specific index of the hart
#               to select. This hart is always part of the currently selected
#               harts.
#
#               On Hazard3 this field is always tied to all-zeroes.
.equ	RISCV_DM_DMCONTROL_HARTSELHI_RESET, 0x000
.equ	RISCV_DM_DMCONTROL_HARTSELHI_BITS, 0x0000ffc0
.equ	RISCV_DM_DMCONTROL_HARTSELHI_MSB, 15
.equ	RISCV_DM_DMCONTROL_HARTSELHI_LSB, 6
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_DMCONTROL_SETRESETHALTREQ
# Description : This optional field writes the halt-on-reset request bit for
#               all currently selected harts, unless clrresethaltreq is
#               simultaneously set to 1.
#
#               When set to 1, each selected hart will halt upon the next
#               deassertion of its reset. The halt-on-reset request bit is not
#               automatically cleared. The debugger must write to
#               clrresethaltreq to clear it.
#
#               Writes apply to the new value of hartsel and hasel.
.equ	RISCV_DM_DMCONTROL_SETRESETHALTREQ_RESET, 0x0
.equ	RISCV_DM_DMCONTROL_SETRESETHALTREQ_BITS, 0x00000008
.equ	RISCV_DM_DMCONTROL_SETRESETHALTREQ_MSB, 3
.equ	RISCV_DM_DMCONTROL_SETRESETHALTREQ_LSB, 3
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_DMCONTROL_CLRRESETHALTREQ
# Description : This optional field clears the halt-on-reset request bit for
#               all currently selected harts.
#
#               Writes apply to the new value of hartsel and hasel.
.equ	RISCV_DM_DMCONTROL_CLRRESETHALTREQ_RESET, 0x0
.equ	RISCV_DM_DMCONTROL_CLRRESETHALTREQ_BITS, 0x00000004
.equ	RISCV_DM_DMCONTROL_CLRRESETHALTREQ_MSB, 2
.equ	RISCV_DM_DMCONTROL_CLRRESETHALTREQ_LSB, 2
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_DMCONTROL_NDMRESET
# Description : This bit controls the reset signal from the DM to the rest of
#               the system. The signal should reset every part of the system,
#               including every hart, except for the DM and any logic required
#               to access the DM. To perform a system reset the debugger writes
#               1, and then writes 0 to deassert the reset.
#
#               On RP2350 this performs a cold reset, the equivalent of a
#               watchdog reset with all WDSEL bits set. This includes both
#               cores and all peripherals.
.equ	RISCV_DM_DMCONTROL_NDMRESET_RESET, 0x0
.equ	RISCV_DM_DMCONTROL_NDMRESET_BITS, 0x00000002
.equ	RISCV_DM_DMCONTROL_NDMRESET_MSB, 1
.equ	RISCV_DM_DMCONTROL_NDMRESET_LSB, 1
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_DMCONTROL_DMACTIVE
# Description : This bit serves as a reset signal for the Debug Module itself.
#
#               0: The module’s state, including authentication mechanism,
#               takes its reset values (the dmactive bit is the only bit which
#               can be written to something other than its reset value).
#
#               1: The module functions normally.
#
#               No other mechanism should exist that may result in resetting
#               the Debug Module after power up, with the possible (but not
#               recommended) exception of a global reset signal that resets the
#               entire platform.
#
#               (On RP2350, the Debug Module is reset by a power-on reset, a
#               brownout reset, the RUN pin, and a rescue reset.)
#
#               A debugger may pulse this bit low to get the Debug Module into
#               a known state.
.equ	RISCV_DM_DMCONTROL_DMACTIVE_RESET, 0x0
.equ	RISCV_DM_DMCONTROL_DMACTIVE_BITS, 0x00000001
.equ	RISCV_DM_DMCONTROL_DMACTIVE_MSB, 0
.equ	RISCV_DM_DMCONTROL_DMACTIVE_LSB, 0
# =============================================================================
# Register    : RISCV_DM_DMSTATUS
# Description : This register reports status for the overall Debug Module as
#               well as the currently selected harts, as defined in hasel. Its
#               address will not change in the future, because it contains
#               version.
#
#               This entire register is read-only.
.equ	RISCV_DM_DMSTATUS_OFFSET, 0x00000044
.equ	RISCV_DM_DMSTATUS_BITS, 0x004fffff
.equ	RISCV_DM_DMSTATUS_RESET, 0x004000a2
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_DMSTATUS_IMPEBREAK
# Description : If 1, then there is an implicit ebreak instruction at the non-
#               existent word immediately after the Program Buffer. This saves
#               the debugger from having to write the ebreak itself, and allows
#               the Program Buffer to be one word smaller.
.equ	RISCV_DM_DMSTATUS_IMPEBREAK_RESET, 0x1
.equ	RISCV_DM_DMSTATUS_IMPEBREAK_BITS, 0x00400000
.equ	RISCV_DM_DMSTATUS_IMPEBREAK_MSB, 22
.equ	RISCV_DM_DMSTATUS_IMPEBREAK_LSB, 22
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_DMSTATUS_ALLHAVERESET
# Description : This field is 1 when all currently selected harts have been
#               reset and reset has not been acknowledged for any of them.
.equ	RISCV_DM_DMSTATUS_ALLHAVERESET_RESET, 0x0
.equ	RISCV_DM_DMSTATUS_ALLHAVERESET_BITS, 0x00080000
.equ	RISCV_DM_DMSTATUS_ALLHAVERESET_MSB, 19
.equ	RISCV_DM_DMSTATUS_ALLHAVERESET_LSB, 19
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_DMSTATUS_ANYHAVERESET
# Description : This field is 1 when at least one currently selected hart has
#               been reset and reset has not been acknowledged for that hart.
.equ	RISCV_DM_DMSTATUS_ANYHAVERESET_RESET, 0x0
.equ	RISCV_DM_DMSTATUS_ANYHAVERESET_BITS, 0x00040000
.equ	RISCV_DM_DMSTATUS_ANYHAVERESET_MSB, 18
.equ	RISCV_DM_DMSTATUS_ANYHAVERESET_LSB, 18
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_DMSTATUS_ALLRESUMEACK
# Description : This field is 1 when all currently selected harts have
#               acknowledged their last resume request.
.equ	RISCV_DM_DMSTATUS_ALLRESUMEACK_RESET, 0x0
.equ	RISCV_DM_DMSTATUS_ALLRESUMEACK_BITS, 0x00020000
.equ	RISCV_DM_DMSTATUS_ALLRESUMEACK_MSB, 17
.equ	RISCV_DM_DMSTATUS_ALLRESUMEACK_LSB, 17
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_DMSTATUS_ANYRESUMEACK
# Description : This field is 1 when any currently selected hart has
#               acknowledged its last resume request.
.equ	RISCV_DM_DMSTATUS_ANYRESUMEACK_RESET, 0x0
.equ	RISCV_DM_DMSTATUS_ANYRESUMEACK_BITS, 0x00010000
.equ	RISCV_DM_DMSTATUS_ANYRESUMEACK_MSB, 16
.equ	RISCV_DM_DMSTATUS_ANYRESUMEACK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_DMSTATUS_ALLNONEXISTENT
# Description : This field is 1 when all currently selected harts do not exist
#               on this platform.
.equ	RISCV_DM_DMSTATUS_ALLNONEXISTENT_BITS, 0x00008000
.equ	RISCV_DM_DMSTATUS_ALLNONEXISTENT_MSB, 15
.equ	RISCV_DM_DMSTATUS_ALLNONEXISTENT_LSB, 15
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_DMSTATUS_ANYNONEXISTENT
# Description : This field is 1 when any currently selected hart does not exist
#               in this platform.
.equ	RISCV_DM_DMSTATUS_ANYNONEXISTENT_BITS, 0x00004000
.equ	RISCV_DM_DMSTATUS_ANYNONEXISTENT_MSB, 14
.equ	RISCV_DM_DMSTATUS_ANYNONEXISTENT_LSB, 14
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_DMSTATUS_ALLUNAVAIL
# Description : This field is 1 when all currently selected harts are
#               unavailable.
.equ	RISCV_DM_DMSTATUS_ALLUNAVAIL_BITS, 0x00002000
.equ	RISCV_DM_DMSTATUS_ALLUNAVAIL_MSB, 13
.equ	RISCV_DM_DMSTATUS_ALLUNAVAIL_LSB, 13
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_DMSTATUS_ANYUNAVAIL
# Description : This field is 1 when any currently selected hart is
#               unavailable.
.equ	RISCV_DM_DMSTATUS_ANYUNAVAIL_BITS, 0x00001000
.equ	RISCV_DM_DMSTATUS_ANYUNAVAIL_MSB, 12
.equ	RISCV_DM_DMSTATUS_ANYUNAVAIL_LSB, 12
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_DMSTATUS_ALLRUNNING
# Description : This field is 1 when all currently selected harts are running.
.equ	RISCV_DM_DMSTATUS_ALLRUNNING_RESET, 0x0
.equ	RISCV_DM_DMSTATUS_ALLRUNNING_BITS, 0x00000800
.equ	RISCV_DM_DMSTATUS_ALLRUNNING_MSB, 11
.equ	RISCV_DM_DMSTATUS_ALLRUNNING_LSB, 11
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_DMSTATUS_ANYRUNNING
# Description : This field is 1 when any currently selected hart is running.
.equ	RISCV_DM_DMSTATUS_ANYRUNNING_RESET, 0x0
.equ	RISCV_DM_DMSTATUS_ANYRUNNING_BITS, 0x00000400
.equ	RISCV_DM_DMSTATUS_ANYRUNNING_MSB, 10
.equ	RISCV_DM_DMSTATUS_ANYRUNNING_LSB, 10
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_DMSTATUS_ALLHALTED
# Description : This field is 1 when all currently selected harts are halted.
.equ	RISCV_DM_DMSTATUS_ALLHALTED_RESET, 0x0
.equ	RISCV_DM_DMSTATUS_ALLHALTED_BITS, 0x00000200
.equ	RISCV_DM_DMSTATUS_ALLHALTED_MSB, 9
.equ	RISCV_DM_DMSTATUS_ALLHALTED_LSB, 9
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_DMSTATUS_ANYHALTED
# Description : This field is 1 when any currently selected hart is halted.
.equ	RISCV_DM_DMSTATUS_ANYHALTED_RESET, 0x0
.equ	RISCV_DM_DMSTATUS_ANYHALTED_BITS, 0x00000100
.equ	RISCV_DM_DMSTATUS_ANYHALTED_MSB, 8
.equ	RISCV_DM_DMSTATUS_ANYHALTED_LSB, 8
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_DMSTATUS_AUTHENTICATED
# Description : 0: Authentication is required before using the DM.
#
#               1: The authentication check has passed.
#
#               On components that don’t implement authentication, this bit
#               must be preset as 1. (Note: the version of Hazard3 on RP2350
#               does not implement authentication.)
.equ	RISCV_DM_DMSTATUS_AUTHENTICATED_RESET, 0x1
.equ	RISCV_DM_DMSTATUS_AUTHENTICATED_BITS, 0x00000080
.equ	RISCV_DM_DMSTATUS_AUTHENTICATED_MSB, 7
.equ	RISCV_DM_DMSTATUS_AUTHENTICATED_LSB, 7
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_DMSTATUS_AUTHBUSY
# Description : 0: The authentication module is ready to process the next
#               read/write to authdata.
#
#               1: The authentication module is busy. Accessing authdata
#               results in unspecified behavior. authbusy only becomes set in
#               immediate response to an access to authdata.
.equ	RISCV_DM_DMSTATUS_AUTHBUSY_RESET, 0x0
.equ	RISCV_DM_DMSTATUS_AUTHBUSY_BITS, 0x00000040
.equ	RISCV_DM_DMSTATUS_AUTHBUSY_MSB, 6
.equ	RISCV_DM_DMSTATUS_AUTHBUSY_LSB, 6
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_DMSTATUS_HASRESETHALTREQ
# Description : 1 if this Debug Module supports halt-on-reset functionality
#               controllable by the setresethaltreq and clrresethaltreq bits. 0
#               otherwise.
.equ	RISCV_DM_DMSTATUS_HASRESETHALTREQ_RESET, 0x1
.equ	RISCV_DM_DMSTATUS_HASRESETHALTREQ_BITS, 0x00000020
.equ	RISCV_DM_DMSTATUS_HASRESETHALTREQ_MSB, 5
.equ	RISCV_DM_DMSTATUS_HASRESETHALTREQ_LSB, 5
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_DMSTATUS_CONFSTPTRVALID
# Description : 0: confstrptr0–confstrptr3 hold information which is not
#               relevant to the configuration string.
#
#               1: confstrptr0–confstrptr3 hold the address of the
#               configuration string.
.equ	RISCV_DM_DMSTATUS_CONFSTPTRVALID_RESET, 0x0
.equ	RISCV_DM_DMSTATUS_CONFSTPTRVALID_BITS, 0x00000010
.equ	RISCV_DM_DMSTATUS_CONFSTPTRVALID_MSB, 4
.equ	RISCV_DM_DMSTATUS_CONFSTPTRVALID_LSB, 4
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_DMSTATUS_VERSION
# Description : 0: There is no Debug Module present. 1: There is a Debug Module
#               and it conforms to version 0.11 of the RISC-V debug
#               specification.
#
#               2: There is a Debug Module and it conforms to version 0.13 of
#               the RISC-V debug specification.
#
#               15: There is a Debug Module but it does not con- form to any
#               available version of the RISC-V debug spec.
.equ	RISCV_DM_DMSTATUS_VERSION_RESET, 0x2
.equ	RISCV_DM_DMSTATUS_VERSION_BITS, 0x0000000f
.equ	RISCV_DM_DMSTATUS_VERSION_MSB, 3
.equ	RISCV_DM_DMSTATUS_VERSION_LSB, 0
# =============================================================================
# Register    : RISCV_DM_HARTINFO
# Description : This register gives information about the hart currently
#               selected by hartsel.
#
#               This entire register is read-only.
.equ	RISCV_DM_HARTINFO_OFFSET, 0x00000048
.equ	RISCV_DM_HARTINFO_BITS, 0x00f1ffff
.equ	RISCV_DM_HARTINFO_RESET, 0x00001bff
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_HARTINFO_NSCRATCH
# Description : Number of dscratch registers available for the debugger to use
#               during program buffer execution, starting from dscratch0. The
#               debugger can make no assumptions about the contents of these
#               registers between commands.
.equ	RISCV_DM_HARTINFO_NSCRATCH_RESET, 0x0
.equ	RISCV_DM_HARTINFO_NSCRATCH_BITS, 0x00f00000
.equ	RISCV_DM_HARTINFO_NSCRATCH_MSB, 23
.equ	RISCV_DM_HARTINFO_NSCRATCH_LSB, 20
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_HARTINFO_DATAACCESS
# Description : 0: The data registers are shadowed in the hart by CSRs. Each
#               CSR is DXLEN bits in size, and corresponds to a single
#               argument.
#
#               1: The data registers are shadowed in the hart’s memory map.
#               Each register takes up 4 bytes in the memory map.
.equ	RISCV_DM_HARTINFO_DATAACCESS_RESET, 0x0
.equ	RISCV_DM_HARTINFO_DATAACCESS_BITS, 0x00010000
.equ	RISCV_DM_HARTINFO_DATAACCESS_MSB, 16
.equ	RISCV_DM_HARTINFO_DATAACCESS_LSB, 16
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_HARTINFO_DATASIZE
# Description : If dataaccess is 0: Number of CSRs dedicated to shadowing the
#               data registers.
#
#               If dataaccess is 1: Number of 32-bit words in the memory map
#               dedicated to shadowing the data registers.
.equ	RISCV_DM_HARTINFO_DATASIZE_RESET, 0x1
.equ	RISCV_DM_HARTINFO_DATASIZE_BITS, 0x0000f000
.equ	RISCV_DM_HARTINFO_DATASIZE_MSB, 15
.equ	RISCV_DM_HARTINFO_DATASIZE_LSB, 12
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_HARTINFO_DATAADDR
# Description : If dataaccess is 0: The number of the first CSR dedicated to
#               shadowing the data registers.
#
#               If dataaccess is 1: Signed address of RAM where the data
#               registers are shadowed, to be used to access relative to zero
#
#               On Hazard3 this indicates the single data register mapped as
#               dmdata0. There is actually only a single shared register,
#               internal to the Debug Module, and mirrored in each core's CSR
#               space.
.equ	RISCV_DM_HARTINFO_DATAADDR_RESET, 0xbff
.equ	RISCV_DM_HARTINFO_DATAADDR_BITS, 0x00000fff
.equ	RISCV_DM_HARTINFO_DATAADDR_MSB, 11
.equ	RISCV_DM_HARTINFO_DATAADDR_LSB, 0
# =============================================================================
# Register    : RISCV_DM_HALTSUM1
# Description : Each bit in this read-only register indicates whether any of a
#               group of harts is halted or not. Unavailable/nonexistent harts
#               are not considered to be halted.
#
#               Each bit in haltsum1 is an OR reduction of 32 bits' worth of
#               haltsum0. On RP2350, only the LSB is implemented.
.equ	RISCV_DM_HALTSUM1_OFFSET, 0x0000004c
.equ	RISCV_DM_HALTSUM1_BITS, 0x00000001
.equ	RISCV_DM_HALTSUM1_RESET, 0x00000000
.equ	RISCV_DM_HALTSUM1_MSB, 0
.equ	RISCV_DM_HALTSUM1_LSB, 0
# =============================================================================
# Register    : RISCV_DM_HAWINDOWSEL
# Description : This register selects which of the 32-bit portion of the hart
#               array mask register is accessible in hawindow.
.equ	RISCV_DM_HAWINDOWSEL_OFFSET, 0x00000050
.equ	RISCV_DM_HAWINDOWSEL_BITS, 0x00007fff
.equ	RISCV_DM_HAWINDOWSEL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_HAWINDOWSEL_HAWINDOWSEL
# Description : On Hazard3 this register is entirely hardwired to 0.
.equ	RISCV_DM_HAWINDOWSEL_HAWINDOWSEL_RESET, 0x0000
.equ	RISCV_DM_HAWINDOWSEL_HAWINDOWSEL_BITS, 0x00007fff
.equ	RISCV_DM_HAWINDOWSEL_HAWINDOWSEL_MSB, 14
.equ	RISCV_DM_HAWINDOWSEL_HAWINDOWSEL_LSB, 0
# =============================================================================
# Register    : RISCV_DM_HAWINDOW
# Description : This register provides R/W access to a 32-bit portion of the
#               hart array mask register. The position of the window is
#               determined by hawindowsel. I.e. bit 0 refers to hart
#               hawindowsel ∗ 32, while bit 31 refers to hart hawindowsel ∗ 32
#               + 31.
#
#               On RP2350 only the two least-significant bits of this register
#               are implemented, since there are only two cores. This is still
#               useful to run/halt/reset both cores exactly simultaneously.
.equ	RISCV_DM_HAWINDOW_OFFSET, 0x00000054
.equ	RISCV_DM_HAWINDOW_BITS, 0x00000003
.equ	RISCV_DM_HAWINDOW_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_HAWINDOW_MASKDATA
.equ	RISCV_DM_HAWINDOW_MASKDATA_RESET, 0x0
.equ	RISCV_DM_HAWINDOW_MASKDATA_BITS, 0x00000003
.equ	RISCV_DM_HAWINDOW_MASKDATA_MSB, 1
.equ	RISCV_DM_HAWINDOW_MASKDATA_LSB, 0
# =============================================================================
# Register    : RISCV_DM_ABSTRACTS
# Description : Abstract Control and Status. Writing this register while an
#               abstract command is executing causes cmderr to be set to 1
#               (busy) if it is 0.
.equ	RISCV_DM_ABSTRACTS_OFFSET, 0x00000058
.equ	RISCV_DM_ABSTRACTS_BITS, 0x1f00170f
.equ	RISCV_DM_ABSTRACTS_RESET, 0x02000001
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_ABSTRACTS_PROGBUFSIZE
# Description : Size of the Program Buffer, in 32-bit words.
.equ	RISCV_DM_ABSTRACTS_PROGBUFSIZE_RESET, 0x02
.equ	RISCV_DM_ABSTRACTS_PROGBUFSIZE_BITS, 0x1f000000
.equ	RISCV_DM_ABSTRACTS_PROGBUFSIZE_MSB, 28
.equ	RISCV_DM_ABSTRACTS_PROGBUFSIZE_LSB, 24
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_ABSTRACTS_BUSY
# Description : 1: An abstract command is currently being executed.
#
#               This bit is set as soon as command is written, and is not
#               cleared until that command has completed.
.equ	RISCV_DM_ABSTRACTS_BUSY_RESET, 0x0
.equ	RISCV_DM_ABSTRACTS_BUSY_BITS, 0x00001000
.equ	RISCV_DM_ABSTRACTS_BUSY_MSB, 12
.equ	RISCV_DM_ABSTRACTS_BUSY_LSB, 12
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_ABSTRACTS_CMDERR
# Description : Gets set if an abstract command fails. The bits in this field
#               remain set until they are cleared by writing 1 to them. No
#               abstract command is started until the value is reset to 0.
#
#               This field only contains a valid value if busy is 0.
#
#               0 (none): No error.
#
#               1 (busy): An abstract command was executing while command,
#               abstractcs, or abstractauto was written, or when one of the
#               data or progbuf registers was read or written. This status is
#               only written if cmderr contains 0.
#
#               2 (not supported): The requested command is not supported,
#               regardless of whether the hart is running or not.
#
#               3 (exception): An exception occurred while executing the
#               command (e.g. while executing the Program Buffer).
#
#               4 (halt/resume): The abstract command couldn’t execute because
#               the hart wasn’t in the required state (running/halted), or
#               unavailable.
#
#               5 (bus): The abstract command failed due to a bus error (e.g.
#               alignment, access size, or timeout).
#
#               7 (other): The command failed for another reason.
#
#               Note: Hazard3 does not set values 5 or 7. Load/store
#               instructions in the program buffer raise an exception when they
#               encounter a bus fault, setting cmderr=3.
.equ	RISCV_DM_ABSTRACTS_CMDERR_RESET, 0x0
.equ	RISCV_DM_ABSTRACTS_CMDERR_BITS, 0x00000700
.equ	RISCV_DM_ABSTRACTS_CMDERR_MSB, 10
.equ	RISCV_DM_ABSTRACTS_CMDERR_LSB, 8
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_ABSTRACTS_DATACOUNT
# Description : Number of data registers that are implemented as part of the
#               abstract command interface.
.equ	RISCV_DM_ABSTRACTS_DATACOUNT_RESET, 0x1
.equ	RISCV_DM_ABSTRACTS_DATACOUNT_BITS, 0x0000000f
.equ	RISCV_DM_ABSTRACTS_DATACOUNT_MSB, 3
.equ	RISCV_DM_ABSTRACTS_DATACOUNT_LSB, 0
# =============================================================================
# Register    : RISCV_DM_COMMAND
# Description : Writes to this register cause the corresponding abstract
#               command to be executed.
#
#               Writing this register while an abstract command is executing
#               causes cmderr to be set to 1 (busy) if it is 0.
#
#               If cmderr is non-zero, writes to this register are ignored.
.equ	RISCV_DM_COMMAND_OFFSET, 0x0000005c
.equ	RISCV_DM_COMMAND_BITS, 0xff7fffff
.equ	RISCV_DM_COMMAND_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_COMMAND_CMDTYPE
# Description : On Hazard3 this field must be 0 (Access Register)
.equ	RISCV_DM_COMMAND_CMDTYPE_RESET, 0x00
.equ	RISCV_DM_COMMAND_CMDTYPE_BITS, 0xff000000
.equ	RISCV_DM_COMMAND_CMDTYPE_MSB, 31
.equ	RISCV_DM_COMMAND_CMDTYPE_LSB, 24
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_COMMAND_AARSIZE
# Description : On Hazard3 this field must be 2 (32-bit register access)
.equ	RISCV_DM_COMMAND_AARSIZE_RESET, 0x0
.equ	RISCV_DM_COMMAND_AARSIZE_BITS, 0x00700000
.equ	RISCV_DM_COMMAND_AARSIZE_MSB, 22
.equ	RISCV_DM_COMMAND_AARSIZE_LSB, 20
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_COMMAND_AARPOSTINCREMENT
# Description : On Hazard3 this field must be 0 (no post-increment of regno)
.equ	RISCV_DM_COMMAND_AARPOSTINCREMENT_RESET, 0x0
.equ	RISCV_DM_COMMAND_AARPOSTINCREMENT_BITS, 0x00080000
.equ	RISCV_DM_COMMAND_AARPOSTINCREMENT_MSB, 19
.equ	RISCV_DM_COMMAND_AARPOSTINCREMENT_LSB, 19
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_COMMAND_POSTEXEC
# Description : 0: No effect.
#
#               1: Execute the program in the Program Buffer exactly once after
#               performing the transfer, if any.
.equ	RISCV_DM_COMMAND_POSTEXEC_RESET, 0x0
.equ	RISCV_DM_COMMAND_POSTEXEC_BITS, 0x00040000
.equ	RISCV_DM_COMMAND_POSTEXEC_MSB, 18
.equ	RISCV_DM_COMMAND_POSTEXEC_LSB, 18
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_COMMAND_TRANSFER
# Description : 0: Don’t do the operation specified by write.
#
#               1: Do the operation specified by write.
#
#               This bit can be used to just execute the Program Buffer without
#               having to worry about placing valid values into aarsize or
#               regno.
.equ	RISCV_DM_COMMAND_TRANSFER_RESET, 0x0
.equ	RISCV_DM_COMMAND_TRANSFER_BITS, 0x00020000
.equ	RISCV_DM_COMMAND_TRANSFER_MSB, 17
.equ	RISCV_DM_COMMAND_TRANSFER_LSB, 17
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_COMMAND_WRITE
# Description : When transfer is set:
#
#               0: Copy data from the specified register into data0.
#
#               1: Copy data from data0 into the specified register.
.equ	RISCV_DM_COMMAND_WRITE_RESET, 0x0
.equ	RISCV_DM_COMMAND_WRITE_BITS, 0x00010000
.equ	RISCV_DM_COMMAND_WRITE_MSB, 16
.equ	RISCV_DM_COMMAND_WRITE_LSB, 16
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_COMMAND_REGNO
# Description : Number of the register to access.
#
#               On Hazard3 this must be in the range 0x1000 through 0x101f
#               inclusive, referring to GPRs x0 through x31.
.equ	RISCV_DM_COMMAND_REGNO_RESET, 0x0000
.equ	RISCV_DM_COMMAND_REGNO_BITS, 0x0000ffff
.equ	RISCV_DM_COMMAND_REGNO_MSB, 15
.equ	RISCV_DM_COMMAND_REGNO_LSB, 0
# =============================================================================
# Register    : RISCV_DM_ABSTRACTAUTO
# Description : Abstract Command Autoexec. Writing this register while an
#               abstract command is executing causes cmderr to be set to 1
#               (busy) if it is 0.
.equ	RISCV_DM_ABSTRACTAUTO_OFFSET, 0x00000060
.equ	RISCV_DM_ABSTRACTAUTO_BITS, 0xffff8fff
.equ	RISCV_DM_ABSTRACTAUTO_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_ABSTRACTAUTO_AUTOEXECPROGBUF
# Description : When a bit in this field is 1, read or write accesses to the
#               corresponding progbuf word cause the command in command to be
#               executed again.
#
#               Hazard3 implements only the two least-significant bits of this
#               field (for the two-entry progbuf)
.equ	RISCV_DM_ABSTRACTAUTO_AUTOEXECPROGBUF_RESET, 0x00000
.equ	RISCV_DM_ABSTRACTAUTO_AUTOEXECPROGBUF_BITS, 0xffff8000
.equ	RISCV_DM_ABSTRACTAUTO_AUTOEXECPROGBUF_MSB, 31
.equ	RISCV_DM_ABSTRACTAUTO_AUTOEXECPROGBUF_LSB, 15
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_ABSTRACTAUTO_AUTOEXEDDATA
# Description : When a bit in this field is 1, read or write accesses to the
#               corresponding data word cause the command in command to be
#               executed again.
#
#               Hazard3 implements only the least-significant bit of this
#               field.
.equ	RISCV_DM_ABSTRACTAUTO_AUTOEXEDDATA_RESET, 0x000
.equ	RISCV_DM_ABSTRACTAUTO_AUTOEXEDDATA_BITS, 0x00000fff
.equ	RISCV_DM_ABSTRACTAUTO_AUTOEXEDDATA_MSB, 11
.equ	RISCV_DM_ABSTRACTAUTO_AUTOEXEDDATA_LSB, 0
# =============================================================================
# Register    : RISCV_DM_NEXTDM
# Description : If there is more than one DM accessible on this DMI, this
#               register contains the base address of thenext one in the chain,
#               or 0 if this is the last one in the chain.
.equ	RISCV_DM_NEXTDM_OFFSET, 0x00000074
.equ	RISCV_DM_NEXTDM_BITS, 0xffffffff
.equ	RISCV_DM_NEXTDM_RESET, 0x00000000
.equ	RISCV_DM_NEXTDM_MSB, 31
.equ	RISCV_DM_NEXTDM_LSB, 0
# =============================================================================
# Register    : RISCV_DM_PROGBUF0
# Description : progbuf0 through progbuf15 provide read/write access to the
#               program buffer. abstractcs.progbufsize indicates how many of
#               them are implemented starting at progbuf0, counting up.
#
#               (Hazard3 implements a 2-word program buffer.)
.equ	RISCV_DM_PROGBUF0_OFFSET, 0x00000080
.equ	RISCV_DM_PROGBUF0_BITS, 0xffffffff
.equ	RISCV_DM_PROGBUF0_RESET, 0x00000000
.equ	RISCV_DM_PROGBUF0_MSB, 31
.equ	RISCV_DM_PROGBUF0_LSB, 0
# =============================================================================
# Register    : RISCV_DM_PROGBUF1
# Description : progbuf0 through progbuf15 provide read/write access to the
#               program buffer. abstractcs.progbufsize indicates how many of
#               them are implemented starting at progbuf0, counting up.
#
#               (Hazard3 implements a 2-word program buffer.)
.equ	RISCV_DM_PROGBUF1_OFFSET, 0x00000084
.equ	RISCV_DM_PROGBUF1_BITS, 0xffffffff
.equ	RISCV_DM_PROGBUF1_RESET, 0x00000000
.equ	RISCV_DM_PROGBUF1_MSB, 31
.equ	RISCV_DM_PROGBUF1_LSB, 0
# =============================================================================
# Register    : RISCV_DM_SBCS
# Description : System Bus Access Control and Status
.equ	RISCV_DM_SBCS_OFFSET, 0x000000e0
.equ	RISCV_DM_SBCS_BITS, 0xe07fffff
.equ	RISCV_DM_SBCS_RESET, 0x20000407
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_SBCS_SBVERSION
# Description : 1: The System Bus interface conforms to version 0.13.2 of the
#               RISC-V debug spec.
.equ	RISCV_DM_SBCS_SBVERSION_RESET, 0x1
.equ	RISCV_DM_SBCS_SBVERSION_BITS, 0xe0000000
.equ	RISCV_DM_SBCS_SBVERSION_MSB, 31
.equ	RISCV_DM_SBCS_SBVERSION_LSB, 29
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_SBCS_SBBUSYERROR
# Description : Set when the debugger attempts to read data while a read is in
#               progress, or when the debugger initiates a new access while one
#               is already in progress (while sbbusy is set). It remains set
#               until it’s explicitly cleared by the debugger.
#
#               While this field is set, no more system bus accesses can be
#               initiated by the Debug Module.
.equ	RISCV_DM_SBCS_SBBUSYERROR_RESET, 0x0
.equ	RISCV_DM_SBCS_SBBUSYERROR_BITS, 0x00400000
.equ	RISCV_DM_SBCS_SBBUSYERROR_MSB, 22
.equ	RISCV_DM_SBCS_SBBUSYERROR_LSB, 22
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_SBCS_SBBUSY
# Description : When 1, indicates the system bus master is busy. (Whether the
#               system bus itself is busy is related, but not the same thing.)
#               This bit goes high immediately when a read or write is
#               requested for any reason, and does not go low until the access
#               is fully completed.
#
#               Writes to sbcs while sbbusy is high result in undefined
#               behavior. A debugger must not write to sbcs until it reads
#               sbbusy as 0.
.equ	RISCV_DM_SBCS_SBBUSY_RESET, 0x0
.equ	RISCV_DM_SBCS_SBBUSY_BITS, 0x00200000
.equ	RISCV_DM_SBCS_SBBUSY_MSB, 21
.equ	RISCV_DM_SBCS_SBBUSY_LSB, 21
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_SBCS_SBREADONADDR
# Description : When 1, every write to sbaddress0 automatically triggers a
#               system bus read at the new address.
.equ	RISCV_DM_SBCS_SBREADONADDR_RESET, 0x0
.equ	RISCV_DM_SBCS_SBREADONADDR_BITS, 0x00100000
.equ	RISCV_DM_SBCS_SBREADONADDR_MSB, 20
.equ	RISCV_DM_SBCS_SBREADONADDR_LSB, 20
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_SBCS_SBACCESS
# Description : Select the access size to use for system bus accesses.
#
#               0: 8-bit
#
#               1: 16-bit
#
#               2: 32-bit
#
#               3: 64-bit
#
#               4: 128-bit
#
#               If sbaccess has an unsupported value when the DM starts a bus
#               access, the access is not per formed and sberror is set to 4.
#               (On Hazard3 the supported values are 8-bit, 16-bit and 32-bit.)
.equ	RISCV_DM_SBCS_SBACCESS_RESET, 0x0
.equ	RISCV_DM_SBCS_SBACCESS_BITS, 0x000e0000
.equ	RISCV_DM_SBCS_SBACCESS_MSB, 19
.equ	RISCV_DM_SBCS_SBACCESS_LSB, 17
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_SBCS_SBAUTOINCREMENT
# Description : When 1, sbaddress is incremented by the access size (in bytes)
#               selected in sbaccess after every system bus access.
.equ	RISCV_DM_SBCS_SBAUTOINCREMENT_RESET, 0x0
.equ	RISCV_DM_SBCS_SBAUTOINCREMENT_BITS, 0x00010000
.equ	RISCV_DM_SBCS_SBAUTOINCREMENT_MSB, 16
.equ	RISCV_DM_SBCS_SBAUTOINCREMENT_LSB, 16
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_SBCS_SBREADONDATA
# Description : When 1, every read from sbdata0 automatically triggers a system
#               bus read at the (possibly auto- incremented) address.
.equ	RISCV_DM_SBCS_SBREADONDATA_RESET, 0x0
.equ	RISCV_DM_SBCS_SBREADONDATA_BITS, 0x00008000
.equ	RISCV_DM_SBCS_SBREADONDATA_MSB, 15
.equ	RISCV_DM_SBCS_SBREADONDATA_LSB, 15
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_SBCS_SBERROR
# Description : When the Debug Module’s system bus master encounters an error,
#               this field gets set. The bits in this field remain set until
#               they are cleared by writing 1 to them. While this field is non-
#               zero, no more system bus accesses can be initiated by the Debug
#               Module.
#
#               An implementation may report “Other” (7) for any error
#               condition. (Hazard3 does not use this value for any errors.)
#
#               0: There was no bus error.
#
#               1: There was a timeout.
#
#               2: A bad address was accessed.
#
#               3: There was an alignment error.
#
#               4: An access of unsupported size was requested.
#
#               7: Other.
#
#               Hazard3 raises an alignment error for any non-naturally-aligned
#               bus transfer which would otherwise be a valid transfer.
.equ	RISCV_DM_SBCS_SBERROR_RESET, 0x0
.equ	RISCV_DM_SBCS_SBERROR_BITS, 0x00007000
.equ	RISCV_DM_SBCS_SBERROR_MSB, 14
.equ	RISCV_DM_SBCS_SBERROR_LSB, 12
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_SBCS_SBASIZE
# Description : Width of system bus addresses in bits. (0 indicates there is no
#               bus access support.)
.equ	RISCV_DM_SBCS_SBASIZE_RESET, 0x20
.equ	RISCV_DM_SBCS_SBASIZE_BITS, 0x00000fe0
.equ	RISCV_DM_SBCS_SBASIZE_MSB, 11
.equ	RISCV_DM_SBCS_SBASIZE_LSB, 5
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_SBCS_SBACCESS128
# Description : 1 when 128-bit system bus accesses are supported.
.equ	RISCV_DM_SBCS_SBACCESS128_RESET, 0x0
.equ	RISCV_DM_SBCS_SBACCESS128_BITS, 0x00000010
.equ	RISCV_DM_SBCS_SBACCESS128_MSB, 4
.equ	RISCV_DM_SBCS_SBACCESS128_LSB, 4
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_SBCS_SBACCESS64
# Description : 1 when 64-bit system bus accesses are supported.
.equ	RISCV_DM_SBCS_SBACCESS64_RESET, 0x0
.equ	RISCV_DM_SBCS_SBACCESS64_BITS, 0x00000008
.equ	RISCV_DM_SBCS_SBACCESS64_MSB, 3
.equ	RISCV_DM_SBCS_SBACCESS64_LSB, 3
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_SBCS_SBACCESS32
# Description : 1 when 32-bit system bus accesses are supported.
.equ	RISCV_DM_SBCS_SBACCESS32_RESET, 0x1
.equ	RISCV_DM_SBCS_SBACCESS32_BITS, 0x00000004
.equ	RISCV_DM_SBCS_SBACCESS32_MSB, 2
.equ	RISCV_DM_SBCS_SBACCESS32_LSB, 2
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_SBCS_SBACCESS16
# Description : 1 when 16-bit system bus accesses are supported.
.equ	RISCV_DM_SBCS_SBACCESS16_RESET, 0x1
.equ	RISCV_DM_SBCS_SBACCESS16_BITS, 0x00000002
.equ	RISCV_DM_SBCS_SBACCESS16_MSB, 1
.equ	RISCV_DM_SBCS_SBACCESS16_LSB, 1
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_SBCS_SBACCESS8
# Description : 1 when 8-bit system bus accesses are supported.
.equ	RISCV_DM_SBCS_SBACCESS8_RESET, 0x1
.equ	RISCV_DM_SBCS_SBACCESS8_BITS, 0x00000001
.equ	RISCV_DM_SBCS_SBACCESS8_MSB, 0
.equ	RISCV_DM_SBCS_SBACCESS8_LSB, 0
# =============================================================================
# Register    : RISCV_DM_SBADDRESS0
# Description : System Bus Address 31:0
#
#               When the system bus master is busy, writes to this register
#               will set sbbusyerror and don’t do anything else.
#
#               If sberror is 0, sbbusyerror is 0, and sbreadonaddr is set then
#               writes to this register start the following:
#
#               1. Set sbbusy.
#
#               2. Perform a bus read from the new value of sbaddress.
#
#               3. If the read succeeded and sbautoincrement is set, increment
#               sbaddress.
#
#               4. Clear sbbusy.
.equ	RISCV_DM_SBADDRESS0_OFFSET, 0x000000e4
.equ	RISCV_DM_SBADDRESS0_BITS, 0xffffffff
.equ	RISCV_DM_SBADDRESS0_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_SBADDRESS0_ADDRESS
# Description : Accesses bits 31:0 of the physical address in sbaddress.
.equ	RISCV_DM_SBADDRESS0_ADDRESS_RESET, 0x00000000
.equ	RISCV_DM_SBADDRESS0_ADDRESS_BITS, 0xffffffff
.equ	RISCV_DM_SBADDRESS0_ADDRESS_MSB, 31
.equ	RISCV_DM_SBADDRESS0_ADDRESS_LSB, 0
# =============================================================================
# Register    : RISCV_DM_SBDATA0
# Description : System Bus Data 31:0
#
#               Any successful system bus read updates sbdata. If the width of
#               the read access is less than the width of sbdata, the contents
#               of the remaining high bits may take on any value.
#
#               If sberror or sbbusyerror both aren’t 0 then accesses do
#               nothing.
#
#               If the bus master is busy then accesses set sbbusyerror, and
#               don’t do anything else. Writes to this register start the
#               following:
#
#               1. Set sbbusy.
#
#               2. Perform a bus write of the new value of sbdata to sbaddress.
#
#               3. If the write succeeded and sbautoincrement is set, increment
#               sbaddress.
#
#               4. Clear sbbusy.
#
#               Reads from this register start the following:
#
#               1. “Return” the data.
#
#               2. Set sbbusy.
#
#               3. If sbreadondata is set, perform a system bus read from the
#               address contained in sbaddress, placing the result in sbdata.
#
#               4. If the read was successful, and sbautoincrement is set,
#               increment sbaddress.
#
#               5. Clear sbbusy.
.equ	RISCV_DM_SBDATA0_OFFSET, 0x000000f0
.equ	RISCV_DM_SBDATA0_BITS, 0xffffffff
.equ	RISCV_DM_SBDATA0_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RISCV_DM_SBDATA0_DATA
.equ	RISCV_DM_SBDATA0_DATA_RESET, 0x00000000
.equ	RISCV_DM_SBDATA0_DATA_BITS, 0xffffffff
.equ	RISCV_DM_SBDATA0_DATA_MSB, 31
.equ	RISCV_DM_SBDATA0_DATA_LSB, 0
# =============================================================================
# Register    : RISCV_DM_HALTSUM0
# Description : Each bit in this read-only register indicates whether one
#               specific hart is halted or not. Unavailable/nonexistent harts
#               are not considered to be halted.
#
#               On RP2350, only the two LSBs of this register are implemented,
#               one for each core/hart.
#
#               This entire register is read-only.
.equ	RISCV_DM_HALTSUM0_OFFSET, 0x00000100
.equ	RISCV_DM_HALTSUM0_BITS, 0xffffffff
.equ	RISCV_DM_HALTSUM0_RESET, 0x00000000
.equ	RISCV_DM_HALTSUM0_MSB, 31
.equ	RISCV_DM_HALTSUM0_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_RISCV_DM_H
