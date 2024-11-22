/*

Pedro comprou um saco de ração com peso em quilos. Pedro possui dois gatos para os quais fornece a
quantidade de ração em gramas. Faça um programa que receba o peso do saco de ração e a quantidade de ração
fornecida para cada gato. Calcule e mostre quanto restará de ração no saco após cinco dias.

*/

#include <stdio.h>

int main() {
    float peso_saco_racao, peso_racao_gato1, peso_racao_gato2, numero_dias;

    peso_saco_racao = 20; // peso em quilos
    peso_racao_gato1 = 200;  // peso em gramas
    peso_racao_gato2 = 300; // peso em gramas

    peso_saco_racao = peso_saco_racao - 5 * ((peso_racao_gato1 + peso_racao_gato2) / 1000.0);

    printf("Peso do saco de racao em quilos = %6.2f\n", peso_saco_racao);
    return 0;

}


