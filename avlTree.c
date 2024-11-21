#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

No* criaNo();
int menu();
void addNo(Avl* arvore);
int cmpPalavras(char palavra1[], char palavra2[]);


int main(){

    int op = 0;

    printf("\nTRABALHO 1 DE ALGORITIMOS E ESTRUTURAS DE DADOS II");
    printf("\nALUNO: VICENTE ZANATTA");
    printf("\nSEMESTRE: 24.2");

    while(1)
    {

        scanf("%i", &op);

        switch(op){

            case 1: // Cria arvore vazia
                Avl* arvore = malloc(sizeof(Avl)); 
                arvore->raiz = NULL;
                break;

            case 2: // Remove uma palavra 
                break;
            case 3: // Insere palavra
                break;
            case 4: // Busca uma palavra
                break;
            case 5: // Impressão ordenada da arvore
                break;
            case 0: 
                return 0;
        }

    }


    return 0;
}

int menu()
{
    int op = 0;

    printf("\n----------------------------------------");
    printf("\n[1] Criar arvore vazia");
    printf("\n[2] Remover uma palavra");
    printf("\n[3] Inserir uma palavra");
    printf("\n[4] Buscar uma palavra");
    printf("\n[5] Imprimir arvore ordenada");
    printf("\n[0] Sair\n");
    printf("\nSELECIONE: ");
    scanf("%i", &op);
    printf("\n----------------------------------------\n");

    return op;

}


No* criaNo()
{
    No* node = malloc(sizeof(No));
    if(node == NULL)
        printf("ERRO AO ALOCAR MEMORIA");
    node->pai = NULL;
    node->saDir = NULL;
    node->saEsq = NULL;
    node->balenceamento = 0;

    printf("\npalavra: ");
    fgets(node->palavra, 30, stdin);
    printf("\nsignificado: ");
    fgets(node->significado, 30, stdin);

    return node;
}

int cmpPalavras(char palavra1[], char palavra2[])
{
    if(palavra1 == palavra2)
    {
        printf("\n!! PALAVRA JA EXISTE NO DICIONARIO !!\n");
        return 0;
    }
    else
    {
        for(int i = 0; i < strlen(palavra1); i++)
        {
            if(palavra1[i] > palavra2[i])
                return 1;
        }
        return -1;
    }
}

void addNo(Avl* arvore)
{
    No* aux = arvore->raiz;
    No* node = criaNo();
    int cmp = 0;

    while(aux != NULL)
    {
        cmp = cmpPalavras(aux->palavra, node->palavra);
        
        if(cmp = 0)
            return;
        if(cmp = 1)
            aux = aux->saEsq;
        else
            aux = aux->saDir;
    }
    
    aux = node;
}