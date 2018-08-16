global	_ft_strnew

extern _ft_bzero
extern _malloc

section .text

_ft_strnew:
		add rdi, 1
		push rdi
		call _malloc
		pop rsi
		mov rdi, rax
		call _ft_bzero
		ret
