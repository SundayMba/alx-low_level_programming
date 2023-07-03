global _start ;defining the start label

section .text ; instruction section

_start:
	mov rax, 0x01
	mov rdi, 0x01
	mov rsi, msg
	mov rdx, msgLen
	SYSCALL

	mov rax, 0x3c
	mov rdi, 0x0
	SYSCALL

section .data
	msg: DB "hello world", 0xA
	msgLen: EQU $ - msg ;spcifies the msg len
