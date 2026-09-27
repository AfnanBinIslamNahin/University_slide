ORG 100h
.MODEL SMALL
.STACK 100H

.DATA
MSG1 DB 'Enter a number: $'
POSITIVE_MSG DB 0DH,0AH,'Positive$'
NEGATIVE_MSG DB 0DH,0AH,'Negative$'
NUM DB ?

.CODE
MAIN PROC
    MOV AX, @DATA
    MOV DS, AX

    ; Prompt user
    MOV AH, 09H
    LEA DX, MSG1
    INT 21H

    ; Read first character
    MOV AH, 01H
    INT 21H
    MOV BL, AL         ; Save first character

    CMP BL, '-'        ; Is it a minus sign?
    JE READ_NEGATIVE   ; If yes, jump to read next digit

    ; Otherwise, convert to positive number
    SUB BL, '0'
    MOV NUM, BL
    JMP CHECK_NUMBER

READ_NEGATIVE:
    ; Read the actual number after '-'
    MOV AH, 01H
    INT 21H
    SUB AL, '0'
    NEG AL             ; Make it negative
    MOV NUM, AL

CHECK_NUMBER:
    MOV AL, NUM
    CMP AL, 0
    JL PRINT_NEGATIVE
    JG PRINT_POSITIVE

PRINT_POSITIVE:
    MOV AH, 09H
    LEA DX, POSITIVE_MSG
    INT 21H
    JMP EXIT

PRINT_NEGATIVE:
    MOV AH, 09H
    LEA DX, NEGATIVE_MSG
    INT 21H

EXIT:
    MOV AH, 4CH
    INT 21H
MAIN ENDP
END MAIN
