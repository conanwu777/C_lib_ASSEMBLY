global	_ft_puts

extern _ft_strlen
extern _write

section .text

_ft_puts:
	call _ft_strlen
	mov rdx, rax
	mov rsi, rdi
	mov rdi, 1
	call _write
	ret
