/* Implemente uma função que permita a avaliação de polinômios.

Cada polinômio é definido por um vetor que contém seus coeficientes.

Por exemplo, o polinômio de grau 2, 3x^2 + 2x + 12, terá um vetor de coeficientes

igual a v[] = {12, 2, 3}

A função deve obedecer ao protótipo:

double avalia(double* poli, int grau, double x);

Onde o parâmetro poli é o vetor com os coeficientes do polinômio, grau é o grau do polinômio,

e x é o valor para o qual o polinômio deve ser avaliado.

*/

#include <stdio.h>

#include <math.h>

// macro para calcular a dimensão do vetor
#define DIMENSAO(array) (sizeof(array) / sizeof((array)[0]))

double avalia(double* poli, int grau, double x);

int main() {
    double v[] = {12, 2, 3};
    double x[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
    for (int i = 0; i < DIMENSAO(x); i++) {
		printf("P(%.1lf) = %.1lf\n", x[i], avalia(v, DIMENSAO(v) - 1, x[i]));
    }
	return 0;
}

double avalia(double* poli, int grau, double x) {
	double valor = poli[0];
	for (int i = 1; i <= grau; i++)
		valor += poli[i] * pow(x, i);
	return valor;
}
