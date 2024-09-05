#include <stdio.h>
#include <locale.h>

/*
ASSUNTOS DA PROVA

Seleção
Repetição
Vetores (Matriz unidimensional)
Matrizes (Matriz bidimensional)
Ponteiros
Modularização (funções ou rotinas)
	- Passagem de parametros (por valor e por referência)
	- Variáveis (locais e globais)
	- tipo de retorno
arquivo

*/

void troca(int *x, int *y);

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	FILE *arquivo;
	int A = 10, B = 20;
	
	troca(&A, &B);
	
	arquivo = fopen("arquivo.txt", "w");
	fprintf(arquivo, "%i - %i", A, B);
	
}


void troca(int *A, int *B){
	int aux;
	
	aux = *A;
	*A = *B;
	*B = aux;
}
