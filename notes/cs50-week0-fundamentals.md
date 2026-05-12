# CS50x Week 0 — Computer Science Fundamentals

## What is Computer Science?
- The study of solving problems with computers
- Input → Black Box (algorithm) → Output

## Number Systems

### Unary
- Single digit (tally marks: |, ||, |||)

### Decimal (Base 10)
- Digits: 0–9
- Position values: 10^0, 10^1, 10^2 ...
- Example: 123 = (1 × 100) + (2 × 10) + (3 × 1)

### Binary (Base 2)
- Digits: 0 and 1 only
- This is what computers understand
- Position values: 2^0, 2^1, 2^2, 2^3 ...
- Example: 101 = (1 × 4) + (0 × 2) + (1 × 1) = 5

## Bits and Bytes
- **Bit** = single binary digit (0 = false, 1 = true)
	- **Byte** = 8 bits [1 Byte = 8 bits]
- 1 byte can represent 256 different values (2^8)

## Representing Letters — ASCII
- ASCII = American Standard Code for Information Interchange
- Each letter has a number → number stored as binary
- Example: "A" = 65 = 01000001
- Lowercase letters = uppercase + 32
  - "A" = 65 → "a" = 97
  - 01000001 → 01100001
- Sending "Hi!" = sending 3 bytes (one byte per character)

## Unicode
- Superset of ASCII
- Supports all languages, symbols, and emojis
- Emojis are just characters with a Unicode number

## Representing Colors — RGB
- Every pixel = 3 numbers (Red, Green, Blue)
- Each value: 0–255 (1 byte each)
- Example: RGB(72, 73, 33) = dark yellow
- Image = grid of pixels = lots of RGB values

## Programming Building Blocks (from Scratch demo)
	## Algorithms — the phonebook story (key insight!)

Problem: Find "Sam" in a phonebook of N pages

| Algorithm | Approach | Time complexity |
|---|---|---|
| Linear (one-by-one) | Flip every page from start | N operations |
| Skip pages (every 2) | Flip 2 pages at a time | N/2 operations |
| Binary search | Open middle, decide left or right, repeat | log₂(N) operations |

**Key takeaway:**
- N operations → slow as the book grows
- N/2 → twice as fast, but still grows linearly
- log₂(N) → barely grows at all (1 million pages = ~20 steps)

⚠️ The "skip pages" approach has a bug:
   If we skip 2 pages and only check every other page,
   we might MISS Sam if he's on a skipped page.
   Always think about edge cases!

## Pseudocode
- Plain English description of an algorithm
- Example for binary search:
  1. Open middle of book
  2. If found → done
  3. If "Sam" comes before this page → search left half
  4. If "Sam" comes after this page → search right half
  5. Repeat from step 1

## Building Blocks (universal across ALL programming languages)
- **Function**: a reusable block that takes arguments and may return a value
  - Example: `print("hello")` → `print` is the function, `"hello"` is the argument
- **Argument**: input passed to a function
- **Return value**: output a function gives back

(More to come: loops, conditionals, variables, events — these come in PSET 0)
	

## Key Takeaways
- Computers represent EVERYTHING as bits (0s and 1s)
- Numbers, letters, colors, sounds, videos — all just bits underneath
- The meaning depends on context (is this binary number a letter? a color? a number?)