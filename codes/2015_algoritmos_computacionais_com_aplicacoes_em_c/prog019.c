/*

Verificar se um número é positivo, negativo ou nulo
Ler um número e informar se ele é positivo, negativo ou nulo.

*/

#include <stdio.h>

int main() {
    float numero;

    printf("Digite um número: ");
    scanf("%f", &numero);

    if (numero > 0) {
        printf("Positivo.\n");
    } else if (numero == 0.) {
        printf("Nulo.\n");
    } else {
        printf("Negativo.\n");
    }

    return 0;
}
