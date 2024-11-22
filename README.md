# projeto_arvoreAVL

Projeto de implementação de um dicionário de lingua portuguesa utilizando a estrutura de árvore binária AVL para armazenar e organizar os dados.

## Estruturas de Dados (TADs)

#### 1. Struct no
Struct usada para armazenar uma palavra e um significado, como char de 30 posições, índice de balenceamento como um inteiro, e ponteiros para outros nós 
```c
typedef struct no{

    struct no* pai; // Ponteiro para o nó pai
    char palavra[30];
    char significado[30];
    int balenceamento;
    struct no* saDir; // Ponteiro para a SubÁrvore da Direita
    struct no* saEsq; // Ponteiro para a SubÁrvore da Esquerda
}No;
```

#### 2. Struct arvoreAvl
Struct criada para armazenar a raiz da arvore avl que será utilizada

```c
typedef struct arvoreAVL{

    No* raiz;
}Avl;
```
## Funções Implementadas

#### 1. void addNo(Avl* arvore)
Função sem returno utilizada para inserir nós. Na passagem de parametro precisasse da Arvore avl que desejasse inserir o nó. A função é responsavel por localizar a posição onde o nó sera inserido e verificar o balanceamento e chamar a função de balanceamento caso seja necessario. 

#### 2. No* criaNo()
Função que retornar um ponteiro para uma struct NÓ ápos realizar a alocação de mémoria e as palavra e significado aos respectivos campos na struct. Essa função é utilizada pela função addNO() para criar o nó que será adicionado.

#### 3. int cmpPalavras(char palavra1[], char palavra2[])
Retorna um inteiro de acordo com a comparação sobre a ordem alfabética das palavras passadas como argumento. A palavra1 é a palavra do nó ja existente no dicionairo, e a palavra2 é a palavra que esta sendo inserida na arvore. Os retornos seguem a seguinte lógica:
0 = (palavra1 == palavra2)
1 = (palavra1 > palavra2)
-1 = (palavra1 < palavra2)



