
; JMP

;   Salto incondicional
;   JMP endereco ou rotulo

MOV AH,02
MOV DL,30
;INT 21  ; Nao sei pq o INT 21 nao esta indo.
JMP 010
MOV DL,31
;INT 21
INT 20
