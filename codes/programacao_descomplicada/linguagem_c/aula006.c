#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415

int main() {

	const int x = 5;

	int soma = x + 1;

	float f = PI + 1;
	
	printf("%d\n", soma);

	printf("%.2f\n", PI);

	printf("%.2f\n", f);
	
	return 0;
}
