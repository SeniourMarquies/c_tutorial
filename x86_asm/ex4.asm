global _start

section .text
_start:
    mov ebx, 1    ; start ebx at 1
    mov ecx, 6    ; number of iterations
orta:
    add ebx, ebx  ; ebx += ebx
    dec ecx       ; ecx -= 1
    cmp ecx, 0    ; compare ecx with 0
    jg orta      ; jump to label if greater
    mov eax, 1    ; sys_exit system call
    int 0x80      ; interrupt call (sys_exit). eax must be set 1

