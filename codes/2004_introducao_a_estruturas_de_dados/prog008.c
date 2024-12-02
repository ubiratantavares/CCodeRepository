// programa temperatura (versao 3)

#include <stdio.h>

int main() {
	int temp;
	printf("Digite a temperatura: ");
	scanf("%d", &temp);
	if (temp < 10) 
		printf("Temperatura muito fria\n");
	else if (temp < 20) 
		printf("Temperatura fria\n");
	else if (temp < 30)
		printf("Temperatura agradavel\n");
	else
		printf("Temperatura muito quente\n");
	return 0;
}
