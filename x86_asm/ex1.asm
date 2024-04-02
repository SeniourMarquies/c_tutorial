global _start
_start:
mov eax, 1   ; exit call
mov ebx, 42  ; exit status, it could be anything.
sub ebx, 29  ; subtraction
int 0x80     ; interrupt caller


; mov ebx, 123 ; ebx = 123
; mov eax, ebx ; eax = ebx
; add ebx, ecx ; ebx+= ecx
; sub ebx, edx ; ebx-= edx
; mul ebx      ; eax*= ebx    
; div edx      ; eax/= edx
; mul and div is working with eax

 ;Actually, MUL and DIV also affect EDX. The MUL instruction stores the higher half of the result in EDX,
 ;while DIV stores the remainder from division there.
 ;If one dosn't know about that, one can be very surprised that suddenly their EDX is getting clobbered with "random" numbers after division/multiplication.