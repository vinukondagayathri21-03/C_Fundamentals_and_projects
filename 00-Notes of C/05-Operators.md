# 📁 Operators in C

# 📘 Introduction to Operators

Operators are special symbols used to perform operations on operands (values or variables).

---

# 📌 Example

```c id="d3x7m1"
int a = 10;
int b = 20;

int sum = a + b;
```

Here:

* `+` is operator
* `a` and `b` are operands

---

# 🧠 Why Operators are Important

* Perform calculations
* Compare values
* Make decisions
* Control program flow
* Perform logical operations

---

# 📚 Types of Operators in C

```text id="x7g3pq"
1. Arithmetic Operators
2. Relational Operators
3. Logical Operators
4. Assignment Operators
5. Increment and Decrement Operators
6. Bitwise Operators
7. Conditional Operator
8. Special Operators
```

---

# 🔢 Arithmetic Operators

Used to perform mathematical operations.

| Operator | Meaning        |
| -------- | -------------- |
| +        | Addition       |
| -        | Subtraction    |
| *        | Multiplication |
| /        | Division       |
| %        | Modulus        |

---

# 📌 Addition Operator (`+`)

```c id="n0f8qs"
int a = 10, b = 20;

printf("%d", a + b);
```

---

# 📌 Subtraction Operator (`-`)

```c id="h4v7mz"
int a = 20, b = 10;

printf("%d", a - b);
```

---

# 📌 Multiplication Operator (`*`)

```c id="3mjlwm"
int a = 5, b = 4;

printf("%d", a * b);
```

---

# 📌 Division Operator (`/`)

```c id="0jlwm8"
int a = 20, b = 5;

printf("%d", a / b);
```

---

# 📌 Modulus Operator (`%`)

Returns remainder.

```c id="jlwm92"
int a = 10, b = 3;

printf("%d", a % b);
```

---

# 📤 Output

```text id="jlwmk1"
1
```

---

# ⚠️ Important Points About Arithmetic Operators

* `%` works only with integers
* Division by zero causes error
* Integer division removes decimal part

---

# 🔍 Relational Operators

Used to compare two values.

Result is:

* True → `1`
* False → `0`

---

# 📚 Types of Relational Operators

| Operator | Meaning               |
| -------- | --------------------- |
| ==       | Equal to              |
| !=       | Not equal to          |
| >        | Greater than          |
| <        | Less than             |
| >=       | Greater than or equal |
| <=       | Less than or equal    |

---

# 📌 Example of Relational Operators

```c id="jlwmx2"
int a = 10, b = 20;

printf("%d", a < b);
```

---

# 📤 Output

```text id="jlwmv4"
1
```

---

# 🧠 Important Points

* Used in conditions
* Returns only `0` or `1`

---

# 🔗 Logical Operators

Used to combine conditions.

---

# 📚 Types of Logical Operators

| Operator | Meaning     |   |            |
| -------- | ----------- | - | ---------- |
| &&       | Logical AND |   |            |
|          |             |   | Logical OR |
| !        | Logical NOT |   |            |

---

# 📌 Logical AND (`&&`)

Returns true if both conditions are true.

```c id="jlwmh7"
int a = 10;

printf("%d", a > 5 && a < 20);
```

---

# 📌 Logical OR (`||`)

Returns true if at least one condition is true.

```c id="jlwmc9"
int a = 10;

printf("%d", a > 20 || a < 15);
```

---

# 📌 Logical NOT (`!`)

Reverses result.

```c id="jlwmf3"
int a = 10;

printf("%d", !(a > 5));
```

---

# 📤 Output

```text id="jlwmr2"
0
```

---

# 🧠 Truth Table for AND (`&&`)

| Condition 1 | Condition 2 | Result |
| ----------- | ----------- | ------ |
| 1           | 1           | 1      |
| 1           | 0           | 0      |
| 0           | 1           | 0      |
| 0           | 0           | 0      |

---

# 🧠 Truth Table for OR (`||`)

| Condition 1 | Condition 2 | Result |
| ----------- | ----------- | ------ |
| 1           | 1           | 1      |
| 1           | 0           | 1      |
| 0           | 1           | 1      |
| 0           | 0           | 0      |

---

# 📝 Assignment Operators

Used to assign values to variables.

---

# 📚 Types of Assignment Operators

| Operator | Meaning             |
| -------- | ------------------- |
| =        | Assign              |
| +=       | Add and assign      |
| -=       | Subtract and assign |
| *=       | Multiply and assign |
| /=       | Divide and assign   |
| %=       | Modulus and assign  |

---

# 📌 Example

```c id="jlwmt7"
int a = 10;

a += 5;

printf("%d", a);
```

---

# 📤 Output

```text id="jlwmm5"
15
```

---

# 🔄 Increment and Decrement Operators

Used to increase or decrease value by 1.

---

# 📚 Types

| Operator | Meaning   |
| -------- | --------- |
| ++       | Increment |
| --       | Decrement |

---

# 📌 Increment Operator (`++`)

```c id="jlwmj8"
int a = 10;

a++;

printf("%d", a);
```

---

# 📤 Output

```text id="jlwmg6"
11
```

---

# 📌 Decrement Operator (`--`)

```c id="jlwmu3"
int a = 10;

a--;

printf("%d", a);
```

---

# 📤 Output

```text id="jlwmn2"
9
```

---

# 📌 Types of Increment

## 1. Pre Increment

Value increases first.

```c id="jlwmz1"
++a;
```

---

