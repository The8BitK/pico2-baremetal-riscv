#
# Copyright (c) 2026 The8BitK
#
# SPDX-License-Identifier: MIT
#

.section	.vector_table, "ax"
.balign	64	# 64 bytes

.include	"include/hardware/regs/addressmap.inc"
.include	"include/hardware/regs/rvcsr.inc"

.option	push
.option	norvc	# Disable compressed instructions (RVC)

.globl	vector_table_start
vector_table_start:
	j	machine_exception_handler		# Cause 00, Exceptions
	nop					# Cause 01, Reserved
	nop					# Cause 02, Reserved
	j	machine_software_interrupt_handler	# Cause 03, Software Interrupts
	nop					# Cause 04, Reserved
	nop					# Cause 05, Reserved
	nop					# Cause 06, Reserved
	j	machine_timer_interrupt_handler	# Cause 07, Timer
	nop					# Cause 08, Reserved
	nop					# Cause 09, Reserved
	nop					# Cause 10, Reserved
	j	machine_external_interrupt_handler	# Cause 11, External Interrupts
vector_table_end:

.globl	external_interrupt_table_start
external_interrupt_table_start:
	j	irq_0_handler		# IRQ 00, TIMER0_IRQ_0
	j	irq_catchall_handler	# IRQ 01, TIMER0_IRQ_1
	j	irq_catchall_handler	# IRQ 02, TIMER0_IRQ_2
	j	irq_catchall_handler	# IRQ 03, TIMER0_IRQ_3
	j	irq_catchall_handler	# IRQ 04, TIMER1_IRQ_0
	j	irq_catchall_handler	# IRQ 05, TIMER1_IRQ_1
	j	irq_catchall_handler	# IRQ 06, TIMER1_IRQ_2
	j	irq_catchall_handler	# IRQ 07, TIMER1_IRQ_3
	j	irq_catchall_handler	# IRQ 08, PWM_IRQ_WRAP_0
	j	irq_catchall_handler	# IRQ 09, PWM_IRQ_WRAP_1
	j	irq_catchall_handler	# IRQ 10, DMA_IRQ_0
	j	irq_catchall_handler	# IRQ 11, DMA_IRQ_1
	j	irq_catchall_handler	# IRQ 12, DMA_IRQ_2
	j	irq_catchall_handler	# IRQ 13, DMA_IRQ_3
	j	irq_catchall_handler	# IRQ 14, USBCTRL_IRQ
	j	irq_catchall_handler	# IRQ 15, PIO0_IRQ_0
	j	irq_catchall_handler	# IRQ 16, PIO0_IRQ_1
	j	irq_catchall_handler	# IRQ 17, PIO1_IRQ_0
	j	irq_catchall_handler	# IRQ 18, PIO1_IRQ_1
	j	irq_catchall_handler	# IRQ 19, PIO2_IRQ_0
	j	irq_catchall_handler	# IRQ 20, PIO2_IRQ_1
	j	irq_catchall_handler	# IRQ 21, IO_IRQ_BANK0
	j	irq_catchall_handler	# IRQ 22, IO_IRQ_BANK0_NS
	j	irq_catchall_handler	# IRQ 23, IO_IRQ_QSPI
	j	irq_catchall_handler	# IRQ 24, IO_IRQ_QSPI_NS
	j	irq_catchall_handler	# IRQ 25, SIO_IRQ_FIFO
	j	irq_catchall_handler	# IRQ 26, SIO_IRQ_BELL
	j	irq_catchall_handler	# IRQ 27, SIO_IRQ_FIFO_NS
	j	irq_catchall_handler	# IRQ 28, SIO_IRQ_BELL_NS
	j	irq_catchall_handler	# IRQ 29, SIO_IRQ_MTIMECMP
	j	irq_catchall_handler	# IRQ 30, CLOCKS_IRQ
	j	irq_catchall_handler	# IRQ 31, SPI0_IRQ
	j	irq_catchall_handler	# IRQ 32, SPI1_IRQ
	j	irq_catchall_handler	# IRQ 33, UART0_IRQ
	j	irq_catchall_handler	# IRQ 34, UART1_IRQ
	j	irq_catchall_handler	# IRQ 35, ADC_IRQ_FIFO
	j	irq_catchall_handler	# IRQ 36, I2C0_IRQ
	j	irq_catchall_handler	# IRQ 37, I2C1_IRQ
	j	irq_catchall_handler	# IRQ 38, OTP_IRQ
	j	irq_catchall_handler	# IRQ 39, TRNG_IRQ
	j	irq_catchall_handler	# IRQ 40, PROC0_IRQ_CTI
	j	irq_catchall_handler	# IRQ 41, PROC1_IRQ_CTI
	j	irq_catchall_handler	# IRQ 42, PLL_SYS_IRQ
	j	irq_catchall_handler	# IRQ 43, PLL_USB_IRQ
	j	irq_catchall_handler	# IRQ 44, POWMAN_IRQ_POW
	j	irq_catchall_handler	# IRQ 45, POWMAN_IRQ_TIMER
	j	irq_catchall_handler	# IRQ 46, SPAREIRQ_IRQ_0
	j	irq_catchall_handler	# IRQ 47, SPAREIRQ_IRQ_1
	j	irq_catchall_handler	# IRQ 48, SPAREIRQ_IRQ_2
	j	irq_catchall_handler	# IRQ 49, SPAREIRQ_IRQ_3
	j	irq_catchall_handler	# IRQ 50, SPAREIRQ_IRQ_4
	j	irq_catchall_handler	# IRQ 51, SPAREIRQ_IRQ_5
