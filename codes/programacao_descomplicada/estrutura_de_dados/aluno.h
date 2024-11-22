/*
Guarda de Inclusão: #ifndef ALUNO_H, #define ALUNO_H, e #endif garantem que o conteúdo do arquivo aluno.h seja incluído apenas uma vez durante a compilação.

Definição do Tipo Aluno: A estrutura struct aluno é referenciada pelo tipo Aluno usando typedef.

Protótipos das Funções:

	- criar_aluno: Aloca e inicializa um novo aluno.
	- liberar_aluno: Libera a memória de um aluno.
	- acessar_aluno: Acessa os dados de um aluno.
	- atribuir_aluno: Modifica os dados de um aluno.
*/

#ifndef ALUNO_H

#define ALUNO_H

// define a estrutura aluno
struct aluno {
    int matricula;
    char nome[50];
    float notas[4];
};

// cria um alias para struct aluno
typedef struct aluno Aluno;

// cria um novo aluno
Aluno* criar_aluno(int matricula, char nome[50], float notas[4]);

// libera um aluno
void liberar_aluno(Aluno* a);

// acessa os valores do aluno
void acessar_aluno(Aluno* a, int* matricula, char nome[50], float notas[4]);

// atribue valores ao aluno
void atribuir_aluno(Aluno* a, int matricula, char nome[50], float notas[4]);

#endif