## 2. Post Increment

Value used first, then increased.

```c id="jlwmq8"
a++;
```

---

# 📌 Example

```c id="jlwmw9"
int a = 10;

printf("%d", ++a);
printf("%d", a++);
```

---

# 🔢 Bitwise Operators

Perform operations at bit level.

---

# 📚 Types of Bitwise Operators

| Operator | Meaning     |
| -------- | ----------- |
| &        | Bitwise AND |
| |        | Bitwise OR  |
| ^        | Bitwise XOR |
| ~        | Bitwise NOT |
| <<       | Left Shift  |
| >>       | Right Shift |

---

# 📌 Bitwise AND (`&`)

```c id="jlwml0"
int a = 5, b = 3;

printf("%d", a & b);
```

---

# 📌 Bitwise OR (`|`)

```c id="jlwmd4"
int a = 5, b = 3;

printf("%d", a | b);
```

---

# 📌 Left Shift (`<<`)

```c id="jlwmk7"
int a = 5;

printf("%d", a << 1);
```

---

# 📌 Right Shift (`>>`)

```c id="jlwmb5"
int a = 5;

printf("%d", a >> 1);
```

---

# ❓ Conditional Operator (`?:`)

Shortcut for `if-else`.

---

# 📌 Syntax

```c id="jlwmp2"
condition ? expression1 : expression2;
```

---

# 📌 Example

```c id="jlwms9"
int a = 10, b = 20;

(a > b) ? printf("A") : printf("B");
```

---

# ⭐ Special Operators

---

# 📌 sizeof() Operator

Returns memory size.

```c id="jlwmx5"
printf("%d", sizeof(int));
```

---

# 📌 Comma Operator

Executes multiple expressions.

```c id="jlwmv8"
int a = 10, b = 20;
```

---

# 📌 Address Operator (`&`)

Returns address of variable.

```c id="jlwmm1"
&a
```

---

# 📌 Pointer Operator (`*`)

Used with pointers.

```c id="jlwmc5"
*ptr
```

---

# 📌 Operator Precedence

Defines execution priority.

---

# 📚 High to Low Precedence

| Operators | Priority |
| --------- | -------- |
| ()        | Highest  |
| ++ --     | High     |
| * / %     | Medium   |
| + -       | Low      |
| =         | Lower    |

---

# 📌 Example

```c id="jlwmf7"
int result = 10 + 5 * 2;
```

Output:

```text id="jlwmh2"
20
```

---

# 📌 Associativity

Defines direction of evaluation.

| Associativity Type | Direction            |
| ------------------ | -------------------- |
| Left to Right      | Most operators       |
| Right to Left      | Assignment operators |

---

# ⚠️ Common Errors in Operators

## 1. Using `=` instead of `==`

```c id="jlwmsg"
if(a = 10)
```

Incorrect comparison.

---

## 2. Division by Zero

```c id="jlwmu9"
int a = 10 / 0;
```

Runtime error.

---

## 3. Using `%` with Float

```c id="jlwmz6"
float a = 10.5;

a % 2;
```

Invalid.

---

# 📌 Important Points About Operators

* Operators perform operations
* Operands are values or variables
* Relational operators return `0` or `1`
* Logical operators combine conditions
* Increment increases value by 1
* Assignment operators modify values

---

# 🎯 Frequently Asked Interview Questions with Answers

## 1. What are operators in C?

Operators are symbols used to perform operations on operands.

---

## 2. What are operands?

Operands are values or variables on which operators work.

---

## 3. Difference between `=` and `==`?

| `=`                 | `==`                |
| ------------------- | ------------------- |
| Assignment operator | Relational operator |
| Assigns value       | Compares values     |

---

## 4. What is modulus operator?

`%` returns remainder after division.

---

## 5. Difference between pre and post increment?

| Pre Increment   | Post Increment |
| --------------- | -------------- |
| Increases first | Uses first     |

---

## 6. What are logical operators?

Logical operators combine multiple conditions.

---

## 7. What is conditional operator?

Conditional operator is shorthand form of `if-else`.

---

## 8. What is operator precedence?

Operator precedence defines execution priority.

---

## 9. What are bitwise operators?

Bitwise operators perform operations on binary bits.

---

## 10. What does `sizeof()` operator do?

`sizeof()` returns memory size of datatype or variable.

---

# 🧪 Practice Programs

## Program 1: Arithmetic Operators

```c id="jlwmm9"
#include <stdio.h>

int main() {

    int a = 10, b = 5;

    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);

    return 0;
}
```

---

## Program 2: Relational Operators

```c id="jlwmd1"
#include <stdio.h>

int main() {

    int a = 10, b = 20;

    printf("%d", a < b);

    return 0;
}
```

---

## Program 3: Logical Operators

```c id="jlwmg5"
#include <stdio.h>

int main() {

    int a = 10;

    printf("%d", a > 5 && a < 20);

    return 0;
}
```

---

## Program 4: Increment Operator

```c id="jlwmu4"
#include <stdio.h>

int main() {

    int a = 10;

    a++;

    printf("%d", a);

    return 0;
}
```

---

# 📌 Revision Points

✅ Operators perform operations
✅ Arithmetic operators perform calculations
✅ Relational operators compare values
✅ Logical operators combine conditions
✅ Assignment operators assign values
✅ Increment and decrement change values by 1
✅ Bitwise operators work on bits
✅ Conditional operator is shortcut for if-else
✅ `sizeof()` returns memory size
✅ Operator precedence defines execution order
