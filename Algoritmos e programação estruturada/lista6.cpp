#include <stdio.h>
#include <locale.h>

// Lista 6 de exercícios executados em sala de aula:


int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Exercício 1 ------------------------------------------------------------\n");
	
	/*
	Ler 2 matrizes A e B, cada uma delas de 2D com 5 linhas e 3
	colunas. Criar uma matriz C de mesma dimensão, onde C é formada
	pela soma dos elementos da matriz A com os elementos da matriz B.
	Exibir essa matriz.
	*/
	
	int A[5][3], B[5][3], C[5][3];
	int i, j;

	// Criação de A, B e C
	for (i = 0; i<5; i++){
		for (j = 0; j<3; j++){
			A[i][j] = i + j;
			B[i][j] = i * j;
			
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	
	// Impressão da matriz C
	for (i = 0; i<5; i++){
		for (j = 0; j<3; j++){
			printf("%i ", C[i][j]);
		}
		printf("\n");
	}
	
	printf("\nExercício 2 ------------------------------------------------------------\n");

	/*
	Ler 2 matrizes A e B, cada uma com 1D para 7 elementos. Criar
	uma matriz C de 2D, onde a 1ª coluna deverá ser formada pelos
	elementos da matriz A e a 2ª coluna deverá ser formada pelos
	elementos da matriz B. Exibir a matriz C.
	*/
	
	int A2[7], B2[7], C2[7][2]; 
	
	for (i = 0; i<7; i++){
		
			A2[i] = i;
			B2[i] = i * 10;
			
			C2[i][0] = A2[i];
			C2[i][1] = B2[i];
	
	}
	
	for (i = 0; i<7; i++){
		for (j = 0; j<2; j++){
			printf("%i ", C2[i][j]);
		}
		printf("\n");
	}
	
	printf("\nExercício 3 ------------------------------------------------------------\n");

	/*
	Ler uma matriz A de 1D com 10 elementos. Criar uma matriz B de
	2D com 3 colunas, onde:
	
	- a 1ª coluna da matriz B é formada pelos elementos da matriz A
	somados com mais 5;
	
	- a 2ª coluna é formada pelo valor do cálculo da fatorial de cada
	elemento correspondente da matriz A;
	
	- a 3ª coluna deverá ser formada pelos quadrados dos elementos
	correspondentes da matriz A.
	
	Exibir a matriz B.
	*/
	
	int A3[10], B3[10][3]; 
	int r;

	
	// Matriz A
	for (i = 0; i < 10; i++){
		
		A3[i] = i;
		
		// 1ª Coluna
		B3[i][0] = A3[i] + 5;
		
		// 2ª Coluna
		r = 1;
		for (j = 1; j<=A3[i]; j++){
			r = r * j;
		}
		B3[i][1] = r;
		
		// 3ª Coluna
		B3[i][2] = A3[i] * A3[i];
	}

	for (i = 0; i<10; i++){
		for (j = 0; j<3; j++){
			printf("%i ", B3[i][j]);
		}
		printf("\n");
	}

	printf("\nExercício 4 ------------------------------------------------------------\n");
	
	
	


}
