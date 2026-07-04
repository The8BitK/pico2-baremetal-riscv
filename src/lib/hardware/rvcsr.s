#
# Copyright (c) 2026 The8BitK
#
# SPDX-License-Identifier: MIT
#

.include	"include/hardware/regs/rvcsr.inc"

# Function: rvcsr_disable_interrupts
# Description: Disables interrupts globally by clearing the MIE bit in mstatus.
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
.globl	rvcsr_disable_interrupts
rvcsr_disable_interrupts:
	li	t0, RVCSR_MSTATUS_MIE_BITS
	csrc	RVCSR_MSTATUS_OFFSET, t0
	ret


# Function: rvcsr_enable_interrupts
# Description: Enables interrupts globally by setting the MIE bit in mstatus.
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
.globl	rvcsr_enable_interrupts
rvcsr_enable_interrupts:
	li	t0, RVCSR_MSTATUS_MIE_BITS
	csrs	RVCSR_MSTATUS_OFFSET, t0
	ret

# Function: rvcsr_disable_all_machine_interrupts
# Description: Disables all machine-mode interrupt sources by clearing mie.
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
.globl	rvcsr_disable_all_machine_interrupts
rvcsr_disable_all_machine_interrupts:
	csrw	RVCSR_MIE_OFFSET, zero
	ret

# Function: rvcsr_enable_machine_interrupts
# Description: Enables one or more machine-mode interrupt sources by
#              setting bits in mie.
#
# Inputs:
#   a0 = interrupt enable bits to set, see mie register definitions
#
# Outputs:
#   none
#
# Clobbers:
#   tmp registers
#
.globl	rvcsr_enable_machine_interrupts
rvcsr_enable_machine_interrupts:
	csrs	RVCSR_MIE_OFFSET, a0
	ret

# Function: rvcsr_set_mtvec_vectored_mode
# Description: Configures the mtvec CSR for vectored trap handling.
#              The mtvec mode field is set to vectored mode while
#              preserving the trap vector base address.
#
#              In vectored mode:
#                Exceptions use the base address in mtvec.
#                Interrupts jump to BASE + (4 × cause).
#
# Inputs:
#   a0 = vector table base address (must satisfy mtvec alignment requirements)
#
# Outputs:
#   none
#
# Clobbers:
#   tmp registers
#
.globl	rvcsr_set_mtvec_vectored_mode
rvcsr_set_mtvec_vectored_mode:
	li	t0, ~RVCSR_MTVEC_MODE_BITS
	and	t0, t0, a0
	ori	t0, t0, RVCSR_MTVEC_MODE_VALUE_VECTORED
	csrw	RVCSR_MTVEC_OFFSET, t0
	ret

# Function: rvcsr_enable_irqs_in_window
# Description: Enables one or more machine external interrupts within
#              a specified IRQ window. The window bitmask is placed in
#              bits [31:16] and the window index is placed in bits [15:0]
#              before writing the combined value to the MEIEA CSR.
#
# Inputs:
#   a0 = IRQ window bitmask
#   a1 = IRQ window index
#
# Outputs:
#   none
#
# Clobbers:
#   tmp registers
#
.globl	rvcsr_enable_irqs_in_window
rvcsr_enable_irqs_in_window:
	slli	t0, a0, 16	# place the window bitmask in bits [31:16]
	or	t0, t0, a1	# merge the windows and the index
	csrs	RVCSR_MEIEA_OFFSET, t0
	ret

# Function: rvcsr_enable_irq
# Description: Enables a machine external interrupt by IRQ number.
#              Converts the IRQ number into a window bitmask and
#              window index, then calls rvcsr_enable_irqs_in_window().
#
# Inputs:
#   a0 = IRQ number (IRQ0 = 0, IRQ1 = 1, etc.)
#
# Outputs:
#   none
#
# Clobbers:
#   tmp registers
#
.globl	rvcsr_enable_irq
rvcsr_enable_irq:
	addi	sp, sp, -12
	sw	ra, 0(sp)
	sw	a0, 4(sp)
	sw	a1, 8(sp)

	srli	a1, a0, 4		# index:  irq / 16
	andi	a0, a0, 0xF	# window: 1 << (irq % 16)
	bset	a0, zero, a0
	call	rvcsr_enable_irqs_in_window

	lw	ra, 0(sp)
	lw	a0, 4(sp)
	lw	a1, 8(sp)
	addi	sp, sp, 12
	ret

# Function: rvcsr_trigger_irqs_in_window
# Description: Triggers one or more machine external interrupts within
#              a specified IRQ window. The window bitmask is placed in
#              bits [31:16] and the window index is placed in bits [15:0]
#              before writing the combined value to the MEIFA CSR.
#
# Inputs:
#   a0 = IRQ window bitmask
#   a1 = IRQ window index
#
# Outputs:
#   none
#
# Clobbers:
#   tmp registers
#
.globl	rvcsr_trigger_irqs_in_window
rvcsr_trigger_irqs_in_window:
	slli	t0, a0, 16	# place the window bitmask in bits [31:16]
	or	t0, t0, a1	# merge the windows and the index
	csrs	RVCSR_MEIFA_OFFSET, t0
	ret

# Function: rvcsr_trigger_irq
# Description: Triggers a machine external interrupt by IRQ number.
#              Converts the IRQ number into a window bitmask and
#              window index, then calls rvcsr_trigger_irqs_in_window().
#
# Inputs:
#   a0 = IRQ number (IRQ0 = 0, IRQ1 = 1, etc.)
#
# Outputs:
#   none
#
# Clobbers:
#   tmp registers
#
.globl	rvcsr_trigger_irq
rvcsr_trigger_irq:
	addi	sp, sp, -12
	sw	ra, 0(sp)
	sw	a0, 4(sp)
	sw	a1, 8(sp)

	srli	a1, a0, 4		# index:  irq / 16
	andi	a0, a0, 0xF	# window: 1 << (irq % 16)
	bset	a0, zero, a0
	call	rvcsr_trigger_irqs_in_window

	lw	ra, 0(sp)
	lw	a0, 4(sp)
	lw	a1, 8(sp)
	addi	sp, sp, 12
	ret
