# Linux Commands Reference

## find — search for files with filters

Syntax: `find [path] [filters]`

### Common filters
| Filter            | Meaning                                     |
| ----------------- | ------------------------------------------- |
| `-type f`         | files only                                  |
| `-type d`         | directories only                            |
| `-size 1033c`     | exactly 1033 bytes (`c` = bytes)            |
| `-size +1k`       | larger than 1 KB                            |
| `-size -100c`     | smaller than 100 bytes                      |
| `-name "*.txt"`   | name matches pattern                        |
| `-user bandit7`   | owned by user "bandit7"                     |
| `-group bandit6`  | owned by group "bandit6"                    |
| `-executable`     | is executable                               |
| `! -executable`   | is NOT executable (! = negation)            |
| `-readable`       | is readable                                 |
| wc -l <file_name> | returns number of lined in the file         |
| sort              | will remove dupilicate                      |
| uniq -u           | also remove duplicate only adjacent lines   |
| \| = pipe         | inject o/p of one cmd to another cmd as i/p |
| string <file.txt> | sting values will shown up                  |
## Base64 encoded data :
base64 -d <file.txt> base64 is encoding format -d #specify the #decode 
#String
## strings — extract readable text from binary files
Strings file` → prints all printable text sequences (≥4 chars) - Useful for: binary files, executables, memory dumps, anything not pure text - Common pattern: `strings file | grep "pattern"` to find specific text
#exampls 
- `base64 file` → encode file to base64 - 
- `base64 -d file` → decode base64 file 
- `echo "hello" | base64` → encode text 
- `echo "aGVsbG8K" | base64 -d` → decode text
### sort
- Sorts lines alphabetically
- `sort file.txt` → prints sorted content
- `sort -n` → numeric sort
- `sort -r` → reverse order

### uniq
- Removes/finds duplicate ADJACENT lines (needs sort first!)
- `uniq file.txt` → removes duplicates
- `uniq -u` → keep only lines appearing exactly once
- `uniq -d` → keep only duplicates
- `uniq -c` → count occurrences

### Pipe |
- Sends output of one command into another
- `sort data.txt | uniq -u` → sort, then find unique
- `cat log.txt | grep "ERROR" | wc -l` → count error lines

### wc — word count
- `wc -l file` → line count
- `wc -w file` → word count
- `wc -c file` → byte count
### Examples
- Find all .py files in current folder:
  `find . -name "*.py"`
- Find all files exactly 1033 bytes, not executable:
  `find . -type f -size 1033c ! -executable`
- Find files owned by user "bandit7":
  `find / -user bandit7 -type f`

## Suppressing errors — 2>/dev/null

- `2` = stderr (error stream)
- `>` = redirect output
- `/dev/null` = "the trash" — anything sent here disappears

Example:
`find / -user bandit7 2>/dev/null`
→ search the whole system, ignore "permission denied" errors

## grep — search inside file contents

Syntax: `grep [pattern] [file]`

### Examples
- Find lines containing "millionth" in data.txt:
  `grep millionth data.txt`
- Case-insensitive search:
  `grep -i "ERROR" log.txt`
- Show line numbers:
  `grep -n "TODO" code.py`
- Search recursively in all files in current folder:
  `grep -r "function" .`
- Count matching lines:
  `grep -c "404" access.log`