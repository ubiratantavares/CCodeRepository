#include <stdio.h>
#include <stdlib.h>

int main() {
	int x = 1;
	float y = 5.25;
	double z = 5.0e3;
	char letra = 'a';
	int w = letra;

	printf("%d\n", x);
	printf("%.2f\n", y);
	printf("%.2f\n", z);
	printf("%c\n", letra);
	printf("%d\n", w);
	return 0;
}
