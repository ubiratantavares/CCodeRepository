// programa fatorial (versao 3)

#include <stdio.h>

int main() {
	int i;
	int n;
	int f = 1;
	/* requisita valor do usuário */
	do {
		printf("Digite um número inteiro não negativo: ");
		scanf("%d", &n);
	} while (n < 0);
	/* calcula fatorial */
	for (i = 1; i <= n; i++) 
		f *= i;
	printf("Fatorial = %d \n", f);
	return 0;
}