external_interrupt_table_end:
.option	pop

# Handles RISC-V Machine Exceptions (mcause < 16, bit 31 = 0). Invoked when
# execution traps due to an exception such as an illegal instruction,
# breakpoint, load/store misalignment, or memory access fault.
#
# Not yet implemented. mret returns to mepc, which is the address of the
# instruction that caused the exception. The same instruction immediately
# re-traps, producing an infinite exception loop. The processor will hang
# here silently for any exception until this handler is replaced with a real
# implementation.
#
machine_exception_handler:
	mret

# Handles RISC-V Machine Software Interrupts (mcause = 3).
# Used for inter-core signaling and software-triggered events.
#
machine_software_interrupt_handler:
	mret

# Handles RISC-V Machine Timer Interrupts (mcause = 7)
# Triggered when the machine timer reaches its programmed compare value.
#
machine_timer_interrupt_handler:
	mret

# Handles RISC-V Machine External Interrupts (mcause = 11), dispatches
# control to the appropriate peripheral interrupt handler.
#
machine_external_interrupt_handler:
	addi	sp, sp, -64
	sw	ra,  0(sp)
	sw	t0,  4(sp)			# save all temporary registers because interrupt handler subroutines
	sw	t1,  8(sp)			# may clobber caller-saved registers
	sw	t2, 12(sp)
	sw	t3, 16(sp)
	sw	t4, 20(sp)
	sw	t5, 24(sp)
	sw	t6, 28(sp)
	sw	a0, 32(sp)
	sw	a1, 36(sp)
	sw	a2, 40(sp)
	sw	a3, 44(sp)
	sw	a4, 48(sp)
	sw	a5, 52(sp)
	sw	a6, 56(sp)
	sw	a7, 60(sp)

	# all temporary registers have to be initialized inside the loop on every iteration
	# because they get clobbered by IRQ handlers

1:	la	t0, external_interrupt_table_start	# external interrupt vector table address
	csrr	t1, RVCSR_MEINEXT_OFFSET		# MEINEXT value
	bltz	t1, 2f				# exit if no more IRQs, (bit 31, RVCSR_MEINEXT_NOIRQ_BITS, can be tested with bltz)
	andi	t1, t1, RVCSR_MEINEXT_IRQ_BITS	# get IRQ number
	add	t1, t1, t0			# calculate IRQ handler address

	jalr	t1				# jump to IRQ handler, tx ans ax registers may be clobbered after this call
	j	1b				# loop, check for more IRQs

2:	lw	ra,  0(sp)
	lw	t0,  4(sp)
	lw	t1,  8(sp)
	lw	t2, 12(sp)
	lw	t3, 16(sp)
	lw	t4, 20(sp)
	lw	t5, 24(sp)
	lw	t6, 28(sp)
	lw	a0, 32(sp)
	lw	a1, 36(sp)
	lw	a2, 40(sp)
	lw	a3, 44(sp)
	lw	a4, 48(sp)
	lw	a5, 52(sp)
	lw	a6, 56(sp)
	lw	a7, 60(sp)
	addi	sp, sp, 64
	mret

# IRQ-0 interrupt.
# Handles Timer 0 Alarm 0 interrupts. Invoked when Alarm 0 reaches its programmed target time.
#
irq_0_handler:
	addi	sp, sp, -4
	sw	ra, 0(sp)

	li	a0, TIMER0_BASE			# timer 0
	li	a1, 0				# alarm 0
	call	timer_clear_alarm_interrupt		# clear interrupt

	li	a0, TIMER0_BASE			# timer 0
	li	a1, 0				# alarm 0
	li	a2, 500000			# delay: 500,000us
	call	timer_set_alarm_relative		# wind alarm

	li	a0, 25				# GPIO 25	
	call	sio_toggle_gpio			# toggle it

	lw	ra, 0(sp)
	addi	sp, sp, 4
	ret

# Default handler for unhandled external interrupts. Invoked by
# machine_external_interrupt_handler when no specific handler is installed
# for the active IRQ source.
#
# Not yet implemented. ret returns to the IRQ dispatch loop without
# acknowledging or clearing the triggering interrupt source. The peripheral
# continues to assert its interrupt flag, so the same IRQ is returned by
# MEINEXT immediately on the next iteration, producing an infinite interrupt
# storm. The processor will hang here silently for any unhandled IRQ until
# a real handler is installed that clears the interrupt source.
#
irq_catchall_handler:
	ret
