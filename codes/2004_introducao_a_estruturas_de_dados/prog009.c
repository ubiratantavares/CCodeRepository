// programa fatorial (versao 1)

#include <stdio.h>

int main() {
	int i;
	int n;
	int f = 1;
	printf("Digite um número inteiro não negativo: ");
	scanf("%d", &n);
	/* calcula fatorial */
	i = 1;
	while (i <= n) {
		f *= i;
		i++;
	}
	printf("Fatorial = %d \n", f);
	return 0;
}
