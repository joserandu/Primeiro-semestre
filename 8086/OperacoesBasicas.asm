
; Operacoes basicas

MOV AL, 09h
MOV BL, 03h

;Soma
MOV CL,AL
ADD CL,BL
PUSH CX  ; Push so funciona com X

; Subtracao
MOV CL,AL
SUB CL, BL
PUSH CX

; Multiplicacao
MOV AL, 09h
MOV BL, 03h
MUL BX
PUSH AX

; Divisao
MOV AL, 09h
MOV BL, 03h
DIV BX
PUSH AX

HLT
