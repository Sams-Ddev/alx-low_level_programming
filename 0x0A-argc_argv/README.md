# 0x0A. C - argc, argv

## Description
This project is part of the ALX Low-Level Programming curriculum. It focuses on the use of command-line arguments (`argc` and `argv`) in C programming. The project includes several tasks that involve manipulating command-line arguments and performing various operations based on the given inputs.

## Project Details
- Project: 0x0A. C - argc, argv
- Author: Julien Barbier
- Start Date: Jul 7, 2023 2:00 AM
- Deadline: Jul 8, 2023 2:00 AM
- Checker Release Date: Jul 7, 2023 8:00 AM
- Auto Review: Will be launched at the deadline

## Resources
To successfully complete this project, you may need to read or watch the following resources:

- [Arguments to main](https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html)
- [argc and argv](https://www.gnu.org/software/libc/manual/html_node/Program-Arguments.html)
- [What does argc and argv mean?](https://www.learn-c.org/en/Command_Line_Arguments)
- [How to compile with unused variables](https://www.geeksforgeeks.org/how-to-compile-with-unused-variables-in-c-cpp/)

## Learning Objectives
By the end of this project, you should be able to explain the following concepts without relying on external resources:

- How to use arguments passed to your program
- Different prototypes of the `main` function and when to use them
- Using `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters

## Requirements
General requirements for this project include:

- Allowed editors: vi, vim, emacs
- All files should be compiled on Ubuntu 20.04 LTS using gcc with the following flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Each file should end with a new line
- A `README.md` file at the root of the project directory is mandatory
- Code should follow the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- Global variables are not allowed
- Each file should have no more than 5 functions
- The prototypes of all functions and the `_putchar` function should be included in a header file called `main.h`
- Don't forget to push your header file
- The standard library is allowed for this project

## Tasks
The project includes the following tasks:

0. It ain't what they call you, it's what you answer to
   - Write a program that prints its name.
   - If the program is renamed, it should print the new name without recompiling.
   - The path before the name of the program should not be removed.

1. Silence is argument carried out by other means
   - Write a program that prints the number of arguments passed to it.

2. The best argument against democracy is a five-minute conversation with the average voter
   - Write a program that prints all the arguments it receives.
   - Each argument should be printed on a new line.

3. Neither irony nor sarcasm is argument
   - Write a program that multiplies two numbers.
   - The program should print the result of the multiplication followed by a new line.
   - If the program does not receive two arguments, it should print `Error` and return 1.

4. To infinity and beyond
   - Write a program that adds positive numbers.
   - The program should print the result of the addition followed by a new line.
   - If no number is passed to the program, it should print 0.
   - If any of the numbers contains symbols that are not digits, it should print `Error` and return 1.

## Copyright - Plagiarism
- Solutions for the tasks should be created individually to meet the project's learning objectives.
- Copying and pasting someone else's work is not allowed and will not help achieve the learning objectives.
- Publishing any content of this project is not allowed.
- Plagiarism in any form is strictly forbidden and will result in removal from the program.

© 2023 Sam-Ddev. All rights reserved.
