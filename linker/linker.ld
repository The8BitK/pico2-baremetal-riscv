/*
 * Copyright (c) 2026 The8BitK
 *
 * SPDX-License-Identifier: MIT
 *
 * Linker script for RP2350 bare-metal RISC-V.
 *
 * Memory layout:
 *
 *   FLASH (0x10000000, 4 MB)
 *   ┌──────────────────────┐
 *   │ .image_def_block     │  RP2350 image metadata (required by ROM bootloader)
 *   │ .flash               │  loader (_start): copies sections to RAM, jumps to _start_main
 *   │ .vector_table  (LMA) │  ─┐
 *   │ .text          (LMA) │   │  section images stored in FLASH, copied to RAM at boot
 *   │ .rodata        (LMA) │   │
 *   │ .data          (LMA) │  ─┘
 *   └──────────────────────┘
 *
 *   RAM (0x20000000, 520 KB)
 *   ┌──────────────────────┐
 *   │ .vector_table        │  interrupt vector table (64-byte aligned for MTVEC)
 *   │ .text                │  executable code
 *   │ .rodata              │  read-only data
 *   │ .data                │  initialized read-write data (copied from FLASH)
 *   │ .bss                 │  zero-initialized data (must be zeroed by startup code)
 *   └──────────────────────┘
 *
 * Symbol naming convention:
 *   _s<section>   start of section in RAM (VMA)
 *   _e<section>   end of section in RAM (VMA, exclusive)
 *   _si<section>  start of section image in FLASH (LMA), used by loader.s
 *
 * All sections copied from FLASH to RAM are 4-byte aligned at both start and
 * end so loader.s can copy them word-by-word.
 */

OUTPUT_FORMAT(elf32-littleriscv)

MEMORY
{
	FLASH(rx) : ORIGIN = 0x10000000, LENGTH = 4M
	RAM(rwx)  : ORIGIN = 0x20000000, LENGTH = 520K
}

/* Debugger entry point */
ENTRY(_start)

SECTIONS {
	/*
	 * .flash — runs directly from FLASH, never copied to RAM.
	 * Contains the RP2350 image definition block (required by the ROM
	 * bootloader) followed by the loader (_start).
	 */
	.flash : {
		KEEP (*(.image_def_block))
		. = ALIGN(4);
		*(.flash*)
	} > FLASH

	/*
	 * .vector_table — RISC-V interrupt vector table.
	 * Must be 64-byte aligned so the base address can be written to MTVEC
	 * in vectored mode (mtvec.BASE is the upper bits, mtvec.MODE = 1).
	 * Stored in FLASH (LMA), copied to RAM (VMA) by loader.s.
	 */
	.vector_table : {
		_svector_table = .;
		. = ALIGN(64);
		KEEP (*(.vector_table))
		. = ALIGN(4);
		_evector_table = .;
	} > RAM AT > FLASH

	/*
	 * .text — executable code.
	 * Stored in FLASH (LMA), copied to RAM (VMA) by loader.s.
	 */
	.text : {
		_stext = .;
		. = ALIGN(4);
		*(.text*)
		. = ALIGN(4);
		_etext = .;
	} > RAM AT > FLASH

	/*
	 * .rodata — read-only data (constants, string literals, lookup tables).
	 * Stored in FLASH (LMA), copied to RAM (VMA) by loader.s.
	 */
	.rodata : {
		_srodata = .;
		. = ALIGN(4);
		*(.rodata*)
		. = ALIGN(4);
		_erodata = .;
	} > RAM AT > FLASH

	/*
	 * .data — initialized read-write data.
	 * Stored in FLASH (LMA), copied to RAM (VMA) by loader.s.
	 */
	.data : {
		_sdata = .;
		. = ALIGN(4);
		*(.data*)
		. = ALIGN(4);
		_edata = .;
	} > RAM AT > FLASH

	/*
	 * .bss — zero-initialized data.
	 * RAM only — no FLASH image. Startup code must zero _sbss.._ebss
	 * before any code that depends on zero-initialized variables runs.
	 */
	/*
	.bss : {
		_sbss = .;
		. = ALIGN(4);
		*(.bss*)
		. = ALIGN(4);
		_ebss = .;
	} > RAM
	*/
}

/* FLASH load addresses (LMA) for each RAM section, used by loader.s */
_sivector_table = LOADADDR(.vector_table);
_sitext         = LOADADDR(.text);
_sirodata       = LOADADDR(.rodata);
_sidata         = LOADADDR(.data);
