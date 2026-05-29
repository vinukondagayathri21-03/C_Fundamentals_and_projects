# 📁 Data Types in C

# 📘 Introduction to Data Types

Data types specify:

* Type of data stored
* Size of memory allocated
* Range of values

Every variable in C must have a datatype.

---

# 🧠 Why Data Types are Important

* Efficient memory usage
* Defines type of value
* Helps compiler understand data
* Prevents invalid operations
* Improves program accuracy

---

# 📌 Classification of Data Types in C

```text id="5pzw83"
1. Basic Data Types
2. Derived Data Types
3. User-defined Data Types
4. Void Data Type
```

---

# 📌 Basic Data Types

| Data Type | Description                  |
| --------- | ---------------------------- |
| int       | Stores integers              |
| char      | Stores characters            |
| float     | Stores decimal numbers       |
| double    | Stores large decimal numbers |

---

# 🔢 Integer Data Type (`int`)

Used to store whole numbers.

## Example

```c id="4zx7vi"
int age = 20;
```

## Important Points

* Stores positive and negative numbers
* Cannot store decimal values

---

# 🔡 Character Data Type (`char`)

Used to store single character.

## Example

```c id="nn9yuv"
char grade = 'A';
```

## Important Points

* Character must be inside single quotes
* Stores ASCII value internally

---

# 🔣 Float Data Type (`float`)

Used to store decimal values.

## Example

```c id="6lfrh0"
float marks = 95.5;
```

## Important Points

* Stores fractional numbers
* Less precision compared to `double`

---

# 🔣 Double Data Type (`double`)

Used to store large decimal values with high precision.

## Example

```c id="4lq3tv"
double pi = 3.141592653;
```

---

# 📏 Size of Basic Data Types

| Data Type | Size    |
| --------- | ------- |
| char      | 1 byte  |
| int       | 4 bytes |
| float     | 4 bytes |
| double    | 8 bytes |

---

# 📌 Format Specifiers

| Data Type | Format Specifier |
| --------- | ---------------- |
| int       | %d               |
| char      | %c               |
| float     | %f               |
| double    | %lf              |

---

# 🧪 Example Program Using Data Types

```c id="12r7cz"
#include <stdio.h>

int main() {

    int age = 20;
    char grade = 'A';
    float marks = 95.5;
    double salary = 25000.5678;

    printf("%d\n", age);
    printf("%c\n", grade);
    printf("%f\n", marks);
    printf("%lf\n", salary);

    return 0;
}
```

---

# 📤 Output

```text id="jlwm0d"
20
A
95.500000
25000.567800
```

---

# 📌 Derived Data Types

Derived data types are created from basic data types.

## Types

* Arrays
* Pointers
* Functions

---

# 📌 Array Datatype

Stores multiple values of same datatype.

## Example

```c id="06d8lv"
int arr[5];
```

---

# 📌 Pointer Datatype

Stores memory address of variable.

## Example

```c id="fs2dqe"
int *ptr;
```

---

# 📌 Function Datatype

Functions perform specific tasks.

## Example

```c id="dph7h5"
int add();
```

---

# 📌 User-defined Data Types

Created by programmer.

## Types

* Structure
* Union
* Enum
* Typedef

---

# 📌 Structure Datatype

Groups different datatypes.

## Example

```c id="r1s6ck"
struct Student {
    int id;
    char name[20];
};
```

---

# 📌 Union Datatype

Shares same memory location.

## Example

```c id="z6xw2o"
union Data {
    int a;
    float b;
};
```

---

# 📌 Enum Datatype

Assigns names to constants.

## Example

```c id="t6w1gs"
enum days {
    MON,
    TUE,
    WED
};
```

---

# 📌 Typedef

Creates alias name for datatype.

## Example

```c id="q0q1go"
typedef int number;
```

---

# 📌 Void Data Type

Represents absence of value.

## Example

```c id="6u9o0h"
void display();
```

---

# 📌 Type Conversion

Changing one datatype into another datatype.

---

# 🔄 Implicit Type Conversion

Automatic conversion by compiler.

## Example

```c id="8qvlxz"
int a = 10;
float b = a;
```

---

# 🔄 Explicit Type Conversion (Type Casting)

Manual conversion by programmer.

## Example

```c id="qg0d4p"
float a = 10.5;

printf("%d", (int)a);
```

---

# 📌 ASCII Values and Character Datatype

Each character has ASCII value.

## Example

```c id="mn6v4m"
char ch = 'A';

printf("%d", ch);
```

---

# 📤 Output

```text id="xjlwm8"
65
```

---

# 📌 Modifiers in Data Types

Modifiers change size or range of datatype.

## Types

* short
* long
* signed
* unsigned

---

# 📌 Example of Modifiers

```c id="t5kqeh"
short int a;
long int b;
unsigned int c;
```

---

# ⚠️ Common Errors Related to Data Types

## 1. Wrong Format Specifier

```c id="44d0d7"
float a = 10.5;

printf("%d", a);
```

---

## 2. Storing Decimal in Integer

```c id="9u3ggq"
int a = 10.5;
```

Decimal part gets removed.

---

## 3. Character Without Quotes

```c id="8r8k8p"
char ch = A;
```

Invalid syntax.

---

# 📌 Important Points About Data Types

* Datatypes define type of data
* Every variable requires datatype
* Datatypes determine memory size
* `float` stores decimals
* `char` stores single character
* `double` provides high precision

---

# 🎯 Frequently Asked Interview Questions with Answers

## 1. What are data types in C?

Data types define the type and size of data stored in variables.

---

## 2. Why are data types important?

They help in memory allocation and defining data operations.

---

## 3. Difference between `float` and `double`?

| float          | double         |
| -------------- | -------------- |
| 4 bytes        | 8 bytes        |
| Less precision | More precision |

---

## 4. What is `char` datatype?

`char` datatype stores single character.

---

## 5. What is the use of `void` datatype?

`void` represents absence of value.

---

## 6. What are derived datatypes?

Datatypes created from basic datatypes are called derived datatypes.

Examples:

* Arrays
* Pointers
* Functions

---

## 7. What are user-defined datatypes?

Datatypes created by programmer are user-defined datatypes.

Examples:

* Structure
* Union
* Enum

---

## 8. What is type casting?

Type casting converts one datatype into another datatype.

---

## 9. What is implicit type conversion?

Automatic datatype conversion by compiler.

---

## 10. Which datatype stores decimal values?

`float` and `double` store decimal values.

---

# 🧪 Practice Programs

## Program 1: Integer Datatype

```c id="l2n0kg"
#include <stdio.h>

int main() {

    int num = 10;

    printf("%d", num);

    return 0;
}
```

---

## Program 2: Character Datatype

```c id="k4cgcn"
#include <stdio.h>

int main() {

    char grade = 'A';

    printf("%c", grade);

    return 0;
}
```

---

## Program 3: Float Datatype

```c id="h3cdbx"
#include <stdio.h>

int main() {

    float marks = 95.5;

    printf("%f", marks);

    return 0;
}
```

---

## Program 4: Double Datatype

```c id="qsv4k8"
#include <stdio.h>

int main() {

    double pi = 3.14159;

    printf("%lf", pi);

    return 0;
}
```

---

# 📌 Revision Points

✅ Datatypes define type of data
✅ `int` stores integers
✅ `char` stores characters
✅ `float` stores decimal values
✅ `double` provides higher precision
✅ Every variable needs datatype
✅ Format specifiers are used in input/output
✅ Arrays and pointers are derived datatypes
✅ Structures and unions are user-defined datatypes
✅ Type casting converts datatypes
