#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aluno.h"

// cria um novo aluno
Aluno* criar_aluno(int matricula, char nome[50], float notas[4]) {
    Aluno* novo_aluno = (Aluno*)malloc(sizeof(Aluno)); // aloca memória para um novo aluno
    if (novo_aluno == NULL) {
        printf("Erro ao alocar memória para o aluno.\n");
        return NULL;
    }
    //inicializa os campos com os valores fornecidos
    novo_aluno->matricula = matricula;
    strcpy(novo_aluno->nome, nome);
    for (int i = 0; i < 4; i++) {
        novo_aluno->notas[i] = notas[i];
    }
    // retorna um ponteiro do novo aluno criado
    return novo_aluno;
}

// libera um aluno
void liberar_aluno(Aluno* a) {
    if (a != NULL) {
        free(a);
    }
}

//  acessa os valores do aluno
void acessar_aluno(Aluno* a, int* matricula, char nome[50], float notas[4]) {
    if (a == NULL) {
        printf("Aluno inválido.\n");
        return;
    }
    *matricula = a->matricula;
    strcpy(nome, a->nome);
    for (int i = 0; i < 4; i++) {
        notas[i] = a->notas[i];
    }
}

// atribui valores ao Aluno
void atribuir_aluno(Aluno* a, int matricula, char nome[50], float notas[4]) {
    if (a == NULL) {
        printf("Aluno inválido.\n");
        return;
    }
    a->matricula = matricula;
    strcpy(a->nome, nome);
    for (int i = 0; i < 4; i++) {
        a->notas[i] = notas[i];
    }
}
