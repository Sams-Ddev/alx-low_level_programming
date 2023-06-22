# 0x03. C - Debugging

This repository contains solutions for the debugging tasks in the ALX Low-Level Programming curriculum. The tasks focus on understanding and practicing debugging techniques in the C programming language.

## Learning Objectives

By completing the tasks in this project, you will gain the following knowledge and skills:

- Understanding the concept of debugging
- Learning manual methods of debugging
- Reading and interpreting error messages

## Requirements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, with the following options: -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- Your code should follow the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- A `README.md` file at the root of the repository, containing a description of the repository
- A `README.md` file in the root folder of each project task, describing the purpose of the task and providing instructions

## Tasks

### Task 0: Multiple mains

**File(s):** `0-main.c`, `main.h`

In this task, you need to create a file named `0-main.c` that tests the `positive_or_negative()` function. The purpose is to check if the function gives the correct output when given the case of 0.

You are not required to code the solution/function itself, but you can adapt your solution from the task in the "0x01. C - Variables, if, else, while" project to compile with the provided `main.c` file.

### Task 1: Like, comment, subscribe

**File(s):** `1-main.c`

In this task, you need to modify the `1-main.c` file to comment out the part of the code that is causing an infinite loop. You are not allowed to add or remove any lines of code; you can only comment out the existing code.

### Task 2: 0 > 972?

**File(s):** `2-main.c`, `2-largest_number.c`, `main.h`

The program in this task is supposed to print the largest of three integers. However, the output is incorrect. Your task is to fix the code in the `2-largest_number.c` file so that it correctly determines and prints the largest number, regardless of the case.

### Task 3: Leap year

**File(s):** `3-main_a.c`, `3-main_b.c`, `3-convert_day.c`, `3-print_remaining_days.c`, `main.h`

This program converts a given date to the day of the year and determines how many days are left in the year, considering leap years.

The provided code in `3-convert_day.c` and `3-print_remaining_days.c` has a bug that causes incorrect output for leap years. Your task is to fix the `print_remaining_days()` function so that it works correctly for all dates and leap years.

## Copyright and Plagiarism

Please note that all the solutions and code provided in this repository are for educational purposes only. Copying and pasting someone else's work is strictly prohibited and considered plagiarism, which can result in removal from the program. You are not allowed to publish any content from this project.

For more information on debugging techniques and to avoid plagiarism, refer to the provided resources on debugging, such as "Debugging" and "Rubber Duck Debugging."
