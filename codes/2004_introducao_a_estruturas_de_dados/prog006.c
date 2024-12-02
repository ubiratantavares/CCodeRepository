// programa temperatura (versao 1 - incorreta)

#include <stdio.h>

int main() {
	int temp;
	printf("Digite a temperatura: ");
	scanf("%d", &temp);
	if (temp < 30) 
		if (temp > 20)
			printf("Temperatura agradavel.\n");
	else
		printf("Temperatura muito quente.\n");
	return 0;
}
