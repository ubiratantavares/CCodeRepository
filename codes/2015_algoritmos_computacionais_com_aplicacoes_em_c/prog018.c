/*

Achar o maior de 3 números
Faça um programa que receba 3 números via teclado e imprima o maior deles.

*/

#include <stdio.h>

int main() {
    int n1, n2, n3, maior;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    printf("Digite o terceiro número: ");
    scanf("%d", &n3);
 
    if ( ( (n1 >= n2) && (n2 >= n3) ) || ( (n1 >= n3) && (n3 >= n2) ) ) {
        maior = n1;
    }

    if ( ( (n2 >= n1) && (n1 >= n3) ) || ( (n2 >= n3) && (n3 >= n1) ) ) {
        maior = n2;
    }

    if ( ( (n3 >= n1) && (n1 >= n2) ) || ( (n3 >= n2) && (n2 >= n1) ) ) {
        maior = n3;
    }

    printf("Maior número lido = %d\n", maior);

    return 0;
}

