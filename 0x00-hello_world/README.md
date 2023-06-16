Project Description
This project contains a collection of scripts for various tasks related to C programming. Each script serves a specific purpose and is described below:

0-preprocessor
Function: This script runs a C file through the preprocessor and saves the result into another file.

Usage:

shell
Copy code
$ export CFILE=main.c
$ ./0-preprocessor
Description:
The script takes a C file specified by the environment variable $CFILE and processes it using the preprocessor. The output is saved in the file c. It includes the preprocessed code of the input file, with any header files and macros expanded.

1-compiler
Function: This script compiles a C file but does not link.

Usage:

shell
Copy code
$ export CFILE=main.c
$ ./1-compiler
Description:
The script takes a C file specified by the environment variable $CFILE and compiles it without linking. The output file is named the same as the input file but with the extension .o. For example, if the C file is main.c, the output file will be main.o. The compilation process generates the object code for the input file, which can be later linked to create an executable.

2-assembler
Function: This script generates the assembly code of a C file and saves it in an output file.

Usage:

shell
Copy code
$ export CFILE=main.c
$ ./2-assembler
Description:
The script takes a C file specified by the environment variable $CFILE and generates the corresponding assembly code. The output file is named the same as the input file but with the extension .s. For example, if the C file is main.c, the output file will be main.s. The generated assembly code represents the low-level instructions that the processor can understand.

Please note that the snippets provided are examples from the project and not actual scripts.

