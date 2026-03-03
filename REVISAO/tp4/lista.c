#include <iso646.h>
#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

struct lista_t *lista_cria (){
    struct lista_t *new_list;
    new_list = malloc(sizeof(struct lista_t));

    if(!new_list)
        return NULL;

    new_list->prim = NULL;
    new_list->ult = NULL;
    new_list->tamanho = 0;

    printf("lista criada com sucesso! tamanho : %d", new_list->tamanho);
    return new_list;
}

int lista_insere (struct lista_t *lst, int item, int pos){
    struct nodo_t *new_nodo;
    new_nodo = malloc(sizeof(struct nodo_t));

    if(!new_nodo)
        return NULL;

    new_nodo->prox = NULL;
    new_nodo->ant = NULL;
    new_nodo->valor = item;

    if(lst->tamanho > 0)
    {
        if(pos == -1)
        {
           lst->ult->prox = new_nodo;
           new_nodo->ant = lst->ult;
           lst->ult = new_nodo;
           new_nodo->prox = NULL;
           lst->tamanho = lst.tamanho + 1;
        }
        // inserir em qualquer posição da lista duplamente encadeada,
        // provavelmente vou ter que criar uma funcao que percorre a lista
        // até achar a posição correta e então inserir no meio
        // vai ter que verificar se estamos inserindo no inicio, final etc
    }



}

/*
struct lista_t *lista_destroi (struct lista_t *lst);



int lista_retira (struct lista_t *lst, int *item, int pos);

int lista_consulta (struct lista_t *lst, int *item, int pos);

int lista_procura (struct lista_t *lst, int valor);

int lista_tamanho (struct lista_t *lst);

void lista_imprime (struct lista_t *lst);
*/
