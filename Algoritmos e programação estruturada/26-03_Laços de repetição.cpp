#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>  // para usar caracteres (Exercício 3).

//LOOPS

	// While
		// Mais utilizado com expressões lógicas.
		// Testa a condição de Parada antes de entrar no laço.	
		
	// do While
		// Também mais utilizado com expressões lógicas
		// antes de entrar no laço é feito teste da condição de parada.
	
	// For
		// 

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
//	While

	int a, b;
	
	a = 1;
	b = 10;
	
	while (a < b + 1) {
		printf("%i \n", a);
		a++;
	}
	
	/*
	Exercício 1:
	
	Faça um código que leira e calculo a media de duas notas para uma sala com 10 alunos.
	*/

	
	int numero_alunos, nota;
	
	numero_alunos = 1;
	nota = 0;
	
	while (numero_alunos < 11) {
	printf("Digite a nota do %iº aluno: ", numero_alunos);
		scanf("%i", &nota);
		
		numero_alunos++;
	}
	
	
	/*
	Faça um programa que leia números infinitamente e só pare quando o usuário responder a pergunta? "Deseja continuar (S/N)?"
	*/
	
	
	int numero;
	char parada = 's';

	
	while (parada == 's') {
		
		printf("Digite um número: \n");
		scanf("%i", &numero);
		
		printf("Deseja continuar (s/n): \n");
		parada = getch();
	}
	
	
	/*
	Escreva um código que imprima a tabuada de 1 a 10, de forma organizada e clara.
	*/
	
	int primeiro, segundo;
	
	primeiro = 1;
	segundo = 1;
	
	while (primeiro < 11) {
		
		segundo = 1;

		while (segundo < 11) {
			printf("%i x %i = %i \n", primeiro, segundo, primeiro * segundo);
			segundo++;
		}
		
		primeiro++;
	}
	
	// do While


int num;

do {
	printf("Digite um número: ");
	scanf("%i", &num);
} while (num != 0);


// FOR

/*
for(i =10; i > 0; i++){
	printf()
}

// Com dois parametros:

for (i = 10, j = 0, i > j, i--, j++) {
	
}

// Com parâmetros vazios

for (; i < 10; i++) {
	
}
*/


	
	int a2, b2;

	for (a2 = 1; a2 < 11; a2++) {
	
		for (b2 = 1; b2 < 11; b2++) {
			printf("%i x %i = %i \n", a2, b2, a2 * b2);
		}	
				
	}	
	

	
	int a3;
	
	for (a3 = 1000; a3 > -1; a3--) {
		printf("%i, ", a3);
	}
	
	return 0;	
}
