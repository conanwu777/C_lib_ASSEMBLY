global	_ft_isalpha
section .text

_ft_isalpha:
		mov rax, 0
		cmp rdi, 65
		jl end
		cmp rdi, 90
		jle settrue
		cmp rdi, 97
		jl end
		cmp rdi, 122
		jg end

	settrue:
		mov rax, 1

	end:
		ret
