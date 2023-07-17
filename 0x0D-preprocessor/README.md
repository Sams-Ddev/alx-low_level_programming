# C Preprocessor

This repository contains solutions for a set of tasks related to the C preprocessor. Each task is implemented as a header file, and this README provides an overview of each task and its associated header file.

## Task 0: Object-like Macro

**Header File:** [0-object_like_macro.h](./0x0D-preprocessor/0-object_like_macro.h)

This task involves creating a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.

Example usage:
```c
#include "0-object_like_macro.h"
#include <stdio.h>

int main(void)
{
    int s;

    s = 98 + SIZE;
    printf("%d\n", s);
    return (0);
}
```

## Task 1: Pi

**Header File:** [1-pi.h](./0x0D-preprocessor/1-pi.h)

In this task, a header file is created to define a macro named `PI` as an abbreviation for the token `3.14159265359`.

Example usage:
```c
#include "1-pi.h"
#include <stdio.h>

int main(void)
{
    float a;
    float r;

    r = 98;
    a = PI * r * r;
    printf("%.3f\n", a);
    return (0);
}
```

## Task 2: File name

**Source File:** [2-main.c](./0x0D-preprocessor/2-main.c)

This task involves writing a program that prints the name of the file it was compiled from, followed by a new line.

Example usage:
```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o c
$ ./c
2-main.c
```

## Task 3: Function-like Macro

**Header File:** [3-function_like_macro.h](./0x0D-preprocessor/3-function_like_macro.h)

In this task, a function-like macro named `ABS(x)` is created, which computes the absolute value of a number `x`.

Example usage:
```c
#include <stdio.h>
#include "3-function_like_macro.h"

int main(void)
{
    int i;
    int j;

    i = ABS(-98) * 10;
    j = ABS(98) * 10;
    printf("%d, %d\n", i, j);
    return (0);
}
```

## Task 4: SUM

**Header File:** [4-sum.h](./0x0D-preprocessor/4-sum.h)

In this task, a function-like macro named `SUM(x, y)` is created to compute the sum of the numbers `x` and `y`.

Example usage:
```c
#include <stdio.h>
#include "4-sum.h"

int main(void)
{
    int s;

    s = SUM(98, 1024);
    printf("%d\n", s);
    return (0);
}
```

## Copyright

This project is the intellectual property of ALX and is protected by copyright laws. Any form of plagiarism or unauthorized publication of this content is strictly prohibited and will result in removal from the program.

Please ensure that you adhere to the guidelines and learning objectives stated above. Happy coding!
