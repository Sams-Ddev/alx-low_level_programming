# Project Title

Toggle Navigation

## Description

This project contains advanced tasks in the field of C programming, specifically focusing on pointers, arrays, and strings. It covers various concepts such as pointers to pointers, multidimensional arrays, and common C standard library functions for manipulating strings. The project aims to enhance your understanding and proficiency in these areas.

## Author

- Julien Barbier

## Weight

- 1

## Schedule

- Project start: Jul 3, 2023 6:00 AM
- Project deadline: Jul 4, 2023 6:00 AM
- Checker release: Jul 3, 2023 12:00 PM
- Auto review will be launched at the deadline

## Concepts

- Pointers and arrays

## Resources

To complete this project, you are expected to refer to the following resources:

- C - Pointer to Pointer
- C – Pointer to Pointer with example
- Multi-dimensional Arrays in C
- Two-dimensional (2D) arrays in C programming with example

## Learning Objectives

By the end of this project, you should be able to explain the following concepts without the help of external references:

- Pointers to pointers and their usage
- Multidimensional arrays and their usage
- Common C standard library functions for manipulating strings

## Copyright - Plagiarism

Please note the following regarding the project's requirements:

- You must come up with solutions for the tasks on your own to meet the learning objectives.
- Copying and pasting someone else's work is strictly prohibited and will not help you achieve the objectives.
- Publishing any content of this project is not allowed.
- Plagiarism in any form is strictly forbidden and will result in removal from the program.

## Requirements

### General

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc with the options -Wall -Werror -Wextra -pedantic -std=gnu89.
- All your files should end with a new line.
- A README.md file at the root of the project folder is mandatory.
- Your code should follow the Betty style. It will be checked using betty-style.pl and betty-doc.pl.
- You are not allowed to use global variables.
- Each file should contain no more than 5 functions.
- You are not allowed to use the standard library. Functions like printf, puts, etc. are forbidden.
- You are allowed to use _putchar.
- The _putchar.c file is not required to be pushed; it will be provided by the checker.

### Example Files

The main.c files shown in the examples are provided as references for testing your functions. You don't need to push them to your repository. The checker will use its own main.c files for compilation.

### Header File

- The prototypes of all your functions and the _putchar function should be included in your header file called `main.h`.
- Don't forget to push your header file.

## Quiz Questions

Congratulations on completing the quiz successfully! Keep up the good work!

## Tasks

### 0. memset

Write a function that fills memory with a constant byte.

Prototype: `char *_memset(char *s, char b, unsigned int n);`
- The `_memset()` function fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`.
- It returns a pointer to the memory area `s`.
- Note: The standard library provides a similar function called `memset`. You can run `man memset` to learn more.

#### Example

```c
#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hex

.
