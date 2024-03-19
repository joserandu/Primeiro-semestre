#include <stdio.h> // os includes incluem bibliotecas.
#include <locale.h>
#include <stdlib.h>
#include <string.h>  // Essa serve para fazer a inclusão de strings.


int main(void){  // Void é uma palavra reservada que indica "vazio".
	setlocale(LC_ALL, "Portuguese");
	
	printf("Hello, World!\n");
	
	char *nomeProfessor;
	char *nomeAluno;
	
	nomeProfessor = "Oscar";
	nomeAluno = "Crestão";
	
	// Para limpar a tela
	system("cls");
	
	printf("%s.\n", nomeProfessor);
	printf("%s.\n\n", nomeAluno);
	
	printf("Calculando Velocidade média --------------------------------------------------\n\n");
	
	float espaco, tempo, velocidadeMedia;
	
	printf("Digite o Espaço: \n");
	scanf("%f", &espaco);
	
	printf("Digite o Tempo: \n");
	scanf("%f", &tempo);
	
	velocidadeMedia = espaco / tempo;
	
	printf("A velocidade média é %f.\n", velocidadeMedia); 
	
	printf("Declaração de string ------------------------------------------------------\n\n");
	
	/*
	Tem o jeito mais fácil, como eu fiz agora a pouco. Por mais que seja mais simples, é melhor usar esse:
		Inclusive, mostra um erro no compilador, mas funciona.
	*/
	
	char nome[100];
	int qtd;
	
	strcpy(nome, "André Evandro");
	qtd = strlen(nome);  // função para mostrar quantos caracteres tem em uma string. (provavelmente vinda da biblioteca string.h
	printf("%i.\n", qtd);
	printf("%s.\n", nome);
	
	printf("Dois números e imprima o maior-------------------------------------------\n\n");
	
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
	
	// Com números muito grandes acaba dando erro.
	
	return 0;
	
}
