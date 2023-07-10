## 0x0B. C - malloc, free

### Memory allocation

By: Julien Barbier
Weight: 1
Project will start Jul 10, 2023 6:00 AM, must end by Jul 12, 2023 6:00 AM
Checker was released at Jul 10, 2023 6:00 AM
An auto review will be launched at the deadline

### Concepts
For this project, we expect you to look at this concept:

- Automatic and dynamic allocation, malloc and free

### Resources
Read or watch:

- [0x0a - malloc & free - quick overview.pdf](https://docs.google.com/document/d/1j5fqfZIu9ddEeLVtr-4CzK0KvWm3pqB0ua0GC2_GW9s/edit?usp=sharing)
- [Dynamic memory allocation in C - malloc calloc realloc free (stop at 6:50)](https://www.youtube.com/watch?v=xDVC3wKjS64)

Man or help:

- `malloc`
- `free`

### Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

- General
  - What is the difference between automatic and dynamic allocation
  - What is `malloc` and `free` and how to use them
  - Why and when to use `malloc`
  - How to use `valgrind` to check for memory leaks

### Requirements
General

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc` and `free`. Any use of functions like `printf`, `puts`, `calloc`, `realloc`, etc. is forbidden
- You are allowed to use `_putchar`
- You don't have to push `_putchar.c`, we will use our file. If you do, it won't be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do, we won't take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the ones shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don't forget to push your header file

### Tasks

#### 0. Float like a butterfly, sting like a bee (mandatory)

Write a function that creates an array of chars and initializes it with a specific char.

Prototype: `char *create_array(unsigned int size, char c);`
- Returns `NULL` if `size` = 0
- Returns a pointer to the array, or `NULL` if it fails

```c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *buffer;

    buffer = create_array(98, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}
```

#### 1. The woman who has no imagination has no wings (mandatory)

Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

Prototype: `char *_strdup(char *str);`
- The `_strdup()` function returns a pointer to a new string which is a duplicate of the string `str`. Memory for the new string is obtained with `malloc`, and can be freed with `free`.
- Returns `NULL` if `str` = `NULL`
- On success, the `_strdup` function returns a pointer to the duplicated string. It returns `NULL` if insufficient memory was available.

```c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
```

#### 2. He who is not courageous enough to take risks will accomplish nothing in life (mandatory)

Write a function that concatenates two strings.

Prototype: `char *str_concat(char *s1, char *s2);`
- The returned pointer should point to a newly allocated space in memory which contains the contents of `s1`, followed by the contents of `s2`, and null terminated.
- If `NULL` is passed, treat it as an empty string.
- The function should return `NULL` on failure.

```c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
```

#### 3. If you even dream of beating me you'd better wake up and apologize (mandatory)

Write a function that returns a pointer to a 2 dimensional array of integers.

Prototype: `int **alloc_grid(int width, int height);`
- Each element of the grid should be initialized to `0`.
- The function should return `NULL` on failure.
- If `width` or `height` is `0` or negative, return `NULL`.

```c
#include "main.h"


## 0x0B. C - malloc, free

### Memory allocation

By: Julien Barbier
Weight: 1
Project will start Jul 10, 2023 6:00 AM, must end by Jul 12, 2023 6:00 AM
Checker was released at Jul 10, 2023 6:00 AM
An auto review will be launched at the deadline

### Concepts
For this project, we expect you to look at this concept:

- Automatic and dynamic allocation, malloc and free

### Resources
Read or watch:

- [0x0a - malloc & free - quick overview.pdf](https://docs.google.com/document/d/1j5fqfZIu9ddEeLVtr-4CzK0KvWm3pqB0ua0GC2_GW9s/edit?usp=sharing)
- [Dynamic memory allocation in C - malloc calloc realloc free (stop at 6:50)](https://www.youtube.com/watch?v=xDVC3wKjS64)

Man or help:

- `malloc`
- `free`

### Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

- General
  - What is the difference between automatic and dynamic allocation
  - What is `malloc` and `free` and how to use them
  - Why and when to use `malloc`
  - How to use `valgrind` to check for memory leaks

### Requirements
General

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc` and `free`. Any use of functions like `printf`, `puts`, `calloc`, `realloc`, etc. is forbidden
- You are allowed to use `_putchar`
- You don't have to push `_putchar.c`, we will use our file. If you do, it won't be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do, we won't take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the ones shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don't forget to push your header file

### Tasks

#### 0. Float like a butterfly, sting like a bee (mandatory)

Write a function that creates an array of chars and initializes it with a specific char.

Prototype: `char *create_array(unsigned int size, char c);`
- Returns `NULL` if `size` = 0
- Returns a pointer to the array, or `NULL` if it fails

```c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *buffer;

    buffer = create_array(98, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}
```

#### 1. The woman who has no imagination has no wings (mandatory)

Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

Prototype: `char *_strdup(char *str);`
- The `_strdup()` function returns a pointer to a new string which is a duplicate of the string `str`. Memory for the new string is obtained with `malloc`, and can be freed with `free`.
- Returns `NULL` if `str` = `NULL`
- On success, the `_strdup` function returns a pointer to the duplicated string. It returns `NULL` if insufficient memory was available.

```c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
```

#### 2. He who is not courageous enough to take risks will accomplish nothing in life (mandatory)

Write a function that concatenates two strings.

Prototype: `char *str_concat(char *s1, char *s2);`
- The returned pointer should point to a newly allocated space in memory which contains the contents of `s1`, followed by the contents of `s2`, and null terminated.

