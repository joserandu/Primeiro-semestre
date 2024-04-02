/*Bibliotecas*/
#include  <stdio.h>
#include  <conio.h>

/*
VETOR
	
Matriz unidimencional

- Todos os vetores começam na posição 0.
	
- Sintaxe: 
	- tipo nome[qtd];
	- Ex: float notas[10];
	
Vetor de char (string):

- Sintaxe:
	- char nome[99];
	
	 
*/
	

/*Corpo do programa*/
int main () {
	
	char nome[99] = "Evandro"; 
	int i;
	
	//Imprimindo parte de uma string
	for (i = 0; i < 3; i++) {
		printf("%c", nome[i]);
	}

	/*
	Para acessar a infomação de um vetor basta usar o nome do vetor com o indice de acesso.
	*/
	
	printf("\n-----------------------------------------------------------\n");

	//Fazendo e imprimindo vetor com for
	int vetor[10];
	int i2;
	
	for (i2 = 0; i2 < 10; i2++)
		vetor[i2] = i2 * 2;
		
	for (i2 = 0; i2 < 10; i2++)
		printf("%i\n", vetor[i2]);

	printf("\n-----------------------------------------------------------\n");

	//Fazendo e imprimindo vetor com while
	while (i2 < 10) {
		vetor[i2] = i2 * 2;
		i2++;
	}
	
	i2 = 1;
	
	while (i2 < 10) {
		printf("%i\n", vetor[i2]);
		i2++;
	}
	
	printf("\n-----------------------------------------------------------\n");

	int A[9], B[9], C[9];
	int i3;
	
	//Minha resolução
	for (i3 = 0; i3 < 10; i3++) {
		A[i3] = i3 * 2;
	}
	
	for (i3 = 0; i3 < 10; i3++) {
		B[i3] = i3 * 3;
	}
	
	for (i3 = 0; i3 < 10; i3++) {
		C[i3] = A[i3] + B[i3];
		printf("%i\n", C[i3]);
	}
	
	printf("\n-----------------------------------------------------------\n");

	//Resolução menos verbosa
	for (i3 = 0; i3 < 10; i3++) {
	
		A[i3] = i3 * 2;
		B[i3] = i3 * 3;
		C[i3] = A[i3] + B[i3];
		
		printf("%i\n", C[i3]);
	}
	
	

}

/*
Na prova não vai cair vetores.
*/
