/*
Equação do segundo grau

Receba 3 coeficientes.
Encontre a(s) raı́z(es) reais da equação do segundo grau.
Não aceite o coeficiente de x2 igual a zero.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    printf("Digite o coeficiente a: ");
    scanf("%f", &a);

    if (a == 0) {
        printf("O coeficiente de x² é nulo.\n");
    } else {
        printf("Digite o coeficiente b: ");
        scanf("%f", &b);
        printf("Digite o coeficiente c: ");
        scanf("%f", &c);

        delta = b * b - 4 * a * c;

        if (delta >= 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("x1 = %6.2f\n", x1);
            printf("x2 = %6.2f\n", x2);
        } else {
           printf("Não existem raízes reais.\n");
        }
    }

    return 0;
}
