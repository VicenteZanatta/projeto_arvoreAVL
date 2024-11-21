# projeto_arvoreAVL

Projeto de implementação de um dicionário de lingua portuguesa utilizando a estrutura de árvore binária AVL para armazenar e organizar os dados.

## Estruturas de Dados (TADs)

#### 1. Struct No
```c
typedef struct no{

    struct no* pai;
    char palavra[30];
    char significado[30];
    int balenceamento;
    struct no* saDir;
    struct no* saEsq;
}No;

```
