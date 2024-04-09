#include <stdio.h>
#include <locale.h>

// REVISÃO

// Comentário de linha

/*
Comentário
de 
bloco
*/


int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
//	ESTRUTURAS CONDICIONAIS

//	IF/ELSE
	
	int idade = 10;
	
	if (idade >= 20);
		printf("Idade inferior a 20.");
		printf("xx");  // Esse não é considerado dentro do bloco do if, mas imprime.
		
	printf("\n-------------------------------------------------------------\n");
	
	if (idade > 0 && idade < 8) {
		printf("Criança.");
	} else if (idade > 1 || idade < 8) {
		printf("?");
	} else if (idade == 10) {
		printf("10 anos de idade.\n");
	} 
	
	printf("\n-------------------------------------------------------------\n");

//  SWICTH CASE
	
	int chave;
	
	chave = 3;
	
//	printf("Digite um número: ");
//	scanf("%i", &chave);
	
	switch (chave) {
		case 1: 
			printf("Laboratório 1.");
			break;
		case 2:
			printf("Laboratório 2.");
			break;
		case 3:
			printf("Laboratório 3 (INTERDITADO).");
			break;
		default:
			printf("Laboratório não existe.");
			break;
	}
	
	printf("\n\n");
	
//	ESTRUTURAS DE REPETIÇÃO

//	WHILE

	printf("\n-------------------------------------------------------------\n");


	while (chave < 10) {
		printf("%i ", chave);
		chave += 2;
	}
	
	printf("\n");

	
//	DO WHILE
//	Executa pelo menos uma vez.

	int nota = 10;
	
	do {
		nota -= 2;
		printf("%i ", nota);
	} while(nota >= 0);  // Repare que imprime o -2.
	
	
	printf("\n");
	
	nota = 10;
	
	while(nota >= 0) {  // Repare que imprime o -2.
		nota -= 2;
		printf("%i ", nota);  
	}
	
	printf("\n");

	int i, j;

	for (i = 10; i >= 0; i--) {
		printf("%i ", i);
	}
	
	printf("\n");
	
	for (i = 10, j = 0; j < i; j++) {
		printf("%i: ", i);
		printf("%i |", j);
		i--;  // Mesma coisa que colocar no início.
	}
	
	printf("\n\nExercícios -------------------------------------------------------\n\n");
	
	/*
	Construa um loop que inicia em 0 e vai até 100. Toda vez que o valor da variável de controle for multiplo de 2 e de 3 simultaneamente deverá imprimir na tela o valor desta variável.
	*/
	
	int num;
	
	for (num = 0; num <= 100; num++) {
		
		if (num % 2 == 0 && num % 3 == 0) {
			printf("%i ", num);
		}
		
	}
	
	printf("\n\n");
	
	int esporte;
	
	do {
		
		printf("Digite o código do esporte: ");
		scanf("%i", &esporte);
		
		switch (esporte) {
			case 1:
				printf("Natação.\n");
				break;
			case 2:
				printf("Basquetebol.\n");
				break;
			case 3:
				printf("Volei.\n");
				break;
			case 4:
				printf("Atletísmo.\n");
				break;
			case 5:
				printf("Seção encerrada.\n");
				break;
			default:
				printf("Digite um número válido.\n");				
		}
		
	} while (esporte != 5);
	
}

/*
Na prova o que será mais cobrado é a lógica, esquecer ponto e virgula não tira ponto.
*/
