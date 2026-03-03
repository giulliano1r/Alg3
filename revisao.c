#include<stdio.h>
#include<stdlib.h>

struct pessoa
{
    int cpf;
    struct nodo * fe;
    struct nodo * fd;
}

int iniciaArvore1(int *chaves, int pos, int max, struct pessoa * ref)
{
    struct pessoa * nodo;
    nodo = malloc(sizeof pessoa);
    if(!nodo)
        return -1;

    if(pos >= max)
        return -1;

    if(pos == 0)
    {
        nodo->cpf = chaves[pos];
        nodo->fe = NULL;
        nodo->fd = NULL;
        // se eu não fizer isso ela cresce em zig zag para um lado só
        // mas ai ela não cresce + que h=1
        ref = nodo;
    }
    else
    {
        if(pos % 2 == 0)
            ref->fd = nodo;
        else
            ref->fe = nodo;
    }
    iniciaArvore1(chaves, pos + 1, max, ref);
    // o que eu posso fazer é tentar crescer para um lado e depois para o outro

}

int main()
{
}
