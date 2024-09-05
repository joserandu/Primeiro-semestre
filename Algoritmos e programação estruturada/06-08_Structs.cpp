#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

// FUNÇÕES, PROCEDIMENTOS E ROTINAS

/*
- Funções não precisam de parâmetros, como a main.
- Procedimento precisa de parâmetro(s).

- É uma forma de dividir o código para reutilização
- Podem retornar valor
- Podem receber parâmetros

tipo nome(tipo, parametros)

Ex: int main(){
	int x;
	((*)) x = funcao();  // Ponto de retorno.
	printf("%i", x);
}

int funcao(){
	int A = 3;
	return A*2;
}

- As funções ficam depois da função int main()

*/

// Declaração da função
int funcao();
void funcao2();  // void não tem retorno.
int funcaoP(int, char *);


// Função principal
int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	int y;
	x = funcao();

	printf("%i ", x);
	funcao2();
	
	// ---------------------------------------------------
	
	        //variaveis locais
        char nome[100];
        int tamanho;

        printf("digite o seu nome");
        gets(nome);

        tamanho = strlen(nome);
        /*
                 ver tambem x = strcmp(a, b) - comparação de strings
                                        = 0 - 'a' é igual 'b'
                                        > 0 -  'a' vem na frente 'b' (ordem alfabeitca)
                                        < - - ao contrario
                 strcpy - copia
                        a = b; // erro
                        strcpy(a, b);

                 strlen - tamanho de uma string

                 strcat - concatenar (juntar 2 strings)
                        a = strcat(a, b); 
        */

        funcaoP(tamanho, nome);
	
}

// Funções de rotina/apoio
int funcao(){
	
	int A = 3;
	return A*2;
	
	

	
}

void funcao2() {
	printf("\nEstou na funcao 2\n");
}

int funcaoP(int tam, char n[])
{
        puts(n);

        for(int i=tam-1; i>=0; i--)     
                printf("%c ", n[i]);

        printf("\n\n");
}

