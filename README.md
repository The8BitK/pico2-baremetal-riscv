# RP2350 Bare-Metal RISC-V Assembly

A bare-metal RISC-V assembly project for the Raspberry Pi Pico 2 (RP2350) that builds the system from the ground up, including clock initialization, GPIO control, interrupt handling, and Processor Core 1 startup without SDK dependencies.

## Features

- Copies all code sections from FLASH to RAM at boot via a first-stage loader.
- Installs the interrupt vector table.
- Releases the required peripherals from reset.
- Switches the reference clock from ROSC to the 12 MHz XOSC.
- Configures and enables the system PLL.
- Switches the system clock to PLL_SYS at 150 MHz.
- Configures the tick generator for a 1 μs tick period.
- Programs TIMER0 ALARM0 to generate an interrupt every 500 ms.
- Toggles the onboard LED from the TIMER0 interrupt handler.
- Drives the GPIO 2 LED via PIO0 State Machine 0 using an inline PIO blink program.
- Launches Processor Core 1 via the SIO inter-processor FIFO using the ROM boot protocol.
- Core 0 continuously toggles GPIO 0; Core 1 independently toggles GPIO 1.

## Recommended Hardware

Since the project drives several GPIO pins, a breakout board with a status LED per GPIO pin makes it easy to observe all outputs at a glance. Some compatible options:

