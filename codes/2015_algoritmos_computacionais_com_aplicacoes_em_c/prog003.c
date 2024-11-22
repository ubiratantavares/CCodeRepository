/*
gcc -c prog003.c
gcc -o prog003 prog003.c
*/

#include <stdio.h>

int main() {
	
	float a, b, c;
	a = 8.4;
	b = 4.5;
	c = a * b;
	printf("%2.1f x %2.1f = %2.1f\n", a, b, c);
}
