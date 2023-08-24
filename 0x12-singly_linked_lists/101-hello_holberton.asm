; Declare needed C functions

	SECTION .data		; data section, initialised variables
msg:	db "Hello, Holberton", 0; C string null
fmt:	db "%s", 10, 0		; printf format, "\n", '0'

	SECTION .text		; code section
	extern printf		; C function call
	global main		; standard gcc entry point
main
	push	rbp		; align stack frame set up

	mov	rdi,fmt		; move fmt (variable) address fmt into the register
	mov	rsi,msg
	mov	rax,0		; optional for xor rax,rax
	call	printf		; call C function

	pop	rbp		; restore default stack

	mov	rax,0		; normal, no error, return value
	ret			; return
