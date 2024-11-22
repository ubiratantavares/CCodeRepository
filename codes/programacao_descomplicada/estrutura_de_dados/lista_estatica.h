#ifndef LISTA_H

#define LISTA_H

#define MAX 10

typedef struct lista Lista;
typedef struct aluno Aluno;

// cria uma nova lista
Lista* criar_lista();

// libera uma lista
void liberar_lista(Lista* l);

// verifica o tamanho da lista
int tamanho_lista(Lista* l);

// verifica se a lista está vazia
int esta_vazia_lista(Lista* l);

// verifica se a lista está cheia
int esta_cheia_lista(Lista* l);

// insere um elemento no inicio da lista
int insere_elemento_inicio_lista(Lista* l, Aluno a);

// insere um elemento no meio da lista
int insere_elemento_meio_lista(Lista* l, Aluno a);

// insere um elemento no final da lista
int insere_elemento_final_lista(Lista* l, Aluno a);

// remove um elemento no inicio da lista

// remove um elemento no meio da lista

// remove um elemento no final da lista


// consulta um elemento pela posicao na lista
int consulta_posicao_lista(Lista* l, int pos, Aluno* a);

// consulta um elemento pela informacao na lista
int consulta_informacao_lista(Lista* l, int mat, Aluno* a);

#endif
