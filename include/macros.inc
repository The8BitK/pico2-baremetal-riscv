#
# Copyright (c) 2026 The8BitK
#
# SPDX-License-Identifier: MIT
#

# Generic assembler macros shared across the project.
#
# This file contains reusable utility macros that are not specific to
# any peripheral or hardware subsystem.

# Macro: h3.block
# Description: Halts processor execution until an unblock signal is received.
#
# Inputs:
#   none
#
# Outputs:
#   none
#
.macro	h3.block
	slt	x0, x0, x0
.endm

# Macro: h3.unblock
# Description: Sends an unblock signal to the other core.
#              The h3.unblock instruction is "sticky": an h3.block will fall through immediately if any unblock signal has been received
#              since the last time the processor executed an h3.block instruction
#
# Inputs:
#   none
#
# Outputs:
#   none
#
.macro	h3.unblock
	slt	x0, x0, x1
.endm

# Macro: atomic.aliasXorBits
# Description: Computes the XOR alias address for a peripheral register by
#              setting bit 12 of src (REG_ALIAS_XOR_BITS), storing the result
#              in dst. Writing to the resulting address atomically XORs the
#              target register with the written value, with no read-modify-write.
#
# Arguments:
#   dst = destination register (written with the alias address)
#   src = register holding the base peripheral register address
#
.macro	atomic.aliasXorBits dst:req src:req
	bseti	\dst, \src, 12	#  == or REG_ALIAS_XOR_BITS
.endm

# Macro: atomic.aliasSetBits
# Description: Computes the SET alias address for a peripheral register by
#              setting bit 13 of src (REG_ALIAS_SET_BITS), storing the result
#              in dst. Writing to the resulting address atomically sets bits in
#              the target register, with no read-modify-write.
#
# Arguments:
#   dst = destination register (written with the alias address)
#   src = register holding the base peripheral register address
#
.macro	atomic.aliasSetBits dst:req src:req
	bseti	\dst, \src, 13	#  == or REG_ALIAS_SET_BITS
.endm

# Macro: atomic.aliasClrBits
# Description: Computes the CLR alias address for a peripheral register by
#              setting bits 12 and 13 of src (REG_ALIAS_CLR_BITS), storing the
#              result in dst. Writing to the resulting address atomically clears
#              bits in the target register, with no read-modify-write.
#
# Arguments:
#   dst = destination register (written with the alias address)
#   src = register holding the base peripheral register address
#
.macro	atomic.aliasClrBits dst:req src:req
	bseti	\dst, \src, 12
	bseti	\dst, \src, 13	#  == or REG_ALIAS_CLR_BITS
.endm
