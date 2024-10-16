.data

    msg1 db "Digite o primeiro numero(a): $"
    msg2 db "Digite o segundo numero(a): $"
    msg3 db "Digite o terceiro numero(a): $"
    rst_msg db "Media ponderada: $"
    
    buffer db "00000$",0
    
.code
main:

MOV AX, @data
MOV DS, AX  ; Local de memoria
MOV ES, AX

; Ler o primeiro numero
LEA DX,msg1
MOV AH, 09h
INT 21h

MOV AH, 01h
INT 21h
SUB AL, '0'
MOV BL,AL

; Ler o segundo numero
LEA DX,msg2
MOV AH,09H
INT 21h

MOV AH,01h
INT 21h
SUB AL, '0'
MOV BH, AL

; Ler o terceiro numero
LEA DX,msg3
MOV AH,09h
INT 21h

MOV AH,01h
INT 21h
SUB AL, '0'
MOV CL, AL    
           
; M = (2*A + 3*B + 5*C) / 10
; 2
MOV AL, BL
MOV AH, 0
SHL AL, 1
MOV SI, AX

; 3
MOV AL, BH
MOV AH, 0
MOV DL, AL
SHL AL, 1
ADD AL, DL
MOV SI, AX

; 5
MOV AL, CL
MOV AH, 0
MOV DL, AL
SHL AL, 2
ADD AL, DL
MOV SI, AX        

; /10
MOV AX, SI
MOV DL, 10
DIV BL

; Saida de dados

MOV SI, offset buffer + 4
MOV DL, AL
ADD DL, '0'
MOV [SI],DL

LEA DX, rst_msg
MOV AH, 09h
INT 21h

LEA DX, buffer
MOV AH, 09h
INT 21h
   
end main
HLT
