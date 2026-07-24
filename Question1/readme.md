# Question 1 – Shell Script for Managing Student Submissions

## Objective

Design a shell script to:

- Identify duplicate submissions.
- Create a backup of unique submissions.
- Generate a report showing:
  - Number of files processed
  - Number of duplicate files
  - Number of files backed up
- Store all error messages separately.

---

## Commands Used

### Command 1

```bash
cd Question1
pwd
mkdir submissions backup
ls
```

**Explanation:**

- `cd Question1` changes the working directory to the Question1 folder.
- `pwd` displays the current working directory.
- `mkdir submissions backup` creates folders for storing submissions and backup files.
- `ls` verifies that the directories were created successfully.

---

### Command 2

```bash
echo "Assignment A" > submissions/student1.txt
echo "Assignment B" > submissions/student2.txt
echo "Assignment A" > submissions/student3.txt
echo "Assignment C" > submissions/student4.txt
ls submissions
cat submissions/student1.txt
```

**Explanation:**

- The `echo` command creates sample assignment files.
- The `>` operator redirects the output into new files.
- `ls submissions` lists all created files.
- `cat` displays the contents of a file for verification.

---

### Command 3

```bash
nano submission_manager.sh
chmod +x submission_manager.sh
cat submission_manager.sh
```

**Explanation:**

- `nano` creates and edits the shell script.
- `chmod +x` grants execute permission to the script.
- `cat` displays the script contents to verify they were saved correctly.

---

### Command 4

```bash
./submission_manager.sh
cat report.txt
ls backup
cat error.log
```

**Explanation:**

- `./submission_manager.sh` executes the shell script.
- `cat report.txt` displays the generated processing report.
- `ls backup` verifies that only unique files were copied.
- `cat error.log` displays any errors encountered during execution. If no errors occurred, the file remains empty.

---

### Command 5

```bash
pwd
find .
```

**Explanation:**

- `pwd` confirms the current working directory.
- `find .` displays the complete directory structure, verifying that all required files and folders have been created successfully.

---

## Justification of Linux Commands and File Handling

The `find` command is used to display the directory structure and verify generated files. The `cp` command copies unique submissions into the backup directory. The `md5sum` command compares file contents by generating checksums, making duplicate detection reliable even when filenames differ.

Redirection operators improve file management. The `>` operator creates or overwrites files such as `report.txt`, while the `>>` operator appends information without deleting existing content. The `2>>` operator redirects error messages to `error.log`, keeping errors separate from normal output.

The script uses shell variables to count processed, duplicate, and backed-up files. Conditional statements determine whether a file is a duplicate, while loops process every submission automatically. Together, these techniques provide an efficient and organized solution for managing assignment submissions.

---

## Files Generated

- `submission_manager.sh`
- `report.txt`
- `error.log`
- `submissions/`
- `backup/`
- `screenshots/`