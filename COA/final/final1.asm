                                                             .MODEL SMALL
.STACK 100H
.DATA
.CODE
MAIN PROC
    MOV AH, 1
    INT 21H         ; Read char ? AL

    CMP AL, '1'
    JE PRINT

    CMP AL, '2'
    JE PRINT

    JMP EXIT        ; Otherwise terminate

PRINT:
    MOV DL, AL
    MOV AH, 2
    INT 21H

EXIT:
    MOV AH, 4CH
    INT 21H
MAIN ENDP
END MAIN
