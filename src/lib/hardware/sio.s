#
# Copyright (c) 2026 The8BitK
#
# SPDX-License-Identifier: MIT
#

.include	"include/hardware/regs/addressmap.inc"
.include	"include/hardware/regs/sio.inc"
.include	"include/hardware/regs/io_bank0.inc"
.include	"include/macros.inc"

# Function: sio_gpio_set_output_enable_mask
# Description: Enables GPIO output drivers for one or more GPIOs by
#              setting bits in the SIO GPIO_OE register.
#
# Inputs:
#   a0 = GPIO bitmask
#
# Outputs:
#   none
#
# Clobbers:
#   tmp registers
#
.globl	sio_gpio_set_output_enable_mask
sio_gpio_set_output_enable_mask:
	li	t0, SIO_BASE
	sw	a0, SIO_GPIO_OE_SET_OFFSET(t0)	# enable output drivers for selected GPIOs
	ret

# Function: sio_gpio_enable_output
# Description: Enables the output driver for a GPIO pin.
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
.globl	sio_gpio_enable_output
sio_gpio_enable_output:
	addi	sp, sp, -8
	sw	ra, 0(sp)
	sw	a0, 4(sp)

	li	t0, 1
	sll	a0, t0, a0			# convert GPIO number to GPIO bitmask
	call	sio_gpio_set_output_enable_mask

	lw	ra, 0(sp)
	lw	a0, 4(sp)
	addi	sp, sp, 8
	ret

# Function: sio_gpio_setup_output
# Description: Configures a GPIO pin as an SIO-controlled output.
#              Sets the pin function to SIO, enables the SIO output driver,
#              and enables the pad output buffer.
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
.globl	sio_gpio_setup_output
sio_gpio_setup_output:
	addi	sp, sp, -16
	sw	ra, 0(sp)
	sw	a0, 4(sp)
	sw	a1, 8(sp)
	sw	s0, 12(sp)

	mv	s0, a0

	li	a1, IO_BANK0_GPIO0_CTRL_FUNCSEL_VALUE_SIOB_PROC_0	# function 5: SIO_0
	call	io_bank0_set_gpio_function		# GPIO is controlled by SIO

	mv	a0, s0
	call	sio_gpio_enable_output		# allow SIO to drive the GPIO

	mv	a0, s0
	call	pads_bank0_enable_pad_output		# enable pad output and remove isolation

	lw	ra, 0(sp)
	lw	a0, 4(sp)
	lw	a1, 8(sp)
	lw	s0, 12(sp)
	addi	sp, sp, 16
	ret


# Function: sio_toggle_gpio
# Description: Toggles the state of the specified GPIO output.
#
#              The corresponding GPIO output bit is written to the SIO GPIO_OUT_XOR
#              register, causing the output state to invert.
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
.globl	sio_toggle_gpio
sio_toggle_gpio:
	li	t0, SIO_BASE
	li	t1, 1
	sll	t1, t1, a0
	sw	t1, SIO_GPIO_OUT_XOR_OFFSET(t0)
	ret

# Function: sio_set_gpio_high
# Description: Sets the specified GPIO output high.
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
.globl	sio_set_gpio_high
sio_set_gpio_high:
	li	t0, SIO_BASE
	li	t1, 1
	sll	t1, t1, a0
	sw	t1, SIO_GPIO_OUT_SET_OFFSET(t0)
	ret

# Function: sio_set_gpio_low
# Description: Sets the specified GPIO output low.
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
.globl	sio_set_gpio_low
sio_set_gpio_low:
	li	t0, SIO_BASE
	li	t1, 1
	sll	t1, t1, a0
	sw	t1, SIO_GPIO_OUT_CLR_OFFSET(t0)
	ret

# Function: sio_multicore_fifo_read_blocking
# Description: Reads one word from the inter-processor FIFO, blocking until
#              data is available. Uses h3.block to halt the processor while
#              waiting so the other core can signal via h3.unblock.
#
# Inputs:
#   none
#
# Outputs:
#   a0 = word read from the FIFO
#
# Clobbers:
#   tmp registers
#
.globl	sio_multicore_fifo_read_blocking
sio_multicore_fifo_read_blocking:
	li	t0, SIO_BASE
