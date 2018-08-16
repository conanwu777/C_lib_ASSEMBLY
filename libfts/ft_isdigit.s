global	_ft_isdigit
section .text

_ft_isdigit:
		mov rax, 0
		cmp rdi, 47
		jle end
		cmp rdi, 58
		jge end
		mov rax, 1

	end:
		ret
