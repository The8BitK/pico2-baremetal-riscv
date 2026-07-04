#
# Copyright (c) 2026 The8BitK
#
# SPDX-License-Identifier: MIT
#

.include	"include/hardware/regs/addressmap.inc"
.include	"include/hardware/regs/xosc.inc"

# Function: xosc_start
# Description: Starts the external crystal oscillator (XOSC) and waits
#              until it reports a stable output.
#
#              The oscillator startup delay is configured before
#              enabling the XOSC. Execution does not return until the
#              STABLE status bit is asserted.
#
# Inputs:
#   a0 = startup delay
#
# Outputs:
#   none
#
# Clobbers:
#   tmp registers
#
.globl	xosc_start
xosc_start:
	li	t0, XOSC_BASE
	sw	a0, XOSC_STARTUP_OFFSET(t0)		# set startup delay

	li	t1, (XOSC_CTRL_ENABLE_VALUE_ENABLE << XOSC_CTRL_ENABLE_LSB) | XOSC_CTRL_FREQ_RANGE_VALUE_1_15MHZ
	sw	t1, XOSC_CTRL_OFFSET(t0)		# enable the crystal oscillator in the 1-15 MHz frequency range

	li	t1, XOSC_STATUS_STABLE_BITS
1:	lw	t2, XOSC_STATUS_OFFSET(t0)		# wait until the XOSC stabilizes
	and	t2, t2, t1
	beqz	t2, 1b
	ret
