
; ADD

;   Adiciona um valor

; Fazendo a soma
MOV AX, 02h
MOV BX, 03h
ADD AX, BX

; Salvando o valor na RAM
MOV CX, 07000h
MOV DS, CX
MOV SI, 00000h
MOV DS[SI], AX

HLT
  