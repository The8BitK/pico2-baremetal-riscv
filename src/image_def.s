#
# Copyright (c) 2026 The8BitK
#
# SPDX-License-Identifier: MIT
#

.include	"include/boot/picobin.inc"
.include	"include/hardware/regs/addressmap.inc"

.section	.image_def_block, "a"

# Image definition block HEADER
# Datasheet: 5.1.5. Blocks And Block Loops

image_def_block_start:
	.word	PICOBIN_BLOCK_MARKER_START

image_def_block_items_start:
	# BLOCK ITEM: Image definition
	# Datasheet: 5.9.3.1. IMAGE_DEF item
	.byte	PICOBIN_BLOCK_ITEM_1BS_IMAGE_TYPE
	.byte	0x01	# block size in words
	.hword	PICOBIN_IMAGE_TYPE_IMAGE_TYPE_EXE | (PICOBIN_IMAGE_TYPE_EXE_SECURITY_S << PICOBIN_IMAGE_TYPE_EXE_SECURITY_LSB) | (PICOBIN_IMAGE_TYPE_EXE_CPU_RISCV << PICOBIN_IMAGE_TYPE_EXE_CPU_LSB) | (PICOBIN_IMAGE_TYPE_EXE_CHIP_RP2350 << PICOBIN_IMAGE_TYPE_EXE_CHIP_LSB)

	# BLOCK ITEM: Entry point (optional)
	.byte	PICOBIN_BLOCK_ITEM_1BS_ENTRY_POINT
	.byte	0x03	# block size in words
	.hword	0x00	# pad
	.word	_start	# initial PC (runtime) address
	.word	SRAM_END	# initial SP address
image_def_block_items_end:

	# BLOCK ITEM: Last item
	.byte	PICOBIN_BLOCK_ITEM_2BS_LAST
	.hword	(image_def_block_end - image_def_block_start - 16) / 4	# size of all prev items in words
	.byte	0x00	# pad
	.word	0x00	# LINK: Relative position in bytes of next block HEADER relative to this block’s HEADER (a single block loop has 0 here)
	.word	PICOBIN_BLOCK_MARKER_END
image_def_block_end:
