global	_ft_putbbyte

extern _ft_putchar

section .text

_ft_putbbyte:
		mov rax, rdi
		mov r8, 8

	loop:
		cmp r8, 0;
		jle end
		sub r8, 1
		push rax
		shr rax, 7
		and rax, 1
		mov rdi, rax
		add rdi, 48
		call _ft_putchar
		pop rax
		shl rax, 1
		jmp loop

	end:
		ret

