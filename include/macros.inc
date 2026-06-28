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
	slt x0, x0, x0
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
	slt x0, x0, x1
.endm
