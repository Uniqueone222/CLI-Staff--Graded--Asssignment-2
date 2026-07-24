# Question 3 – Linux File System Calls

## Objective

Design a program that:

- Creates a file.
- Writes employee records.
- Updates specific records without rewriting the entire file.
- Retrieves records efficiently using random access.

---

## Commands Used

### Command 1

```bash
cd ..
mkdir Question3
cd Question3
pwd
```

**Explanation**

Creates and enters the Question3 directory.

---

### Command 2

```bash
nano employee_records.c
cat employee_records.c
```

**Explanation**

Creates the C source file and verifies its contents.

---

### Command 3

```bash
gcc employee_records.c -o employee_records
```

**Explanation**

Compiles the source code into an executable.

---

### Command 4

```bash
pwd
ls -l
```

**Explanation**

Displays the current directory and verifies the source code file.

---

### Command 5

```bash
find .
```

**Explanation**

Displays the directory structure and generated files.

---

## System Call Explanation

**open()**

Creates or opens the employee data file for reading and writing.

**write()**

Stores employee records in the file.

**lseek()**

Moves the file pointer to a specific position, allowing a record to be updated without rewriting the entire file.

**read()**

Retrieves employee records from any location in the file.

**close()**

Closes the file and releases the associated system resources.
