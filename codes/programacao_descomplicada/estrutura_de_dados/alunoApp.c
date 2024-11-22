#include <stdio.h>
#include "aluno.h"

#include <stdio.h>
#include "aluno.h"

int main() {
    // Dados iniciais do aluno
    int matricula = 101;
    char nome[50] = "Ana Oliveira";
    float notas[4] = {9.5, 8.0, 7.5, 10.0};

    // Criando um novo aluno
    Aluno* aluno = criar_aluno(matricula, nome, notas);
    if (aluno == NULL) {
        printf("Erro ao criar o aluno.\n");
        return 1;
    }

    // Exibindo os dados do aluno criado
    int matricula_acessada;
    char nome_acessado[50];
    float notas_acessadas[4];
    acessar_aluno(aluno, &matricula_acessada, nome_acessado, notas_acessadas);

    printf("Aluno Criado:\n");
    printf("Matrícula: %d\n", matricula_acessada);
    printf("Nome: %s\n", nome_acessado);
    printf("Notas: %.1f, %.1f, %.1f, %.1f\n\n",
           notas_acessadas[0], notas_acessadas[1],
           notas_acessadas[2], notas_acessadas[3]);

    // Modificando os dados do aluno
    int nova_matricula = 202;
    char novo_nome[50] = "Carlos Souza";
    float novas_notas[4] = {8.0, 7.0, 9.0, 6.5};
    atribuir_aluno(aluno, nova_matricula, novo_nome, novas_notas);

    // Exibindo os novos dados do aluno
    acessar_aluno(aluno, &matricula_acessada, nome_acessado, notas_acessadas);

    printf("Aluno Alterado:\n");
    printf("Matrícula: %d\n", matricula_acessada);
    printf("Nome: %s\n", nome_acessado);
    printf("Notas: %.1f, %.1f, %.1f, %.1f\n\n",
           notas_acessadas[0], notas_acessadas[1],
           notas_acessadas[2], notas_acessadas[3]);

    // Liberando o aluno
    liberar_aluno(aluno);

    return 0;
}
