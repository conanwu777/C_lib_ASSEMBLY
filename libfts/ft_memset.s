global	_ft_memset
section .text

_ft_memset:
		mov rcx, rdx
		mov rax, rsi
	rep stosb
		mov rax, rdi
		ret
