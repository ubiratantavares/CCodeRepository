// programa que verifica também se dois números lidos são pares.

#include <stdio.h>

int main() {
	int a, b;
	printf("Digite dois números inteiros: ");
	scanf("%d%d ", &a, &b);
	if ( (a % 2 == 0) && (b % 2 ==0) ) {
		printf("Foram digitados dois números pares!\n");
	}
	return 0;
}
