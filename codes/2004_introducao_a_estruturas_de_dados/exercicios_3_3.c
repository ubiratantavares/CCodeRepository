/* Implemente uma função que receba como parâmetro um vetor de números inteiros (vet)

de tamanho n e inverta a ordem dos elementos armazenados nesse vetor.

Essa função deve obeceder ao protótipo: void inverte (int n, int* vet);

*/

#include <stdio.h>

#define DIM 5

void inverte(int n, int* vet);

int main() {
	int vet[DIM] = {1, 2, 3, 4, 5};
	inverte(DIM, vet);
	return 0;
}

void inverte(int n, int* vet) {
	for (int i = n - 1; i >= 0; i--) 
		printf("%d\t", vet[i]);	
	printf("\n");
}

