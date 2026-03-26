#define GRAU_MINIMO 2

struct nodo {
 int n;
 int chaves[2 * GRAU_MINIMO - 1];
 struct nodo *filhos[2 * GRAU_MINIMO];
 bool ehFolha;
};

/*Aloca uma struct do tipo arvoreB com um valor de T específico e a retorna.*/
struct arvoreB* crirArvoreB(int32_t t_arvore);

/*Insere a chave na Árvore B.*/
void inserirArvoreB(struct arvoreB* arvore, int32_t chave);

/*Imprime a Árvore B na tela em largura, 
seguindo estritamente o padrão do exemplo (não
seguir o padrão invalidará sua função).*/
void imprimirArvoreB(struct arvoreB* arvore);

/*Imprime as chaves da árvore em ordem, seguindo o formato exemplificado a seguir:*/
void imprimirEmOrdem(struct arvoreB* arvore);

/*Retorna o endereço do nodo que contém a chave sendo buscada, e insere o índice onde essa
chave se encontra dentro de idxEncontrado. Caso não encontre a chave, retorna NULL e
insere -1 em idxEncontrado.*/
struct nodo* buscarArvoreB(struct arvoreB* arvore, int32_t chave,int32_t* idxEncontrado);

/*Libera toda a memória alocada. Ou seja, todos os nodos são liberados, além da struct
arvoreB passada como parâmetro*/
void deletarArvore(struct arvoreB* arvore);
