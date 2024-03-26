# Aula - Computador Neander | 25/03/2024

## Configurações do Neander

- Para acessar o neander, precisa de uma máquina virtual, que no caso é o Q4Wine.
- O neander é um computador virtual mesmo, ele não existe fisicamente, mas podemos simular.
    - A gente vai escrever os programas diaretamente na memória ram
    - A memoria RAM está nos dois lados.
    - O número é uma instrução.
        - Na sequencia: O número é o lugar da memória, o dado é o que tem guardado, e o mnemonico.
        - Cada instrução tem um byte. (8 bits).
            
    - Na parte de baixo tem as portas lógicas com o valor númerico delas.
        - A máquina lê o opcode do lado da porta lógica.
        - No acumulador: (PEGAR A EXPLICAÇÃO NO FINAL DOS SLIDES).
            - O moodle volta hoje a tarde
    - <b>Registradores:</b>
        - AC: Acumulador (alxiliar)
        - PC: Contador de programa
        - RI: registrador de instrução.
        - A função soma utiliza o valor do acumulador mais uma instrução de memória.
        - Para parar o código, a gente clica FO, mas não dá pra ver o efeito dela, pois o código não está sendo rodado.
  
  ## Slides

  Conjunto SET
   
   - O programador desse computador poderia ter usado menos bits para fazer as portas lógicas, mas não importa, está feito.
   - A memória é o primeiro número guardado para fazer o calculo.
   - 1 é negativo e o 0 é positivo.
       - O led do flag acende no 0.

    intruções que afetam as flags

  - add (aritimético)
  - not, and, or (operador aritimético).


  - Os projetistas querem deixar ao máximo de acessar a memória do computador.
  - Mnemónico é o pedaço de uma palavra que representa alguma coisa.
  - Para fechar o neander no terminal: pkill WNeander.bin
 
Exercício 1

- Faça um programa que leia os valores dos endereçõs 80h e 81h e calcule a soma, AND, OR, NOT dos valores de 80h e 81h salvando assim:
  - 82h soma de A e B.
  - 83h and A e B.
  - 84 or entre A e B.
  - 85h not de A
  - 86h not de B
 
Como fazer:

primeiro muda para Hexadecimal.

Primeiro registra os números em memória.
LDA 80 - Salvar o primeiro dado.
ADD 81 - Operação.
STA 82 - impressão na posição desejada na memória.
 
- Qual é o tamanho do programa em bytes? 29 bytes

- Quantas instruções tem o programa? 16
 
- Quantos tipos distintos de instruções? 7 instruções.

Saltos

- Incondicional: JMP (Jump)
- Condicional JN e JZ

  - Esses jumps são a estrutura do if else.

Baixar o Neander chegando em casa pelo link no email.
    - Quem sabe precise baixar o Q4Wine, mas é um espaço virtual para simular windons no linux.


Exercício 2

Faça um programa que leia dois valores (80h e 81h) e calcule o and entre eles.
Se o resultado for 0, salve 1 no endereço 82h. Caso contrário, salve 2 no endereço 82h.

HLT

LDA 80
and 81
JZ 01
LDA 84
JMP FIM
LDA 83
STA 82
HLT

<table>
    <tr>
        <td>LDA 80</td>        
        <td>LDA 80</td>
    </tr>
</table>
