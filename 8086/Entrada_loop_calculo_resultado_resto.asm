; Entrada, loop, calculo, memoria RAM e Saida

; 1 - Recebe o valor de dois numeros.
; 2 - Se o primeiro for menor que o segundo
;     o intervalo entre os dois sao 
;     registrados na memoria.
; 3 - Calcula num1*num2/(num1+num2)
; 4 - imprime o resultado e o resto na tela

.data
                                            
    num1 db "Digite o primeiro numero: $ \b"
    num2 db "Digite o segundo numero: $ \b"
    result db "Resultado: $"
    rsto db "Resto: $"
    
    buffer db "0$", 0
    
.code
main:
    
    ; num1
    MOV AX, @data
    MOV DS, AX
    MOV DI, AX
    
    LEA DX, num1
    MOV AH, 09h
    INT 21h
    
    MOV AH, 01h
    INT 21h
    SUB AL, '0'
    MOV BH, AL
    
    ; num2
    LEA DX, num2
    MOV AH, 09h
    INT 21h
    
    MOV AH, 01h
    INT 21h
    SUB AL, '0'
    MOV BL, AL 
    
    MOV AL, BH
    
    ; Deixando livre o acumulador BX
    MOV CH, BH
    MOV CL, BL
    MOV AH, 0h
    
    laco:
       
        MOV BX, 07000h  ; pra registrar na memoria precisa do acumulador BX           
        MOV DS, BX               
        MOV SI, AX               
        MOV DS[SI], AX
        
        CMP AL, CL
        JA sair 
      
        CMP AL, CL
        JE sair
        
        ADD AL, 01h
        
        JMP laco
        
sair:
    
    ; Recompondo o valor de ds
    MOV AX, @data
    MOV DS, AX
    
    
    ; num1 * num2 / (num1 + num2)
     
    ; num1 * num2
    MOV AL, CH
    MOV BL, CL
    MUL CL
    
    MOV BH, AL
    
    ; num1 + num2
    MOV AL, CH
    ADD AL, CL
    
    MOV BL, AL
    
    ; /
    MOV AL, BH
    MOV DL, BL
    DIV DL
    
    MOV BL, AL  ; Resultado
    MOV BH, AH  ; Resto
    
     
    ; Saida de dados
    
    ; Resultado 
    MOV SI, offset buffer 
    MOV DL, BL
    ADD DL, '0'
    MOV [SI], DL
    
    LEA DX, result
    MOV AH, 09h
    INT 21h
    
    LEA DX, buffer
    MOV AH, 09h
    INT 21h
    
    ; Resto
    MOV SI, offset buffer 
    MOV DL, BH
    ADD DL, '0'
    MOV [SI], DL
    
    LEA DX, rsto
    MOV AH, 09h
    INT 21h
    
    LEA DX, buffer
    MOV AH, 09h
    INT 21h    

end main

HLT
