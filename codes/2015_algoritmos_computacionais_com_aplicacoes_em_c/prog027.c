/*
Imprimir os números pares maiores que zero e menores que 1000.
*/

#include <stdio.h>

int main() {
    for (int i = 2; i < 1000; i+= 2) {
        printf("%d, ", i);
    }
    printf("\n");

    return 0;
}
