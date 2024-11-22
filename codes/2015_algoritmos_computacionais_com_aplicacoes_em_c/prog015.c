/*

Leia a idade da pessoa e direcione para uma fila de idoso quando a idade for
maior ou igual a 60 anos; informe que não pode entrar quando for menor de 18 anos e direcione para a fila
comum quando for maior de idade e menor que 60 anos.

*/

#include <stdio.h>

int main() {
    int idade;
    
    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    if (idade < 18) {
        printf("Entrada proibida.\n");
    } else if (idade < 60) {
        printf("Dirija-se à fila comum.\n");
    } else {
        printf("Dirija-se à fila preferencial.\n");
    }

    return 0;
}

