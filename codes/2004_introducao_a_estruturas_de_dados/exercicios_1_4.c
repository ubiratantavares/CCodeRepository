/* Implemente uma função que retorne a soma dos n primeiros números naturais ímpares.
Essa função deve obedecer ao protótipo: int soma_impares(int n);
*/

#include <stdio.h>

int soma_impares(int n);

void imprimir(int valor);

int main() {
	imprimir(soma_impares(100));
	return 0;
}

int soma_impares(int n) {
	int valor = 0;
	for (int i = 1; i <= n; i += 2) {
		valor += i;
	}
	return valor;
}

void imprimir(int valor) {
	printf("%d\n", valor);
}
