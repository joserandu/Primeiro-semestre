
; Exercicio 2 - porta int21

MOV AX, 0002h
MOV BX, 0003h
MOV CX, AX
ADD CX, BX
INT 21  ; Funciona mas aqui nao.

HLT
