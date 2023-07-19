# Project Name: Function Pointers in C

## Description
This repository contains the advanced tasks of the "Function Pointers" project. Explore the implementation of function pointers and their usage in C programming. Each task is designed to enhance your understanding of function pointers and their applications. Have fun exploring and mastering this powerful concept!

## Project Details
- Author: Alexandre Gautier
- Weight: 1
- Project Start: Jul 19, 2023 6:00 AM
- Project End: Jul 20, 2023 6:00 AM
- Checker Release: Jul 19, 2023 12:00 PM
- Auto Review: Launches at the deadline

## Resources
Read or watch:
- Function Pointer in C
- Pointers to functions
- Function Pointers in C/C++
- Why pointers to functions?
- Everything you need to know about pointers in C

## Learning Objectives
By the end of this project, you will be able to explain the following concepts without relying on external resources:
- Understanding of function pointers and their usage
- Function pointer's composition and purpose
- Function pointer's memory location within the virtual memory

## Requirements
- Allowed editors: vi, vim, emacs
- Compilation: gcc 4.8.4 using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Code must follow the Betty style (Checked using `betty-style.pl` and `betty-doc.pl`)
- No usage of global variables
- Maximum of 5 functions per file
- Limited usage of C standard library functions (only `malloc`, `free`, and `exit` allowed)
- `_putchar` can be used
- `_putchar.c` should not be pushed (It will not be taken into account)
- Header file `function_pointers.h` should include prototypes of all functions and the `_putchar` function
- All header files should have include guards
- No more than 3 if statements allowed
- No usage of for or do...while loops
- No usage of switch statements
- No usage of goto
- No usage of else
- No usage of more than one if statement
- No usage of more than one while loop

## Quiz Questions
Great! You've successfully completed the quiz. Keep up the good work!

## Tasks
1. What's my name?
   - Write a function that prints a name.
   - Prototype: `void print_name(char *name, void (*f)(char *))`
   
2. If you spend too much time thinking about a thing, you'll never get it done
   - Write a function that executes a function on each element of an array.
   - Prototype: `void array_iterator(int *array, size_t size, void (*action)(int))`
   
3. To hell with circumstances; I create opportunities
   - Write a function that searches for an integer.
   - Prototype: `int int_index(int *array, int size, int (*cmp)(int))`
   
4. A goal is not always meant to be reached, it often serves simply as something to aim at (Advanced)
   - Write a program that performs simple operations.
   - Usage: `calc num1 operator num2`
   - Supported operators: `+` (addition), `-` (subtraction), `*` (multiplication), `/` (division), `%` (modulo)
   - The program prints the result of the operation followed by a new line
   - Error handling for incorrect number of arguments, invalid operators, and division by zero.
   - Implementation involves creating four separate files: `3-calc.h`, `3-op_functions.c`, `3-get_op_func.c`, and `3-main.c`
   
5. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker (Advanced)
   - Write a program that prints the opcodes of its own main function.
   - Usage: `./main number_of_bytes`
   - Prints the opcodes in hexadecimal format, lowercase, each opcode represented by two characters separated by a space
   - The listing ends with a new line
   - Error handling for incorrect number of arguments and negative number of bytes
   
**Note:** Please refer to the respective task files within the repository for detailed instructions and examples.

## Copyright - Plagiarism
- Solutions for the tasks must be developed independently to meet the learning objectives.
- Publishing or sharing the content of this project is strictly prohibited.
- Plagiarism is strictly forbidden and will result in removal from the program.

## Repository Information
- GitHub Repository: [alx-low_level_programming](https://github.com/username/alx-low_level_programming)
- Directory: 0x0F-function_pointers

© 2023 Sams-Ddev (Ashigbui Samuel). All rights reserved.
