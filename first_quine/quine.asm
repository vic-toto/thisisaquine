section .data
    ; This is a comment outside of the program
    msg db "section .data%c    msg db %c%s%c, 10, 34, 34, 10", 10, 34, 34, 10 
    ; Comment inside the program
    msg_len equ $ - msg             ; calculate the length of the message 

section .text
    global _start

_start:
   ; This is a comment in the main function
    mov rax, 1                  ; syscall number for sys_write
    mov rdi, 1                  ; file descriptor 1 (stdout)
    lea rsi, [msg]              ; address of msg
    mov rdx, msg_len            ; message length
    syscall                     ; invoke syscall

    mov rax, 60                 ; syscall number for sys_exit
    xor rdi, rdi                ; exit status 0
    syscall                     ; invoke syscall
