global main ;defining the start label

section .text ; instruction section
	extern printf ;printf function call

main:
	push rbp
	mov rax, 0
	mov rdi, fmt
	mov rsi, msg
	call printf
	pop rbp

	mov rax, 0
	ret
	

section .data
	fmt: db "%s", 10, 0
	msg: db "Hello, Holberton", 0
