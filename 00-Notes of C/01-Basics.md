# 📁 01 Basics of C Language

# 📘 Introduction to C

C is a general-purpose, procedural programming language developed by Dennis Ritchie at Bell Labs in 1972.

C is widely used for:

* System Programming
* Operating Systems
* Embedded Systems
* Compilers
* Game Development
* Drivers
* DSA and Competitive Programming

---

# ⭐ Features of C Language

* Simple and easy to learn
* Fast execution
* Structured programming language
* Portable language
* Supports pointers
* Dynamic memory management
* Rich library functions
* Middle-level language
* Efficient and flexible

---

# 🧠 Why Learn C?

* Builds programming logic
* Base for C++, Java, Python
* Important for placements
* Used in DSA
* Important for GATE preparation
* Helps understand memory management

---

# 📌 Applications of C

| Application Area  | Usage            |
| ----------------- | ---------------- |
| Operating Systems | Linux, Windows   |
| Embedded Systems  | Microcontrollers |
| Databases         | MySQL            |
| Compilers         | GCC              |
| Networking        | Protocols        |
| Game Engines      | Graphics systems |

---

# ⚙️ Structure of a C Program

```c
#include <stdio.h>

int main() {
    printf("Hello World");
    return 0;
}
```

---

# 🔍 Explanation of Each Part

## 1. `#include <stdio.h>`

* Preprocessor directive
* Includes standard input/output header file
* Needed for `printf()` and `scanf()`

---

## 2. `main()`

```c
int main()
```

* Entry point of C program
* Execution starts from `main()`

---

## 3. Curly Braces `{ }`

```c
{
    
}
```

* Defines block of code

---

## 4. `printf()`

```c
printf("Hello");
```

* Used to display output

---

## 5. `return 0`

```c
return 0;
```

* Indicates successful execution

---

# 🖥️ First C Program

```c
#include <stdio.h>

int main() {
    printf("Welcome to C Programming");
    return 0;
}
```

---

# 📤 Output

```text
Welcome to C Programming
```

---

# 📝 Important Rules in C

* Every statement ends with `;`
* C is case-sensitive
* `main()` is compulsory
* Use proper indentation
* Keywords cannot be used as variable names

---

# 🔠 Character Set in C

## 1. Alphabets

```text
A-Z , a-z
```

## 2. Digits

```text
0-9
```

## 3. Special Symbols

```text
+ - * / % & | ! < >
```

---

# 🔑 Keywords in C

Keywords are reserved words with predefined meaning.

## Examples

```text
int
float
char
if
else
while
for
return
break
continue
switch
case
void
static
```

---

# 🆔 Identifiers in C

Identifiers are names given to:

* Variables
* Functions
* Arrays
* Structures

## Rules for Identifiers

✅ Can contain:

* Alphabets
* Digits
* Underscore `_`

❌ Cannot:

* Start with number
* Contain spaces
* Use keywords

## Valid Identifiers

```c
age
student_name
totalMarks
```

## Invalid Identifiers

```c
1age
student name
float
```

---

# 💬 Comments in C

Comments improve code readability.

## Single Line Comment

```c
// This is comment
```

## Multi-line Comment

```c
/* 
This is
multi-line comment
*/
```

---

# 📚 Header Files

Header files contain predefined functions.

## Common Header Files

| Header File | Purpose                |
| ----------- | ---------------------- |
| stdio.h     | Input Output           |
| conio.h     | Console functions      |
| math.h      | Mathematical functions |
| string.h    | String functions       |
| stdlib.h    | Memory allocation      |

---

# 🛠️ Compilation Process in C

## Steps

1. Writing code
2. Compiling
3. Linking
4. Executing

---

# ⚡ Compiler

Compiler converts source code into machine code.

## Popular Compilers

* GCC
* Turbo C
* Clang

---

# 🧾 Tokens in C

Smallest units in C program are called tokens.

## Types of Tokens

* Keywords
* Identifiers
* Constants
* Strings
* Operators
* Symbols

---

# 🔢 Constants in C

Constants are fixed values.

## Integer Constant

```c
10
25
100
```

## Float Constant

```c
10.5
3.14
```

## Character Constant

```c
'A'
'B'
```

## String Constant

```c
"Hello"
```

---

# 🔣 Escape Sequences

| Escape Sequence | Meaning      |
| --------------- | ------------ |
| \n              | New line     |
| \t              | Tab space    |
| \\              | Backslash    |
| \"              | Double quote |

---

# 🧠 Basic Syntax Rules

## Example

```c
#include <stdio.h>

int main() {

    printf("C Language");

    return 0;
}
```

## Syntax Rules

* Use semicolon `;`
* Use braces properly
* Use quotes for strings
* Maintain indentation

---

# 📌 Advantages of C

* High performance
* Portable
* Easy debugging
* Fast execution
* Rich standard library

---

# ❌ Disadvantages of C

* No OOP support
* No exception handling
* No garbage collection
* Manual memory management

---

# 💡 Difference Between Compiler and Interpreter

| Compiler                  | Interpreter           |
| ------------------------- | --------------------- |
| Converts full program     | Converts line by line |
| Faster execution          | Slower execution      |
| Generates executable file | No executable file    |

---

# 🎯 Frequently Asked Interview Questions with Answers

## 1. Who developed C language?

Dennis Ritchie developed C language in 1972 at Bell Labs.

---

## 2. Why is C called a middle-level language?

C is called a middle-level language because it supports both low-level and high-level programming features.

---

## 3. What is the use of `stdio.h`?

`stdio.h` is a header file used for standard input and output functions like `printf()` and `scanf()`.

---

## 4. What is the purpose of `main()`?

`main()` is the entry point of a C program. Program execution starts from `main()`.

---

## 5. Difference between compiler and interpreter?

| Compiler                  | Interpreter           |
| ------------------------- | --------------------- |
| Converts full program     | Converts line by line |
| Faster                    | Slower                |
| Generates executable file | No executable file    |

---

## 6. What are tokens in C?

Tokens are the smallest individual units in a C program.

Examples:

* Keywords
* Operators
* Constants
* Identifiers

---

## 7. What are identifiers?

Identifiers are user-defined names used for variables, functions, arrays, etc.

Example:

```c
int age;
```

Here `age` is an identifier.

---

## 8. What are keywords?

Keywords are reserved words with predefined meaning in C.

Examples:

```text
int
float
return
if
while
```

---

## 9. Difference between constant and variable?

| Constant           | Variable         |
| ------------------ | ---------------- |
| Fixed value        | Value can change |
| Cannot be modified | Can be modified  |

---

## 10. Why is C case-sensitive?

C treats uppercase and lowercase letters differently.

Example:

```c
age
Age
```

Both are treated as different identifiers.

---

# 🧪 Important Basic Programs

## Hello World Program

```c
#include <stdio.h>

int main() {
    printf("Hello World");
    return 0;
}
```

---

## Printing Multiple Lines

```c
#include <stdio.h>

int main() {

    printf("Welcome\\n");
    printf("To\\n");
    printf("C Programming");

    return 0;
}
```

---

## Using Comments

```c
#include <stdio.h>

int main() {

    // Printing message
    printf("Learning C");

    return 0;
}
```

---

# 📌 Revision Points

✅ C is procedural language
✅ Developed by Dennis Ritchie
✅ `main()` is entry point
✅ `printf()` displays output
✅ `#include` adds header files
✅ Statements end with `;`
✅ C is case-sensitive
✅ Compiler converts code to machine language
✅ Tokens are smallest units in C
✅ Keywords are reserved words
