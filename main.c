#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

int main()
{
    Tlista *lista;
    lista = inicLista();
    int resp;
    char nome[50];
    char endereco[300];
    float tel;

    do
    {
        printf("Informe o nome \n");
        gets(nome);
        printf("Informe o endereco \n");
        gets(endereco);
        printf("Informe o telefone \n");
        scanf("%f", &tel);

        //insereNoFim(lista);
        insereOrdenado(lista, nome, endereco, tel);

        printf("Quer inserir outro?\n\n");
        scanf("%d",&resp);
        getchar();
    }while(resp);

    listar(lista);
    printf("\nQuem voce deseja remover\n");
    gets(nome);
    int aux = remover(lista, nome);
    if (aux == 0)
        printf("%s nao foi encontrado\n\n", nome);
    else if (aux==-1)
        printf("lista vazia");
    else
        printf("%s foi removido da lista\n\n", nome);
    listar(lista);
    return 0;
}
