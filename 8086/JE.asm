
; JE

;   Salto "se igual (equal)"
;   Sintaxe: JE endereco ou rotulo


MOV CX,00h

laco:
    CMP CX,5h    ; depois incremento 1    
    
    MOV BX,07000h
    MOV DS,BX
    MOV SI,CX
    MOV DS[SI],CX
   
    
    JE sair   

    ADD CX,1h    ; comparando com 5 (cuidado onde colocar)
    JMP laco

sair:
    HLT
 
; Veja no tradicional endereco 7000 da RAM
