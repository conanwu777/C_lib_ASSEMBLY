global	_ft_strcat
section .text

_ft_strcat:
		mov rbx, 0

	while1:
		cmp [rdi + rbx], byte 0
		je start2
		add rbx, 1
		jmp while1

	start2:
		mov rdx, 0

	while2:
		cmp [rsi + rdx], byte 0
		je end
		mov rcx, [rsi + rdx]
		mov [rdi + rbx], rcx
		add rdx, 1
		add ebx, 1
		jmp while2

	end:
		mov [rdi + rbx], byte 0
		mov rax, rdi
		ret
