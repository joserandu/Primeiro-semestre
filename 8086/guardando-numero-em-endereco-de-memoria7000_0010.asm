
MOV BX,7000h
MOV DS,BX
MOV SI, 0010h
MOV DS[SI],6999h
HLT

; O ds, bx e o si servem para quardar valores na memoria.
