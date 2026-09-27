.MODEL SMALL
.STACK 100H

.DATA
MSG1    DB "Enter first digit: $"
MSG2    DB 0DH,0AH,"Enter second digit: $"
SUMMSG  DB 0DH,0AH,"SUM: $"
NEWLINE DB 0DH,0AH,"$"

DIGIT1  DB ?
DIGIT2  DB ?

.CODE
MAIN PROC
    ; Setup DS data segment pointer
    MOV AX, @DATA
    MOV DS, AX

    ; --- Ask for first digit ---
    LEA DX, MSG1
    MOV AH, 09H
    INT 21H

    ; --- Read first digit ---
    MOV AH, 01H
    INT 21H
    SUB AL, '0'         ; Convert ASCII to integer
    MOV DIGIT1, AL

    ; --- Ask for second digit ---
    LEA DX, MSG2
    MOV AH, 09H
    INT 21H

    ; --- Read second digit ---
    MOV AH, 01H
    INT 21H
    SUB AL, '0'         ; Convert ASCII to integer
    MOV DIGIT2, AL

    ; --- Display "SUM: " message ---
    LEA DX, SUMMSG
    MOV AH, 09H
    INT 21H

    ; --- Calculate & print sum as ASCII ---
    MOV AL, DIGIT1
    ADD AL, DIGIT2
    ADD AL, '0'         ; Convert sum to ASCII
    MOV DL, AL
    MOV AH, 02H
    INT 21H

    ; --- Exit program ---
    MOV AH, 4CH
    INT 21H
MAIN ENDP
END MAIN
