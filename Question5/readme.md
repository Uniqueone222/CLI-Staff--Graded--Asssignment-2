# Question 5 – Recovery Mechanisms in vi Editor

## Objective

Evaluate the recovery mechanisms available in the `vi` editor and propose the most reliable recovery strategy.

---

## Commands Used

### Command 1

```bash
cd ..
mkdir Question5
cd Question5
pwd
touch config.conf
ls
```

**Explanation:**

Creates and enters the Question5 directory, creates a sample configuration file, and verifies its creation.

---

### Command 2

```bash
vi config.conf
```

**Explanation:**

Opens the configuration file in the `vi` editor for editing.

---

### Command 3

```bash
vi -r config.conf
```

**Explanation:**

Attempts to recover an unsaved file using the swap file created by `vi`.

---

### Command 4

```bash
:wq
cat config.conf
```

**Explanation:**

`:wq` saves the changes and exits the editor. `cat` displays the saved contents.

---

### Command 5

```bash
pwd
ls -la
find .
```

**Explanation:**

Displays the current directory, lists all files (including hidden files), and verifies the directory structure.

---

## Evaluation of Recovery Mechanisms

### Swap Files

Swap files are automatically created while editing. They allow recovery of unsaved changes after a crash.

### Undo History

Undo history allows recent changes to be reversed during the current editing session. It is generally unavailable after the editor is closed.

### Registers

Registers temporarily store copied or deleted text. They are useful for editing but are not intended for crash recovery.

### Backup Files

Backup files contain the previously saved version of a file. They protect against accidental modifications but do not preserve unsaved changes.

### Auto-Recovery

The `vi -r` command uses the swap file to recover unsaved work after an unexpected shutdown or crash.

---

## Most Reliable Recovery Strategy

The most reliable recovery strategy is to use **swap files together with `vi -r`**, because they preserve the latest unsaved edits after a system crash. Regularly saving the file (`:w`) and maintaining backup files provides additional protection against data loss.

---

## Files Generated

- `config.conf`
- `screenshots/`