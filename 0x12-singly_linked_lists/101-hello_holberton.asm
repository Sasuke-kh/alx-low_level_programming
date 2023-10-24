section .data
	format db 'Hello, Holberton', 0

section .text
	extern printf

global main
main:
	push rbp
	mov rbp, rsp

	sub rsp, 8 ; Adjust stack pointer for alignment

	lea rdi, [rel format]
	xor eax, eax ; Clear eax register
	call printf

	add rsp, 8 ; Restore stack pointer

	xor eax, eax ; Return 0

	mov rsp, rbp
	pop rbp
	ret
