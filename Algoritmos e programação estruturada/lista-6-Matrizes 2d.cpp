#include <stdio.h>
#include <locale.h>

// LISTA 6 | EXERCÍCIOS DE MATRIZES 2D

// Exercicios Executados em sala de aula

int main(void){
	setlocale(LC_ALL, "Portuguese");
	

	
	printf("\nExercício 1 ---------------------------------------------------------\n");

	/*
	Ler 2 matrizes A e B, cada uma delas de 2D com 5 linhas e 3
	colunas. Criar uma matriz C de mesma dimensão, onde C é formada
	pela soma dos elementos da matriz A com os elementos da matriz B.
	Exibir essa matriz.
	*/
	
	int A[5][3], B[5][3], c[5][3];
	
	for(int i = 0; i<5; i++) {
		
		for (int j = 0; j<3; j++){	
			
			A[i][j] = j + i;
			B[i][j] = j * i;
			c[i][j] = A[i][j] + B[i][j];
			printf("%i ", c[i][j]);
	
		}
		
	printf("\n");
	
	}

	printf("\nExercício 2 ---------------------------------------------------------\n");

	/*
	Ler 2 matrizes A e B, cada uma com 1D para 7 elementos. Criar
	uma matriz C de 2D, onde a 1ª coluna deverá ser formada pelos
	elementos da matriz A e a 2ª coluna deverá ser formada pelos
	elementos da matriz B. Exibir a matriz C.
	*/

/*
	for(int i = 0; i<7; i++) {
		
		for (j = 0; j<3; j++){	
			
			A[i][j] = j + i;
			B[i][j] = j * i;
			c[i][j] = A[i][j] + B[i][j];
			printf("%i ", c[i][j]);
	
		}
		
	printf("\n");
	
	}
*/
	
	int a[7], b[7];
	int c1[7][2];
	
	for (int i = 0; i<7; i++){
		a[i] = i + 2;
		printf("%d ", a[i]);
	}
	
	printf("\n");

	
	for (int i = 0; i<7; i++){
		b[i] = i + 3;
		printf("%d ", b[i]);
	}
	
	printf("\n");
	printf("\n");



	for (int i = 0; i<7; i++){
			
			c1[0][i] = a[i];
			c1[1][i] = b[i];
		
	}
		
	for (int i = 0; i<2; i++){
		for (int j = 0; j<7; j++){
			printf("%i ", c1[i][j]);
		}
		
	printf("\n");

	
	}
	printf("\n");

	printf("\nExercício 3 ---------------------------------------------------------\n");

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
	
	int A2[10];
	int B2[3][10];
	int res;
	
	for (int i = 0; i<10; i++){
		A2[i] = i;
	}

	for (int i = 0; i<10; i++){
		
		//1ª coluna
		B2[0][i] = A2[i] + 5;
		
		// 2ª coluna
		
		res = 1;
		
		for (int j = 1; j<=A2[i]; j++) {
			res = res * j;
		}
		
		B2[1][i] = res;
				
		// 3ª coluna
		B2[2][i] = A2[i] * A2[i];
	}
	
	for (int i = 0; i<3; i++){
		for (int j = 0; j<10; j++) 
		{
			printf("%d ", B2[i][j]);
		}
		printf("\n");
	}
		
	printf("\nExercício 4 ---------------------------------------------------------\n");

	/*
	Ler 2 matrizes A e B, cada uma com 1D para 4 elementos. Criar
	uma matriz C de 2D, onde a 1ª coluna da matriz C deverá ser formada
	pelos elementos da matriz A multiplicados por 2 e a 2ª coluna deverá
	ser formada pelos elementos da matriz B subtraídos de 5. Exibir a
	matriz C.
	*/
	
	int A3[4], B3[4];
	int C3[2][4];
	
	// Montagem das matrizes
	
	for (int i = 0; i<4; i++) {
	
			A3[i] = i * 2;
			B3[i] = i * 3;
		
	}
	
	// Matriz C
	
	for (int i = 0; i<4; i++) {
		C3[0][i] = A3[i] * 2;		
		C3[1][i] = B3[i] - 5;
	}
	
	// Impressão
	
	for (int i = 0; i<4; i++) {
		printf("%i %i \n", C3[0][i], C3[1][i]);
	}
		
}

