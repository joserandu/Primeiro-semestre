# Aula 5 - Representação dos Valores Negativos | 01/04 

<br>

![aula5d-Representacao_Valores_Negativos-01](https://github.com/joserandu/Primeiro-semestre/assets/134299499/4551e48a-dbf0-46b8-868f-b92268ad07c9)

- Na outra aula a gente viu como  os números positivos são calculados, hoje veremos como é feito os números negativos e como a máquina os interpreta.
- Quando em C, colocamos unsigned int num na declaração da variável, siginifica que o número é obrigatoriamente positivo.

  ![image](https://github.com/joserandu/Primeiro-semestre/assets/134299499/6d56ffda-c7f0-4db0-97d0-b1d30a7121c9)


![aula5d-Representacao_Valores_Negativos-02](https://github.com/joserandu/Primeiro-semestre/assets/134299499/004a5f5c-1ca2-4f44-8a25-997fa4c0188d)

- A formula faz aquela operação que fazemos com a tabela da segunda aula.
    - Mas para a matéria não importa o jeito que você chegue no resultado, contanto que chegue.

![aula5d-Representacao_Valores_Negativos-03](https://github.com/joserandu/Primeiro-semestre/assets/134299499/0749868a-f36e-448a-9da8-e8bb8e252690)

- Vai um e vem um se referem ao digito sobrante de uma outra casa, por exemplo: 1 + 9 = 10: vai um para a segunda casa e vem um pra segunda casa.
- Se o digito mais significativo for 1, o número é negativo.

<table>
  <tr>
    <td>000</td>
    <td>0</td>
    <td>0</td>
  </tr>
    <tr>
    <td>001</td>
    <td>1</td>
    <td>1</td>
  </tr>
    <tr>
    <td>010</td>
    <td>2</td>
    <td>2</td>
  </tr>
    <tr>
    <td>011</td>
    <td>3</td>
    <td>3</td>
  </tr>
    <tr>
    <td>100</td>
    <td>4</td>
    <td>-0</td>
  </tr>
    <tr>
    <td>101</td>
    <td>5</td>
    <td>-1</td>
  </tr>
    <tr>
    <td>110</td>
    <td>6</td>
    <td>-2</td>
  </tr>
    <tr>
    <td>111</td>
    <td>7</td>
    <td>-3</td>
  </tr>
</table>

![aula5d-Representacao_Valores_Negativos-04](https://github.com/joserandu/Primeiro-semestre/assets/134299499/52e358e5-dc10-485c-b04d-2df8c32c250b)

- Se os dois sinais são positivos, o resultado é positivo e resta medir a magnitude (M(a)) e isso serve para os outros números assim como está mostrado na tabela.

![aula5d-Representacao_Valores_Negativos-05](https://github.com/joserandu/Primeiro-semestre/assets/134299499/b1a382dd-6763-49bc-b9c9-d585b6685973)

- Complemento é a porta inversora.
- Muitos computadores já operaram com essa lógica, mas não mais atualmente.

![aula5d-Representacao_Valores_Negativos-06](https://github.com/joserandu/Primeiro-semestre/assets/134299499/5dc6d938-27c0-4cf1-bde2-787b86ef94a6)

- A Faixa de representação é como você chega na representação do número para o computador. É do Tanembawn.
    - É o jeito mais fácil de chegar.

- 0 = 000, not 0 = 111 = -0.
- 1 = 001, not 1 = 110 = -1.
- 

![aula5d-Representacao_Valores_Negativos-07](https://github.com/joserandu/Primeiro-semestre/assets/134299499/0d716f4a-0ca4-4eb3-9bf8-86e267440710)

-

![aula5d-Representacao_Valores_Negativos-08](https://github.com/joserandu/Primeiro-semestre/assets/134299499/250f0504-4510-4a67-81db-195261f2df8e)

- Na torca de sinal a expressão é irelevante para a matéria.

![aula5d-Representacao_Valores_Negativos-09](https://github.com/joserandu/Primeiro-semestre/assets/134299499/0b0fce20-d8e2-4494-b9af-82e1acf421ad)

- 

![aula5d-Representacao_Valores_Negativos-10](https://github.com/joserandu/Primeiro-semestre/assets/134299499/d778e08f-7b2f-48d3-9bfd-e55bd2b12e76)

- Pela formula a gente consegue uma lógica de -8 a 7.
- Primeiro faz o not, depois adiciona 1. 1110 -> 0001 -> 0010 (2 -> -2).
    - Se o primeiro número for 1.
    - 1000 -> 0111 -> 1000 (-8 -> -8).

![aula5d-Representacao_Valores_Negativos-11](https://github.com/joserandu/Primeiro-semestre/assets/134299499/82983819-f4ad-43ad-bfdf-457aedc8a364)

![aula5d-Representacao_Valores_Negativos-12](https://github.com/joserandu/Primeiro-semestre/assets/134299499/7a2f9c77-1bf4-4bd5-a12a-9d7521c2bfa6)

![aula5d-Representacao_Valores_Negativos-13](https://github.com/joserandu/Primeiro-semestre/assets/134299499/33db20d1-7e40-40e2-991c-e64300e7ae09)

![aula5d-Representacao_Valores_Negativos-14](https://github.com/joserandu/Primeiro-semestre/assets/134299499/860f9b0d-2040-4767-aa75-8c8b68a1d117)

- Esse é o jeito que os computadores usam atualmente.

![aula5d-Representacao_Valores_Negativos-15](https://github.com/joserandu/Primeiro-semestre/assets/134299499/f4222a50-4df3-4521-a8ab-54e7ed98d730)

![aula5d-Representacao_Valores_Negativos-16](https://github.com/joserandu/Primeiro-semestre/assets/134299499/e8e357ae-51e0-4827-9c3c-26627d08b396)

- Para os exercícios.
- O neander não tem subtração, devemos somar a um número negativo.
- O computador de 8 byts vai de 0 255 (11111111).

- Se resulta em número negativo, o número fica em hexadeciamal.

<table>
  <tr>
    <td>LDA 81</td>
  </tr>  
  <tr>
    <td>NOT</td>
  </tr>  
  <tr>
    <td>ADD 83</td>
  </tr>  
  <tr>
    <td>STA 84</td>
  </tr>  
  <tr>
    <td>LDA 80</td>
  </tr>  
  <tr>
    <td>ADD 84</td>
  </tr>  
  <tr>
    <td>STA 82</td>
  </tr>
</table>

## Exercício 2

- Faça um programa que realize subtrações consecutivas de -1 de um valor "a" (80h) e pare o código quando chegar em 0.

Para 80 = 2 e 81 = -1.

<table>
  <tr>
    <td>LDA 80</td>
  </tr>
  <tr>
    <td>ADD 81</td>
  </tr>
  <tr>
    <td>JZ</td>
  </tr>
  <tr>
    <td>STA 80</td>
  </tr>
  <tr>
    <td>JMP</td>
  </tr>
  <tr>
    <td>HLT</td>
  </tr>
</table>

LDA 80
JN SAIR
JZ SAIR
ADD 81
STA 80
JMP INICIO
HTL

A prova será na próxima semana ainda, a gente ainda vai estudar memória.

Não é aconcelhavel mas é uma forma também.

LDA 80
JN SAIR
LDA 80
JZ
ADD 81
STA 80
JMP LAÇO
HTL

## Subtração

00  20 81   LDA 81
02  60      NOT
03  30 83   ADD 83
05  30 80   ADD 80
07  10 82   STA 82

80  05     
81  02     
82  03     
83  01     


## 

00  20 80   LDA 80
02  30 81   ADD 81
04  30 81   ADD 81
06  30 81   ADD 81
08  10 83   STA 83
0A  20 82   LDA 82
0C  60      NOT
0D  30 86   ADD 86
0F  30 83   ADD 83
11  10 83   STA 83
13  F0      HLT
14  00      NOP
15  00      NOP


80  0A     
81  0A     
82  0A     
83  1E     
84  00     
85  00     
86  01     
87  00     
88  00     
