/* Implemente uma função que receba como parâmetro um vetor de números reais (vet)
de tamanho n e retorne quantos números negativos estão armazenados nesse vetor. Essa função deve obedecer ao protótipo: int negativos(int n, float* vet);
*/

#include <stdio.h>

#define N 10

int negativos(int n, float* vet);

int main() {
	float vet[N] = {-2.0, 1.0, -0.75, 0.5, -0.25, 0.20, -0.15, 0.10, -0.05, 0.0};
	int total = negativos(N, vet);
	printf("Total de números negativos: %d\n", total);
	return 0;
}

int negativos(int n, float* vet) {
	int total = 0;
	for (int i = 0; i < n; i++) {
		if (vet[i] < 0) {
			total += 1;
		}
	}
	return total;	
}
