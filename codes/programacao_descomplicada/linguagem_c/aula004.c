#include <stdio.h>
#include <stdlib.h>

int main() {
	char letra;
	int quantidade;
	float preco;
	double total;

	scanf("%c", &letra);
	scanf("%d", &quantidade);
	scanf("%f", &preco);
	scanf("%lf", &total);

	printf("%c %d %.2f %.2f\n", letra, quantidade, preco, total);
	return 0;
}
