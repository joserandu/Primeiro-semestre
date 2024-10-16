# include <stdio.h>
# include <locale.h>

// Ponteiros

int main() {
	setlocale(LC_ALL, "Portuguese");

	printf("Aula 1 ---------------------------------------------------------------------\n\n");

	
	// Para acessar o Valor
	int x;
	x = 10;
	
	printf("%i\n", x);
	
	// Para acessar o endereço de memória
	
	printf("%i\n", &x);
	
	// Criando um ponteiro
	
	int *ponteiro;  
	ponteiro = &x;  // O ponteiro está apontando para o endereço de memória de x.
	
	printf("%i\n", *ponteiro);  // Será impresso o 10, que é o valor do endereço que o ponteiro está apontando.
	
	printf("%i\n", ponteiro);  // Nesse caso, será impresso o endereço do valor x.
	
	// Exercício
	int y = x;  // Lembrando que x = 10
	
	x = 20;
	
	// Quais valores serão impressos aqui?
	printf("%i | %i\n", x, y);
	
		// Resp: isso aconteceu porque a atribuição do valor de y veio antes da mudança de valor de x.
	
	// Usando ponteiro
	
	x = 10;
	ponteiro = &x;
	
	y = 20;
	*ponteiro = y;
	
	printf("%i | %i\n", x, y);
	
//	O ponteiro mudou o valor do x, pois o valor do ponteiro (*ponteiro) é o valor de x;
	
// Estamos indo na fonte da variável, que é o 


	printf("Aula 2 ---------------------------------------------------------------------\n\n");
	
	int a = 10;
	double b = 20.5;
	char c = 'a';

	int *pA = &a;
	/*Isso poderia ser feito dessa forma também:
		
		int *pX;
		pX = &x  // Perceba que não tem o * nessa linha
		
			Isso acontece porque não queremos que o VALOR armazenado no ponteiro seja o do endereço de x (&x), mas sim o valor de x.
		
	*/
	double *pB;
	pB = &b;
	
	char *pC;
	pC = &c;  // Escrevi assim para fixar a ideia, mas eu prefiro do outro jeito.
	
	printf("Endereço a: %i | Valor a: %i\n", pA, *pA);  // Sem o *, retornamos o endereço
	printf("Endereço b: %i | Valor b: %f\n", pB, *pB);  
	printf("Endereço c: %i | Valor c: %c\n", pC, *pC);  
	
	double soma = *pA + *pB;  // Não tem como somar os endereços de memória
	
	printf("Soma: %f\n", soma);

	int *resultado;
	
	resultado = &a;
	
	printf("Endereço de a: %i\n", resultado);
	printf("Valor de a: %i\n", *resultado);
	
	printf("Aula 3 ---------------------------------------------------------------------\n\n");

	struct horario{
		int hora;
		int minuto;
		int segundo;
	};

	struct horario agora, *depois;
	
	depois = &agora;
	
//	*depois.hora = 20;  // Assim dá errado porque existe a precedencia do ponto sobre o *. Portanto:
	(*depois).hora = 20;
	(*depois).minuto = 20;
	(*depois).segundo = 20;
	
	printf("%i:%i:%i\n", agora.hora, agora.minuto, agora.segundo);  // Se executar sem colocar os valores, serão impressos valores aleatórios que estam na memória.
	
	/*Esse é o jeito certo, mas como os programadores da linguagem acharam que isso da muito trabalho, eles criaram essa coisa linda:*/

	depois->hora = 22;
	depois->minuto = 30;
	depois->segundo = 45;
	
	printf("%i:%i:%i\n", agora.hora, agora.minuto, agora.segundo);  	
	
	printf("Aula 4 ---------------------------------------------------------------------\n\n");

	int somatorio = 1;
	
	struct horario antes;
	
	antes.hora = somatorio + depois->segundo;
	antes.minuto = agora.hora * depois->minuto;
	antes.segundo = depois->minuto + depois->segundo;
	
	/*Não tem nenhuma lógica aqui, foi só pra exemplificar o funcionamento das operações nesse caso.*/
	
	printf("%i:%i:%i", antes.hora, antes.minuto, antes.segundo);  	

	printf("Aula 5 ---------------------------------------------------------------------\n\n");

	struct horario2 {
		int *pHora;
		int *pMinuto;
		int *pSegundo;
	};
	
	struct horario2 hoje;
	
//	Agora que criamos os ponteiros, precisamos de variáveis para eles apontarem

	int hora = 200;
	int minuto = 300;
	int segundo = 400;
	
	hoje.pHora = &hora;
	hoje.pMinuto = &minuto;
	hoje.pSegundo = &segundo;
	
	printf("Hora: %i\nMinuto: %i\nSegundo: %i\n\n", *hoje.pHora, *hoje.pMinuto, *hoje.pSegundo);  // No printf funciona desse jeito e não funciona o ->
	
	// Alterando valor
	*hoje.pSegundo = 1000;
	
	printf("Hora: %i\nMinuto: %i\nSegundo: %i\n", *hoje.pHora, *hoje.pMinuto, *hoje.pSegundo);
	
	/*
	O que acontece é que o formato de seta serve para atribuir valores, como por exemplo:
	
	(*hora).segundo = 25; Passa a ser:
	hora->segundo = 25;
	
	Tente imaginar o que seria escrito da forma feia 
	*/

	
	return 0;
}






