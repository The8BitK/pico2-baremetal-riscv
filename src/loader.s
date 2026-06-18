#
# Copyright (c) 2026 The8BitK
#
# SPDX-License-Identifier: MIT
#

# First-stage loader. Runs directly from FLASH and is responsible for
# copying the vector table, .text, and .rodata sections from their FLASH
# load addresses (LMA) into their RAM run addresses (VMA), then transfers
# control to _start_main in RAM.
#
# Execution flow:
#   ROM bootloader → _start (FLASH) → _start_main (RAM)

.section	.flash

# Function: _start
# Description: Entry point called by the ROM bootloader.
#              Copies the .vector_table, .text, .rodata and .data sections
#              from their FLASH load addresses into RAM, then jumps to
#              _start_main. Does not return.
#
# Inputs:
#   none
#
# Outputs:
#   none (jumps to _start_main)
#
.globl	_start
_start:
	la	a0, _sivector_table
	la	a1, _svector_table
	la	a2, _evector_table
	call	.Lcopy

	la	a0, _sitext
	la	a1, _stext
	la	a2, _etext
	call	.Lcopy

	la	a0, _sirodata
	la	a1, _srodata
	la	a2, _erodata
	call	.Lcopy

	la	a0, _sidata
	la	a1, _sdata
	la	a2, _edata
	call	.Lcopy

	la	t0, _start_main
	jr	t0

# Function: .Lcopy
# Description: Copies words from a source address in FLASH to a destination
#              range in RAM. Both addresses and the section size must be
#              4-byte aligned (enforced by the linker script).
#
# Inputs:
#   a0 = source start address (FLASH load address, LMA)
#   a1 = destination start address (RAM run address, VMA)
#   a2 = destination end address (RAM, exclusive)
#
# Outputs:
#   none
#
.Lcopy:
	bgeu	a1, a2, 2f	# skip if start >= end (empty section)
1:	lw	t3, 0(a0)
	sw	t3, 0(a1)
	addi	a0, a0, 4
	addi	a1, a1, 4
	bltu	a1, a2, 1b
2:	ret
