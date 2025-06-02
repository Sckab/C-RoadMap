# 📘 Week 8 – Capstone Project, Reverse Engineering & Mastery

> This week is all about proving what you’ve learned. You’ll build a big final project of your choice (IDE, emulator, shell, kernel module…), practice reverse engineering, polish your debugging skills, and reflect on how far you've come. You’re not just learning C anymore — you’re building with it.

---

## 📅 Daily Breakdown

### 🔹 Day 50 – Capstone Planning
- Choose your final project:
  - Terminal emulator
  - IDE
  - Full-featured shell
  - Toy kernel
  - Package manager
- Write a project plan and feature checklist

**Mini Task:** Create a `README.md` with description, goals, structure, and tools required.

---

### 🔹 Day 51 – Project Setup & Boilerplate
- Initialize folders, Makefiles, header files
- Setup your git repo
- Create basic scaffolding (I/O, structure, file tree)

**Mini Task:** Build and run a dummy version of your capstone with basic `main()` and I/O.

---

### 🔹 Day 52 – Reverse Engineering Intro
- Learn `strings`, `objdump`, `ltrace`, `strace`
- Analyze simple ELF binaries
- Open `.so` or `.a` libraries and inspect them

**Mini Task:** Dissect a simple C program using `objdump -d` and understand its layout.

---

### 🔹 Day 53 – Reading C Projects from Others
- Explore open-source C repos on GitHub
- Understand other people's folder structure and style
- Study modular design patterns in real projects

**Mini Task:** Clone and study a tiny shell, or command-line tool written in C.

---

### 🔹 Day 54 – Code Hardening & Security
- Learn about buffer overflows
- Use `-fstack-protector`, `-D_FORTIFY_SOURCE`, `-Wformat`
- Practice input validation and bounds checks

**Mini Task:** Harden input functions in your capstone project.

---

### 🔹 Day 55 – Debugging Your Own Capstone
- Use `gdb`, `valgrind`, `asan`, `ubsan`
- Profile your app and find bottlenecks
- Trace memory allocation and usage

**Mini Task:** Run your capstone through `valgrind` and optimize one slow or leaky part.

---

### 🔹 Day 56 – Capstone Finalization
- Polish user experience and outputs
- Add a logo banner, man page, or helper command
- Write full README + documentation

**Mini Task:** Tag a v1.0 release and test it on another machine or clean VM.

---

### 🔹 Day 57–59 – Flex Days
- Use these days to finish anything you missed
- Add more features, polish UI, refactor ugly code
- Maybe even start rewriting in assembly 🤓

---

### 🔹 Day 60 – 🏁 Graduation Day
- Review your GitHub commit history
- Document what you’ve learned
- Share your capstone with the world 🚀

**Mini Task:** Post your project on GitHub with a full write-up and screenshots!

---

## 📚 Recommended Resources

- 📕 *Hacking: The Art of Exploitation* by Jon Erickson
- 📗 [C Compiler Explorer](https://godbolt.org/)
- 📘 Real GitHub C Repos:  
  - [Shell in C](https://github.com/brendanrius/shell)  
  - [Micro editor](https://github.com/zyedidia/micro)  
  - [suckless tools (dmenu, st)](https://suckless.org/)

---

## 🧠 Final Week Goals
✅ Complete a major C project  
✅ Practice reading and analyzing real C code  
✅ Learn how to reverse engineer simple binaries  
✅ Polish and debug like a real-world developer  
✅ Celebrate your full mastery of C! 🎓

---

## 💡 Pro Tips
- Your capstone should reflect your strengths and creativity
- Don’t be afraid to cut features → done > perfect
- Document your code so future-you can read it
- Use `git` tags and branches for major changes

---

## 🚫 Bad Habits to Avoid
- Rushing into features without planning
- Writing unreadable spaghetti code
- Ignoring memory issues in complex apps
- Comparing your project to massive open-source giants — this is YOUR project

---

## ✅ Good Habits to Build Forever
- Always plan before coding
- Read other people’s C code to level up
- Be proud of small wins — they add up
- Share your project, even if it's not perfect

---

# 🏆 YOU MADE IT!

> 60 days ago you started with a simple `printf("Hello, World!")`.  
> Now you're writing shells, kernels, and full-blown tools.  
> This isn't just about C anymore — it's about **becoming a real developer**.

**👏 Respect. You've earned it.**  
Now go build something incredible.

