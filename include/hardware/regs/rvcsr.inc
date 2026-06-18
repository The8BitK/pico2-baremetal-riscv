#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : RVCSR
# Version        : 1
# Bus type       : apb
# Description    : CSR listing for Hazard3
# =============================================================================
.ifndef	_HARDWARE_REGS_RVCSR_H
.set	_HARDWARE_REGS_RVCSR_H, 1
# =============================================================================
# Register    : RVCSR_MSTATUS
# Description : Machine status register
.equ	RVCSR_MSTATUS_OFFSET, 0x00000300
.equ	RVCSR_MSTATUS_BITS, 0x00221888
.equ	RVCSR_MSTATUS_RESET, 0x00001800
# -----------------------------------------------------------------------------
# Field       : RVCSR_MSTATUS_TW
# Description : Timeout wait. When 1, attempting to execute a WFI instruction
#               in U-mode will instantly cause an illegal instruction
#               exception.
.equ	RVCSR_MSTATUS_TW_RESET, 0x0
.equ	RVCSR_MSTATUS_TW_BITS, 0x00200000
.equ	RVCSR_MSTATUS_TW_MSB, 21
.equ	RVCSR_MSTATUS_TW_LSB, 21
# -----------------------------------------------------------------------------
# Field       : RVCSR_MSTATUS_MPRV
# Description : Modify privilege. If 1, loads and stores behave as though the
#               current privilege level were `mpp`. This includes physical
#               memory protection checks, and the privilege level asserted on
#               the system bus alongside the load/store address.
.equ	RVCSR_MSTATUS_MPRV_RESET, 0x0
.equ	RVCSR_MSTATUS_MPRV_BITS, 0x00020000
.equ	RVCSR_MSTATUS_MPRV_MSB, 17
.equ	RVCSR_MSTATUS_MPRV_LSB, 17
# -----------------------------------------------------------------------------
# Field       : RVCSR_MSTATUS_MPP
# Description : Previous privilege level. Can store the values 3 (M-mode) or 0
#               (U-mode). If another value is written, hardware rounds to the
#               nearest supported mode.
.equ	RVCSR_MSTATUS_MPP_RESET, 0x3
.equ	RVCSR_MSTATUS_MPP_BITS, 0x00001800
.equ	RVCSR_MSTATUS_MPP_MSB, 12
.equ	RVCSR_MSTATUS_MPP_LSB, 11
# -----------------------------------------------------------------------------
# Field       : RVCSR_MSTATUS_MPIE
# Description : Previous interrupt enable. Readable and writable. Is set to the
#               current value of `mstatus.mie` on trap entry. Is set to 1 on
#               trap return.
.equ	RVCSR_MSTATUS_MPIE_RESET, 0x0
.equ	RVCSR_MSTATUS_MPIE_BITS, 0x00000080
.equ	RVCSR_MSTATUS_MPIE_MSB, 7
.equ	RVCSR_MSTATUS_MPIE_LSB, 7
# -----------------------------------------------------------------------------
# Field       : RVCSR_MSTATUS_MIE
# Description : Interrupt enable. Readable and writable. Is set to 0 on trap
#               entry. Is set to the current value of `mstatus.mpie` on trap
#               return.
.equ	RVCSR_MSTATUS_MIE_RESET, 0x0
.equ	RVCSR_MSTATUS_MIE_BITS, 0x00000008
.equ	RVCSR_MSTATUS_MIE_MSB, 3
.equ	RVCSR_MSTATUS_MIE_LSB, 3
# =============================================================================
# Register    : RVCSR_MISA
# Description : Summary of ISA extension support
#
#               On RP2350, Hazard3's full `-march` string is:
#               `rv32ima_zicsr_zifencei_zba_zbb_zbs_zbkb_zca_zcb_zcmp`
#
#               Note Zca is equivalent to the C extension in this case; all
#               instructions from the RISC-V C extension relevant to a 32-bit
#               non-floating-point processor are supported. On older toolchains
#               which do not support the Zc extensions, the appropriate
#               `-march` string is: `rv32imac_zicsr_zifencei_zba_zbb_zbs_zbkb`
#
#               In addition the following custom extensions are configured:
#               Xh3bm, Xh3power, Xh3irq, Xh3pmpm
.equ	RVCSR_MISA_OFFSET, 0x00000301
.equ	RVCSR_MISA_BITS, 0xc0901107
.equ	RVCSR_MISA_RESET, 0x40901105
# -----------------------------------------------------------------------------
# Field       : RVCSR_MISA_MXL
# Description : Value of 0x1 indicates this is a 32-bit processor.
.equ	RVCSR_MISA_MXL_RESET, 0x1
.equ	RVCSR_MISA_MXL_BITS, 0xc0000000
.equ	RVCSR_MISA_MXL_MSB, 31
.equ	RVCSR_MISA_MXL_LSB, 30
# -----------------------------------------------------------------------------
# Field       : RVCSR_MISA_X
# Description : Value of 1 indicates nonstandard extensions are present. (Xh3b
#               bit manipulation, and custom sleep and interrupt control CSRs)
.equ	RVCSR_MISA_X_RESET, 0x1
.equ	RVCSR_MISA_X_BITS, 0x00800000
.equ	RVCSR_MISA_X_MSB, 23
.equ	RVCSR_MISA_X_LSB, 23
# -----------------------------------------------------------------------------
# Field       : RVCSR_MISA_U
# Description : Value of 1 indicates U-mode is implemented.
.equ	RVCSR_MISA_U_RESET, 0x1
.equ	RVCSR_MISA_U_BITS, 0x00100000
.equ	RVCSR_MISA_U_MSB, 20
.equ	RVCSR_MISA_U_LSB, 20
# -----------------------------------------------------------------------------
# Field       : RVCSR_MISA_M
# Description : Value of 1 indicates the M extension (integer multiply/divide)
#               is implemented.
.equ	RVCSR_MISA_M_RESET, 0x1
.equ	RVCSR_MISA_M_BITS, 0x00001000
.equ	RVCSR_MISA_M_MSB, 12
.equ	RVCSR_MISA_M_LSB, 12
# -----------------------------------------------------------------------------
# Field       : RVCSR_MISA_I
# Description : Value of 1 indicates the RVI base ISA is implemented (as
#               opposed to RVE)
.equ	RVCSR_MISA_I_RESET, 0x1
.equ	RVCSR_MISA_I_BITS, 0x00000100
.equ	RVCSR_MISA_I_MSB, 8
.equ	RVCSR_MISA_I_LSB, 8
# -----------------------------------------------------------------------------
# Field       : RVCSR_MISA_C
# Description : Value of 1 indicates the C extension (compressed instructions)
#               is implemented.
.equ	RVCSR_MISA_C_RESET, 0x1
.equ	RVCSR_MISA_C_BITS, 0x00000004
.equ	RVCSR_MISA_C_MSB, 2
.equ	RVCSR_MISA_C_LSB, 2
# -----------------------------------------------------------------------------
# Field       : RVCSR_MISA_B
# Description : Value of 1 indicates the B extension (bit manipulation) is
#               implemented. B is the combination of Zba, Zbb and Zbs.
#
#               Hazard3 implements all of these extensions, but the definition
#               of B as ZbaZbbZbs did not exist at the point this version of
#               Hazard3 was taped out. This bit was reserved-0 at that point.
#               Therefore this bit reads as 0.
.equ	RVCSR_MISA_B_RESET, 0x0
.equ	RVCSR_MISA_B_BITS, 0x00000002
.equ	RVCSR_MISA_B_MSB, 1
.equ	RVCSR_MISA_B_LSB, 1
# -----------------------------------------------------------------------------
# Field       : RVCSR_MISA_A
# Description : Value of 1 indicates the A extension (atomics) is implemented.
.equ	RVCSR_MISA_A_RESET, 0x1
.equ	RVCSR_MISA_A_BITS, 0x00000001
.equ	RVCSR_MISA_A_MSB, 0
.equ	RVCSR_MISA_A_LSB, 0
# =============================================================================
# Register    : RVCSR_MEDELEG
# Description : Machine exception delegation register. Not implemented, as no
#               S-mode support.
.equ	RVCSR_MEDELEG_OFFSET, 0x00000302
.equ	RVCSR_MEDELEG_BITS, 0xffffffff
.equ	RVCSR_MEDELEG_MSB, 31
.equ	RVCSR_MEDELEG_LSB, 0
# =============================================================================
# Register    : RVCSR_MIDELEG
# Description : Machine interrupt delegation register. Not implemented, as no
#               S-mode support.
.equ	RVCSR_MIDELEG_OFFSET, 0x00000303
.equ	RVCSR_MIDELEG_BITS, 0xffffffff
.equ	RVCSR_MIDELEG_MSB, 31
.equ	RVCSR_MIDELEG_LSB, 0
# =============================================================================
# Register    : RVCSR_MIE
# Description : Machine interrupt enable register
.equ	RVCSR_MIE_OFFSET, 0x00000304
.equ	RVCSR_MIE_BITS, 0x00000888
.equ	RVCSR_MIE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RVCSR_MIE_MEIE
# Description : External interrupt enable. The processor transfers to the
#               external interrupt vector when `mie.meie`, `mip.meip` and
#               `mstatus.mie` are all 1.
#
#               Hazard3 has internal registers to individually filter external
#               interrupts (see `meiea`), but this standard control can be used
#               to mask all external interrupts at once.
.equ	RVCSR_MIE_MEIE_RESET, 0x0
.equ	RVCSR_MIE_MEIE_BITS, 0x00000800
.equ	RVCSR_MIE_MEIE_MSB, 11
.equ	RVCSR_MIE_MEIE_LSB, 11
# -----------------------------------------------------------------------------
# Field       : RVCSR_MIE_MTIE
# Description : Timer interrupt enable. The processor transfers to the timer
#               interrupt vector when `mie.mtie`, `mip.mtip` and `mstatus.mie`
#               are all 1, unless a software or external interrupt request is
#               also valid at this time.
.equ	RVCSR_MIE_MTIE_RESET, 0x0
.equ	RVCSR_MIE_MTIE_BITS, 0x00000080
.equ	RVCSR_MIE_MTIE_MSB, 7
.equ	RVCSR_MIE_MTIE_LSB, 7
# -----------------------------------------------------------------------------
# Field       : RVCSR_MIE_MSIE
# Description : Software interrupt enable. The processor transfers to the
#               software interrupt vector `mie.msie`, `mip.msip` and
#               `mstatus.mie` are all 1, unless an external interrupt request
#               is also valid at this time.
.equ	RVCSR_MIE_MSIE_RESET, 0x0
.equ	RVCSR_MIE_MSIE_BITS, 0x00000008
.equ	RVCSR_MIE_MSIE_MSB, 3
.equ	RVCSR_MIE_MSIE_LSB, 3
# =============================================================================
# Register    : RVCSR_MTVEC
# Description : Machine trap handler base address.
.equ	RVCSR_MTVEC_OFFSET, 0x00000305
.equ	RVCSR_MTVEC_BITS, 0xffffffff
.equ	RVCSR_MTVEC_RESET, 0x00007ffc
# -----------------------------------------------------------------------------
# Field       : RVCSR_MTVEC_BASE
# Description : The upper 30 bits of the trap vector address (2 LSBs are
#               implicitly 0). Must be 64-byte-aligned if vectoring is enabled.
#               Otherwise, must be 4-byte-aligned.
.equ	RVCSR_MTVEC_BASE_RESET, 0x00001fff
.equ	RVCSR_MTVEC_BASE_BITS, 0xfffffffc
.equ	RVCSR_MTVEC_BASE_MSB, 31
.equ	RVCSR_MTVEC_BASE_LSB, 2
# -----------------------------------------------------------------------------
# Field       : RVCSR_MTVEC_MODE
# Description : If 0 (direct mode), all traps set pc to the trap vector base.
#               If 1 (vectored), exceptions set pc to the trap vector base, and
#               interrupts set pc to 4 times the interrupt cause (3=soft IRQ,
#               7=timer IRQ, 11=external IRQ).
#
#               The upper bit is hardwired to zero, so attempting to set mode
#               to 2 or 3 will result in a value of 0 or 1 respectively.
#               0x0 -> Direct entry to mtvec
#               0x1 -> Vectored entry to a 16-entry jump table starting at mtvec
.equ	RVCSR_MTVEC_MODE_RESET, 0x0
.equ	RVCSR_MTVEC_MODE_BITS, 0x00000003
.equ	RVCSR_MTVEC_MODE_MSB, 1
.equ	RVCSR_MTVEC_MODE_LSB, 0
.equ	RVCSR_MTVEC_MODE_VALUE_DIRECT, 0x0
.equ	RVCSR_MTVEC_MODE_VALUE_VECTORED, 0x1
# =============================================================================
# Register    : RVCSR_MCOUNTEREN
# Description : Counter enable. Control access to counters from U-mode. Not to
#               be confused with mcountinhibit.
.equ	RVCSR_MCOUNTEREN_OFFSET, 0x00000306
.equ	RVCSR_MCOUNTEREN_BITS, 0x00000007
.equ	RVCSR_MCOUNTEREN_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RVCSR_MCOUNTEREN_IR
# Description : If 1, U-mode is permitted to access the `instret`/`instreth`
#               instruction retire counter CSRs. Otherwise, U-mode accesses to
#               these CSRs will trap.
.equ	RVCSR_MCOUNTEREN_IR_RESET, 0x0
.equ	RVCSR_MCOUNTEREN_IR_BITS, 0x00000004
.equ	RVCSR_MCOUNTEREN_IR_MSB, 2
.equ	RVCSR_MCOUNTEREN_IR_LSB, 2
# -----------------------------------------------------------------------------
# Field       : RVCSR_MCOUNTEREN_TM
# Description : No hardware effect, as the `time`/`timeh` CSRs are not
#               implemented. However, this field still exists, as M-mode
#               software can use it to track whether it should emulate U-mode
#               attempts to access those CSRs.
.equ	RVCSR_MCOUNTEREN_TM_RESET, 0x0
.equ	RVCSR_MCOUNTEREN_TM_BITS, 0x00000002
.equ	RVCSR_MCOUNTEREN_TM_MSB, 1
.equ	RVCSR_MCOUNTEREN_TM_LSB, 1
# -----------------------------------------------------------------------------
# Field       : RVCSR_MCOUNTEREN_CY
# Description : If 1, U-mode is permitted to access the `cycle`/`cycleh` cycle
#               counter CSRs. Otherwise, U-mode accesses to these CSRs will
#               trap.
.equ	RVCSR_MCOUNTEREN_CY_RESET, 0x0
.equ	RVCSR_MCOUNTEREN_CY_BITS, 0x00000001
.equ	RVCSR_MCOUNTEREN_CY_MSB, 0
.equ	RVCSR_MCOUNTEREN_CY_LSB, 0
# =============================================================================
# Register    : RVCSR_MENVCFG
# Description : Machine environment configuration register, low half
.equ	RVCSR_MENVCFG_OFFSET, 0x0000030a
.equ	RVCSR_MENVCFG_BITS, 0x00000001
.equ	RVCSR_MENVCFG_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RVCSR_MENVCFG_FIOM
# Description : When set, fence instructions in modes less privileged than
#               M-mode which specify that IO memory accesses are ordered will
#               also cause ordering of main memory accesses.
#
#               FIOM is hardwired to zero on Hazard3, because S-mode is not
#               supported, and because fence instructions execute as NOPs (with
#               the exception of `fence.i`)
.equ	RVCSR_MENVCFG_FIOM_RESET, 0x0
.equ	RVCSR_MENVCFG_FIOM_BITS, 0x00000001
.equ	RVCSR_MENVCFG_FIOM_MSB, 0
.equ	RVCSR_MENVCFG_FIOM_LSB, 0
# =============================================================================
# Register    : RVCSR_MSTATUSH
# Description : High half of mstatus, hardwired to 0.
.equ	RVCSR_MSTATUSH_OFFSET, 0x00000310
.equ	RVCSR_MSTATUSH_BITS, 0xffffffff
.equ	RVCSR_MSTATUSH_RESET, 0x00000000
.equ	RVCSR_MSTATUSH_MSB, 31
.equ	RVCSR_MSTATUSH_LSB, 0
# =============================================================================
# Register    : RVCSR_MENVCFGH
# Description : Machine environment configuration register, high half
#
#               This register is fully reserved, as Hazard3 does not implement
#               the relevant extensions. It is implemented as hardwired-0.
.equ	RVCSR_MENVCFGH_OFFSET, 0x0000031a
.equ	RVCSR_MENVCFGH_BITS, 0x00000000
.equ	RVCSR_MENVCFGH_RESET, 0x00000000
.equ	RVCSR_MENVCFGH_MSB, 31
.equ	RVCSR_MENVCFGH_LSB, 0
# =============================================================================
# Register    : RVCSR_MCOUNTINHIBIT
# Description : Count inhibit register for `mcycle`/`minstret`
.equ	RVCSR_MCOUNTINHIBIT_OFFSET, 0x00000320
.equ	RVCSR_MCOUNTINHIBIT_BITS, 0x00000005
.equ	RVCSR_MCOUNTINHIBIT_RESET, 0x00000005
# -----------------------------------------------------------------------------
# Field       : RVCSR_MCOUNTINHIBIT_IR
# Description : Inhibit counting of the `minstret` and `minstreth` registers.
#               Set by default to save power.
.equ	RVCSR_MCOUNTINHIBIT_IR_RESET, 0x1
.equ	RVCSR_MCOUNTINHIBIT_IR_BITS, 0x00000004
.equ	RVCSR_MCOUNTINHIBIT_IR_MSB, 2
.equ	RVCSR_MCOUNTINHIBIT_IR_LSB, 2
# -----------------------------------------------------------------------------
# Field       : RVCSR_MCOUNTINHIBIT_CY
# Description : Inhibit counting of the `mcycle` and `mcycleh` registers. Set
#               by default to save power.
.equ	RVCSR_MCOUNTINHIBIT_CY_RESET, 0x1
.equ	RVCSR_MCOUNTINHIBIT_CY_BITS, 0x00000001
.equ	RVCSR_MCOUNTINHIBIT_CY_MSB, 0
.equ	RVCSR_MCOUNTINHIBIT_CY_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMEVENT3
# Description : Extended performance event selector, hardwired to 0.
.equ	RVCSR_MHPMEVENT3_OFFSET, 0x00000323
.equ	RVCSR_MHPMEVENT3_BITS, 0xffffffff
.equ	RVCSR_MHPMEVENT3_RESET, 0x00000000
.equ	RVCSR_MHPMEVENT3_MSB, 31
.equ	RVCSR_MHPMEVENT3_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMEVENT4
# Description : Extended performance event selector, hardwired to 0.
.equ	RVCSR_MHPMEVENT4_OFFSET, 0x00000324
.equ	RVCSR_MHPMEVENT4_BITS, 0xffffffff
.equ	RVCSR_MHPMEVENT4_RESET, 0x00000000
.equ	RVCSR_MHPMEVENT4_MSB, 31
.equ	RVCSR_MHPMEVENT4_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMEVENT5
# Description : Extended performance event selector, hardwired to 0.
.equ	RVCSR_MHPMEVENT5_OFFSET, 0x00000325
.equ	RVCSR_MHPMEVENT5_BITS, 0xffffffff
.equ	RVCSR_MHPMEVENT5_RESET, 0x00000000
.equ	RVCSR_MHPMEVENT5_MSB, 31
.equ	RVCSR_MHPMEVENT5_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMEVENT6
# Description : Extended performance event selector, hardwired to 0.
.equ	RVCSR_MHPMEVENT6_OFFSET, 0x00000326
.equ	RVCSR_MHPMEVENT6_BITS, 0xffffffff
.equ	RVCSR_MHPMEVENT6_RESET, 0x00000000
.equ	RVCSR_MHPMEVENT6_MSB, 31
.equ	RVCSR_MHPMEVENT6_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMEVENT7
# Description : Extended performance event selector, hardwired to 0.
.equ	RVCSR_MHPMEVENT7_OFFSET, 0x00000327
.equ	RVCSR_MHPMEVENT7_BITS, 0xffffffff
.equ	RVCSR_MHPMEVENT7_RESET, 0x00000000
.equ	RVCSR_MHPMEVENT7_MSB, 31
.equ	RVCSR_MHPMEVENT7_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMEVENT8
# Description : Extended performance event selector, hardwired to 0.
.equ	RVCSR_MHPMEVENT8_OFFSET, 0x00000328
.equ	RVCSR_MHPMEVENT8_BITS, 0xffffffff
.equ	RVCSR_MHPMEVENT8_RESET, 0x00000000
.equ	RVCSR_MHPMEVENT8_MSB, 31
.equ	RVCSR_MHPMEVENT8_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMEVENT9
# Description : Extended performance event selector, hardwired to 0.
.equ	RVCSR_MHPMEVENT9_OFFSET, 0x00000329
.equ	RVCSR_MHPMEVENT9_BITS, 0xffffffff
.equ	RVCSR_MHPMEVENT9_RESET, 0x00000000
.equ	RVCSR_MHPMEVENT9_MSB, 31
.equ	RVCSR_MHPMEVENT9_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMEVENT10
# Description : Extended performance event selector, hardwired to 0.
.equ	RVCSR_MHPMEVENT10_OFFSET, 0x0000032a
.equ	RVCSR_MHPMEVENT10_BITS, 0xffffffff
.equ	RVCSR_MHPMEVENT10_RESET, 0x00000000
.equ	RVCSR_MHPMEVENT10_MSB, 31
.equ	RVCSR_MHPMEVENT10_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMEVENT11
# Description : Extended performance event selector, hardwired to 0.
.equ	RVCSR_MHPMEVENT11_OFFSET, 0x0000032b
.equ	RVCSR_MHPMEVENT11_BITS, 0xffffffff
.equ	RVCSR_MHPMEVENT11_RESET, 0x00000000
.equ	RVCSR_MHPMEVENT11_MSB, 31
.equ	RVCSR_MHPMEVENT11_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMEVENT12
# Description : Extended performance event selector, hardwired to 0.
.equ	RVCSR_MHPMEVENT12_OFFSET, 0x0000032c
.equ	RVCSR_MHPMEVENT12_BITS, 0xffffffff
.equ	RVCSR_MHPMEVENT12_RESET, 0x00000000
.equ	RVCSR_MHPMEVENT12_MSB, 31
.equ	RVCSR_MHPMEVENT12_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMEVENT13
# Description : Extended performance event selector, hardwired to 0.
.equ	RVCSR_MHPMEVENT13_OFFSET, 0x0000032d
.equ	RVCSR_MHPMEVENT13_BITS, 0xffffffff
.equ	RVCSR_MHPMEVENT13_RESET, 0x00000000
.equ	RVCSR_MHPMEVENT13_MSB, 31
.equ	RVCSR_MHPMEVENT13_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMEVENT14
# Description : Extended performance event selector, hardwired to 0.
.equ	RVCSR_MHPMEVENT14_OFFSET, 0x0000032e
.equ	RVCSR_MHPMEVENT14_BITS, 0xffffffff
.equ	RVCSR_MHPMEVENT14_RESET, 0x00000000
.equ	RVCSR_MHPMEVENT14_MSB, 31
.equ	RVCSR_MHPMEVENT14_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMEVENT15
# Description : Extended performance event selector, hardwired to 0.
.equ	RVCSR_MHPMEVENT15_OFFSET, 0x0000032f
.equ	RVCSR_MHPMEVENT15_BITS, 0xffffffff
.equ	RVCSR_MHPMEVENT15_RESET, 0x00000000
.equ	RVCSR_MHPMEVENT15_MSB, 31
.equ	RVCSR_MHPMEVENT15_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMEVENT16
# Description : Extended performance event selector, hardwired to 0.
.equ	RVCSR_MHPMEVENT16_OFFSET, 0x00000330
.equ	RVCSR_MHPMEVENT16_BITS, 0xffffffff
.equ	RVCSR_MHPMEVENT16_RESET, 0x00000000
.equ	RVCSR_MHPMEVENT16_MSB, 31
.equ	RVCSR_MHPMEVENT16_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMEVENT17
# Description : Extended performance event selector, hardwired to 0.
.equ	RVCSR_MHPMEVENT17_OFFSET, 0x00000331
.equ	RVCSR_MHPMEVENT17_BITS, 0xffffffff
.equ	RVCSR_MHPMEVENT17_RESET, 0x00000000
.equ	RVCSR_MHPMEVENT17_MSB, 31
.equ	RVCSR_MHPMEVENT17_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMEVENT18
# Description : Extended performance event selector, hardwired to 0.
.equ	RVCSR_MHPMEVENT18_OFFSET, 0x00000332
.equ	RVCSR_MHPMEVENT18_BITS, 0xffffffff
.equ	RVCSR_MHPMEVENT18_RESET, 0x00000000
.equ	RVCSR_MHPMEVENT18_MSB, 31
.equ	RVCSR_MHPMEVENT18_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMEVENT19
# Description : Extended performance event selector, hardwired to 0.
.equ	RVCSR_MHPMEVENT19_OFFSET, 0x00000333
.equ	RVCSR_MHPMEVENT19_BITS, 0xffffffff
.equ	RVCSR_MHPMEVENT19_RESET, 0x00000000
.equ	RVCSR_MHPMEVENT19_MSB, 31
.equ	RVCSR_MHPMEVENT19_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMEVENT20
# Description : Extended performance event selector, hardwired to 0.
.equ	RVCSR_MHPMEVENT20_OFFSET, 0x00000334
.equ	RVCSR_MHPMEVENT20_BITS, 0xffffffff
.equ	RVCSR_MHPMEVENT20_RESET, 0x00000000
.equ	RVCSR_MHPMEVENT20_MSB, 31
.equ	RVCSR_MHPMEVENT20_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMEVENT21
# Description : Extended performance event selector, hardwired to 0.
.equ	RVCSR_MHPMEVENT21_OFFSET, 0x00000335
.equ	RVCSR_MHPMEVENT21_BITS, 0xffffffff
.equ	RVCSR_MHPMEVENT21_RESET, 0x00000000
.equ	RVCSR_MHPMEVENT21_MSB, 31
.equ	RVCSR_MHPMEVENT21_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMEVENT22
# Description : Extended performance event selector, hardwired to 0.
.equ	RVCSR_MHPMEVENT22_OFFSET, 0x00000336
.equ	RVCSR_MHPMEVENT22_BITS, 0xffffffff
.equ	RVCSR_MHPMEVENT22_RESET, 0x00000000
.equ	RVCSR_MHPMEVENT22_MSB, 31
.equ	RVCSR_MHPMEVENT22_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMEVENT23
# Description : Extended performance event selector, hardwired to 0.
.equ	RVCSR_MHPMEVENT23_OFFSET, 0x00000337
.equ	RVCSR_MHPMEVENT23_BITS, 0xffffffff
.equ	RVCSR_MHPMEVENT23_RESET, 0x00000000
.equ	RVCSR_MHPMEVENT23_MSB, 31
.equ	RVCSR_MHPMEVENT23_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMEVENT24
# Description : Extended performance event selector, hardwired to 0.
.equ	RVCSR_MHPMEVENT24_OFFSET, 0x00000338
.equ	RVCSR_MHPMEVENT24_BITS, 0xffffffff
.equ	RVCSR_MHPMEVENT24_RESET, 0x00000000
.equ	RVCSR_MHPMEVENT24_MSB, 31
.equ	RVCSR_MHPMEVENT24_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMEVENT25
# Description : Extended performance event selector, hardwired to 0.
.equ	RVCSR_MHPMEVENT25_OFFSET, 0x00000339
.equ	RVCSR_MHPMEVENT25_BITS, 0xffffffff
.equ	RVCSR_MHPMEVENT25_RESET, 0x00000000
.equ	RVCSR_MHPMEVENT25_MSB, 31
.equ	RVCSR_MHPMEVENT25_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMEVENT26
# Description : Extended performance event selector, hardwired to 0.
.equ	RVCSR_MHPMEVENT26_OFFSET, 0x0000033a
.equ	RVCSR_MHPMEVENT26_BITS, 0xffffffff
.equ	RVCSR_MHPMEVENT26_RESET, 0x00000000
.equ	RVCSR_MHPMEVENT26_MSB, 31
.equ	RVCSR_MHPMEVENT26_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMEVENT27
# Description : Extended performance event selector, hardwired to 0.
.equ	RVCSR_MHPMEVENT27_OFFSET, 0x0000033b
.equ	RVCSR_MHPMEVENT27_BITS, 0xffffffff
.equ	RVCSR_MHPMEVENT27_RESET, 0x00000000
.equ	RVCSR_MHPMEVENT27_MSB, 31
.equ	RVCSR_MHPMEVENT27_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMEVENT28
# Description : Extended performance event selector, hardwired to 0.
.equ	RVCSR_MHPMEVENT28_OFFSET, 0x0000033c
.equ	RVCSR_MHPMEVENT28_BITS, 0xffffffff
.equ	RVCSR_MHPMEVENT28_RESET, 0x00000000
.equ	RVCSR_MHPMEVENT28_MSB, 31
.equ	RVCSR_MHPMEVENT28_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMEVENT29
# Description : Extended performance event selector, hardwired to 0.
.equ	RVCSR_MHPMEVENT29_OFFSET, 0x0000033d
.equ	RVCSR_MHPMEVENT29_BITS, 0xffffffff
.equ	RVCSR_MHPMEVENT29_RESET, 0x00000000
.equ	RVCSR_MHPMEVENT29_MSB, 31
.equ	RVCSR_MHPMEVENT29_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMEVENT30
# Description : Extended performance event selector, hardwired to 0.
.equ	RVCSR_MHPMEVENT30_OFFSET, 0x0000033e
.equ	RVCSR_MHPMEVENT30_BITS, 0xffffffff
.equ	RVCSR_MHPMEVENT30_RESET, 0x00000000
.equ	RVCSR_MHPMEVENT30_MSB, 31
.equ	RVCSR_MHPMEVENT30_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMEVENT31
# Description : Extended performance event selector, hardwired to 0.
.equ	RVCSR_MHPMEVENT31_OFFSET, 0x0000033f
.equ	RVCSR_MHPMEVENT31_BITS, 0xffffffff
.equ	RVCSR_MHPMEVENT31_RESET, 0x00000000
.equ	RVCSR_MHPMEVENT31_MSB, 31
.equ	RVCSR_MHPMEVENT31_LSB, 0
# =============================================================================
# Register    : RVCSR_MSCRATCH
# Description : Scratch register for machine trap handlers.
#
#               32-bit read/write register with no specific hardware function.
#               Software may use this to do a fast save/restore of a core
#               register in a trap handler.
.equ	RVCSR_MSCRATCH_OFFSET, 0x00000340
.equ	RVCSR_MSCRATCH_BITS, 0xffffffff
.equ	RVCSR_MSCRATCH_RESET, 0x00000000
.equ	RVCSR_MSCRATCH_MSB, 31
.equ	RVCSR_MSCRATCH_LSB, 0
# =============================================================================
# Register    : RVCSR_MEPC
# Description : Machine exception program counter.
#
#               When entering a trap, the current value of the program counter
#               is recorded here. When executing an `mret`, the processor jumps
#               to `mepc`. Can also be read and written by software.
.equ	RVCSR_MEPC_OFFSET, 0x00000341
.equ	RVCSR_MEPC_BITS, 0xfffffffc
.equ	RVCSR_MEPC_RESET, 0x00000000
.equ	RVCSR_MEPC_MSB, 31
.equ	RVCSR_MEPC_LSB, 2
# =============================================================================
# Register    : RVCSR_MCAUSE
# Description : Machine trap cause. Set when entering a trap to indicate the
#               reason for the trap. Readable and writable by software.
.equ	RVCSR_MCAUSE_OFFSET, 0x00000342
.equ	RVCSR_MCAUSE_BITS, 0x8000000f
.equ	RVCSR_MCAUSE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RVCSR_MCAUSE_INTERRUPT
# Description : If 1, the trap was caused by an interrupt. If 0, it was caused
#               by an exception.
.equ	RVCSR_MCAUSE_INTERRUPT_RESET, 0x0
.equ	RVCSR_MCAUSE_INTERRUPT_BITS, 0x80000000
.equ	RVCSR_MCAUSE_INTERRUPT_MSB, 31
.equ	RVCSR_MCAUSE_INTERRUPT_LSB, 31
# -----------------------------------------------------------------------------
# Field       : RVCSR_MCAUSE_CODE
# Description : If `interrupt` is set, `code` indicates the index of the bit in
#               mip that caused the trap (3=soft IRQ, 7=timer IRQ, 11=external
#               IRQ). Otherwise, `code` is set according to the cause of the
#               exception.
#               0x0 -> Instruction fetch was misaligned. Will never fire on RP2350, since the C extension is enabled.
#               0x1 -> Instruction access fault. Instruction fetch failed a PMP check, or encountered a downstream bus fault, and then passed the point of no speculation.
#               0x2 -> Illegal instruction was executed (including illegal CSR accesses)
#               0x3 -> Breakpoint. An ebreak instruction was executed when the relevant dcsr.ebreak bit was clear.
#               0x4 -> Load address misaligned. Hazard3 requires natural alignment of all accesses.
#               0x5 -> Load access fault. A load failed a PMP check, or encountered a downstream bus error.
#               0x6 -> Store/AMO address misaligned. Hazard3 requires natural alignment of all accesses.
#               0x7 -> Store/AMO access fault. A store/AMO failed a PMP check, or encountered a downstream bus error. Also set if an AMO is attempted on a region that does not support atomics (on RP2350, anything but SRAM).
#               0x8 -> Environment call from U-mode.
#               0xb -> Environment call from M-mode.
.equ	RVCSR_MCAUSE_CODE_RESET, 0x0
.equ	RVCSR_MCAUSE_CODE_BITS, 0x0000000f
.equ	RVCSR_MCAUSE_CODE_MSB, 3
.equ	RVCSR_MCAUSE_CODE_LSB, 0
.equ	RVCSR_MCAUSE_CODE_VALUE_INSTR_ALIGN, 0x0
.equ	RVCSR_MCAUSE_CODE_VALUE_INSTR_FAULT, 0x1
.equ	RVCSR_MCAUSE_CODE_VALUE_ILLEGAL_INSTR, 0x2
.equ	RVCSR_MCAUSE_CODE_VALUE_BREAKPOINT, 0x3
.equ	RVCSR_MCAUSE_CODE_VALUE_LOAD_ALIGN, 0x4
.equ	RVCSR_MCAUSE_CODE_VALUE_LOAD_FAULT, 0x5
.equ	RVCSR_MCAUSE_CODE_VALUE_STORE_ALIGN, 0x6
.equ	RVCSR_MCAUSE_CODE_VALUE_STORE_FAULT, 0x7
.equ	RVCSR_MCAUSE_CODE_VALUE_U_ECALL, 0x8
.equ	RVCSR_MCAUSE_CODE_VALUE_M_ECALL, 0xb
# =============================================================================
# Register    : RVCSR_MTVAL
# Description : Machine bad address or instruction. Hardwired to zero.
.equ	RVCSR_MTVAL_OFFSET, 0x00000343
.equ	RVCSR_MTVAL_BITS, 0xffffffff
.equ	RVCSR_MTVAL_RESET, 0x00000000
.equ	RVCSR_MTVAL_MSB, 31
.equ	RVCSR_MTVAL_LSB, 0
# =============================================================================
# Register    : RVCSR_MIP
# Description : Machine interrupt pending
.equ	RVCSR_MIP_OFFSET, 0x00000344
.equ	RVCSR_MIP_BITS, 0x00000888
.equ	RVCSR_MIP_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RVCSR_MIP_MEIP
# Description : External interrupt pending. The processor transfers to the
#               external interrupt vector when `mie.meie`, `mip.meip` and
#               `mstatus.mie` are all 1.
#
#               Hazard3 has internal registers to individually filter which
#               external IRQs appear in `meip`. When `meip` is 1, this
#               indicates there is at least one external interrupt which is
#               asserted (hence pending in `mieipa`), enabled in `meiea`, and
#               of priority greater than or equal to the current preemption
#               level in `meicontext.preempt`.
.equ	RVCSR_MIP_MEIP_RESET, 0x0
.equ	RVCSR_MIP_MEIP_BITS, 0x00000800
.equ	RVCSR_MIP_MEIP_MSB, 11
.equ	RVCSR_MIP_MEIP_LSB, 11
# -----------------------------------------------------------------------------
# Field       : RVCSR_MIP_MTIP
# Description : Timer interrupt pending. The processor transfers to the timer
#               interrupt vector when `mie.mtie`, `mip.mtip` and `mstatus.mie`
#               are all 1, unless a software or external interrupt request is
#               also valid at this time.
.equ	RVCSR_MIP_MTIP_RESET, 0x0
.equ	RVCSR_MIP_MTIP_BITS, 0x00000080
.equ	RVCSR_MIP_MTIP_MSB, 7
.equ	RVCSR_MIP_MTIP_LSB, 7
# -----------------------------------------------------------------------------
# Field       : RVCSR_MIP_MSIP
# Description : Software interrupt pending. The processor transfers to the
#               software interrupt vector `mie.msie`, `mip.msip` and
#               `mstatus.mie` are all 1, unless an external interrupt request
#               is also valid at this time.
.equ	RVCSR_MIP_MSIP_RESET, 0x0
.equ	RVCSR_MIP_MSIP_BITS, 0x00000008
.equ	RVCSR_MIP_MSIP_MSB, 3
.equ	RVCSR_MIP_MSIP_LSB, 3
# =============================================================================
# Register    : RVCSR_PMPCFG0
# Description : Physical memory protection configuration for regions 0 through
#               3
.equ	RVCSR_PMPCFG0_OFFSET, 0x000003a0
.equ	RVCSR_PMPCFG0_BITS, 0x9f9f9f9f
.equ	RVCSR_PMPCFG0_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG0_R3_L
# Description : Lock region 3, and apply it to M-mode as well as U-mode.
.equ	RVCSR_PMPCFG0_R3_L_RESET, 0x0
.equ	RVCSR_PMPCFG0_R3_L_BITS, 0x80000000
.equ	RVCSR_PMPCFG0_R3_L_MSB, 31
.equ	RVCSR_PMPCFG0_R3_L_LSB, 31
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG0_R3_A
# Description : Address matching type for region 3. Writing an unsupported
#               value (TOR) will set the region to OFF.
#               0x0 -> Disable region
#               0x2 -> Naturally aligned 4-byte
#               0x3 -> Naturally aligned power-of-two (8 bytes to 4 GiB)
.equ	RVCSR_PMPCFG0_R3_A_RESET, 0x0
.equ	RVCSR_PMPCFG0_R3_A_BITS, 0x18000000
.equ	RVCSR_PMPCFG0_R3_A_MSB, 28
.equ	RVCSR_PMPCFG0_R3_A_LSB, 27
.equ	RVCSR_PMPCFG0_R3_A_VALUE_OFF, 0x0
.equ	RVCSR_PMPCFG0_R3_A_VALUE_NA4, 0x2
.equ	RVCSR_PMPCFG0_R3_A_VALUE_NAPOT, 0x3
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG0_R3_R
# Description : Read permission for region 3. Note R and X are transposed from
#               the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG0_R3_R_RESET, 0x0
.equ	RVCSR_PMPCFG0_R3_R_BITS, 0x04000000
.equ	RVCSR_PMPCFG0_R3_R_MSB, 26
.equ	RVCSR_PMPCFG0_R3_R_LSB, 26
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG0_R3_W
# Description : Write permission for region 3
.equ	RVCSR_PMPCFG0_R3_W_RESET, 0x0
.equ	RVCSR_PMPCFG0_R3_W_BITS, 0x02000000
.equ	RVCSR_PMPCFG0_R3_W_MSB, 25
.equ	RVCSR_PMPCFG0_R3_W_LSB, 25
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG0_R3_X
# Description : Execute permission for region 3. Note R and X are transposed
#               from the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG0_R3_X_RESET, 0x0
.equ	RVCSR_PMPCFG0_R3_X_BITS, 0x01000000
.equ	RVCSR_PMPCFG0_R3_X_MSB, 24
.equ	RVCSR_PMPCFG0_R3_X_LSB, 24
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG0_R2_L
# Description : Lock region 2, and apply it to M-mode as well as U-mode.
.equ	RVCSR_PMPCFG0_R2_L_RESET, 0x0
.equ	RVCSR_PMPCFG0_R2_L_BITS, 0x00800000
.equ	RVCSR_PMPCFG0_R2_L_MSB, 23
.equ	RVCSR_PMPCFG0_R2_L_LSB, 23
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG0_R2_A
# Description : Address matching type for region 2. Writing an unsupported
#               value (TOR) will set the region to OFF.
#               0x0 -> Disable region
#               0x2 -> Naturally aligned 4-byte
#               0x3 -> Naturally aligned power-of-two (8 bytes to 4 GiB)
.equ	RVCSR_PMPCFG0_R2_A_RESET, 0x0
.equ	RVCSR_PMPCFG0_R2_A_BITS, 0x00180000
.equ	RVCSR_PMPCFG0_R2_A_MSB, 20
.equ	RVCSR_PMPCFG0_R2_A_LSB, 19
.equ	RVCSR_PMPCFG0_R2_A_VALUE_OFF, 0x0
.equ	RVCSR_PMPCFG0_R2_A_VALUE_NA4, 0x2
.equ	RVCSR_PMPCFG0_R2_A_VALUE_NAPOT, 0x3
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG0_R2_R
# Description : Read permission for region 2. Note R and X are transposed from
#               the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG0_R2_R_RESET, 0x0
.equ	RVCSR_PMPCFG0_R2_R_BITS, 0x00040000
.equ	RVCSR_PMPCFG0_R2_R_MSB, 18
.equ	RVCSR_PMPCFG0_R2_R_LSB, 18
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG0_R2_W
# Description : Write permission for region 2
.equ	RVCSR_PMPCFG0_R2_W_RESET, 0x0
.equ	RVCSR_PMPCFG0_R2_W_BITS, 0x00020000
.equ	RVCSR_PMPCFG0_R2_W_MSB, 17
.equ	RVCSR_PMPCFG0_R2_W_LSB, 17
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG0_R2_X
# Description : Execute permission for region 2. Note R and X are transposed
#               from the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG0_R2_X_RESET, 0x0
.equ	RVCSR_PMPCFG0_R2_X_BITS, 0x00010000
.equ	RVCSR_PMPCFG0_R2_X_MSB, 16
.equ	RVCSR_PMPCFG0_R2_X_LSB, 16
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG0_R1_L
# Description : Lock region 1, and apply it to M-mode as well as U-mode.
.equ	RVCSR_PMPCFG0_R1_L_RESET, 0x0
.equ	RVCSR_PMPCFG0_R1_L_BITS, 0x00008000
.equ	RVCSR_PMPCFG0_R1_L_MSB, 15
.equ	RVCSR_PMPCFG0_R1_L_LSB, 15
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG0_R1_A
# Description : Address matching type for region 1. Writing an unsupported
#               value (TOR) will set the region to OFF.
#               0x0 -> Disable region
#               0x2 -> Naturally aligned 4-byte
#               0x3 -> Naturally aligned power-of-two (8 bytes to 4 GiB)
.equ	RVCSR_PMPCFG0_R1_A_RESET, 0x0
.equ	RVCSR_PMPCFG0_R1_A_BITS, 0x00001800
.equ	RVCSR_PMPCFG0_R1_A_MSB, 12
.equ	RVCSR_PMPCFG0_R1_A_LSB, 11
.equ	RVCSR_PMPCFG0_R1_A_VALUE_OFF, 0x0
.equ	RVCSR_PMPCFG0_R1_A_VALUE_NA4, 0x2
.equ	RVCSR_PMPCFG0_R1_A_VALUE_NAPOT, 0x3
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG0_R1_R
# Description : Read permission for region 1. Note R and X are transposed from
#               the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG0_R1_R_RESET, 0x0
.equ	RVCSR_PMPCFG0_R1_R_BITS, 0x00000400
.equ	RVCSR_PMPCFG0_R1_R_MSB, 10
.equ	RVCSR_PMPCFG0_R1_R_LSB, 10
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG0_R1_W
# Description : Write permission for region 1
.equ	RVCSR_PMPCFG0_R1_W_RESET, 0x0
.equ	RVCSR_PMPCFG0_R1_W_BITS, 0x00000200
.equ	RVCSR_PMPCFG0_R1_W_MSB, 9
.equ	RVCSR_PMPCFG0_R1_W_LSB, 9
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG0_R1_X
# Description : Execute permission for region 1. Note R and X are transposed
#               from the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG0_R1_X_RESET, 0x0
.equ	RVCSR_PMPCFG0_R1_X_BITS, 0x00000100
.equ	RVCSR_PMPCFG0_R1_X_MSB, 8
.equ	RVCSR_PMPCFG0_R1_X_LSB, 8
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG0_R0_L
# Description : Lock region 0, and apply it to M-mode as well as U-mode.
.equ	RVCSR_PMPCFG0_R0_L_RESET, 0x0
.equ	RVCSR_PMPCFG0_R0_L_BITS, 0x00000080
.equ	RVCSR_PMPCFG0_R0_L_MSB, 7
.equ	RVCSR_PMPCFG0_R0_L_LSB, 7
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG0_R0_A
# Description : Address matching type for region 0. Writing an unsupported
#               value (TOR) will set the region to OFF.
#               0x0 -> Disable region
#               0x2 -> Naturally aligned 4-byte
#               0x3 -> Naturally aligned power-of-two (8 bytes to 4 GiB)
.equ	RVCSR_PMPCFG0_R0_A_RESET, 0x0
.equ	RVCSR_PMPCFG0_R0_A_BITS, 0x00000018
.equ	RVCSR_PMPCFG0_R0_A_MSB, 4
.equ	RVCSR_PMPCFG0_R0_A_LSB, 3
.equ	RVCSR_PMPCFG0_R0_A_VALUE_OFF, 0x0
.equ	RVCSR_PMPCFG0_R0_A_VALUE_NA4, 0x2
.equ	RVCSR_PMPCFG0_R0_A_VALUE_NAPOT, 0x3
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG0_R0_R
# Description : Read permission for region 0. Note R and X are transposed from
#               the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG0_R0_R_RESET, 0x0
.equ	RVCSR_PMPCFG0_R0_R_BITS, 0x00000004
.equ	RVCSR_PMPCFG0_R0_R_MSB, 2
.equ	RVCSR_PMPCFG0_R0_R_LSB, 2
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG0_R0_W
# Description : Write permission for region 0
.equ	RVCSR_PMPCFG0_R0_W_RESET, 0x0
.equ	RVCSR_PMPCFG0_R0_W_BITS, 0x00000002
.equ	RVCSR_PMPCFG0_R0_W_MSB, 1
.equ	RVCSR_PMPCFG0_R0_W_LSB, 1
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG0_R0_X
# Description : Execute permission for region 0. Note R and X are transposed
#               from the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG0_R0_X_RESET, 0x0
.equ	RVCSR_PMPCFG0_R0_X_BITS, 0x00000001
.equ	RVCSR_PMPCFG0_R0_X_MSB, 0
.equ	RVCSR_PMPCFG0_R0_X_LSB, 0
# =============================================================================
# Register    : RVCSR_PMPCFG1
# Description : Physical memory protection configuration for regions 4 through
#               7
.equ	RVCSR_PMPCFG1_OFFSET, 0x000003a1
.equ	RVCSR_PMPCFG1_BITS, 0x9f9f9f9f
.equ	RVCSR_PMPCFG1_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG1_R7_L
# Description : Lock region 7, and apply it to M-mode as well as U-mode.
.equ	RVCSR_PMPCFG1_R7_L_RESET, 0x0
.equ	RVCSR_PMPCFG1_R7_L_BITS, 0x80000000
.equ	RVCSR_PMPCFG1_R7_L_MSB, 31
.equ	RVCSR_PMPCFG1_R7_L_LSB, 31
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG1_R7_A
# Description : Address matching type for region 7. Writing an unsupported
#               value (TOR) will set the region to OFF.
#               0x0 -> Disable region
#               0x2 -> Naturally aligned 4-byte
#               0x3 -> Naturally aligned power-of-two (8 bytes to 4 GiB)
.equ	RVCSR_PMPCFG1_R7_A_RESET, 0x0
.equ	RVCSR_PMPCFG1_R7_A_BITS, 0x18000000
.equ	RVCSR_PMPCFG1_R7_A_MSB, 28
.equ	RVCSR_PMPCFG1_R7_A_LSB, 27
.equ	RVCSR_PMPCFG1_R7_A_VALUE_OFF, 0x0
.equ	RVCSR_PMPCFG1_R7_A_VALUE_NA4, 0x2
.equ	RVCSR_PMPCFG1_R7_A_VALUE_NAPOT, 0x3
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG1_R7_R
# Description : Read permission for region 7. Note R and X are transposed from
#               the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG1_R7_R_RESET, 0x0
.equ	RVCSR_PMPCFG1_R7_R_BITS, 0x04000000
.equ	RVCSR_PMPCFG1_R7_R_MSB, 26
.equ	RVCSR_PMPCFG1_R7_R_LSB, 26
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG1_R7_W
# Description : Write permission for region 7
.equ	RVCSR_PMPCFG1_R7_W_RESET, 0x0
.equ	RVCSR_PMPCFG1_R7_W_BITS, 0x02000000
.equ	RVCSR_PMPCFG1_R7_W_MSB, 25
.equ	RVCSR_PMPCFG1_R7_W_LSB, 25
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG1_R7_X
# Description : Execute permission for region 7. Note R and X are transposed
#               from the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG1_R7_X_RESET, 0x0
.equ	RVCSR_PMPCFG1_R7_X_BITS, 0x01000000
.equ	RVCSR_PMPCFG1_R7_X_MSB, 24
.equ	RVCSR_PMPCFG1_R7_X_LSB, 24
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG1_R6_L
# Description : Lock region 6, and apply it to M-mode as well as U-mode.
.equ	RVCSR_PMPCFG1_R6_L_RESET, 0x0
.equ	RVCSR_PMPCFG1_R6_L_BITS, 0x00800000
.equ	RVCSR_PMPCFG1_R6_L_MSB, 23
.equ	RVCSR_PMPCFG1_R6_L_LSB, 23
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG1_R6_A
# Description : Address matching type for region 6. Writing an unsupported
#               value (TOR) will set the region to OFF.
#               0x0 -> Disable region
#               0x2 -> Naturally aligned 4-byte
#               0x3 -> Naturally aligned power-of-two (8 bytes to 4 GiB)
.equ	RVCSR_PMPCFG1_R6_A_RESET, 0x0
.equ	RVCSR_PMPCFG1_R6_A_BITS, 0x00180000
.equ	RVCSR_PMPCFG1_R6_A_MSB, 20
.equ	RVCSR_PMPCFG1_R6_A_LSB, 19
.equ	RVCSR_PMPCFG1_R6_A_VALUE_OFF, 0x0
.equ	RVCSR_PMPCFG1_R6_A_VALUE_NA4, 0x2
.equ	RVCSR_PMPCFG1_R6_A_VALUE_NAPOT, 0x3
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG1_R6_R
# Description : Read permission for region 6. Note R and X are transposed from
#               the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG1_R6_R_RESET, 0x0
.equ	RVCSR_PMPCFG1_R6_R_BITS, 0x00040000
.equ	RVCSR_PMPCFG1_R6_R_MSB, 18
.equ	RVCSR_PMPCFG1_R6_R_LSB, 18
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG1_R6_W
# Description : Write permission for region 6
.equ	RVCSR_PMPCFG1_R6_W_RESET, 0x0
.equ	RVCSR_PMPCFG1_R6_W_BITS, 0x00020000
.equ	RVCSR_PMPCFG1_R6_W_MSB, 17
.equ	RVCSR_PMPCFG1_R6_W_LSB, 17
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG1_R6_X
# Description : Execute permission for region 6. Note R and X are transposed
#               from the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG1_R6_X_RESET, 0x0
.equ	RVCSR_PMPCFG1_R6_X_BITS, 0x00010000
.equ	RVCSR_PMPCFG1_R6_X_MSB, 16
.equ	RVCSR_PMPCFG1_R6_X_LSB, 16
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG1_R5_L
# Description : Lock region 5, and apply it to M-mode as well as U-mode.
.equ	RVCSR_PMPCFG1_R5_L_RESET, 0x0
.equ	RVCSR_PMPCFG1_R5_L_BITS, 0x00008000
.equ	RVCSR_PMPCFG1_R5_L_MSB, 15
.equ	RVCSR_PMPCFG1_R5_L_LSB, 15
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG1_R5_A
# Description : Address matching type for region 5. Writing an unsupported
#               value (TOR) will set the region to OFF.
#               0x0 -> Disable region
#               0x2 -> Naturally aligned 4-byte
#               0x3 -> Naturally aligned power-of-two (8 bytes to 4 GiB)
.equ	RVCSR_PMPCFG1_R5_A_RESET, 0x0
.equ	RVCSR_PMPCFG1_R5_A_BITS, 0x00001800
.equ	RVCSR_PMPCFG1_R5_A_MSB, 12
.equ	RVCSR_PMPCFG1_R5_A_LSB, 11
.equ	RVCSR_PMPCFG1_R5_A_VALUE_OFF, 0x0
.equ	RVCSR_PMPCFG1_R5_A_VALUE_NA4, 0x2
.equ	RVCSR_PMPCFG1_R5_A_VALUE_NAPOT, 0x3
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG1_R5_R
# Description : Read permission for region 5. Note R and X are transposed from
#               the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG1_R5_R_RESET, 0x0
.equ	RVCSR_PMPCFG1_R5_R_BITS, 0x00000400
.equ	RVCSR_PMPCFG1_R5_R_MSB, 10
.equ	RVCSR_PMPCFG1_R5_R_LSB, 10
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG1_R5_W
# Description : Write permission for region 5
.equ	RVCSR_PMPCFG1_R5_W_RESET, 0x0
.equ	RVCSR_PMPCFG1_R5_W_BITS, 0x00000200
.equ	RVCSR_PMPCFG1_R5_W_MSB, 9
.equ	RVCSR_PMPCFG1_R5_W_LSB, 9
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG1_R5_X
# Description : Execute permission for region 5. Note R and X are transposed
#               from the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG1_R5_X_RESET, 0x0
.equ	RVCSR_PMPCFG1_R5_X_BITS, 0x00000100
.equ	RVCSR_PMPCFG1_R5_X_MSB, 8
.equ	RVCSR_PMPCFG1_R5_X_LSB, 8
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG1_R4_L
# Description : Lock region 4, and apply it to M-mode as well as U-mode.
.equ	RVCSR_PMPCFG1_R4_L_RESET, 0x0
.equ	RVCSR_PMPCFG1_R4_L_BITS, 0x00000080
.equ	RVCSR_PMPCFG1_R4_L_MSB, 7
.equ	RVCSR_PMPCFG1_R4_L_LSB, 7
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG1_R4_A
# Description : Address matching type for region 4. Writing an unsupported
#               value (TOR) will set the region to OFF.
#               0x0 -> Disable region
#               0x2 -> Naturally aligned 4-byte
#               0x3 -> Naturally aligned power-of-two (8 bytes to 4 GiB)
.equ	RVCSR_PMPCFG1_R4_A_RESET, 0x0
.equ	RVCSR_PMPCFG1_R4_A_BITS, 0x00000018
.equ	RVCSR_PMPCFG1_R4_A_MSB, 4
.equ	RVCSR_PMPCFG1_R4_A_LSB, 3
.equ	RVCSR_PMPCFG1_R4_A_VALUE_OFF, 0x0
.equ	RVCSR_PMPCFG1_R4_A_VALUE_NA4, 0x2
.equ	RVCSR_PMPCFG1_R4_A_VALUE_NAPOT, 0x3
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG1_R4_R
# Description : Read permission for region 4. Note R and X are transposed from
#               the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG1_R4_R_RESET, 0x0
.equ	RVCSR_PMPCFG1_R4_R_BITS, 0x00000004
.equ	RVCSR_PMPCFG1_R4_R_MSB, 2
.equ	RVCSR_PMPCFG1_R4_R_LSB, 2
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG1_R4_W
# Description : Write permission for region 4
.equ	RVCSR_PMPCFG1_R4_W_RESET, 0x0
.equ	RVCSR_PMPCFG1_R4_W_BITS, 0x00000002
.equ	RVCSR_PMPCFG1_R4_W_MSB, 1
.equ	RVCSR_PMPCFG1_R4_W_LSB, 1
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG1_R4_X
# Description : Execute permission for region 4. Note R and X are transposed
#               from the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG1_R4_X_RESET, 0x0
.equ	RVCSR_PMPCFG1_R4_X_BITS, 0x00000001
.equ	RVCSR_PMPCFG1_R4_X_MSB, 0
.equ	RVCSR_PMPCFG1_R4_X_LSB, 0
# =============================================================================
# Register    : RVCSR_PMPCFG2
# Description : Physical memory protection configuration for regions 8 through
#               11
.equ	RVCSR_PMPCFG2_OFFSET, 0x000003a2
.equ	RVCSR_PMPCFG2_BITS, 0x9f9f9f9f
.equ	RVCSR_PMPCFG2_RESET, 0x001f1f1f
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG2_R11_L
# Description : Lock region 11, and apply it to M-mode as well as U-mode.
.equ	RVCSR_PMPCFG2_R11_L_RESET, 0x0
.equ	RVCSR_PMPCFG2_R11_L_BITS, 0x80000000
.equ	RVCSR_PMPCFG2_R11_L_MSB, 31
.equ	RVCSR_PMPCFG2_R11_L_LSB, 31
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG2_R11_A
# Description : Address matching type for region 11. Writing an unsupported
#               value (TOR) will set the region to OFF.
#               0x0 -> Disable region
#               0x2 -> Naturally aligned 4-byte
#               0x3 -> Naturally aligned power-of-two (8 bytes to 4 GiB)
.equ	RVCSR_PMPCFG2_R11_A_RESET, 0x0
.equ	RVCSR_PMPCFG2_R11_A_BITS, 0x18000000
.equ	RVCSR_PMPCFG2_R11_A_MSB, 28
.equ	RVCSR_PMPCFG2_R11_A_LSB, 27
.equ	RVCSR_PMPCFG2_R11_A_VALUE_OFF, 0x0
.equ	RVCSR_PMPCFG2_R11_A_VALUE_NA4, 0x2
.equ	RVCSR_PMPCFG2_R11_A_VALUE_NAPOT, 0x3
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG2_R11_R
# Description : Read permission for region 11. Note R and X are transposed from
#               the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG2_R11_R_RESET, 0x0
.equ	RVCSR_PMPCFG2_R11_R_BITS, 0x04000000
.equ	RVCSR_PMPCFG2_R11_R_MSB, 26
.equ	RVCSR_PMPCFG2_R11_R_LSB, 26
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG2_R11_W
# Description : Write permission for region 11
.equ	RVCSR_PMPCFG2_R11_W_RESET, 0x0
.equ	RVCSR_PMPCFG2_R11_W_BITS, 0x02000000
.equ	RVCSR_PMPCFG2_R11_W_MSB, 25
.equ	RVCSR_PMPCFG2_R11_W_LSB, 25
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG2_R11_X
# Description : Execute permission for region 11. Note R and X are transposed
#               from the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG2_R11_X_RESET, 0x0
.equ	RVCSR_PMPCFG2_R11_X_BITS, 0x01000000
.equ	RVCSR_PMPCFG2_R11_X_MSB, 24
.equ	RVCSR_PMPCFG2_R11_X_LSB, 24
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG2_R10_L
# Description : Lock region 10, and apply it to M-mode as well as U-mode.
.equ	RVCSR_PMPCFG2_R10_L_RESET, 0x0
.equ	RVCSR_PMPCFG2_R10_L_BITS, 0x00800000
.equ	RVCSR_PMPCFG2_R10_L_MSB, 23
.equ	RVCSR_PMPCFG2_R10_L_LSB, 23
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG2_R10_A
# Description : Address matching type for region 10. Writing an unsupported
#               value (TOR) will set the region to OFF.
#               0x0 -> Disable region
#               0x2 -> Naturally aligned 4-byte
#               0x3 -> Naturally aligned power-of-two (8 bytes to 4 GiB)
.equ	RVCSR_PMPCFG2_R10_A_RESET, 0x3
.equ	RVCSR_PMPCFG2_R10_A_BITS, 0x00180000
.equ	RVCSR_PMPCFG2_R10_A_MSB, 20
.equ	RVCSR_PMPCFG2_R10_A_LSB, 19
.equ	RVCSR_PMPCFG2_R10_A_VALUE_OFF, 0x0
.equ	RVCSR_PMPCFG2_R10_A_VALUE_NA4, 0x2
.equ	RVCSR_PMPCFG2_R10_A_VALUE_NAPOT, 0x3
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG2_R10_R
# Description : Read permission for region 10. Note R and X are transposed from
#               the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG2_R10_R_RESET, 0x1
.equ	RVCSR_PMPCFG2_R10_R_BITS, 0x00040000
.equ	RVCSR_PMPCFG2_R10_R_MSB, 18
.equ	RVCSR_PMPCFG2_R10_R_LSB, 18
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG2_R10_W
# Description : Write permission for region 10
.equ	RVCSR_PMPCFG2_R10_W_RESET, 0x1
.equ	RVCSR_PMPCFG2_R10_W_BITS, 0x00020000
.equ	RVCSR_PMPCFG2_R10_W_MSB, 17
.equ	RVCSR_PMPCFG2_R10_W_LSB, 17
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG2_R10_X
# Description : Execute permission for region 10. Note R and X are transposed
#               from the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG2_R10_X_RESET, 0x1
.equ	RVCSR_PMPCFG2_R10_X_BITS, 0x00010000
.equ	RVCSR_PMPCFG2_R10_X_MSB, 16
.equ	RVCSR_PMPCFG2_R10_X_LSB, 16
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG2_R9_L
# Description : Lock region 9, and apply it to M-mode as well as U-mode.
.equ	RVCSR_PMPCFG2_R9_L_RESET, 0x0
.equ	RVCSR_PMPCFG2_R9_L_BITS, 0x00008000
.equ	RVCSR_PMPCFG2_R9_L_MSB, 15
.equ	RVCSR_PMPCFG2_R9_L_LSB, 15
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG2_R9_A
# Description : Address matching type for region 9. Writing an unsupported
#               value (TOR) will set the region to OFF.
#               0x0 -> Disable region
#               0x2 -> Naturally aligned 4-byte
#               0x3 -> Naturally aligned power-of-two (8 bytes to 4 GiB)
.equ	RVCSR_PMPCFG2_R9_A_RESET, 0x3
.equ	RVCSR_PMPCFG2_R9_A_BITS, 0x00001800
.equ	RVCSR_PMPCFG2_R9_A_MSB, 12
.equ	RVCSR_PMPCFG2_R9_A_LSB, 11
.equ	RVCSR_PMPCFG2_R9_A_VALUE_OFF, 0x0
.equ	RVCSR_PMPCFG2_R9_A_VALUE_NA4, 0x2
.equ	RVCSR_PMPCFG2_R9_A_VALUE_NAPOT, 0x3
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG2_R9_R
# Description : Read permission for region 9. Note R and X are transposed from
#               the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG2_R9_R_RESET, 0x1
.equ	RVCSR_PMPCFG2_R9_R_BITS, 0x00000400
.equ	RVCSR_PMPCFG2_R9_R_MSB, 10
.equ	RVCSR_PMPCFG2_R9_R_LSB, 10
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG2_R9_W
# Description : Write permission for region 9
.equ	RVCSR_PMPCFG2_R9_W_RESET, 0x1
.equ	RVCSR_PMPCFG2_R9_W_BITS, 0x00000200
.equ	RVCSR_PMPCFG2_R9_W_MSB, 9
.equ	RVCSR_PMPCFG2_R9_W_LSB, 9
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG2_R9_X
# Description : Execute permission for region 9. Note R and X are transposed
#               from the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG2_R9_X_RESET, 0x1
.equ	RVCSR_PMPCFG2_R9_X_BITS, 0x00000100
.equ	RVCSR_PMPCFG2_R9_X_MSB, 8
.equ	RVCSR_PMPCFG2_R9_X_LSB, 8
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG2_R8_L
# Description : Lock region 8, and apply it to M-mode as well as U-mode.
.equ	RVCSR_PMPCFG2_R8_L_RESET, 0x0
.equ	RVCSR_PMPCFG2_R8_L_BITS, 0x00000080
.equ	RVCSR_PMPCFG2_R8_L_MSB, 7
.equ	RVCSR_PMPCFG2_R8_L_LSB, 7
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG2_R8_A
# Description : Address matching type for region 8. Writing an unsupported
#               value (TOR) will set the region to OFF.
#               0x0 -> Disable region
#               0x2 -> Naturally aligned 4-byte
#               0x3 -> Naturally aligned power-of-two (8 bytes to 4 GiB)
.equ	RVCSR_PMPCFG2_R8_A_RESET, 0x3
.equ	RVCSR_PMPCFG2_R8_A_BITS, 0x00000018
.equ	RVCSR_PMPCFG2_R8_A_MSB, 4
.equ	RVCSR_PMPCFG2_R8_A_LSB, 3
.equ	RVCSR_PMPCFG2_R8_A_VALUE_OFF, 0x0
.equ	RVCSR_PMPCFG2_R8_A_VALUE_NA4, 0x2
.equ	RVCSR_PMPCFG2_R8_A_VALUE_NAPOT, 0x3
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG2_R8_R
# Description : Read permission for region 8. Note R and X are transposed from
#               the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG2_R8_R_RESET, 0x1
.equ	RVCSR_PMPCFG2_R8_R_BITS, 0x00000004
.equ	RVCSR_PMPCFG2_R8_R_MSB, 2
.equ	RVCSR_PMPCFG2_R8_R_LSB, 2
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG2_R8_W
# Description : Write permission for region 8
.equ	RVCSR_PMPCFG2_R8_W_RESET, 0x1
.equ	RVCSR_PMPCFG2_R8_W_BITS, 0x00000002
.equ	RVCSR_PMPCFG2_R8_W_MSB, 1
.equ	RVCSR_PMPCFG2_R8_W_LSB, 1
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG2_R8_X
# Description : Execute permission for region 8. Note R and X are transposed
#               from the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG2_R8_X_RESET, 0x1
.equ	RVCSR_PMPCFG2_R8_X_BITS, 0x00000001
.equ	RVCSR_PMPCFG2_R8_X_MSB, 0
.equ	RVCSR_PMPCFG2_R8_X_LSB, 0
# =============================================================================
# Register    : RVCSR_PMPCFG3
# Description : Physical memory protection configuration for regions 12 through
#               15
.equ	RVCSR_PMPCFG3_OFFSET, 0x000003a3
.equ	RVCSR_PMPCFG3_BITS, 0x9f9f9f9f
.equ	RVCSR_PMPCFG3_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG3_R15_L
# Description : Lock region 15, and apply it to M-mode as well as U-mode.
.equ	RVCSR_PMPCFG3_R15_L_RESET, 0x0
.equ	RVCSR_PMPCFG3_R15_L_BITS, 0x80000000
.equ	RVCSR_PMPCFG3_R15_L_MSB, 31
.equ	RVCSR_PMPCFG3_R15_L_LSB, 31
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG3_R15_A
# Description : Address matching type for region 15. Writing an unsupported
#               value (TOR) will set the region to OFF.
#               0x0 -> Disable region
#               0x2 -> Naturally aligned 4-byte
#               0x3 -> Naturally aligned power-of-two (8 bytes to 4 GiB)
.equ	RVCSR_PMPCFG3_R15_A_RESET, 0x0
.equ	RVCSR_PMPCFG3_R15_A_BITS, 0x18000000
.equ	RVCSR_PMPCFG3_R15_A_MSB, 28
.equ	RVCSR_PMPCFG3_R15_A_LSB, 27
.equ	RVCSR_PMPCFG3_R15_A_VALUE_OFF, 0x0
.equ	RVCSR_PMPCFG3_R15_A_VALUE_NA4, 0x2
.equ	RVCSR_PMPCFG3_R15_A_VALUE_NAPOT, 0x3
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG3_R15_R
# Description : Read permission for region 15. Note R and X are transposed from
#               the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG3_R15_R_RESET, 0x0
.equ	RVCSR_PMPCFG3_R15_R_BITS, 0x04000000
.equ	RVCSR_PMPCFG3_R15_R_MSB, 26
.equ	RVCSR_PMPCFG3_R15_R_LSB, 26
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG3_R15_W
# Description : Write permission for region 15
.equ	RVCSR_PMPCFG3_R15_W_RESET, 0x0
.equ	RVCSR_PMPCFG3_R15_W_BITS, 0x02000000
.equ	RVCSR_PMPCFG3_R15_W_MSB, 25
.equ	RVCSR_PMPCFG3_R15_W_LSB, 25
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG3_R15_X
# Description : Execute permission for region 15. Note R and X are transposed
#               from the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG3_R15_X_RESET, 0x0
.equ	RVCSR_PMPCFG3_R15_X_BITS, 0x01000000
.equ	RVCSR_PMPCFG3_R15_X_MSB, 24
.equ	RVCSR_PMPCFG3_R15_X_LSB, 24
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG3_R14_L
# Description : Lock region 14, and apply it to M-mode as well as U-mode.
.equ	RVCSR_PMPCFG3_R14_L_RESET, 0x0
.equ	RVCSR_PMPCFG3_R14_L_BITS, 0x00800000
.equ	RVCSR_PMPCFG3_R14_L_MSB, 23
.equ	RVCSR_PMPCFG3_R14_L_LSB, 23
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG3_R14_A
# Description : Address matching type for region 14. Writing an unsupported
#               value (TOR) will set the region to OFF.
#               0x0 -> Disable region
#               0x2 -> Naturally aligned 4-byte
#               0x3 -> Naturally aligned power-of-two (8 bytes to 4 GiB)
.equ	RVCSR_PMPCFG3_R14_A_RESET, 0x0
.equ	RVCSR_PMPCFG3_R14_A_BITS, 0x00180000
.equ	RVCSR_PMPCFG3_R14_A_MSB, 20
.equ	RVCSR_PMPCFG3_R14_A_LSB, 19
.equ	RVCSR_PMPCFG3_R14_A_VALUE_OFF, 0x0
.equ	RVCSR_PMPCFG3_R14_A_VALUE_NA4, 0x2
.equ	RVCSR_PMPCFG3_R14_A_VALUE_NAPOT, 0x3
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG3_R14_R
# Description : Read permission for region 14. Note R and X are transposed from
#               the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG3_R14_R_RESET, 0x0
.equ	RVCSR_PMPCFG3_R14_R_BITS, 0x00040000
.equ	RVCSR_PMPCFG3_R14_R_MSB, 18
.equ	RVCSR_PMPCFG3_R14_R_LSB, 18
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG3_R14_W
# Description : Write permission for region 14
.equ	RVCSR_PMPCFG3_R14_W_RESET, 0x0
.equ	RVCSR_PMPCFG3_R14_W_BITS, 0x00020000
.equ	RVCSR_PMPCFG3_R14_W_MSB, 17
.equ	RVCSR_PMPCFG3_R14_W_LSB, 17
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG3_R14_X
# Description : Execute permission for region 14. Note R and X are transposed
#               from the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG3_R14_X_RESET, 0x0
.equ	RVCSR_PMPCFG3_R14_X_BITS, 0x00010000
.equ	RVCSR_PMPCFG3_R14_X_MSB, 16
.equ	RVCSR_PMPCFG3_R14_X_LSB, 16
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG3_R13_L
# Description : Lock region 13, and apply it to M-mode as well as U-mode.
.equ	RVCSR_PMPCFG3_R13_L_RESET, 0x0
.equ	RVCSR_PMPCFG3_R13_L_BITS, 0x00008000
.equ	RVCSR_PMPCFG3_R13_L_MSB, 15
.equ	RVCSR_PMPCFG3_R13_L_LSB, 15
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG3_R13_A
# Description : Address matching type for region 13. Writing an unsupported
#               value (TOR) will set the region to OFF.
#               0x0 -> Disable region
#               0x2 -> Naturally aligned 4-byte
#               0x3 -> Naturally aligned power-of-two (8 bytes to 4 GiB)
.equ	RVCSR_PMPCFG3_R13_A_RESET, 0x0
.equ	RVCSR_PMPCFG3_R13_A_BITS, 0x00001800
.equ	RVCSR_PMPCFG3_R13_A_MSB, 12
.equ	RVCSR_PMPCFG3_R13_A_LSB, 11
.equ	RVCSR_PMPCFG3_R13_A_VALUE_OFF, 0x0
.equ	RVCSR_PMPCFG3_R13_A_VALUE_NA4, 0x2
.equ	RVCSR_PMPCFG3_R13_A_VALUE_NAPOT, 0x3
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG3_R13_R
# Description : Read permission for region 13. Note R and X are transposed from
#               the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG3_R13_R_RESET, 0x0
.equ	RVCSR_PMPCFG3_R13_R_BITS, 0x00000400
.equ	RVCSR_PMPCFG3_R13_R_MSB, 10
.equ	RVCSR_PMPCFG3_R13_R_LSB, 10
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG3_R13_W
# Description : Write permission for region 13
.equ	RVCSR_PMPCFG3_R13_W_RESET, 0x0
.equ	RVCSR_PMPCFG3_R13_W_BITS, 0x00000200
.equ	RVCSR_PMPCFG3_R13_W_MSB, 9
.equ	RVCSR_PMPCFG3_R13_W_LSB, 9
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG3_R13_X
# Description : Execute permission for region 13. Note R and X are transposed
#               from the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG3_R13_X_RESET, 0x0
.equ	RVCSR_PMPCFG3_R13_X_BITS, 0x00000100
.equ	RVCSR_PMPCFG3_R13_X_MSB, 8
.equ	RVCSR_PMPCFG3_R13_X_LSB, 8
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG3_R12_L
# Description : Lock region 12, and apply it to M-mode as well as U-mode.
.equ	RVCSR_PMPCFG3_R12_L_RESET, 0x0
.equ	RVCSR_PMPCFG3_R12_L_BITS, 0x00000080
.equ	RVCSR_PMPCFG3_R12_L_MSB, 7
.equ	RVCSR_PMPCFG3_R12_L_LSB, 7
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG3_R12_A
# Description : Address matching type for region 12. Writing an unsupported
#               value (TOR) will set the region to OFF.
#               0x0 -> Disable region
#               0x2 -> Naturally aligned 4-byte
#               0x3 -> Naturally aligned power-of-two (8 bytes to 4 GiB)
.equ	RVCSR_PMPCFG3_R12_A_RESET, 0x0
.equ	RVCSR_PMPCFG3_R12_A_BITS, 0x00000018
.equ	RVCSR_PMPCFG3_R12_A_MSB, 4
.equ	RVCSR_PMPCFG3_R12_A_LSB, 3
.equ	RVCSR_PMPCFG3_R12_A_VALUE_OFF, 0x0
.equ	RVCSR_PMPCFG3_R12_A_VALUE_NA4, 0x2
.equ	RVCSR_PMPCFG3_R12_A_VALUE_NAPOT, 0x3
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG3_R12_R
# Description : Read permission for region 12. Note R and X are transposed from
#               the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG3_R12_R_RESET, 0x0
.equ	RVCSR_PMPCFG3_R12_R_BITS, 0x00000004
.equ	RVCSR_PMPCFG3_R12_R_MSB, 2
.equ	RVCSR_PMPCFG3_R12_R_LSB, 2
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG3_R12_W
# Description : Write permission for region 12
.equ	RVCSR_PMPCFG3_R12_W_RESET, 0x0
.equ	RVCSR_PMPCFG3_R12_W_BITS, 0x00000002
.equ	RVCSR_PMPCFG3_R12_W_MSB, 1
.equ	RVCSR_PMPCFG3_R12_W_LSB, 1
# -----------------------------------------------------------------------------
# Field       : RVCSR_PMPCFG3_R12_X
# Description : Execute permission for region 12. Note R and X are transposed
#               from the standard bit order due to erratum RP2350-E6.
.equ	RVCSR_PMPCFG3_R12_X_RESET, 0x0
.equ	RVCSR_PMPCFG3_R12_X_BITS, 0x00000001
.equ	RVCSR_PMPCFG3_R12_X_MSB, 0
.equ	RVCSR_PMPCFG3_R12_X_LSB, 0
# =============================================================================
# Register    : RVCSR_PMPADDR0
# Description : Physical memory protection address for region 0. Note all PMP
#               addresses are in units of four bytes.
.equ	RVCSR_PMPADDR0_OFFSET, 0x000003b0
.equ	RVCSR_PMPADDR0_BITS, 0x3fffffff
.equ	RVCSR_PMPADDR0_RESET, 0x00000000
.equ	RVCSR_PMPADDR0_MSB, 29
.equ	RVCSR_PMPADDR0_LSB, 0
# =============================================================================
# Register    : RVCSR_PMPADDR1
# Description : Physical memory protection address for region 1. Note all PMP
#               addresses are in units of four bytes.
.equ	RVCSR_PMPADDR1_OFFSET, 0x000003b1
.equ	RVCSR_PMPADDR1_BITS, 0x3fffffff
.equ	RVCSR_PMPADDR1_RESET, 0x00000000
.equ	RVCSR_PMPADDR1_MSB, 29
.equ	RVCSR_PMPADDR1_LSB, 0
# =============================================================================
# Register    : RVCSR_PMPADDR2
# Description : Physical memory protection address for region 2. Note all PMP
#               addresses are in units of four bytes.
.equ	RVCSR_PMPADDR2_OFFSET, 0x000003b2
.equ	RVCSR_PMPADDR2_BITS, 0x3fffffff
.equ	RVCSR_PMPADDR2_RESET, 0x00000000
.equ	RVCSR_PMPADDR2_MSB, 29
.equ	RVCSR_PMPADDR2_LSB, 0
# =============================================================================
# Register    : RVCSR_PMPADDR3
# Description : Physical memory protection address for region 3. Note all PMP
#               addresses are in units of four bytes.
.equ	RVCSR_PMPADDR3_OFFSET, 0x000003b3
.equ	RVCSR_PMPADDR3_BITS, 0x3fffffff
.equ	RVCSR_PMPADDR3_RESET, 0x00000000
.equ	RVCSR_PMPADDR3_MSB, 29
.equ	RVCSR_PMPADDR3_LSB, 0
# =============================================================================
# Register    : RVCSR_PMPADDR4
# Description : Physical memory protection address for region 4. Note all PMP
#               addresses are in units of four bytes.
.equ	RVCSR_PMPADDR4_OFFSET, 0x000003b4
.equ	RVCSR_PMPADDR4_BITS, 0x3fffffff
.equ	RVCSR_PMPADDR4_RESET, 0x00000000
.equ	RVCSR_PMPADDR4_MSB, 29
.equ	RVCSR_PMPADDR4_LSB, 0
# =============================================================================
# Register    : RVCSR_PMPADDR5
# Description : Physical memory protection address for region 5. Note all PMP
#               addresses are in units of four bytes.
.equ	RVCSR_PMPADDR5_OFFSET, 0x000003b5
.equ	RVCSR_PMPADDR5_BITS, 0x3fffffff
.equ	RVCSR_PMPADDR5_RESET, 0x00000000
.equ	RVCSR_PMPADDR5_MSB, 29
.equ	RVCSR_PMPADDR5_LSB, 0
# =============================================================================
# Register    : RVCSR_PMPADDR6
# Description : Physical memory protection address for region 6. Note all PMP
#               addresses are in units of four bytes.
.equ	RVCSR_PMPADDR6_OFFSET, 0x000003b6
.equ	RVCSR_PMPADDR6_BITS, 0x3fffffff
.equ	RVCSR_PMPADDR6_RESET, 0x00000000
.equ	RVCSR_PMPADDR6_MSB, 29
.equ	RVCSR_PMPADDR6_LSB, 0
# =============================================================================
# Register    : RVCSR_PMPADDR7
# Description : Physical memory protection address for region 7. Note all PMP
#               addresses are in units of four bytes.
.equ	RVCSR_PMPADDR7_OFFSET, 0x000003b7
.equ	RVCSR_PMPADDR7_BITS, 0x3fffffff
.equ	RVCSR_PMPADDR7_RESET, 0x00000000
.equ	RVCSR_PMPADDR7_MSB, 29
.equ	RVCSR_PMPADDR7_LSB, 0
# =============================================================================
# Register    : RVCSR_PMPADDR8
# Description : Physical memory protection address for region 8. Note all PMP
#               addresses are in units of four bytes.
#
#               Hardwired to the address range `0x00000000` through
#               `0x0fffffff`, which contains the boot ROM. This range is made
#               accessible to User mode by default. User mode access to this
#               range can be disabled using one of the dynamically configurable
#               PMP regions, or using the permission registers in ACCESSCTRL.
.equ	RVCSR_PMPADDR8_OFFSET, 0x000003b8
.equ	RVCSR_PMPADDR8_BITS, 0x3fffffff
.equ	RVCSR_PMPADDR8_RESET, 0x01ffffff
.equ	RVCSR_PMPADDR8_MSB, 29
.equ	RVCSR_PMPADDR8_LSB, 0
# =============================================================================
# Register    : RVCSR_PMPADDR9
# Description : Physical memory protection address for region 9. Note all PMP
#               addresses are in units of four bytes.
#
#               Hardwired to the address range `0x40000000` through
#               `0x5fffffff`, which contains the system peripherals. This range
#               is made accessible to User mode by default. User mode access to
#               this range can be disabled using one of the dynamically
#               configurable PMP regions, or using the permission registers in
#               ACCESSCTRL.
.equ	RVCSR_PMPADDR9_OFFSET, 0x000003b9
.equ	RVCSR_PMPADDR9_BITS, 0x3fffffff
.equ	RVCSR_PMPADDR9_RESET, 0x13ffffff
.equ	RVCSR_PMPADDR9_MSB, 29
.equ	RVCSR_PMPADDR9_LSB, 0
# =============================================================================
# Register    : RVCSR_PMPADDR10
# Description : Physical memory protection address for region 10. Note all PMP
#               addresses are in units of four bytes.
#
#               Hardwired to the address range `0xd0000000` through
#               `0xdfffffff`, which contains the core-local peripherals (SIO).
#               This range is made accessible to User mode by default. User
#               mode access to this range can be disabled using one of the
#               dynamically configurable PMP regions, or using the permission
#               registers in ACCESSCTRL.
.equ	RVCSR_PMPADDR10_OFFSET, 0x000003ba
.equ	RVCSR_PMPADDR10_BITS, 0x3fffffff
.equ	RVCSR_PMPADDR10_RESET, 0x35ffffff
.equ	RVCSR_PMPADDR10_MSB, 29
.equ	RVCSR_PMPADDR10_LSB, 0
# =============================================================================
# Register    : RVCSR_PMPADDR11
# Description : Physical memory protection address for region 11. Note all PMP
#               addresses are in units of four bytes.
#
#               Hardwired to all-zeroes. This region is not implemented.
.equ	RVCSR_PMPADDR11_OFFSET, 0x000003bb
.equ	RVCSR_PMPADDR11_BITS, 0x3fffffff
.equ	RVCSR_PMPADDR11_RESET, 0x00000000
.equ	RVCSR_PMPADDR11_MSB, 29
.equ	RVCSR_PMPADDR11_LSB, 0
# =============================================================================
# Register    : RVCSR_PMPADDR12
# Description : Physical memory protection address for region 12. Note all PMP
#               addresses are in units of four bytes.
#
#               Hardwired to all-zeroes. This region is not implemented.
.equ	RVCSR_PMPADDR12_OFFSET, 0x000003bc
.equ	RVCSR_PMPADDR12_BITS, 0x3fffffff
.equ	RVCSR_PMPADDR12_RESET, 0x00000000
.equ	RVCSR_PMPADDR12_MSB, 29
.equ	RVCSR_PMPADDR12_LSB, 0
# =============================================================================
# Register    : RVCSR_PMPADDR13
# Description : Physical memory protection address for region 13. Note all PMP
#               addresses are in units of four bytes.
#
#               Hardwired to all-zeroes. This region is not implemented.
.equ	RVCSR_PMPADDR13_OFFSET, 0x000003bd
.equ	RVCSR_PMPADDR13_BITS, 0x3fffffff
.equ	RVCSR_PMPADDR13_RESET, 0x00000000
.equ	RVCSR_PMPADDR13_MSB, 29
.equ	RVCSR_PMPADDR13_LSB, 0
# =============================================================================
# Register    : RVCSR_PMPADDR14
# Description : Physical memory protection address for region 14. Note all PMP
#               addresses are in units of four bytes.
#
#               Hardwired to all-zeroes. This region is not implemented.
.equ	RVCSR_PMPADDR14_OFFSET, 0x000003be
.equ	RVCSR_PMPADDR14_BITS, 0x3fffffff
.equ	RVCSR_PMPADDR14_RESET, 0x00000000
.equ	RVCSR_PMPADDR14_MSB, 29
.equ	RVCSR_PMPADDR14_LSB, 0
# =============================================================================
# Register    : RVCSR_PMPADDR15
# Description : Physical memory protection address for region 15. Note all PMP
#               addresses are in units of four bytes.
#
#               Hardwired to all-zeroes. This region is not implemented.
.equ	RVCSR_PMPADDR15_OFFSET, 0x000003bf
.equ	RVCSR_PMPADDR15_BITS, 0x3fffffff
.equ	RVCSR_PMPADDR15_RESET, 0x00000000
.equ	RVCSR_PMPADDR15_MSB, 29
.equ	RVCSR_PMPADDR15_LSB, 0
# =============================================================================
# Register    : RVCSR_TSELECT
# Description : Select trigger to be configured via `tdata1`/`tdata2`
#
#               On RP2350, four instruction address triggers are implemented,
#               so only the two LSBs of this register are writable.
.equ	RVCSR_TSELECT_OFFSET, 0x000007a0
.equ	RVCSR_TSELECT_BITS, 0x00000003
.equ	RVCSR_TSELECT_RESET, 0x00000000
.equ	RVCSR_TSELECT_MSB, 1
.equ	RVCSR_TSELECT_LSB, 0
# =============================================================================
# Register    : RVCSR_TDATA1
# Description : Trigger configuration data 1
#
#               Hazard 3 only supports address/data match triggers (type=2) so
#               this register description includes the `mcontrol` fields for
#               this type.
#
#               More precisely, Hazard3 only supports exact instruction address
#               match triggers (hardware breakpoints) so many of this
#               register's fields are hardwired.
.equ	RVCSR_TDATA1_OFFSET, 0x000007a1
.equ	RVCSR_TDATA1_BITS, 0xffffffcf
.equ	RVCSR_TDATA1_RESET, 0x20000000
# -----------------------------------------------------------------------------
# Field       : RVCSR_TDATA1_TYPE
# Description : Trigger type. Hardwired to type=2, meaning an address/data
#               match trigger
.equ	RVCSR_TDATA1_TYPE_RESET, 0x2
.equ	RVCSR_TDATA1_TYPE_BITS, 0xf0000000
.equ	RVCSR_TDATA1_TYPE_MSB, 31
.equ	RVCSR_TDATA1_TYPE_LSB, 28
# -----------------------------------------------------------------------------
# Field       : RVCSR_TDATA1_DMODE
# Description : If 0, both Debug and M-mode can write the `tdata` registers at
#               the selected `tselect`.
#
#               If 1, only Debug Mode can write the `tdata` registers at the
#               selected `tselect`. Writes from other modes are ignored.
#
#               This bit is only writable from Debug Mode
.equ	RVCSR_TDATA1_DMODE_RESET, 0x0
.equ	RVCSR_TDATA1_DMODE_BITS, 0x08000000
.equ	RVCSR_TDATA1_DMODE_MSB, 27
.equ	RVCSR_TDATA1_DMODE_LSB, 27
# -----------------------------------------------------------------------------
# Field       : RVCSR_TDATA1_MASKMAX
# Description : Value of 0 indicates only exact address matches are supported
.equ	RVCSR_TDATA1_MASKMAX_RESET, 0x00
.equ	RVCSR_TDATA1_MASKMAX_BITS, 0x07e00000
.equ	RVCSR_TDATA1_MASKMAX_MSB, 26
.equ	RVCSR_TDATA1_MASKMAX_LSB, 21
# -----------------------------------------------------------------------------
# Field       : RVCSR_TDATA1_HIT
# Description : Trigger hit flag. Not implemented, hardwired to 0.
.equ	RVCSR_TDATA1_HIT_RESET, 0x0
.equ	RVCSR_TDATA1_HIT_BITS, 0x00100000
.equ	RVCSR_TDATA1_HIT_MSB, 20
.equ	RVCSR_TDATA1_HIT_LSB, 20
# -----------------------------------------------------------------------------
# Field       : RVCSR_TDATA1_SELECT
# Description : Hardwired value of 0 indicates that only address matches are
#               supported, not data matches
.equ	RVCSR_TDATA1_SELECT_RESET, 0x0
.equ	RVCSR_TDATA1_SELECT_BITS, 0x00080000
.equ	RVCSR_TDATA1_SELECT_MSB, 19
.equ	RVCSR_TDATA1_SELECT_LSB, 19
# -----------------------------------------------------------------------------
# Field       : RVCSR_TDATA1_TIMING
# Description : Hardwired value of 0 indicates that trigger fires before the
#               triggering instruction executes, not afterward
.equ	RVCSR_TDATA1_TIMING_RESET, 0x0
.equ	RVCSR_TDATA1_TIMING_BITS, 0x00040000
.equ	RVCSR_TDATA1_TIMING_MSB, 18
.equ	RVCSR_TDATA1_TIMING_LSB, 18
# -----------------------------------------------------------------------------
# Field       : RVCSR_TDATA1_SIZELO
# Description : Hardwired value of 0 indicates that access size matching is not
#               supported
.equ	RVCSR_TDATA1_SIZELO_RESET, 0x0
.equ	RVCSR_TDATA1_SIZELO_BITS, 0x00030000
.equ	RVCSR_TDATA1_SIZELO_MSB, 17
.equ	RVCSR_TDATA1_SIZELO_LSB, 16
# -----------------------------------------------------------------------------
# Field       : RVCSR_TDATA1_ACTION
# Description : Select action to be taken when the trigger fires.
#               0x0 -> Raise a breakpoint exception, which can be handled by the M-mode exception handler
#               0x1 -> Enter debug mode. This action is only selectable when `tdata1.dmode` is 1.
.equ	RVCSR_TDATA1_ACTION_RESET, 0x0
.equ	RVCSR_TDATA1_ACTION_BITS, 0x0000f000
.equ	RVCSR_TDATA1_ACTION_MSB, 15
.equ	RVCSR_TDATA1_ACTION_LSB, 12
.equ	RVCSR_TDATA1_ACTION_VALUE_EBREAK, 0x0
.equ	RVCSR_TDATA1_ACTION_VALUE_DEBUG, 0x1
# -----------------------------------------------------------------------------
# Field       : RVCSR_TDATA1_CHAIN
# Description : Hardwired to 0 to indicate trigger chaining is not supported.
.equ	RVCSR_TDATA1_CHAIN_RESET, 0x0
.equ	RVCSR_TDATA1_CHAIN_BITS, 0x00000800
.equ	RVCSR_TDATA1_CHAIN_MSB, 11
.equ	RVCSR_TDATA1_CHAIN_LSB, 11
# -----------------------------------------------------------------------------
# Field       : RVCSR_TDATA1_MATCH
# Description : Hardwired to 0 to indicate match is always on the full address
#               specified by `tdata2`
.equ	RVCSR_TDATA1_MATCH_RESET, 0x0
.equ	RVCSR_TDATA1_MATCH_BITS, 0x00000780
.equ	RVCSR_TDATA1_MATCH_MSB, 10
.equ	RVCSR_TDATA1_MATCH_LSB, 7
# -----------------------------------------------------------------------------
# Field       : RVCSR_TDATA1_M
# Description : When set, enable this trigger in M-mode
.equ	RVCSR_TDATA1_M_RESET, 0x0
.equ	RVCSR_TDATA1_M_BITS, 0x00000040
.equ	RVCSR_TDATA1_M_MSB, 6
.equ	RVCSR_TDATA1_M_LSB, 6
# -----------------------------------------------------------------------------
# Field       : RVCSR_TDATA1_U
# Description : When set, enable this trigger in U-mode
.equ	RVCSR_TDATA1_U_RESET, 0x0
.equ	RVCSR_TDATA1_U_BITS, 0x00000008
.equ	RVCSR_TDATA1_U_MSB, 3
.equ	RVCSR_TDATA1_U_LSB, 3
# -----------------------------------------------------------------------------
# Field       : RVCSR_TDATA1_EXECUTE
# Description : When set, the trigger fires on the address of an instruction
#               that is executed.
.equ	RVCSR_TDATA1_EXECUTE_RESET, 0x0
.equ	RVCSR_TDATA1_EXECUTE_BITS, 0x00000004
.equ	RVCSR_TDATA1_EXECUTE_MSB, 2
.equ	RVCSR_TDATA1_EXECUTE_LSB, 2
# -----------------------------------------------------------------------------
# Field       : RVCSR_TDATA1_STORE
# Description : Hardwired to 0 to indicate store address/data triggers are not
#               supported
.equ	RVCSR_TDATA1_STORE_RESET, 0x0
.equ	RVCSR_TDATA1_STORE_BITS, 0x00000002
.equ	RVCSR_TDATA1_STORE_MSB, 1
.equ	RVCSR_TDATA1_STORE_LSB, 1
# -----------------------------------------------------------------------------
# Field       : RVCSR_TDATA1_LOAD
# Description : Hardwired to 0 to indicate load address/data triggers are not
#               supported
.equ	RVCSR_TDATA1_LOAD_RESET, 0x0
.equ	RVCSR_TDATA1_LOAD_BITS, 0x00000001
.equ	RVCSR_TDATA1_LOAD_MSB, 0
.equ	RVCSR_TDATA1_LOAD_LSB, 0
# =============================================================================
# Register    : RVCSR_TDATA2
# Description : Trigger configuration data 2
#
#               Contains the address for instruction address triggers (hardware
#               breakpoints)
.equ	RVCSR_TDATA2_OFFSET, 0x000007a2
.equ	RVCSR_TDATA2_BITS, 0xffffffff
.equ	RVCSR_TDATA2_RESET, 0x00000000
.equ	RVCSR_TDATA2_MSB, 31
.equ	RVCSR_TDATA2_LSB, 0
# =============================================================================
# Register    : RVCSR_DCSR
# Description : Debug control and status register. Access outside of Debug Mode
#               will cause an illegal instruction exception.
.equ	RVCSR_DCSR_OFFSET, 0x000007b0
.equ	RVCSR_DCSR_BITS, 0xf0009fc7
.equ	RVCSR_DCSR_RESET, 0x40000603
# -----------------------------------------------------------------------------
# Field       : RVCSR_DCSR_XDEBUGVER
# Description : Hardwired to 4: external debug support as per RISC-V 0.13.2
#               debug specification.
.equ	RVCSR_DCSR_XDEBUGVER_RESET, 0x4
.equ	RVCSR_DCSR_XDEBUGVER_BITS, 0xf0000000
.equ	RVCSR_DCSR_XDEBUGVER_MSB, 31
.equ	RVCSR_DCSR_XDEBUGVER_LSB, 28
# -----------------------------------------------------------------------------
# Field       : RVCSR_DCSR_EBREAKM
# Description : When 1, `ebreak` instructions executed in M-mode will break to
#               Debug Mode instead of trapping
.equ	RVCSR_DCSR_EBREAKM_RESET, 0x0
.equ	RVCSR_DCSR_EBREAKM_BITS, 0x00008000
.equ	RVCSR_DCSR_EBREAKM_MSB, 15
.equ	RVCSR_DCSR_EBREAKM_LSB, 15
# -----------------------------------------------------------------------------
# Field       : RVCSR_DCSR_EBREAKU
# Description : When 1, `ebreak` instructions executed in U-mode will break to
#               Debug Mode instead of trapping.
.equ	RVCSR_DCSR_EBREAKU_RESET, 0x0
.equ	RVCSR_DCSR_EBREAKU_BITS, 0x00001000
.equ	RVCSR_DCSR_EBREAKU_MSB, 12
.equ	RVCSR_DCSR_EBREAKU_LSB, 12
# -----------------------------------------------------------------------------
# Field       : RVCSR_DCSR_STEPIE
# Description : Hardwired to 0: no interrupts are taken during hardware single-
#               stepping.
.equ	RVCSR_DCSR_STEPIE_RESET, 0x0
.equ	RVCSR_DCSR_STEPIE_BITS, 0x00000800
.equ	RVCSR_DCSR_STEPIE_MSB, 11
.equ	RVCSR_DCSR_STEPIE_LSB, 11
# -----------------------------------------------------------------------------
# Field       : RVCSR_DCSR_STOPCOUNT
# Description : Hardwired to 1: `mcycle`/`mcycleh` and `minstret`/`minstreth`
#               do not increment in Debug Mode.
.equ	RVCSR_DCSR_STOPCOUNT_RESET, 0x1
.equ	RVCSR_DCSR_STOPCOUNT_BITS, 0x00000400
.equ	RVCSR_DCSR_STOPCOUNT_MSB, 10
.equ	RVCSR_DCSR_STOPCOUNT_LSB, 10
# -----------------------------------------------------------------------------
# Field       : RVCSR_DCSR_STOPTIME
# Description : Hardwired to 1: core-local timers don't increment in debug
#               mode. External timers (e.g. hart-shared) may be configured to
#               ignore this.
.equ	RVCSR_DCSR_STOPTIME_RESET, 0x1
.equ	RVCSR_DCSR_STOPTIME_BITS, 0x00000200
.equ	RVCSR_DCSR_STOPTIME_MSB, 9
.equ	RVCSR_DCSR_STOPTIME_LSB, 9
# -----------------------------------------------------------------------------
# Field       : RVCSR_DCSR_CAUSE
# Description : Set by hardware when entering debug mode.
#               0x1 -> An ebreak instruction was executed when the relevant `dcsr.ebreakx` bit was set.
#               0x2 -> The trigger module caused a breakpoint exception.
#               0x3 -> Processor entered Debug Mode due to a halt request, or a reset-halt request present when the core reset was released.
#               0x4 -> Processor entered Debug Mode after executing one instruction with single-stepping enabled.
.equ	RVCSR_DCSR_CAUSE_RESET, 0x0
.equ	RVCSR_DCSR_CAUSE_BITS, 0x000001c0
.equ	RVCSR_DCSR_CAUSE_MSB, 8
.equ	RVCSR_DCSR_CAUSE_LSB, 6
.equ	RVCSR_DCSR_CAUSE_VALUE_EBREAK, 0x1
.equ	RVCSR_DCSR_CAUSE_VALUE_TRIGGER, 0x2
.equ	RVCSR_DCSR_CAUSE_VALUE_HALTREQ, 0x3
.equ	RVCSR_DCSR_CAUSE_VALUE_STEP, 0x4
# -----------------------------------------------------------------------------
# Field       : RVCSR_DCSR_STEP
# Description : When 1, re-enter Debug Mode after each instruction executed in
#               M-mode or U-mode.
.equ	RVCSR_DCSR_STEP_RESET, 0x0
.equ	RVCSR_DCSR_STEP_BITS, 0x00000004
.equ	RVCSR_DCSR_STEP_MSB, 2
.equ	RVCSR_DCSR_STEP_LSB, 2
# -----------------------------------------------------------------------------
# Field       : RVCSR_DCSR_PRV
# Description : Read the privilege mode the core was in when entering Debug
#               Mode, and set the privilege mode the core will execute in when
#               returning from Debug Mode.
.equ	RVCSR_DCSR_PRV_RESET, 0x3
.equ	RVCSR_DCSR_PRV_BITS, 0x00000003
.equ	RVCSR_DCSR_PRV_MSB, 1
.equ	RVCSR_DCSR_PRV_LSB, 0
# =============================================================================
# Register    : RVCSR_DPC
# Description : Debug program counter. When entering Debug Mode, `dpc` samples
#               the current program counter, e.g. the address of an `ebreak`
#               which caused Debug Mode entry. When leaving debug mode, the
#               processor jumps to `dpc`. The host may read/write this register
#               whilst in Debug Mode.
.equ	RVCSR_DPC_OFFSET, 0x000007b1
.equ	RVCSR_DPC_BITS, 0xfffffffe
.equ	RVCSR_DPC_RESET, 0x00000000
.equ	RVCSR_DPC_MSB, 31
.equ	RVCSR_DPC_LSB, 1
# =============================================================================
# Register    : RVCSR_MCYCLE
# Description : Machine-mode cycle counter, low half
#               Counts up once per cycle, when `mcountinhibit.cy` is 0.
#               Disabled by default to save power.
.equ	RVCSR_MCYCLE_OFFSET, 0x00000b00
.equ	RVCSR_MCYCLE_BITS, 0xffffffff
.equ	RVCSR_MCYCLE_RESET, 0x00000000
.equ	RVCSR_MCYCLE_MSB, 31
.equ	RVCSR_MCYCLE_LSB, 0
# =============================================================================
# Register    : RVCSR_MINSTRET
# Description : Machine-mode instruction retire counter, low half
#               Counts up once per instruction, when `mcountinhibit.ir` is 0.
#               Disabled by default to save power.
.equ	RVCSR_MINSTRET_OFFSET, 0x00000b02
.equ	RVCSR_MINSTRET_BITS, 0xffffffff
.equ	RVCSR_MINSTRET_RESET, 0x00000000
.equ	RVCSR_MINSTRET_MSB, 31
.equ	RVCSR_MINSTRET_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER3
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER3_OFFSET, 0x00000b03
.equ	RVCSR_MHPMCOUNTER3_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER3_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER3_MSB, 31
.equ	RVCSR_MHPMCOUNTER3_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER4
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER4_OFFSET, 0x00000b04
.equ	RVCSR_MHPMCOUNTER4_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER4_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER4_MSB, 31
.equ	RVCSR_MHPMCOUNTER4_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER5
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER5_OFFSET, 0x00000b05
.equ	RVCSR_MHPMCOUNTER5_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER5_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER5_MSB, 31
.equ	RVCSR_MHPMCOUNTER5_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER6
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER6_OFFSET, 0x00000b06
.equ	RVCSR_MHPMCOUNTER6_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER6_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER6_MSB, 31
.equ	RVCSR_MHPMCOUNTER6_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER7
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER7_OFFSET, 0x00000b07
.equ	RVCSR_MHPMCOUNTER7_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER7_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER7_MSB, 31
.equ	RVCSR_MHPMCOUNTER7_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER8
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER8_OFFSET, 0x00000b08
.equ	RVCSR_MHPMCOUNTER8_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER8_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER8_MSB, 31
.equ	RVCSR_MHPMCOUNTER8_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER9
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER9_OFFSET, 0x00000b09
.equ	RVCSR_MHPMCOUNTER9_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER9_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER9_MSB, 31
.equ	RVCSR_MHPMCOUNTER9_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER10
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER10_OFFSET, 0x00000b0a
.equ	RVCSR_MHPMCOUNTER10_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER10_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER10_MSB, 31
.equ	RVCSR_MHPMCOUNTER10_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER11
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER11_OFFSET, 0x00000b0b
.equ	RVCSR_MHPMCOUNTER11_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER11_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER11_MSB, 31
.equ	RVCSR_MHPMCOUNTER11_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER12
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER12_OFFSET, 0x00000b0c
.equ	RVCSR_MHPMCOUNTER12_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER12_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER12_MSB, 31
.equ	RVCSR_MHPMCOUNTER12_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER13
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER13_OFFSET, 0x00000b0d
.equ	RVCSR_MHPMCOUNTER13_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER13_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER13_MSB, 31
.equ	RVCSR_MHPMCOUNTER13_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER14
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER14_OFFSET, 0x00000b0e
.equ	RVCSR_MHPMCOUNTER14_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER14_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER14_MSB, 31
.equ	RVCSR_MHPMCOUNTER14_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER15
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER15_OFFSET, 0x00000b0f
.equ	RVCSR_MHPMCOUNTER15_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER15_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER15_MSB, 31
.equ	RVCSR_MHPMCOUNTER15_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER16
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER16_OFFSET, 0x00000b10
.equ	RVCSR_MHPMCOUNTER16_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER16_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER16_MSB, 31
.equ	RVCSR_MHPMCOUNTER16_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER17
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER17_OFFSET, 0x00000b11
.equ	RVCSR_MHPMCOUNTER17_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER17_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER17_MSB, 31
.equ	RVCSR_MHPMCOUNTER17_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER18
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER18_OFFSET, 0x00000b12
.equ	RVCSR_MHPMCOUNTER18_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER18_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER18_MSB, 31
.equ	RVCSR_MHPMCOUNTER18_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER19
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER19_OFFSET, 0x00000b13
.equ	RVCSR_MHPMCOUNTER19_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER19_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER19_MSB, 31
.equ	RVCSR_MHPMCOUNTER19_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER20
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER20_OFFSET, 0x00000b14
.equ	RVCSR_MHPMCOUNTER20_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER20_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER20_MSB, 31
.equ	RVCSR_MHPMCOUNTER20_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER21
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER21_OFFSET, 0x00000b15
.equ	RVCSR_MHPMCOUNTER21_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER21_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER21_MSB, 31
.equ	RVCSR_MHPMCOUNTER21_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER22
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER22_OFFSET, 0x00000b16
.equ	RVCSR_MHPMCOUNTER22_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER22_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER22_MSB, 31
.equ	RVCSR_MHPMCOUNTER22_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER23
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER23_OFFSET, 0x00000b17
.equ	RVCSR_MHPMCOUNTER23_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER23_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER23_MSB, 31
.equ	RVCSR_MHPMCOUNTER23_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER24
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER24_OFFSET, 0x00000b18
.equ	RVCSR_MHPMCOUNTER24_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER24_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER24_MSB, 31
.equ	RVCSR_MHPMCOUNTER24_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER25
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER25_OFFSET, 0x00000b19
.equ	RVCSR_MHPMCOUNTER25_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER25_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER25_MSB, 31
.equ	RVCSR_MHPMCOUNTER25_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER26
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER26_OFFSET, 0x00000b1a
.equ	RVCSR_MHPMCOUNTER26_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER26_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER26_MSB, 31
.equ	RVCSR_MHPMCOUNTER26_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER27
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER27_OFFSET, 0x00000b1b
.equ	RVCSR_MHPMCOUNTER27_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER27_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER27_MSB, 31
.equ	RVCSR_MHPMCOUNTER27_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER28
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER28_OFFSET, 0x00000b1c
.equ	RVCSR_MHPMCOUNTER28_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER28_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER28_MSB, 31
.equ	RVCSR_MHPMCOUNTER28_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER29
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER29_OFFSET, 0x00000b1d
.equ	RVCSR_MHPMCOUNTER29_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER29_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER29_MSB, 31
.equ	RVCSR_MHPMCOUNTER29_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER30
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER30_OFFSET, 0x00000b1e
.equ	RVCSR_MHPMCOUNTER30_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER30_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER30_MSB, 31
.equ	RVCSR_MHPMCOUNTER30_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER31
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER31_OFFSET, 0x00000b1f
.equ	RVCSR_MHPMCOUNTER31_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER31_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER31_MSB, 31
.equ	RVCSR_MHPMCOUNTER31_LSB, 0
# =============================================================================
# Register    : RVCSR_MCYCLEH
# Description : Machine-mode cycle counter, high half
#               Counts up once per 1 << 32 cycles, when `mcountinhibit.cy` is
#               0. Disabled by default to save power.
.equ	RVCSR_MCYCLEH_OFFSET, 0x00000b80
.equ	RVCSR_MCYCLEH_BITS, 0xffffffff
.equ	RVCSR_MCYCLEH_RESET, 0x00000000
.equ	RVCSR_MCYCLEH_MSB, 31
.equ	RVCSR_MCYCLEH_LSB, 0
# =============================================================================
# Register    : RVCSR_MINSTRETH
# Description : Machine-mode instruction retire counter, low half
#               Counts up once per 1 << 32 instructions, when
#               `mcountinhibit.ir` is 0. Disabled by default to save power.
.equ	RVCSR_MINSTRETH_OFFSET, 0x00000b82
.equ	RVCSR_MINSTRETH_BITS, 0xffffffff
.equ	RVCSR_MINSTRETH_RESET, 0x00000000
.equ	RVCSR_MINSTRETH_MSB, 31
.equ	RVCSR_MINSTRETH_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER3H
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER3H_OFFSET, 0x00000b83
.equ	RVCSR_MHPMCOUNTER3H_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER3H_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER3H_MSB, 31
.equ	RVCSR_MHPMCOUNTER3H_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER4H
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER4H_OFFSET, 0x00000b84
.equ	RVCSR_MHPMCOUNTER4H_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER4H_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER4H_MSB, 31
.equ	RVCSR_MHPMCOUNTER4H_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER5H
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER5H_OFFSET, 0x00000b85
.equ	RVCSR_MHPMCOUNTER5H_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER5H_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER5H_MSB, 31
.equ	RVCSR_MHPMCOUNTER5H_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER6H
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER6H_OFFSET, 0x00000b86
.equ	RVCSR_MHPMCOUNTER6H_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER6H_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER6H_MSB, 31
.equ	RVCSR_MHPMCOUNTER6H_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER7H
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER7H_OFFSET, 0x00000b87
.equ	RVCSR_MHPMCOUNTER7H_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER7H_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER7H_MSB, 31
.equ	RVCSR_MHPMCOUNTER7H_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER8H
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER8H_OFFSET, 0x00000b88
.equ	RVCSR_MHPMCOUNTER8H_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER8H_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER8H_MSB, 31
.equ	RVCSR_MHPMCOUNTER8H_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER9H
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER9H_OFFSET, 0x00000b89
.equ	RVCSR_MHPMCOUNTER9H_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER9H_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER9H_MSB, 31
.equ	RVCSR_MHPMCOUNTER9H_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER10H
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER10H_OFFSET, 0x00000b8a
.equ	RVCSR_MHPMCOUNTER10H_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER10H_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER10H_MSB, 31
.equ	RVCSR_MHPMCOUNTER10H_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER11H
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER11H_OFFSET, 0x00000b8b
.equ	RVCSR_MHPMCOUNTER11H_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER11H_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER11H_MSB, 31
.equ	RVCSR_MHPMCOUNTER11H_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER12H
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER12H_OFFSET, 0x00000b8c
.equ	RVCSR_MHPMCOUNTER12H_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER12H_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER12H_MSB, 31
.equ	RVCSR_MHPMCOUNTER12H_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER13H
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER13H_OFFSET, 0x00000b8d
.equ	RVCSR_MHPMCOUNTER13H_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER13H_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER13H_MSB, 31
.equ	RVCSR_MHPMCOUNTER13H_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER14H
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER14H_OFFSET, 0x00000b8e
.equ	RVCSR_MHPMCOUNTER14H_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER14H_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER14H_MSB, 31
.equ	RVCSR_MHPMCOUNTER14H_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER15H
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER15H_OFFSET, 0x00000b8f
.equ	RVCSR_MHPMCOUNTER15H_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER15H_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER15H_MSB, 31
.equ	RVCSR_MHPMCOUNTER15H_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER16H
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER16H_OFFSET, 0x00000b90
.equ	RVCSR_MHPMCOUNTER16H_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER16H_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER16H_MSB, 31
.equ	RVCSR_MHPMCOUNTER16H_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER17H
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER17H_OFFSET, 0x00000b91
.equ	RVCSR_MHPMCOUNTER17H_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER17H_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER17H_MSB, 31
.equ	RVCSR_MHPMCOUNTER17H_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER18H
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER18H_OFFSET, 0x00000b92
.equ	RVCSR_MHPMCOUNTER18H_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER18H_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER18H_MSB, 31
.equ	RVCSR_MHPMCOUNTER18H_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER19H
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER19H_OFFSET, 0x00000b93
.equ	RVCSR_MHPMCOUNTER19H_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER19H_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER19H_MSB, 31
.equ	RVCSR_MHPMCOUNTER19H_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER20H
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER20H_OFFSET, 0x00000b94
.equ	RVCSR_MHPMCOUNTER20H_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER20H_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER20H_MSB, 31
.equ	RVCSR_MHPMCOUNTER20H_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER21H
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER21H_OFFSET, 0x00000b95
.equ	RVCSR_MHPMCOUNTER21H_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER21H_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER21H_MSB, 31
.equ	RVCSR_MHPMCOUNTER21H_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER22H
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER22H_OFFSET, 0x00000b96
.equ	RVCSR_MHPMCOUNTER22H_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER22H_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER22H_MSB, 31
.equ	RVCSR_MHPMCOUNTER22H_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER23H
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER23H_OFFSET, 0x00000b97
.equ	RVCSR_MHPMCOUNTER23H_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER23H_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER23H_MSB, 31
.equ	RVCSR_MHPMCOUNTER23H_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER24H
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER24H_OFFSET, 0x00000b98
.equ	RVCSR_MHPMCOUNTER24H_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER24H_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER24H_MSB, 31
.equ	RVCSR_MHPMCOUNTER24H_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER25H
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER25H_OFFSET, 0x00000b99
.equ	RVCSR_MHPMCOUNTER25H_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER25H_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER25H_MSB, 31
.equ	RVCSR_MHPMCOUNTER25H_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER26H
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER26H_OFFSET, 0x00000b9a
.equ	RVCSR_MHPMCOUNTER26H_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER26H_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER26H_MSB, 31
.equ	RVCSR_MHPMCOUNTER26H_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER27H
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER27H_OFFSET, 0x00000b9b
.equ	RVCSR_MHPMCOUNTER27H_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER27H_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER27H_MSB, 31
.equ	RVCSR_MHPMCOUNTER27H_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER28H
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER28H_OFFSET, 0x00000b9c
.equ	RVCSR_MHPMCOUNTER28H_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER28H_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER28H_MSB, 31
.equ	RVCSR_MHPMCOUNTER28H_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER29H
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER29H_OFFSET, 0x00000b9d
.equ	RVCSR_MHPMCOUNTER29H_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER29H_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER29H_MSB, 31
.equ	RVCSR_MHPMCOUNTER29H_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER30H
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER30H_OFFSET, 0x00000b9e
.equ	RVCSR_MHPMCOUNTER30H_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER30H_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER30H_MSB, 31
.equ	RVCSR_MHPMCOUNTER30H_LSB, 0
# =============================================================================
# Register    : RVCSR_MHPMCOUNTER31H
# Description : Extended performance counter, hardwired to 0.
.equ	RVCSR_MHPMCOUNTER31H_OFFSET, 0x00000b9f
.equ	RVCSR_MHPMCOUNTER31H_BITS, 0xffffffff
.equ	RVCSR_MHPMCOUNTER31H_RESET, 0x00000000
.equ	RVCSR_MHPMCOUNTER31H_MSB, 31
.equ	RVCSR_MHPMCOUNTER31H_LSB, 0
# =============================================================================
# Register    : RVCSR_PMPCFGM0
# Description : PMP M-mode configuration. One bit per PMP region. Setting a bit
#               makes the corresponding region apply to M-mode (like the
#               `pmpcfg.L` bit) but does not lock the region.
#
#               PMP is useful for non-security-related purposes, such as stack
#               guarding and peripheral emulation. This extension allows M-mode
#               to freely use any currently unlocked regions for its own
#               purposes, without the inconvenience of having to lock them.
#
#               Note that this does not grant any new capabilities to M-mode,
#               since in the base standard it is already possible to apply
#               unlocked regions to M-mode by locking them. In general, PMP
#               regions should be locked in ascending region number order so
#               they can't be subsequently overridden by currently unlocked
#               regions.
#
#               Note also that this is not the same as the rule locking bypass
#               bit in the ePMP extension, which does not permit locked and
#               unlocked M-mode regions to coexist.
#
#               This is a Hazard3 custom CSR.
.equ	RVCSR_PMPCFGM0_OFFSET, 0x00000bd0
.equ	RVCSR_PMPCFGM0_BITS, 0x0000ffff
.equ	RVCSR_PMPCFGM0_RESET, 0x00000000
.equ	RVCSR_PMPCFGM0_MSB, 15
.equ	RVCSR_PMPCFGM0_LSB, 0
# =============================================================================
# Register    : RVCSR_MEIEA
# Description : External interrupt enable array.
#
#               The array contains a read-write bit for each external interrupt
#               request: a `1` bit indicates that interrupt is currently
#               enabled. At reset, all external interrupts are disabled.
#
#               If enabled, an external interrupt can cause assertion of the
#               standard RISC-V machine external interrupt pending flag
#               (`mip.meip`), and therefore cause the processor to enter the
#               external interrupt vector. See `meipa`.
#
#               There are up to 512 external interrupts. The upper half of this
#               register contains a 16-bit window into the full 512-bit vector.
#               The window is indexed by the 5 LSBs of the write data.
.equ	RVCSR_MEIEA_OFFSET, 0x00000be0
.equ	RVCSR_MEIEA_BITS, 0xffff001f
.equ	RVCSR_MEIEA_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RVCSR_MEIEA_WINDOW
# Description : 16-bit read/write window into the external interrupt enable
#               array
.equ	RVCSR_MEIEA_WINDOW_RESET, 0x0000
.equ	RVCSR_MEIEA_WINDOW_BITS, 0xffff0000
.equ	RVCSR_MEIEA_WINDOW_MSB, 31
.equ	RVCSR_MEIEA_WINDOW_LSB, 16
# -----------------------------------------------------------------------------
# Field       : RVCSR_MEIEA_INDEX
# Description : Write-only self-clearing field (no value is stored) used to
#               control which window of the array appears in `window`.
.equ	RVCSR_MEIEA_INDEX_RESET, 0x00
.equ	RVCSR_MEIEA_INDEX_BITS, 0x0000001f
.equ	RVCSR_MEIEA_INDEX_MSB, 4
.equ	RVCSR_MEIEA_INDEX_LSB, 0
# =============================================================================
# Register    : RVCSR_MEIPA
# Description : External interrupt pending array
#
#               Contains a read-only bit for each external interrupt request.
#               Similarly to `meiea`, this register is a window into an array
#               of up to 512 external interrupt flags. The status appears in
#               the upper 16 bits of the value read from `meipa`, and the lower
#               5 bits of the value _written_ by the same CSR instruction (or 0
#               if no write takes place) select a 16-bit window of the full
#               interrupt pending array.
#
#               A `1` bit indicates that interrupt is currently asserted. IRQs
#               are assumed to be level-sensitive, and the relevant `meipa` bit
#               is cleared by servicing the requestor so that it deasserts its
#               interrupt request.
#
#               When any interrupt of sufficient priority is both set in
#               `meipa` and enabled in `meiea`, the standard RISC-V external
#               interrupt pending bit `mip.meip` is asserted. In other words,
#               `meipa` is filtered by `meiea` to generate the standard
#               `mip.meip` flag.
.equ	RVCSR_MEIPA_OFFSET, 0x00000be1
.equ	RVCSR_MEIPA_BITS, 0xffff001f
.equ	RVCSR_MEIPA_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RVCSR_MEIPA_WINDOW
# Description : 16-bit read-only window into the external interrupt pending
#               array
.equ	RVCSR_MEIPA_WINDOW_BITS, 0xffff0000
.equ	RVCSR_MEIPA_WINDOW_MSB, 31
.equ	RVCSR_MEIPA_WINDOW_LSB, 16
# -----------------------------------------------------------------------------
# Field       : RVCSR_MEIPA_INDEX
# Description : Write-only, self-clearing field (no value is stored) used to
#               control which window of the array appears in `window`.
.equ	RVCSR_MEIPA_INDEX_RESET, 0x00
.equ	RVCSR_MEIPA_INDEX_BITS, 0x0000001f
.equ	RVCSR_MEIPA_INDEX_MSB, 4
.equ	RVCSR_MEIPA_INDEX_LSB, 0
# =============================================================================
# Register    : RVCSR_MEIFA
# Description : External interrupt force array
#
#               Contains a read-write bit for every interrupt request. Writing
#               a 1 to a bit in the interrupt force array causes the
#               corresponding bit to become pending in `meipa`. Software can
#               use this feature to manually trigger a particular interrupt.
#
#               There are no restrictions on using `meifa` inside of an
#               interrupt. The more useful case here is to schedule some lower-
#               priority handler from within a high-priority interrupt, so that
#               it will execute before the core returns to the foreground code.
#               Implementers may wish to reserve some external IRQs with their
#               external inputs tied to 0 for this purpose.
#
#               Bits can be cleared by software, and are cleared automatically
#               by hardware upon a read of `meinext` which returns the
#               corresponding IRQ number in `meinext.irq` with `mienext.noirq`
#               clear (no matter whether `meinext.update` is written).
#
#               `meifa` implements the same array window indexing scheme as
#               `meiea` and `meipa`.
.equ	RVCSR_MEIFA_OFFSET, 0x00000be2
.equ	RVCSR_MEIFA_BITS, 0xffff001f
.equ	RVCSR_MEIFA_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RVCSR_MEIFA_WINDOW
# Description : 16-bit read/write window into the external interrupt force
#               array
.equ	RVCSR_MEIFA_WINDOW_RESET, 0x0000
.equ	RVCSR_MEIFA_WINDOW_BITS, 0xffff0000
.equ	RVCSR_MEIFA_WINDOW_MSB, 31
.equ	RVCSR_MEIFA_WINDOW_LSB, 16
# -----------------------------------------------------------------------------
# Field       : RVCSR_MEIFA_INDEX
# Description : Write-only, self-clearing field (no value is stored) used to
#               control which window of the array appears in `window`.
.equ	RVCSR_MEIFA_INDEX_RESET, 0x00
.equ	RVCSR_MEIFA_INDEX_BITS, 0x0000001f
.equ	RVCSR_MEIFA_INDEX_MSB, 4
.equ	RVCSR_MEIFA_INDEX_LSB, 0
# =============================================================================
# Register    : RVCSR_MEIPRA
# Description : External interrupt priority array
#
#               Each interrupt has an (up to) 4-bit priority value associated
#               with it, and each access to this register reads and/or writes a
#               16-bit window containing four such priority values. When less
#               than 16 priority levels are available, the LSBs of the priority
#               fields are hardwired to 0.
#
#               When an interrupt's priority is lower than the current
#               preemption priority `meicontext.preempt`, it is treated as not
#               being pending for the purposes of `mip.meip`. The pending bit
#               in `meipa` will still assert, but the machine external
#               interrupt pending bit `mip.meip` will not, so the processor
#               will ignore this interrupt. See `meicontext`.
.equ	RVCSR_MEIPRA_OFFSET, 0x00000be3
.equ	RVCSR_MEIPRA_BITS, 0xffff001f
.equ	RVCSR_MEIPRA_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RVCSR_MEIPRA_WINDOW
# Description : 16-bit read/write window into the external interrupt priority
#               array, containing four 4-bit priority values.
.equ	RVCSR_MEIPRA_WINDOW_RESET, 0x0000
.equ	RVCSR_MEIPRA_WINDOW_BITS, 0xffff0000
.equ	RVCSR_MEIPRA_WINDOW_MSB, 31
.equ	RVCSR_MEIPRA_WINDOW_LSB, 16
# -----------------------------------------------------------------------------
# Field       : RVCSR_MEIPRA_INDEX
# Description : Write-only, self-clearing field (no value is stored) used to
#               control which window of the array appears in `window`.
.equ	RVCSR_MEIPRA_INDEX_RESET, 0x00
.equ	RVCSR_MEIPRA_INDEX_BITS, 0x0000001f
.equ	RVCSR_MEIPRA_INDEX_MSB, 4
.equ	RVCSR_MEIPRA_INDEX_LSB, 0
# =============================================================================
# Register    : RVCSR_MEINEXT
# Description : Get next external interrupt
#
#               Contains the index of the highest-priority external interrupt
#               which is both asserted in `meipa` and enabled in `meiea`, left-
#               shifted by 2 so that it can be used to index an array of 32-bit
#               function pointers. If there is no such interrupt, the MSB is
#               set.
#
#               When multiple interrupts of the same priority are both pending
#               and enabled, the lowest-numbered wins. Interrupts with priority
#               less than `meicontext.ppreempt` -- the _previous_ preemption
#               priority -- are treated as though they are not pending. This is
#               to ensure that a preempting interrupt frame does not service
#               interrupts which may be in progress in the frame that was
#               preempted.
.equ	RVCSR_MEINEXT_OFFSET, 0x00000be4
.equ	RVCSR_MEINEXT_BITS, 0x800007fd
.equ	RVCSR_MEINEXT_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RVCSR_MEINEXT_NOIRQ
# Description : Set when there is no external interrupt which is enabled,
#               pending, and has priority greater than or equal to
#               `meicontext.ppreempt`. Can be efficiently tested with a `bltz`
#               or `bgez` instruction.
.equ	RVCSR_MEINEXT_NOIRQ_RESET, 0x0
.equ	RVCSR_MEINEXT_NOIRQ_BITS, 0x80000000
.equ	RVCSR_MEINEXT_NOIRQ_MSB, 31
.equ	RVCSR_MEINEXT_NOIRQ_LSB, 31
# -----------------------------------------------------------------------------
# Field       : RVCSR_MEINEXT_IRQ
# Description : Index of the highest-priority active external interrupt. Zero
#               when no external interrupts with sufficient priority are both
#               pending and enabled.
.equ	RVCSR_MEINEXT_IRQ_RESET, 0x000
.equ	RVCSR_MEINEXT_IRQ_BITS, 0x000007fc
.equ	RVCSR_MEINEXT_IRQ_MSB, 10
.equ	RVCSR_MEINEXT_IRQ_LSB, 2
# -----------------------------------------------------------------------------
# Field       : RVCSR_MEINEXT_UPDATE
# Description : Writing 1 (self-clearing) causes hardware to update
#               `meicontext` according to the IRQ number and preemption
#               priority of the interrupt indicated in `noirq`/`irq`. This
#               should be done in a single atomic operation, i.e. `csrrsi a0,
#               meinext, 0x1`.
.equ	RVCSR_MEINEXT_UPDATE_RESET, 0x0
.equ	RVCSR_MEINEXT_UPDATE_BITS, 0x00000001
.equ	RVCSR_MEINEXT_UPDATE_MSB, 0
.equ	RVCSR_MEINEXT_UPDATE_LSB, 0
# =============================================================================
# Register    : RVCSR_MEICONTEXT
# Description : External interrupt context register
#
#               Configures the priority level for interrupt preemption, and
#               helps software track which interrupt it is currently in. The
#               latter is useful when a common interrupt service routine
#               handles interrupt requests from multiple instances of the same
#               peripheral.
#
#               A three-level stack of preemption priorities is maintained in
#               the `preempt`, `ppreempt` and `pppreempt` fields. The priority
#               stack is saved when hardware enters the external interrupt
#               vector, and restored by an `mret` instruction if
#               `meicontext.mreteirq` is set.
#
#               The top entry of the priority stack, `preempt`, is used by
#               hardware to ensure that only higher-priority interrupts can
#               preempt the current interrupt. The next entry, `ppreempt`, is
#               used to avoid servicing interrupts which may already be in
#               progress in a frame that was preempted. The third entry,
#               `pppreempt`, has no hardware effect, but ensures that `preempt`
#               and `ppreempt` can be correctly saved/restored across arbitrary
#               levels of preemption.
.equ	RVCSR_MEICONTEXT_OFFSET, 0x00000be5
.equ	RVCSR_MEICONTEXT_BITS, 0xff1f9fff
.equ	RVCSR_MEICONTEXT_RESET, 0x00008000
# -----------------------------------------------------------------------------
# Field       : RVCSR_MEICONTEXT_PPPREEMPT
# Description : Previous `ppreempt`. Set to `ppreempt` on priority save, set to
#               zero on priority restore.  Has no hardware effect, but ensures
#               that when `meicontext` is saved/restored correctly, `preempt`
#               and `ppreempt` stack correctly through arbitrarily many
#               preemption frames.
.equ	RVCSR_MEICONTEXT_PPPREEMPT_RESET, 0x0
.equ	RVCSR_MEICONTEXT_PPPREEMPT_BITS, 0xf0000000
.equ	RVCSR_MEICONTEXT_PPPREEMPT_MSB, 31
.equ	RVCSR_MEICONTEXT_PPPREEMPT_LSB, 28
# -----------------------------------------------------------------------------
# Field       : RVCSR_MEICONTEXT_PPREEMPT
# Description : Previous `preempt`. Set to `preempt` on priority save, restored
#               to to `pppreempt` on priority restore.
#
#               IRQs of lower priority than `ppreempt` are not visible in
#               `meinext`, so that a preemptee is not re-taken in the
#               preempting frame.
.equ	RVCSR_MEICONTEXT_PPREEMPT_RESET, 0x0
.equ	RVCSR_MEICONTEXT_PPREEMPT_BITS, 0x0f000000
.equ	RVCSR_MEICONTEXT_PPREEMPT_MSB, 27
.equ	RVCSR_MEICONTEXT_PPREEMPT_LSB, 24
# -----------------------------------------------------------------------------
# Field       : RVCSR_MEICONTEXT_PREEMPT
# Description : Minimum interrupt priority to preempt the current interrupt.
#               Interrupts with lower priority than `preempt` do not cause the
#               core to transfer to an interrupt handler. Updated by hardware
#               when when `meinext.update` is written, or when hardware enters
#               the external interrupt vector.
#
#               If an interrupt is present in `meinext` when this field is
#               updated, then `preempt` is set to one level greater than that
#               interrupt's priority. Otherwise, `ppreempt` is set to one level
#               greater than the maximum interrupt priority, disabling
#               preemption.
.equ	RVCSR_MEICONTEXT_PREEMPT_RESET, 0x00
.equ	RVCSR_MEICONTEXT_PREEMPT_BITS, 0x001f0000
.equ	RVCSR_MEICONTEXT_PREEMPT_MSB, 20
.equ	RVCSR_MEICONTEXT_PREEMPT_LSB, 16
# -----------------------------------------------------------------------------
# Field       : RVCSR_MEICONTEXT_NOIRQ
# Description : Not in interrupt (read/write). Set to 1 at reset. Set to
#               `meinext.noirq` when `meinext.update` is written. No hardware
#               effect.
.equ	RVCSR_MEICONTEXT_NOIRQ_RESET, 0x1
.equ	RVCSR_MEICONTEXT_NOIRQ_BITS, 0x00008000
.equ	RVCSR_MEICONTEXT_NOIRQ_MSB, 15
.equ	RVCSR_MEICONTEXT_NOIRQ_LSB, 15
# -----------------------------------------------------------------------------
# Field       : RVCSR_MEICONTEXT_IRQ
# Description : Current IRQ number (read/write). Set to `meinext.irq` when
#               `meinext.update` is written. No hardware effect.
.equ	RVCSR_MEICONTEXT_IRQ_RESET, 0x000
.equ	RVCSR_MEICONTEXT_IRQ_BITS, 0x00001ff0
.equ	RVCSR_MEICONTEXT_IRQ_MSB, 12
.equ	RVCSR_MEICONTEXT_IRQ_LSB, 4
# -----------------------------------------------------------------------------
# Field       : RVCSR_MEICONTEXT_MTIESAVE
# Description : Reads as the current value of `mie.mtie`, if `clearts` is set
#               by the same CSR access instruction. Otherwise reads as 0.
#               Writes are ORed into `mie.mtie`.
.equ	RVCSR_MEICONTEXT_MTIESAVE_RESET, 0x0
.equ	RVCSR_MEICONTEXT_MTIESAVE_BITS, 0x00000008
.equ	RVCSR_MEICONTEXT_MTIESAVE_MSB, 3
.equ	RVCSR_MEICONTEXT_MTIESAVE_LSB, 3
# -----------------------------------------------------------------------------
# Field       : RVCSR_MEICONTEXT_MSIESAVE
# Description : Reads as the current value of `mie.msie`, if `clearts` is set
#               by the same CSR access instruction. Otherwise reads as 0.
#               Writes are ORed into `mie.msie`.
.equ	RVCSR_MEICONTEXT_MSIESAVE_RESET, 0x0
.equ	RVCSR_MEICONTEXT_MSIESAVE_BITS, 0x00000004
.equ	RVCSR_MEICONTEXT_MSIESAVE_MSB, 2
.equ	RVCSR_MEICONTEXT_MSIESAVE_LSB, 2
# -----------------------------------------------------------------------------
# Field       : RVCSR_MEICONTEXT_CLEARTS
# Description : Write-1 self-clearing field. Writing 1 will clear `mie.mtie`
#               and `mie.msie`, and present their prior values in the
#               `mtiesave` and `msiesave` of this register. This makes it safe
#               to re-enable IRQs (via `mstatus.mie`) without the possibility
#               of being preempted by the standard timer and soft interrupt
#               handlers, which may not be aware of Hazard3's interrupt
#               hardware.
#
#               The clear due to `clearts` takes precedence over the set due to
#               `mtiesave`/`msiesave`, although it would be unusual for
#               software to write both on the same cycle.
.equ	RVCSR_MEICONTEXT_CLEARTS_RESET, 0x0
.equ	RVCSR_MEICONTEXT_CLEARTS_BITS, 0x00000002
.equ	RVCSR_MEICONTEXT_CLEARTS_MSB, 1
.equ	RVCSR_MEICONTEXT_CLEARTS_LSB, 1
# -----------------------------------------------------------------------------
# Field       : RVCSR_MEICONTEXT_MRETEIRQ
# Description : If 1, enable restore of the preemption priority stack on
#               `mret`. This bit is set on entering the external interrupt
#               vector, cleared by `mret`, and cleared upon taking any trap
#               other than an external interrupt.
#
#               Provided `meicontext` is saved on entry to the external
#               interrupt vector (before enabling preemption), is restored
#               before exiting, and the standard software/timer IRQs are
#               prevented from preempting (e.g. by using `clearts`), this flag
#               allows the hardware to safely manage the preemption priority
#               stack even when an external interrupt handler may take
#               exceptions.
.equ	RVCSR_MEICONTEXT_MRETEIRQ_RESET, 0x0
.equ	RVCSR_MEICONTEXT_MRETEIRQ_BITS, 0x00000001
.equ	RVCSR_MEICONTEXT_MRETEIRQ_MSB, 0
.equ	RVCSR_MEICONTEXT_MRETEIRQ_LSB, 0
# =============================================================================
# Register    : RVCSR_MSLEEP
# Description : M-mode sleep control register
.equ	RVCSR_MSLEEP_OFFSET, 0x00000bf0
.equ	RVCSR_MSLEEP_BITS, 0x00000007
.equ	RVCSR_MSLEEP_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RVCSR_MSLEEP_SLEEPONBLOCK
# Description : Enter the deep sleep state configured by
#               msleep.deepsleep/msleep.powerdown on a `h3.block` instruction,
#               as well as a standard `wfi`. If this bit is clear, a `h3.block`
#               is always implemented as a simple pipeline stall.
.equ	RVCSR_MSLEEP_SLEEPONBLOCK_RESET, 0x0
.equ	RVCSR_MSLEEP_SLEEPONBLOCK_BITS, 0x00000004
.equ	RVCSR_MSLEEP_SLEEPONBLOCK_MSB, 2
.equ	RVCSR_MSLEEP_SLEEPONBLOCK_LSB, 2
# -----------------------------------------------------------------------------
# Field       : RVCSR_MSLEEP_POWERDOWN
# Description : Release the external power request when going to sleep. The
#               function of this is platform-defined -- it may do nothing, it
#               may do something simple like clock-gating the fabric, or it may
#               be tied to some complex system-level power controller.
#
#               When waking, the processor reasserts its external power-up
#               request, and will not fetch any instructions until the request
#               is acknowledged. This may add considerable latency to the
#               wakeup.
.equ	RVCSR_MSLEEP_POWERDOWN_RESET, 0x0
.equ	RVCSR_MSLEEP_POWERDOWN_BITS, 0x00000002
.equ	RVCSR_MSLEEP_POWERDOWN_MSB, 1
.equ	RVCSR_MSLEEP_POWERDOWN_LSB, 1
# -----------------------------------------------------------------------------
# Field       : RVCSR_MSLEEP_DEEPSLEEP
# Description : Deassert the processor clock enable when entering the sleep
#               state. If a clock gate is instantiated, this allows most of the
#               processor (everything except the power state machine and the
#               interrupt and halt input registers) to be clock gated whilst
#               asleep, which may reduce the sleep current. This adds one cycle
#               to the wakeup latency.
.equ	RVCSR_MSLEEP_DEEPSLEEP_RESET, 0x0
.equ	RVCSR_MSLEEP_DEEPSLEEP_BITS, 0x00000001
.equ	RVCSR_MSLEEP_DEEPSLEEP_MSB, 0
.equ	RVCSR_MSLEEP_DEEPSLEEP_LSB, 0
# =============================================================================
# Register    : RVCSR_DMDATA0
# Description : The Debug Module's DATA0 register is mapped into Hazard3's CSR
#               space so that the Debug Module can exchange data with the core
#               by executing CSR access instructions (this is used to implement
#               the Abstract Access Register command). Only accessible in Debug
#               Mode.
.equ	RVCSR_DMDATA0_OFFSET, 0x00000bff
.equ	RVCSR_DMDATA0_BITS, 0xffffffff
.equ	RVCSR_DMDATA0_RESET, 0x00000000
.equ	RVCSR_DMDATA0_MSB, 31
.equ	RVCSR_DMDATA0_LSB, 0
# =============================================================================
# Register    : RVCSR_CYCLE
# Description : Read-only U-mode alias of mcycle, accessible when
#               `mcounteren.cy` is set
.equ	RVCSR_CYCLE_OFFSET, 0x00000c00
.equ	RVCSR_CYCLE_BITS, 0xffffffff
.equ	RVCSR_CYCLE_RESET, 0x00000000
.equ	RVCSR_CYCLE_MSB, 31
.equ	RVCSR_CYCLE_LSB, 0
# =============================================================================
# Register    : RVCSR_INSTRET
# Description : Read-only U-mode alias of minstret, accessible when
#               `mcounteren.ir` is set
.equ	RVCSR_INSTRET_OFFSET, 0x00000c02
.equ	RVCSR_INSTRET_BITS, 0xffffffff
.equ	RVCSR_INSTRET_RESET, 0x00000000
.equ	RVCSR_INSTRET_MSB, 31
.equ	RVCSR_INSTRET_LSB, 0
# =============================================================================
# Register    : RVCSR_CYCLEH
# Description : Read-only U-mode alias of mcycleh, accessible when
#               `mcounteren.cy` is set
.equ	RVCSR_CYCLEH_OFFSET, 0x00000c80
.equ	RVCSR_CYCLEH_BITS, 0xffffffff
.equ	RVCSR_CYCLEH_RESET, 0x00000000
.equ	RVCSR_CYCLEH_MSB, 31
.equ	RVCSR_CYCLEH_LSB, 0
# =============================================================================
# Register    : RVCSR_INSTRETH
# Description : Read-only U-mode alias of minstreth, accessible when
#               `mcounteren.ir` is set
.equ	RVCSR_INSTRETH_OFFSET, 0x00000c82
.equ	RVCSR_INSTRETH_BITS, 0xffffffff
.equ	RVCSR_INSTRETH_RESET, 0x00000000
.equ	RVCSR_INSTRETH_MSB, 31
.equ	RVCSR_INSTRETH_LSB, 0
# =============================================================================
# Register    : RVCSR_MVENDORID
# Description : Vendor ID
.equ	RVCSR_MVENDORID_OFFSET, 0x00000f11
.equ	RVCSR_MVENDORID_BITS, 0xffffffff
.equ	RVCSR_MVENDORID_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : RVCSR_MVENDORID_BANK
.equ	RVCSR_MVENDORID_BANK_BITS, 0xffffff80
.equ	RVCSR_MVENDORID_BANK_MSB, 31
.equ	RVCSR_MVENDORID_BANK_LSB, 7
# -----------------------------------------------------------------------------
# Field       : RVCSR_MVENDORID_OFFSET
.equ	RVCSR_MVENDORID_OFFSET_BITS, 0x0000007f
.equ	RVCSR_MVENDORID_OFFSET_MSB, 6
.equ	RVCSR_MVENDORID_OFFSET_LSB, 0
# =============================================================================
# Register    : RVCSR_MARCHID
# Description : Architecture ID (Hazard3)
.equ	RVCSR_MARCHID_OFFSET, 0x00000f12
.equ	RVCSR_MARCHID_BITS, 0xffffffff
.equ	RVCSR_MARCHID_RESET, 0x0000001b
.equ	RVCSR_MARCHID_MSB, 31
.equ	RVCSR_MARCHID_LSB, 0
# =============================================================================
# Register    : RVCSR_MIMPID
# Description : Implementation ID
.equ	RVCSR_MIMPID_OFFSET, 0x00000f13
.equ	RVCSR_MIMPID_BITS, 0xffffffff
.equ	RVCSR_MIMPID_MSB, 31
.equ	RVCSR_MIMPID_LSB, 0
# =============================================================================
# Register    : RVCSR_MHARTID
# Description : Hardware thread ID
#               On RP2350, core 0 has a hart ID of 0, and core 1 has a hart ID
#               of 1.
.equ	RVCSR_MHARTID_OFFSET, 0x00000f14
.equ	RVCSR_MHARTID_BITS, 0xffffffff
.equ	RVCSR_MHARTID_MSB, 31
.equ	RVCSR_MHARTID_LSB, 0
# =============================================================================
# Register    : RVCSR_MCONFIGPTR
# Description : Pointer to configuration data structure (hardwired to 0)
.equ	RVCSR_MCONFIGPTR_OFFSET, 0x00000f15
.equ	RVCSR_MCONFIGPTR_BITS, 0xffffffff
.equ	RVCSR_MCONFIGPTR_RESET, 0x00000000
.equ	RVCSR_MCONFIGPTR_MSB, 31
.equ	RVCSR_MCONFIGPTR_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_RVCSR_H
