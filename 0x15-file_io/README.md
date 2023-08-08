# 0x15. C - File I/O

You just released the advanced tasks of this project. Have fun!

## Project Details
- **Project**: 0x15. C - File I/O
- **Language**: C
- **Concepts**: Syscall
- **Author**: Julien Barbier
- **Weight**: 1
- **Start Date**: Aug 7, 2023 6:00 AM
- **End Date**: Aug 8, 2023 6:00 AM
- **Checker Released**: Aug 7, 2023 12:00 PM
- An auto review will be launched at the deadline

## Resources
Read or watch:
- File descriptors
- C Programming in Linux Tutorial #024 - open() read() write() Functions

Man pages:
- open
- close
- read
- write
- dprintf

## Learning Objectives
By the end of this project, you should be able to explain the following topics to anyone, without the need for external sources:

1. Look for the right source of information online
2. How to create, open, close, read, and write files
3. Understanding file descriptors
4. The purpose of the three standard file descriptors and their POSIX names
5. Using the I/O system calls: open, close, read, and write
6. Understanding and using the flags O_RDONLY, O_WRONLY, and O_RDWR
7. Understanding file permissions and how to set them using the open system call
8. What is a system call and its role in interacting with the operating system
9. Differentiating between a function and a system call

## Copyright and Plagiarism
You are required to solve the tasks below on your own to fulfill the learning objectives. Copying and pasting someone else’s work or publishing project content is strictly prohibited and will result in removal from the program.

## Requirements
**General**:
- Allowed editors: vi, vim, emacs
- Code will be compiled on Ubuntu 20.04 LTS using gcc with the following options: -Wall -Werror -Wextra -pedantic -std=gnu89
- All files must end with a new line
- A README.md file at the root of the project folder is mandatory
- Code should follow the Betty style. Check with betty-style.pl and betty-doc.pl
- No global variables are allowed
- Maximum of 5 functions per file
- Only the C standard library functions malloc, free, and exit are allowed. Functions like printf, puts, calloc, realloc, etc. are forbidden
- Allowed syscalls: read, write, open, close
- You are allowed to use the provided _putchar function
- The provided _putchar.c file is not required to be pushed. We will use our own file for compilation
- Function prototypes and the prototype of _putchar should be included in the main.h header file, which must be pushed
- Use include guards for all header files
- Prefer using symbolic constants (POSIX) vs numbers when appropriate

**Quiz Questions**:
Congratulations! You've completed the quiz successfully! Keep up the good work!

## Tasks
### 0. Tread lightly, she is near
Write a function that reads a text file and prints its content to the POSIX standard output.

### 1. Under the snow
Create a function that creates a file.

### 2. Speak gently, she can hear
Write a function that appends text to the end of a file.

### 3. cp
Write a program that copies the content of one file to another.

### 4. elf (Advanced)
Write a program that displays information from the ELF header of a file.

## Copyright
Copyright © 2023 Ashigbui Samuel(ALX_Software Engineering). All rights reserved.

