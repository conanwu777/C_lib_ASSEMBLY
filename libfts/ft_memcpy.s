global	_ft_memcpy
section .text

_ft_memcpy:
		mov rcx, rdx
		push rdi
		mov rax, rsi
	rep movsb
		pop rdi
		mov rax, rdi
		ret
