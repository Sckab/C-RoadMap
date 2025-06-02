# 📘 Week 6 – Unix System Programming: Processes, Shells & Signals

> This week turns you into a legit system programmer. You'll learn how to spawn processes, handle pipes, build your own shell, manage signals, and get closer to the metal of the OS.

---

## 📅 Daily Breakdown

### 🔹 Day 36 – Intro to Processes
- Understand the Unix process model
- Learn about `getpid()`, `getppid()`, and `ps`
- Explore process trees and forking

**Mini Task:** Print your PID, PPID and spawn a child that does the same.

---

### 🔹 Day 37 – `fork()` and `exec()`
- Create new processes using `fork()`
- Replace process memory with `execvp`, `execl`, `execve`, etc.
- Understand parent-child execution flow

**Mini Task:** Create a C app that takes a program name and runs it via `execvp`.

---

### 🔹 Day 38 – Pipes and Redirection
- Create a pipe with `pipe()`
- Use `dup2()` to redirect stdin/stdout
- Chain commands with pipes

**Mini Task:** Re-implement `ls | grep .c` behavior manually using pipes.

---

### 🔹 Day 39 – Signals (SIGINT, SIGTERM, etc.)
- Handle signals using `signal()` or `sigaction()`
- Learn how `Ctrl+C` and `kill` work
- Create clean shutdowns and logging

**Mini Task:** Create an app that logs `SIGINT` and exits only after 3 presses.

---

### 🔹 Day 40 – Background Jobs and `wait()`
- Learn `wait()`, `waitpid()` and zombie processes
- Handle async children
- Reap them like a boss 🧟

**Mini Task:** Create a shell-like tool that runs background jobs and tracks their PID.

---

### 🔹 Day 41 – Error Handling and Limits
- Handle errors from system calls with `errno` and `perror()`
- Learn about `getrlimit()` and resource control
- Improve robustness of your code

**Mini Task:** Write a command runner that checks for max file descriptors before spawning.

---

### 🔹 Day 42 – Mini Project: TinyShell (Basic Shell)
- Build a basic shell with:
  - Prompt (e.g. `giuls@tinysh$`)
  - Command parsing and tokenizing
  - `fork()` + `execvp()` logic
  - Basic support for `cd`, `exit`, etc.
  - Pipe and redirect support
  - Ctrl+C handling
  - Job list (bonus)

---

## 📚 Recommended Resources

- 📘 *Advanced Programming in the Unix Environment* – W. Richard Stevens
- 📕 [Fork, Exec, Wait – TLDP](https://tldp.org/LDP/tlk/kernel/processes.html)
- 📺 [Build Your Own Shell - YouTube Series](https://www.youtube.com/watch?v=3v3sJm3oHO0)

---

## 🧠 Weekly Goals
✅ Understand how processes and forks work  
✅ Spawn and control commands using `exec`  
✅ Handle pipes, redirections and signals  
✅ Build your own shell with command execution  
✅ Manage background jobs and system errors

---

## 💡 Pro Tips
- Always check the return value of `fork()` and `exec()`
- Use `WNOHANG` in `waitpid()` to avoid blocking
- Print PIDs and error messages while debugging
- Avoid memory leaks in your shell loop

---

## 🚫 Bad Habits to Avoid
- Ignoring system call errors (`exec` fails silently!)
- Not handling zombie processes
- Using unsafe `gets()` for input parsing
- Forgetting to close pipe file descriptors

---

## ✅ Good Habits to Build
- Break the shell logic into components: parse, execute, cleanup
- Implement signal-safe functions where needed
- Use `strtok()` carefully (or build your own parser)
- Create debug flags for your shell (e.g. `DEBUG=1`)

