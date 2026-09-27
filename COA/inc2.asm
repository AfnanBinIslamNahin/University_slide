                      org 100h
.model small
.stack 100h

.data
num1   db 3          ; first number
num2   db 3          ; second number
result db ?          ; to store the result
msg    db 'Result = $' ; message to display

.code
main proc
    mov ax, @data
    mov ds, ax        ; initialize data segment

    mov al, num1      ; load num1 into AL
    add al, num2      ; add num2 to AL
    mov result, al    ; store the result
   ; inc result        ; result = result + 1
    dec result        ; result = result + 1 (total +2)

    ; Display message
    mov ah, 09h
    lea dx, msg
    int 21h

    ; Display result (convert number to ASCII)
    mov al, result
    add al, 30h       ; convert to ASCII ('0' = 30h)
    mov dl, al
    mov ah, 02h
    int 21h

    ; Exit program
    mov ah, 4ch
    int 21h
main endp
end main
