# 0x10. C - Variadic Functions

## About
This repository contains my solutions for the tasks related to variadic functions in the C programming language. The tasks are part of the ongoing second chance project, which started on Jul 20, 2023, and must end by Jul 22, 2023, 6:00 AM. An auto review will be launched at the deadline.

## Learning Objectives
By the end of this project, I am expected to be able to explain to anyone, without the help of Google, the following concepts:

### General
- Variadic functions: What they are and how to use them
- The va_start, va_arg, and va_end macros and their usage
- The const type qualifier: Why and how to use it

## Copyright - Plagiarism
I understand that I am not allowed to copy and paste someone else's work to meet the objectives of this or any following project. Plagiarism is strictly forbidden and will result in removal from the program.

## Requirements
The solutions for each task should adhere to the following requirements:

### General
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc with the options: -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- The repository should contain a `README.md` file at the root of the project folder
- The code should use the Betty style, which will be checked using `betty-style.pl` and `betty-doc.pl`
- The use of global variables is not allowed
- Each file should contain no more than 5 functions
- The only C standard library functions allowed are `malloc`, `free`, and `exit`. Functions like `printf`, `puts`, `calloc`, `realloc`, etc., are forbidden
- The following macros are allowed: `va_start`, `va_arg`, and `va_end`
- The function `_putchar` may be used, but I don't have to push ` _putchar.c`; it will not be taken into account
- The prototypes of all functions and the prototype of the function `_putchar` should be included in the header file called `variadic_functions.h`
- The header files should be include guarded

## Tasks
This repository contains the following tasks:

### Task 0: Beauty is variable, ugliness is constant
Write a function `int sum_them_all(const unsigned int n, ...)` that returns the sum of all its parameters. If `n` is equal to 0, the function should return 0.

Example:
```c
int sum;

sum = sum_them_all(2, 98, 1024); // Output: 1122
sum = sum_them_all(4, 98, 1024, 402, -1024); // Output: 500
```

### Task 1: To be is to be the value of a variable
Write a function `void print_numbers(const char *separator, const unsigned int n, ...)` that prints numbers, followed by a new line. The `separator` parameter is the string to be printed between numbers, and `n` is the number of integers passed to the function. If `separator` is NULL, it should not be printed.

Example:
```c
print_numbers(", ", 4, 0, 98, -1024, 402); // Output: 0, 98, -1024, 402
```

### Task 2: One woman's constant is another woman's variable
Write a function `void print_strings(const char *separator, const unsigned int n, ...)` that prints strings, followed by a new line. The `separator` parameter is the string to be printed between the strings, and `n` is the number of strings passed to the function. If `separator` is NULL, it should not be printed. If one of the strings is NULL, the function should print "(nil)" instead.

Example:
```c
print_strings(", ", 2, "Jay", "Django"); // Output: Jay, Django
```

### Task 3: To be is a to be the value of a variable
Write a function `void print_all(const char * const format, ...)` that prints anything. The `format` parameter is a list of types of arguments passed to the function. The allowed format specifiers are as follows:
- `c`: char
- `i`: integer
- `f`: float
- `s`: char* (if the string is NULL, print "(nil)" instead)

Any other char in the format should be ignored. The function should print a new line at the end.

Example:
```c
print_all("ceis", 'B', 3, "stSchool"); // Output: B, 3, stSchool
```

## Resources
I can refer to the following resources to help with these tasks:

### Read or watch
- `stdarg.h`
- Variadic Functions
- Const Keyword

### Man or help
- `stdarg`

## Conclusion
I will complete these tasks following the given requirements and learning objectives to improve my understanding of variadic functions in C. I will ensure to avoid plagiarism and adhere to the rules specified in this README file.
