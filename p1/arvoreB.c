#include "arvoreB.h"
#include <stdio.h>
#include <stdlib.h>

struct arvoreB* crirArvoreB(int32_t t_arvore)
{
    struct nodo *novaArvore;
    novaArvore = malloc(sizeof(t_arvore));

    novaArvore->n = 0;
    novaArvore->ehFolha = true;

     for(int i = 0; i < 2 * GRAU_MINIMO; i++)
        novaArvore->filhos[i] = NULL;
    
    return novaArvore;
}

void inserirArvoreB(struct arvoreB* arvore, int32_t chave){
    // busca
}