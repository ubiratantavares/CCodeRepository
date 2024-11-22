/*
Programa que receba um número, calcule e mostre.

- o número digitado ao quadrado;
- o número digitado ao cubo;
- a metade do número digitado;
- o sucessor do número digitado.
*/

#include <stdio.h>

int main() {
	int valor, valor_quadrado, valor_cubo,  valor_metade, valor_sucessor;
	valor = 10;
	valor_quadrado = valor * valor;
	valor_cubo = valor  * valor * valor;
	valor_metade = valor / 2;
	valor_sucessor = valor + 1;
	
	printf("Quadrado do número = %d\n", valor_quadrado);
	printf("Cubo do número = %d\n", valor_cubo);
	printf("Metade do número = %d\n", valor_metade);
	printf("Sucessor do número = %d\n", valor_sucessor);
}

