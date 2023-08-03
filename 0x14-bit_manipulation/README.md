# Bit Manipulation - Project 0x14

You have just released the advanced tasks of this project. Have fun!

## Table of Contents

- [Introduction](#introduction)
- [Resources](#resources)
- [Learning Objectives](#learning-objectives)
- [Copyright - Plagiarism](#copyright---plagiarism)
- [Requirements](#requirements)
- [Tasks](#tasks)
  - [0. Binary to Unsigned Int](#0-binary-to-unsigned-int)
  - [1. Print Binary](#1-print-binary)
  - [2. Get Bit](#2-get-bit)
  - [3. Set Bit](#3-set-bit)
  - [4. Clear Bit](#4-clear-bit)
  - [5. Flip Bits](#5-flip-bits)
  - [6. Endianness](#6-endianness)
  - [7. Crackme3](#7-crackme3)

## Introduction

This project focuses on bit manipulation in the C programming language. It covers various tasks related to working with individual bits in binary representation.

## Resources

- Google
- Youtube

## Learning Objectives

By the end of this project, you should be able to explain the following concepts without relying on external help:

- Finding the right source of information
- Bit manipulation and bitwise operators

## Copyright - Plagiarism

- You are required to come up with solutions for the tasks to meet the learning objectives.
- Copying and pasting someone else’s work is not allowed.
- Publishing any content of this project is strictly forbidden and will result in removal from the program.

## Requirements

- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc with specific options.
- Your code should follow the Betty style and should not use global variables.
- No more than 5 functions per file.
- Only the `malloc`, `free`, and `exit` functions from the C standard library are allowed.
- The prototypes of all functions and `_putchar` should be included in a header file named `main.h`.
- All header files should have include guards.

## Tasks

### 0. Binary to Unsigned Int

Write a function that converts a binary number to an unsigned int.

```c
unsigned int binary_to_uint(const char *b);

