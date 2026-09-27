               .MODEL SMALL
.STACK 100H

.DATA
MSG1    DB "Enter first digit: $"
MSG2    DB 0DH,0AH,"Enter second digit: $"
SUBMSG  DB 0DH,0AH,"SUBTRACTION: $"

DIGIT1  DB ?
DIGIT2  DB ?

.CODE
MAIN PROC
    ; Setup DS segment
    MOV AX, @DATA
    MOV DS, AX

    ; ----- Ask for first digit -----
    LEA DX, MSG1
    MOV AH, 09H
    INT 21H

    ; ----- Read first digit -----
    MOV AH, 01H
    INT 21H
    SUB AL, '0'      ; ASCII ? number
    MOV DIGIT1, AL

    ; ----- Ask for second digit -----
    LEA DX, MSG2
    MOV AH, 09H
    INT 21H

    ; ----- Read second digit -----
    MOV AH, 01H
    INT 21H
    SUB AL, '0'
    MOV DIGIT2, AL

    ; ----- Display "SUBTRACTION:" -----
    LEA DX, SUBMSG
    MOV AH, 09H
    INT 21H

    ; ----- Perform subtraction -----
    MOV AL, DIGIT1
    SUB AL, DIGIT2   ; AL = digit1 - digit2

    ADD AL, '0'      ; Convert to ASCII

    ; ----- Print result -----
    MOV DL, AL
    MOV AH, 02H
    INT 21H

    ; ----- Exit program -----
    MOV AH, 4CH
    INT 21H

MAIN ENDP
END MAIN
