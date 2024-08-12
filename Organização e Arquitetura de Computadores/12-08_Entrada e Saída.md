#  Entrada e Saída | 12/06/2024



![aula7-EntradaSaída-01](https://github.com/user-attachments/assets/b2fc5191-dec5-428a-8a50-8c41986da109)1
![aula7-EntradaSaída-02](https://github.com/user-attachments/assets/fa1e83ab-dcb6-459c-938b-af937b82fd13)2
![aula7-EntradaSaída-03](https://github.com/user-attachments/assets/11f637b5-0672-46a7-8e25-0d93eb5aae72)3

![aula7-EntradaSaída-04](https://github.com/user-attachments/assets/d86aaa27-425a-45d2-95ca-da18b77b696b)4

![aula7-EntradaSaída-05](https://github.com/user-attachments/assets/91582f0b-ae94-41d5-8b46-29aa71f41ad6)5

![aula7-EntradaSaída-06](https://github.com/user-attachments/assets/c6b861c5-8f4d-4ab8-8836-506cf475e9df)6

- Está mostrando a faixa de endereço localizada na memória.

![aula7-EntradaSaída-07](https://github.com/user-attachments/assets/42a1ff07-c112-4d4d-83b7-047ff7a2352a)7

- 4096 endereços para dispositivos de memória e saida.

![aula7-EntradaSaída-08](https://github.com/user-attachments/assets/7d512bfd-feb6-41b9-9b75-8f71fec9cbc7)8

![aula7-EntradaSaída-09](https://github.com/user-attachments/assets/1b033d98-0185-4fe1-ac2c-e394946ce338)9

![aula7-EntradaSaída-10](https://github.com/user-attachments/assets/beca31fe-b5f0-4c41-8a30-18d1236acd14)10

- Se dar o comando top no linux dá para ver as operações que estão sendo feitas.

![aula7-EntradaSaída-11](https://github.com/user-attachments/assets/615f0013-b399-4dd5-9518-8ece177c6925)11

<hr>

No 8086:

MOV AL,55h
MOV DX,130d
OUT DX,AL

Imprime U na impressora virtual.

<hr>

![aula7-EntradaSaída-12](https://github.com/user-attachments/assets/34fec461-793e-44e4-b660-4147a0e64a24)12
![aula7-EntradaSaída-13](https://github.com/user-attachments/assets/67fc6d82-0bac-435a-a913-f780b449bb6f)13
![aula7-EntradaSaída-14](https://github.com/user-attachments/assets/43c0de33-685f-471d-828e-e3f4b4b652f4)14
![aula7-EntradaSaída-15](https://github.com/user-attachments/assets/065fd89c-574f-4556-8ccf-049c00957ef1)15
![aula7-EntradaSaída-16](https://github.com/user-attachments/assets/481aabc9-f951-44f5-bd31-01786bc5b099)16
![aula7-EntradaSaída-17](https://github.com/user-attachments/assets/a0eed4e1-41dd-4ba8-bd55-0d734a79f871)17
![aula7-EntradaSaída-18](https://github.com/user-attachments/assets/d431ec2a-57f4-4130-8309-57d8621d3a3d)18
![aula7-EntradaSaída-19](https://github.com/user-attachments/assets/872fe81e-d5ce-40df-a804-b1d3b0c218cc)19
![aula7-EntradaSaída-20](https://github.com/user-attachments/assets/ec0e4b9f-4693-4f59-ae8c-4deaeeef2a19)20
![aula7-EntradaSaída-21](https://github.com/user-attachments/assets/c8250fb7-d6bf-4f61-bca0-0860d1859f82)21
![aula7-EntradaSaída-22](https://github.com/user-attachments/assets/1a86bc21-8885-4dfd-ba17-d7144e5d8b9d)22
![aula7-EntradaSaída-23](https://github.com/user-attachments/assets/169766cc-b0c5-409c-8d5b-73713d457ed4)23
![aula7-EntradaSaída-24](https://github.com/user-attachments/assets/297ab94b-296b-48ef-8abc-9f1f82071d42)24
![aula7-EntradaSaída-25](https://github.com/user-attachments/assets/eeccb564-d164-402d-b15f-fdeb76fb4483)25

- A tabela BIOS interrupt mostra os endereços de memória para as entradas de impressora (17h).

![aula7-EntradaSaída-26](https://github.com/user-attachments/assets/59434bf3-d55f-4b54-9b6e-fe6363079455)26
![aula7-EntradaSaída-27](https://github.com/user-attachments/assets/0fa527fe-8bb8-476a-8d68-704eef9df408)27
![aula7-EntradaSaída-28](https://github.com/user-attachments/assets/b7d93fcb-ac94-420b-9be4-185b2c8ade29)28

- A gente não vai ver DMA nessa disciplina.


<hr>
Imprimir meu nome (com interrupção int(17h)):

MOV AL,52h             ;char para imprimir
MOV AH,00               ;funcao da INT17
MOV DX,130d
INT 17H


MOV AL,097             ;char para imprimir
MOV AH,00               ;funcao da INT17
MOV DX,130d
INT 17H


MOV AL,110             ;char para imprimir
MOV AH,00               ;funcao da INT17
MOV DX,130d
INT 17H


MOV AL,100             ;char para imprimir
MOV AH,00               ;funcao da INT17
MOV DX,130d
INT 17H


MOV AL,250             ;char para imprimir
MOV AH,00               ;funcao da INT17
MOV DX,130d
INT 17H
HLT

<hr>

Nome sem int:

MOV AL,52h  
MOV DX,130d
OUT DX,AL
MOV AL,61h
OUT DX,AL
MOV AL,6Eh
OUT DX,AL
MOV AL,64h
OUT DX,AL
MOV AL,75h
OUT DX,AL

HLT

<hr>


