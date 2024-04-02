global _start

section .data
    msg db "Hello, world!",0x08a   ; 0x08a is \n
    len equ $ -msg                 ;  find the lenght substracting start and end of the msg



section .text
_start:
    mov eax, 4     ; sys_write system call
    mov ebx, 1     ; stdout file descriptor
    mov ecx, msg   ; bytes to write - string pointer
    mov edx, len   ; number of bytes to write
    int 0x80       ; perform system call
    mov eax, 1     ; sys_exit system call
    mov ebx, 0     ; exit status is 0    
    int 0x80