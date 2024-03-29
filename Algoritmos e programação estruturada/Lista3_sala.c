#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Exercício 1 -------------------------------------------------\n\n");
	
	/*
	- Exibir todos os valores numéricos inteiros ímpares situados na faixa de 
	0 a 20. Para verificar se o número é ímpar, efetuar dentro da malha a 
	verificação lógica dessa condição com a instrução SE, perguntando se o 
	número é ímpar, sendo, exiba-o, não sendo, passe para o próximo passo.
	*/
	
	int numero;
	
	for (numero = 1; numero < 20; numero++) {
		if (numero % 2 != 0) {
			printf("%i \n", numero);
		}
	}
	
	printf("\n");
	
	printf("Exercício 2 -------------------------------------------------\n\n");
	
	/*
	Exibir o total da soma obtido dos cem primeiros números inteiros
	(1+2+3+4+5+.....+97+98+99+100).
	*/
	
	int number, soma;
	
	soma = 0;
	
	for (number = 1; number < 101; number++) {
		soma = soma + number;
	}
	
	printf("%d\n\n", soma);
	
	printf("Exercício 3 -------------------------------------------------\n\n");
	
	/*
	Exibir os resultados de uma tabuada de um número qualquer. Essa deverá
	ser impressa no seguinte formato:
	2 X 1 = 2
	2 X 2 = 4
	(...)
	2 X 10 = 20
	*/
	
	int a, b;
	
	printf("Digite um número para ver a sua tabuada: ");
	scanf("%i", &a);
	
	for (b = 1; b < 11; b++) {
		printf("%i X %i = %i\n", a, b, a * b);
	}
	
	printf("\n");

	printf("Exercício 4 -------------------------------------------------\n\n");

	/*
	Ler um número N qualquer menor ou igual a 50 e exibir o valor obtido da
	multiplicação sucessiva de N por 3 enquanto o produto for menor que 250 
	(N*3, N*3*3, N*3*3*3, etc.)
	*/
	
	int N, produto;
	
	printf("Digite um número: ");
	scanf("%i", &N);
	
	if (N < 50) {
		for (produto = N; produto < 250; produto *= 3) {
			printf("%i*k", N);
		}
	}
	
	
	/*
	for (produto = N; produto < 250; N * 3) {
		printf("*3");		
	}
	*/
	
	/*
	while (produto < 250) {
		produto = N * 3;
		printf("*3");		
	}
	*/
	
	printf(" = %i\n\n", produto);
	
	printf("Exercício 5 -------------------------------------------------\n\n");
	
	/*
	Exibir todos os números divisíveis por 4 que sejam menores que 200. Use a
	instrução Se dentro da malha do programa. A variável Contador deverá iniciar
	com o valor 1.
	*/
	
	int contador;
	
	printf("1");
	
	for (contador = 2; contador < 200; contador++) {
		if (contador % 4 == 0) {
			printf(", %i", contador);
		}
	}
	
	printf(".\n\n");
	
	printf("Exercício 6 -------------------------------------------------\n\n");
	
	/*
	Exibir os quadrados dos números inteiros de 15 a 200.
	*/
	
	int a2;
	
	for (a2 = 15; a2 < 201; a2++) {
		printf("%a", a^2);
	}
	
	printf("\n\n");

	printf("Exercício 7 -------------------------------------------------\n\n");
	
	/*
	Exibir as potencias e 3 variando de 0 a 15. Deve ser considerado que
	qualquer número elevado a zero é 1 e elevado a 1 é ele mesmo.
	3 elevado a 0 = 1
	3 elevado a 1 = 3
	(...)
	3 elevado a 15 = 14348907
	*/
	
	int potencia;

	for (potencia = 0; potencia < 15; potencia++) {
		printf("3 elevado a %i = %i\n", potencia, 3 ^ potencia);
	}

	printf("\n");
	
	printf("Exercício 8 -------------------------------------------------\n\n");

	/*
	Crie um programa que exiba a série de Fibonacci até o décimo quinto
	termo. A série de Fibonacci é formada pela seqüência: 1, 1, 2, 3, 5, 8, 13, 21,
	34....etc. Essa série se caracteriza pela soma de um termo posterior com seu
	anterior subseqüente.
	*/

	int A1, A2, A3;
	
	for (A1 = 1; A1 < 16; A1++) {
		A3 = A1 + A2;
		printf(" ,%i", A3);
	}

}

