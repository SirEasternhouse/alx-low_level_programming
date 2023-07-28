section .data
    hello db "Hello, Holberton", 0
    format db "%s", 10, 0   ; "%s" format for printf followed by newline character

section .text
    global main

extern printf

main:
    ; Set up the stack frame if required (depends on platform and calling convention)
    
    ; Call printf with the format string and the address of "hello" string
    lea rdi, [format]       ; Load the address of the format string into rdi
    lea rsi, [hello]        ; Load the address of the "hello" string into rsi
    xor rax, rax           ; Clear rax to indicate that there are no floating-point arguments
    call printf            ; Call printf

    ; Clean up the stack frame if required (depends on platform and calling convention)
    
    ; Return from the main function
    mov rax, 60            ; syscall number for exit
    xor edi, edi           ; exit code 0
    syscall               ; invoke syscall to exit the program

