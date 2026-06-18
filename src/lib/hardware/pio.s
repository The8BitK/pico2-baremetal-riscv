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
.globl	pio_load_program
pio_load_program:
	mv	t0, a0			# PIO base address
	sh2add	t0, a1, t0		# add PIO program offset in bytes: t0 += a1 << 2
	mv	t1, a2			# program start address

1:	lhu	t2, 0(t1)			# load 16-bit instruction
	sh	t2, PIO_INSTR_MEM0_OFFSET(t0)	# store to PIO memory

	addi	t1, t1, 2			# next memory address (+2 bytes)
	addi	t0, t0, 4			# next PIO memory address (+4 bytes)
	ble	t1, a3, 1b

	ret
