global _start      ; is equevalent [enable]

section .data      ; kind of variable section
    addr db "yellow" ; addr is a pointer  - addr -> y

    
    section .text    ; this is where code injects. as if it is executable.
        _start:
            mov[addr], byte 'H'          ; [addr] is addr's value, and h assign into addr's value
            mov[addr+5], byte '!'        ; [addr+5] is {h,e,l,l,o,!} adds end of the pointer
            mov eax, 4                   ; sys_write system call
            mov ebx, 1                   ; stdout file descriptor
            mov ecx, addr                ; bytes to write
            mov edx, 6                   ; number of bytes to write
            int 0x80                     ; perform system call
            mov eax, 1                   ; sys_exit system call
            mov ebx, 0                   ; exit status is 0
            int 0x80




            
         