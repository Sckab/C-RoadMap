# 🧠 Capstone Project – Nexora Kernel

> Final project of the **“Learn C in 60 Days”** roadmap  
> 🚀 Capstone selected: **A minimal x86_64 kernel written in C**  
> 🧩 Project name: **Nexora**

---

## 🚀 What is Nexora?

**Nexora** is a lightweight, minimal, and educational kernel developed from scratch in pure C (and a touch of assembly), bootable via QEMU or real hardware.  
It focuses on fundamental kernel functionality such as screen output, input handling, basic memory management, and the foundations of multitasking.

---

## 🎯 Goals of Nexora

- Bootable from GRUB2 using Multiboot spec
- Print to screen via VGA text buffer
- Handle keyboard input via interrupts
- Implement a memory map and allocator (malloc/free style)
- Provide basic syscall infrastructure
- Support simple task switching (round robin or cooperative)

---

## 🔧 Tech Stack

| Component             | Tech Used              |
|----------------------|------------------------|
| Core Language         | C (kernel logic)       |
| Low-Level Bits        | x86 Assembly (boot + ISRs) |
| Bootloader            | GRUB (Multiboot2)      |
| Emulator              | QEMU                   |
| Build Tools           | `nasm`, `ld`, `gcc`, `make` |
| Disk Image Format     | ISO (for CD-ROM boot)  |

---

## 📁 Project Structure

nexora/
├── boot/             # GRUB configuration and boot sector
├── kernel/           # C source files for the kernel
├── asm/              # Assembly routines (boot, ISRs)
├── include/          # Kernel headers
├── linker.ld         # Linker script
├── Makefile          # Build script
└── README.md

---

## 🚦 Build & Run

```bash
# Build the ISO
make

# Run with QEMU
qemu-system-x86_64 -cdrom dist/nexora.iso
```

> ⚠️ Make sure you have `nasm`, `qemu`, and `grub-mkrescue` installed

---

## 🛠 Features Implemented (So Far)

* [ ] GRUB bootable ISO
* [ ] VGA text printing with cursor support
* [ ] Keyboard input reading via IRQ1
* [ ] Custom printf implementation
* [ ] Physical memory manager (PMM)
* [ ] Paging + virtual memory support
* [ ] Syscall table
* [ ] Basic multitasking

---

## 📚 Learning Goals

* Writing low-level C code for bare-metal
* Linking C with ASM (boot + ISRs)
* Understanding interrupts, memory mapping and paging
* Building a minimal libc replacement
* Writing a true multitasking kernel from scratch

---

## 📸 Screenshots (Coming Soon)

Add boot screenshots, text mode output, memory maps, and interrupt dumps.

---

## 🙌 Credits

This project was created as the **final capstone of the Learn C in 60 Days roadmap**.
Developed with Neovim, caffeine, and pure curiosity 💻⚙️

---

## 🏁 Final Thought

> "Every operating system starts with a screen that says 'Hello World' in VGA text mode. Nexora is my screen."
> Built from scratch, no copy-paste, no frameworks — just raw C and ASM.
