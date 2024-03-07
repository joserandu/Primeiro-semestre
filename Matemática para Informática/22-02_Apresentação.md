# Aula: Apresentação do Curso - 22/02/2024

## Sobre a Disciplina
- Essa matéria é bastante importante para quem deseja trabalhar na área da Inteligência Artificial, pois essa área envolve bastante calculo.
- Ver o planejamento no moodle.
- Para essa disciplina as contas não interessam tanto, mas sim, os conceitos.
    - Ou seja, é a parte chata da matemática.
- O livro de consulta do curso é: Fundamentos da Matemática Elementar do Gelson Iezzi.
    - Esse livro tem 11 volumes, mas apenas os três primeiros são importantes (são os únicos que o professor sabia da existência).

## Mercado de Trabalho

- Ficar 12 anos na carreira pode não ser muito bom, porque tem um teto de onde você não pode passar.
- (PESQUISAR) Os números complexos não são muito usados na computação convencional, mas está sendo muito estudado na computação quântica que é um mercado que tende a crescer muito daqui a aproximadamente 7 anos, pois os nossos computadores não tem muita velocidade de processamento, diferente desses novos computadores. 

## A linguagem C

- Até para o professor que estava a 12 anos trabalhando como programador em linguagens como COBOL, teve dificuldades para aprender a linguagem C. Portanto, preste atenção.
- Essa linguagem de programação tem poucas palavras chaves (como if, else, not, etc.), não chega nem a 50. No entanto, as dificuldades aparecem na parte semântica do código.

## Resumo das aulas

### Juros Compostos
- Não vai cair na prova, mas se for cair, seremos previamente avisados.
- Número de Euler: 2.71828
    - Esse número é extraído através da fórmula: Cn = (1 + 1/n)^n sendo n um número tendendo ao infinito.
    - Quanto mais a gente aumenta esse número, ele acaba ficando com mais casas após a vírgula.
    - Exercício: Fazer essa fórmula na programação.
         
        ````markdown
        ```python
        cn = (1 + 1 / 500000000000000) ** 500000000000000
        print(cn)
        ````

        - Resultado: 2.7161100340870337

        ````markdown
        ```javascript
        var cn = (1 + 1 / 500000000000000) ** 500000000000000
        console.log(cn)
        ````

        - Resultado: 2.7161100340870337

### Lógica Proposicional/Lógica de Ordem Zero
- Proposição é uma sentença que pode ser verdadeira ou falsa.
    - True / False
-	As palavras especiais e seus símbolos:
    -	e: ⋀
    -	ou: ⋁
    -	se então: →
        -	Se A então B: A → B
    -	se e somente se: ↔
        -	Essa condição só é verdade se apenas um dos dois é verdadeiro.
    - negação: ¬
        - Com a negação, o e vira ou:
            - ¬ (x > 3 ⋀ x < 10) = x ⩽ 3 ⋁  x ⩾ 10
    - ou exclusivo: 

### Lógica de Primeira Ordem/Lógica de Ordem 1

- Expande a sintaxe, é a parte semântica do código.
- Nessa lógica nós temos predicado, o qual assume valores T e F.
    - Ex: A(x) ; A = x é um estudante (sendo x uma variável).
        - Ou seja, se o estudante x estiver contido em uma lista de estudantes, o resultado é verdadeiro.
    - Com mais parâmetros: P(x, y) se x e y forem verdade.
- Palavras especiais e seus símbolos.
    - Perguntar para o professor o porque exatamente a gente está aprendendo símbolos.
        - all: ∀
        - algum: ∃

### Teoria dos conjuntos

- Numero de subconjuntos possíveis: 2^n
    - Ex: {a, b, c}: 1°: {}; 2°: {a}; 3°: {b}; 4°: {c}; 5°: {a, b}; 6°: {a, c}; 7°: {b, c}; 8°: {a, b, c}

### Polinômios

- Explicação das funções e seus graus.

### Análise Combinatória

- Estudaremos permutação, arranjo e combinação.
- Esse tema é importante ao passo que nos prepara para a matéria de Introdução à Otimização Combinatória, a qual a gente verá que as vezes pode existir milhares de formas de resolver um problema, e a análise combinatória pode nos ajudar a escolher um, ou até o, método mais eficaz.
    -	Isso pode poupar a gente de perder várias horas de trabalho.

### Vetores

- São listas.
-	Dentro de uma lista (vetor) pode existir outros listas (vetores).
    -	São os arrays multidimensionais.

