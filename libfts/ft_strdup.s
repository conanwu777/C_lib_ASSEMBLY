global	_ft_strdup

extern _ft_strlen
extern _ft_memcpy
extern _malloc

section .text

_ft_strdup:
		push rdi
		call _ft_strlen
		mov rdi, rax
		push rdi
		add rdi, 1
		call _malloc
		pop rdx
		pop rsi
		mov rdi, rax
		call _ft_memcpy
		mov [rax + rdx], byte 0
		ret
