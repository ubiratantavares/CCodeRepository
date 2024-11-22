/*

Verificar se um número é par ou ı́mpar
Faça um programa que receba um número via teclado e verifique se este número é par ou ı́mpar.

*/

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);
    
    if (numero % 2 == 0) {
        printf("Par.\n");
    } else {
        printf("Ímpar.\n");
    }
 
    return 0;
}


