.model small
.stack 100h
.data
    msg1 db 'Escolha um numero: $'
    msg2 db 'Escolha outro numero: $'
    res db 'Resultado: $'
    buffer db 6, ?, ?, ?, ?, ?, '$' ; Buffer para leitura de até 5 dígitos (mais '$')

.code
main:
    mov ax, @data
    mov ds, ax

    ; COLHER PRIMEIRO NUMERO
    lea dx, msg1
    mov ah, 09h
    int 21h

    mov ah, 01h
    int 21h
    sub al, '0' ; Converte de ASCII para número
    mov bl, al  ; Armazena o primeiro número em BL

    ; COLHER SEGUNDO NUMERO
    lea dx, msg2
    mov ah, 09h
    int 21h

    mov ah, 01h
    int 21h
    sub al, '0' ; Converte de ASCII para número
    mov bh, al  ; Armazena o segundo número em BH

    ; SOMA E EXIBIR RESULTADO
    add bl, bh   ; Soma os números
    mov al, bl   ; Move o resultado para AL
    add al, '0'  ; Converte de número para ASCII

    lea dx, res
    mov ah, 09h
    int 21h

    mov dl, al
    mov ah, 02h
    int 21h

    ; FINALIZAR
    mov ax, 4c00h
    int 21h
end main