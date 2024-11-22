/*

Faça um programa que receba a medida do ângulo formado por uma escada apoiada no chão e encostada
na parede (ângulo entre a escada e o chão) e a altura da parede onde está a ponta da escada. Calcule e mostre
a medida desta escada.

*/

#include <stdio.h>
#include <math.h>

int main() {
    float angulo_grau, angulo_rad, altura_parede, altura_escada;

    angulo_grau = 60.0;
    altura_parede = 2.0; // medida em metros
    
    // convertendo o angulo theta de grau para radianos
    angulo_rad = angulo_grau * (M_PI / 180.0);

    // calculando a altura_escada (sin(angulo) = altura_parede/altura_escada)
    altura_escada = altura_parede / sin(angulo_rad);

    // exibindo  o comprimento da escada
    printf("Comprimento da escada em metros = %6.2f\n", altura_escada);

    return 0;
}

