/*
Programa que recebe três notas e seus respectivos pesos, calcule e mostre a média ponderada dessas notas.

gcc -c prog006.c
gcc -o prog006 prog006.c
*/

#include <stdio.h>

int main() {
	float nota1, nota2, nota3, media;
	int peso1, peso2, peso3;
	nota1 = 6.5;
	nota2 = 8.0;
	nota3 = 7.5;
	peso1 = 2;
	peso2 = 3;
	peso3 = 5;
	media = (peso1 * nota1 + peso2 * nota2 + peso3 * nota3) / (peso1 + peso2 + peso3);
	printf("Media ponderada das notas = %.3f\n", media);
}
