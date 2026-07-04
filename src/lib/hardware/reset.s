#
# Copyright (c) 2026 The8BitK
#
# SPDX-License-Identifier: MIT
#

.include	"include/hardware/regs/addressmap.inc"
.include	"include/hardware/regs/resets.inc"
.include	"include/macros.inc"

# Function: unreset_subsystems
# Description: Takes hardware components out of reset (activates).
#
# Inputs:
#   a0 = hardware component bits, see RESETS_RESET register
#
# Outputs:
#   none
#
# Clobbers:
#   tmp registers
#
.globl	unreset_subsystems
unreset_subsystems:
	li	t0, RESETS_BASE
	atomic.aliasClrBits	t0, t0
	sw	a0, 0(t0)				# clear reset bits for selected subsystems

	li	t0, RESETS_BASE
1:	lw	t1, RESETS_RESET_DONE_OFFSET(t0)	# read reset completion status
	and	t1, t1, a0			# keep only requested subsystem bits
	bne	t1, a0, 1b			# wait until all subsystems are active
	ret

# Function: reset_subsystems
# Description: Takes hardware components into reset (deactivates).
#
# Inputs:
#   a0 = hardware component bits, see RESETS_RESET register
#
# Outputs:
#   none
#
# Clobbers:
#   tmp registers
#
.globl	reset_subsystems
reset_subsystems:
	li	t0, RESETS_BASE
	atomic.aliasSetBits	t0, t0
	sw	a0, 0(t0)				# place selected subsystems into reset
	ret
