#
# Copyright (c) 2026 The8BitK
#
# SPDX-License-Identifier: MIT
#

.include	"include/hardware/regs/addressmap.inc"
.include	"include/hardware/regs/io_bank0.inc"

# Function: io_bank0_set_gpio_function
# Description: Selects the function of a GPIO pin by writing the
#              GPIO control register in IO_BANK0.
#
# Inputs:
#   a0 = GPIO number
#   a1 = GPIOx_CTRL register value
#
# Outputs:
#   none
#
.globl	io_bank0_set_gpio_function
io_bank0_set_gpio_function:
	li	t0, IO_BANK0_BASE
	sll	t1, a0, 3				# convert GPIO number to GPIO register offset (8 bytes per register)
	add	t1, t1, t0			# compute GPIO register base address
	sw	a1, IO_BANK0_GPIO0_CTRL_OFFSET(t1)	# select GPIO function
	ret
