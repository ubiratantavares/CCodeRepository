#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"
#include "lista_estatica.h"

// define a estrutura da lista estática
struct lista {
	int tamanho; // tamanho atual da lista
	Aluno Alunos[MAX]; // vetor para armazenar os alunos da lista
};

// cria um  nova lista
Lista* criar_lista() {
	Lista* l = (Lista*) malloc(sizeof(struct lista));
	if (l != NULL) {
		l->tamanho = 0; // inicializa o tamanho como 0 (lista vazia)
	}
	return l;
}

// libera uma lista
void liberar_lista(Lista* l) {
    if (l != NULL) {
        free(l); // libera a memória alocada para a lista
    }
}

// verifica o tamanho da lista
int tamanho_lista(Lista* l) {
    if (l == NULL) {
        return -1;
    }
   return l->tamanho;
}

// verifica se lista está vazia
int esta_vazia_lista(Lista* l) {
    if (l == NULL) {
        return -1; // retorna -1, se a lista for NULL
    }
    return l->tamanho == 0; // retorna 1 , se a lista estiver vazia
}

// verifica se a lista está cheia
int esta_cheia_lista(Lista* l) {
    if (l == NULL) {
        return -1; // retorna -1, se a lista for NULL
    }
    return l->tamanho == MAX; // retorna 1, se a lista estiver cheia
}

// insere elemento no inicio da lista
int insere_elemento_inicio_lista(Lista* l, Aluno a) {
	if (l == NULL) {
		return 0;
	}
	if (lista_cheia(l)) {
		return 0;
	}
	for (int i = l->qtd-1; i>= 0; i--) {
		l->dados[i+1] = l->dados[i];
	}
	l->dados[0] = a;
	l->qtd++;
	return 1;
}
// insere elemento no meio da lista
int insere_elemento_meio_lista(Lista* l, Aluno a) {
	if (l == NULL) {
		return 0;
	}
	if (lista_cheia(l)) {
		return 0;
	}
	int i = 0;
	while (i < l->qtd && l->dados[i].matricula < a.matricula) {
		i++;
	}
	for (int k = l->qtd - 1; k >= i; k--) {
		l->dados[k+1] = l->dados[k];
	}
	l->dados[i] = a;
	l->qtd++;
	return 1;
}

// insere elemento no final da lista
int insere_elemento_final_lista(Lista* l, Aluno a) {
	if (li == NULL) {
		return 0;
	}
	if (lista_cheia(l)) {
		return 0;
	}
	l->dados[l->qtd] = a;
	l->qtd++;
	return 1;
}

// consulta elemento pela posicao na lista
int consulta_posicao_lista(Lista* l, int pos, Aluno* a) {
	if (li == NULL || pos <= 0 || pos > li->qtd) {
		return 0;
	}
	*a = li->dados[pos-1];
	return 1;
}

// consulta elemento pela informacao na lista
int consulta_informacao_lista(Lista* l, int mat, Aluno* a) {
	if (li == NULL) {
		return 0;
	}
	int i = 0;
	while (i < l->qtd && l->dados[i].matricula != mat) {
		i++;
	}
	if (i == l->qtd) { // elemento nao encontrado
		return 0;
	}
	*a = li->dados[i];
	return 1;
}
