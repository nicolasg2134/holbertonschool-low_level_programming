global main

section .text
main:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, msglen
	syscall

	mov eax, 60
	xor rdi, 0
	syscall

msg:
	db "Hello, Holberton", 10
msglen:	equ $ - msg
