;.model small
;.stack 100h
.data

    ; Declaracao das variaveis
    msg1 db 'Digite o primeiro numero (a): $'  ; Define Byte (defini variaveis de 1 byte
    msg2 db 'Digite o segundo numero (b): $'  ; $ declara a string
    msg3 db 'Digite o terceiro numero (c): $'
    result_msg db 'Media ponderada: $'
    
    ; Buffer para armazenar o resultado em ASCII
    buffer db '00000$', 0  ; Temos para guardar 6 bytes (5 + 1) na memoria e um byte nulo para finalizar. 

;.code
main:
    mov ax, @data  ; indica o inicio do seguimento de dados nas proximas duas linhas
    mov ds, ax
    mov es, ax
    
; Leitura e traducao dos numeros
    
    ; Ler primeiro numero (a -> BL)
    lea dx, msg1  ; (Load Effective Address) Serve para carregar o endereco em memoria da variavel.
    mov ah, 09h
    int 21h

    mov ah, 01h
    int 21h
    sub al, '0' ; Converte de ASCII para número
    mov bl, al  ; Armazena o primeiro número em BL (a)

    ; Ler segundo numero (b -> BH)
    lea dx, msg2
    mov ah, 09h
    int 21h

    mov ah, 01h
    int 21h
    sub al, '0' ; Converte de ASCII para número
    mov bh, al  ; Armazena o segundo número em BH (b)

    ; Ler terceiro numero (c -> CL)
    lea dx, msg3
    mov ah, 09h
    int 21h

    mov ah, 01h
    int 21h
    sub al, '0' ; Converte de ASCII para número
    mov cl, al  ; Armazena o terceiro número em CL (c)

; Calcular media ponderada (2*a + 3*b + 5*c) / 10
    
    ; Calcular 2*a
    mov al, bl  ; Carrega a em AL
    mov ah, 0   ; Zera AH
    shl al, 1   ; Multiplica a por 2 (equivalente a *2)
    mov si, ax  ; Armazena o resultado em SI (SI = 2*a)

    ; Calcular 3*b
    mov al, bh  ; Carrega b em AL
    mov ah, 0   ; Zera AH
    mov dl, al  ; Armazena b em DL
    shl al, 1   ; Multiplica b por 2
    add al, dl  ; Soma b novamente para obter 3*b
    add si, ax  ; Adiciona 3*b a SI (SI = 2*a + 3*b)

    ; Calcular 5*c
    mov al, cl  ; Carrega c em AL
    mov ah, 0   ; Zera AH
    mov dl, al  ; Armazena c em DL
    shl al, 2   ; Multiplica c por 4
    add al, dl  ; Soma c novamente para obter 5*c
    add si, ax  ; Adiciona 5*c a SI (SI = 2*a + 3*b + 5*c)

    ; Dividir por 10
    mov ax, si  ; Carrega SI em AX
    mov bl, 10  ; Carrega 10 em BL
    div bl      ; AX = AX / BL (quociente em AL, resto em AH)
    
; Convertendo numero para impressao    
    
    ; Converte resultado para ASCII e armazena no buffer
    mov si, offset buffer + 4 ; Posicao final do buffer
    mov dl, al
    add dl, '0' ; Converte digito para ASCII
    mov [si], dl ; Armazena o digito

    ; Exibir resultado
    lea dx, result_msg
    mov ah, 09h
    int 21h

    lea dx, buffer
    mov ah, 09h
    int 21h

; Finalizar
;    mov ax, 4c00h
;    int 21h
end main                                                       

HLT
