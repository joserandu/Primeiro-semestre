#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

	// Arquivo para leitura e gravação
    FILE *arqL;   
    FILE *arqG;  
    
    // Nome dos Arquivos de Leitura e Gravação
    char nomeArqL[100], nomeArqG[100]; 
    char Instrucoes[100], Endereco[100]; 
    
    // Nome do arquivo que deseja ler
    printf("Digite o nome do arquivo que deseja ler: "); 					
    scanf("%s", nomeArqL);
    
    // Abrindo o Arquivo para leitura
    arqL = fopen(nomeArqL, "r");
	 
    if (arqL == NULL) {
        printf("Não foi possível abrir o arquivo para leitura.\n");
        return 1;
    }
    
    // Nome do arquivo que deseja criar
    printf("Digite o nome do arquivo que deseja gerar: "); 
    scanf("%s", nomeArqG);
    
    // Abrindo o arquivo para escrita
    arqG = fopen(nomeArqG, "wb"); 
    
    if (arqG == NULL) {
        printf("Não foi possível abrir o arquivo para escrita.\n");
        fclose(arqL);  
        return 1;
    }
    
    // Linha recebida do código
    char textoLido[30]; 
    
    // Cabeçalho
    unsigned char cabecalho[] = {0x03, 0x4E, 0x44, 0x52};
    fwrite(cabecalho, sizeof(unsigned char), 4, arqG);
	
    while (fgets(textoLido, sizeof(textoLido), arqL) != NULL) {
        size_t len = strlen(textoLido);  // Remove o caractere de nova linha, se presente
        if (len > 0 && textoLido[len - 1] == '\n') 
            textoLido[len - 1] = '\0';
       	
        char strCopy[50];
        strncpy(strCopy, textoLido, sizeof(strCopy) - 1);
        strCopy[sizeof(strCopy) - 1] = '\0';  // Garantir que a string está terminada
    
        char *token = strtok(strCopy, " ");     // strtok para separar a instrução

        int Separador = 0;
        while (token != NULL) {
            if (Separador == 0)
                strcpy(Instrucoes, token);
            else if (Separador == 1)
                strcpy(Endereco, token);
            token = strtok(NULL, " ");
            Separador++;
        }
    
        unsigned char InstrucoesInscritas; 
        // Traduz as Instruções para Unsigned Char
        if (strcmp(Instrucoes, "NOP") == 0)
            InstrucoesInscritas = 0x00;
        else if (strcmp(Instrucoes, "STA") == 0)
            InstrucoesInscritas = 0x10;
        else if (strcmp(Instrucoes, "LDA") == 0)
            InstrucoesInscritas = 0x20;
        else if (strcmp(Instrucoes, "ADD") == 0)
            InstrucoesInscritas = 0x30;
        else if (strcmp(Instrucoes, "OR") == 0)
            InstrucoesInscritas = 0x40;
        else if (strcmp(Instrucoes, "AND") == 0)
            InstrucoesInscritas = 0x50;
        else if (strcmp(Instrucoes, "NOT") == 0)
            InstrucoesInscritas = 0x60;
        else if (strcmp(Instrucoes, "JMP") == 0)
            InstrucoesInscritas = 0x80;
        else if (strcmp(Instrucoes, "JN") == 0)
            InstrucoesInscritas = 0x90;
        else if (strcmp(Instrucoes, "JZ") == 0)
            InstrucoesInscritas = 0xA0;
        else if (strcmp(Instrucoes, "HLT") == 0)
            InstrucoesInscritas = 0xF0;
        
        unsigned char EnderecoInscrito = 0x00; // Inicializa o Endereço
        if (Separador > 1) // Se houver um endereço na linha
            EnderecoInscrito = (unsigned char)strtoul(Endereco, NULL, 16);
        
        // Escreve as instruções no arquivo
        fwrite(&InstrucoesInscritas, sizeof(unsigned char), 1, arqG);
        fwrite("\x00", sizeof(unsigned char), 1, arqG);
        
        // Se a instrução não for HLT, NOP ou NOT, escreve o endereço
        if (strcmp(Instrucoes, "HLT") != 0 && strcmp(Instrucoes, "NOP") != 0 && strcmp(Instrucoes, "NOT") != 0) {
            fwrite(&EnderecoInscrito, sizeof(unsigned char), 1, arqG);
            fwrite("\x00", sizeof(unsigned char), 1, arqG);
        }
    }
    
    fclose(arqL);
    fclose(arqG);

    return 0;
}

