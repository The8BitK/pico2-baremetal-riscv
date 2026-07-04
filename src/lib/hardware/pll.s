#
# Copyright (c) 2026 The8BitK
#
# SPDX-License-Identifier: MIT
#

.include	"include/hardware/regs/addressmap.inc"
.include	"include/hardware/regs/pll.inc"

# Function: pll_sys_start
# Description: Configures and starts the system PLL.
#
#              The PLL reference divider and feedback divider are
#              programmed, the PLL and VCO are powered on, and
#              execution waits until the PLL reports a locked state.
#
#              After lock is achieved, the post-dividers are configured
#              and enabled.
#
# Inputs:
#   a0 = REFDIV value (reference divider)
#   a1 = FBDIV value (feedback divider)
#   a2 = POSTDIV1 value (post-divider1)
#   a3 = POSTDIV2 value (post-divider2)
#
# Outputs:
#   none
#
# Clobbers:
#   tmp registers
#
# The programming sequence for the PLL is as follows:
# 1. Program the reference clock divider.
# 2. Program the feedback divider.
# 3. Turn on the main power and VCO.
# 4. Wait for the VCO to achieve a stable frequency, as indicated by the LOCK status flag.
# 5. Set up post dividers and turn them on.
#
.globl	pll_sys_start
pll_sys_start:
	li	t0, PLL_SYS_BASE
	lw	t1, PLL_CS_OFFSET(t0)		# configure the PLL dividers
	li	t2, ~PLL_CS_REFDIV_BITS		# mask off REFDIV field
	and	t1, t1, t2
	or	t1, t1, a0			# insert REFDIV value
	sw	t1, PLL_CS_OFFSET(t0)		# update PLL_CS register
	sw	a1, PLL_FBDIV_INT_OFFSET(t0)		# set FBDIV value

	li	t2, PLL_SYS_BASE + REG_ALIAS_CLR_BITS
	li	t1, PLL_PWR_PD_BITS | PLL_PWR_VCOPD_BITS
	sw	t1, PLL_PWR_OFFSET(t2)		# clear PD and VCOPD bits (power up PLL and VCO)

1:	lw	t1, PLL_CS_OFFSET(t0)		# poll PLL lock status
	bext	t1, t1, PLL_CS_LOCK_LSB		# extract LOCK bit		
	beqz	t1, 1b				# wait until PLL locks

	slli	t1, a2, 16			# place POSTDIV1 into bits [18:16]
	slli	t2, a3, 12			# place POSTDIV2 into bits [14:12]
	or	t1, t1, t2			# combine post-divider fields
	sw	t1, PLL_PRIM_OFFSET(t0)		# configure the post-dividers

	li	t2, PLL_SYS_BASE + REG_ALIAS_CLR_BITS	# enable the post-divider stage
	li	t1, PLL_PWR_POSTDIVPD_BITS
	sw	t1, PLL_PWR_OFFSET(t2)
	ret
