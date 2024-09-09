; Faca um programa quer retorne f(x) = 3x^2 + 2b
; Use entrada de dados a pergunta para o usuario de x e b

.data
    
    x db 'Digite o valor de x: $ '
    b db 'Digite o valor de b: $ '
    rst db 'Resultado: $'
    
    buffer db '00$'
    
.code
main:
    
    ; Declaracao
    MOV AX, @data
    MOV DS, AX
    MOV DI, AX
    
    ; Entrada de dados
    
    ; x
    LEA DX, x
    MOV AH, 09h
    INT 21h
    
    MOV AH, 01h
    INT 21h
    SUB AL, '0'
    MOV BH, AL
    
    ; b
    LEA DX, b
    MOV AH, 09h
    INT 21h
    
    MOV AH, 01h
    INT 21h
    SUB AL, '0'
    MOV BL, AL
    
    ; Calculo
    
    ; x^2
    MOV AL, BH
    MOV CL, AL
    MUL CL
    
    MOV CH, AL
    
    ; 3*(x^2)
    MOV AL, CH
    MOV DL, 03h
    MUL DL
    
    MOV CH, AL
    
    ; 2*b
    MOV AL, BL
    MOV CL, 02h
    MUL CL
    
    MOV CL, AL
    
    ; (3X^2) + (2b)
    MOV AL, CH
    ADD AL, CL
    
    ; Saida de dados
    MOV SI, offset buffer +1
    ADD AL, '0'
    MOV [SI], AL
    
    LEA DX, rst
    MOV AH, 09h
    INT 21h
           
    LEA DX, buffer
    MOV AH, 09h
    INT 21h
    
    

end main
HLT
   