#
# Copyright (c) 2026 The8BitK
#
# SPDX-License-Identifier: MIT
#

.include	"include/hardware/regs/addressmap.inc"
.include	"include/hardware/regs/pads_bank0.inc"

# Function: pads_bank0_gpio_clear_bits
# Description: Clears one or more bits in a PADS_BANK0 GPIO register
#              using the register clear alias.
#
# Inputs:
#   a0 = GPIO number
#   a1 = bitmask of bits to clear
#
# Outputs:
#   none
#
# Clobbers:
#   tmp registers
#
.globl	pads_bank0_gpio_clear_bits
pads_bank0_gpio_clear_bits:
	li	t0, PADS_BANK0_BASE + REG_ALIAS_CLR_BITS
	sll	t1, a0, 2					# convert GPIO number to register offset
	add	t0, t0, t1				# compute GPIO register address
	sw	a1, PADS_BANK0_GPIO0_OFFSET(t0)
	ret

# Function: pads_bank0_enable_pad_output
# Description: Enables the GPIO pad output path by removing pad isolation
#              and enabling the output driver.
#
#              This function clears:
#                - OD  (Output Disable)
#                - ISO (Pad Isolation)
#
#              Note: This does NOT configure GPIO function (IO_BANK0)
#              and does NOT enable SIO output enable (GPIO_OE).
#              It only prepares the pad electrically for output operation.
#
# Inputs:
#   a0 = GPIO number
#
# Outputs:
#   none
#
# Clobbers:
#   tmp registers
#
.globl	pads_bank0_enable_pad_output
pads_bank0_enable_pad_output:
	addi	sp, sp, -8
	sw	ra, 0(sp)
	sw	a1, 4(sp)

	li	a1, PADS_BANK0_GPIO0_OD_BITS | PADS_BANK0_GPIO0_ISO_BITS	# clear OD (output disable) and ISO (pad isolation)
	call	pads_bank0_gpio_clear_bits

	lw	ra, 0(sp)
	lw	a1, 4(sp)
	addi	sp, sp, 8
	ret
