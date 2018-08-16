global   _ft_cat

extern _ft_strlen
extern _ft_bzero
extern _malloc
extern _read
extern _write
extern _free

section .text

_ft_cat:
	push rdi
	mov rdi, 520
	call _malloc
	push rax
	mov rdi, rax
	mov rsi, 520

loop:
	call _ft_bzero
	pop rsi
	pop rdi
	push rdi
	mov rdx, 512
	call _read
	cmp rax, 0
	jle end
	mov rdi, rsi
	call _ft_strlen
	mov rdx, rax
	mov rax, 0x2000004
	mov rdi, 1
	call _write
	push rsi
	mov rdi, rsi
	mov rsi, 520
	jmp loop

end:
	mov rdi, rsi
	call _free
	pop rdi
	ret