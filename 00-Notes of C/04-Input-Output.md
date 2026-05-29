# 📁 Input and Output in C

# 📘 Introduction to Input and Output

Input and Output operations are used for communication between user and program.

* Input → Taking data from user
* Output → Displaying data to user

C provides standard library functions for input and output operations.

---

# 📚 Header File Used

```c id="0a0m64"
#include <stdio.h>
```

`stdio.h` stands for Standard Input Output Header File.

It contains:

* `printf()`
* `scanf()`
* `getchar()`
* `putchar()`
* `gets()`
* `puts()`

---

# 📌 Output Functions in C

Output functions display data on screen.

## Common Output Functions

* `printf()`
* `putchar()`
* `puts()`

---

# 🖥️ printf() Function

Used to display formatted output on screen.

---

# 📌 Syntax of printf()

```c id="r88pxv"
printf("message");
```

---

# 🧪 Example Program

```c id="52o1hb"
#include <stdio.h>

int main() {

    printf("Welcome to C");

    return 0;
}
```

---

# 📤 Output

```text id="l5ow6k"
Welcome to C
```

---

# 📌 Printing Variables Using printf()

```c id="gzv5vf"
#include <stdio.h>

int main() {

    int age = 20;

    printf("%d", age);

    return 0;
}
```

---

# 📌 Format Specifiers

Format specifiers define datatype in input/output functions.

| Format Specifier | Datatype |
| ---------------- | -------- |
| %d               | int      |
| %c               | char     |
| %f               | float    |
| %lf              | double   |
| %s               | string   |

---

# 📌 Multiple Outputs in printf()

```c id="9q8o2k"
#include <stdio.h>

int main() {

    int age = 20;
    float marks = 95.5;

    printf("%d %f", age, marks);

    return 0;
}
```

---

# 🔣 Escape Sequences in Output

| Escape Sequence | Meaning      |
| --------------- | ------------ |
| \n              | New line     |
| \t              | Tab space    |
| \\              | Backslash    |
| \"              | Double quote |

---

# 📌 Example Using Escape Sequences

```c id="c77g4i"
#include <stdio.h>

int main() {

    printf("Hello\n");
    printf("World");

    return 0;
}
```

---

# 📤 Output

```text id="rzqf81"
Hello
World
```

---

# 📌 Input Functions in C

Input functions take data from user.

## Common Input Functions

* `scanf()`
* `getchar()`
* `gets()`

---

# ⌨️ scanf() Function

Used to take formatted input from user.

---

# 📌 Syntax of scanf()

```c id="8tkjlwm"
scanf("format_specifier", &variable);
```

---

# 📌 Example Program

```c id="q8yjjr"
#include <stdio.h>

int main() {

    int age;

    scanf("%d", &age);

    printf("%d", age);

    return 0;
}
```

---

# 🧠 Important Points About scanf()

* Uses format specifiers
* Uses address operator `&`
* Takes input from keyboard

---

# 📌 Why `&` is Used in scanf()

`&` gives memory address of variable.

Example:

```c id="k8m5gw"
scanf("%d", &age);
```

Here `&age` gives address of variable.

---

# 📌 Taking Multiple Inputs

```c id="6g2x7u"
#include <stdio.h>

int main() {

    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d", a + b);

    return 0;
}
```

---

# 📌 Input and Output of Character

```c id="1ub1v7"
#include <stdio.h>

int main() {

    char ch;

    scanf("%c", &ch);

    printf("%c", ch);

    return 0;
}
```

---

# 📌 Input and Output of Float

```c id="n3epv2"
#include <stdio.h>

int main() {

    float marks;

    scanf("%f", &marks);

    printf("%f", marks);

    return 0;
}
```

---

# 🔤 getchar() Function

Used to take single character input.

---

# 📌 Syntax

```c id="qlh84w"
getchar();
```

---

# 🧪 Example

```c id="9aygcb"
#include <stdio.h>

int main() {

    char ch;

    ch = getchar();

    printf("%c", ch);

    return 0;
}
```

---

# 🔡 putchar() Function

Used to display single character.

---

# 📌 Syntax

```c id="j1sz1v"
putchar(character);
```

---

# 🧪 Example

```c id="up3w9g"
#include <stdio.h>

int main() {

    putchar('A');

    return 0;
}
```

---

# 📤 Output

```text id="jq0zro"
A
```

---

# 📝 gets() Function

Used to take string input including spaces.

---

# 📌 Syntax

```c id="d5y6bn"
gets(string_name);
```

---

# 🧪 Example

