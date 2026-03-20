# C - More malloc, free

## 📘 Description

This project is part of the low-level programming curriculum and focuses on advanced dynamic memory allocation in C.

It covers the use of `malloc` and `free`, while also exploring concepts behind `calloc` and `realloc`, even though their direct usage is restricted in this project.

---

## 🎯 Learning Objectives

By the end of this project, I am able to explain:

* How to use the `exit` function
* What `calloc` does and how it differs from `malloc`
* What `realloc` does and how to resize allocated memory
* How to properly manage dynamic memory
* How to avoid memory leaks

---

## ⚙️ Requirements

### General

* Allowed editors: `vi`, `vim`, `emacs`
* Compilation:

  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output
  ```
* All files must end with a new line
* Code must follow **Betty style**
* No global variables allowed
* Maximum of 5 functions per file

### Allowed functions

* `malloc`
* `free`
* `exit`
* `_putchar`

⚠️ The following functions are **NOT allowed**:

* `printf`, `puts`
* `calloc`, `realloc` (must understand them, but not use them)

---

## 📂 Project Structure

```
.
├── main.h        # Header file with all function prototypes
├── task1.c       # Example function using malloc
├── task2.c       # More allocation logic
├── task3.c       # Advanced memory handling
└── README.md     # Project documentation
```

---

## ▶️ Compilation & Execution

To compile:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o program
```

To run:

```bash
./program
```

---

## 💡 Key Concepts

### 🔹 malloc

Allocates a block of memory on the heap.

```c
int *ptr = malloc(sizeof(int) * n);
```

* Returns `NULL` if allocation fails
* Memory is **not initialized**

---

### 🔹 free

Frees previously allocated memory.

```c
free(ptr);
```

* Prevents memory leaks

---

### 🔹 exit

Terminates the program immediately.

```c
if (ptr == NULL)
    exit(98);
```

---

### 🔹 calloc (concept only)

* Allocates memory and initializes it to zero
* Equivalent to `malloc` + manual initialization

---

### 🔹 realloc (concept only)

* Resizes a previously allocated memory block
* Can expand or shrink memory

---

## ⚠️ Common Errors

* Forgetting to check if `malloc` returns `NULL`
* Not freeing allocated memory
* Accessing memory out of bounds
* Using forbidden functions

---

## 🧪 Testing

* You can create your own `main.c` files for testing
* The provided examples are not required to be submitted
* The correction system will use its own test files

---

## 📌 Notes

* All function prototypes must be declared in `main.h`
* `_putchar` is allowed but should not be submitted
* Focus on writing clean, readable, and well-documented code

---

## 📄 License

This project is for educational purposes as part of a C programming curriculum.


