# Unidade de Controle | 19/08/2024

![aula8-UnidadeControle_page-0001](https://github.com/user-attachments/assets/955bcb94-162f-4279-82c5-5ceff2ec6552)
![aula8-UnidadeControle_page-0002](https://github.com/user-attachments/assets/c7514e06-a06c-4b53-8618-6ad530b357f0)
![aula8-UnidadeControle_page-0003](https://github.com/user-attachments/assets/2bab2c4e-adb2-45c8-9b12-72c611bcd5c7)
![aula8-UnidadeControle_page-0004](https://github.com/user-attachments/assets/fd614853-5cb9-4e0f-bc72-6b9e16d5356b)

- Não conseguimos ver essas microinstruções, nós programadores só enchergamos até assembly.
- Os flags da ula estão no RST (registrador de estado).

![aula8-UnidadeControle_page-0005](https://github.com/user-attachments/assets/7db1b1c8-6a1d-44e0-adbf-f1f70adf7d5d)

- Os códigos de condição são 2, 1 ou 0.
- NOP tem um byte, enquanto o ADD x tem dois bytes.

![aula8-UnidadeControle_page-0006](https://github.com/user-attachments/assets/fbcf50e5-da69-4667-bddb-dbbfe8607e53)
![aula8-UnidadeControle_page-0007](https://github.com/user-attachments/assets/05bb32a1-1c0a-4c27-9dbe-e0ae82985096)
![aula8-UnidadeControle_page-0008](https://github.com/user-attachments/assets/c428a51a-b64e-46f0-a1c0-55da70ba90f8)
![aula8-UnidadeControle_page-0009](https://github.com/user-attachments/assets/fe3771f7-b207-4a11-87c9-aca0ab4ed20d)

- O neander usa endereçamento indireto, ou seja, passar o endereço de memória para fazer as operações.

![aula8-UnidadeControle_page-0010](https://github.com/user-attachments/assets/2a321bf9-5713-4d8c-8fad-64e78535635a)
![aula8-UnidadeControle_page-0011](https://github.com/user-attachments/assets/145b00a1-4cfb-4697-a4cb-fe3275ec839f)
![aula8-UnidadeControle_page-0012](https://github.com/user-attachments/assets/4004daf0-5dab-4ff5-8ebc-9ec7d6b3a7f1)
![aula8-UnidadeControle_page-0013](https://github.com/user-attachments/assets/6145ba69-a1dd-48c2-a358-45403e397274)
![aula8-UnidadeControle_page-0014](https://github.com/user-attachments/assets/fbeaaa94-912d-4df5-a3a9-b22dabbcfbc7)
![aula8-UnidadeControle_page-0015](https://github.com/user-attachments/assets/40621df4-1fc1-428d-8a53-af8389ad62cd)
![aula8-UnidadeControle_page-0016](https://github.com/user-attachments/assets/2dbe040e-c28b-40b7-9e92-fcaf380d3df4)
![aula8-UnidadeControle_page-0017](https://github.com/user-attachments/assets/58dd50a8-ad5a-44c9-b634-7d9710853e34)
![aula8-UnidadeControle_page-0018](https://github.com/user-attachments/assets/fe3e88b4-518c-435f-8330-b7202d056fc8)

# 8086
## Memória de falor imediato

MOV [0100], 56h  ; indicação de operação com memória.

<hr>
- Exercício 5

INICIO:
    MOV BX, 5000h
    MOV DX, 01h
    MOV SS, BX
    MOV SP, 0FFFFh
    MOV CX, 00h
    JMP salto
    HLT
    
salto:
    MOV AX, 0BBh
    PUSH AX
    SUB DX, SP
    CMP SP, CX
    JA salto
    RET inicio   

   # Neander

![Image](https://github.com/user-attachments/assets/c3a6e4eb-27f1-447b-9c1e-f9728a68e100)
![Image](https://github.com/user-attachments/assets/2bef62c3-e4f1-498d-8444-b13d4ac73fac)
![Image](https://github.com/user-attachments/assets/35fe56e0-6a35-41dd-8cba-c1735256937f)
![Image](https://github.com/user-attachments/assets/5fa651b1-c148-4f44-9f90-7116f5c144d8)
![Image](https://github.com/user-attachments/assets/41350373-dd52-4b5f-a20d-099570d6ed73)
![Image](https://github.com/user-attachments/assets/3514543b-499b-4fa1-9e37-714d78d90c7f)
![Image](https://github.com/user-attachments/assets/98590eb6-a4a8-4e4b-bb14-98806e509d2a)
![Image](https://github.com/user-attachments/assets/3a01bf20-eddb-4b91-8894-4b63d24acb73)
![Image](https://github.com/user-attachments/assets/e44e3eb9-c512-4eab-96d7-4efa36e1320d)
![Image](https://github.com/user-attachments/assets/b7f77f8a-fd6c-468d-a12a-64dd87afd7c4)
![Image](https://github.com/user-attachments/assets/bc37f4d3-23e4-4ed8-9a78-8148ec5b7819)
![Image](https://github.com/user-attachments/assets/0123a66a-bfad-48fa-9679-9abfe1578996)
![Image](https://github.com/user-attachments/assets/ada0b10c-ecc7-447c-88ed-b743338b8293)
![Image](https://github.com/user-attachments/assets/34fd1ae0-ba98-44ea-bc12-08d428041f00)
![Image](https://github.com/user-attachments/assets/d25fd409-b33a-4fa4-8698-bf0e8ab1373d)
![Image](https://github.com/user-attachments/assets/1bc8de93-d278-48c6-ad2d-07fc18ec4a7f)
![Image](https://github.com/user-attachments/assets/636b7f15-8f51-497b-ad8a-1c6b688cda0e)
