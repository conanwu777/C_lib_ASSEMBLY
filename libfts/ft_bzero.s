global	_ft_bzero
section .text

_ft_bzero:

	start:
		cmp rsi, 0
		jle end
		mov [rdi + rsi - 1], byte 0
		sub rsi, 1
		jmp start

	end:
		ret
