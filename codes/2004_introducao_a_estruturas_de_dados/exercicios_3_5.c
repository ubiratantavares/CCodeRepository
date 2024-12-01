/* Implemente uma função que calcule a derivada de um polinômio.

Cada polinômio é representado como exemplificado no exercício anterior.

A função deve obedecer ao protótipo:

void deriva(double* poli, int grau, double* out);

onde out é o vetor, de dimensão grau - 1, no qual a função deve guardar os coeficientes do polinômio resultante da derivada.

*/

#include <stdio.h>

#include <math.h>

// macro para calcular a dimensão do vetor
#define DIMENSAO(array) (sizeof(array) / sizeof((array)[0]))

void deriva(double* poli, int grau, double* out);

void imprimir(double* poli, int dim);

int main() {

    double v[] = {12, 2, 3};

	imprimir(v, DIMENSAO(v));

    double d[DIMENSAO(v) - 1];

	deriva(v, DIMENSAO(v) - 1, d);

	imprimir(d, DIMENSAO(d));

	return 0;
}

void deriva(double* poli, int grau, double* out) {
	for (int i = 1; i <= grau; i++)
		out[i - 1] = poli[i] * i; 
}

void imprimir(double* poli, int dim) {
    printf("{");
    for (int i = 0; i < dim; i++) {
        printf("%.1f", poli[i]);
        if (i < dim - 1) {
            printf(", ");
        }
    }
    printf("}\n");
}
