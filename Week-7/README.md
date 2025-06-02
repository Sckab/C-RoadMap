# 📘 Week 7 – Kernel Modules, Devices & Bootloaders

> This week you'll step into the world of the Linux kernel. From creating your own device driver to booting a bare-metal kernel in QEMU, you'll learn how modern OS components are built from the ground up.

---

## 📅 Daily Breakdown

### 🔹 Day 43 – Linux Kernel Intro
- Learn about kernel space vs user space
- Explore the `/proc` and `/sys` filesystems
- Check your kernel version and compile settings

**Mini Task:** Write a C app that reads `/proc/cpuinfo` and displays the CPU model + cores.

---

### 🔹 Day 44 – Writing Your First Kernel Module
- Set up kernel headers and build tools
- Write a basic “hello world” kernel module
- Load it with `insmod`, unload with `rmmod`
- View messages with `dmesg`

**Mini Task:** Create a basic module that logs on insert/remove.

---

### 🔹 Day 45 – Character Device Drivers
- Understand major/minor numbers
- Register char device with `register_chrdev`
- Implement `open`, `read`, `write`, `release` handlers

**Mini Task:** Create a char device `/dev/mylog` that prints a message when read.

---

### 🔹 Day 46 – Kernel Debugging & Logs
- Use `dmesg` to trace kernel logs
- Use `printk()` with severity levels
- Debug module loading/unloading failures

**Mini Task:** Update your char device with detailed debug messages using `printk`.

---

### 🔹 Day 47 – Writing Your Own Syscall
- Patch the syscall table (carefully!)
- Add a simple syscall: `hello_syscall()`
- Rebuild and boot a custom kernel (Arch-style)

**Mini Task:** Create a custom syscall that logs to kernel space with your name.

---

### 🔹 Day 48 – Bare-Metal: Your First Bootloader
- Write a boot sector in assembly
- Chainload a C kernel stub
- Use `nasm`, `ld`, and `qemu-system-x86_64`
- Learn about BIOS, MBR, GRUB

**Mini Task:** Boot into a black screen with "HELLO FROM C" using your bootloader + kernel.

---

### 🔹 Day 49 – Mini Project: Kernel Toy Boot + Module
- Final Challenge:
  - Boot a mini kernel in QEMU
  - Write to screen via VGA (text mode)
  - Create a kernel module that logs a greeting
  - Build with `Makefile`
  - Document usage in README

---

## 📚 Recommended Resources

- 📘 [Linux Device Drivers Book – Jonathan Corbet](https://lwn.net/Kernel/LDD3/)
- 📗 [OSDev Wiki](https://wiki.osdev.org/Main_Page)
- 📺 [Writing a Kernel Module – YouTube](https://www.youtube.com/watch?v=5q4H-t3-0l4)
- 📺 [Bare Metal C Kernel – YouTube](https://www.youtube.com/watch?v=F6noLq8u2wU)

---

## 🧠 Weekly Goals
✅ Understand Linux kernel basics  
✅ Write and debug your own kernel modules  
✅ Register and interact with char devices  
✅ Build a custom syscall  
✅ Boot your own kernel using QEMU

---

## 💡 Pro Tips
- Never test new modules on a critical machine
- Use virtual machines or Docker to isolate kernel dev
- Keep your modules minimal and focused
- Use `printk(KERN_INFO ...)` instead of `printf`

---

## 🚫 Bad Habits to Avoid
- Forgetting `make clean` when switching kernel headers
- Failing to `unregister_chrdev` on exit
- Not checking kernel logs when stuff breaks
- Testing bootloaders directly on real hardware 😵

---

## ✅ Good Habits to Build
- Use versioned Makefiles and comments
- Backup your `/boot` before installing anything
- Keep bootloader/kernels modular
- Document every kernel-level symbol and function

