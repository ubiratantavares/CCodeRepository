/*
Programa que receba o salário-base de um funcionário, calcule e mostre o salário a receber, sabendo-se
que o funcionário tem gratificação de 5% sobre o salário-base e paga imposto de 7% sobre o salário-base.
*/

#include <stdio.h>

int main() {
	float salario_base, gratificacao, imposto, salario_atual;
	salario_base = 1000.0;
	gratificacao = 0.05;
	imposto = 0.07;
	salario_atual =  salario_base  * (1 + gratificacao - imposto);
	printf("Salario base = %6.2f\n", salario_base);
	printf("Salario atual = %6.2f\n", salario_atual);
}

