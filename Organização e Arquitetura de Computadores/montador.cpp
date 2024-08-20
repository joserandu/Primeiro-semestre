#include <stdio.h>
#include <locale.h>

/*
ASSUNTOS DA PROVA

- Seleção
- Repetição
- Vetores (Matriz unidimensional)
- Matrizes (Matriz bidimensional)
- Ponteiros
- Modularização (funções ou rotinas)
	- Passagem de parametros (por valor e por referência)
	- Variáveis (locais e globais)
	- tipo de retorno
- Arquivo
- Struct com gravação em arquivo
- Vetor de struct
- Ordenação de struct

*/

void troca(int *x, int *y);

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	// Exercício 1
	FILE *arquivo;
	int A = 10, B = 20;
	
	
	troca(&A, &B);
	
	arquivo = fopen("arquivo.txt", "w");
	fprintf(arquivo, "%i - %i", A, B);
	
	// Exercício 2
	FILE *arquivo2;
	char resp[100][100];
	int i = 0;
	/*
	//while(resp[i] != "N") {
		for (i = 0; i < 100; i++ || resp[i] != "N"){
			printf("Digite o %i nome: ", i + 1);
			scanf("%s", &resp[i]);
		}
//	} */

	while (resp[i - 1] != "N") {
		
		printf("Digite o %iº nome: ", i + 1);
		scanf("%s", &resp[i]);
		
		i++;
	}
/*
	for (int j = 0; j < i; j++) {
		arquivo2 = fopen("CADASTRO.txt", "w");
		//fprintf(arquivo2, "%s", "w");
	}
	
	//arquivo2 = fopen("CADASTRO.txt", "w")
*/	
}


void troca(int *A, int *B){
	int aux;
	
	aux = *A;
	*A = *B;
	*B = aux;
}

