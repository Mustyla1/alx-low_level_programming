section .data
    hello db 'Hello, Holberton', 0  ; null-terminated string

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, hello  ; format specifier
    call printf
    pop rbp
    ret

