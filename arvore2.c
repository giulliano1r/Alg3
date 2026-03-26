#include<stdio.h>
#include<stdlib.h>

struct pessoa
{
    int cpf;
    struct nodo * fe;
    struct nodo * fd;
}

struct * pessoa criaNodo(int chave)
{
    struct pessoa * novaRaiz;
    novaRaiz = malloc(sizeof(pessoa));

    if(!novaRaiz)
        return -1;

    novaRaiz->cpf = chave;
    novaRaiz->fe = NULL;
    novaRaiz->fd = NULL;

    return novaRaiz;
}

int insereNodo(struct pessoa * raiz, int chave, int pos, int ref)
{
    if(!raiz)
        return -1;

    struct pessoa * novoNodo = criaNodo(chave);

    if(pos % 2 == 0)
        {
            raiz->fd = pessoa;
        }
        else
            raiz->fe = pessoa;

            

}

int main()
{
}
