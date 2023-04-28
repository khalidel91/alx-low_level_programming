section .data
    message db 'Hello, Holberton', 0Ah ; message to be printed
    format db '%s', 0Ah, 0 ; format string for printf

section .text
    global main

extern printf

main:
    ; set up stack frame
    push rbp
    mov rbp, rsp

    ; call printf function to print message
    mov rsi, message    ; second argument: message string
    mov rdi, format     ; first argument: format string
    xor eax, eax        ; clear eax for variadic function call
    call printf         ; call printf function

    ; clean up stack and return
    mov rsp, rbp
    pop rbp
    xor eax, eax        ; return value of 0
    ret
