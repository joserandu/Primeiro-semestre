
; PUSH E POP

    ;Funcao: Coloca e retira um word na pilha.

MOV AX, 02

PUSH AX
PUSH CS
PUSH 02h
PUSH 0FFFFh

POP AX
POP DS
POP CX

HLT

; A pilha (stack) fica no endereco de
; memoria do SS e SP, mas e mais claro 
; acessar pelo view -> Stack
                                