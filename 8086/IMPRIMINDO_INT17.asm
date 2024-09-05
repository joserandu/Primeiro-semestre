
MOV AX,52h  ; para imprimir             
MOV DX,130d  ; porta da impressora
INT 17h  ; interrupcao da impressao


MOV AX,097             
MOV DX,130d
INT 17h


MOV AX,110             
MOV DX,130d
INT 17h


MOV AX,100             
MOV DX,130d
INT 17h


MOV AX,250             
MOV DX,130d
INT 17h

HLT
