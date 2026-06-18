#
# Derived from Raspberry Pi Pico SDK
#
# Copyright (c) 2024 Raspberry Pi Ltd.
#
# Redistribution and use permitted under BSD 3-Clause terms.
# See full license in THIRD_PARTY_LICENSES/PICO_SDK_LICENSE.txt
#
# =============================================================================
# Register block : PIO
# Version        : 1
# Bus type       : ahbl
# Description    : Programmable IO block
# =============================================================================
.ifndef	_HARDWARE_REGS_PIO_H
.set	_HARDWARE_REGS_PIO_H, 1
# =============================================================================
# Register    : PIO_CTRL
# Description : PIO control register
.equ	PIO_CTRL_OFFSET, 0x00000000
.equ	PIO_CTRL_BITS, 0x07ff0fff
.equ	PIO_CTRL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PIO_CTRL_NEXTPREV_CLKDIV_RESTART
# Description : Write 1 to restart the clock dividers of state machines in
#               neighbouring PIO blocks, as specified by NEXT_PIO_MASK and
#               PREV_PIO_MASK in the same write.
#
#               This is equivalent to writing 1 to the corresponding
#               CLKDIV_RESTART bits in those PIOs' CTRL registers.
.equ	PIO_CTRL_NEXTPREV_CLKDIV_RESTART_RESET, 0x0
.equ	PIO_CTRL_NEXTPREV_CLKDIV_RESTART_BITS, 0x04000000
.equ	PIO_CTRL_NEXTPREV_CLKDIV_RESTART_MSB, 26
.equ	PIO_CTRL_NEXTPREV_CLKDIV_RESTART_LSB, 26
# -----------------------------------------------------------------------------
# Field       : PIO_CTRL_NEXTPREV_SM_DISABLE
# Description : Write 1 to disable state machines in neighbouring PIO blocks,
#               as specified by NEXT_PIO_MASK and PREV_PIO_MASK in the same
#               write.
#
#               This is equivalent to clearing the corresponding SM_ENABLE bits
#               in those PIOs' CTRL registers.
.equ	PIO_CTRL_NEXTPREV_SM_DISABLE_RESET, 0x0
.equ	PIO_CTRL_NEXTPREV_SM_DISABLE_BITS, 0x02000000
.equ	PIO_CTRL_NEXTPREV_SM_DISABLE_MSB, 25
.equ	PIO_CTRL_NEXTPREV_SM_DISABLE_LSB, 25
# -----------------------------------------------------------------------------
# Field       : PIO_CTRL_NEXTPREV_SM_ENABLE
# Description : Write 1 to enable state machines in neighbouring PIO blocks, as
#               specified by NEXT_PIO_MASK and PREV_PIO_MASK in the same write.
#
#               This is equivalent to setting the corresponding SM_ENABLE bits
#               in those PIOs' CTRL registers.
#
#               If both OTHERS_SM_ENABLE and OTHERS_SM_DISABLE are set, the
#               disable takes precedence.
.equ	PIO_CTRL_NEXTPREV_SM_ENABLE_RESET, 0x0
.equ	PIO_CTRL_NEXTPREV_SM_ENABLE_BITS, 0x01000000
.equ	PIO_CTRL_NEXTPREV_SM_ENABLE_MSB, 24
.equ	PIO_CTRL_NEXTPREV_SM_ENABLE_LSB, 24
# -----------------------------------------------------------------------------
# Field       : PIO_CTRL_NEXT_PIO_MASK
# Description : A mask of state machines in the neighbouring higher-numbered
#               PIO block in the system (or PIO block 0 if this is the highest-
#               numbered PIO block) to which to apply the operations specified
#               by NEXTPREV_CLKDIV_RESTART, NEXTPREV_SM_ENABLE, and
#               NEXTPREV_SM_DISABLE in the same write.
#
#               This allows state machines in a neighbouring PIO block to be
#               started/stopped/clock-synced exactly simultaneously with a
#               write to this PIO block's CTRL register.
#
#               Note that in a system with two PIOs, NEXT_PIO_MASK and
#               PREV_PIO_MASK actually indicate the same PIO block. In this
#               case the effects are applied cumulatively (as though the masks
#               were OR'd together).
#
#               Neighbouring PIO blocks are disconnected (status signals tied
#               to 0 and control signals ignored) if one block is accessible to
#               NonSecure code, and one is not.
.equ	PIO_CTRL_NEXT_PIO_MASK_RESET, 0x0
.equ	PIO_CTRL_NEXT_PIO_MASK_BITS, 0x00f00000
.equ	PIO_CTRL_NEXT_PIO_MASK_MSB, 23
.equ	PIO_CTRL_NEXT_PIO_MASK_LSB, 20
# -----------------------------------------------------------------------------
# Field       : PIO_CTRL_PREV_PIO_MASK
# Description : A mask of state machines in the neighbouring lower-numbered PIO
#               block in the system (or the highest-numbered PIO block if this
#               is PIO block 0) to which to apply the operations specified by
#               OP_CLKDIV_RESTART, OP_ENABLE, OP_DISABLE in the same write.
#
#               This allows state machines in a neighbouring PIO block to be
#               started/stopped/clock-synced exactly simultaneously with a
#               write to this PIO block's CTRL register.
#
#               Neighbouring PIO blocks are disconnected (status signals tied
#               to 0 and control signals ignored) if one block is accessible to
#               NonSecure code, and one is not.
.equ	PIO_CTRL_PREV_PIO_MASK_RESET, 0x0
.equ	PIO_CTRL_PREV_PIO_MASK_BITS, 0x000f0000
.equ	PIO_CTRL_PREV_PIO_MASK_MSB, 19
.equ	PIO_CTRL_PREV_PIO_MASK_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PIO_CTRL_CLKDIV_RESTART
# Description : Restart a state machine's clock divider from an initial phase
#               of 0. Clock dividers are free-running, so once started, their
#               output (including fractional jitter) is completely determined
#               by the integer/fractional divisor configured in SMx_CLKDIV.
#               This means that, if multiple clock dividers with the same
#               divisor are restarted simultaneously, by writing multiple 1
#               bits to this field, the execution clocks of those state
#               machines will run in precise lockstep.
#
#               Note that setting/clearing SM_ENABLE does not stop the clock
#               divider from running, so once multiple state machines' clocks
#               are synchronised, it is safe to disable/reenable a state
#               machine, whilst keeping the clock dividers in sync.
#
#               Note also that CLKDIV_RESTART can be written to whilst the
#               state machine is running, and this is useful to resynchronise
#               clock dividers after the divisors (SMx_CLKDIV) have been
#               changed on-the-fly.
.equ	PIO_CTRL_CLKDIV_RESTART_RESET, 0x0
.equ	PIO_CTRL_CLKDIV_RESTART_BITS, 0x00000f00
.equ	PIO_CTRL_CLKDIV_RESTART_MSB, 11
.equ	PIO_CTRL_CLKDIV_RESTART_LSB, 8
# -----------------------------------------------------------------------------
# Field       : PIO_CTRL_SM_RESTART
# Description : Write 1 to instantly clear internal SM state which may be
#               otherwise difficult to access and will affect future execution.
#
#               Specifically, the following are cleared: input and output shift
#               counters; the contents of the input shift register; the delay
#               counter; the waiting-on-IRQ state; any stalled instruction
#               written to SMx_INSTR or run by OUT/MOV EXEC; any pin write left
#               asserted due to OUT_STICKY.
#
#               The contents of the output shift register and the X/Y scratch
#               registers are not affected.
.equ	PIO_CTRL_SM_RESTART_RESET, 0x0
.equ	PIO_CTRL_SM_RESTART_BITS, 0x000000f0
.equ	PIO_CTRL_SM_RESTART_MSB, 7
.equ	PIO_CTRL_SM_RESTART_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PIO_CTRL_SM_ENABLE
# Description : Enable/disable each of the four state machines by writing 1/0
#               to each of these four bits. When disabled, a state machine will
#               cease executing instructions, except those written directly to
#               SMx_INSTR by the system. Multiple bits can be set/cleared at
#               once to run/halt multiple state machines simultaneously.
.equ	PIO_CTRL_SM_ENABLE_RESET, 0x0
.equ	PIO_CTRL_SM_ENABLE_BITS, 0x0000000f
.equ	PIO_CTRL_SM_ENABLE_MSB, 3
.equ	PIO_CTRL_SM_ENABLE_LSB, 0
# =============================================================================
# Register    : PIO_FSTAT
# Description : FIFO status register
.equ	PIO_FSTAT_OFFSET, 0x00000004
.equ	PIO_FSTAT_BITS, 0x0f0f0f0f
.equ	PIO_FSTAT_RESET, 0x0f000f00
# -----------------------------------------------------------------------------
# Field       : PIO_FSTAT_TXEMPTY
# Description : State machine TX FIFO is empty
.equ	PIO_FSTAT_TXEMPTY_RESET, 0xf
.equ	PIO_FSTAT_TXEMPTY_BITS, 0x0f000000
.equ	PIO_FSTAT_TXEMPTY_MSB, 27
.equ	PIO_FSTAT_TXEMPTY_LSB, 24
# -----------------------------------------------------------------------------
# Field       : PIO_FSTAT_TXFULL
# Description : State machine TX FIFO is full
.equ	PIO_FSTAT_TXFULL_RESET, 0x0
.equ	PIO_FSTAT_TXFULL_BITS, 0x000f0000
.equ	PIO_FSTAT_TXFULL_MSB, 19
.equ	PIO_FSTAT_TXFULL_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PIO_FSTAT_RXEMPTY
# Description : State machine RX FIFO is empty
.equ	PIO_FSTAT_RXEMPTY_RESET, 0xf
.equ	PIO_FSTAT_RXEMPTY_BITS, 0x00000f00
.equ	PIO_FSTAT_RXEMPTY_MSB, 11
.equ	PIO_FSTAT_RXEMPTY_LSB, 8
# -----------------------------------------------------------------------------
# Field       : PIO_FSTAT_RXFULL
# Description : State machine RX FIFO is full
.equ	PIO_FSTAT_RXFULL_RESET, 0x0
.equ	PIO_FSTAT_RXFULL_BITS, 0x0000000f
.equ	PIO_FSTAT_RXFULL_MSB, 3
.equ	PIO_FSTAT_RXFULL_LSB, 0
# =============================================================================
# Register    : PIO_FDEBUG
# Description : FIFO debug register
.equ	PIO_FDEBUG_OFFSET, 0x00000008
.equ	PIO_FDEBUG_BITS, 0x0f0f0f0f
.equ	PIO_FDEBUG_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PIO_FDEBUG_TXSTALL
# Description : State machine has stalled on empty TX FIFO during a blocking
#               PULL, or an OUT with autopull enabled. Write 1 to clear.
.equ	PIO_FDEBUG_TXSTALL_RESET, 0x0
.equ	PIO_FDEBUG_TXSTALL_BITS, 0x0f000000
.equ	PIO_FDEBUG_TXSTALL_MSB, 27
.equ	PIO_FDEBUG_TXSTALL_LSB, 24
# -----------------------------------------------------------------------------
# Field       : PIO_FDEBUG_TXOVER
# Description : TX FIFO overflow (i.e. write-on-full by the system) has
#               occurred. Write 1 to clear. Note that write-on-full does not
#               alter the state or contents of the FIFO in any way, but the
#               data that the system attempted to write is dropped, so if this
#               flag is set, your software has quite likely dropped some data
#               on the floor.
.equ	PIO_FDEBUG_TXOVER_RESET, 0x0
.equ	PIO_FDEBUG_TXOVER_BITS, 0x000f0000
.equ	PIO_FDEBUG_TXOVER_MSB, 19
.equ	PIO_FDEBUG_TXOVER_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PIO_FDEBUG_RXUNDER
# Description : RX FIFO underflow (i.e. read-on-empty by the system) has
#               occurred. Write 1 to clear. Note that read-on-empty does not
#               perturb the state of the FIFO in any way, but the data returned
#               by reading from an empty FIFO is undefined, so this flag
#               generally only becomes set due to some kind of software error.
.equ	PIO_FDEBUG_RXUNDER_RESET, 0x0
.equ	PIO_FDEBUG_RXUNDER_BITS, 0x00000f00
.equ	PIO_FDEBUG_RXUNDER_MSB, 11
.equ	PIO_FDEBUG_RXUNDER_LSB, 8
# -----------------------------------------------------------------------------
# Field       : PIO_FDEBUG_RXSTALL
# Description : State machine has stalled on full RX FIFO during a blocking
#               PUSH, or an IN with autopush enabled. This flag is also set
#               when a nonblocking PUSH to a full FIFO took place, in which
#               case the state machine has dropped data. Write 1 to clear.
.equ	PIO_FDEBUG_RXSTALL_RESET, 0x0
.equ	PIO_FDEBUG_RXSTALL_BITS, 0x0000000f
.equ	PIO_FDEBUG_RXSTALL_MSB, 3
.equ	PIO_FDEBUG_RXSTALL_LSB, 0
# =============================================================================
# Register    : PIO_FLEVEL
# Description : FIFO levels
.equ	PIO_FLEVEL_OFFSET, 0x0000000c
.equ	PIO_FLEVEL_BITS, 0xffffffff
.equ	PIO_FLEVEL_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PIO_FLEVEL_RX3
.equ	PIO_FLEVEL_RX3_RESET, 0x0
.equ	PIO_FLEVEL_RX3_BITS, 0xf0000000
.equ	PIO_FLEVEL_RX3_MSB, 31
.equ	PIO_FLEVEL_RX3_LSB, 28
# -----------------------------------------------------------------------------
# Field       : PIO_FLEVEL_TX3
.equ	PIO_FLEVEL_TX3_RESET, 0x0
.equ	PIO_FLEVEL_TX3_BITS, 0x0f000000
.equ	PIO_FLEVEL_TX3_MSB, 27
.equ	PIO_FLEVEL_TX3_LSB, 24
# -----------------------------------------------------------------------------
# Field       : PIO_FLEVEL_RX2
.equ	PIO_FLEVEL_RX2_RESET, 0x0
.equ	PIO_FLEVEL_RX2_BITS, 0x00f00000
.equ	PIO_FLEVEL_RX2_MSB, 23
.equ	PIO_FLEVEL_RX2_LSB, 20
# -----------------------------------------------------------------------------
# Field       : PIO_FLEVEL_TX2
.equ	PIO_FLEVEL_TX2_RESET, 0x0
.equ	PIO_FLEVEL_TX2_BITS, 0x000f0000
.equ	PIO_FLEVEL_TX2_MSB, 19
.equ	PIO_FLEVEL_TX2_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PIO_FLEVEL_RX1
.equ	PIO_FLEVEL_RX1_RESET, 0x0
.equ	PIO_FLEVEL_RX1_BITS, 0x0000f000
.equ	PIO_FLEVEL_RX1_MSB, 15
.equ	PIO_FLEVEL_RX1_LSB, 12
# -----------------------------------------------------------------------------
# Field       : PIO_FLEVEL_TX1
.equ	PIO_FLEVEL_TX1_RESET, 0x0
.equ	PIO_FLEVEL_TX1_BITS, 0x00000f00
.equ	PIO_FLEVEL_TX1_MSB, 11
.equ	PIO_FLEVEL_TX1_LSB, 8
# -----------------------------------------------------------------------------
# Field       : PIO_FLEVEL_RX0
.equ	PIO_FLEVEL_RX0_RESET, 0x0
.equ	PIO_FLEVEL_RX0_BITS, 0x000000f0
.equ	PIO_FLEVEL_RX0_MSB, 7
.equ	PIO_FLEVEL_RX0_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PIO_FLEVEL_TX0
.equ	PIO_FLEVEL_TX0_RESET, 0x0
.equ	PIO_FLEVEL_TX0_BITS, 0x0000000f
.equ	PIO_FLEVEL_TX0_MSB, 3
.equ	PIO_FLEVEL_TX0_LSB, 0
# =============================================================================
# Register    : PIO_TXF0
# Description : Direct write access to the TX FIFO for this state machine. Each
#               write pushes one word to the FIFO. Attempting to write to a
#               full FIFO has no effect on the FIFO state or contents, and sets
#               the sticky FDEBUG_TXOVER error flag for this FIFO.
.equ	PIO_TXF0_OFFSET, 0x00000010
.equ	PIO_TXF0_BITS, 0xffffffff
.equ	PIO_TXF0_RESET, 0x00000000
.equ	PIO_TXF0_MSB, 31
.equ	PIO_TXF0_LSB, 0
# =============================================================================
# Register    : PIO_TXF1
# Description : Direct write access to the TX FIFO for this state machine. Each
#               write pushes one word to the FIFO. Attempting to write to a
#               full FIFO has no effect on the FIFO state or contents, and sets
#               the sticky FDEBUG_TXOVER error flag for this FIFO.
.equ	PIO_TXF1_OFFSET, 0x00000014
.equ	PIO_TXF1_BITS, 0xffffffff
.equ	PIO_TXF1_RESET, 0x00000000
.equ	PIO_TXF1_MSB, 31
.equ	PIO_TXF1_LSB, 0
# =============================================================================
# Register    : PIO_TXF2
# Description : Direct write access to the TX FIFO for this state machine. Each
#               write pushes one word to the FIFO. Attempting to write to a
#               full FIFO has no effect on the FIFO state or contents, and sets
#               the sticky FDEBUG_TXOVER error flag for this FIFO.
.equ	PIO_TXF2_OFFSET, 0x00000018
.equ	PIO_TXF2_BITS, 0xffffffff
.equ	PIO_TXF2_RESET, 0x00000000
.equ	PIO_TXF2_MSB, 31
.equ	PIO_TXF2_LSB, 0
# =============================================================================
# Register    : PIO_TXF3
# Description : Direct write access to the TX FIFO for this state machine. Each
#               write pushes one word to the FIFO. Attempting to write to a
#               full FIFO has no effect on the FIFO state or contents, and sets
#               the sticky FDEBUG_TXOVER error flag for this FIFO.
.equ	PIO_TXF3_OFFSET, 0x0000001c
.equ	PIO_TXF3_BITS, 0xffffffff
.equ	PIO_TXF3_RESET, 0x00000000
.equ	PIO_TXF3_MSB, 31
.equ	PIO_TXF3_LSB, 0
# =============================================================================
# Register    : PIO_RXF0
# Description : Direct read access to the RX FIFO for this state machine. Each
#               read pops one word from the FIFO. Attempting to read from an
#               empty FIFO has no effect on the FIFO state, and sets the sticky
#               FDEBUG_RXUNDER error flag for this FIFO. The data returned to
#               the system on a read from an empty FIFO is undefined.
.equ	PIO_RXF0_OFFSET, 0x00000020
.equ	PIO_RXF0_BITS, 0xffffffff
.equ	PIO_RXF0_MSB, 31
.equ	PIO_RXF0_LSB, 0
# =============================================================================
# Register    : PIO_RXF1
# Description : Direct read access to the RX FIFO for this state machine. Each
#               read pops one word from the FIFO. Attempting to read from an
#               empty FIFO has no effect on the FIFO state, and sets the sticky
#               FDEBUG_RXUNDER error flag for this FIFO. The data returned to
#               the system on a read from an empty FIFO is undefined.
.equ	PIO_RXF1_OFFSET, 0x00000024
.equ	PIO_RXF1_BITS, 0xffffffff
.equ	PIO_RXF1_MSB, 31
.equ	PIO_RXF1_LSB, 0
# =============================================================================
# Register    : PIO_RXF2
# Description : Direct read access to the RX FIFO for this state machine. Each
#               read pops one word from the FIFO. Attempting to read from an
#               empty FIFO has no effect on the FIFO state, and sets the sticky
#               FDEBUG_RXUNDER error flag for this FIFO. The data returned to
#               the system on a read from an empty FIFO is undefined.
.equ	PIO_RXF2_OFFSET, 0x00000028
.equ	PIO_RXF2_BITS, 0xffffffff
.equ	PIO_RXF2_MSB, 31
.equ	PIO_RXF2_LSB, 0
# =============================================================================
# Register    : PIO_RXF3
# Description : Direct read access to the RX FIFO for this state machine. Each
#               read pops one word from the FIFO. Attempting to read from an
#               empty FIFO has no effect on the FIFO state, and sets the sticky
#               FDEBUG_RXUNDER error flag for this FIFO. The data returned to
#               the system on a read from an empty FIFO is undefined.
.equ	PIO_RXF3_OFFSET, 0x0000002c
.equ	PIO_RXF3_BITS, 0xffffffff
.equ	PIO_RXF3_MSB, 31
.equ	PIO_RXF3_LSB, 0
# =============================================================================
# Register    : PIO_IRQ
# Description : State machine IRQ flags register. Write 1 to clear. There are
#               eight state machine IRQ flags, which can be set, cleared, and
#               waited on by the state machines. There's no fixed association
#               between flags and state machines -- any state machine can use
#               any flag.
#
#               Any of the eight flags can be used for timing synchronisation
#               between state machines, using IRQ and WAIT instructions. Any
#               combination of the eight flags can also routed out to either of
#               the two system-level interrupt requests, alongside FIFO status
#               interrupts -- see e.g. IRQ0_INTE.
.equ	PIO_IRQ_OFFSET, 0x00000030
.equ	PIO_IRQ_BITS, 0x000000ff
.equ	PIO_IRQ_RESET, 0x00000000
.equ	PIO_IRQ_MSB, 7
.equ	PIO_IRQ_LSB, 0
# =============================================================================
# Register    : PIO_IRQ_FORCE
# Description : Writing a 1 to each of these bits will forcibly assert the
#               corresponding IRQ. Note this is different to the INTF register:
#               writing here affects PIO internal state. INTF just asserts the
#               processor-facing IRQ signal for testing ISRs, and is not
#               visible to the state machines.
.equ	PIO_IRQ_FORCE_OFFSET, 0x00000034
.equ	PIO_IRQ_FORCE_BITS, 0x000000ff
.equ	PIO_IRQ_FORCE_RESET, 0x00000000
.equ	PIO_IRQ_FORCE_MSB, 7
.equ	PIO_IRQ_FORCE_LSB, 0
# =============================================================================
# Register    : PIO_INPUT_SYNC_BYPASS
# Description : There is a 2-flipflop synchronizer on each GPIO input, which
#               protects PIO logic from metastabilities. This increases input
#               delay, and for fast synchronous IO (e.g. SPI) these
#               synchronizers may need to be bypassed. Each bit in this
#               register corresponds to one GPIO.
#               0 -> input is synchronized (default)
#               1 -> synchronizer is bypassed
#               If in doubt, leave this register as all zeroes.
.equ	PIO_INPUT_SYNC_BYPASS_OFFSET, 0x00000038
.equ	PIO_INPUT_SYNC_BYPASS_BITS, 0xffffffff
.equ	PIO_INPUT_SYNC_BYPASS_RESET, 0x00000000
.equ	PIO_INPUT_SYNC_BYPASS_MSB, 31
.equ	PIO_INPUT_SYNC_BYPASS_LSB, 0
# =============================================================================
# Register    : PIO_DBG_PADOUT
# Description : Read to sample the pad output values PIO is currently driving
#               to the GPIOs. On RP2040 there are 30 GPIOs, so the two most
#               significant bits are hardwired to 0.
.equ	PIO_DBG_PADOUT_OFFSET, 0x0000003c
.equ	PIO_DBG_PADOUT_BITS, 0xffffffff
.equ	PIO_DBG_PADOUT_RESET, 0x00000000
.equ	PIO_DBG_PADOUT_MSB, 31
.equ	PIO_DBG_PADOUT_LSB, 0
# =============================================================================
# Register    : PIO_DBG_PADOE
# Description : Read to sample the pad output enables (direction) PIO is
#               currently driving to the GPIOs. On RP2040 there are 30 GPIOs,
#               so the two most significant bits are hardwired to 0.
.equ	PIO_DBG_PADOE_OFFSET, 0x00000040
.equ	PIO_DBG_PADOE_BITS, 0xffffffff
.equ	PIO_DBG_PADOE_RESET, 0x00000000
.equ	PIO_DBG_PADOE_MSB, 31
.equ	PIO_DBG_PADOE_LSB, 0
# =============================================================================
# Register    : PIO_DBG_CFGINFO
# Description : The PIO hardware has some free parameters that may vary between
#               chip products.
#               These should be provided in the chip datasheet, but are also
#               exposed here.
.equ	PIO_DBG_CFGINFO_OFFSET, 0x00000044
.equ	PIO_DBG_CFGINFO_BITS, 0xf03f0f3f
.equ	PIO_DBG_CFGINFO_RESET, 0x10000000
# -----------------------------------------------------------------------------
# Field       : PIO_DBG_CFGINFO_VERSION
# Description : Version of the core PIO hardware.
#               0x0 -> Version 0 (RP2040)
#               0x1 -> Version 1 (RP2350)
.equ	PIO_DBG_CFGINFO_VERSION_RESET, 0x1
.equ	PIO_DBG_CFGINFO_VERSION_BITS, 0xf0000000
.equ	PIO_DBG_CFGINFO_VERSION_MSB, 31
.equ	PIO_DBG_CFGINFO_VERSION_LSB, 28
.equ	PIO_DBG_CFGINFO_VERSION_VALUE_V0, 0x0
.equ	PIO_DBG_CFGINFO_VERSION_VALUE_V1, 0x1
# -----------------------------------------------------------------------------
# Field       : PIO_DBG_CFGINFO_IMEM_SIZE
# Description : The size of the instruction memory, measured in units of one
#               instruction
.equ	PIO_DBG_CFGINFO_IMEM_SIZE_BITS, 0x003f0000
.equ	PIO_DBG_CFGINFO_IMEM_SIZE_MSB, 21
.equ	PIO_DBG_CFGINFO_IMEM_SIZE_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PIO_DBG_CFGINFO_SM_COUNT
# Description : The number of state machines this PIO instance is equipped
#               with.
.equ	PIO_DBG_CFGINFO_SM_COUNT_BITS, 0x00000f00
.equ	PIO_DBG_CFGINFO_SM_COUNT_MSB, 11
.equ	PIO_DBG_CFGINFO_SM_COUNT_LSB, 8
# -----------------------------------------------------------------------------
# Field       : PIO_DBG_CFGINFO_FIFO_DEPTH
# Description : The depth of the state machine TX/RX FIFOs, measured in words.
#               Joining fifos via SHIFTCTRL_FJOIN gives one FIFO with double
#               this depth.
.equ	PIO_DBG_CFGINFO_FIFO_DEPTH_BITS, 0x0000003f
.equ	PIO_DBG_CFGINFO_FIFO_DEPTH_MSB, 5
.equ	PIO_DBG_CFGINFO_FIFO_DEPTH_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM0
# Description : Write-only access to instruction memory location 0
.equ	PIO_INSTR_MEM0_OFFSET, 0x00000048
.equ	PIO_INSTR_MEM0_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM0_RESET, 0x00000000
.equ	PIO_INSTR_MEM0_MSB, 15
.equ	PIO_INSTR_MEM0_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM1
# Description : Write-only access to instruction memory location 1
.equ	PIO_INSTR_MEM1_OFFSET, 0x0000004c
.equ	PIO_INSTR_MEM1_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM1_RESET, 0x00000000
.equ	PIO_INSTR_MEM1_MSB, 15
.equ	PIO_INSTR_MEM1_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM2
# Description : Write-only access to instruction memory location 2
.equ	PIO_INSTR_MEM2_OFFSET, 0x00000050
.equ	PIO_INSTR_MEM2_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM2_RESET, 0x00000000
.equ	PIO_INSTR_MEM2_MSB, 15
.equ	PIO_INSTR_MEM2_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM3
# Description : Write-only access to instruction memory location 3
.equ	PIO_INSTR_MEM3_OFFSET, 0x00000054
.equ	PIO_INSTR_MEM3_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM3_RESET, 0x00000000
.equ	PIO_INSTR_MEM3_MSB, 15
.equ	PIO_INSTR_MEM3_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM4
# Description : Write-only access to instruction memory location 4
.equ	PIO_INSTR_MEM4_OFFSET, 0x00000058
.equ	PIO_INSTR_MEM4_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM4_RESET, 0x00000000
.equ	PIO_INSTR_MEM4_MSB, 15
.equ	PIO_INSTR_MEM4_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM5
# Description : Write-only access to instruction memory location 5
.equ	PIO_INSTR_MEM5_OFFSET, 0x0000005c
.equ	PIO_INSTR_MEM5_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM5_RESET, 0x00000000
.equ	PIO_INSTR_MEM5_MSB, 15
.equ	PIO_INSTR_MEM5_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM6
# Description : Write-only access to instruction memory location 6
.equ	PIO_INSTR_MEM6_OFFSET, 0x00000060
.equ	PIO_INSTR_MEM6_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM6_RESET, 0x00000000
.equ	PIO_INSTR_MEM6_MSB, 15
.equ	PIO_INSTR_MEM6_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM7
# Description : Write-only access to instruction memory location 7
.equ	PIO_INSTR_MEM7_OFFSET, 0x00000064
.equ	PIO_INSTR_MEM7_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM7_RESET, 0x00000000
.equ	PIO_INSTR_MEM7_MSB, 15
.equ	PIO_INSTR_MEM7_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM8
# Description : Write-only access to instruction memory location 8
.equ	PIO_INSTR_MEM8_OFFSET, 0x00000068
.equ	PIO_INSTR_MEM8_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM8_RESET, 0x00000000
.equ	PIO_INSTR_MEM8_MSB, 15
.equ	PIO_INSTR_MEM8_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM9
# Description : Write-only access to instruction memory location 9
.equ	PIO_INSTR_MEM9_OFFSET, 0x0000006c
.equ	PIO_INSTR_MEM9_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM9_RESET, 0x00000000
.equ	PIO_INSTR_MEM9_MSB, 15
.equ	PIO_INSTR_MEM9_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM10
# Description : Write-only access to instruction memory location 10
.equ	PIO_INSTR_MEM10_OFFSET, 0x00000070
.equ	PIO_INSTR_MEM10_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM10_RESET, 0x00000000
.equ	PIO_INSTR_MEM10_MSB, 15
.equ	PIO_INSTR_MEM10_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM11
# Description : Write-only access to instruction memory location 11
.equ	PIO_INSTR_MEM11_OFFSET, 0x00000074
.equ	PIO_INSTR_MEM11_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM11_RESET, 0x00000000
.equ	PIO_INSTR_MEM11_MSB, 15
.equ	PIO_INSTR_MEM11_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM12
# Description : Write-only access to instruction memory location 12
.equ	PIO_INSTR_MEM12_OFFSET, 0x00000078
.equ	PIO_INSTR_MEM12_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM12_RESET, 0x00000000
.equ	PIO_INSTR_MEM12_MSB, 15
.equ	PIO_INSTR_MEM12_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM13
# Description : Write-only access to instruction memory location 13
.equ	PIO_INSTR_MEM13_OFFSET, 0x0000007c
.equ	PIO_INSTR_MEM13_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM13_RESET, 0x00000000
.equ	PIO_INSTR_MEM13_MSB, 15
.equ	PIO_INSTR_MEM13_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM14
# Description : Write-only access to instruction memory location 14
.equ	PIO_INSTR_MEM14_OFFSET, 0x00000080
.equ	PIO_INSTR_MEM14_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM14_RESET, 0x00000000
.equ	PIO_INSTR_MEM14_MSB, 15
.equ	PIO_INSTR_MEM14_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM15
# Description : Write-only access to instruction memory location 15
.equ	PIO_INSTR_MEM15_OFFSET, 0x00000084
.equ	PIO_INSTR_MEM15_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM15_RESET, 0x00000000
.equ	PIO_INSTR_MEM15_MSB, 15
.equ	PIO_INSTR_MEM15_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM16
# Description : Write-only access to instruction memory location 16
.equ	PIO_INSTR_MEM16_OFFSET, 0x00000088
.equ	PIO_INSTR_MEM16_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM16_RESET, 0x00000000
.equ	PIO_INSTR_MEM16_MSB, 15
.equ	PIO_INSTR_MEM16_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM17
# Description : Write-only access to instruction memory location 17
.equ	PIO_INSTR_MEM17_OFFSET, 0x0000008c
.equ	PIO_INSTR_MEM17_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM17_RESET, 0x00000000
.equ	PIO_INSTR_MEM17_MSB, 15
.equ	PIO_INSTR_MEM17_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM18
# Description : Write-only access to instruction memory location 18
.equ	PIO_INSTR_MEM18_OFFSET, 0x00000090
.equ	PIO_INSTR_MEM18_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM18_RESET, 0x00000000
.equ	PIO_INSTR_MEM18_MSB, 15
.equ	PIO_INSTR_MEM18_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM19
# Description : Write-only access to instruction memory location 19
.equ	PIO_INSTR_MEM19_OFFSET, 0x00000094
.equ	PIO_INSTR_MEM19_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM19_RESET, 0x00000000
.equ	PIO_INSTR_MEM19_MSB, 15
.equ	PIO_INSTR_MEM19_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM20
# Description : Write-only access to instruction memory location 20
.equ	PIO_INSTR_MEM20_OFFSET, 0x00000098
.equ	PIO_INSTR_MEM20_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM20_RESET, 0x00000000
.equ	PIO_INSTR_MEM20_MSB, 15
.equ	PIO_INSTR_MEM20_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM21
# Description : Write-only access to instruction memory location 21
.equ	PIO_INSTR_MEM21_OFFSET, 0x0000009c
.equ	PIO_INSTR_MEM21_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM21_RESET, 0x00000000
.equ	PIO_INSTR_MEM21_MSB, 15
.equ	PIO_INSTR_MEM21_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM22
# Description : Write-only access to instruction memory location 22
.equ	PIO_INSTR_MEM22_OFFSET, 0x000000a0
.equ	PIO_INSTR_MEM22_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM22_RESET, 0x00000000
.equ	PIO_INSTR_MEM22_MSB, 15
.equ	PIO_INSTR_MEM22_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM23
# Description : Write-only access to instruction memory location 23
.equ	PIO_INSTR_MEM23_OFFSET, 0x000000a4
.equ	PIO_INSTR_MEM23_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM23_RESET, 0x00000000
.equ	PIO_INSTR_MEM23_MSB, 15
.equ	PIO_INSTR_MEM23_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM24
# Description : Write-only access to instruction memory location 24
.equ	PIO_INSTR_MEM24_OFFSET, 0x000000a8
.equ	PIO_INSTR_MEM24_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM24_RESET, 0x00000000
.equ	PIO_INSTR_MEM24_MSB, 15
.equ	PIO_INSTR_MEM24_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM25
# Description : Write-only access to instruction memory location 25
.equ	PIO_INSTR_MEM25_OFFSET, 0x000000ac
.equ	PIO_INSTR_MEM25_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM25_RESET, 0x00000000
.equ	PIO_INSTR_MEM25_MSB, 15
.equ	PIO_INSTR_MEM25_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM26
# Description : Write-only access to instruction memory location 26
.equ	PIO_INSTR_MEM26_OFFSET, 0x000000b0
.equ	PIO_INSTR_MEM26_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM26_RESET, 0x00000000
.equ	PIO_INSTR_MEM26_MSB, 15
.equ	PIO_INSTR_MEM26_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM27
# Description : Write-only access to instruction memory location 27
.equ	PIO_INSTR_MEM27_OFFSET, 0x000000b4
.equ	PIO_INSTR_MEM27_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM27_RESET, 0x00000000
.equ	PIO_INSTR_MEM27_MSB, 15
.equ	PIO_INSTR_MEM27_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM28
# Description : Write-only access to instruction memory location 28
.equ	PIO_INSTR_MEM28_OFFSET, 0x000000b8
.equ	PIO_INSTR_MEM28_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM28_RESET, 0x00000000
.equ	PIO_INSTR_MEM28_MSB, 15
.equ	PIO_INSTR_MEM28_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM29
# Description : Write-only access to instruction memory location 29
.equ	PIO_INSTR_MEM29_OFFSET, 0x000000bc
.equ	PIO_INSTR_MEM29_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM29_RESET, 0x00000000
.equ	PIO_INSTR_MEM29_MSB, 15
.equ	PIO_INSTR_MEM29_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM30
# Description : Write-only access to instruction memory location 30
.equ	PIO_INSTR_MEM30_OFFSET, 0x000000c0
.equ	PIO_INSTR_MEM30_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM30_RESET, 0x00000000
.equ	PIO_INSTR_MEM30_MSB, 15
.equ	PIO_INSTR_MEM30_LSB, 0
# =============================================================================
# Register    : PIO_INSTR_MEM31
# Description : Write-only access to instruction memory location 31
.equ	PIO_INSTR_MEM31_OFFSET, 0x000000c4
.equ	PIO_INSTR_MEM31_BITS, 0x0000ffff
.equ	PIO_INSTR_MEM31_RESET, 0x00000000
.equ	PIO_INSTR_MEM31_MSB, 15
.equ	PIO_INSTR_MEM31_LSB, 0
# =============================================================================
# Register    : PIO_SM0_CLKDIV
# Description : Clock divisor register for state machine 0
#               Frequency = clock freq / (CLKDIV_INT + CLKDIV_FRAC / 256)
.equ	PIO_SM0_CLKDIV_OFFSET, 0x000000c8
.equ	PIO_SM0_CLKDIV_BITS, 0xffffff00
.equ	PIO_SM0_CLKDIV_RESET, 0x00010000
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_CLKDIV_INT
# Description : Effective frequency is sysclk/(int + frac/256).
#               Value of 0 is interpreted as 65536. If INT is 0, FRAC must also
#               be 0.
.equ	PIO_SM0_CLKDIV_INT_RESET, 0x0001
.equ	PIO_SM0_CLKDIV_INT_BITS, 0xffff0000
.equ	PIO_SM0_CLKDIV_INT_MSB, 31
.equ	PIO_SM0_CLKDIV_INT_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_CLKDIV_FRAC
# Description : Fractional part of clock divisor
.equ	PIO_SM0_CLKDIV_FRAC_RESET, 0x00
.equ	PIO_SM0_CLKDIV_FRAC_BITS, 0x0000ff00
.equ	PIO_SM0_CLKDIV_FRAC_MSB, 15
.equ	PIO_SM0_CLKDIV_FRAC_LSB, 8
# =============================================================================
# Register    : PIO_SM0_EXECCTRL
# Description : Execution/behavioural settings for state machine 0
.equ	PIO_SM0_EXECCTRL_OFFSET, 0x000000cc
.equ	PIO_SM0_EXECCTRL_BITS, 0xffffffff
.equ	PIO_SM0_EXECCTRL_RESET, 0x0001f000
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_EXECCTRL_EXEC_STALLED
# Description : If 1, an instruction written to SMx_INSTR is stalled, and
#               latched by the state machine. Will clear to 0 once this
#               instruction completes.
.equ	PIO_SM0_EXECCTRL_EXEC_STALLED_RESET, 0x0
.equ	PIO_SM0_EXECCTRL_EXEC_STALLED_BITS, 0x80000000
.equ	PIO_SM0_EXECCTRL_EXEC_STALLED_MSB, 31
.equ	PIO_SM0_EXECCTRL_EXEC_STALLED_LSB, 31
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_EXECCTRL_SIDE_EN
# Description : If 1, the MSB of the Delay/Side-set instruction field is used
#               as side-set enable, rather than a side-set data bit. This
#               allows instructions to perform side-set optionally, rather than
#               on every instruction, but the maximum possible side-set width
#               is reduced from 5 to 4. Note that the value of
#               PINCTRL_SIDESET_COUNT is inclusive of this enable bit.
.equ	PIO_SM0_EXECCTRL_SIDE_EN_RESET, 0x0
.equ	PIO_SM0_EXECCTRL_SIDE_EN_BITS, 0x40000000
.equ	PIO_SM0_EXECCTRL_SIDE_EN_MSB, 30
.equ	PIO_SM0_EXECCTRL_SIDE_EN_LSB, 30
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_EXECCTRL_SIDE_PINDIR
# Description : If 1, side-set data is asserted to pin directions, instead of
#               pin values
.equ	PIO_SM0_EXECCTRL_SIDE_PINDIR_RESET, 0x0
.equ	PIO_SM0_EXECCTRL_SIDE_PINDIR_BITS, 0x20000000
.equ	PIO_SM0_EXECCTRL_SIDE_PINDIR_MSB, 29
.equ	PIO_SM0_EXECCTRL_SIDE_PINDIR_LSB, 29
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_EXECCTRL_JMP_PIN
# Description : The GPIO number to use as condition for JMP PIN. Unaffected by
#               input mapping.
.equ	PIO_SM0_EXECCTRL_JMP_PIN_RESET, 0x00
.equ	PIO_SM0_EXECCTRL_JMP_PIN_BITS, 0x1f000000
.equ	PIO_SM0_EXECCTRL_JMP_PIN_MSB, 28
.equ	PIO_SM0_EXECCTRL_JMP_PIN_LSB, 24
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_EXECCTRL_OUT_EN_SEL
# Description : Which data bit to use for inline OUT enable
.equ	PIO_SM0_EXECCTRL_OUT_EN_SEL_RESET, 0x00
.equ	PIO_SM0_EXECCTRL_OUT_EN_SEL_BITS, 0x00f80000
.equ	PIO_SM0_EXECCTRL_OUT_EN_SEL_MSB, 23
.equ	PIO_SM0_EXECCTRL_OUT_EN_SEL_LSB, 19
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_EXECCTRL_INLINE_OUT_EN
# Description : If 1, use a bit of OUT data as an auxiliary write enable
#               When used in conjunction with OUT_STICKY, writes with an enable
#               of 0 will
#               deassert the latest pin write. This can create useful
#               masking/override behaviour
#               due to the priority ordering of state machine pin writes (SM0 <
#               SM1 < ...)
.equ	PIO_SM0_EXECCTRL_INLINE_OUT_EN_RESET, 0x0
.equ	PIO_SM0_EXECCTRL_INLINE_OUT_EN_BITS, 0x00040000
.equ	PIO_SM0_EXECCTRL_INLINE_OUT_EN_MSB, 18
.equ	PIO_SM0_EXECCTRL_INLINE_OUT_EN_LSB, 18
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_EXECCTRL_OUT_STICKY
# Description : Continuously assert the most recent OUT/SET to the pins
.equ	PIO_SM0_EXECCTRL_OUT_STICKY_RESET, 0x0
.equ	PIO_SM0_EXECCTRL_OUT_STICKY_BITS, 0x00020000
.equ	PIO_SM0_EXECCTRL_OUT_STICKY_MSB, 17
.equ	PIO_SM0_EXECCTRL_OUT_STICKY_LSB, 17
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_EXECCTRL_WRAP_TOP
# Description : After reaching this address, execution is wrapped to
#               wrap_bottom.
#               If the instruction is a jump, and the jump condition is true,
#               the jump takes priority.
.equ	PIO_SM0_EXECCTRL_WRAP_TOP_RESET, 0x1f
.equ	PIO_SM0_EXECCTRL_WRAP_TOP_BITS, 0x0001f000
.equ	PIO_SM0_EXECCTRL_WRAP_TOP_MSB, 16
.equ	PIO_SM0_EXECCTRL_WRAP_TOP_LSB, 12
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_EXECCTRL_WRAP_BOTTOM
# Description : After reaching wrap_top, execution is wrapped to this address.
.equ	PIO_SM0_EXECCTRL_WRAP_BOTTOM_RESET, 0x00
.equ	PIO_SM0_EXECCTRL_WRAP_BOTTOM_BITS, 0x00000f80
.equ	PIO_SM0_EXECCTRL_WRAP_BOTTOM_MSB, 11
.equ	PIO_SM0_EXECCTRL_WRAP_BOTTOM_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_EXECCTRL_STATUS_SEL
# Description : Comparison used for the MOV x, STATUS instruction.
#               0x0 -> All-ones if TX FIFO level < N, otherwise all-zeroes
#               0x1 -> All-ones if RX FIFO level < N, otherwise all-zeroes
#               0x2 -> All-ones if the indexed IRQ flag is raised, otherwise all-zeroes
.equ	PIO_SM0_EXECCTRL_STATUS_SEL_RESET, 0x0
.equ	PIO_SM0_EXECCTRL_STATUS_SEL_BITS, 0x00000060
.equ	PIO_SM0_EXECCTRL_STATUS_SEL_MSB, 6
.equ	PIO_SM0_EXECCTRL_STATUS_SEL_LSB, 5
.equ	PIO_SM0_EXECCTRL_STATUS_SEL_VALUE_TXLEVEL, 0x0
.equ	PIO_SM0_EXECCTRL_STATUS_SEL_VALUE_RXLEVEL, 0x1
.equ	PIO_SM0_EXECCTRL_STATUS_SEL_VALUE_IRQ, 0x2
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_EXECCTRL_STATUS_N
# Description : Comparison level or IRQ index for the MOV x, STATUS
#               instruction.
#
#               If STATUS_SEL is TXLEVEL or RXLEVEL, then values of STATUS_N
#               greater than the current FIFO depth are reserved, and have
#               undefined behaviour.
#               0x00 -> Index 0-7 of an IRQ flag in this PIO block
#               0x08 -> Index 0-7 of an IRQ flag in the next lower-numbered PIO block
#               0x10 -> Index 0-7 of an IRQ flag in the next higher-numbered PIO block
.equ	PIO_SM0_EXECCTRL_STATUS_N_RESET, 0x00
.equ	PIO_SM0_EXECCTRL_STATUS_N_BITS, 0x0000001f
.equ	PIO_SM0_EXECCTRL_STATUS_N_MSB, 4
.equ	PIO_SM0_EXECCTRL_STATUS_N_LSB, 0
.equ	PIO_SM0_EXECCTRL_STATUS_N_VALUE_IRQ, 0x00
.equ	PIO_SM0_EXECCTRL_STATUS_N_VALUE_IRQ_PREVPIO, 0x08
.equ	PIO_SM0_EXECCTRL_STATUS_N_VALUE_IRQ_NEXTPIO, 0x10
# =============================================================================
# Register    : PIO_SM0_SHIFTCTRL
# Description : Control behaviour of the input/output shift registers for state
#               machine 0
.equ	PIO_SM0_SHIFTCTRL_OFFSET, 0x000000d0
.equ	PIO_SM0_SHIFTCTRL_BITS, 0xffffc01f
.equ	PIO_SM0_SHIFTCTRL_RESET, 0x000c0000
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_SHIFTCTRL_FJOIN_RX
# Description : When 1, RX FIFO steals the TX FIFO's storage, and becomes twice
#               as deep.
#               TX FIFO is disabled as a result (always reads as both full and
#               empty).
#               FIFOs are flushed when this bit is changed.
.equ	PIO_SM0_SHIFTCTRL_FJOIN_RX_RESET, 0x0
.equ	PIO_SM0_SHIFTCTRL_FJOIN_RX_BITS, 0x80000000
.equ	PIO_SM0_SHIFTCTRL_FJOIN_RX_MSB, 31
.equ	PIO_SM0_SHIFTCTRL_FJOIN_RX_LSB, 31
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_SHIFTCTRL_FJOIN_TX
# Description : When 1, TX FIFO steals the RX FIFO's storage, and becomes twice
#               as deep.
#               RX FIFO is disabled as a result (always reads as both full and
#               empty).
#               FIFOs are flushed when this bit is changed.
.equ	PIO_SM0_SHIFTCTRL_FJOIN_TX_RESET, 0x0
.equ	PIO_SM0_SHIFTCTRL_FJOIN_TX_BITS, 0x40000000
.equ	PIO_SM0_SHIFTCTRL_FJOIN_TX_MSB, 30
.equ	PIO_SM0_SHIFTCTRL_FJOIN_TX_LSB, 30
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_SHIFTCTRL_PULL_THRESH
# Description : Number of bits shifted out of OSR before autopull, or
#               conditional pull (PULL IFEMPTY), will take place.
#               Write 0 for value of 32.
.equ	PIO_SM0_SHIFTCTRL_PULL_THRESH_RESET, 0x00
.equ	PIO_SM0_SHIFTCTRL_PULL_THRESH_BITS, 0x3e000000
.equ	PIO_SM0_SHIFTCTRL_PULL_THRESH_MSB, 29
.equ	PIO_SM0_SHIFTCTRL_PULL_THRESH_LSB, 25
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_SHIFTCTRL_PUSH_THRESH
# Description : Number of bits shifted into ISR before autopush, or conditional
#               push (PUSH IFFULL), will take place.
#               Write 0 for value of 32.
.equ	PIO_SM0_SHIFTCTRL_PUSH_THRESH_RESET, 0x00
.equ	PIO_SM0_SHIFTCTRL_PUSH_THRESH_BITS, 0x01f00000
.equ	PIO_SM0_SHIFTCTRL_PUSH_THRESH_MSB, 24
.equ	PIO_SM0_SHIFTCTRL_PUSH_THRESH_LSB, 20
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_SHIFTCTRL_OUT_SHIFTDIR
# Description : 1 = shift out of output shift register to right. 0 = to left.
.equ	PIO_SM0_SHIFTCTRL_OUT_SHIFTDIR_RESET, 0x1
.equ	PIO_SM0_SHIFTCTRL_OUT_SHIFTDIR_BITS, 0x00080000
.equ	PIO_SM0_SHIFTCTRL_OUT_SHIFTDIR_MSB, 19
.equ	PIO_SM0_SHIFTCTRL_OUT_SHIFTDIR_LSB, 19
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_SHIFTCTRL_IN_SHIFTDIR
# Description : 1 = shift input shift register to right (data enters from
#               left). 0 = to left.
.equ	PIO_SM0_SHIFTCTRL_IN_SHIFTDIR_RESET, 0x1
.equ	PIO_SM0_SHIFTCTRL_IN_SHIFTDIR_BITS, 0x00040000
.equ	PIO_SM0_SHIFTCTRL_IN_SHIFTDIR_MSB, 18
.equ	PIO_SM0_SHIFTCTRL_IN_SHIFTDIR_LSB, 18
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_SHIFTCTRL_AUTOPULL
# Description : Pull automatically when the output shift register is emptied,
#               i.e. on or following an OUT instruction which causes the output
#               shift counter to reach or exceed PULL_THRESH.
.equ	PIO_SM0_SHIFTCTRL_AUTOPULL_RESET, 0x0
.equ	PIO_SM0_SHIFTCTRL_AUTOPULL_BITS, 0x00020000
.equ	PIO_SM0_SHIFTCTRL_AUTOPULL_MSB, 17
.equ	PIO_SM0_SHIFTCTRL_AUTOPULL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_SHIFTCTRL_AUTOPUSH
# Description : Push automatically when the input shift register is filled,
#               i.e. on an IN instruction which causes the input shift counter
#               to reach or exceed PUSH_THRESH.
.equ	PIO_SM0_SHIFTCTRL_AUTOPUSH_RESET, 0x0
.equ	PIO_SM0_SHIFTCTRL_AUTOPUSH_BITS, 0x00010000
.equ	PIO_SM0_SHIFTCTRL_AUTOPUSH_MSB, 16
.equ	PIO_SM0_SHIFTCTRL_AUTOPUSH_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_SHIFTCTRL_FJOIN_RX_PUT
# Description : If 1, disable this state machine's RX FIFO, make its storage
#               available for random write access by the state machine (using
#               the `put` instruction) and, unless FJOIN_RX_GET is also set,
#               random read access by the processor (through the RXFx_PUTGETy
#               registers).
#
#               If FJOIN_RX_PUT and FJOIN_RX_GET are both set, then the RX
#               FIFO's registers can be randomly read/written by the state
#               machine, but are completely inaccessible to the processor.
#
#               Setting this bit will clear the FJOIN_TX and FJOIN_RX bits.
.equ	PIO_SM0_SHIFTCTRL_FJOIN_RX_PUT_RESET, 0x0
.equ	PIO_SM0_SHIFTCTRL_FJOIN_RX_PUT_BITS, 0x00008000
.equ	PIO_SM0_SHIFTCTRL_FJOIN_RX_PUT_MSB, 15
.equ	PIO_SM0_SHIFTCTRL_FJOIN_RX_PUT_LSB, 15
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_SHIFTCTRL_FJOIN_RX_GET
# Description : If 1, disable this state machine's RX FIFO, make its storage
#               available for random read access by the state machine (using
#               the `get` instruction) and, unless FJOIN_RX_PUT is also set,
#               random write access by the processor (through the RXFx_PUTGETy
#               registers).
#
#               If FJOIN_RX_PUT and FJOIN_RX_GET are both set, then the RX
#               FIFO's registers can be randomly read/written by the state
#               machine, but are completely inaccessible to the processor.
#
#               Setting this bit will clear the FJOIN_TX and FJOIN_RX bits.
.equ	PIO_SM0_SHIFTCTRL_FJOIN_RX_GET_RESET, 0x0
.equ	PIO_SM0_SHIFTCTRL_FJOIN_RX_GET_BITS, 0x00004000
.equ	PIO_SM0_SHIFTCTRL_FJOIN_RX_GET_MSB, 14
.equ	PIO_SM0_SHIFTCTRL_FJOIN_RX_GET_LSB, 14
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_SHIFTCTRL_IN_COUNT
# Description : Set the number of pins which are not masked to 0 when read by
#               an IN PINS, WAIT PIN or MOV x, PINS instruction.
#
#               For example, an IN_COUNT of 5 means that the 5 LSBs of the IN
#               pin group are visible (bits 4:0), but the remaining 27 MSBs are
#               masked to 0. A count of 32 is encoded with a field value of 0,
#               so the default behaviour is to not perform any masking.
#
#               Note this masking is applied in addition to the masking usually
#               performed by the IN instruction. This is mainly useful for the
#               MOV x, PINS instruction, which otherwise has no way of masking
#               pins.
.equ	PIO_SM0_SHIFTCTRL_IN_COUNT_RESET, 0x00
.equ	PIO_SM0_SHIFTCTRL_IN_COUNT_BITS, 0x0000001f
.equ	PIO_SM0_SHIFTCTRL_IN_COUNT_MSB, 4
.equ	PIO_SM0_SHIFTCTRL_IN_COUNT_LSB, 0
# =============================================================================
# Register    : PIO_SM0_ADDR
# Description : Current instruction address of state machine 0
.equ	PIO_SM0_ADDR_OFFSET, 0x000000d4
.equ	PIO_SM0_ADDR_BITS, 0x0000001f
.equ	PIO_SM0_ADDR_RESET, 0x00000000
.equ	PIO_SM0_ADDR_MSB, 4
.equ	PIO_SM0_ADDR_LSB, 0
# =============================================================================
# Register    : PIO_SM0_INSTR
# Description : Read to see the instruction currently addressed by state
#               machine 0's program counter
#               Write to execute an instruction immediately (including jumps)
#               and then resume execution.
.equ	PIO_SM0_INSTR_OFFSET, 0x000000d8
.equ	PIO_SM0_INSTR_BITS, 0x0000ffff
.equ	PIO_SM0_INSTR_MSB, 15
.equ	PIO_SM0_INSTR_LSB, 0
# =============================================================================
# Register    : PIO_SM0_PINCTRL
# Description : State machine pin control
.equ	PIO_SM0_PINCTRL_OFFSET, 0x000000dc
.equ	PIO_SM0_PINCTRL_BITS, 0xffffffff
.equ	PIO_SM0_PINCTRL_RESET, 0x14000000
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_PINCTRL_SIDESET_COUNT
# Description : The number of MSBs of the Delay/Side-set instruction field
#               which are used for side-set. Inclusive of the enable bit, if
#               present. Minimum of 0 (all delay bits, no side-set) and maximum
#               of 5 (all side-set, no delay).
.equ	PIO_SM0_PINCTRL_SIDESET_COUNT_RESET, 0x0
.equ	PIO_SM0_PINCTRL_SIDESET_COUNT_BITS, 0xe0000000
.equ	PIO_SM0_PINCTRL_SIDESET_COUNT_MSB, 31
.equ	PIO_SM0_PINCTRL_SIDESET_COUNT_LSB, 29
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_PINCTRL_SET_COUNT
# Description : The number of pins asserted by a SET. In the range 0 to 5
#               inclusive.
.equ	PIO_SM0_PINCTRL_SET_COUNT_RESET, 0x5
.equ	PIO_SM0_PINCTRL_SET_COUNT_BITS, 0x1c000000
.equ	PIO_SM0_PINCTRL_SET_COUNT_MSB, 28
.equ	PIO_SM0_PINCTRL_SET_COUNT_LSB, 26
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_PINCTRL_OUT_COUNT
# Description : The number of pins asserted by an OUT PINS, OUT PINDIRS or MOV
#               PINS instruction. In the range 0 to 32 inclusive.
.equ	PIO_SM0_PINCTRL_OUT_COUNT_RESET, 0x00
.equ	PIO_SM0_PINCTRL_OUT_COUNT_BITS, 0x03f00000
.equ	PIO_SM0_PINCTRL_OUT_COUNT_MSB, 25
.equ	PIO_SM0_PINCTRL_OUT_COUNT_LSB, 20
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_PINCTRL_IN_BASE
# Description : The pin which is mapped to the least-significant bit of a state
#               machine's IN data bus. Higher-numbered pins are mapped to
#               consecutively more-significant data bits, with a modulo of 32
#               applied to pin number.
.equ	PIO_SM0_PINCTRL_IN_BASE_RESET, 0x00
.equ	PIO_SM0_PINCTRL_IN_BASE_BITS, 0x000f8000
.equ	PIO_SM0_PINCTRL_IN_BASE_MSB, 19
.equ	PIO_SM0_PINCTRL_IN_BASE_LSB, 15
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_PINCTRL_SIDESET_BASE
# Description : The lowest-numbered pin that will be affected by a side-set
#               operation. The MSBs of an instruction's side-set/delay field
#               (up to 5, determined by SIDESET_COUNT) are used for side-set
#               data, with the remaining LSBs used for delay. The least-
#               significant bit of the side-set portion is the bit written to
#               this pin, with more-significant bits written to higher-numbered
#               pins.
.equ	PIO_SM0_PINCTRL_SIDESET_BASE_RESET, 0x00
.equ	PIO_SM0_PINCTRL_SIDESET_BASE_BITS, 0x00007c00
.equ	PIO_SM0_PINCTRL_SIDESET_BASE_MSB, 14
.equ	PIO_SM0_PINCTRL_SIDESET_BASE_LSB, 10
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_PINCTRL_SET_BASE
# Description : The lowest-numbered pin that will be affected by a SET PINS or
#               SET PINDIRS instruction. The data written to this pin is the
#               least-significant bit of the SET data.
.equ	PIO_SM0_PINCTRL_SET_BASE_RESET, 0x00
.equ	PIO_SM0_PINCTRL_SET_BASE_BITS, 0x000003e0
.equ	PIO_SM0_PINCTRL_SET_BASE_MSB, 9
.equ	PIO_SM0_PINCTRL_SET_BASE_LSB, 5
# -----------------------------------------------------------------------------
# Field       : PIO_SM0_PINCTRL_OUT_BASE
# Description : The lowest-numbered pin that will be affected by an OUT PINS,
#               OUT PINDIRS or MOV PINS instruction. The data written to this
#               pin will always be the least-significant bit of the OUT or MOV
#               data.
.equ	PIO_SM0_PINCTRL_OUT_BASE_RESET, 0x00
.equ	PIO_SM0_PINCTRL_OUT_BASE_BITS, 0x0000001f
.equ	PIO_SM0_PINCTRL_OUT_BASE_MSB, 4
.equ	PIO_SM0_PINCTRL_OUT_BASE_LSB, 0
# =============================================================================
# Register    : PIO_SM1_CLKDIV
# Description : Clock divisor register for state machine 1
#               Frequency = clock freq / (CLKDIV_INT + CLKDIV_FRAC / 256)
.equ	PIO_SM1_CLKDIV_OFFSET, 0x000000e0
.equ	PIO_SM1_CLKDIV_BITS, 0xffffff00
.equ	PIO_SM1_CLKDIV_RESET, 0x00010000
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_CLKDIV_INT
# Description : Effective frequency is sysclk/(int + frac/256).
#               Value of 0 is interpreted as 65536. If INT is 0, FRAC must also
#               be 0.
.equ	PIO_SM1_CLKDIV_INT_RESET, 0x0001
.equ	PIO_SM1_CLKDIV_INT_BITS, 0xffff0000
.equ	PIO_SM1_CLKDIV_INT_MSB, 31
.equ	PIO_SM1_CLKDIV_INT_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_CLKDIV_FRAC
# Description : Fractional part of clock divisor
.equ	PIO_SM1_CLKDIV_FRAC_RESET, 0x00
.equ	PIO_SM1_CLKDIV_FRAC_BITS, 0x0000ff00
.equ	PIO_SM1_CLKDIV_FRAC_MSB, 15
.equ	PIO_SM1_CLKDIV_FRAC_LSB, 8
# =============================================================================
# Register    : PIO_SM1_EXECCTRL
# Description : Execution/behavioural settings for state machine 1
.equ	PIO_SM1_EXECCTRL_OFFSET, 0x000000e4
.equ	PIO_SM1_EXECCTRL_BITS, 0xffffffff
.equ	PIO_SM1_EXECCTRL_RESET, 0x0001f000
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_EXECCTRL_EXEC_STALLED
# Description : If 1, an instruction written to SMx_INSTR is stalled, and
#               latched by the state machine. Will clear to 0 once this
#               instruction completes.
.equ	PIO_SM1_EXECCTRL_EXEC_STALLED_RESET, 0x0
.equ	PIO_SM1_EXECCTRL_EXEC_STALLED_BITS, 0x80000000
.equ	PIO_SM1_EXECCTRL_EXEC_STALLED_MSB, 31
.equ	PIO_SM1_EXECCTRL_EXEC_STALLED_LSB, 31
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_EXECCTRL_SIDE_EN
# Description : If 1, the MSB of the Delay/Side-set instruction field is used
#               as side-set enable, rather than a side-set data bit. This
#               allows instructions to perform side-set optionally, rather than
#               on every instruction, but the maximum possible side-set width
#               is reduced from 5 to 4. Note that the value of
#               PINCTRL_SIDESET_COUNT is inclusive of this enable bit.
.equ	PIO_SM1_EXECCTRL_SIDE_EN_RESET, 0x0
.equ	PIO_SM1_EXECCTRL_SIDE_EN_BITS, 0x40000000
.equ	PIO_SM1_EXECCTRL_SIDE_EN_MSB, 30
.equ	PIO_SM1_EXECCTRL_SIDE_EN_LSB, 30
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_EXECCTRL_SIDE_PINDIR
# Description : If 1, side-set data is asserted to pin directions, instead of
#               pin values
.equ	PIO_SM1_EXECCTRL_SIDE_PINDIR_RESET, 0x0
.equ	PIO_SM1_EXECCTRL_SIDE_PINDIR_BITS, 0x20000000
.equ	PIO_SM1_EXECCTRL_SIDE_PINDIR_MSB, 29
.equ	PIO_SM1_EXECCTRL_SIDE_PINDIR_LSB, 29
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_EXECCTRL_JMP_PIN
# Description : The GPIO number to use as condition for JMP PIN. Unaffected by
#               input mapping.
.equ	PIO_SM1_EXECCTRL_JMP_PIN_RESET, 0x00
.equ	PIO_SM1_EXECCTRL_JMP_PIN_BITS, 0x1f000000
.equ	PIO_SM1_EXECCTRL_JMP_PIN_MSB, 28
.equ	PIO_SM1_EXECCTRL_JMP_PIN_LSB, 24
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_EXECCTRL_OUT_EN_SEL
# Description : Which data bit to use for inline OUT enable
.equ	PIO_SM1_EXECCTRL_OUT_EN_SEL_RESET, 0x00
.equ	PIO_SM1_EXECCTRL_OUT_EN_SEL_BITS, 0x00f80000
.equ	PIO_SM1_EXECCTRL_OUT_EN_SEL_MSB, 23
.equ	PIO_SM1_EXECCTRL_OUT_EN_SEL_LSB, 19
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_EXECCTRL_INLINE_OUT_EN
# Description : If 1, use a bit of OUT data as an auxiliary write enable
#               When used in conjunction with OUT_STICKY, writes with an enable
#               of 0 will
#               deassert the latest pin write. This can create useful
#               masking/override behaviour
#               due to the priority ordering of state machine pin writes (SM0 <
#               SM1 < ...)
.equ	PIO_SM1_EXECCTRL_INLINE_OUT_EN_RESET, 0x0
.equ	PIO_SM1_EXECCTRL_INLINE_OUT_EN_BITS, 0x00040000
.equ	PIO_SM1_EXECCTRL_INLINE_OUT_EN_MSB, 18
.equ	PIO_SM1_EXECCTRL_INLINE_OUT_EN_LSB, 18
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_EXECCTRL_OUT_STICKY
# Description : Continuously assert the most recent OUT/SET to the pins
.equ	PIO_SM1_EXECCTRL_OUT_STICKY_RESET, 0x0
.equ	PIO_SM1_EXECCTRL_OUT_STICKY_BITS, 0x00020000
.equ	PIO_SM1_EXECCTRL_OUT_STICKY_MSB, 17
.equ	PIO_SM1_EXECCTRL_OUT_STICKY_LSB, 17
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_EXECCTRL_WRAP_TOP
# Description : After reaching this address, execution is wrapped to
#               wrap_bottom.
#               If the instruction is a jump, and the jump condition is true,
#               the jump takes priority.
.equ	PIO_SM1_EXECCTRL_WRAP_TOP_RESET, 0x1f
.equ	PIO_SM1_EXECCTRL_WRAP_TOP_BITS, 0x0001f000
.equ	PIO_SM1_EXECCTRL_WRAP_TOP_MSB, 16
.equ	PIO_SM1_EXECCTRL_WRAP_TOP_LSB, 12
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_EXECCTRL_WRAP_BOTTOM
# Description : After reaching wrap_top, execution is wrapped to this address.
.equ	PIO_SM1_EXECCTRL_WRAP_BOTTOM_RESET, 0x00
.equ	PIO_SM1_EXECCTRL_WRAP_BOTTOM_BITS, 0x00000f80
.equ	PIO_SM1_EXECCTRL_WRAP_BOTTOM_MSB, 11
.equ	PIO_SM1_EXECCTRL_WRAP_BOTTOM_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_EXECCTRL_STATUS_SEL
# Description : Comparison used for the MOV x, STATUS instruction.
#               0x0 -> All-ones if TX FIFO level < N, otherwise all-zeroes
#               0x1 -> All-ones if RX FIFO level < N, otherwise all-zeroes
#               0x2 -> All-ones if the indexed IRQ flag is raised, otherwise all-zeroes
.equ	PIO_SM1_EXECCTRL_STATUS_SEL_RESET, 0x0
.equ	PIO_SM1_EXECCTRL_STATUS_SEL_BITS, 0x00000060
.equ	PIO_SM1_EXECCTRL_STATUS_SEL_MSB, 6
.equ	PIO_SM1_EXECCTRL_STATUS_SEL_LSB, 5
.equ	PIO_SM1_EXECCTRL_STATUS_SEL_VALUE_TXLEVEL, 0x0
.equ	PIO_SM1_EXECCTRL_STATUS_SEL_VALUE_RXLEVEL, 0x1
.equ	PIO_SM1_EXECCTRL_STATUS_SEL_VALUE_IRQ, 0x2
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_EXECCTRL_STATUS_N
# Description : Comparison level or IRQ index for the MOV x, STATUS
#               instruction.
#
#               If STATUS_SEL is TXLEVEL or RXLEVEL, then values of STATUS_N
#               greater than the current FIFO depth are reserved, and have
#               undefined behaviour.
#               0x00 -> Index 0-7 of an IRQ flag in this PIO block
#               0x08 -> Index 0-7 of an IRQ flag in the next lower-numbered PIO block
#               0x10 -> Index 0-7 of an IRQ flag in the next higher-numbered PIO block
.equ	PIO_SM1_EXECCTRL_STATUS_N_RESET, 0x00
.equ	PIO_SM1_EXECCTRL_STATUS_N_BITS, 0x0000001f
.equ	PIO_SM1_EXECCTRL_STATUS_N_MSB, 4
.equ	PIO_SM1_EXECCTRL_STATUS_N_LSB, 0
.equ	PIO_SM1_EXECCTRL_STATUS_N_VALUE_IRQ, 0x00
.equ	PIO_SM1_EXECCTRL_STATUS_N_VALUE_IRQ_PREVPIO, 0x08
.equ	PIO_SM1_EXECCTRL_STATUS_N_VALUE_IRQ_NEXTPIO, 0x10
# =============================================================================
# Register    : PIO_SM1_SHIFTCTRL
# Description : Control behaviour of the input/output shift registers for state
#               machine 1
.equ	PIO_SM1_SHIFTCTRL_OFFSET, 0x000000e8
.equ	PIO_SM1_SHIFTCTRL_BITS, 0xffffc01f
.equ	PIO_SM1_SHIFTCTRL_RESET, 0x000c0000
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_SHIFTCTRL_FJOIN_RX
# Description : When 1, RX FIFO steals the TX FIFO's storage, and becomes twice
#               as deep.
#               TX FIFO is disabled as a result (always reads as both full and
#               empty).
#               FIFOs are flushed when this bit is changed.
.equ	PIO_SM1_SHIFTCTRL_FJOIN_RX_RESET, 0x0
.equ	PIO_SM1_SHIFTCTRL_FJOIN_RX_BITS, 0x80000000
.equ	PIO_SM1_SHIFTCTRL_FJOIN_RX_MSB, 31
.equ	PIO_SM1_SHIFTCTRL_FJOIN_RX_LSB, 31
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_SHIFTCTRL_FJOIN_TX
# Description : When 1, TX FIFO steals the RX FIFO's storage, and becomes twice
#               as deep.
#               RX FIFO is disabled as a result (always reads as both full and
#               empty).
#               FIFOs are flushed when this bit is changed.
.equ	PIO_SM1_SHIFTCTRL_FJOIN_TX_RESET, 0x0
.equ	PIO_SM1_SHIFTCTRL_FJOIN_TX_BITS, 0x40000000
.equ	PIO_SM1_SHIFTCTRL_FJOIN_TX_MSB, 30
.equ	PIO_SM1_SHIFTCTRL_FJOIN_TX_LSB, 30
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_SHIFTCTRL_PULL_THRESH
# Description : Number of bits shifted out of OSR before autopull, or
#               conditional pull (PULL IFEMPTY), will take place.
#               Write 0 for value of 32.
.equ	PIO_SM1_SHIFTCTRL_PULL_THRESH_RESET, 0x00
.equ	PIO_SM1_SHIFTCTRL_PULL_THRESH_BITS, 0x3e000000
.equ	PIO_SM1_SHIFTCTRL_PULL_THRESH_MSB, 29
.equ	PIO_SM1_SHIFTCTRL_PULL_THRESH_LSB, 25
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_SHIFTCTRL_PUSH_THRESH
# Description : Number of bits shifted into ISR before autopush, or conditional
#               push (PUSH IFFULL), will take place.
#               Write 0 for value of 32.
.equ	PIO_SM1_SHIFTCTRL_PUSH_THRESH_RESET, 0x00
.equ	PIO_SM1_SHIFTCTRL_PUSH_THRESH_BITS, 0x01f00000
.equ	PIO_SM1_SHIFTCTRL_PUSH_THRESH_MSB, 24
.equ	PIO_SM1_SHIFTCTRL_PUSH_THRESH_LSB, 20
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_SHIFTCTRL_OUT_SHIFTDIR
# Description : 1 = shift out of output shift register to right. 0 = to left.
.equ	PIO_SM1_SHIFTCTRL_OUT_SHIFTDIR_RESET, 0x1
.equ	PIO_SM1_SHIFTCTRL_OUT_SHIFTDIR_BITS, 0x00080000
.equ	PIO_SM1_SHIFTCTRL_OUT_SHIFTDIR_MSB, 19
.equ	PIO_SM1_SHIFTCTRL_OUT_SHIFTDIR_LSB, 19
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_SHIFTCTRL_IN_SHIFTDIR
# Description : 1 = shift input shift register to right (data enters from
#               left). 0 = to left.
.equ	PIO_SM1_SHIFTCTRL_IN_SHIFTDIR_RESET, 0x1
.equ	PIO_SM1_SHIFTCTRL_IN_SHIFTDIR_BITS, 0x00040000
.equ	PIO_SM1_SHIFTCTRL_IN_SHIFTDIR_MSB, 18
.equ	PIO_SM1_SHIFTCTRL_IN_SHIFTDIR_LSB, 18
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_SHIFTCTRL_AUTOPULL
# Description : Pull automatically when the output shift register is emptied,
#               i.e. on or following an OUT instruction which causes the output
#               shift counter to reach or exceed PULL_THRESH.
.equ	PIO_SM1_SHIFTCTRL_AUTOPULL_RESET, 0x0
.equ	PIO_SM1_SHIFTCTRL_AUTOPULL_BITS, 0x00020000
.equ	PIO_SM1_SHIFTCTRL_AUTOPULL_MSB, 17
.equ	PIO_SM1_SHIFTCTRL_AUTOPULL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_SHIFTCTRL_AUTOPUSH
# Description : Push automatically when the input shift register is filled,
#               i.e. on an IN instruction which causes the input shift counter
#               to reach or exceed PUSH_THRESH.
.equ	PIO_SM1_SHIFTCTRL_AUTOPUSH_RESET, 0x0
.equ	PIO_SM1_SHIFTCTRL_AUTOPUSH_BITS, 0x00010000
.equ	PIO_SM1_SHIFTCTRL_AUTOPUSH_MSB, 16
.equ	PIO_SM1_SHIFTCTRL_AUTOPUSH_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_SHIFTCTRL_FJOIN_RX_PUT
# Description : If 1, disable this state machine's RX FIFO, make its storage
#               available for random write access by the state machine (using
#               the `put` instruction) and, unless FJOIN_RX_GET is also set,
#               random read access by the processor (through the RXFx_PUTGETy
#               registers).
#
#               If FJOIN_RX_PUT and FJOIN_RX_GET are both set, then the RX
#               FIFO's registers can be randomly read/written by the state
#               machine, but are completely inaccessible to the processor.
#
#               Setting this bit will clear the FJOIN_TX and FJOIN_RX bits.
.equ	PIO_SM1_SHIFTCTRL_FJOIN_RX_PUT_RESET, 0x0
.equ	PIO_SM1_SHIFTCTRL_FJOIN_RX_PUT_BITS, 0x00008000
.equ	PIO_SM1_SHIFTCTRL_FJOIN_RX_PUT_MSB, 15
.equ	PIO_SM1_SHIFTCTRL_FJOIN_RX_PUT_LSB, 15
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_SHIFTCTRL_FJOIN_RX_GET
# Description : If 1, disable this state machine's RX FIFO, make its storage
#               available for random read access by the state machine (using
#               the `get` instruction) and, unless FJOIN_RX_PUT is also set,
#               random write access by the processor (through the RXFx_PUTGETy
#               registers).
#
#               If FJOIN_RX_PUT and FJOIN_RX_GET are both set, then the RX
#               FIFO's registers can be randomly read/written by the state
#               machine, but are completely inaccessible to the processor.
#
#               Setting this bit will clear the FJOIN_TX and FJOIN_RX bits.
.equ	PIO_SM1_SHIFTCTRL_FJOIN_RX_GET_RESET, 0x0
.equ	PIO_SM1_SHIFTCTRL_FJOIN_RX_GET_BITS, 0x00004000
.equ	PIO_SM1_SHIFTCTRL_FJOIN_RX_GET_MSB, 14
.equ	PIO_SM1_SHIFTCTRL_FJOIN_RX_GET_LSB, 14
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_SHIFTCTRL_IN_COUNT
# Description : Set the number of pins which are not masked to 0 when read by
#               an IN PINS, WAIT PIN or MOV x, PINS instruction.
#
#               For example, an IN_COUNT of 5 means that the 5 LSBs of the IN
#               pin group are visible (bits 4:0), but the remaining 27 MSBs are
#               masked to 0. A count of 32 is encoded with a field value of 0,
#               so the default behaviour is to not perform any masking.
#
#               Note this masking is applied in addition to the masking usually
#               performed by the IN instruction. This is mainly useful for the
#               MOV x, PINS instruction, which otherwise has no way of masking
#               pins.
.equ	PIO_SM1_SHIFTCTRL_IN_COUNT_RESET, 0x00
.equ	PIO_SM1_SHIFTCTRL_IN_COUNT_BITS, 0x0000001f
.equ	PIO_SM1_SHIFTCTRL_IN_COUNT_MSB, 4
.equ	PIO_SM1_SHIFTCTRL_IN_COUNT_LSB, 0
# =============================================================================
# Register    : PIO_SM1_ADDR
# Description : Current instruction address of state machine 1
.equ	PIO_SM1_ADDR_OFFSET, 0x000000ec
.equ	PIO_SM1_ADDR_BITS, 0x0000001f
.equ	PIO_SM1_ADDR_RESET, 0x00000000
.equ	PIO_SM1_ADDR_MSB, 4
.equ	PIO_SM1_ADDR_LSB, 0
# =============================================================================
# Register    : PIO_SM1_INSTR
# Description : Read to see the instruction currently addressed by state
#               machine 1's program counter
#               Write to execute an instruction immediately (including jumps)
#               and then resume execution.
.equ	PIO_SM1_INSTR_OFFSET, 0x000000f0
.equ	PIO_SM1_INSTR_BITS, 0x0000ffff
.equ	PIO_SM1_INSTR_MSB, 15
.equ	PIO_SM1_INSTR_LSB, 0
# =============================================================================
# Register    : PIO_SM1_PINCTRL
# Description : State machine pin control
.equ	PIO_SM1_PINCTRL_OFFSET, 0x000000f4
.equ	PIO_SM1_PINCTRL_BITS, 0xffffffff
.equ	PIO_SM1_PINCTRL_RESET, 0x14000000
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_PINCTRL_SIDESET_COUNT
# Description : The number of MSBs of the Delay/Side-set instruction field
#               which are used for side-set. Inclusive of the enable bit, if
#               present. Minimum of 0 (all delay bits, no side-set) and maximum
#               of 5 (all side-set, no delay).
.equ	PIO_SM1_PINCTRL_SIDESET_COUNT_RESET, 0x0
.equ	PIO_SM1_PINCTRL_SIDESET_COUNT_BITS, 0xe0000000
.equ	PIO_SM1_PINCTRL_SIDESET_COUNT_MSB, 31
.equ	PIO_SM1_PINCTRL_SIDESET_COUNT_LSB, 29
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_PINCTRL_SET_COUNT
# Description : The number of pins asserted by a SET. In the range 0 to 5
#               inclusive.
.equ	PIO_SM1_PINCTRL_SET_COUNT_RESET, 0x5
.equ	PIO_SM1_PINCTRL_SET_COUNT_BITS, 0x1c000000
.equ	PIO_SM1_PINCTRL_SET_COUNT_MSB, 28
.equ	PIO_SM1_PINCTRL_SET_COUNT_LSB, 26
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_PINCTRL_OUT_COUNT
# Description : The number of pins asserted by an OUT PINS, OUT PINDIRS or MOV
#               PINS instruction. In the range 0 to 32 inclusive.
.equ	PIO_SM1_PINCTRL_OUT_COUNT_RESET, 0x00
.equ	PIO_SM1_PINCTRL_OUT_COUNT_BITS, 0x03f00000
.equ	PIO_SM1_PINCTRL_OUT_COUNT_MSB, 25
.equ	PIO_SM1_PINCTRL_OUT_COUNT_LSB, 20
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_PINCTRL_IN_BASE
# Description : The pin which is mapped to the least-significant bit of a state
#               machine's IN data bus. Higher-numbered pins are mapped to
#               consecutively more-significant data bits, with a modulo of 32
#               applied to pin number.
.equ	PIO_SM1_PINCTRL_IN_BASE_RESET, 0x00
.equ	PIO_SM1_PINCTRL_IN_BASE_BITS, 0x000f8000
.equ	PIO_SM1_PINCTRL_IN_BASE_MSB, 19
.equ	PIO_SM1_PINCTRL_IN_BASE_LSB, 15
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_PINCTRL_SIDESET_BASE
# Description : The lowest-numbered pin that will be affected by a side-set
#               operation. The MSBs of an instruction's side-set/delay field
#               (up to 5, determined by SIDESET_COUNT) are used for side-set
#               data, with the remaining LSBs used for delay. The least-
#               significant bit of the side-set portion is the bit written to
#               this pin, with more-significant bits written to higher-numbered
#               pins.
.equ	PIO_SM1_PINCTRL_SIDESET_BASE_RESET, 0x00
.equ	PIO_SM1_PINCTRL_SIDESET_BASE_BITS, 0x00007c00
.equ	PIO_SM1_PINCTRL_SIDESET_BASE_MSB, 14
.equ	PIO_SM1_PINCTRL_SIDESET_BASE_LSB, 10
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_PINCTRL_SET_BASE
# Description : The lowest-numbered pin that will be affected by a SET PINS or
#               SET PINDIRS instruction. The data written to this pin is the
#               least-significant bit of the SET data.
.equ	PIO_SM1_PINCTRL_SET_BASE_RESET, 0x00
.equ	PIO_SM1_PINCTRL_SET_BASE_BITS, 0x000003e0
.equ	PIO_SM1_PINCTRL_SET_BASE_MSB, 9
.equ	PIO_SM1_PINCTRL_SET_BASE_LSB, 5
# -----------------------------------------------------------------------------
# Field       : PIO_SM1_PINCTRL_OUT_BASE
# Description : The lowest-numbered pin that will be affected by an OUT PINS,
#               OUT PINDIRS or MOV PINS instruction. The data written to this
#               pin will always be the least-significant bit of the OUT or MOV
#               data.
.equ	PIO_SM1_PINCTRL_OUT_BASE_RESET, 0x00
.equ	PIO_SM1_PINCTRL_OUT_BASE_BITS, 0x0000001f
.equ	PIO_SM1_PINCTRL_OUT_BASE_MSB, 4
.equ	PIO_SM1_PINCTRL_OUT_BASE_LSB, 0
# =============================================================================
# Register    : PIO_SM2_CLKDIV
# Description : Clock divisor register for state machine 2
#               Frequency = clock freq / (CLKDIV_INT + CLKDIV_FRAC / 256)
.equ	PIO_SM2_CLKDIV_OFFSET, 0x000000f8
.equ	PIO_SM2_CLKDIV_BITS, 0xffffff00
.equ	PIO_SM2_CLKDIV_RESET, 0x00010000
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_CLKDIV_INT
# Description : Effective frequency is sysclk/(int + frac/256).
#               Value of 0 is interpreted as 65536. If INT is 0, FRAC must also
#               be 0.
.equ	PIO_SM2_CLKDIV_INT_RESET, 0x0001
.equ	PIO_SM2_CLKDIV_INT_BITS, 0xffff0000
.equ	PIO_SM2_CLKDIV_INT_MSB, 31
.equ	PIO_SM2_CLKDIV_INT_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_CLKDIV_FRAC
# Description : Fractional part of clock divisor
.equ	PIO_SM2_CLKDIV_FRAC_RESET, 0x00
.equ	PIO_SM2_CLKDIV_FRAC_BITS, 0x0000ff00
.equ	PIO_SM2_CLKDIV_FRAC_MSB, 15
.equ	PIO_SM2_CLKDIV_FRAC_LSB, 8
# =============================================================================
# Register    : PIO_SM2_EXECCTRL
# Description : Execution/behavioural settings for state machine 2
.equ	PIO_SM2_EXECCTRL_OFFSET, 0x000000fc
.equ	PIO_SM2_EXECCTRL_BITS, 0xffffffff
.equ	PIO_SM2_EXECCTRL_RESET, 0x0001f000
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_EXECCTRL_EXEC_STALLED
# Description : If 1, an instruction written to SMx_INSTR is stalled, and
#               latched by the state machine. Will clear to 0 once this
#               instruction completes.
.equ	PIO_SM2_EXECCTRL_EXEC_STALLED_RESET, 0x0
.equ	PIO_SM2_EXECCTRL_EXEC_STALLED_BITS, 0x80000000
.equ	PIO_SM2_EXECCTRL_EXEC_STALLED_MSB, 31
.equ	PIO_SM2_EXECCTRL_EXEC_STALLED_LSB, 31
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_EXECCTRL_SIDE_EN
# Description : If 1, the MSB of the Delay/Side-set instruction field is used
#               as side-set enable, rather than a side-set data bit. This
#               allows instructions to perform side-set optionally, rather than
#               on every instruction, but the maximum possible side-set width
#               is reduced from 5 to 4. Note that the value of
#               PINCTRL_SIDESET_COUNT is inclusive of this enable bit.
.equ	PIO_SM2_EXECCTRL_SIDE_EN_RESET, 0x0
.equ	PIO_SM2_EXECCTRL_SIDE_EN_BITS, 0x40000000
.equ	PIO_SM2_EXECCTRL_SIDE_EN_MSB, 30
.equ	PIO_SM2_EXECCTRL_SIDE_EN_LSB, 30
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_EXECCTRL_SIDE_PINDIR
# Description : If 1, side-set data is asserted to pin directions, instead of
#               pin values
.equ	PIO_SM2_EXECCTRL_SIDE_PINDIR_RESET, 0x0
.equ	PIO_SM2_EXECCTRL_SIDE_PINDIR_BITS, 0x20000000
.equ	PIO_SM2_EXECCTRL_SIDE_PINDIR_MSB, 29
.equ	PIO_SM2_EXECCTRL_SIDE_PINDIR_LSB, 29
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_EXECCTRL_JMP_PIN
# Description : The GPIO number to use as condition for JMP PIN. Unaffected by
#               input mapping.
.equ	PIO_SM2_EXECCTRL_JMP_PIN_RESET, 0x00
.equ	PIO_SM2_EXECCTRL_JMP_PIN_BITS, 0x1f000000
.equ	PIO_SM2_EXECCTRL_JMP_PIN_MSB, 28
.equ	PIO_SM2_EXECCTRL_JMP_PIN_LSB, 24
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_EXECCTRL_OUT_EN_SEL
# Description : Which data bit to use for inline OUT enable
.equ	PIO_SM2_EXECCTRL_OUT_EN_SEL_RESET, 0x00
.equ	PIO_SM2_EXECCTRL_OUT_EN_SEL_BITS, 0x00f80000
.equ	PIO_SM2_EXECCTRL_OUT_EN_SEL_MSB, 23
.equ	PIO_SM2_EXECCTRL_OUT_EN_SEL_LSB, 19
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_EXECCTRL_INLINE_OUT_EN
# Description : If 1, use a bit of OUT data as an auxiliary write enable
#               When used in conjunction with OUT_STICKY, writes with an enable
#               of 0 will
#               deassert the latest pin write. This can create useful
#               masking/override behaviour
#               due to the priority ordering of state machine pin writes (SM0 <
#               SM1 < ...)
.equ	PIO_SM2_EXECCTRL_INLINE_OUT_EN_RESET, 0x0
.equ	PIO_SM2_EXECCTRL_INLINE_OUT_EN_BITS, 0x00040000
.equ	PIO_SM2_EXECCTRL_INLINE_OUT_EN_MSB, 18
.equ	PIO_SM2_EXECCTRL_INLINE_OUT_EN_LSB, 18
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_EXECCTRL_OUT_STICKY
# Description : Continuously assert the most recent OUT/SET to the pins
.equ	PIO_SM2_EXECCTRL_OUT_STICKY_RESET, 0x0
.equ	PIO_SM2_EXECCTRL_OUT_STICKY_BITS, 0x00020000
.equ	PIO_SM2_EXECCTRL_OUT_STICKY_MSB, 17
.equ	PIO_SM2_EXECCTRL_OUT_STICKY_LSB, 17
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_EXECCTRL_WRAP_TOP
# Description : After reaching this address, execution is wrapped to
#               wrap_bottom.
#               If the instruction is a jump, and the jump condition is true,
#               the jump takes priority.
.equ	PIO_SM2_EXECCTRL_WRAP_TOP_RESET, 0x1f
.equ	PIO_SM2_EXECCTRL_WRAP_TOP_BITS, 0x0001f000
.equ	PIO_SM2_EXECCTRL_WRAP_TOP_MSB, 16
.equ	PIO_SM2_EXECCTRL_WRAP_TOP_LSB, 12
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_EXECCTRL_WRAP_BOTTOM
# Description : After reaching wrap_top, execution is wrapped to this address.
.equ	PIO_SM2_EXECCTRL_WRAP_BOTTOM_RESET, 0x00
.equ	PIO_SM2_EXECCTRL_WRAP_BOTTOM_BITS, 0x00000f80
.equ	PIO_SM2_EXECCTRL_WRAP_BOTTOM_MSB, 11
.equ	PIO_SM2_EXECCTRL_WRAP_BOTTOM_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_EXECCTRL_STATUS_SEL
# Description : Comparison used for the MOV x, STATUS instruction.
#               0x0 -> All-ones if TX FIFO level < N, otherwise all-zeroes
#               0x1 -> All-ones if RX FIFO level < N, otherwise all-zeroes
#               0x2 -> All-ones if the indexed IRQ flag is raised, otherwise all-zeroes
.equ	PIO_SM2_EXECCTRL_STATUS_SEL_RESET, 0x0
.equ	PIO_SM2_EXECCTRL_STATUS_SEL_BITS, 0x00000060
.equ	PIO_SM2_EXECCTRL_STATUS_SEL_MSB, 6
.equ	PIO_SM2_EXECCTRL_STATUS_SEL_LSB, 5
.equ	PIO_SM2_EXECCTRL_STATUS_SEL_VALUE_TXLEVEL, 0x0
.equ	PIO_SM2_EXECCTRL_STATUS_SEL_VALUE_RXLEVEL, 0x1
.equ	PIO_SM2_EXECCTRL_STATUS_SEL_VALUE_IRQ, 0x2
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_EXECCTRL_STATUS_N
# Description : Comparison level or IRQ index for the MOV x, STATUS
#               instruction.
#
#               If STATUS_SEL is TXLEVEL or RXLEVEL, then values of STATUS_N
#               greater than the current FIFO depth are reserved, and have
#               undefined behaviour.
#               0x00 -> Index 0-7 of an IRQ flag in this PIO block
#               0x08 -> Index 0-7 of an IRQ flag in the next lower-numbered PIO block
#               0x10 -> Index 0-7 of an IRQ flag in the next higher-numbered PIO block
.equ	PIO_SM2_EXECCTRL_STATUS_N_RESET, 0x00
.equ	PIO_SM2_EXECCTRL_STATUS_N_BITS, 0x0000001f
.equ	PIO_SM2_EXECCTRL_STATUS_N_MSB, 4
.equ	PIO_SM2_EXECCTRL_STATUS_N_LSB, 0
.equ	PIO_SM2_EXECCTRL_STATUS_N_VALUE_IRQ, 0x00
.equ	PIO_SM2_EXECCTRL_STATUS_N_VALUE_IRQ_PREVPIO, 0x08
.equ	PIO_SM2_EXECCTRL_STATUS_N_VALUE_IRQ_NEXTPIO, 0x10
# =============================================================================
# Register    : PIO_SM2_SHIFTCTRL
# Description : Control behaviour of the input/output shift registers for state
#               machine 2
.equ	PIO_SM2_SHIFTCTRL_OFFSET, 0x00000100
.equ	PIO_SM2_SHIFTCTRL_BITS, 0xffffc01f
.equ	PIO_SM2_SHIFTCTRL_RESET, 0x000c0000
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_SHIFTCTRL_FJOIN_RX
# Description : When 1, RX FIFO steals the TX FIFO's storage, and becomes twice
#               as deep.
#               TX FIFO is disabled as a result (always reads as both full and
#               empty).
#               FIFOs are flushed when this bit is changed.
.equ	PIO_SM2_SHIFTCTRL_FJOIN_RX_RESET, 0x0
.equ	PIO_SM2_SHIFTCTRL_FJOIN_RX_BITS, 0x80000000
.equ	PIO_SM2_SHIFTCTRL_FJOIN_RX_MSB, 31
.equ	PIO_SM2_SHIFTCTRL_FJOIN_RX_LSB, 31
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_SHIFTCTRL_FJOIN_TX
# Description : When 1, TX FIFO steals the RX FIFO's storage, and becomes twice
#               as deep.
#               RX FIFO is disabled as a result (always reads as both full and
#               empty).
#               FIFOs are flushed when this bit is changed.
.equ	PIO_SM2_SHIFTCTRL_FJOIN_TX_RESET, 0x0
.equ	PIO_SM2_SHIFTCTRL_FJOIN_TX_BITS, 0x40000000
.equ	PIO_SM2_SHIFTCTRL_FJOIN_TX_MSB, 30
.equ	PIO_SM2_SHIFTCTRL_FJOIN_TX_LSB, 30
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_SHIFTCTRL_PULL_THRESH
# Description : Number of bits shifted out of OSR before autopull, or
#               conditional pull (PULL IFEMPTY), will take place.
#               Write 0 for value of 32.
.equ	PIO_SM2_SHIFTCTRL_PULL_THRESH_RESET, 0x00
.equ	PIO_SM2_SHIFTCTRL_PULL_THRESH_BITS, 0x3e000000
.equ	PIO_SM2_SHIFTCTRL_PULL_THRESH_MSB, 29
.equ	PIO_SM2_SHIFTCTRL_PULL_THRESH_LSB, 25
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_SHIFTCTRL_PUSH_THRESH
# Description : Number of bits shifted into ISR before autopush, or conditional
#               push (PUSH IFFULL), will take place.
#               Write 0 for value of 32.
.equ	PIO_SM2_SHIFTCTRL_PUSH_THRESH_RESET, 0x00
.equ	PIO_SM2_SHIFTCTRL_PUSH_THRESH_BITS, 0x01f00000
.equ	PIO_SM2_SHIFTCTRL_PUSH_THRESH_MSB, 24
.equ	PIO_SM2_SHIFTCTRL_PUSH_THRESH_LSB, 20
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_SHIFTCTRL_OUT_SHIFTDIR
# Description : 1 = shift out of output shift register to right. 0 = to left.
.equ	PIO_SM2_SHIFTCTRL_OUT_SHIFTDIR_RESET, 0x1
.equ	PIO_SM2_SHIFTCTRL_OUT_SHIFTDIR_BITS, 0x00080000
.equ	PIO_SM2_SHIFTCTRL_OUT_SHIFTDIR_MSB, 19
.equ	PIO_SM2_SHIFTCTRL_OUT_SHIFTDIR_LSB, 19
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_SHIFTCTRL_IN_SHIFTDIR
# Description : 1 = shift input shift register to right (data enters from
#               left). 0 = to left.
.equ	PIO_SM2_SHIFTCTRL_IN_SHIFTDIR_RESET, 0x1
.equ	PIO_SM2_SHIFTCTRL_IN_SHIFTDIR_BITS, 0x00040000
.equ	PIO_SM2_SHIFTCTRL_IN_SHIFTDIR_MSB, 18
.equ	PIO_SM2_SHIFTCTRL_IN_SHIFTDIR_LSB, 18
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_SHIFTCTRL_AUTOPULL
# Description : Pull automatically when the output shift register is emptied,
#               i.e. on or following an OUT instruction which causes the output
#               shift counter to reach or exceed PULL_THRESH.
.equ	PIO_SM2_SHIFTCTRL_AUTOPULL_RESET, 0x0
.equ	PIO_SM2_SHIFTCTRL_AUTOPULL_BITS, 0x00020000
.equ	PIO_SM2_SHIFTCTRL_AUTOPULL_MSB, 17
.equ	PIO_SM2_SHIFTCTRL_AUTOPULL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_SHIFTCTRL_AUTOPUSH
# Description : Push automatically when the input shift register is filled,
#               i.e. on an IN instruction which causes the input shift counter
#               to reach or exceed PUSH_THRESH.
.equ	PIO_SM2_SHIFTCTRL_AUTOPUSH_RESET, 0x0
.equ	PIO_SM2_SHIFTCTRL_AUTOPUSH_BITS, 0x00010000
.equ	PIO_SM2_SHIFTCTRL_AUTOPUSH_MSB, 16
.equ	PIO_SM2_SHIFTCTRL_AUTOPUSH_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_SHIFTCTRL_FJOIN_RX_PUT
# Description : If 1, disable this state machine's RX FIFO, make its storage
#               available for random write access by the state machine (using
#               the `put` instruction) and, unless FJOIN_RX_GET is also set,
#               random read access by the processor (through the RXFx_PUTGETy
#               registers).
#
#               If FJOIN_RX_PUT and FJOIN_RX_GET are both set, then the RX
#               FIFO's registers can be randomly read/written by the state
#               machine, but are completely inaccessible to the processor.
#
#               Setting this bit will clear the FJOIN_TX and FJOIN_RX bits.
.equ	PIO_SM2_SHIFTCTRL_FJOIN_RX_PUT_RESET, 0x0
.equ	PIO_SM2_SHIFTCTRL_FJOIN_RX_PUT_BITS, 0x00008000
.equ	PIO_SM2_SHIFTCTRL_FJOIN_RX_PUT_MSB, 15
.equ	PIO_SM2_SHIFTCTRL_FJOIN_RX_PUT_LSB, 15
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_SHIFTCTRL_FJOIN_RX_GET
# Description : If 1, disable this state machine's RX FIFO, make its storage
#               available for random read access by the state machine (using
#               the `get` instruction) and, unless FJOIN_RX_PUT is also set,
#               random write access by the processor (through the RXFx_PUTGETy
#               registers).
#
#               If FJOIN_RX_PUT and FJOIN_RX_GET are both set, then the RX
#               FIFO's registers can be randomly read/written by the state
#               machine, but are completely inaccessible to the processor.
#
#               Setting this bit will clear the FJOIN_TX and FJOIN_RX bits.
.equ	PIO_SM2_SHIFTCTRL_FJOIN_RX_GET_RESET, 0x0
.equ	PIO_SM2_SHIFTCTRL_FJOIN_RX_GET_BITS, 0x00004000
.equ	PIO_SM2_SHIFTCTRL_FJOIN_RX_GET_MSB, 14
.equ	PIO_SM2_SHIFTCTRL_FJOIN_RX_GET_LSB, 14
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_SHIFTCTRL_IN_COUNT
# Description : Set the number of pins which are not masked to 0 when read by
#               an IN PINS, WAIT PIN or MOV x, PINS instruction.
#
#               For example, an IN_COUNT of 5 means that the 5 LSBs of the IN
#               pin group are visible (bits 4:0), but the remaining 27 MSBs are
#               masked to 0. A count of 32 is encoded with a field value of 0,
#               so the default behaviour is to not perform any masking.
#
#               Note this masking is applied in addition to the masking usually
#               performed by the IN instruction. This is mainly useful for the
#               MOV x, PINS instruction, which otherwise has no way of masking
#               pins.
.equ	PIO_SM2_SHIFTCTRL_IN_COUNT_RESET, 0x00
.equ	PIO_SM2_SHIFTCTRL_IN_COUNT_BITS, 0x0000001f
.equ	PIO_SM2_SHIFTCTRL_IN_COUNT_MSB, 4
.equ	PIO_SM2_SHIFTCTRL_IN_COUNT_LSB, 0
# =============================================================================
# Register    : PIO_SM2_ADDR
# Description : Current instruction address of state machine 2
.equ	PIO_SM2_ADDR_OFFSET, 0x00000104
.equ	PIO_SM2_ADDR_BITS, 0x0000001f
.equ	PIO_SM2_ADDR_RESET, 0x00000000
.equ	PIO_SM2_ADDR_MSB, 4
.equ	PIO_SM2_ADDR_LSB, 0
# =============================================================================
# Register    : PIO_SM2_INSTR
# Description : Read to see the instruction currently addressed by state
#               machine 2's program counter
#               Write to execute an instruction immediately (including jumps)
#               and then resume execution.
.equ	PIO_SM2_INSTR_OFFSET, 0x00000108
.equ	PIO_SM2_INSTR_BITS, 0x0000ffff
.equ	PIO_SM2_INSTR_MSB, 15
.equ	PIO_SM2_INSTR_LSB, 0
# =============================================================================
# Register    : PIO_SM2_PINCTRL
# Description : State machine pin control
.equ	PIO_SM2_PINCTRL_OFFSET, 0x0000010c
.equ	PIO_SM2_PINCTRL_BITS, 0xffffffff
.equ	PIO_SM2_PINCTRL_RESET, 0x14000000
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_PINCTRL_SIDESET_COUNT
# Description : The number of MSBs of the Delay/Side-set instruction field
#               which are used for side-set. Inclusive of the enable bit, if
#               present. Minimum of 0 (all delay bits, no side-set) and maximum
#               of 5 (all side-set, no delay).
.equ	PIO_SM2_PINCTRL_SIDESET_COUNT_RESET, 0x0
.equ	PIO_SM2_PINCTRL_SIDESET_COUNT_BITS, 0xe0000000
.equ	PIO_SM2_PINCTRL_SIDESET_COUNT_MSB, 31
.equ	PIO_SM2_PINCTRL_SIDESET_COUNT_LSB, 29
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_PINCTRL_SET_COUNT
# Description : The number of pins asserted by a SET. In the range 0 to 5
#               inclusive.
.equ	PIO_SM2_PINCTRL_SET_COUNT_RESET, 0x5
.equ	PIO_SM2_PINCTRL_SET_COUNT_BITS, 0x1c000000
.equ	PIO_SM2_PINCTRL_SET_COUNT_MSB, 28
.equ	PIO_SM2_PINCTRL_SET_COUNT_LSB, 26
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_PINCTRL_OUT_COUNT
# Description : The number of pins asserted by an OUT PINS, OUT PINDIRS or MOV
#               PINS instruction. In the range 0 to 32 inclusive.
.equ	PIO_SM2_PINCTRL_OUT_COUNT_RESET, 0x00
.equ	PIO_SM2_PINCTRL_OUT_COUNT_BITS, 0x03f00000
.equ	PIO_SM2_PINCTRL_OUT_COUNT_MSB, 25
.equ	PIO_SM2_PINCTRL_OUT_COUNT_LSB, 20
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_PINCTRL_IN_BASE
# Description : The pin which is mapped to the least-significant bit of a state
#               machine's IN data bus. Higher-numbered pins are mapped to
#               consecutively more-significant data bits, with a modulo of 32
#               applied to pin number.
.equ	PIO_SM2_PINCTRL_IN_BASE_RESET, 0x00
.equ	PIO_SM2_PINCTRL_IN_BASE_BITS, 0x000f8000
.equ	PIO_SM2_PINCTRL_IN_BASE_MSB, 19
.equ	PIO_SM2_PINCTRL_IN_BASE_LSB, 15
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_PINCTRL_SIDESET_BASE
# Description : The lowest-numbered pin that will be affected by a side-set
#               operation. The MSBs of an instruction's side-set/delay field
#               (up to 5, determined by SIDESET_COUNT) are used for side-set
#               data, with the remaining LSBs used for delay. The least-
#               significant bit of the side-set portion is the bit written to
#               this pin, with more-significant bits written to higher-numbered
#               pins.
.equ	PIO_SM2_PINCTRL_SIDESET_BASE_RESET, 0x00
.equ	PIO_SM2_PINCTRL_SIDESET_BASE_BITS, 0x00007c00
.equ	PIO_SM2_PINCTRL_SIDESET_BASE_MSB, 14
.equ	PIO_SM2_PINCTRL_SIDESET_BASE_LSB, 10
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_PINCTRL_SET_BASE
# Description : The lowest-numbered pin that will be affected by a SET PINS or
#               SET PINDIRS instruction. The data written to this pin is the
#               least-significant bit of the SET data.
.equ	PIO_SM2_PINCTRL_SET_BASE_RESET, 0x00
.equ	PIO_SM2_PINCTRL_SET_BASE_BITS, 0x000003e0
.equ	PIO_SM2_PINCTRL_SET_BASE_MSB, 9
.equ	PIO_SM2_PINCTRL_SET_BASE_LSB, 5
# -----------------------------------------------------------------------------
# Field       : PIO_SM2_PINCTRL_OUT_BASE
# Description : The lowest-numbered pin that will be affected by an OUT PINS,
#               OUT PINDIRS or MOV PINS instruction. The data written to this
#               pin will always be the least-significant bit of the OUT or MOV
#               data.
.equ	PIO_SM2_PINCTRL_OUT_BASE_RESET, 0x00
.equ	PIO_SM2_PINCTRL_OUT_BASE_BITS, 0x0000001f
.equ	PIO_SM2_PINCTRL_OUT_BASE_MSB, 4
.equ	PIO_SM2_PINCTRL_OUT_BASE_LSB, 0
# =============================================================================
# Register    : PIO_SM3_CLKDIV
# Description : Clock divisor register for state machine 3
#               Frequency = clock freq / (CLKDIV_INT + CLKDIV_FRAC / 256)
.equ	PIO_SM3_CLKDIV_OFFSET, 0x00000110
.equ	PIO_SM3_CLKDIV_BITS, 0xffffff00
.equ	PIO_SM3_CLKDIV_RESET, 0x00010000
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_CLKDIV_INT
# Description : Effective frequency is sysclk/(int + frac/256).
#               Value of 0 is interpreted as 65536. If INT is 0, FRAC must also
#               be 0.
.equ	PIO_SM3_CLKDIV_INT_RESET, 0x0001
.equ	PIO_SM3_CLKDIV_INT_BITS, 0xffff0000
.equ	PIO_SM3_CLKDIV_INT_MSB, 31
.equ	PIO_SM3_CLKDIV_INT_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_CLKDIV_FRAC
# Description : Fractional part of clock divisor
.equ	PIO_SM3_CLKDIV_FRAC_RESET, 0x00
.equ	PIO_SM3_CLKDIV_FRAC_BITS, 0x0000ff00
.equ	PIO_SM3_CLKDIV_FRAC_MSB, 15
.equ	PIO_SM3_CLKDIV_FRAC_LSB, 8
# =============================================================================
# Register    : PIO_SM3_EXECCTRL
# Description : Execution/behavioural settings for state machine 3
.equ	PIO_SM3_EXECCTRL_OFFSET, 0x00000114
.equ	PIO_SM3_EXECCTRL_BITS, 0xffffffff
.equ	PIO_SM3_EXECCTRL_RESET, 0x0001f000
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_EXECCTRL_EXEC_STALLED
# Description : If 1, an instruction written to SMx_INSTR is stalled, and
#               latched by the state machine. Will clear to 0 once this
#               instruction completes.
.equ	PIO_SM3_EXECCTRL_EXEC_STALLED_RESET, 0x0
.equ	PIO_SM3_EXECCTRL_EXEC_STALLED_BITS, 0x80000000
.equ	PIO_SM3_EXECCTRL_EXEC_STALLED_MSB, 31
.equ	PIO_SM3_EXECCTRL_EXEC_STALLED_LSB, 31
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_EXECCTRL_SIDE_EN
# Description : If 1, the MSB of the Delay/Side-set instruction field is used
#               as side-set enable, rather than a side-set data bit. This
#               allows instructions to perform side-set optionally, rather than
#               on every instruction, but the maximum possible side-set width
#               is reduced from 5 to 4. Note that the value of
#               PINCTRL_SIDESET_COUNT is inclusive of this enable bit.
.equ	PIO_SM3_EXECCTRL_SIDE_EN_RESET, 0x0
.equ	PIO_SM3_EXECCTRL_SIDE_EN_BITS, 0x40000000
.equ	PIO_SM3_EXECCTRL_SIDE_EN_MSB, 30
.equ	PIO_SM3_EXECCTRL_SIDE_EN_LSB, 30
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_EXECCTRL_SIDE_PINDIR
# Description : If 1, side-set data is asserted to pin directions, instead of
#               pin values
.equ	PIO_SM3_EXECCTRL_SIDE_PINDIR_RESET, 0x0
.equ	PIO_SM3_EXECCTRL_SIDE_PINDIR_BITS, 0x20000000
.equ	PIO_SM3_EXECCTRL_SIDE_PINDIR_MSB, 29
.equ	PIO_SM3_EXECCTRL_SIDE_PINDIR_LSB, 29
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_EXECCTRL_JMP_PIN
# Description : The GPIO number to use as condition for JMP PIN. Unaffected by
#               input mapping.
.equ	PIO_SM3_EXECCTRL_JMP_PIN_RESET, 0x00
.equ	PIO_SM3_EXECCTRL_JMP_PIN_BITS, 0x1f000000
.equ	PIO_SM3_EXECCTRL_JMP_PIN_MSB, 28
.equ	PIO_SM3_EXECCTRL_JMP_PIN_LSB, 24
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_EXECCTRL_OUT_EN_SEL
# Description : Which data bit to use for inline OUT enable
.equ	PIO_SM3_EXECCTRL_OUT_EN_SEL_RESET, 0x00
.equ	PIO_SM3_EXECCTRL_OUT_EN_SEL_BITS, 0x00f80000
.equ	PIO_SM3_EXECCTRL_OUT_EN_SEL_MSB, 23
.equ	PIO_SM3_EXECCTRL_OUT_EN_SEL_LSB, 19
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_EXECCTRL_INLINE_OUT_EN
# Description : If 1, use a bit of OUT data as an auxiliary write enable
#               When used in conjunction with OUT_STICKY, writes with an enable
#               of 0 will
#               deassert the latest pin write. This can create useful
#               masking/override behaviour
#               due to the priority ordering of state machine pin writes (SM0 <
#               SM1 < ...)
.equ	PIO_SM3_EXECCTRL_INLINE_OUT_EN_RESET, 0x0
.equ	PIO_SM3_EXECCTRL_INLINE_OUT_EN_BITS, 0x00040000
.equ	PIO_SM3_EXECCTRL_INLINE_OUT_EN_MSB, 18
.equ	PIO_SM3_EXECCTRL_INLINE_OUT_EN_LSB, 18
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_EXECCTRL_OUT_STICKY
# Description : Continuously assert the most recent OUT/SET to the pins
.equ	PIO_SM3_EXECCTRL_OUT_STICKY_RESET, 0x0
.equ	PIO_SM3_EXECCTRL_OUT_STICKY_BITS, 0x00020000
.equ	PIO_SM3_EXECCTRL_OUT_STICKY_MSB, 17
.equ	PIO_SM3_EXECCTRL_OUT_STICKY_LSB, 17
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_EXECCTRL_WRAP_TOP
# Description : After reaching this address, execution is wrapped to
#               wrap_bottom.
#               If the instruction is a jump, and the jump condition is true,
#               the jump takes priority.
.equ	PIO_SM3_EXECCTRL_WRAP_TOP_RESET, 0x1f
.equ	PIO_SM3_EXECCTRL_WRAP_TOP_BITS, 0x0001f000
.equ	PIO_SM3_EXECCTRL_WRAP_TOP_MSB, 16
.equ	PIO_SM3_EXECCTRL_WRAP_TOP_LSB, 12
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_EXECCTRL_WRAP_BOTTOM
# Description : After reaching wrap_top, execution is wrapped to this address.
.equ	PIO_SM3_EXECCTRL_WRAP_BOTTOM_RESET, 0x00
.equ	PIO_SM3_EXECCTRL_WRAP_BOTTOM_BITS, 0x00000f80
.equ	PIO_SM3_EXECCTRL_WRAP_BOTTOM_MSB, 11
.equ	PIO_SM3_EXECCTRL_WRAP_BOTTOM_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_EXECCTRL_STATUS_SEL
# Description : Comparison used for the MOV x, STATUS instruction.
#               0x0 -> All-ones if TX FIFO level < N, otherwise all-zeroes
#               0x1 -> All-ones if RX FIFO level < N, otherwise all-zeroes
#               0x2 -> All-ones if the indexed IRQ flag is raised, otherwise all-zeroes
.equ	PIO_SM3_EXECCTRL_STATUS_SEL_RESET, 0x0
.equ	PIO_SM3_EXECCTRL_STATUS_SEL_BITS, 0x00000060
.equ	PIO_SM3_EXECCTRL_STATUS_SEL_MSB, 6
.equ	PIO_SM3_EXECCTRL_STATUS_SEL_LSB, 5
.equ	PIO_SM3_EXECCTRL_STATUS_SEL_VALUE_TXLEVEL, 0x0
.equ	PIO_SM3_EXECCTRL_STATUS_SEL_VALUE_RXLEVEL, 0x1
.equ	PIO_SM3_EXECCTRL_STATUS_SEL_VALUE_IRQ, 0x2
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_EXECCTRL_STATUS_N
# Description : Comparison level or IRQ index for the MOV x, STATUS
#               instruction.
#
#               If STATUS_SEL is TXLEVEL or RXLEVEL, then values of STATUS_N
#               greater than the current FIFO depth are reserved, and have
#               undefined behaviour.
#               0x00 -> Index 0-7 of an IRQ flag in this PIO block
#               0x08 -> Index 0-7 of an IRQ flag in the next lower-numbered PIO block
#               0x10 -> Index 0-7 of an IRQ flag in the next higher-numbered PIO block
.equ	PIO_SM3_EXECCTRL_STATUS_N_RESET, 0x00
.equ	PIO_SM3_EXECCTRL_STATUS_N_BITS, 0x0000001f
.equ	PIO_SM3_EXECCTRL_STATUS_N_MSB, 4
.equ	PIO_SM3_EXECCTRL_STATUS_N_LSB, 0
.equ	PIO_SM3_EXECCTRL_STATUS_N_VALUE_IRQ, 0x00
.equ	PIO_SM3_EXECCTRL_STATUS_N_VALUE_IRQ_PREVPIO, 0x08
.equ	PIO_SM3_EXECCTRL_STATUS_N_VALUE_IRQ_NEXTPIO, 0x10
# =============================================================================
# Register    : PIO_SM3_SHIFTCTRL
# Description : Control behaviour of the input/output shift registers for state
#               machine 3
.equ	PIO_SM3_SHIFTCTRL_OFFSET, 0x00000118
.equ	PIO_SM3_SHIFTCTRL_BITS, 0xffffc01f
.equ	PIO_SM3_SHIFTCTRL_RESET, 0x000c0000
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_SHIFTCTRL_FJOIN_RX
# Description : When 1, RX FIFO steals the TX FIFO's storage, and becomes twice
#               as deep.
#               TX FIFO is disabled as a result (always reads as both full and
#               empty).
#               FIFOs are flushed when this bit is changed.
.equ	PIO_SM3_SHIFTCTRL_FJOIN_RX_RESET, 0x0
.equ	PIO_SM3_SHIFTCTRL_FJOIN_RX_BITS, 0x80000000
.equ	PIO_SM3_SHIFTCTRL_FJOIN_RX_MSB, 31
.equ	PIO_SM3_SHIFTCTRL_FJOIN_RX_LSB, 31
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_SHIFTCTRL_FJOIN_TX
# Description : When 1, TX FIFO steals the RX FIFO's storage, and becomes twice
#               as deep.
#               RX FIFO is disabled as a result (always reads as both full and
#               empty).
#               FIFOs are flushed when this bit is changed.
.equ	PIO_SM3_SHIFTCTRL_FJOIN_TX_RESET, 0x0
.equ	PIO_SM3_SHIFTCTRL_FJOIN_TX_BITS, 0x40000000
.equ	PIO_SM3_SHIFTCTRL_FJOIN_TX_MSB, 30
.equ	PIO_SM3_SHIFTCTRL_FJOIN_TX_LSB, 30
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_SHIFTCTRL_PULL_THRESH
# Description : Number of bits shifted out of OSR before autopull, or
#               conditional pull (PULL IFEMPTY), will take place.
#               Write 0 for value of 32.
.equ	PIO_SM3_SHIFTCTRL_PULL_THRESH_RESET, 0x00
.equ	PIO_SM3_SHIFTCTRL_PULL_THRESH_BITS, 0x3e000000
.equ	PIO_SM3_SHIFTCTRL_PULL_THRESH_MSB, 29
.equ	PIO_SM3_SHIFTCTRL_PULL_THRESH_LSB, 25
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_SHIFTCTRL_PUSH_THRESH
# Description : Number of bits shifted into ISR before autopush, or conditional
#               push (PUSH IFFULL), will take place.
#               Write 0 for value of 32.
.equ	PIO_SM3_SHIFTCTRL_PUSH_THRESH_RESET, 0x00
.equ	PIO_SM3_SHIFTCTRL_PUSH_THRESH_BITS, 0x01f00000
.equ	PIO_SM3_SHIFTCTRL_PUSH_THRESH_MSB, 24
.equ	PIO_SM3_SHIFTCTRL_PUSH_THRESH_LSB, 20
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_SHIFTCTRL_OUT_SHIFTDIR
# Description : 1 = shift out of output shift register to right. 0 = to left.
.equ	PIO_SM3_SHIFTCTRL_OUT_SHIFTDIR_RESET, 0x1
.equ	PIO_SM3_SHIFTCTRL_OUT_SHIFTDIR_BITS, 0x00080000
.equ	PIO_SM3_SHIFTCTRL_OUT_SHIFTDIR_MSB, 19
.equ	PIO_SM3_SHIFTCTRL_OUT_SHIFTDIR_LSB, 19
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_SHIFTCTRL_IN_SHIFTDIR
# Description : 1 = shift input shift register to right (data enters from
#               left). 0 = to left.
.equ	PIO_SM3_SHIFTCTRL_IN_SHIFTDIR_RESET, 0x1
.equ	PIO_SM3_SHIFTCTRL_IN_SHIFTDIR_BITS, 0x00040000
.equ	PIO_SM3_SHIFTCTRL_IN_SHIFTDIR_MSB, 18
.equ	PIO_SM3_SHIFTCTRL_IN_SHIFTDIR_LSB, 18
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_SHIFTCTRL_AUTOPULL
# Description : Pull automatically when the output shift register is emptied,
#               i.e. on or following an OUT instruction which causes the output
#               shift counter to reach or exceed PULL_THRESH.
.equ	PIO_SM3_SHIFTCTRL_AUTOPULL_RESET, 0x0
.equ	PIO_SM3_SHIFTCTRL_AUTOPULL_BITS, 0x00020000
.equ	PIO_SM3_SHIFTCTRL_AUTOPULL_MSB, 17
.equ	PIO_SM3_SHIFTCTRL_AUTOPULL_LSB, 17
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_SHIFTCTRL_AUTOPUSH
# Description : Push automatically when the input shift register is filled,
#               i.e. on an IN instruction which causes the input shift counter
#               to reach or exceed PUSH_THRESH.
.equ	PIO_SM3_SHIFTCTRL_AUTOPUSH_RESET, 0x0
.equ	PIO_SM3_SHIFTCTRL_AUTOPUSH_BITS, 0x00010000
.equ	PIO_SM3_SHIFTCTRL_AUTOPUSH_MSB, 16
.equ	PIO_SM3_SHIFTCTRL_AUTOPUSH_LSB, 16
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_SHIFTCTRL_FJOIN_RX_PUT
# Description : If 1, disable this state machine's RX FIFO, make its storage
#               available for random write access by the state machine (using
#               the `put` instruction) and, unless FJOIN_RX_GET is also set,
#               random read access by the processor (through the RXFx_PUTGETy
#               registers).
#
#               If FJOIN_RX_PUT and FJOIN_RX_GET are both set, then the RX
#               FIFO's registers can be randomly read/written by the state
#               machine, but are completely inaccessible to the processor.
#
#               Setting this bit will clear the FJOIN_TX and FJOIN_RX bits.
.equ	PIO_SM3_SHIFTCTRL_FJOIN_RX_PUT_RESET, 0x0
.equ	PIO_SM3_SHIFTCTRL_FJOIN_RX_PUT_BITS, 0x00008000
.equ	PIO_SM3_SHIFTCTRL_FJOIN_RX_PUT_MSB, 15
.equ	PIO_SM3_SHIFTCTRL_FJOIN_RX_PUT_LSB, 15
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_SHIFTCTRL_FJOIN_RX_GET
# Description : If 1, disable this state machine's RX FIFO, make its storage
#               available for random read access by the state machine (using
#               the `get` instruction) and, unless FJOIN_RX_PUT is also set,
#               random write access by the processor (through the RXFx_PUTGETy
#               registers).
#
#               If FJOIN_RX_PUT and FJOIN_RX_GET are both set, then the RX
#               FIFO's registers can be randomly read/written by the state
#               machine, but are completely inaccessible to the processor.
#
#               Setting this bit will clear the FJOIN_TX and FJOIN_RX bits.
.equ	PIO_SM3_SHIFTCTRL_FJOIN_RX_GET_RESET, 0x0
.equ	PIO_SM3_SHIFTCTRL_FJOIN_RX_GET_BITS, 0x00004000
.equ	PIO_SM3_SHIFTCTRL_FJOIN_RX_GET_MSB, 14
.equ	PIO_SM3_SHIFTCTRL_FJOIN_RX_GET_LSB, 14
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_SHIFTCTRL_IN_COUNT
# Description : Set the number of pins which are not masked to 0 when read by
#               an IN PINS, WAIT PIN or MOV x, PINS instruction.
#
#               For example, an IN_COUNT of 5 means that the 5 LSBs of the IN
#               pin group are visible (bits 4:0), but the remaining 27 MSBs are
#               masked to 0. A count of 32 is encoded with a field value of 0,
#               so the default behaviour is to not perform any masking.
#
#               Note this masking is applied in addition to the masking usually
#               performed by the IN instruction. This is mainly useful for the
#               MOV x, PINS instruction, which otherwise has no way of masking
#               pins.
.equ	PIO_SM3_SHIFTCTRL_IN_COUNT_RESET, 0x00
.equ	PIO_SM3_SHIFTCTRL_IN_COUNT_BITS, 0x0000001f
.equ	PIO_SM3_SHIFTCTRL_IN_COUNT_MSB, 4
.equ	PIO_SM3_SHIFTCTRL_IN_COUNT_LSB, 0
# =============================================================================
# Register    : PIO_SM3_ADDR
# Description : Current instruction address of state machine 3
.equ	PIO_SM3_ADDR_OFFSET, 0x0000011c
.equ	PIO_SM3_ADDR_BITS, 0x0000001f
.equ	PIO_SM3_ADDR_RESET, 0x00000000
.equ	PIO_SM3_ADDR_MSB, 4
.equ	PIO_SM3_ADDR_LSB, 0
# =============================================================================
# Register    : PIO_SM3_INSTR
# Description : Read to see the instruction currently addressed by state
#               machine 3's program counter
#               Write to execute an instruction immediately (including jumps)
#               and then resume execution.
.equ	PIO_SM3_INSTR_OFFSET, 0x00000120
.equ	PIO_SM3_INSTR_BITS, 0x0000ffff
.equ	PIO_SM3_INSTR_MSB, 15
.equ	PIO_SM3_INSTR_LSB, 0
# =============================================================================
# Register    : PIO_SM3_PINCTRL
# Description : State machine pin control
.equ	PIO_SM3_PINCTRL_OFFSET, 0x00000124
.equ	PIO_SM3_PINCTRL_BITS, 0xffffffff
.equ	PIO_SM3_PINCTRL_RESET, 0x14000000
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_PINCTRL_SIDESET_COUNT
# Description : The number of MSBs of the Delay/Side-set instruction field
#               which are used for side-set. Inclusive of the enable bit, if
#               present. Minimum of 0 (all delay bits, no side-set) and maximum
#               of 5 (all side-set, no delay).
.equ	PIO_SM3_PINCTRL_SIDESET_COUNT_RESET, 0x0
.equ	PIO_SM3_PINCTRL_SIDESET_COUNT_BITS, 0xe0000000
.equ	PIO_SM3_PINCTRL_SIDESET_COUNT_MSB, 31
.equ	PIO_SM3_PINCTRL_SIDESET_COUNT_LSB, 29
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_PINCTRL_SET_COUNT
# Description : The number of pins asserted by a SET. In the range 0 to 5
#               inclusive.
.equ	PIO_SM3_PINCTRL_SET_COUNT_RESET, 0x5
.equ	PIO_SM3_PINCTRL_SET_COUNT_BITS, 0x1c000000
.equ	PIO_SM3_PINCTRL_SET_COUNT_MSB, 28
.equ	PIO_SM3_PINCTRL_SET_COUNT_LSB, 26
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_PINCTRL_OUT_COUNT
# Description : The number of pins asserted by an OUT PINS, OUT PINDIRS or MOV
#               PINS instruction. In the range 0 to 32 inclusive.
.equ	PIO_SM3_PINCTRL_OUT_COUNT_RESET, 0x00
.equ	PIO_SM3_PINCTRL_OUT_COUNT_BITS, 0x03f00000
.equ	PIO_SM3_PINCTRL_OUT_COUNT_MSB, 25
.equ	PIO_SM3_PINCTRL_OUT_COUNT_LSB, 20
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_PINCTRL_IN_BASE
# Description : The pin which is mapped to the least-significant bit of a state
#               machine's IN data bus. Higher-numbered pins are mapped to
#               consecutively more-significant data bits, with a modulo of 32
#               applied to pin number.
.equ	PIO_SM3_PINCTRL_IN_BASE_RESET, 0x00
.equ	PIO_SM3_PINCTRL_IN_BASE_BITS, 0x000f8000
.equ	PIO_SM3_PINCTRL_IN_BASE_MSB, 19
.equ	PIO_SM3_PINCTRL_IN_BASE_LSB, 15
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_PINCTRL_SIDESET_BASE
# Description : The lowest-numbered pin that will be affected by a side-set
#               operation. The MSBs of an instruction's side-set/delay field
#               (up to 5, determined by SIDESET_COUNT) are used for side-set
#               data, with the remaining LSBs used for delay. The least-
#               significant bit of the side-set portion is the bit written to
#               this pin, with more-significant bits written to higher-numbered
#               pins.
.equ	PIO_SM3_PINCTRL_SIDESET_BASE_RESET, 0x00
.equ	PIO_SM3_PINCTRL_SIDESET_BASE_BITS, 0x00007c00
.equ	PIO_SM3_PINCTRL_SIDESET_BASE_MSB, 14
.equ	PIO_SM3_PINCTRL_SIDESET_BASE_LSB, 10
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_PINCTRL_SET_BASE
# Description : The lowest-numbered pin that will be affected by a SET PINS or
#               SET PINDIRS instruction. The data written to this pin is the
#               least-significant bit of the SET data.
.equ	PIO_SM3_PINCTRL_SET_BASE_RESET, 0x00
.equ	PIO_SM3_PINCTRL_SET_BASE_BITS, 0x000003e0
.equ	PIO_SM3_PINCTRL_SET_BASE_MSB, 9
.equ	PIO_SM3_PINCTRL_SET_BASE_LSB, 5
# -----------------------------------------------------------------------------
# Field       : PIO_SM3_PINCTRL_OUT_BASE
# Description : The lowest-numbered pin that will be affected by an OUT PINS,
#               OUT PINDIRS or MOV PINS instruction. The data written to this
#               pin will always be the least-significant bit of the OUT or MOV
#               data.
.equ	PIO_SM3_PINCTRL_OUT_BASE_RESET, 0x00
.equ	PIO_SM3_PINCTRL_OUT_BASE_BITS, 0x0000001f
.equ	PIO_SM3_PINCTRL_OUT_BASE_MSB, 4
.equ	PIO_SM3_PINCTRL_OUT_BASE_LSB, 0
# =============================================================================
# Register    : PIO_RXF0_PUTGET0
# Description : Direct read/write access to entry 0 of SM0's RX FIFO, if
#               SHIFTCTRL_FJOIN_RX_PUT xor SHIFTCTRL_FJOIN_RX_GET is set.
.equ	PIO_RXF0_PUTGET0_OFFSET, 0x00000128
.equ	PIO_RXF0_PUTGET0_BITS, 0xffffffff
.equ	PIO_RXF0_PUTGET0_RESET, 0x00000000
.equ	PIO_RXF0_PUTGET0_MSB, 31
.equ	PIO_RXF0_PUTGET0_LSB, 0
# =============================================================================
# Register    : PIO_RXF0_PUTGET1
# Description : Direct read/write access to entry 1 of SM0's RX FIFO, if
#               SHIFTCTRL_FJOIN_RX_PUT xor SHIFTCTRL_FJOIN_RX_GET is set.
.equ	PIO_RXF0_PUTGET1_OFFSET, 0x0000012c
.equ	PIO_RXF0_PUTGET1_BITS, 0xffffffff
.equ	PIO_RXF0_PUTGET1_RESET, 0x00000000
.equ	PIO_RXF0_PUTGET1_MSB, 31
.equ	PIO_RXF0_PUTGET1_LSB, 0
# =============================================================================
# Register    : PIO_RXF0_PUTGET2
# Description : Direct read/write access to entry 2 of SM0's RX FIFO, if
#               SHIFTCTRL_FJOIN_RX_PUT xor SHIFTCTRL_FJOIN_RX_GET is set.
.equ	PIO_RXF0_PUTGET2_OFFSET, 0x00000130
.equ	PIO_RXF0_PUTGET2_BITS, 0xffffffff
.equ	PIO_RXF0_PUTGET2_RESET, 0x00000000
.equ	PIO_RXF0_PUTGET2_MSB, 31
.equ	PIO_RXF0_PUTGET2_LSB, 0
# =============================================================================
# Register    : PIO_RXF0_PUTGET3
# Description : Direct read/write access to entry 3 of SM0's RX FIFO, if
#               SHIFTCTRL_FJOIN_RX_PUT xor SHIFTCTRL_FJOIN_RX_GET is set.
.equ	PIO_RXF0_PUTGET3_OFFSET, 0x00000134
.equ	PIO_RXF0_PUTGET3_BITS, 0xffffffff
.equ	PIO_RXF0_PUTGET3_RESET, 0x00000000
.equ	PIO_RXF0_PUTGET3_MSB, 31
.equ	PIO_RXF0_PUTGET3_LSB, 0
# =============================================================================
# Register    : PIO_RXF1_PUTGET0
# Description : Direct read/write access to entry 0 of SM1's RX FIFO, if
#               SHIFTCTRL_FJOIN_RX_PUT xor SHIFTCTRL_FJOIN_RX_GET is set.
.equ	PIO_RXF1_PUTGET0_OFFSET, 0x00000138
.equ	PIO_RXF1_PUTGET0_BITS, 0xffffffff
.equ	PIO_RXF1_PUTGET0_RESET, 0x00000000
.equ	PIO_RXF1_PUTGET0_MSB, 31
.equ	PIO_RXF1_PUTGET0_LSB, 0
# =============================================================================
# Register    : PIO_RXF1_PUTGET1
# Description : Direct read/write access to entry 1 of SM1's RX FIFO, if
#               SHIFTCTRL_FJOIN_RX_PUT xor SHIFTCTRL_FJOIN_RX_GET is set.
.equ	PIO_RXF1_PUTGET1_OFFSET, 0x0000013c
.equ	PIO_RXF1_PUTGET1_BITS, 0xffffffff
.equ	PIO_RXF1_PUTGET1_RESET, 0x00000000
.equ	PIO_RXF1_PUTGET1_MSB, 31
.equ	PIO_RXF1_PUTGET1_LSB, 0
# =============================================================================
# Register    : PIO_RXF1_PUTGET2
# Description : Direct read/write access to entry 2 of SM1's RX FIFO, if
#               SHIFTCTRL_FJOIN_RX_PUT xor SHIFTCTRL_FJOIN_RX_GET is set.
.equ	PIO_RXF1_PUTGET2_OFFSET, 0x00000140
.equ	PIO_RXF1_PUTGET2_BITS, 0xffffffff
.equ	PIO_RXF1_PUTGET2_RESET, 0x00000000
.equ	PIO_RXF1_PUTGET2_MSB, 31
.equ	PIO_RXF1_PUTGET2_LSB, 0
# =============================================================================
# Register    : PIO_RXF1_PUTGET3
# Description : Direct read/write access to entry 3 of SM1's RX FIFO, if
#               SHIFTCTRL_FJOIN_RX_PUT xor SHIFTCTRL_FJOIN_RX_GET is set.
.equ	PIO_RXF1_PUTGET3_OFFSET, 0x00000144
.equ	PIO_RXF1_PUTGET3_BITS, 0xffffffff
.equ	PIO_RXF1_PUTGET3_RESET, 0x00000000
.equ	PIO_RXF1_PUTGET3_MSB, 31
.equ	PIO_RXF1_PUTGET3_LSB, 0
# =============================================================================
# Register    : PIO_RXF2_PUTGET0
# Description : Direct read/write access to entry 0 of SM2's RX FIFO, if
#               SHIFTCTRL_FJOIN_RX_PUT xor SHIFTCTRL_FJOIN_RX_GET is set.
.equ	PIO_RXF2_PUTGET0_OFFSET, 0x00000148
.equ	PIO_RXF2_PUTGET0_BITS, 0xffffffff
.equ	PIO_RXF2_PUTGET0_RESET, 0x00000000
.equ	PIO_RXF2_PUTGET0_MSB, 31
.equ	PIO_RXF2_PUTGET0_LSB, 0
# =============================================================================
# Register    : PIO_RXF2_PUTGET1
# Description : Direct read/write access to entry 1 of SM2's RX FIFO, if
#               SHIFTCTRL_FJOIN_RX_PUT xor SHIFTCTRL_FJOIN_RX_GET is set.
.equ	PIO_RXF2_PUTGET1_OFFSET, 0x0000014c
.equ	PIO_RXF2_PUTGET1_BITS, 0xffffffff
.equ	PIO_RXF2_PUTGET1_RESET, 0x00000000
.equ	PIO_RXF2_PUTGET1_MSB, 31
.equ	PIO_RXF2_PUTGET1_LSB, 0
# =============================================================================
# Register    : PIO_RXF2_PUTGET2
# Description : Direct read/write access to entry 2 of SM2's RX FIFO, if
#               SHIFTCTRL_FJOIN_RX_PUT xor SHIFTCTRL_FJOIN_RX_GET is set.
.equ	PIO_RXF2_PUTGET2_OFFSET, 0x00000150
.equ	PIO_RXF2_PUTGET2_BITS, 0xffffffff
.equ	PIO_RXF2_PUTGET2_RESET, 0x00000000
.equ	PIO_RXF2_PUTGET2_MSB, 31
.equ	PIO_RXF2_PUTGET2_LSB, 0
# =============================================================================
# Register    : PIO_RXF2_PUTGET3
# Description : Direct read/write access to entry 3 of SM2's RX FIFO, if
#               SHIFTCTRL_FJOIN_RX_PUT xor SHIFTCTRL_FJOIN_RX_GET is set.
.equ	PIO_RXF2_PUTGET3_OFFSET, 0x00000154
.equ	PIO_RXF2_PUTGET3_BITS, 0xffffffff
.equ	PIO_RXF2_PUTGET3_RESET, 0x00000000
.equ	PIO_RXF2_PUTGET3_MSB, 31
.equ	PIO_RXF2_PUTGET3_LSB, 0
# =============================================================================
# Register    : PIO_RXF3_PUTGET0
# Description : Direct read/write access to entry 0 of SM3's RX FIFO, if
#               SHIFTCTRL_FJOIN_RX_PUT xor SHIFTCTRL_FJOIN_RX_GET is set.
.equ	PIO_RXF3_PUTGET0_OFFSET, 0x00000158
.equ	PIO_RXF3_PUTGET0_BITS, 0xffffffff
.equ	PIO_RXF3_PUTGET0_RESET, 0x00000000
.equ	PIO_RXF3_PUTGET0_MSB, 31
.equ	PIO_RXF3_PUTGET0_LSB, 0
# =============================================================================
# Register    : PIO_RXF3_PUTGET1
# Description : Direct read/write access to entry 1 of SM3's RX FIFO, if
#               SHIFTCTRL_FJOIN_RX_PUT xor SHIFTCTRL_FJOIN_RX_GET is set.
.equ	PIO_RXF3_PUTGET1_OFFSET, 0x0000015c
.equ	PIO_RXF3_PUTGET1_BITS, 0xffffffff
.equ	PIO_RXF3_PUTGET1_RESET, 0x00000000
.equ	PIO_RXF3_PUTGET1_MSB, 31
.equ	PIO_RXF3_PUTGET1_LSB, 0
# =============================================================================
# Register    : PIO_RXF3_PUTGET2
# Description : Direct read/write access to entry 2 of SM3's RX FIFO, if
#               SHIFTCTRL_FJOIN_RX_PUT xor SHIFTCTRL_FJOIN_RX_GET is set.
.equ	PIO_RXF3_PUTGET2_OFFSET, 0x00000160
.equ	PIO_RXF3_PUTGET2_BITS, 0xffffffff
.equ	PIO_RXF3_PUTGET2_RESET, 0x00000000
.equ	PIO_RXF3_PUTGET2_MSB, 31
.equ	PIO_RXF3_PUTGET2_LSB, 0
# =============================================================================
# Register    : PIO_RXF3_PUTGET3
# Description : Direct read/write access to entry 3 of SM3's RX FIFO, if
#               SHIFTCTRL_FJOIN_RX_PUT xor SHIFTCTRL_FJOIN_RX_GET is set.
.equ	PIO_RXF3_PUTGET3_OFFSET, 0x00000164
.equ	PIO_RXF3_PUTGET3_BITS, 0xffffffff
.equ	PIO_RXF3_PUTGET3_RESET, 0x00000000
.equ	PIO_RXF3_PUTGET3_MSB, 31
.equ	PIO_RXF3_PUTGET3_LSB, 0
# =============================================================================
# Register    : PIO_GPIOBASE
# Description : Relocate GPIO 0 (from PIO's point of view) in the system GPIO
#               numbering, to access more than 32 GPIOs from PIO.
#
#               Only the values 0 and 16 are supported (only bit 4 is
#               writable).
.equ	PIO_GPIOBASE_OFFSET, 0x00000168
.equ	PIO_GPIOBASE_BITS, 0x00000010
.equ	PIO_GPIOBASE_RESET, 0x00000000
.equ	PIO_GPIOBASE_MSB, 4
.equ	PIO_GPIOBASE_LSB, 4
# =============================================================================
# Register    : PIO_INTR
# Description : Raw Interrupts
.equ	PIO_INTR_OFFSET, 0x0000016c
.equ	PIO_INTR_BITS, 0x0000ffff
.equ	PIO_INTR_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PIO_INTR_SM7
.equ	PIO_INTR_SM7_RESET, 0x0
.equ	PIO_INTR_SM7_BITS, 0x00008000
.equ	PIO_INTR_SM7_MSB, 15
.equ	PIO_INTR_SM7_LSB, 15
# -----------------------------------------------------------------------------
# Field       : PIO_INTR_SM6
.equ	PIO_INTR_SM6_RESET, 0x0
.equ	PIO_INTR_SM6_BITS, 0x00004000
.equ	PIO_INTR_SM6_MSB, 14
.equ	PIO_INTR_SM6_LSB, 14
# -----------------------------------------------------------------------------
# Field       : PIO_INTR_SM5
.equ	PIO_INTR_SM5_RESET, 0x0
.equ	PIO_INTR_SM5_BITS, 0x00002000
.equ	PIO_INTR_SM5_MSB, 13
.equ	PIO_INTR_SM5_LSB, 13
# -----------------------------------------------------------------------------
# Field       : PIO_INTR_SM4
.equ	PIO_INTR_SM4_RESET, 0x0
.equ	PIO_INTR_SM4_BITS, 0x00001000
.equ	PIO_INTR_SM4_MSB, 12
.equ	PIO_INTR_SM4_LSB, 12
# -----------------------------------------------------------------------------
# Field       : PIO_INTR_SM3
.equ	PIO_INTR_SM3_RESET, 0x0
.equ	PIO_INTR_SM3_BITS, 0x00000800
.equ	PIO_INTR_SM3_MSB, 11
.equ	PIO_INTR_SM3_LSB, 11
# -----------------------------------------------------------------------------
# Field       : PIO_INTR_SM2
.equ	PIO_INTR_SM2_RESET, 0x0
.equ	PIO_INTR_SM2_BITS, 0x00000400
.equ	PIO_INTR_SM2_MSB, 10
.equ	PIO_INTR_SM2_LSB, 10
# -----------------------------------------------------------------------------
# Field       : PIO_INTR_SM1
.equ	PIO_INTR_SM1_RESET, 0x0
.equ	PIO_INTR_SM1_BITS, 0x00000200
.equ	PIO_INTR_SM1_MSB, 9
.equ	PIO_INTR_SM1_LSB, 9
# -----------------------------------------------------------------------------
# Field       : PIO_INTR_SM0
.equ	PIO_INTR_SM0_RESET, 0x0
.equ	PIO_INTR_SM0_BITS, 0x00000100
.equ	PIO_INTR_SM0_MSB, 8
.equ	PIO_INTR_SM0_LSB, 8
# -----------------------------------------------------------------------------
# Field       : PIO_INTR_SM3_TXNFULL
.equ	PIO_INTR_SM3_TXNFULL_RESET, 0x0
.equ	PIO_INTR_SM3_TXNFULL_BITS, 0x00000080
.equ	PIO_INTR_SM3_TXNFULL_MSB, 7
.equ	PIO_INTR_SM3_TXNFULL_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PIO_INTR_SM2_TXNFULL
.equ	PIO_INTR_SM2_TXNFULL_RESET, 0x0
.equ	PIO_INTR_SM2_TXNFULL_BITS, 0x00000040
.equ	PIO_INTR_SM2_TXNFULL_MSB, 6
.equ	PIO_INTR_SM2_TXNFULL_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PIO_INTR_SM1_TXNFULL
.equ	PIO_INTR_SM1_TXNFULL_RESET, 0x0
.equ	PIO_INTR_SM1_TXNFULL_BITS, 0x00000020
.equ	PIO_INTR_SM1_TXNFULL_MSB, 5
.equ	PIO_INTR_SM1_TXNFULL_LSB, 5
# -----------------------------------------------------------------------------
# Field       : PIO_INTR_SM0_TXNFULL
.equ	PIO_INTR_SM0_TXNFULL_RESET, 0x0
.equ	PIO_INTR_SM0_TXNFULL_BITS, 0x00000010
.equ	PIO_INTR_SM0_TXNFULL_MSB, 4
.equ	PIO_INTR_SM0_TXNFULL_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PIO_INTR_SM3_RXNEMPTY
.equ	PIO_INTR_SM3_RXNEMPTY_RESET, 0x0
.equ	PIO_INTR_SM3_RXNEMPTY_BITS, 0x00000008
.equ	PIO_INTR_SM3_RXNEMPTY_MSB, 3
.equ	PIO_INTR_SM3_RXNEMPTY_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PIO_INTR_SM2_RXNEMPTY
.equ	PIO_INTR_SM2_RXNEMPTY_RESET, 0x0
.equ	PIO_INTR_SM2_RXNEMPTY_BITS, 0x00000004
.equ	PIO_INTR_SM2_RXNEMPTY_MSB, 2
.equ	PIO_INTR_SM2_RXNEMPTY_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PIO_INTR_SM1_RXNEMPTY
.equ	PIO_INTR_SM1_RXNEMPTY_RESET, 0x0
.equ	PIO_INTR_SM1_RXNEMPTY_BITS, 0x00000002
.equ	PIO_INTR_SM1_RXNEMPTY_MSB, 1
.equ	PIO_INTR_SM1_RXNEMPTY_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PIO_INTR_SM0_RXNEMPTY
.equ	PIO_INTR_SM0_RXNEMPTY_RESET, 0x0
.equ	PIO_INTR_SM0_RXNEMPTY_BITS, 0x00000001
.equ	PIO_INTR_SM0_RXNEMPTY_MSB, 0
.equ	PIO_INTR_SM0_RXNEMPTY_LSB, 0
# =============================================================================
# Register    : PIO_IRQ0_INTE
# Description : Interrupt Enable for irq0
.equ	PIO_IRQ0_INTE_OFFSET, 0x00000170
.equ	PIO_IRQ0_INTE_BITS, 0x0000ffff
.equ	PIO_IRQ0_INTE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTE_SM7
.equ	PIO_IRQ0_INTE_SM7_RESET, 0x0
.equ	PIO_IRQ0_INTE_SM7_BITS, 0x00008000
.equ	PIO_IRQ0_INTE_SM7_MSB, 15
.equ	PIO_IRQ0_INTE_SM7_LSB, 15
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTE_SM6
.equ	PIO_IRQ0_INTE_SM6_RESET, 0x0
.equ	PIO_IRQ0_INTE_SM6_BITS, 0x00004000
.equ	PIO_IRQ0_INTE_SM6_MSB, 14
.equ	PIO_IRQ0_INTE_SM6_LSB, 14
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTE_SM5
.equ	PIO_IRQ0_INTE_SM5_RESET, 0x0
.equ	PIO_IRQ0_INTE_SM5_BITS, 0x00002000
.equ	PIO_IRQ0_INTE_SM5_MSB, 13
.equ	PIO_IRQ0_INTE_SM5_LSB, 13
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTE_SM4
.equ	PIO_IRQ0_INTE_SM4_RESET, 0x0
.equ	PIO_IRQ0_INTE_SM4_BITS, 0x00001000
.equ	PIO_IRQ0_INTE_SM4_MSB, 12
.equ	PIO_IRQ0_INTE_SM4_LSB, 12
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTE_SM3
.equ	PIO_IRQ0_INTE_SM3_RESET, 0x0
.equ	PIO_IRQ0_INTE_SM3_BITS, 0x00000800
.equ	PIO_IRQ0_INTE_SM3_MSB, 11
.equ	PIO_IRQ0_INTE_SM3_LSB, 11
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTE_SM2
.equ	PIO_IRQ0_INTE_SM2_RESET, 0x0
.equ	PIO_IRQ0_INTE_SM2_BITS, 0x00000400
.equ	PIO_IRQ0_INTE_SM2_MSB, 10
.equ	PIO_IRQ0_INTE_SM2_LSB, 10
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTE_SM1
.equ	PIO_IRQ0_INTE_SM1_RESET, 0x0
.equ	PIO_IRQ0_INTE_SM1_BITS, 0x00000200
.equ	PIO_IRQ0_INTE_SM1_MSB, 9
.equ	PIO_IRQ0_INTE_SM1_LSB, 9
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTE_SM0
.equ	PIO_IRQ0_INTE_SM0_RESET, 0x0
.equ	PIO_IRQ0_INTE_SM0_BITS, 0x00000100
.equ	PIO_IRQ0_INTE_SM0_MSB, 8
.equ	PIO_IRQ0_INTE_SM0_LSB, 8
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTE_SM3_TXNFULL
.equ	PIO_IRQ0_INTE_SM3_TXNFULL_RESET, 0x0
.equ	PIO_IRQ0_INTE_SM3_TXNFULL_BITS, 0x00000080
.equ	PIO_IRQ0_INTE_SM3_TXNFULL_MSB, 7
.equ	PIO_IRQ0_INTE_SM3_TXNFULL_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTE_SM2_TXNFULL
.equ	PIO_IRQ0_INTE_SM2_TXNFULL_RESET, 0x0
.equ	PIO_IRQ0_INTE_SM2_TXNFULL_BITS, 0x00000040
.equ	PIO_IRQ0_INTE_SM2_TXNFULL_MSB, 6
.equ	PIO_IRQ0_INTE_SM2_TXNFULL_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTE_SM1_TXNFULL
.equ	PIO_IRQ0_INTE_SM1_TXNFULL_RESET, 0x0
.equ	PIO_IRQ0_INTE_SM1_TXNFULL_BITS, 0x00000020
.equ	PIO_IRQ0_INTE_SM1_TXNFULL_MSB, 5
.equ	PIO_IRQ0_INTE_SM1_TXNFULL_LSB, 5
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTE_SM0_TXNFULL
.equ	PIO_IRQ0_INTE_SM0_TXNFULL_RESET, 0x0
.equ	PIO_IRQ0_INTE_SM0_TXNFULL_BITS, 0x00000010
.equ	PIO_IRQ0_INTE_SM0_TXNFULL_MSB, 4
.equ	PIO_IRQ0_INTE_SM0_TXNFULL_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTE_SM3_RXNEMPTY
.equ	PIO_IRQ0_INTE_SM3_RXNEMPTY_RESET, 0x0
.equ	PIO_IRQ0_INTE_SM3_RXNEMPTY_BITS, 0x00000008
.equ	PIO_IRQ0_INTE_SM3_RXNEMPTY_MSB, 3
.equ	PIO_IRQ0_INTE_SM3_RXNEMPTY_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTE_SM2_RXNEMPTY
.equ	PIO_IRQ0_INTE_SM2_RXNEMPTY_RESET, 0x0
.equ	PIO_IRQ0_INTE_SM2_RXNEMPTY_BITS, 0x00000004
.equ	PIO_IRQ0_INTE_SM2_RXNEMPTY_MSB, 2
.equ	PIO_IRQ0_INTE_SM2_RXNEMPTY_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTE_SM1_RXNEMPTY
.equ	PIO_IRQ0_INTE_SM1_RXNEMPTY_RESET, 0x0
.equ	PIO_IRQ0_INTE_SM1_RXNEMPTY_BITS, 0x00000002
.equ	PIO_IRQ0_INTE_SM1_RXNEMPTY_MSB, 1
.equ	PIO_IRQ0_INTE_SM1_RXNEMPTY_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTE_SM0_RXNEMPTY
.equ	PIO_IRQ0_INTE_SM0_RXNEMPTY_RESET, 0x0
.equ	PIO_IRQ0_INTE_SM0_RXNEMPTY_BITS, 0x00000001
.equ	PIO_IRQ0_INTE_SM0_RXNEMPTY_MSB, 0
.equ	PIO_IRQ0_INTE_SM0_RXNEMPTY_LSB, 0
# =============================================================================
# Register    : PIO_IRQ0_INTF
# Description : Interrupt Force for irq0
.equ	PIO_IRQ0_INTF_OFFSET, 0x00000174
.equ	PIO_IRQ0_INTF_BITS, 0x0000ffff
.equ	PIO_IRQ0_INTF_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTF_SM7
.equ	PIO_IRQ0_INTF_SM7_RESET, 0x0
.equ	PIO_IRQ0_INTF_SM7_BITS, 0x00008000
.equ	PIO_IRQ0_INTF_SM7_MSB, 15
.equ	PIO_IRQ0_INTF_SM7_LSB, 15
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTF_SM6
.equ	PIO_IRQ0_INTF_SM6_RESET, 0x0
.equ	PIO_IRQ0_INTF_SM6_BITS, 0x00004000
.equ	PIO_IRQ0_INTF_SM6_MSB, 14
.equ	PIO_IRQ0_INTF_SM6_LSB, 14
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTF_SM5
.equ	PIO_IRQ0_INTF_SM5_RESET, 0x0
.equ	PIO_IRQ0_INTF_SM5_BITS, 0x00002000
.equ	PIO_IRQ0_INTF_SM5_MSB, 13
.equ	PIO_IRQ0_INTF_SM5_LSB, 13
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTF_SM4
.equ	PIO_IRQ0_INTF_SM4_RESET, 0x0
.equ	PIO_IRQ0_INTF_SM4_BITS, 0x00001000
.equ	PIO_IRQ0_INTF_SM4_MSB, 12
.equ	PIO_IRQ0_INTF_SM4_LSB, 12
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTF_SM3
.equ	PIO_IRQ0_INTF_SM3_RESET, 0x0
.equ	PIO_IRQ0_INTF_SM3_BITS, 0x00000800
.equ	PIO_IRQ0_INTF_SM3_MSB, 11
.equ	PIO_IRQ0_INTF_SM3_LSB, 11
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTF_SM2
.equ	PIO_IRQ0_INTF_SM2_RESET, 0x0
.equ	PIO_IRQ0_INTF_SM2_BITS, 0x00000400
.equ	PIO_IRQ0_INTF_SM2_MSB, 10
.equ	PIO_IRQ0_INTF_SM2_LSB, 10
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTF_SM1
.equ	PIO_IRQ0_INTF_SM1_RESET, 0x0
.equ	PIO_IRQ0_INTF_SM1_BITS, 0x00000200
.equ	PIO_IRQ0_INTF_SM1_MSB, 9
.equ	PIO_IRQ0_INTF_SM1_LSB, 9
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTF_SM0
.equ	PIO_IRQ0_INTF_SM0_RESET, 0x0
.equ	PIO_IRQ0_INTF_SM0_BITS, 0x00000100
.equ	PIO_IRQ0_INTF_SM0_MSB, 8
.equ	PIO_IRQ0_INTF_SM0_LSB, 8
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTF_SM3_TXNFULL
.equ	PIO_IRQ0_INTF_SM3_TXNFULL_RESET, 0x0
.equ	PIO_IRQ0_INTF_SM3_TXNFULL_BITS, 0x00000080
.equ	PIO_IRQ0_INTF_SM3_TXNFULL_MSB, 7
.equ	PIO_IRQ0_INTF_SM3_TXNFULL_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTF_SM2_TXNFULL
.equ	PIO_IRQ0_INTF_SM2_TXNFULL_RESET, 0x0
.equ	PIO_IRQ0_INTF_SM2_TXNFULL_BITS, 0x00000040
.equ	PIO_IRQ0_INTF_SM2_TXNFULL_MSB, 6
.equ	PIO_IRQ0_INTF_SM2_TXNFULL_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTF_SM1_TXNFULL
.equ	PIO_IRQ0_INTF_SM1_TXNFULL_RESET, 0x0
.equ	PIO_IRQ0_INTF_SM1_TXNFULL_BITS, 0x00000020
.equ	PIO_IRQ0_INTF_SM1_TXNFULL_MSB, 5
.equ	PIO_IRQ0_INTF_SM1_TXNFULL_LSB, 5
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTF_SM0_TXNFULL
.equ	PIO_IRQ0_INTF_SM0_TXNFULL_RESET, 0x0
.equ	PIO_IRQ0_INTF_SM0_TXNFULL_BITS, 0x00000010
.equ	PIO_IRQ0_INTF_SM0_TXNFULL_MSB, 4
.equ	PIO_IRQ0_INTF_SM0_TXNFULL_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTF_SM3_RXNEMPTY
.equ	PIO_IRQ0_INTF_SM3_RXNEMPTY_RESET, 0x0
.equ	PIO_IRQ0_INTF_SM3_RXNEMPTY_BITS, 0x00000008
.equ	PIO_IRQ0_INTF_SM3_RXNEMPTY_MSB, 3
.equ	PIO_IRQ0_INTF_SM3_RXNEMPTY_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTF_SM2_RXNEMPTY
.equ	PIO_IRQ0_INTF_SM2_RXNEMPTY_RESET, 0x0
.equ	PIO_IRQ0_INTF_SM2_RXNEMPTY_BITS, 0x00000004
.equ	PIO_IRQ0_INTF_SM2_RXNEMPTY_MSB, 2
.equ	PIO_IRQ0_INTF_SM2_RXNEMPTY_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTF_SM1_RXNEMPTY
.equ	PIO_IRQ0_INTF_SM1_RXNEMPTY_RESET, 0x0
.equ	PIO_IRQ0_INTF_SM1_RXNEMPTY_BITS, 0x00000002
.equ	PIO_IRQ0_INTF_SM1_RXNEMPTY_MSB, 1
.equ	PIO_IRQ0_INTF_SM1_RXNEMPTY_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTF_SM0_RXNEMPTY
.equ	PIO_IRQ0_INTF_SM0_RXNEMPTY_RESET, 0x0
.equ	PIO_IRQ0_INTF_SM0_RXNEMPTY_BITS, 0x00000001
.equ	PIO_IRQ0_INTF_SM0_RXNEMPTY_MSB, 0
.equ	PIO_IRQ0_INTF_SM0_RXNEMPTY_LSB, 0
# =============================================================================
# Register    : PIO_IRQ0_INTS
# Description : Interrupt status after masking & forcing for irq0
.equ	PIO_IRQ0_INTS_OFFSET, 0x00000178
.equ	PIO_IRQ0_INTS_BITS, 0x0000ffff
.equ	PIO_IRQ0_INTS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTS_SM7
.equ	PIO_IRQ0_INTS_SM7_RESET, 0x0
.equ	PIO_IRQ0_INTS_SM7_BITS, 0x00008000
.equ	PIO_IRQ0_INTS_SM7_MSB, 15
.equ	PIO_IRQ0_INTS_SM7_LSB, 15
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTS_SM6
.equ	PIO_IRQ0_INTS_SM6_RESET, 0x0
.equ	PIO_IRQ0_INTS_SM6_BITS, 0x00004000
.equ	PIO_IRQ0_INTS_SM6_MSB, 14
.equ	PIO_IRQ0_INTS_SM6_LSB, 14
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTS_SM5
.equ	PIO_IRQ0_INTS_SM5_RESET, 0x0
.equ	PIO_IRQ0_INTS_SM5_BITS, 0x00002000
.equ	PIO_IRQ0_INTS_SM5_MSB, 13
.equ	PIO_IRQ0_INTS_SM5_LSB, 13
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTS_SM4
.equ	PIO_IRQ0_INTS_SM4_RESET, 0x0
.equ	PIO_IRQ0_INTS_SM4_BITS, 0x00001000
.equ	PIO_IRQ0_INTS_SM4_MSB, 12
.equ	PIO_IRQ0_INTS_SM4_LSB, 12
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTS_SM3
.equ	PIO_IRQ0_INTS_SM3_RESET, 0x0
.equ	PIO_IRQ0_INTS_SM3_BITS, 0x00000800
.equ	PIO_IRQ0_INTS_SM3_MSB, 11
.equ	PIO_IRQ0_INTS_SM3_LSB, 11
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTS_SM2
.equ	PIO_IRQ0_INTS_SM2_RESET, 0x0
.equ	PIO_IRQ0_INTS_SM2_BITS, 0x00000400
.equ	PIO_IRQ0_INTS_SM2_MSB, 10
.equ	PIO_IRQ0_INTS_SM2_LSB, 10
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTS_SM1
.equ	PIO_IRQ0_INTS_SM1_RESET, 0x0
.equ	PIO_IRQ0_INTS_SM1_BITS, 0x00000200
.equ	PIO_IRQ0_INTS_SM1_MSB, 9
.equ	PIO_IRQ0_INTS_SM1_LSB, 9
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTS_SM0
.equ	PIO_IRQ0_INTS_SM0_RESET, 0x0
.equ	PIO_IRQ0_INTS_SM0_BITS, 0x00000100
.equ	PIO_IRQ0_INTS_SM0_MSB, 8
.equ	PIO_IRQ0_INTS_SM0_LSB, 8
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTS_SM3_TXNFULL
.equ	PIO_IRQ0_INTS_SM3_TXNFULL_RESET, 0x0
.equ	PIO_IRQ0_INTS_SM3_TXNFULL_BITS, 0x00000080
.equ	PIO_IRQ0_INTS_SM3_TXNFULL_MSB, 7
.equ	PIO_IRQ0_INTS_SM3_TXNFULL_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTS_SM2_TXNFULL
.equ	PIO_IRQ0_INTS_SM2_TXNFULL_RESET, 0x0
.equ	PIO_IRQ0_INTS_SM2_TXNFULL_BITS, 0x00000040
.equ	PIO_IRQ0_INTS_SM2_TXNFULL_MSB, 6
.equ	PIO_IRQ0_INTS_SM2_TXNFULL_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTS_SM1_TXNFULL
.equ	PIO_IRQ0_INTS_SM1_TXNFULL_RESET, 0x0
.equ	PIO_IRQ0_INTS_SM1_TXNFULL_BITS, 0x00000020
.equ	PIO_IRQ0_INTS_SM1_TXNFULL_MSB, 5
.equ	PIO_IRQ0_INTS_SM1_TXNFULL_LSB, 5
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTS_SM0_TXNFULL
.equ	PIO_IRQ0_INTS_SM0_TXNFULL_RESET, 0x0
.equ	PIO_IRQ0_INTS_SM0_TXNFULL_BITS, 0x00000010
.equ	PIO_IRQ0_INTS_SM0_TXNFULL_MSB, 4
.equ	PIO_IRQ0_INTS_SM0_TXNFULL_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTS_SM3_RXNEMPTY
.equ	PIO_IRQ0_INTS_SM3_RXNEMPTY_RESET, 0x0
.equ	PIO_IRQ0_INTS_SM3_RXNEMPTY_BITS, 0x00000008
.equ	PIO_IRQ0_INTS_SM3_RXNEMPTY_MSB, 3
.equ	PIO_IRQ0_INTS_SM3_RXNEMPTY_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTS_SM2_RXNEMPTY
.equ	PIO_IRQ0_INTS_SM2_RXNEMPTY_RESET, 0x0
.equ	PIO_IRQ0_INTS_SM2_RXNEMPTY_BITS, 0x00000004
.equ	PIO_IRQ0_INTS_SM2_RXNEMPTY_MSB, 2
.equ	PIO_IRQ0_INTS_SM2_RXNEMPTY_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTS_SM1_RXNEMPTY
.equ	PIO_IRQ0_INTS_SM1_RXNEMPTY_RESET, 0x0
.equ	PIO_IRQ0_INTS_SM1_RXNEMPTY_BITS, 0x00000002
.equ	PIO_IRQ0_INTS_SM1_RXNEMPTY_MSB, 1
.equ	PIO_IRQ0_INTS_SM1_RXNEMPTY_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ0_INTS_SM0_RXNEMPTY
.equ	PIO_IRQ0_INTS_SM0_RXNEMPTY_RESET, 0x0
.equ	PIO_IRQ0_INTS_SM0_RXNEMPTY_BITS, 0x00000001
.equ	PIO_IRQ0_INTS_SM0_RXNEMPTY_MSB, 0
.equ	PIO_IRQ0_INTS_SM0_RXNEMPTY_LSB, 0
# =============================================================================
# Register    : PIO_IRQ1_INTE
# Description : Interrupt Enable for irq1
.equ	PIO_IRQ1_INTE_OFFSET, 0x0000017c
.equ	PIO_IRQ1_INTE_BITS, 0x0000ffff
.equ	PIO_IRQ1_INTE_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTE_SM7
.equ	PIO_IRQ1_INTE_SM7_RESET, 0x0
.equ	PIO_IRQ1_INTE_SM7_BITS, 0x00008000
.equ	PIO_IRQ1_INTE_SM7_MSB, 15
.equ	PIO_IRQ1_INTE_SM7_LSB, 15
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTE_SM6
.equ	PIO_IRQ1_INTE_SM6_RESET, 0x0
.equ	PIO_IRQ1_INTE_SM6_BITS, 0x00004000
.equ	PIO_IRQ1_INTE_SM6_MSB, 14
.equ	PIO_IRQ1_INTE_SM6_LSB, 14
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTE_SM5
.equ	PIO_IRQ1_INTE_SM5_RESET, 0x0
.equ	PIO_IRQ1_INTE_SM5_BITS, 0x00002000
.equ	PIO_IRQ1_INTE_SM5_MSB, 13
.equ	PIO_IRQ1_INTE_SM5_LSB, 13
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTE_SM4
.equ	PIO_IRQ1_INTE_SM4_RESET, 0x0
.equ	PIO_IRQ1_INTE_SM4_BITS, 0x00001000
.equ	PIO_IRQ1_INTE_SM4_MSB, 12
.equ	PIO_IRQ1_INTE_SM4_LSB, 12
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTE_SM3
.equ	PIO_IRQ1_INTE_SM3_RESET, 0x0
.equ	PIO_IRQ1_INTE_SM3_BITS, 0x00000800
.equ	PIO_IRQ1_INTE_SM3_MSB, 11
.equ	PIO_IRQ1_INTE_SM3_LSB, 11
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTE_SM2
.equ	PIO_IRQ1_INTE_SM2_RESET, 0x0
.equ	PIO_IRQ1_INTE_SM2_BITS, 0x00000400
.equ	PIO_IRQ1_INTE_SM2_MSB, 10
.equ	PIO_IRQ1_INTE_SM2_LSB, 10
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTE_SM1
.equ	PIO_IRQ1_INTE_SM1_RESET, 0x0
.equ	PIO_IRQ1_INTE_SM1_BITS, 0x00000200
.equ	PIO_IRQ1_INTE_SM1_MSB, 9
.equ	PIO_IRQ1_INTE_SM1_LSB, 9
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTE_SM0
.equ	PIO_IRQ1_INTE_SM0_RESET, 0x0
.equ	PIO_IRQ1_INTE_SM0_BITS, 0x00000100
.equ	PIO_IRQ1_INTE_SM0_MSB, 8
.equ	PIO_IRQ1_INTE_SM0_LSB, 8
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTE_SM3_TXNFULL
.equ	PIO_IRQ1_INTE_SM3_TXNFULL_RESET, 0x0
.equ	PIO_IRQ1_INTE_SM3_TXNFULL_BITS, 0x00000080
.equ	PIO_IRQ1_INTE_SM3_TXNFULL_MSB, 7
.equ	PIO_IRQ1_INTE_SM3_TXNFULL_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTE_SM2_TXNFULL
.equ	PIO_IRQ1_INTE_SM2_TXNFULL_RESET, 0x0
.equ	PIO_IRQ1_INTE_SM2_TXNFULL_BITS, 0x00000040
.equ	PIO_IRQ1_INTE_SM2_TXNFULL_MSB, 6
.equ	PIO_IRQ1_INTE_SM2_TXNFULL_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTE_SM1_TXNFULL
.equ	PIO_IRQ1_INTE_SM1_TXNFULL_RESET, 0x0
.equ	PIO_IRQ1_INTE_SM1_TXNFULL_BITS, 0x00000020
.equ	PIO_IRQ1_INTE_SM1_TXNFULL_MSB, 5
.equ	PIO_IRQ1_INTE_SM1_TXNFULL_LSB, 5
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTE_SM0_TXNFULL
.equ	PIO_IRQ1_INTE_SM0_TXNFULL_RESET, 0x0
.equ	PIO_IRQ1_INTE_SM0_TXNFULL_BITS, 0x00000010
.equ	PIO_IRQ1_INTE_SM0_TXNFULL_MSB, 4
.equ	PIO_IRQ1_INTE_SM0_TXNFULL_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTE_SM3_RXNEMPTY
.equ	PIO_IRQ1_INTE_SM3_RXNEMPTY_RESET, 0x0
.equ	PIO_IRQ1_INTE_SM3_RXNEMPTY_BITS, 0x00000008
.equ	PIO_IRQ1_INTE_SM3_RXNEMPTY_MSB, 3
.equ	PIO_IRQ1_INTE_SM3_RXNEMPTY_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTE_SM2_RXNEMPTY
.equ	PIO_IRQ1_INTE_SM2_RXNEMPTY_RESET, 0x0
.equ	PIO_IRQ1_INTE_SM2_RXNEMPTY_BITS, 0x00000004
.equ	PIO_IRQ1_INTE_SM2_RXNEMPTY_MSB, 2
.equ	PIO_IRQ1_INTE_SM2_RXNEMPTY_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTE_SM1_RXNEMPTY
.equ	PIO_IRQ1_INTE_SM1_RXNEMPTY_RESET, 0x0
.equ	PIO_IRQ1_INTE_SM1_RXNEMPTY_BITS, 0x00000002
.equ	PIO_IRQ1_INTE_SM1_RXNEMPTY_MSB, 1
.equ	PIO_IRQ1_INTE_SM1_RXNEMPTY_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTE_SM0_RXNEMPTY
.equ	PIO_IRQ1_INTE_SM0_RXNEMPTY_RESET, 0x0
.equ	PIO_IRQ1_INTE_SM0_RXNEMPTY_BITS, 0x00000001
.equ	PIO_IRQ1_INTE_SM0_RXNEMPTY_MSB, 0
.equ	PIO_IRQ1_INTE_SM0_RXNEMPTY_LSB, 0
# =============================================================================
# Register    : PIO_IRQ1_INTF
# Description : Interrupt Force for irq1
.equ	PIO_IRQ1_INTF_OFFSET, 0x00000180
.equ	PIO_IRQ1_INTF_BITS, 0x0000ffff
.equ	PIO_IRQ1_INTF_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTF_SM7
.equ	PIO_IRQ1_INTF_SM7_RESET, 0x0
.equ	PIO_IRQ1_INTF_SM7_BITS, 0x00008000
.equ	PIO_IRQ1_INTF_SM7_MSB, 15
.equ	PIO_IRQ1_INTF_SM7_LSB, 15
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTF_SM6
.equ	PIO_IRQ1_INTF_SM6_RESET, 0x0
.equ	PIO_IRQ1_INTF_SM6_BITS, 0x00004000
.equ	PIO_IRQ1_INTF_SM6_MSB, 14
.equ	PIO_IRQ1_INTF_SM6_LSB, 14
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTF_SM5
.equ	PIO_IRQ1_INTF_SM5_RESET, 0x0
.equ	PIO_IRQ1_INTF_SM5_BITS, 0x00002000
.equ	PIO_IRQ1_INTF_SM5_MSB, 13
.equ	PIO_IRQ1_INTF_SM5_LSB, 13
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTF_SM4
.equ	PIO_IRQ1_INTF_SM4_RESET, 0x0
.equ	PIO_IRQ1_INTF_SM4_BITS, 0x00001000
.equ	PIO_IRQ1_INTF_SM4_MSB, 12
.equ	PIO_IRQ1_INTF_SM4_LSB, 12
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTF_SM3
.equ	PIO_IRQ1_INTF_SM3_RESET, 0x0
.equ	PIO_IRQ1_INTF_SM3_BITS, 0x00000800
.equ	PIO_IRQ1_INTF_SM3_MSB, 11
.equ	PIO_IRQ1_INTF_SM3_LSB, 11
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTF_SM2
.equ	PIO_IRQ1_INTF_SM2_RESET, 0x0
.equ	PIO_IRQ1_INTF_SM2_BITS, 0x00000400
.equ	PIO_IRQ1_INTF_SM2_MSB, 10
.equ	PIO_IRQ1_INTF_SM2_LSB, 10
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTF_SM1
.equ	PIO_IRQ1_INTF_SM1_RESET, 0x0
.equ	PIO_IRQ1_INTF_SM1_BITS, 0x00000200
.equ	PIO_IRQ1_INTF_SM1_MSB, 9
.equ	PIO_IRQ1_INTF_SM1_LSB, 9
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTF_SM0
.equ	PIO_IRQ1_INTF_SM0_RESET, 0x0
.equ	PIO_IRQ1_INTF_SM0_BITS, 0x00000100
.equ	PIO_IRQ1_INTF_SM0_MSB, 8
.equ	PIO_IRQ1_INTF_SM0_LSB, 8
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTF_SM3_TXNFULL
.equ	PIO_IRQ1_INTF_SM3_TXNFULL_RESET, 0x0
.equ	PIO_IRQ1_INTF_SM3_TXNFULL_BITS, 0x00000080
.equ	PIO_IRQ1_INTF_SM3_TXNFULL_MSB, 7
.equ	PIO_IRQ1_INTF_SM3_TXNFULL_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTF_SM2_TXNFULL
.equ	PIO_IRQ1_INTF_SM2_TXNFULL_RESET, 0x0
.equ	PIO_IRQ1_INTF_SM2_TXNFULL_BITS, 0x00000040
.equ	PIO_IRQ1_INTF_SM2_TXNFULL_MSB, 6
.equ	PIO_IRQ1_INTF_SM2_TXNFULL_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTF_SM1_TXNFULL
.equ	PIO_IRQ1_INTF_SM1_TXNFULL_RESET, 0x0
.equ	PIO_IRQ1_INTF_SM1_TXNFULL_BITS, 0x00000020
.equ	PIO_IRQ1_INTF_SM1_TXNFULL_MSB, 5
.equ	PIO_IRQ1_INTF_SM1_TXNFULL_LSB, 5
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTF_SM0_TXNFULL
.equ	PIO_IRQ1_INTF_SM0_TXNFULL_RESET, 0x0
.equ	PIO_IRQ1_INTF_SM0_TXNFULL_BITS, 0x00000010
.equ	PIO_IRQ1_INTF_SM0_TXNFULL_MSB, 4
.equ	PIO_IRQ1_INTF_SM0_TXNFULL_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTF_SM3_RXNEMPTY
.equ	PIO_IRQ1_INTF_SM3_RXNEMPTY_RESET, 0x0
.equ	PIO_IRQ1_INTF_SM3_RXNEMPTY_BITS, 0x00000008
.equ	PIO_IRQ1_INTF_SM3_RXNEMPTY_MSB, 3
.equ	PIO_IRQ1_INTF_SM3_RXNEMPTY_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTF_SM2_RXNEMPTY
.equ	PIO_IRQ1_INTF_SM2_RXNEMPTY_RESET, 0x0
.equ	PIO_IRQ1_INTF_SM2_RXNEMPTY_BITS, 0x00000004
.equ	PIO_IRQ1_INTF_SM2_RXNEMPTY_MSB, 2
.equ	PIO_IRQ1_INTF_SM2_RXNEMPTY_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTF_SM1_RXNEMPTY
.equ	PIO_IRQ1_INTF_SM1_RXNEMPTY_RESET, 0x0
.equ	PIO_IRQ1_INTF_SM1_RXNEMPTY_BITS, 0x00000002
.equ	PIO_IRQ1_INTF_SM1_RXNEMPTY_MSB, 1
.equ	PIO_IRQ1_INTF_SM1_RXNEMPTY_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTF_SM0_RXNEMPTY
.equ	PIO_IRQ1_INTF_SM0_RXNEMPTY_RESET, 0x0
.equ	PIO_IRQ1_INTF_SM0_RXNEMPTY_BITS, 0x00000001
.equ	PIO_IRQ1_INTF_SM0_RXNEMPTY_MSB, 0
.equ	PIO_IRQ1_INTF_SM0_RXNEMPTY_LSB, 0
# =============================================================================
# Register    : PIO_IRQ1_INTS
# Description : Interrupt status after masking & forcing for irq1
.equ	PIO_IRQ1_INTS_OFFSET, 0x00000184
.equ	PIO_IRQ1_INTS_BITS, 0x0000ffff
.equ	PIO_IRQ1_INTS_RESET, 0x00000000
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTS_SM7
.equ	PIO_IRQ1_INTS_SM7_RESET, 0x0
.equ	PIO_IRQ1_INTS_SM7_BITS, 0x00008000
.equ	PIO_IRQ1_INTS_SM7_MSB, 15
.equ	PIO_IRQ1_INTS_SM7_LSB, 15
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTS_SM6
.equ	PIO_IRQ1_INTS_SM6_RESET, 0x0
.equ	PIO_IRQ1_INTS_SM6_BITS, 0x00004000
.equ	PIO_IRQ1_INTS_SM6_MSB, 14
.equ	PIO_IRQ1_INTS_SM6_LSB, 14
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTS_SM5
.equ	PIO_IRQ1_INTS_SM5_RESET, 0x0
.equ	PIO_IRQ1_INTS_SM5_BITS, 0x00002000
.equ	PIO_IRQ1_INTS_SM5_MSB, 13
.equ	PIO_IRQ1_INTS_SM5_LSB, 13
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTS_SM4
.equ	PIO_IRQ1_INTS_SM4_RESET, 0x0
.equ	PIO_IRQ1_INTS_SM4_BITS, 0x00001000
.equ	PIO_IRQ1_INTS_SM4_MSB, 12
.equ	PIO_IRQ1_INTS_SM4_LSB, 12
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTS_SM3
.equ	PIO_IRQ1_INTS_SM3_RESET, 0x0
.equ	PIO_IRQ1_INTS_SM3_BITS, 0x00000800
.equ	PIO_IRQ1_INTS_SM3_MSB, 11
.equ	PIO_IRQ1_INTS_SM3_LSB, 11
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTS_SM2
.equ	PIO_IRQ1_INTS_SM2_RESET, 0x0
.equ	PIO_IRQ1_INTS_SM2_BITS, 0x00000400
.equ	PIO_IRQ1_INTS_SM2_MSB, 10
.equ	PIO_IRQ1_INTS_SM2_LSB, 10
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTS_SM1
.equ	PIO_IRQ1_INTS_SM1_RESET, 0x0
.equ	PIO_IRQ1_INTS_SM1_BITS, 0x00000200
.equ	PIO_IRQ1_INTS_SM1_MSB, 9
.equ	PIO_IRQ1_INTS_SM1_LSB, 9
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTS_SM0
.equ	PIO_IRQ1_INTS_SM0_RESET, 0x0
.equ	PIO_IRQ1_INTS_SM0_BITS, 0x00000100
.equ	PIO_IRQ1_INTS_SM0_MSB, 8
.equ	PIO_IRQ1_INTS_SM0_LSB, 8
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTS_SM3_TXNFULL
.equ	PIO_IRQ1_INTS_SM3_TXNFULL_RESET, 0x0
.equ	PIO_IRQ1_INTS_SM3_TXNFULL_BITS, 0x00000080
.equ	PIO_IRQ1_INTS_SM3_TXNFULL_MSB, 7
.equ	PIO_IRQ1_INTS_SM3_TXNFULL_LSB, 7
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTS_SM2_TXNFULL
.equ	PIO_IRQ1_INTS_SM2_TXNFULL_RESET, 0x0
.equ	PIO_IRQ1_INTS_SM2_TXNFULL_BITS, 0x00000040
.equ	PIO_IRQ1_INTS_SM2_TXNFULL_MSB, 6
.equ	PIO_IRQ1_INTS_SM2_TXNFULL_LSB, 6
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTS_SM1_TXNFULL
.equ	PIO_IRQ1_INTS_SM1_TXNFULL_RESET, 0x0
.equ	PIO_IRQ1_INTS_SM1_TXNFULL_BITS, 0x00000020
.equ	PIO_IRQ1_INTS_SM1_TXNFULL_MSB, 5
.equ	PIO_IRQ1_INTS_SM1_TXNFULL_LSB, 5
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTS_SM0_TXNFULL
.equ	PIO_IRQ1_INTS_SM0_TXNFULL_RESET, 0x0
.equ	PIO_IRQ1_INTS_SM0_TXNFULL_BITS, 0x00000010
.equ	PIO_IRQ1_INTS_SM0_TXNFULL_MSB, 4
.equ	PIO_IRQ1_INTS_SM0_TXNFULL_LSB, 4
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTS_SM3_RXNEMPTY
.equ	PIO_IRQ1_INTS_SM3_RXNEMPTY_RESET, 0x0
.equ	PIO_IRQ1_INTS_SM3_RXNEMPTY_BITS, 0x00000008
.equ	PIO_IRQ1_INTS_SM3_RXNEMPTY_MSB, 3
.equ	PIO_IRQ1_INTS_SM3_RXNEMPTY_LSB, 3
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTS_SM2_RXNEMPTY
.equ	PIO_IRQ1_INTS_SM2_RXNEMPTY_RESET, 0x0
.equ	PIO_IRQ1_INTS_SM2_RXNEMPTY_BITS, 0x00000004
.equ	PIO_IRQ1_INTS_SM2_RXNEMPTY_MSB, 2
.equ	PIO_IRQ1_INTS_SM2_RXNEMPTY_LSB, 2
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTS_SM1_RXNEMPTY
.equ	PIO_IRQ1_INTS_SM1_RXNEMPTY_RESET, 0x0
.equ	PIO_IRQ1_INTS_SM1_RXNEMPTY_BITS, 0x00000002
.equ	PIO_IRQ1_INTS_SM1_RXNEMPTY_MSB, 1
.equ	PIO_IRQ1_INTS_SM1_RXNEMPTY_LSB, 1
# -----------------------------------------------------------------------------
# Field       : PIO_IRQ1_INTS_SM0_RXNEMPTY
.equ	PIO_IRQ1_INTS_SM0_RXNEMPTY_RESET, 0x0
.equ	PIO_IRQ1_INTS_SM0_RXNEMPTY_BITS, 0x00000001
.equ	PIO_IRQ1_INTS_SM0_RXNEMPTY_MSB, 0
.equ	PIO_IRQ1_INTS_SM0_RXNEMPTY_LSB, 0
# =============================================================================
.endif # _HARDWARE_REGS_PIO_H
