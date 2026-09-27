MOV DX, 0        ; character count = 0
MOV AH, 1
INT 21H          ; read first character

WHILE_:
    CMP AL, 0DH  ; Is it Carriage Return (Enter)?
    JE END_WHILE ; Yes ? exit loop

    INC DX       ; Not Enter ? increase count

    INT 21H      ; Read next character
    JMP WHILE_   ; Repeat loop

END_WHILE:
