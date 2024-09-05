#include <stdio.h>
#include <locale.h>

// VETORES (Arrays unidimensionais)

int main(void) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int A[10];
	
	for(int i = 0; i < 10; i++) {
		
		A[i] = i * 2;
		
		printf("%d\n", A[i]);
		
	}
	
	printf("\n-------------------------------------------------------------------\n");

	
	int vetor[10];
	int i;
	
	// Iniciando o vetor
	for(i=0; i<10; i++) 
		vetor[i] = i * 2;

	// Saída (Impressão)
	for(i=0; i<10; i++)
		printf("%d ", vetor[i]);

	printf("\n-------------------------------------------------------------------\n");
	
	/*
	Faça um código que receba uma sequência de 5 números e depois imprima eles invertendo na tela:
	ex: 5 7 4 2 5 -> 5 2 4 7 5
	*/
	
	/*
	int num[5];
	
	for(i = 0; i < 5; i++){
		printf("Digite o %iº número: ", i + 1);
		scanf("%i", &num[i]);
	}
	
	for (i = 4; i >= 0; i--)
		printf("%i ", num[i]);
	*/

	printf("\n-------------------------------------------------------------------\n");

	/*
	Faça um algoritmo que calcule a media aritmérica para cada aluno de uma turma de 20 alunos.
	*/
	
	float M[19];
	int S = 0;
	//int notas[19];
	float p[2];
	
	printf("Coloque em sequência as notas dos 20 alunos:\n");
	
/*
	for (int a=0; a<2; a++) {

		for (i=0; i<2; i++) {
			printf("Digite a nota p%i: ", i + 1);
			scanf("%f", &p[i]);
		}
		
		M[a] = (p[0] + p[1]) / 2;
		
		printf("%f\n", M[a]);

	}
	
	for (int a=0; a<2; a++)
		printf("%f ", M[a]);
*/
		
	printf("\n-------------------------------------------------------------------\n");

	float L[9];
	float m, s = 0;
	
	for (i = 0; i < 10; i++) {
		scanf("%f", &L[i]);
	}
	
	for (i = 0; i < 10; i++) {
		s = s + L[i];
	}
	
	m = s / 10;
	
	for (i = 0; i < 10; i++) {
		if (L[i] > m) {
			printf("%f ", L[i]);
		}
	}
	
}
