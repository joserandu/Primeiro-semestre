from math import pi

print('Exercício 1 ---------------------------------------------------------------------------------------------------')

"""
Crie um programa que permita fazer a conversão cambial entre Reais e Dólares.
Considere como taxa de câmbio US$1,00 = R$2,40. Leia um valor em Reais pelo
teclado e mostre o correspondente em Dólares.
"""

valor_em_reais = 100

conversao_dolares = valor_em_reais / 2.4

print(f'{valor_em_reais} reais equivalem a {conversao_dolares} dólares.')

print('Exercício 2 ---------------------------------------------------------------------------------------------------')

"""
Crie um programa que permita fazer a conversão cambial entre Dólares e Reais.
Considere como taxa de câmbio US$1,00 = R$2,40. Leia um valor em Dólares pelo
teclado e mostre o correspondente em Reais.
"""

valor_em_dolares = 50

conversao_reais = valor_em_dolares / 2.4

print(f'{valor_em_dolares} dólares equivalem a {conversao_reais} reais.')

print('Exercício 3 ---------------------------------------------------------------------------------------------------')

"""
Calcule quantos azulejos são necessários para azulejar uma parede. É necessário
conhecer a altura da parede (AP), a sua largura (LP), e a altura do azulejo (AA) e sua
largura (LA). Leia os dados através do teclado.
"""

ap = 2.5
lp = 5
aa = 1
la = 0.5

area_parede = ap * lp
area_azulejo = aa * la

qtd_azulejos = area_parede / area_azulejo

print(f'Você irá precisar de pelo menos {qtd_azulejos} azulejos')

print('Exercício 4 ---------------------------------------------------------------------------------------------------')

"""
Faça um programa que, a partir das medidas dos lados de um retângulo, lidos via
teclado, calcule a área e o perímetro deste retângulo.
"""

a = 3
b = 5

area_retangulo = a * b
perimetro_retangulo = 2 * a + 2 * b

print(f'Area: {area_retangulo} ua²; Perímetro: {perimetro_retangulo} ua.')

print('Exercício 5 ---------------------------------------------------------------------------------------------------')

"""
A condição física de uma pessoa pode ser medida com base no cálculo do IMC,
Índice de Massa Corporal, o qual é calculado dividindo-se a massa da pessoa ( em kg)
pela altura da mesma (h em m) elevada ao quadrado (IMC= m/h2). Escreva um
programa que leia a massa e a altura de uma pessoa, calcule e mostre o IMC.
"""

h = 1.70
m = 100

imc = m / h ** 2

print(f'O valor do IMC é de {imc}')

print('Exercício 6 ---------------------------------------------------------------------------------------------------')

"""
Dado o valor do raio (r) de uma circunferência, elaborar um programa para calcular
e imprimir sua área (A) e o seu comprimento (C). A fórmula da área do círculo é A=_ r2
e do comprimento é C=2_r.
"""

r = 5

area_circunferencia = pi * r ** 2
comprimento_circunferencia = 2 * pi * r

print(f'Área da circunferência: {area_circunferencia}ua²; Comprimento da circunferência: '
      f'{comprimento_circunferencia}ua.')

print('Exercício 7 ---------------------------------------------------------------------------------------------------')

"""
Elaborar um programa para calcular e exibir o volume (V) de uma esfera e a área
(A) de sua superfície, dado o valor de seu raio (R). A fórmula do volume da esfera é
V=4/3 _ R3 e da área é A=4_ R2.
"""

r = 10

volume_esfera = (4 / 3) * pi * r ** 3
area_esfera = 4 * pi * r ** 3

print(f'Volume: {volume_esfera}ua³; Área: {area_esfera}ua²')

print('Exercício 8 ---------------------------------------------------------------------------------------------------')

"""
Faça um programa para calcular a média final de um aluno, supondo-se que há
quatro notas bimestrais durante o ano e que esta é calculada através de uma média
aritmética simples (todos os bimestres têm o mesmo peso).
"""

n1 = 5
n2 = 8
n3 = 7
n4 = 2

media = (n1 + n2 + n3 + n4) / 4

print(f'A média do aluno foi: {media}')

print('Exercício 9 ---------------------------------------------------------------------------------------------------')

"""
O critério de avaliação semestral de determinada escola segue a regra:
P1 – primeira avaliação do semestre.
P2 – segunda avaliação do semestre.
Ativ – nota atribuída pelas atividades realizadas no semestre.
Média = P1 x 4 + P2 x 4 + Ativ x 2
       -----------------------------
                10

Escreva um programa que leia as notas das provas (P1 e P2) e da atividade (Ativ),
calcule e mostre a média, seguindo o cálculo acima.
"""

p1 = 5
p2 = 8
ativ = 8

media_ponderada = (p1 * 4 + p2 * 4 + ativ * 2) / 10

print(f'A média ponderada do aluno foi: {media_ponderada}')

print('Exercício 10 --------------------------------------------------------------------------------------------------')

"""
Elaborar um programa para receber valores, via teclado, nas variáveis "a" e "b".
Após isto, o programa, utilizando-se de uma 3a. variável "c", deverá trocar o conteúdo
das variáveis "a" e "b".
"""

a = 5
b = 6

c = a
a = b
b = c

print(f'a={a}, b={b}')

print('Exercício 11 --------------------------------------------------------------------------------------------------')

"""
(DESAFIO) Idem o programa anterior, sem utilizar-se de uma 3a. variável.
"""

a = 8
b = 4

a = a + b
b = a - b
a = a - b

print(f'a={a}, b={b}')

print('Exercício 12 --------------------------------------------------------------------------------------------------')

"""
Elaborar um programa que receba, via teclado, os valores do espaço percorrido e
do tempo gasto por um veículo em movimento, para calcular e apresentar em tela sua
velocidade média.
"""

distancia = 70
tempo = 1.5

Vm = distancia / tempo

print(f'Vm={Vm}')

print('Exercício 13 --------------------------------------------------------------------------------------------------')

"""
Num laboratório de física, em uma experiência de Movimento Uniformemente
Variado, foram encontrados os seguintes valores: s0=2m, v0=3m/s, a=10m/s2.
Digitado o valor de t (segundos), apresentar em tela o valor de s (metros). Dada a
fórmula:
s = s0 + v0 . t + 1⁄2 . a . t2
"""

t = 7

s = 2 + 3 * t + (1 / 2) * a * t ** 2

print(f'O espaço percorrido foi: {s}m')
