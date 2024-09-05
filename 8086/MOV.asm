MOV AX,2h
MOV ES,AX
MOV BX,CS
MOV CX,CS


; Nesse codigo estamos apenas mostrando como
; podemos movimentar os valores de um 
; registrador para o outro

;   Obs: Nao consegui copiar o valor do IP
;        para outro lugar
;        - nao da para alterar ele para
;          outro valor, pois ele aponta para
;          a proxima instrucao   

; ------------------------------------------

; Colocando um valor no registrador

MOV DL, 0FFh

HLT 

; Se nesse caso usassemos DH, nao daria
; certo, pois estariamos atribuindo um valor
; menor do que o DH suporta (de FF para cima)
