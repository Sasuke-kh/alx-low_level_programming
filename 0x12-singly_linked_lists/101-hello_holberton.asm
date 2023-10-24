section .data
    message db 'Hello, Holberton', 0

section .text
    extern printf

global main
main:
    push rbp
    mov rbp, rsp

    sub rsp, 8 ; Adjust stack pointer for alignment

    lea rdi, [rel message]
    xor eax, eax ; Clear eax register
    call printf

    add rsp, 8 ; Restore stack pointer

    mov eax, 0 ; Return 0

    mov rsp, rbp
    pop rbp
    ret
