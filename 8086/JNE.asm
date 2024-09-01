
; JNE

;   Jump Not Equal

MOV AX, 03h
MOV BX, 30h

laco:        
    ADD AX, 1
    
    MOV CX,7000h
    MOV DS,CX
    MOV SI,AX
    MOV DS[SI],AX
    
    CMP AX,BX
    JNE laco
HLT   
