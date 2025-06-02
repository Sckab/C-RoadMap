# 📘 Week 5 – Terminal UI, Threads & CLI UX

> Time to make your apps interactive and real-time! This week you'll learn how to build fancy terminal UIs using `ncurses`, make your apps multitask with threads, and improve the overall UX of your CLI projects.

---

## 📅 Daily Breakdown

### 🔹 Day 29 – Terminal Output Control
- ANSI escape codes for colors and cursor movement
- Clear screen, move cursor, color text, invert styles
- Use `\033[` sequences like a pro

**Mini Task:** Create a banner generator that prints styled text with colors and effects.

---

### 🔹 Day 30 – Intro to ncurses
- Install and set up `ncurses.h`
- Create windows, handle key input, and draw boxes
- Use `getch()`, `printw()`, `refresh()`

**Mini Task:** Build a mini dashboard with a real-time clock and menu.

---

### 🔹 Day 31 – Menus & Key Input
- Build interactive menus with key navigation
- Highlight selection with reverse colors
- Handle `ESC`, `ENTER`, and arrow keys

**Mini Task:** Create a menu-based to-do list with add/delete using `ncurses`.

---

### 🔹 Day 32 – Threads in C (POSIX pthreads)
- Use `pthread_create`, `pthread_join`, `pthread_exit`
- Learn about race conditions and data sharing
- Use mutexes (`pthread_mutex_t`) to protect shared data

**Mini Task:** Create two threads that print messages in parallel with no overlap.

---

### 🔹 Day 33 – Background Tasks & CLI Multitasking
- Build apps with async behaviors (e.g. autosave every X seconds)
- Mix user input + background logic
- Coordinate with mutexes or condition variables

**Mini Task:** Update your dashboard to autosave logs every 5s via a background thread.

---

### 🔹 Day 34 – UI Polishing & CLI UX
- Add help screens, key hints, colors, and borders
- Animate transitions (clear/redraw)
- Improve CLI experience with spacing, feedback, and error handling

**Mini Task:** Make your CLI dashboard *pretty* and user-friendly with small animations.

---

### 🔹 Day 35 – Mini Project: Terminal Dashboard App
- Real-time terminal UI with:
  - Dynamic menu
  - Background thread (e.g. timer, logger)
  - Async user input
  - Autosave to file
  - Help menu and fancy layout
  - `Makefile` and `README`

---

## 📚 Recommended Resources

- 📗 [ncurses Programming HowTo](https://tldp.org/HOWTO/NCURSES-Programming-HOWTO/)
- 📕 [POSIX Threads Programming](https://computing.llnl.gov/tutorials/pthreads/)
- 📺 [Ncurses Tutorial - YouTube](https://www.youtube.com/watch?v=Yw0-ASR4sr8)

---

## 🧠 Weekly Goals
✅ Build interactive apps in the terminal  
✅ Learn how to use ncurses for menus and visuals  
✅ Understand how to create and manage threads  
✅ Improve CLI UX with colors, layouts and responsiveness  
✅ Mix input, output, and background logic together

---

## 💡 Pro Tips
- Always refresh `ncurses` windows after updates
- Use threads only where it makes sense (don't overkill)
- Protect shared variables with mutexes
- Provide user feedback for every key/action

---

## 🚫 Bad Habits to Avoid
- Ignoring race conditions between threads
- Overusing `usleep()` for delays
- Not restoring terminal state after crash
- Not testing how the UI reacts in different terminal sizes

---

## ✅ Good Habits to Build
- Keep UI and logic code separate
- Build `help` and `usage` screens for every CLI tool
- Document hotkeys and thread behavior
- Use threading only when needed → simple is better

