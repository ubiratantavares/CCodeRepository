/*
Verifica se empréstimo pode ser concedido
Uma empresa abriu uma linha de crédito para os funcionários.
O valor da prestação não pode ultrapassar 30% do salário.
Receba o salário, o valor do empréstimo.
O número de prestações.
Informe se o empréstimo pode ser concedido.
Nenhum dos valores informados pode ser zero ou negativo.
*/

#include <stdio.h>

typedef int bool;

#define true 1
#define false 0


int main() {
    float salario, emprestimo, percentual;
    int prestacoes;
    bool concede_emprestimo = true;

    percentual = 0.3; // 30% do salário

    printf("Digite o salário: ");
    scanf("%f", &salario);

    printf("Digite o valor do emprestimo: ");
    scanf("%f", &emprestimo);

    printf("Diigite o número de prestações: ");
    scanf("%d", &prestacoes);

    concede_emprestimo = ((percentual * salario) >= (emprestimo / prestacoes));

    if (concede_emprestimo) {
        printf("Conceder empréstimo.\n");
    } else {
        printf("Não conceder empréstimo.\n");
    }
}
