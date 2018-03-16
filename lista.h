#ifndef lista_h
#define lista_h

typedef struct cliente
{
    char nome[50];
    char endereco[300];
    float tel;
}Tcliente;

typedef struct NO
{
    Tcliente valor;
    struct NO *ant, *prox;
}TNO;

typedef struct lista
{
    struct NO *prim, *ult;
}Tlista;

Tlista *inicLista();

int listaVazia (Tlista *l);

void insereOrdenado (Tlista *l, char nome[], char endereco[], float telefone);

void insereNoFim (Tlista *l);

void listar(Tlista *l);

int remover(Tlista *l, char *nome);
#endif
