global	_ft_putnbr

extern _ft_putchar

section .text

_ft_putnbr:
		mov r8, 0
		mov r9, 10
		mov rax, rdi
		cmp rax, 0x7fffffff
		jle recur
		mov rdi, 45
		mov r10, rax
		call _ft_putchar
		mov rax, 0x100000000
		sub rax, r10

	recur:
		mov rdx, 0
		div r9
		push rdx
		add r8, 1
		cmp rax, 0
		jg recur

	pop:
		cmp r8, 0
		jle end
		pop rdi
		add rdi, 48
		call _ft_putchar
		sub r8, 1
		jmp pop

	end:
		ret

