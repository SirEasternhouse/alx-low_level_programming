section .data
    hello_message db "Hello, Holberton", 0
    format_string db "%s", 10, 0   ; %s for string, 10 for newline, 0 for null terminator

section .text
    global main
    extern printf

main:
    sub rsp, 8       ; Align the stack on a 16-byte boundary (needed for printf)
    mov rdi, format_string   ; First argument: format string
    mov rsi, hello_message   ; Second argument: address of the string to print
    call printf        ; Call the printf function
    add rsp, 8        ; Restore the stack pointer

    xor rax, rax     ; Set rax to 0 (indicating success)
    ret               ; Return from the main function

