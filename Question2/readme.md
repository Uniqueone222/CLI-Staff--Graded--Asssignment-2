# Question 2 – Process Management using fork()

## Objective

Design a C program that:
- Creates child processes using `fork()`.
- Monitors their execution.
- Prevents zombie processes.
- Terminates unresponsive child processes using signals.

---

## Commands Used

### Command 1

```bash
cd ..
mkdir Question2
cd Question2
pwd
```

**Explanation:**

- `cd ..` moves to the parent directory.
- `mkdir Question2` creates a separate folder for Question 2.
- `cd Question2` enters the newly created folder.
- `pwd` displays the current working directory to verify the location.

---

### Command 2

```bash
nano process_manager.c
```

**Explanation:**

This command creates and opens the source file `process_manager.c` in the Nano text editor so that the C program can be written.

---

### Command 3

```bash
cat process_manager.c
```

**Explanation:**

This command displays the contents of the source file to verify that the program has been saved correctly.

---

### Command 4

```bash
gcc process_manager.c -o process_manager
```

**Explanation:**

This command compiles the C source code into an executable named `process_manager`.

---

### Command 5

```bash
./process_manager
```

**Explanation:**

This command executes the compiled program and demonstrates process creation, monitoring, signal handling, and prevention of zombie processes.

---

### Command 6

```bash
pwd
ls -l
file process_manager
```

**Explanation:**

- `pwd` displays the current working directory.
- `ls -l` lists the files with detailed information.
- `file process_manager` verifies that the generated file is a Linux executable.

---

## Conceptual Explanation

The `fork()` system call creates child processes from the parent process. Each child executes independently and receives its own Process ID (PID).

The parent process uses `wait()` (or `waitpid()`) to wait for child processes to finish execution. This releases the resources used by terminated child processes and prevents zombie processes.

If a child process becomes unresponsive, the parent process sends the `SIGKILL` signal using the `kill()` system call. This forcefully terminates the child process and ensures that system resources are not wasted.

Together, `fork()`, `wait()`, and signal handling provide an efficient mechanism for creating, monitoring, and managing processes in Linux.w