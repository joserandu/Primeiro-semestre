<h1>Apresentação do Curso - 19/02/2024</h1>	

<h3>Sobre a disciplina</h3>

- Teremos 17 segundas-feiras de curso aproximadamente, sendo uma das disciplinas que menos terão dias sem aula;

<h3>Linguagem de programação, linguagem assembly e linguagem de máquina</h3>

- Programar em linguagem de máquina é diferente de programar em baixo nível;
  - A linguagem de baixo nível é a linguagem assembly, mas a de máquina é o sistema binário (0 e 1).
- Na linguagem C, você consegue com facilidade somar e subtrair, pois o código tem essas funções específicas, mas complica quando você vai multiplicar e dividir, que são funções que não existem na linguagem C. E para o computador não existe multiplicação e divisão.
- A bibliografia técnica desse curso é técnica, não é um romance.
  - Se você quiser, pode ler tudo, mas o professor aconselhou que seja lido o livro se você não entendeu alguma parte da aula, faltou no dia ou até mesmo quiser se aprofundar em um assunto da aula. É um material de consulta.


<h4>Exemplo de diferença de linguagem</h4>

-	Queremos imprimir: 0
  -	Linguagem de programação C: printf(“0”)
  - Linguagem Assembly (sistema hexadecimal): 

  <table>
    <tr>
      <td>AH</td>
      <td>02</td>
    </tr>
    <tr>
      <td>B4</td>
      <td>02</td>
    </tr>
    <tr>
      <td>B2</td>
      <td>30</td>
    </tr>
    <tr>
      <td>CD</td>
      <td>21</td>
    </tr>
  </table>
  
	Linguagem de máquina (sistema binário):

  <table>
    <tr>
      <td>1010</td>
      <td>0100</td>
      <td>0000</td>
      <td>0010</td>
    </tr>
    <tr>
      <td>1010</td>
      <td>0010</td>
      <td>0010</td>
      <td>0000</td>
    </tr>
    <tr>
      <td>1011</td>
      <td>1100</td>
      <td>0010</td>
      <td>0001</td>
    </tr>
  </table>

  - Cada número dessa sequencia é um Byte.
   -	Lembre-se que é tudo isso para imprimir um 0.
