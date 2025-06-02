# 📘 Week 4 – Data Structures, Linked Lists & Hash Tables

> This week is all about building powerful custom data structures from scratch. You’ll learn about linked lists, stacks, queues, and hash tables — all in pure C. No standard libraries. Just malloc, pointers, and big brain energy 🧠⚡

---

## 📅 Daily Breakdown

### 🔹 Day 22 – Intro to Data Structures
- Understand how memory layout relates to data structures
- Learn when and why to use custom structs
- Plan for future: linked lists, stacks, etc.

**Mini Task:** Create a simple `Book` struct and an array of books that you can loop through and print.

---

### 🔹 Day 23 – Singly Linked Lists
- Define and build a singly linked list
- Add functions to insert, delete, traverse
- Use dynamic memory (`malloc`) for each node

**Mini Task:** Build a list of tasks and allow adding/removing them via a menu.

---

### 🔹 Day 24 – Doubly Linked Lists
- Extend your list to have `prev` and `next` pointers
- Handle edge cases (empty list, head/tail insertions)
- Free all memory when the list is deleted

**Mini Task:** Build a history tracker that goes forward/back like a browser history.

---

### 🔹 Day 25 – Stacks and Queues (with Lists)
- Use a linked list to implement a Stack (LIFO)
- Use a linked list to implement a Queue (FIFO)
- Practice real-world use cases

**Mini Task:** Create a reverse string app using a stack.

---

### 🔹 Day 26 – Hash Tables (Basics)
- Understand hash functions and collisions
- Use arrays + linked lists to build buckets
- Store key-value pairs (string ↔ int)

**Mini Task:** Create a word frequency counter using a custom hash table.

---

### 🔹 Day 27 – Hash Tables (Advanced)
- Improve your hashing function
- Use `uthash.h` or implement your own with dynamic resizing
- Handle collisions better (chaining or open addressing)

**Mini Task:** Extend your word counter to read from a file and show the top 10 most common words.

---

### 🔹 Day 28 – Mini Project: INI File Parser
- Build a parser for `.ini` config files:
  - Parse `[section]` and `key=value` pairs
  - Store them in a hash map or linked list
  - Allow querying values via CLI
  - Print full config to stdout
  - Handle syntax errors and whitespace

---

## 📚 Recommended Resources

- 🧾 [uthash.h Library](https://troydhanson.github.io/uthash/)
- 📘 *C Programming: A Modern Approach* – Chapter on Data Structures
- 📺 [Linked Lists in C – freeCodeCamp](https://www.youtube.com/watch?v=JdQeNxWCguQ)

---

## 🧠 Weekly Goals
✅ Understand and implement linked lists  
✅ Build your own stack and queue from scratch  
✅ Learn how hash tables work and use them  
✅ Apply data structures in a real parser project  
✅ Manage memory manually and handle pointers precisely

---

## 💡 Pro Tips
- Always `free()` your entire list (recursively or iteratively)
- Print your structures with debug messages during development
- Use `gdb` to inspect `next`, `prev`, and memory layout
- Test edge cases: empty list, single node, null pointers

---

## 🚫 Bad Habits to Avoid
- Losing track of `next` and `prev` pointers
- Not checking if malloc returns NULL
- Forgetting to free buckets in hash tables
- Using arrays when linked lists are more efficient

---

## ✅ Good Habits to Build
- Visualize your data structures on paper or draw.io
- Break logic into functions: `insert()`, `delete()`, `print()`
- Use typedefs to simplify list/struct definitions
- Write unit-test-like checks even for small components

