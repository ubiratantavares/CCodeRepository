// programa que verifica se um número lido é par

#include <stdio.h>

int main() {
	int a;
	printf("Digite um número inteiro: ");
	scanf("%d ", &a);
	if (a % 2 == 0) {
		printf("O número fornecido é par!\n");
	} else {
		printf("O número fornecido é ímpar!\n");
	}
	return 0;
} 
