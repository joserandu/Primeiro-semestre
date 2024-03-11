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

![aula2-BasesNumericas_page-0010](https://github.com/joserandu/Primeiro-semestre/assets/134299499/c3094b9f-77b3-4bb1-8fff-3e4c3146658c)
![aula2-BasesNumericas_page-0011](https://github.com/joserandu/Primeiro-semestre/assets/134299499/97c69e3d-0833-4729-acf7-40060f62eb31)
![aula2-BasesNumericas_page-0012](https://github.com/joserandu/Primeiro-semestre/assets/134299499/06d453b1-6687-4e3f-8806-fa4c9f69256f)

## Considerações finais

A ideia dessa disciplina é fazer o aluno entender como funciona a máquina que ele utilizará como material de trabalho, para não ser um profissional medíocre em sua área.

