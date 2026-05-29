# 📁 Variables in C

# 📘 Introduction to Variables

A variable is a named memory location used to store data in a program.

Variables help store values that can be changed during program execution.

---

# 🧠 Why Variables are Used

* Store user input
* Store temporary values
* Perform calculations
* Control program execution
* Reuse data multiple times

---

# 📌 Syntax of Variable Declaration

```c id="2o1bff"
datatype variable_name;
```

## Example

```c id="3e3wq8"
int age;
```

---

# 📌 Variable Initialization

Assigning value to a variable is called initialization.

## Syntax

```c id="n5xqlq"
datatype variable_name = value;
```

## Example

```c id="vnddmc"
int age = 20;
```

---

# 📌 Declaration vs Initialization

| Declaration      | Initialization |
| ---------------- | -------------- |
| Creates variable | Assigns value  |
| `int a;`         | `int a = 10;`  |

---

# 📌 Rules for Naming Variables

## ✅ Allowed

* Alphabets
* Digits
* Underscore `_`

## ❌ Not Allowed

* Spaces
* Special symbols
* Starting with numbers
* Keywords

---

# ✅ Valid Variable Names

```c id="33r2d4"
age
student_name
totalMarks
num1
```

---

# ❌ Invalid Variable Names

```c id="6mt6fz"
1age
student name
float
total-marks
```

---

# 🔑 Keywords Cannot Be Used as Variables

## Example

```c id="3l4kgh"
int float = 10;
```

This is invalid because `float` is a keyword.

---

# 📌 Assigning Values to Variables

## Example

```c id="h07m07"
int a;

a = 50;
```

---

# 🔄 Reassigning Variables

Variable values can be changed during execution.

## Example

```c id="c9z5oq"
int a = 10;

a = 20;
```

Now value of `a` becomes `20`.

---

# 📌 Multiple Variable Declaration

## Example

```c id="7h3e74"
int a, b, c;
```

---

# 📌 Multiple Variable Initialization

## Example

```c id="ktzqiw"
int a = 10, b = 20, c = 30;
```

---

# 🧠 Local Variables

Variables declared inside a function are called local variables.

## Example

```c id="olmf0q"
#include <stdio.h>

int main() {

    int a = 10;

    return 0;
}
```

`a` is accessible only inside `main()`.

---

# 🌍 Global Variables

Variables declared outside all functions are called global variables.

## Example

```c id="0r5zcq"
#include <stdio.h>

int a = 100;

int main() {

    printf("%d", a);

    return 0;
}
```

Global variables can be accessed throughout the program.

---

# ⚠️ Uninitialized Variables

Variables without initialization contain garbage values.

## Example

```c id="5rq6db"
int a;

printf("%d", a);
```

Output may be random.

---

# 📌 Constant Variables

Constant variables cannot be modified after initialization.

## Syntax

```c id="cz7mav"
const int a = 10;
```

---

# ❌ Invalid Modification of Constant Variable

```c id="sgo58n"
const int a = 10;

a = 20;
```

This produces an error.

---

# 🧠 Scope of Variables

Scope defines where a variable can be accessed.

| Variable Type   | Scope           |
| --------------- | --------------- |
| Local Variable  | Inside function |
| Global Variable | Entire program  |

---

# 🕒 Lifetime of Variables

Lifetime defines how long variable exists in memory.

| Variable Type   | Lifetime                 |
| --------------- | ------------------------ |
| Local Variable  | Till function execution  |
| Global Variable | Entire program execution |

---

# 📌 Memory Allocation for Variables

When variable is declared:

* Memory is allocated
* Variable name points to memory location
* Value is stored in memory

---

# 🧠 Variable Naming Conventions

## Recommended Naming Styles

```c id="u5ih7j"
studentName
total_marks
employeeSalary
```

---

# ❌ Poor Naming Examples

```c id="tshg7w"
a
x
temp1
```

---

# 📌 Variable Declaration Methods

## 1. Separate Declaration

```c id="epkhr5"
int a;
int b;
```

---

## 2. Combined Declaration

```c id="cfyywd"
int a, b, c;
```

---

# 📌 Dynamic Value Change

Variables can store changing values.

## Example

```c id="6r5g2g"
int score = 10;

score = score + 5;
```

New value becomes `15`.

---

# ⚠️ Common Errors with Variables

## 1. Using Undeclared Variable

```c id="smbyl7"
a = 10;
```

---

## 2. Invalid Variable Name

```c id="y9w7eh"
int 1num;
```

---

## 3. Using Keyword as Variable

```c id="imj50p"
int return = 5;
```

---

## 4. Duplicate Variable Names

```c id="tkl8n4"
int a = 10;
int a = 20;
```

Error occurs in same scope.

---

# 📌 Important Points About Variables

* Variables store values
* Variable values can change
* Variables require datatype
* Variables occupy memory
* Variable names should be meaningful
* Variables must follow naming rules

---

# 🎯 Frequently Asked Interview Questions with Answers

## 1. What is a variable in C?

A variable is a named memory location used to store data.

---

## 2. What is variable declaration?

Variable declaration means creating a variable with datatype.

Example:

```c id="s0a5jx"
int age;
```

---

## 3. What is variable initialization?

Assigning value to a variable is called initialization.

Example:

```c id="0bzj9j"
int age = 20;
```

---

## 4. Difference between declaration and initialization?

| Declaration      | Initialization |
| ---------------- | -------------- |
| Creates variable | Assigns value  |
| `int a;`         | `int a = 10;`  |

---

## 5. What are local variables?

Variables declared inside functions are local variables.

---

## 6. What are global variables?

Variables declared outside all functions are global variables.

---

## 7. What happens if variable is not initialized?

It contains garbage value.

---

## 8. Can variable values be changed?

Yes, variable values can be changed during execution.

---

## 9. What is scope of variable?

Scope defines where variable can be accessed.

---

## 10. Why are meaningful variable names important?

Meaningful names improve code readability and understanding.

---

# 🧪 Practice Programs

## Program 1: Variable Declaration

```c id="j3mq3z"
#include <stdio.h>

int main() {

    int age = 20;

    printf("%d", age);

    return 0;
}
```

---

## Program 2: Reassigning Variable

```c id="mfq5te"
#include <stdio.h>

int main() {

    int a = 10;

    a = 50;

    printf("%d", a);

    return 0;
}
```

---

## Program 3: Multiple Variables

```c id="5r8gbf"
#include <stdio.h>

int main() {

    int a = 10, b = 20;

    printf("%d", a + b);

    return 0;
}
```

---

## Program 4: Global Variable

```c id="07pn8f"
#include <stdio.h>

int num = 100;

int main() {

    printf("%d", num);

    return 0;
}
```

---

# 📌 Revision Points

✅ Variables store data
✅ Variables occupy memory
✅ Variable values can change
✅ Variables must follow naming rules
✅ Variables can be local or global
✅ Variables can be initialized
✅ Uninitialized variables contain garbage values
✅ Constants cannot be modified
✅ Scope defines accessibility
✅ Lifetime defines existence in memory
