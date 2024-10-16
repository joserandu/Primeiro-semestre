# include <stdio.h>
# include <locale.h>

// Ponteiros

//void testeVariavel(int);
//void testePonteiro(int);

int main() {
	setlocale(LC_ALL, "Portuguese");

	printf("Aula 7 ---------------------------------------------------------------------\n\n");
	
	// Passando ponteiros para funções
	
	void testeVariavel (int x);  // Poderia ter declarado no começo, mas coloquei aqui pra ficar diferente.
	void testePonteiro (int *pX);
	int teste = 1;
	int *pTeste = &teste;
	
	printf("%i\n", teste);
	
	testeVariavel(teste);
	
	printf("%i\n", teste);
	
	testePonteiro(pTeste);  // Sem o asterisco porque queremos passar o endereço para a função.

	printf("%i\n", teste);  // Agora sim vai alterar.
	
	/*Isso acontece porque quando passamos uma variável para a função, é criada uma cópia dessa variável na memória, ou seja, não alteramos o valor original da variavel
	Mas quando fazemos isso com ponteiros essa cópia não é criada, pois estamos passando um endereço de memória.
	
		Nesse caso estamos passando um endereço de memória para que a função modifique.
		Estamos indo direto na fonte.
		
	Isso serve para que a gente não gaste tanta memória RAM ao chamar funções. Ponteiros ajudam no rendimento da aplicação.
	*/
	
	printf("Aula 8 ---------------------------------------------------------------------\n\n");
	
	struct lista {
		int valor;
		struct lista *proximo;
	};
	
	struct lista m1, m2, m3;
	struct lista *gancho = &m1;
	
	m1.valor = 10;
	m2.valor = 20;
	m3.valor = 30;
	
	m1.proximo = &m2;
	m2.proximo = &m3;
	m3.proximo = (struct lista *)0;  // Isso serve para mostrar que aponta para um valor nulo.
	
	while (gancho != (struct lista *)0) {
		printf("%i\n", gancho->valor);
		gancho = gancho->proximo;
	}
	
	return 0;
}

void testeVariavel(int x) {
	++x;
}

void testePonteiro(int *pX) {  // o parametro é um endereço de memória
	++*pX;
}


