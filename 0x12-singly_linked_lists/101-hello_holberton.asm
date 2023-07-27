section .data
    hello db 'Hello, Holberton', 0

section .text
    global _start

_start:
    ; System call numbers
    mov rax, 1          ; syscall number for sys_write (1)
    mov rdi, 1          ; file descriptor for stdout (1)
    mov rsi, hello      ; address of the string to print
    mov rdx, 17         ; length of the string (excluding null terminator)
    syscall

    ; Exit the program
    mov rax, 60         ; syscall number for sys_exit (60)
    xor rdi, rdi        ; exit status 0
    syscall

