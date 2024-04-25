#include <stdio.h>
#include <locale.h>

int main (void) {
	setlocale(LC_ALL, "Portuguese");
	
	// Questão 1
	
	int a;
	
	for (a = 1; a <= 20; a++) {
		
		if (a % 2 == 0) {
			if (a == 2) {
				printf("%d ", a);
			}
			;  
		} else if (a % 3 == 0) {
			;
		} else if (a % 5 == 0) {
			;
		} else {
			printf("%d ", a);
		}
		
	}
	
	printf("\n\n----------------------------------------------------------------\n\n");
	
	// Questão 2
	
	int b[99];
	int M = 1000000; 
	int i;
	
	printf("Digite números inteiros positivos (um negativo indica o fim da digitação): ");
		
		for (i = 0; i < 99; i++) {
			
			scanf("%d", &b[i]);
			
			if (b[i] >= 0) {
				
				if (b[i] % 2 != 0) {
					if (b[i] < M) {
						M = b[i];
					}
				}
			} else {
				break;
			}
		}

	printf(" -> FIM. O menor dos números ímpares digitados é %d", M );
	
	printf("\n\n----------------------------------------------------------------\n\n");
	
	// Questão 3
	
	int C;
	
	printf("Em qual condição você se enquadra: \n1 - Estudante. \n2 - Possui mais de 60 anos de idade. \n3 - Professor(a) de escola pública. \n4 - Profissional da educação. \n5 - Portadores de deficiência. \n6 - Nenhuma das alternativas.\nResposta: ");
	scanf("%d", &C);
	
	switch (C) {
		case 1: printf("Deferido");
			break;
		case 2: printf("Deferido");
			break;
		case 3: printf("Deferido");
			break;
		case 4: printf("Deferido");
			break;
		case 5: printf("Deferido");
			break;
		case 6: printf("Indeferido");
			break;
		default:
			printf("Digite um código válido.");
			break;
	}

}

