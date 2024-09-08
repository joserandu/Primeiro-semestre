.data

    msg1 db "Digite o primeiro numero (a): $"
    msg2 db "Digite o segundo numero (b): $"
    msg3 db "Digite o terceiro numero (c): $"
    rst_msg db "Media ponderada: $"
    
    buffer db "00$", 0
    
.code
main:

; Declaracao
  MOV AX, @data
  MOV DS, AX
  MOV DI, AX
  
; Lendo dados

  ; A
  LEA DX, msg1
  MOV AH, 09h
  INT 21h
        
  MOV AH, 01h
  INT 21h
  SUB AL, '0'
  MOV BH, AL
  
  ; B
  LEA DX, msg2
  MOV AH, 09h
  INT 21h
  
  MOV AH, 01h
  INT 21h
  SUB AL, '0' 
  MOV BL, AL
  
  ; C
  LEA DX, msg3
  MOV AH, 09h
  INT 21h
  
  
  MOV AH, 01h
  INT 21h
  SUB AL, '0'
  MOV CH, AL
  
  
  ; Calcula a media ponderada
  
  ; 2 * A
  MOV AL, BH  
  MOV CL, 02h
  MUL CL      
  MOV SI, AX  

  ; 3 * B
  MOV AL, BL  
  MOV CL, 03h
  MUL CL      
  
  ADD SI, AX  

  ; 5 * C
  MOV AL, CH  
  MOV CL, 05h
  MUL CL      
  ADD SI, AX  

  ; / 10 (0Ah)
  MOV AX, SI  
  MOV CL, 0Ah 
  DIV CL      
  
  ; Atribuindo um valor imprimivel ao buffer
  MOV SI, offset buffer + 1  ; o +1 serve para colocar na posicao na lista de zeros (0X).
  MOV DL, AL
  ADD DL, '0'
  MOV [SI],DL
  
  ; Imprimindo a mensagem
  LEA DX, rst_msg  ; Nao esqueca da funcao LEA quando for usar variavel.
  MOV AH, 09h
  INT 21h
  
  ; Imprimindo o buffer
  LEA DX, buffer
  MOV AH, 09h
  INT 21h
  
end main
HLT
