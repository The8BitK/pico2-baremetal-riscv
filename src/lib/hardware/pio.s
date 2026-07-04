#
# Copyright (c) 2026 The8BitK
#
# SPDX-License-Identifier: MIT
#

.include	"include/hardware/regs/addressmap.inc"
.include	"include/hardware/regs/pio.inc"

# Function: pio_load_program
# Description: Copies a PIO program from host memory (flash/SRAM) into the
#              PIO instruction memory, starting at the given slot offset.
#              JMP instructions are rewritten to adjust their absolute target
#              addresses by the slot offset so they remain correct after copy.
#
# Inputs:
#   a0 = PIOx_BASE
#   a1 = PIO instruction memory offset (in PIO instructions)
#   a2 = program start address
#   a3 = program end address (address of the last instruction)
#
# Outputs:
#   none
#
# Clobbers:
#   tmp registers
#
.globl	pio_load_program
pio_load_program:
	mv	t0, a0				# PIO base address
	sh2add	t0, a1, t0			# add PIO program offset in bytes: t0 += a1 << 2
	mv	t1, a2				# program start address
	li	t3, 0b11111			# bit mask to adjust "jmp" instructions

1:	lhu	t2, 0(t1)				# load 16-bit instruction

	srli	t4, t2, 13			# is this a "jmp" instruction (bits: 13, 14, 15 == zero)?
	bnez	t4, 2f				# nope, branch to store the instruction
	and	t4, t2, t3			# yes, store old "jmp" address in t4
	add	t4, t4, a1			# add offset from a1
	and	t4, t4, t3			# remove overflow bit(s)
	andn	t2, t2, t3			# clear old "jmp" address bits from the original jump
	or	t2, t2, t4			# set the new jump address

2:	sw	t2, PIO_INSTR_MEM0_OFFSET(t0)		# store to PIO memory
	addi	t1, t1, 2				# next memory address (+2 bytes)
	addi	t0, t0, 4				# next PIO memory address (+4 bytes)
	bleu	t1, a3, 1b

	ret

# Macro: pio.smCtrlBase
# Description: Computes the base address of a state machine's control register
#              block and stores it in dst. The result is:
#              dst = pio_base + (SM_stride * sm_num)
#              where SM_stride = PIO_SM1_EXECCTRL_OFFSET - PIO_SM0_EXECCTRL_OFFSET.
#              Used by pio_sm_configure_* functions to address per-SM registers
#              (PINCTRL, SHIFTCTRL, EXECCTRL, CLKDIV, INSTR) relative to a
#              common base.
#
# Arguments:
#   dst      = destination register (written with the computed base address)
#   pio_base = register holding PIOx_BASE
#   sm_num   = register holding the state machine number (0-based)
#
.macro	pio.smCtrlBase dst:req pio_base:req sm_num:req
	.ifc \dst,\pio_base
		error "dst and pio_base must be different registers"
	.endif
	.ifc \dst,\sm_num
		.error "dst and sm_num must be different registers"
	.endif

	li	\dst, PIO_SM1_EXECCTRL_OFFSET - PIO_SM0_EXECCTRL_OFFSET
	mul	\dst, \dst, \sm_num
	add	\dst, \dst, \pio_base
.endm