- [Freenove Breakout Board for Raspberry Pi Pico](https://store.freenove.com/products/fnk0081)
- [OSOYOO Breakout Board for Raspberry Pi Pico](https://osoyoo.com/2024/12/02/osoyoo-breakout-board-for-pico-series/)

Any similar board that provides per-pin LED indicators will work.

## Code Conventions

The assembly code follows the standard RISC-V ABI calling convention:

- `a0`–`a7` (argument/return registers) and `t0`–`t6` (temporaries) are **caller-saved**: a function may clobber them freely, so the caller must save any values it needs across a `call`.
- `s0`–`s11` (saved registers) are **callee-saved**: a function that uses them must save and restore them (typically via the stack).

## Build

```bash
$ make          # assembles and links; produces build/*.elf and build/*.uf2
$ make clean    # removes the build directory
```

### Flash via UF2 (BOOTSEL mode)

Hold the BOOTSEL button while connecting the Pico 2 to USB, then:

```bash
$ make deploy   # uses picotool to load and start the UF2
```

Or copy `build/*.uf2` to the `RP2350` USB mass-storage drive manually.

### Flash via Debug Probe (OpenOCD)

```bash
$ make program  # programs and resets via OpenOCD + CMSIS-DAP
```

## Toolchain Setup
### Install Pico SDK

Download and install the Raspberry Pico SDK:

```bash
$ mkdir -p ~/source/tools
$ cd  ~/source/tools
$ git clone https://github.com/raspberrypi/pico-sdk.git
```

### Install RISC-V Toolchain

Download and install the Raspberry Pi–provided RISC-V toolchain:

```bash
$ wget https://github.com/raspberrypi/pico-sdk-tools/releases/download/v2.2.0-3/riscv-toolchain-15-x86_64-lin.tar.gz
$ mkdir -p ~/source/tools/riscv-toolchain-15-x86_64-lin
$ tar xf riscv-toolchain-15-x86_64-lin.tar.gz -C ~/source/tools/riscv-toolchain-15-x86_64-lin
```

### Install OpenOCD (Open On-Chip Debugger)
https://openocd.org/doc-release/README

For on-chip debugging, install the Raspberry Pi–provided OpenOCD build:

```bash
$ wget https://github.com/raspberrypi/pico-sdk-tools/releases/download/v2.2.0-3/openocd-0.12.0+dev-x86_64-lin.tar.gz
$ mkdir -p ~/source/tools/openocd-0.12.0+dev-x86_64-lin
$ tar xf openocd-0.12.0+dev-x86_64-lin.tar.gz -C ~/source/tools/openocd-0.12.0+dev-x86_64-lin
```

### Install Picotool

Picotool is a command-line utility for RP2040 and RP2350 devices that can inspect firmware images, program flash memory, query connected boards, and reboot devices into normal or BOOTSEL mode.

```bash
$ wget https://github.com/raspberrypi/pico-sdk-tools/releases/download/v2.2.0-3/picotool-2.2.0-a4-x86_64-lin.tar.gz
$ mkdir -p ~/source/tools/picotool-2.2.0-a4-x86_64-lin
$ tar xf picotool-2.2.0-a4-x86_64-lin.tar.gz -C ~/source/tools/picotool-2.2.0-a4-x86_64-lin
```

### Install Pioasm

Pioasm is a tool provided by the Raspberry Pi Pico SDK for assembling PIO programs. It translates `.pio` source files into generated code that can be used by applications running on RP2040 and RP2350 microcontrollers.

```bash
$ cd $PICO_SDK_PATH/tools/pioasm
$ cmake -DPIOASM_VERSION_STRING=1 $PICO_SDK_PATH/tools/pioasm
$ make
```

### Environment Setup

Add binaries to your PATH, export the OpenOCD scripts directory, and reload your shell configuration:

```bash
$ cat << 'EOT' >> ~/.bashrc
export PICO_SDK_PATH=$HOME/source/tools/pico-sdk
export OPENOCD_SCRIPTS="$HOME/source/tools/openocd-0.12.0+dev-x86_64-lin/scripts"
PATH="$HOME/source/tools/riscv-toolchain-15-x86_64-lin:$PATH"
PATH="$HOME/source/tools/openocd-0.12.0+dev-x86_64-lin:$PATH"
PATH="$HOME/source/tools/picotool-2.2.0-a4-x86_64-lin/picotool:$PATH"
PATH="$PICO_SDK_PATH/tools/pioasm:$PATH"
EOT
. ~/.bashrc
```

## Hardware Debugging
### `udev` Rules (No `sudo` Required)

To allow OpenOCD to access the Raspberry Pi Debug Probe without requiring sudo, install the following udev rule:

```bash
$ sudo tee /etc/udev/rules.d/60-openocd-debugprobe.rules << EOT
# Raspberry Pi Debug Probe
ATTRS{idProduct}=="000c", ATTRS{idVendor}=="2e8a", MODE="666", GROUP="plugdev"
EOT
$ sudo udevadm control --reload-rules
$ sudo udevadm trigger
```

### GDB
https://sourceware.org/gdb/current/onlinedocs/gdb

The `riscv32-unknown-elf-gdb` provided with `pico-sdk-tools` is compiled without TUI support, which can make interactive debugging less convenient. `gdb-multiarch` is a good alternative, as it includes full TUI support.

#### Install GDB Multiarch (Optional)

```bash
$ sudo apt update
$ sudo apt install gdb-multiarch
```

### Starting a Debug Session

Connect the Raspberry Pi Pico 2 board to the Raspberry Pi Debug Probe, then connect the probe to your PC.
Once the Pico 2 is powered, it will immediately begin executing the loaded program.

#### Start OpenOCD

Launch an OpenOCD debug server for the RP2350 RISC-V core:

```bash
$ openocd -c "adapter speed 5000" -f interface/cmsis-dap.cfg -f target/rp2350-riscv.cfg
```

#### Start a GDB session

```bash
$ gdb-multiarch ./build/pico2-baremetal-riscv.elf
```

Inside GDB:

```text
# Connect to OpenOCD
target extended-remote localhost:3333
# Reset the Pico 2 and halt execution
monitor reset halt
# Load the ELF image
load
# Enable TUI layout (optional, if available)
# https://sourceware.org/gdb/current/onlinedocs/gdb.html/TUI.html
# https://dev.to/irby/making-gdb-easier-the-tui-interface-15l2
tui enable
# Set breakpoint at the loader entry point (FLASH) or main application entry (RAM)
break _start       # first-stage loader, executes from FLASH
break _start_main  # main application entry, executes from RAM
# Start execution
continue
```

## Documentation

- RP2350 Datasheet: https://datasheets.raspberrypi.com/rp2350/rp2350-datasheet.pdf
- Assembler: https://sourceware.org/binutils/docs/as.html
- Linker: https://sourceware.org/binutils/docs/ld.html
- Picotool: https://github.com/raspberrypi/picotool
- RISC-V ISA specification: https://riscv.org/technical/specifications/
- Assembly style guide: https://opentitan.org/book/doc/contributing/style_guides/asm_coding_style.html
