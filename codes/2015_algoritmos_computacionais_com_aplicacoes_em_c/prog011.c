/*

Programa que receba o número de horas trabalhadas e o valor do salário hora.
Calcule e mostre o salário a receber seguindo as regras abaixo:

- o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor do salário hora;
- o imposto equivale a 3% do salário bruto;
- o salário a receber equivale ao salário bruto menos o imposto.

*/

#include <stdio.h>

int main() {
    
    float salario_hora, salario_bruto, salario_liquido, valor_imposto;
    int horas_trabalhadas;

    salario_hora = 30.0;
    horas_trabalhadas = 160;
    salario_bruto = horas_trabalhadas * salario_hora;
    valor_imposto = 0.03 * salario_bruto;
    salario_liquido = salario_bruto - valor_imposto;

    printf("Salário bruto = %6.2f\n", salario_bruto);
    printf("Valor do imposto = %6.2f\n", valor_imposto);
    printf("Salário líquido = %6.2f\n", salario_liquido);

}

