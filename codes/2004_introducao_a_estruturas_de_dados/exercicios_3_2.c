/* Implemente uma função que receba como parâmetro um vetor de números inteiros

de tamanho n e retorne quantos números pares estão armazenados neste vetor.

Essa função deve obedecer ao protótipo: int pares(int n, int* vet);
*/

#include <stdio.h>

#define N 10

int ehPar(int numero);

int pares(int n, int* vet);

int main() {
	int vet[N] = {2, 1, 75, 5, 25, 20, 15, 10, 6, 4};
	int total = pares(N, vet);
	printf("Total de números pares: %d\n", total);
	return 0;
}

int ehPar(int numero) {
	return numero % 2 == 0;
}

int pares(int n, int* vet) {
	int total = 0;
	for (int i = 0; i < n; i++) {
		if (ehPar(vet[i])) 
			total += 1;
	}
	return total;	
}
