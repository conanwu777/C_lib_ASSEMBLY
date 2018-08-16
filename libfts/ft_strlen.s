global	_ft_strlen

section .text

_ft_strlen:
		push rdi
		mov rcx, [rbp]
		mov rax, 0
	repne scasb
		pop r10
		sub rdi, r10
		sub rdi, 1
		mov rax, rdi
		mov rdi, r10
		ret
