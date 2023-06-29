# Project 0x06 - Pointers, Arrays, and Strings

## Introduction
Welcome to Project 0x06 - Pointers, Arrays, and Strings! In this project, you will be working with pointers, arrays, and strings in the C programming language. The main goal of this project is to strengthen your understanding of these concepts and improve your problem-solving skills.

## Project Details
- Project Name: 0x06 - Pointers, Arrays, and Strings
- Language: C
- Author: Julien Barbier
- Weight: 1
- Project start: Jun 29, 2023 6:00 AM
- Project end: Jun 30, 2023 6:00 AM
- Checker release: Jun 29, 2023 12:00 PM
- Auto review launch: At the deadline

## Learning Objectives
By the end of this project, you should be able to explain the following concepts without the help of external resources:

- Pointers: What they are and how to use them
- Arrays: What they are and how to use them
- Differences between pointers and arrays
- Manipulation of strings
- Scope of variables
- Copyright and plagiarism awareness

## Requirements
### General
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, with the following flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A README.md file at the root of the project folder is mandatory
- Code should follow the Betty style. You can check for style using `betty-style.pl` and `betty-doc.pl`
- Usage of global variables is not allowed
- Each file should contain no more than 5 functions
- The standard library functions such as `printf`, `puts`, etc. are forbidden. You are only allowed to use `_putchar`
- The `_putchar` function implementation is provided; you don't need to push it to your repository
- Prototype declarations for all functions and the `_putchar` function should be included in a header file called `main.h`
- Don't forget to push your header file

### Quiz Questions
Great! You have completed the quiz successfully. Keep up the good work!

### Tasks
1. **strcat** - Mandatory
   - Prototype: `char *_strcat(char *dest, char *src);`
   - This function appends the `src` string to the `dest` string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte.
   - Returns a pointer to the resulting string `dest`.
   - **FYI:** The standard library provides a similar function: `strcat`. Run `man strcat` to learn more.

2. **strncat** - Mandatory
   - Prototype: `char *_strncat(char *dest, char *src, int n);`
   - The `_strncat` function is similar to the `_strcat` function, except that:
     - It will use at most `n` bytes from `src`.
     - `src` does not need to be null-terminated if it contains `n` or more bytes.
   - Returns a pointer to the resulting string `dest`.
   - **FYI:** The standard library provides a similar function: `strncat`. Run `man strncat` to learn more.

3. **strncpy** - Mandatory
   - Prototype: `char *_strncpy(char *dest, char *src, int n);`
   - This function copies a string.
Certainly! Here's the continuation of the project details:

3. **strncpy** - Mandatory
   - Prototype: `char *_strncpy(char *dest, char *src, int n);`
   - This function copies a string. It copies at most `n` characters from the string `src` into the `dest` string. If the length of `src` is less than `n`, the remaining bytes in `dest` are filled with null bytes (`\0`) to pad the string.
   - Returns a pointer to the resulting string `dest`.
   - **FYI:** The standard library provides a similar function: `strncpy`. Run `man strncpy` to learn more.

4. **strcmp** - Mandatory
   - Prototype: `int _strcmp(char *s1, char *s2);`
   - This function compares two strings. It compares the string `s1` to the string `s2` and returns an integer value based on the comparison result:
     - Returns a negative value if `s1` is less than `s2`.
     - Returns a positive value if `s1` is greater than `s2`.
     - Returns 0 if `s1` is equal to `s2`.
   - **FYI:** The standard library provides a similar function: `strcmp`. Run `man strcmp` to learn more.

5. **memset** - Mandatory
   - Prototype: `char *_memset(char *s, char b, unsigned int n);`
   - This function fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`.
   - Returns a pointer to the memory area `s`.
   - **FYI:** The standard library provides a similar function: `memset`. Run `man memset` to learn more.

6. **memcpy** - Mandatory
   - Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`
   - This function copies `n` bytes from the memory area `src` to the memory area `dest`. The memory areas may overlap.
   - Returns a pointer to the destination memory area `dest`.
   - **FYI:** The standard library provides a similar function: `memcpy`. Run `man memcpy` to learn more.

7. **strchr** - Mandatory
   - Prototype: `char *_strchr(char *s, char c);`
   - This function locates the first occurrence of the character `c` in the string `s`.
   - Returns a pointer to the located character in `s`, or `NULL` if the character is not found.
   - **FYI:** The standard library provides a similar function: `strchr`. Run `man strchr` to learn more.

8. **strstr** - Mandatory
   - Prototype: `char *_strstr(char *haystack, char *needle);`
   - This function finds the first occurrence of the substring `needle` in the string `haystack`.
   - Returns a pointer to the beginning of the located substring in `haystack`, or `NULL` if the substring is not found.
   - **FYI:** The standard library provides a similar function: `strstr`. Run `man strstr` to learn more.

Remember to follow the instructions and requirements mentioned earlier. Good luck with the project, and feel free to ask if you have any questions!
