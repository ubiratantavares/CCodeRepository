/*
Cálculo da área do triângulo
gcc -c prog004.c
gcc -o prog004 prog004.c
*/

#include  <stdio.h>

int main() {
	float  b, h , area;
	b = 10;
	h = 3.5;
	area = (b * h) / 2.0;
	printf("base = %.1f; altura = %.1f; area = %.3f\n", b, h, area);
}
