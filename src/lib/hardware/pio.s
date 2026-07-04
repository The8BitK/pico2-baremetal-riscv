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

	srli	t4, t2, 13			# is this a "jmp' instruction (bits: 13, 14, 15 == zero)?
	bnez	t4, 2f				# nope, branch to store the instruction
	and	t4, t2, t3			# yes, store old "jmp" address in t4
	add	t4, t4, a1			# add offset from a1
	and	t4, t4, t3			# remove overflow bit(s)
	andn	t2, t2, t3			# clear old "jmp" address bits from the original jump
	or	t2, t2, t4			# set the new jump address

2:	sw	t2, PIO_INSTR_MEM0_OFFSET(t0)		# store to PIO memory
	addi	t1, t1, 2				# next memory address (+2 bytes)
	addi	t0, t0, 4				# next PIO memory address (+4 bytes)
	ble	t1, a3, 1b

	ret


# Inputs:
#   a0 = PIOx_BASE
#   a1 = StateMachine #
#   a2 = out pins
#   a3 = set pins
#   a4 = sideset pins
#   a5 = in pins
#
# Clobbers:
#   tmp registers
#
.globl	pio_sm_configure_pins
pio_sm_configure_pins:
	li	t0, PIO_SM1_PINCTRL_OFFSET - PIO_SM0_PINCTRL_OFFSET # distance between SMx config registers
	mul	t1, t0, a1			# SMx control registers offset
	add	t1, t1, a0			# SMx control registers base address: PIO_BASE + (SMx_CTRL_OFFSET*x)

	andi	t2, a2, 0x1F			# OUT_BASE

	srli	t3, a2, 8				# OUT_COUNT: (a2 >> 8) << PIO_SM0_PINCTRL_OUT_COUNT_LSB
	andi	t3, t3, 0x1F
	slli	t3, t3, PIO_SM0_PINCTRL_OUT_COUNT_LSB
	or	t2, t2, t3

	andi	t3, a3, 0x1F			# SET_BASE: (a3 & 0b11111) << PIO_SM0_PINCTRL_SET_BASE_LSB
	slli	t3, t3, PIO_SM0_PINCTRL_SET_BASE_LSB
	or	t2, t2, t3

	srli	t3, a3, 8				# SET_COUNT: (a3 >> 8) << PIO_SM0_PINCTRL_SET_COUNT_LSB
	andi	t3, t3, 0x07
	slli	t3, t3, PIO_SM0_PINCTRL_SET_COUNT_LSB
	or	t2, t2, t3

	andi	t3, a4, 0x1F			# SIDESET_BASE: (a4 & 0b11111) << PIO_SM0_PINCTRL_SIDESET_BASE_LSB
	slli	t3, t3, PIO_SM0_PINCTRL_SIDESET_BASE_LSB
	or	t2, t2, t3

	srli	t3, a4, 8				# SIDESET_COUNT: (a4 >> 8) << PIO_SM0_PINCTRL_SIDESET_COUNT_LSB
	andi	t3, t3, 0x07
	slli	t3, t3, PIO_SM0_PINCTRL_SIDESET_COUNT_LSB
	or	t2, t2, t3

	andi	t3, a5, 0x1F			# IN_BASE: (a5 & 0b11111) << PIO_SM0_PINCTRL_IN_BASE_LSB
	slli	t3, t3, PIO_SM0_PINCTRL_IN_BASE_LSB
	or	t2, t2, t3

	sw	t2, PIO_SM0_PINCTRL_OFFSET(t1)	# save SMx_PINCTRL

	srli	t3, a5, 8				# IN_COUNT: a5 >> 8
	andi	t3, t3, 0x1F

	lw	t2, PIO_SM0_SHIFTCTRL_OFFSET(t1)	# read SMx_SHIFTCTRL
	addi	t2, t2, 0x1F			# clear old IN_BITS
	or	t2, t2, t3			# apply new ones
	sw	t2, PIO_SM0_SHIFTCTRL_OFFSET(t1)	# save SMx_SHIFTCTRL

	ret


# Inputs:
#   a0 = PIOx_BASE
#   a1 = StateMachine number
#   a2 = pindirs
#
# Clobbers:
#   tmp registers
#
.globl	pio_sm_configure_pindirs
pio_sm_configure_pindirs:
	li	t0, PIO_SM1_INSTR_OFFSET - PIO_SM0_INSTR_OFFSET # distance between SMx config registers
	mul	t0, t0, a1			# SMx control registers offset
	add	t0, t0, a0			# SMx control registers base address: PIO_BASE + (SMx_CTRL_OFFSET*x)

	li	t2, 0b1110000010000000		# craft PIO "set pindirs" instruction
	andi	t1, a2, 0x1F			# extract PINDIRS
	or	t1, t1, t2			# apply PINDIRS

	sw	t1, PIO_SM0_INSTR_OFFSET(t0)		# execute instruction
	ret


# Inputs:
#   a0 = PIOx_BASE
#   a1 = StateMachine number
#   a2 = wrap_bottom
#   a3 = wrap_top
.globl	pio_sm_configure_wrap
pio_sm_configure_wrap:
	li	t0, PIO_SM1_EXECCTRL_OFFSET - PIO_SM0_EXECCTRL_OFFSET # distance between SMx config registers
	mul	t0, t0, a1
	add	t0, t0, a0

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