1:
	lw	t1, SIO_FIFO_ST_OFFSET(t0)		# read inter-processor FIFO status register
	andi	t1, t1, SIO_FIFO_ST_VLD_BITS		# is there data to read?
	bnez	t1, 2f				# yes, jump to read
	h3.block					# no, halt and wait until the other core unblocks us
	j	1b				# repeat
2:
	lw	a0, SIO_FIFO_RD_OFFSET(t0)		# read and exit
	ret

# Function: sio_multicore_fifo_write_blocking
# Description: Writes one word to the inter-processor FIFO, busy-waiting
#              until there is room. Sends an h3.unblock signal after writing
#              to wake the other core if it is halted on h3.block.
#
# Inputs:
#   a0 = word to write
#
# Outputs:
#   none
#
# Clobbers:
#   tmp registers
#
.globl	sio_multicore_fifo_write_blocking
sio_multicore_fifo_write_blocking:
	li	t0, SIO_BASE
1:
	lw	t1, SIO_FIFO_ST_OFFSET(t0)		# read inter-processor FIFO status register
	andi	t1, t1, SIO_FIFO_ST_RDY_BITS		# is there room for data to write?
	beqz	t1, 1b				# no, repeat

	sw	a0, SIO_FIFO_WR_OFFSET(t0)		# yes, write and exit
	h3.unblock				# send wakeup/unblock signal to the other core
	ret

# Function: sio_multicore_fifo_drain
# Description: Discards all pending words from the inter-processor FIFO.
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
.globl	sio_multicore_fifo_drain
sio_multicore_fifo_drain:
	li	t0, SIO_BASE
1:
	lw	t1, SIO_FIFO_ST_OFFSET(t0)		# read inter-processor FIFO status register
	andi	t1, t1, SIO_FIFO_ST_VLD_BITS		# is there data to read?
	beqz	t1, 2f				# no, exit

	lw	t1, SIO_FIFO_RD_OFFSET(t0)		# yes, read and discard data
	j	1b				# loop
2:
	ret

# Function: sio_multicore_launch_core1
# Description: Launches code on Processor Core 1 using the SIO inter-processor
#              FIFO and the ROM launch protocol.
#              See RP2350 datasheet, section 5.3: Launching code on Processor Core 1.
#
# Inputs:
#   a0 = vector table address
#   a1 = initial stack pointer for core 1
#   a2 = entry point address for core 1
#
# Outputs:
#   none
#
# Clobbers:
#   tmp registers
#
.globl	sio_multicore_launch_core1
sio_multicore_launch_core1:
	addi	sp, sp, -28
	sw	ra, 0(sp)
	sw	a0, 4(sp)
	sw	a1, 8(sp)
	sw	a2, 12(sp)
	sw	s0, 16(sp)
	sw	s1, 20(sp)
	sw	s2, 24(sp)

	la	s0, .L_launch_core_cmd_sequence_start	# cmd sequence
	sw	a0, 12(s0)			# set vector table
	sw	a1, 16(s0)			# set stack pointer
	sw	a2, 20(s0)			# set entry point
.L_restart_cmd_sequence:
	la	s0, .L_launch_core_cmd_sequence_start
	la	s1, .L_launch_core_cmd_sequence_end
.L_next_cmd:
	lw	s2, 0(s0)				# read next command
	bnez	s2, .L_write_cmd			# skip FIFO drain if not a zero command
	call	sio_multicore_fifo_drain		# drain the old queue, just in case (see datasheet)
.L_write_cmd:
	mv	a0, s2
	call	sio_multicore_fifo_write_blocking	# send the current command to the other core
	call	sio_multicore_fifo_read_blocking	# read it back (result in a0)
	bne	s2, a0, .L_restart_cmd_sequence	# restart if they don't match
	addi	s0, s0, 4				# advance to the next command
	blt	s0, s1, .L_next_cmd

	lw	ra, 0(sp)
	lw	a0, 4(sp)
	lw	a1, 8(sp)
	lw	a2, 12(sp)
	lw	s0, 16(sp)
	lw	s1, 20(sp)
	lw	s2, 24(sp)
	addi	sp, sp, 28
	ret

.section	.data
.L_launch_core_cmd_sequence_start:
	.word	0
	.word	0
	.word	1
	.word	0				# vector_table
	.word	0				# stack_pointer
	.word	0				# entry_point
.L_launch_core_cmd_sequence_end:
