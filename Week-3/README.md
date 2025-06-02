# 📘 Week 3 – Files, Command-Line Apps & Debugging

> This week is all about building real-world, command-line applications and learning to interact with files. You’ll also dive into debugging tools and improve your workflow to catch and fix bugs like a pro.

---

## 📅 Daily Breakdown

### 🔹 Day 15 – File I/O Basics
- Understand file streams: `FILE *`, `fopen`, `fclose`
- Use `fprintf`, `fscanf`, `fgets`, `fputs`, `fread`, `fwrite`
- Learn about text vs binary modes

**Mini Task:** Write a program that saves a to-do list to a text file and loads it on startup.

---

### 🔹 Day 16 – File Operations & Error Handling
- Check if a file exists before opening
- Handle file-related errors
- Learn file modes: `"r"`, `"w"`, `"a"`, `"r+"`, etc.

**Mini Task:** Extend the to-do list app to allow deleting and appending tasks safely.

---

### 🔹 Day 17 – Command-Line Arguments
- Use `main(int argc, char *argv[])`
- Parse flags like `-v`, `-h`, `--help`
- Learn basic CLI app design

**Mini Task:** Make a CLI version of your to-do app with arguments like `--add`, `--remove`, `--list`.

---

### 🔹 Day 18 – Debugging with GDB
- Learn the basics of GDB: breakpoints, `run`, `next`, `print`, `watch`
- Practice stepping through code
- Use `gdb -tui` for terminal interface

**Mini Task:** Debug a buggy version of a calculator app and log all your steps.

---

### 🔹 Day 19 – Valgrind & Sanitizers
- Use `valgrind --leak-check=full` to detect memory leaks
- Add compile flags for ASan and UBSan
- Fix memory issues and understand error messages

**Mini Task:** Write a program with intentional memory issues, then fix them with valgrind + ASan.

---

### 🔹 Day 20 – Logging & Error Codes
- Return custom error codes
- Use `stderr` for error messages
- Create log files to trace execution

**Mini Task:** Add logging and error codes to your CLI to-do app.

---

### 🔹 Day 21 – Mini Project: CLI To-Do Manager
- Create a fully working command-line to-do manager:
  - Add/remove tasks with flags
  - Save/load from file
  - Log operations in a `.log` file
  - Handle invalid input and show help
  - Build with Makefile

---

## 📚 Recommended Resources

- 📘 *K&R* – Chapter on File I/O
- 📕 [Valgrind Documentation](https://valgrind.org/docs/)
- 📺 [GDB Tutorial for Beginners (YouTube)](https://www.youtube.com/watch?v=66hBwEHvm0Y)

---

## 🧠 Weekly Goals
✅ Understand how to read and write files  
✅ Build real CLI tools with argument parsing  
✅ Learn GDB and Valgrind for debugging  
✅ Handle errors and log properly  
✅ Build apps that persist and manage data

---

## 💡 Pro Tips
- Always `fclose()` your files
- Use `feof` and `ferror` to check stream state
- Keep command-line apps clean and modular
- Use `.log` files for debugging behavior in production

---

## 🚫 Bad Habits to Avoid
- Ignoring error returns from `fopen`, `fscanf`, etc.
- Forgetting to close files
- Hardcoding file paths
- Not testing with edge cases (empty files, long input, etc.)

---

## ✅ Good Habits to Build
- Design CLI apps like a real user would use them
- Log errors to stderr, not stdout
- Treat every file operation as a potential fail
- Use `make run` or `make debug` in your Makefile to automate testing

