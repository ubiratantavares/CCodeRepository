/*
Imprimir os números ı́mpares existentes entre 30 e 100.
*/

#include <stdio.h>

int main() {
    for (int i = 30; i <= 100; i++) {
        if (i % 2 == 1) {
            printf("%d, ", i);
        }
    }
    printf("\n");
    return 0;
}

