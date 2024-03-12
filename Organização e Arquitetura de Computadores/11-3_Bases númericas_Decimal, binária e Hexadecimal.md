# Aula 2: Bases númericas: Decimal, Binária e Hexadecimal - 11/03/2024

![aula2-BasesNumericas_page-0001](https://github.com/joserandu/Primeiro-semestre/assets/134299499/bc5b65b8-5d0d-40fa-af4f-8c34435f9cb1)

No nosso dia dia estamos ocupados com os decimais na programação, mas hoje veremos como o computador interpreta os númerais que usamos nos nossos programas.

## Binários

<table>
  <tr>
    <td><b>Decimal</b></td>
    <td><b>I1</b></td>
    <td><b>I2</b></td>
  </tr>
  <tr>
    <td>0</td>
    <td>0</td>
    <td>0</td>
  </tr>
  <tr>
    <td>1</td>
    <td>0</td>
    <td>1</td>
  </tr>
  <tr>
    <td>2</td>
    <td>1</td>
    <td>0</td>
  </tr>
  <tr>
    <td>3</td>
    <td>1</td>
    <td>1</td>
  </tr>
</table>

Lembrando que, assim como vimos na aula de matemática para a computação, o número de linhas correspondem ao número de binários colocados na tabela: 2^n.

![aula2-BasesNumericas_page-0002](https://github.com/joserandu/Primeiro-semestre/assets/134299499/b3b59935-ee81-45b5-b86d-f9854c9a0b43)

O slide que segue mostra algumas formas de converter os números para os seus respectivos binários, no entanto, a forma mais indicada pelo professor e que é mais didática, facil, rápida e intuitiva é pelo uso da <b>Tabela</b>, a qual veremos a seguir.

![aula2-BasesNumericas_page-0003](https://github.com/joserandu/Primeiro-semestre/assets/134299499/0184562f-0659-45d8-a72d-f4f1cc84174e)
![aula2-BasesNumericas_page-0004](https://github.com/joserandu/Primeiro-semestre/assets/134299499/a3f59b59-fa23-43c2-981f-5a0a8d3ef71a)
![aula2-BasesNumericas_page-0005](https://github.com/joserandu/Primeiro-semestre/assets/134299499/d0bf1366-e4c8-44ad-ad26-6f1128a6b9d8)
![aula2-BasesNumericas_page-0006](https://github.com/joserandu/Primeiro-semestre/assets/134299499/b4cdf3fc-7243-4b21-ae78-93ce4bee84ff)
![aula2-BasesNumericas_page-0007](https://github.com/joserandu/Primeiro-semestre/assets/134299499/559a514f-9f45-4aae-bca7-25a163ac502a)


## Método mais recomendado:

![aula2-BasesNumericas_page-0008](https://github.com/joserandu/Primeiro-semestre/assets/134299499/a4ee3966-cbd9-4559-b124-54b4f32c87de)

Lembre-se da regra anterior 2^posição, logo a tabela ficará com o cabeçalho de ordem exponencial 2:

<table>
  <tr>
    <td><b>128</b></td>
    <td><b>64</b></td>
    <td><b>32</b></td>
    <td><b>16</b></td>
    <td><b>8</b></td>
    <td><b>4</b></td>
    <td><b>2</b></td>
    <td><b>1</b></td>
  </tr>
</table>

## Como usar a tabela

- Para descobrir o valor binário de um número decimal é necessário coloca-lo onde ele cabe.
    - Por exemplo: 20
    - <table>
  <tr>
    <td><b>128</b></td>
    <td><b>64</b></td>
    <td><b>32</b></td>
    <td><b>16</b></td>
    <td><b>8</b></td>
    <td><b>4</b></td>
    <td><b>2</b></td>
    <td><b>1</b></td>
  </tr>
  <tr>
    <td><b>0</b></td>
    <td><b>0</b></td>
    <td><b>0</b></td>
    <td><b>1</b></td>
    <td><b>0</b></td>
    <td><b>1</b></td>
    <td><b>0</b></td>
    <td><b>0</b></td>
  </tr>
</table>
    - Somando 16 + 4, tem-se o valor decimal de <b>20</b>.

Perceba que se o último valor da sequencia é 0, o número é par.

![aula2-BasesNumericas_page-0009](https://github.com/joserandu/Primeiro-semestre/assets/134299499/e67ed60e-53f6-4679-a4f2-7810c7b333ec)

## Para a memória do computador

- 1 byte: <b>word</b>
- 32 byte: <b>duble word</b>
- 64 byte: <b>quard word</b>

Lembre-se que, matemáticamente, <b>1 byte pode ter 255 valores</b>, pois, como a proxima potência é 256 (100000000), o maior número com 8 dígitos será 255 (11111111).

## Tabela ASCII

![ASCII](https://github.com/joserandu/Primeiro-semestre/assets/134299499/9ebf1e27-abe1-4e6c-9eec-e2b003c48ff6)

Essa tabela mostra os valores que os decimais em fromato <b>char</b>, que são os números em formatos de strings, que assumem valores diferentes dos inteiros.

- Obs: Na hora de programar em C, para declarar variáveis que são números que não passam de 1 byte (de 0 a 255), como em um input destinado à idade, é melhor usar a declaração de variável char do que int que tem de 2 a 4 bytes, que podem aguentar valores de 0 a 65535 ou até 136070.

## Exercícios:

Converta de decimal para binário:

<table>
  <tr>
    <td><b>Decimais</b></td>
    <td><b>128</b></td>
    <td><b>32</b></td>
    <td><b>64</b></td>
    <td><b>16</b></td>
    <td><b>8</b></td>
    <td><b>4</b></td>
    <td><b>2</b></td>
    <td><b>1</b></td>
  </tr>
  <tr>
    <td><b>132</b></td>
    <td><b>1</b></td>
    <td><b>0</b></td>
    <td><b>0</b></td>
    <td><b>0</b></td>
    <td><b>0</b></td>
    <td><b>1</b></td>
    <td><b>0</b></td>
    <td><b>0</b></td>
  </tr>
  <tr>
    <td>249</td>
    <td>1</td>
    <td>1</td>
    <td>1</td>
    <td>1</td>
    <td>1</td>
    <td>0</td>
    <td>0</td>
    <td>1</td>
  </tr>
  <tr>
    <td>104</td>
    <td>0</td>
    <td>1</td>
    <td>1</td>
    <td>0</td>
    <td>1</td>
    <td>0</td>
    <td>0</td>
    <td>0</td>
  </tr>
  <tr>
    <td>83</td>
    <td>0</td>
    <td>1</td>
    <td>0</td>
    <td>1</td>
    <td>0</td>
    <td>0</td>
    <td>1</td>
    <td>1</td>
  </tr>
  <tr>
    <td>223</td>
    <td>1</td>
    <td>1</td>
    <td>0</td>
    <td>1</td>
    <td>1</td>
    <td>1</td>
    <td>1</td>
    <td>1</td>
  </tr>
  <tr>
    <td>141</td>
    <td>1</td>
    <td>0</td>
    <td>0</td>
    <td>0</td>
    <td>1</td>
    <td>1</td>
    <td>0</td>
    <td>1</td>
  </tr>
</table>

Converta de binário para decimal:

<table>
  <tr>
    <td><b>Decimal</b></td>
    <td><b>128</b></td>
    <td><b>64</b></td>
    <td><b>32</b></td>
    <td><b>16</b></td>
    <td><b>8</b></td>
    <td><b>4</b></td>
    <td><b>2</b></td>
    <td><b>1</b></td>
  </tr>
  <tr>
    <td>182</td>
    <td>1</td>
    <td>0</td>
    <td>1</td>
    <td>1</td>
    <td>0</td>
    <td>1</td>
    <td>1</td>
    <td>0</td>
  </tr>
  <tr>
    <td>105</td>
    <td>0</td>
    <td>1</td>
    <td>1</td>
    <td>0</td>
    <td>0</td>
    <td>1</td>
    <td>1</td>
    <td>0</td>
  </tr>
  <tr>
    <td>142</td>
    <td>1</td>
    <td>0</td>
    <td>0</td>
    <td>0</td>
    <td>1</td>
    <td>1</td>
    <td>1</td>
    <td>0</td>
  </tr>
  <tr>
    <td>210</td>
    <td>1</td>
    <td>1</td>
    <td>0</td>
    <td>0</td>
    <td>1</td>
    <td>1</td>
    <td>0</td>
    <td>0</td>
  </tr>
  <tr>
    <td>115</td>
    <td>0</td>
    <td>1</td>
    <td>1</td>
    <td>1</td>
    <td>0</td>
    <td>0</td>
    <td>1</td>
    <td>1</td>
  </tr>
  <tr>
    <td>136</td>
    <td>1</td>
    <td>0</td>
    <td>0</td>
    <td>0</td>
    <td>1</td>
    <td>0</td>
    <td>0</td>
    <td>0</td>
  </tr>
</table>

## Hexadecimal

Cabeçalho da Tabela:

<table>
  <tr>
    <td>8</td>
    <td>4</td>
    <td>2</td>
    <td>1</td>
    <td>8</td>
    <td>4</td>
    <td>2</td>
    <td>1</td>
  </tr>
</table>

Simbolos: 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F.
    - Sendo A=10, B=11, C=12, D=13, E=14, F=15.
    - Vamos separar os 8 números em 2 partes de quatro e vamos nomea-las:
        - 0101 1110
        -  5    E
        - 5E, pois 13 é igual a E.

Usamos essa codificação em linguagem Assembly.

![aula2-BasesNumericas_page-0010](https://github.com/joserandu/Primeiro-semestre/assets/134299499/c3094b9f-77b3-4bb1-8fff-3e4c3146658c)
![aula2-BasesNumericas_page-0011](https://github.com/joserandu/Primeiro-semestre/assets/134299499/97c69e3d-0833-4729-acf7-40060f62eb31)

Exercícios:

Convertendo de hexadecimal para binário:

<table>
  <tr>
    <td>Hexadecimal</td>
    <td>128</td>
    <td>64</td>
    <td>32</td>
    <td>16</td>
    <td>8</td>
    <td>4</td>
    <td>2</td>
    <td>1</td>
  </tr>
  <tr>
    <td>F3</td>
    <td>1</td>
    <td>1</td>
    <td>1</td>
    <td>1</td>
    <td>0</td>
    <td>0</td>
    <td>1</td>
    <td>1</td>
  </tr>
  <tr>
    <td>2D</td>
    <td>0</td>
    <td>0</td>
    <td>1</td>
    <td>0</td>
    <td>1</td>
    <td>1</td>
    <td>1</td>
    <td>0</td>
  </tr>
  <tr>
    <td>CE</td>
    <td>1</td>
    <td>1</td>
    <td>0</td>
    <td>0</td>
    <td>1</td>
    <td>1</td>
    <td>1</td>
    <td>0</td>
  </tr>
</table>

![aula2-BasesNumericas_page-0012](https://github.com/joserandu/Primeiro-semestre/assets/134299499/06d453b1-6687-4e3f-8806-fa4c9f69256f)

## Portas lógicas

- Not 1 = 0
- And:
    - 1101
    - 0110
    - <b>0100</b> => esse é o resultado porque apenas com ambos sendo 1, é possível a verdade.
- Or:
    - 1111 => Resultado da mesma expressão acima.

Outras Portas:
- Nand
    - Nega o and
- Nor
    - Nega o or
- Xor
    - Ou exclusivo
- Xor
    - 

## Considerações finais

- A ideia dessa disciplina é fazer o aluno entender como funciona a máquina que ele utilizará como material de trabalho, para não ser um profissional medíocre em sua área.
