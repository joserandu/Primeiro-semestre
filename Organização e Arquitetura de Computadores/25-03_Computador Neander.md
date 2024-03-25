# Aula - Computador Neander | 25/03/2024

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
 
  - 
