/*
gcc -c prog002.c
gcc -o prog002 prog002.c
*/

#include <stdio.h>

int main() {
	int a, b, c;
	a = 10;
	b = 32;
	c = a + b;
	printf("%d + %d = %d\n", a, b, c);
}
