/*
programa que receba três notas, calcule e mostre a média aritmética entre elas.

gcc -c prog005.c
gcc -o prog005 prog005.c

*/

#include <stdio.h>

int main() {
	float nota1, nota2, nota3, media;
	nota1 = 5.5;
	nota2 = 7.0;
	nota3 = 8.0;
	media = (nota1 + nota2 + nota3) / 3.0;
	printf("Média das notas = %.2f\n", media);
}

