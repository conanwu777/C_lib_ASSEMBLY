global	_ft_print_binary

extern _ft_putchar
extern _ft_putbbyte

section .text

_ft_print_binary:
		mov rax, rdi
		mov r9, 0

	loop:
		cmp r9, rsi
		jge end
		push rsi
		push rax
		mov rdi, [rax + r9]
		call _ft_putbbyte
		add r9, 1
		mov rdi, 32
		call _ft_putchar
		pop rax
		pop rsi
		jmp loop

	end:
		ret

