
; JA

;   Salta se acima (above)

;   Utilizada para saltar caso o primeiro 
;   valor comparado esteja acima do segundo 
;   valor comparado.

;   Portanto, utilizado junto com o CMP.

MOV BL,07h
MOV AL,03h

laco:
    
    ADD AL,1
    
    MOV CX,07000h
    MOV DS, CX
    MOV SI, AX
    MOV DS[SI],AL
   
    
    CMP BL,AL
    JA laco

HLT
