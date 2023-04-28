section .data
message db 'Hello, Holberton', 0Ah ; message to be printed

section .text
global _start

_start:
; call printf function to print message
mov rdi, message    ; first argument: format string
xor rax, rax        ; clear rax for variadic function call
call printf         ; call printf function

; exit program
xor rdi, rdi        ; set exit status to 0
mov rax, 60         ; syscall number for exit
syscall             ; call the exit system call
