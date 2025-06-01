# 📘 Week 2 – Pointers, Memory & Modular Code

> This week dives deep into what makes C unique: pointers and manual memory management. You’ll learn how memory works under the hood, practice with pointers, arrays, and functions, and start modularizing your code like a real dev.

---

## 📅 Daily Breakdown

### 🔹 Day 8 – Intro to Pointers
- Understand memory addresses (`&`) and dereferencing (`*`)
- Learn how to declare and use pointers
- Visualize pointer behavior with diagrams

**Mini Task:** Create a program that swaps two integers using pointers.

---

### 🔹 Day 9 – Pointers & Arrays
- Learn how arrays and pointers relate
- Indexing with pointer arithmetic
- Use pointers to traverse arrays

**Mini Task:** Write a program that calculates the average of a float array using pointers.

---

### 🔹 Day 10 – Strings in C
- Work with strings as char arrays
- Functions: `strlen`, `strcpy`, `strcmp`, `strcat`
- Null terminator and common string pitfalls

**Mini Task:** Implement your own `strlen` and `strcpy`.

---

### 🔹 Day 11 – Dynamic Memory Allocation
- `malloc`, `calloc`, `realloc`, `free`
- Understand heap vs stack
- Handle memory safely and check for leaks

**Mini Task:** Create a program that asks for `n` integers and stores them in a dynamically allocated array.

---

### 🔹 Day 12 – Structs & Typedef
- Define and use `struct`s
- Group related data into one type
- Use `typedef` for cleaner syntax

**Mini Task:** Define a `Student` struct and store a list of students using dynamic memory.

---

### 🔹 Day 13 – Modular Programming
- Split code into `.h` and `.c` files
- Learn how to use header guards
- Use `Makefile` for building multi-file projects

**Mini Task:** Refactor one of your previous programs into a multi-file structure with headers.

---

### 🔹 Day 14 – Mini Project: Student Record System
- Write a terminal app to:
  - Add, remove, and display student info
  - Use structs, arrays, and dynamic memory
  - Separate code into `.h` and `.c` files
  - Compile with a `Makefile`

---

## 📚 Recommended Resources

- 📘 *The C Programming Language* – K&R (Ch. 4–5)
- 📘 *C Programming Absolute Beginner’s Guide*
- 📺 [Pointers in C - Bro Code YouTube](https://www.youtube.com/watch?v=zuegQmMdy8M)

---

## 🧠 Weekly Goals
✅ Understand pointers deeply  
✅ Use dynamic memory and avoid leaks  
✅ Build modular, clean code with header files  
✅ Practice with arrays, strings, and structs  
✅ Master writing and compiling multi-file programs

---

## 💡 Pro Tips
- Always `free()` what you `malloc()`
- Use `valgrind` often to catch memory leaks
- Prefer `calloc` over `malloc` for zeroed memory
- Use `typedef struct` to simplify code readability

---

## 🚫 Bad Habits to Avoid
- Forgetting to `free()` memory
- Accessing out-of-bounds array indices
- Dereferencing NULL pointers
- Mixing up `*` and `&` in function arguments

---

## ✅ Good Habits to Build
- Draw memory diagrams to debug pointers
- Comment pointer logic clearly
- Always check if `malloc` returns NULL
- Write modular code with reusable functions

