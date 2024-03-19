#include <stdio.h> // os includes incluem bibliotecas.
#include <locale.h>
#include <stdlib.h>


int main(void){  // Void é uma palavra reservada que indica "vazio".
	setlocale(LC_ALL, "Portuguese");
	
	printf("Hello, World!\n");
	
	//int a, b;
	
	
	char *nomeProfessor;
	char *nomeAluno;
	
	nomeProfessor = "Oscar";
	nomeAluno = "Crestão";
	
	printf("%s.\n", nomeProfessor);
	printf("%s.\n\n", nomeAluno);
	
	printf("Calculando Velocidade média ---------------------------\n\n");
	
	float espaco, tempo, velocidadeMedia;
	
	printf("Digite o Espaço: \n");
	//scanf("%f", &espaco);
	
	printf("Digite o Tempo: \n");
	//scanf("%f", &tempo);
	
	velocidadeMedia = espaco / tempo;
	
	printf("A velocidade média é %f.\n", velocidadeMedia);
	
	// Para limpar a tela
	system("cls"); 
	
	printf("Declaração de string ----------------------------------\n\n");
	
	
	
	printf("Dois números e imprima o maior--------------------------\n\n");
	
	int num1, num2, maior, menor;
	
	printf("Escreva um número: ");
	scanf("%d", &num1);
	
	printf("Escreva outro número: ");
	scanf("%d", &num2);
	
	if (num1 > num2){
		maior = num1;
	} else {
		maior = num2;
	}
	
	if (num1 < num2){
		menor = num1;
	} else {
		menor = num2;
	}	
	
	printf("O maior número é: %i.\n", maior);
	printf("O menor número é: %i.\n\n", menor);
	
}
