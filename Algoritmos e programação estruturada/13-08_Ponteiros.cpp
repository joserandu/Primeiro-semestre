#include <stdio.h>
#include <locale.h>

// PONTEIROS

void soma(int, int, int *);
void trocar(int, int);

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int A, *B;  // Indicação de ponteiro
	
	A = 10;
	
	printf("%i", &A);  // Endereço  -  & indica ponteiro
	printf("%x", &A);  // Endereço em hexadecimal
	
	printf("\n\n");
	
	B = &A;
	
	printf("%i", *B);  // Conteúdo apontado pelo ponteiro;
	
	int a;  // Variavel inteira
	int *b;  // Ponteiro para inteiro
	int **c;  // Ponteiro para ponteiro
	
	
	a = 10;
	b = &a;
	c = &b;
	
	printf("\n------------------------------------------------------------\n");
	
	printf("%i\n", a);
	printf("%i\n", &a);
	printf("%i\n", b);  // Mesmo resultado de &a
	
	*b = 30;
	
	printf("%i\n", a);
	printf("%i\n", &a);
	printf("%i\n", b);
	
	**c = 40;
	
	printf("%i\n", a);
	printf("%i\n", &a);
	printf("%i\n", b);
	
	printf("\n------------------------------------------------------------\n");

	int x;
	int y;
	int z;
	
	x = 10;
	y = 20;
	z = 0;
	
	soma (x, y, &z);
	
	printf("%i + %i = %i", x, y, z);
	
	printf("\n------------------------------------------------------------\n");

	// CRIANDO UMA VARIÁVEL PONTEIRO PARA O ARQUIVO
	
	FILE *arq;
	int a = 10;
	
	// Abrindo um arquivo
	arq = fopen("arquivo.txt", "a");  // nome, tipo
	
	scanf("%i", &a);
	
	// Mensagem para o usuário
	fprintf(arq, "O arquivo foi criado com sucesso! %i", a);
	
	// Fechando arquivo
	fclose(arq);

	printf("\n------------------------------------------------------------\n");
	
	int a2 = 10;
	int b2 = 20;
	
	printf("A=%i - B=%i\n", a2, b2);
	//trocar(&a2, &b2);
	printf("A=%i - B=%i\n", a2, b2);
	
}

void soma(int X, int Y, int *Z){
	
	*Z = X + Y;  // Precisa colocar o ponteiro
	
}

void trocar(int *a2, int *b2){
	int aux;
	
	aux = *a2;
	*a2 = *b2;
	*b2 = aux;
}

/*
Agenda do curso:

27/08 - Prova 2
03/09 - Prova substitutiva
03/09 - IFA
*/
