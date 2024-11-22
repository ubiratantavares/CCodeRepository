/*

programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário.

gcc -c prog007.c
gcc -o prog007 prog007.c
gcc -g -O2 -Wall -o prog007 prog007.c
*/

#include <stdio.h>

int main() {
	float salario, percentual, novo_salario, aumento;
	salario = 1000.0;
	percentual = 0.15; // 15% de aumento
	aumento = percentual * salario;
	novo_salario = salario + aumento;
	printf("Aumento = %6.2f;  Novo salário = %6.2f\n", aumento, novo_salario);
}


