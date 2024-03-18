#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Exercício 1 ---------------------------------------------------------------\n");
	
	/*
		Elaborar um programa em que informe se o número digitado pelo usuário é par ou
	impar.
	*/
	
	int n;
	
	printf("Digite um número para ver se ele é par ou ímpar: ");
	scanf("%d", &n);
	
	if(n % 2 == 0){
		printf("%d é um número par.\n\n", n);
	} else {
		printf("%d é um número ímpar.\n\n", n);
	}
	
	printf("Exercício 2 ---------------------------------------------------------------\n\n");

	/*
		Digitado um número inteiro entre 0 e 100, informar o quanto ele está distante de um
	determinado número chave, carregado no próprio programa. Ex.: Número chave=20,
	número digitado=15, resposta=5. Número chave=17, número digitado=20, resposta=3
	(Obs.: a resposta deverá ser sempre um número positivo).
	*/
	
	int num, chave;
	
	chave = 80;
	
	printf("Digite um número inteiro entre 1 e 100: ");
	scanf("%d", &num);
	
	
	if(num == chave){
		printf("Você acertou o número!\n\n");
	} else if (num < chave) {
		printf("A distancia do número chave é: %d.\n\n", chave - num);
	} else {
		printf("A distancia do número chave é: %d.\n\n", num - chave);
	}

	printf("Exercício 3 ---------------------------------------------------------------\n\n");

	/*
		Uma Universidade tem problemas com arredondamento das médias dos alunos,
	pois cada professor estipula um critério de arredondamento. Devemos elaborar um
	programa, em Linguagem C++, para a secretaria da Universidade, resolvendo esse
	problema. O programa deve solicitar uma nota e fazer o devido arredondamento.
	Regras:
	Notas que ultrapassem 0,5 de resto serão arredondas para CIMA.
		Ex: 4,6 –>5,0
	Notas que abaixo ou igual a 0,5 de resto serão arredondas para BAIXO.
		Ex: 4,5 –> 4,0
	*/
	
	float nota, decimal;
	
	printf("Digite a nota para arredondar: ");
	scanf("%f", &nota);
	
	int nota_inteira = nota;
	
	decimal = nota - nota_inteira;
	
	if (decimal > 0.5){
		printf("A nota arredondada é %d. \n\n", nota_inteira + 1);
	} else {
		printf("A nota arredondada é %d. \n\n", nota_inteira);
	}
	
	printf("Exercício 4 ---------------------------------------------------------------\n\n");

	/*
		Faça um programa que leia 3 números e exiba:
	a) O maior número;
	b) O menor número;
	c) O número do meio
	*/
	
	float num1, num2, num3;
	
	printf("Digite o primeiro número: ");
	scanf("%f", &num1);
	
	printf("Digite o segundo número: ");
	scanf("%f", &num2);
	
	printf("Digite o terceiro número: ");
	scanf("%f", &num3);
		
	// Item a
	if (num1 > num2 && num1 > num3){
		printf("O maior número é o %.2f.\n", num1);
	} else if (num2 > num1 && num2 > num3) {
		printf("O maior número é o %.2f.\n", num2);
	} else {
		printf("O maior número é o %.2f.\n", num3);
	}
	
	// Item b
	if (num1 < num2 && num1 < num3){
		printf("O menor número é o %.2f.\n", num1);
	} else if (num2 < num1 && num2 < num3) {
		printf("O menor número é o %.2f.\n", num2);
	} else {
		printf("O menor número é o %.2f.\n", num3);
	}
	
	// Item c
	if (num1 > num2 && num1 < num3 || num1 < num2 && num1 > num3) {
		printf("O número do meio é: %.2f.\n\n", num1);
	} else if (num2 > num1 && num2 < num3 || num2 < num1 && num2 > num3) {
		printf("O número do meio é: %.2f.\n\n", num2);
	} else {
		printf("O número do meio é: %.2f.\n\n", num3);
	}
	
	printf("Exercício 5 ---------------------------------------------------------------\n\n");

	
	/*
		Faça o programa que calcule o salário líquido dos funcionários de uma empresa. O
	salário líquido é composto por descontos e adicionais, seguindo as seguintes regras:
	
	Descontos:
	
	- Salário bruto < 800,00 – não realizar nenhum desconto;
	- 800,00 <= Salário bruto <=1600,00 – descontar 8% de Imposto de Renda e 5% de encargos.
	- >1600,00 – descontar 15% de Imposto de Renda e 7% de encargos.
	
	Adicionais:
	
		Caso o funcionário tenha trabalhado mais de 160 horas no mês, divida o seu salário
	bruto por 160 (representa horas trabalhadas) e calcule 50% de adicional nas horas
	que excederam a 160.
		O usuário deverá digitar o salário bruto e o número de horas trabalhadas no mês de
	cada funcionário, e deverá receber como resultado o salário líquido. O usuário poderá
	calcular salário para N funcionários, para finalizar o programa o usuário deverá digitar
	0 no salário bruto, ao finalizar o programa exibir o total geral dos salários líquidos.
	*/
	
	float salario, horas, salario_liquido;
	
	
	printf("Digite o salário do funcionário: ");
	scanf("%f", &salario);
	
	printf("Digite o número de horas trabalhadas: ");
	scanf("%f", &horas);
	
	if (salario < 800) {
		salario_liquido = salario;
	} else if (salario > 1600) {
		salario_liquido = salario * 0.78;
	} else {
		salario_liquido = salario * 0.87;
	}
	
	if (horas > 160){
		salario_liquido = salario_liquido + (salario / 160) + 0.5 * (horas - 160);
	}
	
	printf("O salário líquido desse funcionário é R$%.2f.\n\n", salario_liquido);

	printf("Exercício 6 ---------------------------------------------------------------\n\n");

	/*
		Faça um programa que receba como entrada o mês (de 1 a 12) e retorne o nome
	do respectivo mês. 
	*/
	
	int numero_mes;
	
	printf("Digite o número do mês: ");
	scanf("%d", &numero_mes);
	
	char *mes;
	
	switch(numero_mes) {
        case 1:
            mes = "Janeiro";
            break;
        case 2:
            mes = "Fevereiro";
            break;
        case 3:
            mes = "Março";
            break;
        case 4:
            mes = "Abril";
            break;
        case 5:
            mes = "Maio";
            break;
        case 6:
            mes = "Junho";
            break;
        case 7:
            mes = "Julho";
            break;
        case 8:
            mes = "Agosto";
            break;
        case 9:
            mes = "Setembro";
            break;
        case 10:
            mes = "Outubro";
            break;
        case 11:
            mes = "Novembro";
            break;
        case 12:
            mes = "Dezembro";
            break;
        default:
            mes = "Mês Inválido";
            break;
	
	}
	
	printf("O mês %d é o mês de %s.\n\n", numero_mes, mes);
	
	printf("Exercício 7 ---------------------------------------------------------------\n\n");

	/*
		Entrar um código de acesso a um curso. Se o código for 1, 2,3,4 e 5 exibir na tela
	Engenharia, Edificações, Sistemas Elétricos, Turismo e Análise de Sistemas
	respectivamente; caso contrário exibir que o código é inválido. 
	*/
	
	int codigo;
	char *curso;
	
	printf("Digite o código do curso: ");
	scanf("%d", &codigo);
	
	switch (codigo) {
		case 1:
			curso = "Engenharia";
			break;
		case 2:
			curso = "Edificações";
			break;
		case 3:
			curso = "Sistemas Elétricos";
			break;
		case 4:
			curso = "Turismo";
			break;
		case 5:
			curso = "Análise de Sistemas";
			break;
		default:
			curso = "Código Inválido";
			break;
	}
	
	printf("%s.", curso);
	
	return 0;
}

