#include <stdio.h>
#include <stdlib.h>

typedef struct no{

    struct no* pai;
    char palavra[30];
    char significado[30];
    int balenceamento;
    struct no* saDir;
    struct no* saEsq;
}No;

typedef struct arvoreAVL{

    No* raiz;
}Avl;




int main(){







    return 0;
}