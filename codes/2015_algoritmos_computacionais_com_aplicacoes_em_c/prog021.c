/*
Soma números e escolhe uma operação com base no resultado da soma
Receba 2 números e efetua a adição.
Caso o valor somado seja maior que 20, este deverá ser apresentado somando-se a ele 8;
caso o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.
*/

#include <stdio.h>

int main() {
    int a, b, soma;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    soma = a + b;

    if (soma > 20) {
        soma = soma + 8;
    } else {
        soma = soma - 5;
    }

    printf("%d\n", soma);

    return 0;
}