```c id="9kmmvx"
#include <stdio.h>

int main() {

    char name[20];

    gets(name);

    printf("%s", name);

    return 0;
}
```

---

# 📝 puts() Function

Used to display string output.

---

# 📌 Syntax

```c id="95g41f"
puts(string_name);
```

---

# 🧪 Example

```c id="3dq3zd"
#include <stdio.h>

int main() {

    char name[] = "Gayathri";

    puts(name);

    return 0;
}
```

---

# 📤 Output

```text id="w2d90z"
Gayathri
```

---

# 📌 Difference Between printf() and puts()

| printf()                  | puts()               |
| ------------------------- | -------------------- |
| Displays formatted output | Displays string only |
| Uses format specifiers    | No format specifier  |

---

# 📌 Difference Between scanf() and gets()

| scanf()               | gets()              |
| --------------------- | ------------------- |
| Stops at space        | Reads full line     |
| Uses format specifier | No format specifier |

---

# 📌 Buffered and Unbuffered Input

| Type             | Description             |
| ---------------- | ----------------------- |
| Buffered Input   | Stores data temporarily |
| Unbuffered Input | Direct input processing |

---

# 📌 Input Buffer Problem

After using `scanf()`, newline character may remain in buffer.

---

# 🧪 Example

```c id="wosjq0"
scanf("%d", &a);
scanf("%c", &ch);
```

`%c` may read newline character.

---

# 📌 Solution Using getchar()

```c id="cktoyz"
scanf("%d", &a);
getchar();
scanf("%c", &ch);
```

---

# ⚠️ Common Errors in Input Output

## 1. Missing `&` in scanf()

```c id="u1tf9v"
scanf("%d", age);
```

Incorrect.

---

## 2. Wrong Format Specifier

```c id="jlwm2a"
float a;

scanf("%d", &a);
```

Incorrect datatype format.

---

## 3. Using `%s` Without Array

```c id="v3u3pu"
char name;

scanf("%s", name);
```

Incorrect.

---

# 📌 Important Points About Input Output

* `printf()` displays output
* `scanf()` takes input
* `&` gives address of variable
* `getchar()` reads single character
* `putchar()` prints single character
* `gets()` reads string with spaces
* `puts()` displays string

---

# 🎯 Frequently Asked Interview Questions with Answers

## 1. What is input and output in C?

Input means taking data from user.
Output means displaying data to user.

---

## 2. What is `stdio.h`?

`stdio.h` is standard input output header file.

---

## 3. What is `printf()` used for?

`printf()` is used to display output on screen.

---

## 4. What is `scanf()` used for?

`scanf()` is used to take input from user.

---

## 5. Why is `&` used in scanf()?

`&` provides address of variable for storing input.

---

## 6. Difference between `printf()` and `scanf()`?

| printf()        | scanf()     |
| --------------- | ----------- |
| Displays output | Takes input |

---

## 7. What is format specifier?

Format specifier defines datatype during input/output operations.

---

## 8. Difference between `getchar()` and `putchar()`?

| getchar()             | putchar()                 |
| --------------------- | ------------------------- |
| Takes character input | Displays character output |

---

## 9. Difference between `scanf()` and `gets()`?

| scanf()        | gets()          |
| -------------- | --------------- |
| Stops at space | Reads full line |

---

## 10. What is escape sequence?

Escape sequences are special characters used in output formatting.

Example:

```text id="jlwmx8"
\n
\t
```

---

# 🧪 Practice Programs

## Program 1: Print Message

```c id="i8mjlwm"
#include <stdio.h>

int main() {

    printf("Hello World");

    return 0;
}
```

---

## Program 2: Take Integer Input

```c id="zwf9h4"
#include <stdio.h>

int main() {

    int num;

    scanf("%d", &num);

    printf("%d", num);

    return 0;
}
```

---

## Program 3: Character Input Output

```c id="jlwmw1"
#include <stdio.h>

int main() {

    char ch;

    scanf("%c", &ch);

    printf("%c", ch);

    return 0;
}
```

---

## Program 4: String Input Output

```c id="vjlwm9"
#include <stdio.h>

int main() {

    char name[20];

    gets(name);

    puts(name);

    return 0;
}
```

---

# 📌 Revision Points

✅ `printf()` displays output
✅ `scanf()` takes input
✅ `&` gives address of variable
✅ `%d` for integer
✅ `%f` for float
✅ `%c` for character
✅ `%s` for string
✅ `getchar()` reads character
✅ `putchar()` prints character
✅ `gets()` reads string with spaces
✅ `puts()` displays string
✅ Escape sequences format output