# Function: pio_sm_configure_pins
# Description: Configures the PINCTRL register for the given state machine,
#              setting the base pin and count for the OUT, SET, SIDESET, and
#              IN pin groups. Also updates the IN_COUNT field in SHIFTCTRL.
#              Each pin argument packs two fields: byte 0 (bits[4:0]) = base
#              pin number, byte 1 (bits[12:8]) = pin count. Pass 0 for any
#              unused group.
#
# Inputs:
#   a0 = PIOx_BASE
#   a1 = StateMachine number
#   a2 = out pins
#   a3 = set pins
#   a4 = sideset pins
#   a5 = in pins
#
# Outputs:
#   none
#
# Clobbers:
#   tmp registers
#
.globl	pio_sm_configure_pins
pio_sm_configure_pins:
	pio.smCtrlBase t0, a0, a1			# get SMx base adress into t0

	andi	t1, a2, 0x1F			# OUT_BASE
	srli	t2, a2, 8				# OUT_COUNT: (a2 >> 8) << PIO_SM0_PINCTRL_OUT_COUNT_LSB
	andi	t2, t2, 0x3F			# 0-32 range
	slli	t2, t2, PIO_SM0_PINCTRL_OUT_COUNT_LSB
	or	t1, t1, t2

	andi	t2, a3, 0x1F			# SET_BASE: (a3 & 0b11111) << PIO_SM0_PINCTRL_SET_BASE_LSB
	slli	t2, t2, PIO_SM0_PINCTRL_SET_BASE_LSB
	or	t1, t1, t2
	srli	t2, a3, 8				# SET_COUNT: (a3 >> 8) << PIO_SM0_PINCTRL_SET_COUNT_LSB
	andi	t2, t2, 0x07
	slli	t2, t2, PIO_SM0_PINCTRL_SET_COUNT_LSB
	or	t1, t1, t2

	andi	t2, a4, 0x1F			# SIDESET_BASE: (a4 & 0b11111) << PIO_SM0_PINCTRL_SIDESET_BASE_LSB
	slli	t2, t2, PIO_SM0_PINCTRL_SIDESET_BASE_LSB
	or	t1, t1, t2
	srli	t2, a4, 8				# SIDESET_COUNT: (a4 >> 8) << PIO_SM0_PINCTRL_SIDESET_COUNT_LSB
	andi	t2, t2, 0x07
	slli	t2, t2, PIO_SM0_PINCTRL_SIDESET_COUNT_LSB
	or	t1, t1, t2

	andi	t2, a5, 0x1F			# IN_BASE: (a5 & 0b11111) << PIO_SM0_PINCTRL_IN_BASE_LSB
	slli	t2, t2, PIO_SM0_PINCTRL_IN_BASE_LSB
	or	t1, t1, t2

	sw	t1, PIO_SM0_PINCTRL_OFFSET(t0)	# save SMx_PINCTRL

	srli	t2, a5, 8				# IN_COUNT: a5 >> 8
	andi	t2, t2, 0x1F

	lw	t1, PIO_SM0_SHIFTCTRL_OFFSET(t0)	# read SMx_SHIFTCTRL
	li	t3, 0x1F
	andn	t1, t1, t3			# clear old IN_BITS
	or	t1, t1, t2			# apply new ones
	sw	t1, PIO_SM0_SHIFTCTRL_OFFSET(t0)	# save SMx_SHIFTCTRL

	ret

# Function: pio_sm_configure_pindirs
# Description: Sets pin directions for the given state machine by injecting a
#              PIO "set pindirs" instruction via the SMx_INSTR register.
#
# Inputs:
#   a0 = PIOx_BASE
#   a1 = StateMachine number
#   a2 = pindirs
#
# Outputs:
#   none
#
# Clobbers:
#   tmp registers
#
.globl	pio_sm_configure_pindirs
pio_sm_configure_pindirs:
	pio.smCtrlBase t0, a0, a1			# get SMx base adress into t0

	li	t2, 0b1110000010000000		# craft PIO "set pindirs" instruction
	andi	t1, a2, 0x1F			# extract PINDIRS
	or	t1, t1, t2			# apply PINDIRS

	sw	t1, PIO_SM0_INSTR_OFFSET(t0)		# execute instruction
	ret

# Function: pio_sm_configure_wrap
# Description: Configures the program wrap boundaries in the EXECCTRL register
#              for the given state machine. When the PC reaches wrap_top, it
#              wraps to wrap_bottom on the next cycle.
#
# Inputs:
#   a0 = PIOx_BASE
#   a1 = StateMachine number
#   a2 = wrap_bottom
#   a3 = wrap_top
#
# Outputs:
#   none
#
# Clobbers:
#   tmp registers
#
.globl	pio_sm_configure_wrap
pio_sm_configure_wrap:
	pio.smCtrlBase t0, a0, a1			# get SMx base adress into t0

	lw	t1, PIO_SM0_EXECCTRL_OFFSET(t0)	# read EXECCTRL register
	li	t2, ~(PIO_SM0_EXECCTRL_WRAP_TOP_BITS | PIO_SM0_EXECCTRL_WRAP_BOTTOM_BITS)
	and	t1, t1, t2			# clear WRAP bits

	andi	t2, a2, 0x1F
	slli	t2, t2, PIO_SM0_EXECCTRL_WRAP_BOTTOM_LSB

	andi	t3, a3, 0x1F
	slli	t3, t3, PIO_SM0_EXECCTRL_WRAP_TOP_LSB

	or	t1, t1, t2
	or	t1, t1, t3

	sw	t1, PIO_SM0_EXECCTRL_OFFSET(t0)
	ret
