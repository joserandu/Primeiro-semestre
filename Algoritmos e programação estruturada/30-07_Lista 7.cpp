#include <stdio.h>
#include <locale.h>

int main(void) {
	
	/*
	Considerando o cadastro de uma agenda de endereços, nomes, idade e telefones
	de cinco pessoas, defina a estrutura de registro apropriada, o diagrama de blocos e as
	codificações de um programa que efetuem as seguintes tarefas:
	
	1- o cadastramento das informações: nome, endereço, idade e telefone.
	2- a pesquisa da idade.
	3- a classificação por ordem alfabética
	4- a alteração de algum registro que tenha sido fornecido com erro.
	5- sair
	
	O programa em questão deverá ser projetado de tal forma que considere o uso de um
	menu de opções, para que o usuário selecione a opção desejada independentemente
	de uma ordem específica, conforme layout abaixo:
	
	Menu da Agenda:
	Cadastro
	Pesquisa de registro por idade
	Classificação alfabética
	Alteração de registro digitado com erro
	Sair do Menu
	Escolha uma opção:
	*/
	
	char resposta[99][4];
	char cadastro[5][4];
	int i = 0;
	
	// Cadastro das informações do usuário
	
	while (resposta[99] != "s" && i < 4) {
		
		for (int j = 0; j<4; j++) {
			printf("Nome: ");
			scanf("%c", &resposta[i][0]);
			cadastro[i][j] = resposta[i][0];
		
		printf("Endereço: ");
		scanf("%c", &resposta[i][1]);
		
		printf("Idade: ");
		scanf("%c", &resposta[i][2]);
		
		printf("Telefone: ");
		scanf("%c", &resposta[i][3]);
		
		i++;
		
		printf("Deseja sair? (s/n)");
		scanf("%c", &resposta);
		}
		

	}
	
	// 
	
}
