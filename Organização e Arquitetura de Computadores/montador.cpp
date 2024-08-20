#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *arqL;   // Arquivo para leitura
    FILE *arqG;   // Arquivo para gravação
    char nomeArqL[100], nomeArqG[100];
    char textoLido[30];
    struct TextG{
        char txt[100];
    } TextoGerado[257];
    int NumeroDaLinha;
    
    printf("Digite o nome do arquivo que deseja ler: ");					
    scanf("%s", nomeArqL);
    printf("Digite o nome do arquivo que deseja gerar: ");					
    scanf("%s", nomeArqG);

    // Abre o arquivo para leitura
    arqL = fopen(nomeArqL, "r");
    if (arqL == NULL) {
        printf("Não foi possível abrir o arquivo para leitura.\n");
        return 1;
    }

    // Abre o arquivo para escrita
    arqG = fopen(nomeArqG, "w");
    if (arqG == NULL) {
        printf("Não foi possível abrir o arquivo para escrita.\n");
        fclose(arqL);  // Fecha o arquivo de leitura antes de sair
        return 1;
    }

    // Lê e processa o arquivo linha por linha
    NumeroDaLinha = 1;
    while (fgets(textoLido, sizeof(textoLido), arqL) != NULL) {
        // Remove o caractere de nova linha, se presente
        size_t len = strlen(textoLido);
        if (len > 0 && textoLido[len - 1] == '\n') {
            textoLido[len - 1] = '\0';
        }
        
        // Extraí as instruções da linha
        char Instrucoes[4]; // Aumentado para incluir o terminador nulo
        sscanf(textoLido, "%3s", Instrucoes); // Lê a instrução

        if (strcmp(Instrucoes, "NOP") == 0)
            sprintf(TextoGerado[NumeroDaLinha].txt, "00 00 %c%c 00", textoLido[4], textoLido[5]);
        else if (strcmp(Instrucoes, "STA") == 0)
            sprintf(TextoGerado[NumeroDaLinha].txt, "10 00 %c%c 00", textoLido[4], textoLido[5]);
        else if (strcmp(Instrucoes, "LDA") == 0)
            sprintf(TextoGerado[NumeroDaLinha].txt, "20 00 %c%c 00", textoLido[4], textoLido[5]);
        else if (strcmp(Instrucoes, "ADD") == 0)
            sprintf(TextoGerado[NumeroDaLinha].txt, "30 00 %c%c 00", textoLido[4], textoLido[5]);
        else if (strcmp(Instrucoes, "OR ") == 0)
            sprintf(TextoGerado[NumeroDaLinha].txt, "40 00 %c%c 00", textoLido[3], textoLido[4]);
        else if (strcmp(Instrucoes, "AND") == 0)
            sprintf(TextoGerado[NumeroDaLinha].txt, "50 00 %c%c 00", textoLido[4], textoLido[5]);
        else if (strcmp(Instrucoes, "NOT") == 0)
            sprintf(TextoGerado[NumeroDaLinha].txt, "60 00 %c%c 00", textoLido[4], textoLido[5]);
        else if (strcmp(Instrucoes, "JMP") == 0)
            sprintf(TextoGerado[NumeroDaLinha].txt, "80 00 %c%c 00", textoLido[4], textoLido[5]);
        else if (strcmp(Instrucoes, "JN ") == 0)
            sprintf(TextoGerado[NumeroDaLinha].txt, "90 00 %c%c 00", textoLido[3], textoLido[4]);
        else if (strcmp(Instrucoes, "JZ ") == 0)
            sprintf(TextoGerado[NumeroDaLinha].txt, "A0 00 %c%c 00", textoLido[3], textoLido[4]);
        else if (strcmp(Instrucoes, "HLT") == 0)
            sprintf(TextoGerado[NumeroDaLinha].txt, "F0 00 %c%c 00", textoLido[4], textoLido[5]);
            
        fprintf(arqG, "%s\n", TextoGerado[NumeroDaLinha]);
        NumeroDaLinha++;
    }

    fclose(arqL);
    fclose(arqG);

    return 0;
}
