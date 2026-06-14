# THUNDER HACKATHON 2.0 — Build Your Own JavaScript Runtime (C++)

## Overview

This project is a lightweight JavaScript runtime implemented in C++.

The runtime accepts a JavaScript (.js) file as input, interprets supported JavaScript patterns, and prints output to the terminal.

This submission was created for THUNDER HACKATHON 2.0.

---

## Features Implemented

Current supported functionality:

- Variable declarations (`let`)
- Conditional statements (`if / else`)
- Arithmetic operations
- Odd / Even evaluation
- For loops
- Pattern printing
- Functions
- Armstrong number checking
- Array reverse
- String palindrome check

---

## Project Structure

```plaintext
thunder-js-runtime/

main.cpp

lexer.h
lexer.cpp

runtime.h

interpreter.h
interpreter.cpp

tests/

README.md
```

---

## Requirements

Install:

- C++ Compiler (g++)
- VS Code (recommended)

Check compiler:

```bash
g++ --version
```

---

## Compile

Open terminal inside project folder.

Run:

```bash
g++ main.cpp lexer.cpp interpreter.cpp -o jsruntime.exe
```

After compilation:

```plaintext
jsruntime.exe
```

will be created.

---

## Run

General command:

```bash
./jsruntime file.js
```

Windows PowerShell:

```powershell
.\jsruntime.exe file.js
```

Example:

```powershell
.\jsruntime.exe tests\tc1.js
```

---

## Test Cases

### TC1 — Odd / Even

Input:

```js
let num = 7;

if(num%2===0){

console.log("Even");

}
else{

console.log("Odd");

}
```

Output:

```plaintext
7 is Odd
```

---

### TC2 — Triangle Pattern

Output:

```plaintext
*
* *
* * *
* * * *
* * * * *
```

---

### TC3 — Armstrong Number

Output:

```plaintext
true
false
```

---

### TC4 — Array Reverse

Output:

```plaintext
Original: 1, 2, 3, 4, 5
Reversed: 5, 4, 3, 2, 1
```

---

### TC5 — Palindrome

Output:

```plaintext
racecar is a Palindrome
```

---

## Execution Steps

1. Clone repository

```bash
git clone <repository-url>
```

2. Open folder

```bash
cd thunder-js-runtime
```

3. Compile

```bash
g++ main.cpp lexer.cpp interpreter.cpp -o jsruntime.exe
```

4. Run

```bash
.\jsruntime.exe tests\tc1.js
```

---

## Notes

This runtime is implemented for educational and hackathon purposes and demonstrates the basic architecture of:

```plaintext
Input JS
↓

Lexer

↓

Interpreter

↓

Runtime

↓

Output
```

---

## Author

Harshit Bhukar