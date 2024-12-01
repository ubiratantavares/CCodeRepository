/* Implemente uma função que calcule as raízes de uma equação do segundo grau, do tipo

ax^2 + bx + c = 0. Essa função deve obedecer ao protótipo: int raizes(float a, float b, float c, float* x1, float* x2);

Essa função deve ter como valor de retorno o número de raízes reais e distintas da equação.

Se existirem raízes reais, seus valores devem ser armazenados nas variáveis apontadas por x1 e x2.

*/

#include <stdio.h>
#include <math.h>

float delta(float a, float b, float c);

int raizes(float a, float b, float c, float* x1, float* x2);

int main() {
	float x1, x2;
	float a = 1.0, b = 0., c = 4.0;
    int numero = raizes(a, b, c, &x1, &x2);
    printf("Total de raízes: %d.\n", numero);
    if (numero != 0) {
    	printf("Raízes: x1 = %.2f\tx2 = %.2f.\n", x1, x2);
    } else {
    	printf("Não há raízes reais.\n");
    }
	return 0;
}

float delta(float a, float b, float c) {
	return b * b - 4 * a * c;
}

int raizes(float a , float b, float c, float* x1, float* x2) {
	float d = delta(a, b, c);
	if (d >= 0.) {
		*x1 = (-b + sqrt(d)) / (2 * a);
		*x2 = (-b - sqrt(d)) / (2 * a);
		return 2;
	}
	return 0;
}
