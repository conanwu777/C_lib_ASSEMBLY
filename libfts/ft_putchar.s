global	_ft_putchar

extern	_write

section .text

_ft_putchar:
	push rdi
	mov rdx, 1
	lea rsi,[rsp]
	mov rdi, 1
	mov rax, 0x2000004
	syscall
;	call _write
	pop rdi
	ret
