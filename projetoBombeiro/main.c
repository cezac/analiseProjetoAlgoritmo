#include <stdlib.h>
#include <stdio.h>
#include "Informacoes.h"

FILE * arquivo; // Ponteiro para file
Rua* vetor; // Ponteiro para vetor de mapas
int fogo; // inteiro para guardar rua pegando fogo
int n_Ruas; // inteiro para guardar quant de ruas

int main()
{
    arquivo = fopen("D:\\Faculdade\\Analise e Projetos de Algoritmos\\ProjetoBombeiro\\bombeiro.txt", "r");
    if (arquivo == NULL)// Verifica se o ponteiro conseguiu abriu o arquivo
    {
        printf("Arquivo nao pode ser aberto\n");
        exit(0);
    }

    fscanf(arquivo, "%i", &fogo);
    printf("Fogo na rua: %d \n", fogo);

    fscanf(arquivo, "%i", &n_Ruas);
    printf("Numero de ruas: %d \n", n_Ruas);

    vetor = (Rua*) (calloc(n_Ruas, sizeof(int)));

    for(int j=0; j<3; j++)
    {
        fscanf(arquivo, "%i", &vetor[j].i);
        fscanf(arquivo, "%i", &vetor[j].f);
        fscanf(arquivo, "%i", &vetor[j].tempo);

        printf("\n");
        printf("Inicio: %d \n", vetor[j].i);
        printf("Fim: %d \n", vetor[j].f);
        printf("Tempo= %d \n", vetor[j].tempo);
    }
}
