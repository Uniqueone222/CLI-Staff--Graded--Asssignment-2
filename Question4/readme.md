# Question 4 – Log File Monitoring Using Linux Commands

## Objective

Design a command pipeline that:

- Displays newly added log entries in real time.
- Extracts `ERROR` messages.
- Maintains a separate report file.
- Suppresses unnecessary output.

---

## Commands Used

### Command 1

```bash
cd ..
mkdir Question4
cd Question4
pwd
touch system.log error_report.txt
ls
```

**Explanation:**

- `cd ..` moves to the parent directory.
- `mkdir Question4` creates a new folder for Question 4.
- `cd Question4` enters the folder.
- `pwd` displays the current working directory.
- `touch` creates the required log and report files.
- `ls` verifies that the files were created successfully.

---

### Command 2

```bash
echo "INFO: Server started" >> system.log
echo "ERROR: Database connection failed" >> system.log
echo "WARNING: High memory usage" >> system.log
echo "ERROR: Disk space low" >> system.log
cat system.log
```

**Explanation:**

- `echo` appends sample log entries to the log file.
- `>>` appends data without overwriting existing content.
- `cat` displays the contents of the log file for verification.

---

### Command 3

```bash
grep "ERROR" system.log > error_report.txt
cat error_report.txt
```

**Explanation:**

- `grep` searches for lines containing the keyword `ERROR`.
- `>` redirects the matching lines into `error_report.txt`.
- `cat` displays the generated report.

---

### Command 4

```bash
tail -f system.log
```

In another terminal:

```bash
echo "ERROR: CPU Overheating" >> system.log
echo "INFO: User Login" >> system.log
```

**Explanation:**

- `tail -f` continuously monitors the log file and displays newly added entries in real time.
- The `echo` commands simulate new log messages while monitoring is active.

---

### Command 5

```bash
grep "ERROR" system.log | tee error_report.txt > /dev/null
cat error_report.txt
find .
```

**Explanation:**

- `grep` filters only the `ERROR` messages.
- `|` passes the filtered output to the next command.
- `tee` writes the output to `error_report.txt`.
- `> /dev/null` suppresses unnecessary terminal output.
- `cat` verifies the report file.
- `find .` displays the directory structure and generated files.

---

## Justification

The `tail -f` command provides real-time monitoring by continuously displaying new log entries as they are added. The `grep` command efficiently filters only the required `ERROR` messages from the log file.

Pipes (`|`) allow the output of one command to become the input of another, creating an efficient command pipeline. The `tee` command saves the filtered output to a report file while allowing it to be used by subsequent commands.

Redirection operators improve output management. The `>>` operator appends log entries without overwriting previous data, while `>` writes filtered results to a report file. Redirecting output to `/dev/null` suppresses unnecessary terminal output, making the monitoring process cleaner and more efficient.

---

## Files Generated

- `system.log`
- `error_report.txt`
- `screenshots/`