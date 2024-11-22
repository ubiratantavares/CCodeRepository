/* Programa para converter medida de comprimento em metros para pes e polegadas */

#include <stdio.h>

float ler_altura_metros() {
	float h = 0.0; // altura em metros
	printf("Digite a altura em metros: ");
	scanf("%f", &h);
	return h;
}

float transformar_metros_para_centimetros(float comprimento) {
    // comprimento em metros
	return 100.0 * comprimento;
}

int calcular_numero_pes(float comprimento) {
    // comprimento em metros
    return (int) (transformar_metros_para_centimetros(comprimento) / 30.48);
}

float calcular_numero_pol_restante(float comprimento) {
	// comprimento em metros
	return (transformar_metros_para_centimetros(comprimento) - calcular_numero_pes(comprimento) * 30.48) / 2.54;
}

void imprimir(int comprimento_pes, float comprimento_pol) {
	printf("Altura: %d ft %.1f pol\n", comprimento_pes, comprimento_pol);
}

int main() {
	float altura_m = ler_altura_metros();
	int altura_pes = calcular_numero_pes(altura_m);
	float altura_pol = calcular_numero_pol_restante(altura_m);
	imprimir(altura_pes, altura_pol);
	return 0;
}
