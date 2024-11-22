/*
Um trabalhador recebeu seu salário e o depositou em sua conta corrente bancária. Esse trabalhador emitiu
dois cheques e agora deseja saber seu saldo atual. Sabe-se que cada operação bancária de retirada paga CPMF
de 0,38% e o saldo inicial da conta está zerado. 

Programa que receba o valor do salário e dos dois cheques emitidos e calcule o saldo atual.
*/

#include <stdio.h>

int main() {

    float salario, valor_cheque1, valor_cheque2, imposto_cpmf, saque, saldo = 0.;

    salario = 1000.0;
    valor_cheque1 = 200.0;
    valor_cheque2 = 300.0;
    imposto_cpmf = 0.38 / 100;

    saque = valor_cheque1 + valor_cheque2;
    saldo = salario - saque - imposto_cpmf * (saque);

    printf("Salário atual = %6.2f\n", saldo);
    return 0;

}


