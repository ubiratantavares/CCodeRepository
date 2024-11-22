/* Programa para conversao de temperatura */

#include <stdio.h>

float converte_temperatura_celsius_para_fahrenheit(float temp) {
    return 1.8 * temp + 32;	
}

int main() {
	float temp_celsius = 0.0;
	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &temp_celsius);
	float temp_fahrenheit = converte_temperatura_celsius_para_fahrenheit(temp_celsius);
	printf("Temperatura (Celsius): %.2f\n", temp_celsius);
	printf("Temperatura (Fahrenheit): %.2f\n", temp_fahrenheit);
	return 0;
}
