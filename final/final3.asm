.MODEL SMALL
.STACK 100H
.DATA
.CODE
MAIN PROC

    ; Read N
    MOV AH,1
    INT 21H       ; AL = digit
    SUB AL,30H    ; Convert ASCII ? number
    MOV CL, AL   

FOR_LOOP:
    CMP CL,0
    JE END_LOOP

    MOV DL,'#'
    MOV AH,2
    INT 21H

    DEC CL
    JMP FOR_LOOP

END_LOOP:
    MOV AH,4CH
    INT 21H

MAIN ENDP
END MAIN
