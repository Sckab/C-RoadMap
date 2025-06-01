# 📘 Week 1 – Intro to C & First Programs

> This week is all about getting your setup ready, understanding the basics of the C language, and writing your first simple programs. You’ll get comfortable with compiling, debugging, and writing code from scratch.

---

## 📅 Daily Breakdown

### 🔹 Day 1 – Setup + Hello World
- Install your toolchain: `gcc`, `clang`, `make`, `valgrind`, `gdb`
- Set up your Neovim with `clangd`, `coc.nvim`, or `nvim-lspconfig`
- Create your first `hello.c` and compile it
- Try out different `printf()` formats

**Mini Task:** Write a program that prints your name, age, and favorite programming language.

---

### 🔹 Day 2 – Variables, Types, and I/O
- Learn about basic types: `int`, `char`, `float`, `double`
- Explore `scanf`, `getchar`, `putchar`, and `gets` (legacy)
- Type modifiers: `unsigned`, `short`, `long`, `long long`

**Mini Task:** Create a program that reads your full name and age, and prints a greeting.

---

### 🔹 Day 3 – Conditionals
- Study `if`, `else`, and `switch`
- Learn about relational and logical operators
- Understand precedence and short-circuiting

**Mini Task:** Write a simple age-checker that tells if you're a minor, adult, or elder.

---

### 🔹 Day 4 – Loops (for, while, do...while)
- Use loops to repeat actions
- Practice break and continue
- Write counting and reverse loops

**Mini Task:** Create a number guessing game using `rand()` and `while`.

---

### 🔹 Day 5 – Functions
- Write your own functions
- Learn about return types, parameters, void
- Understand scope and variable lifetimes

**Mini Task:** Implement a simple calculator using functions for each operation.

---

### 🔹 Day 6 – Practice Day
- Review everything from the week
- Refactor code from previous tasks
- Explore `man` pages and `info` for C functions

---

### 🔹 Day 7 – Mini Project: CLI Calculator
- Write a calculator that takes two numbers and an operator
- Use `switch` or `if` for operation selection
- Add error handling (dividing by zero etc.)
- Modularize with header and source files
- Write a basic `Makefile` to build it

---

## 📚 Recommended Resources

- 📘 *The C Programming Language* by K&R (Chapters 1–3)
- 📗 *Learn C the Hard Way* – Exercises 1–7
- 📺 [freeCodeCamp: C Tutorial for Beginners](https://www.youtube.com/watch?v=KJgsSFOSQv0)

---

## 🧠 Weekly Goals
✅ Get comfortable with basic syntax  
✅ Understand variables, conditionals, loops, and functions  
✅ Write your first reusable code  
✅ Compile and run from terminal confidently  
✅ Complete your first working CLI program!

---

## 💡 Pro Tips
- Compile with flags: `-Wall -Wextra -Werror -std=c11`
- Use `valgrind` even for simple programs
- Write one function per task → makes testing easier
- Comment your logic early → get used to doc style

---

## 🚫 Bad Habits to Avoid
- Skipping compiler warnings
- Using global variables unnecessarily
- Overcomplicating logic early on
- Not modularizing your code

---

## ✅ Good Habits to Build
- Writing clean and consistent formatting
- Naming variables with intent (`total_sum`, not `ts`)
- Testing edge cases even for small programs
- Using `git` to track daily progress

