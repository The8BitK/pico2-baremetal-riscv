#
# Copyright (c) 2026 The8BitK
#
# SPDX-License-Identifier: MIT
#

.include	"include/hardware/regs/addressmap.inc"
.include	"include/hardware/regs/clocks.inc"

# Function: clocks_set_clk_ref_source_xosc
# Description: Selects the external crystal oscillator (XOSC) as the
#              source of clk_ref and waits for the clock mux to report
#              the new source as active.
#
# Inputs:
#   none
#
# Outputs:
#   none
#
# Clobbers:
#   tmp registers
#
.globl	clocks_set_clk_ref_source_xosc
clocks_set_clk_ref_source_xosc:
	li	t0, CLOCKS_BASE
	li	t1, CLOCKS_CLK_REF_CTRL_SRC_VALUE_XOSC_CLKSRC	# select XOSC as the clk_ref source
	sw	t1, CLOCKS_CLK_REF_CTRL_OFFSET(t0)

1:	lw	t1, CLOCKS_CLK_REF_SELECTED_OFFSET(t0)		# read active clk_ref source
	bext	t1, t1, CLOCKS_CLK_REF_CTRL_SRC_VALUE_XOSC_CLKSRC # extract XOSC_CLKSRC bit
	beqz	t1, 1b					# wait until the bit is set
	ret

# Function: clocks_set_clk_sys_source_clk_ref
# Description: Selects clk_ref as the source of clk_sys.
#
#              Only the SRC field is modified. The AUXSRC field is
#              preserved so that a previously configured auxiliary
#              clock source remains unchanged.
#
# Inputs:
#   none
#
# Outputs:
#   none
#
# Clobbers:
#   tmp registers
#
.globl	clocks_set_clk_sys_source_clk_ref
clocks_set_clk_sys_source_clk_ref:
	li	t0, CLOCKS_BASE
	lw	t1, CLOCKS_CLK_SYS_CTRL_OFFSET(t0)		# read current value of CLK_SYS_CTRL
	li	t2, ~CLOCKS_CLK_SYS_CTRL_SRC_BITS		# preserve AUXSRC bits while updating SRC
	and	t1, t1, t2				# CLK_REF is 0, no need to OR anything
	sw	t1, CLOCKS_CLK_SYS_CTRL_OFFSET(t0)

1:	lw	t1, CLOCKS_CLK_SYS_SELECTED_OFFSET(t0)		# read active clk_sys source
	bext	t1, t1, CLOCKS_CLK_SYS_CTRL_SRC_VALUE_CLK_REF	# extract CLK_REF bit
	beqz	t1, 1b					# wait until the bit is set
	ret

# Function: clocks_set_clk_sys_aux_source_pll_sys
# Description: Selects PLL_SYS as the auxiliary clock source for
#              clk_sys.
#
#              Only the AUXSRC field is modified. The primary SRC field
#              is preserved.
#
#              This function does not switch clk_sys to the auxiliary
#              source. To use PLL_SYS as the clk_sys source, the SRC
#              field must subsequently be configured to select AUX.
#
# Inputs:
#   none
#
# Outputs:
#   none
#
# Clobbers:
#   tmp registers
#
.globl	clocks_set_clk_sys_aux_source_pll_sys
clocks_set_clk_sys_aux_source_pll_sys:
	li	t0, CLOCKS_BASE
	lw	t1, CLOCKS_CLK_SYS_CTRL_OFFSET(t0)
	li	t2, ~CLOCKS_CLK_SYS_CTRL_AUXSRC_BITS		# preserve SRC bits while updating AUXSRC.
	and	t1, t1, t2				# CLKSRC_PLL_SYS is 0, no need to OR anything
	sw	t1, CLOCKS_CLK_SYS_CTRL_OFFSET(t0)
	ret

# Function: clocks_set_clk_sys_source_aux
# Description: Selects the auxiliary clock source as the source of
#              clk_sys and waits for the clock mux to report the new
#              source as active.
#
#              The AUXSRC field is preserved. The auxiliary source must
#              be configured before calling this function.
#
# Inputs:
#   none
#
# Outputs:
#   none
#
# Clobbers:
#   tmp registers
#
.globl	clocks_set_clk_sys_source_aux
clocks_set_clk_sys_source_aux:
	li	t0, CLOCKS_BASE
	lw	t1, CLOCKS_CLK_SYS_CTRL_OFFSET(t0)
	bset	t1, t1, CLOCKS_CLK_SYS_CTRL_SRC_LSB			# set SRC bit to CLKSRC_CLK_SYS_AUX
	sw	t1, CLOCKS_CLK_SYS_CTRL_OFFSET(t0)			# save changes

1:	lw	t1, CLOCKS_CLK_SYS_SELECTED_OFFSET(t0)			# read active clk_sys source
	bext	t1, t1, CLOCKS_CLK_SYS_CTRL_SRC_VALUE_CLKSRC_CLK_SYS_AUX	# extract SRC bit
	beqz	t1, 1b						# wait until the bit is set
	ret
