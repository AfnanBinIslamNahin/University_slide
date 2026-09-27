.MODEL SMALL
.STACK 64   
.DATA
DATA1 DB 51H
DATA2 DB 20H 
SUM DB ?
.CODE  
MAIN PROC FAR
    MOV AX,@Data
    MOV DS,AX
    MOV AL,DATA1
    MOV BL,DATA2 
    ADD AL,BL
    MOV SUM,AL  
    
    MOV AL ,4CH
    INT 21H 
    
    
    MAIN ENDP
END MAIN
      
    