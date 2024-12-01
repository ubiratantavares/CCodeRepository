/* Implemente uma função que retorne uma aproximação do valor de pi, de acordo com a 
fórmula de Leibniz:

pi = 4 * (1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 ...)

pi = 4 * somatorio de i=0 até n de ((-1)^i / (2 * i + 1))

Essa função deve obedecer ao seguinte protótipo, em que n indica o número de termos que deve ser usado para avaliar o valor de pi: double pi(int n);
*/

#include <stdio.h>
#include <math.h>

double pi(int n);

int main() {
	printf("%.15f\n", pi(100000));
	return 0;
}

double pi(int n) {
	double soma = 0.;
	for (int i = 0; i <= n; i++) {
		soma += pow(-1, i) / (2 * i + 1);		
	}
	return 4 * soma;
}
