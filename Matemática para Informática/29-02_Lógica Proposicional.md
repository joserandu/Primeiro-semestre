# Aula: Lógica Proposicional - 29/02/2024

## Informações iniciais

- Premissas + conclusões = argumentos
- ∴ = Portanto.

## Sintaxe da linguagem C

- && = e
-	! = Negação
    -	Exemplo: !(x < 4 && y >= 6)

## Tabela Verdade
<table>
  <tr>
    <td>A</td>
    <td>A</td>
  </tr>
  <tr>
    <td>V</td>
    <td>F</td>
  </tr>
  <tr>
    <td>F</td>
    <td>V</td>
  </tr>
</table>

-	O número de linhas é dado por: 2^n
    - Sendo n o número de elementos analizados

<table>
  <tr>
    <td>A</td>
    <td>B</td>
    <td>A⋀B</td>
  </tr>
  <tr>
    <td>V</td>
    <td>V</td>
    <td>V</td>
  </tr>
  <tr>
    <td>V</td>
    <td>F</td>
    <td>F</td>
  </tr>
  <tr>
    <td>F</td>
    <td>V</td>
    <td>F</td>
  </tr>
  <tr>
    <td>F</td>
    <td>F</td>
    <td>F</td>
  </tr>
</table>

•	Para fazer em casa:

<table>
  <tr>
    <td>A</td>
    <td>B</td>
    <td>C</td>
    <td>¬(A⋀B)⋀¬C</td>
  </tr>
  <tr>
    <td>V</td>
    <td>V</td>
    <td>V</td>
    <td>F</td>
  </tr>
  <tr>
    <td>V</td>
    <td>V</td>
    <td>F</td>
    <td>V</td>
  </tr>
  <tr>
    <td>V</td>
    <td>F</td>
    <td>V</td>
    <td>F</td>
  </tr>
  <tr>
    <td>V</td>
    <td>F</td>
    <td>F</td>
    <td>F</td>
  </tr>
  <tr>
    <td>F</td>
    <td>V</td>
    <td>V</td>
    <td>F</td>
  </tr>
  <tr>
    <td>F</td>
    <td>V</td>
    <td>F</td>
    <td>V</td>
  </tr>
  <tr>
    <td>F</td>
    <td>F</td>
    <td>V</td>
    <td>F</td>
  </tr>
  <tr>
    <td>F</td>
    <td>F</td>
    <td>F</td>
    <td>V</td>
  </tr>
</table>

## Valor Interpretação (I)
-	I(A⋀B) == V
    -	Significado: Somente quando A == V e B == V.
        - Seria a intersecção dos conjuntos nesse caso.
## Equivalência Lógica (≡)
- Duas lógicas são logicamente equivalentes se apresentam os mesmos valores em suas tabelas verdades.

<table>
  <tr>
    <td>A</td>
    <td>B</td>
    <td>(A ⋀ B)</td>
    <td>¬ A ⋁ ¬ B</td>
  </tr>
  <tr>
    <td>V</td>
    <td>V</td>
    <td>F</td>
    <td>F</td>
  </tr>
  <tr>
    <td>V</td>
    <td>F</td>
    <td>V</td>
    <td>V</td>
  </tr>
  <tr>
    <td>F</td>
    <td>V</td>
    <td>V</td>
    <td>V</td>
  </tr>
  <tr>
    <td>F</td>
    <td>F</td>
    <td>V</td>
    <td>V</td>
  </tr>
</table>

- Perceba que as duas últimas colunas são iguais entre si, portanto, há uma equivalência lógica entre os dois.
    - Ou seja: (A ⋀ B) ≡ ¬ A ⋁ ¬ B

## Lei de Demorgan

<table>
  <tr>
    <td>¬ ( A ⋀ B ) ≡ ¬ A ⋁ ¬ B</td>
  </tr>
  <tr>
    <td>¬ ( A ⋁ B ) ≡ ¬ A ⋀ ¬ B</td>
  </tr>
</table>	

-	Basicamente, o E vira OU na negativa.

## Conector OU exclusivo (⊕)

-	Não pode ser os ambos ao mesmo tempo:
    -	É um ou outro propriamente dito.
    -	I(A ⊕ B) 
        -	Fica A + B menos a intersecção.
