/* Implemente uma função que clcula a área da superfície e o volume de uma esfera de raio r. 

Essa função deve obdecer ao protótipo: void calc_esfera(float r, float* area, float* volume);

A área da superfície e o volume são dados, respectivamente, por 4*pi*r^2 e 4*pi*r^3/3.

*/

#include <stdio.h>
#include <math.h>

#define PI 3.141516

float calc_area(float r);

float calc_volume(float r);

void calc_esfera(float r, float* area, float* volume);

int main() {
	float raio = 2.0, area, volume;
	calc_esfera(raio, &area, &volume);
	printf("Area = %.2f\n", area);
	printf("Volune = %.2f\n", volume);
	return 0;	
}

float calc_area(float r) {
	return 4 * PI * pow(r, 2.0);
}

float calc_volume(float r) {
	return 4 * PI * pow(r, 3.0) / 3;
}

void calc_esfera(float r, float* area, float* volume) {
	*area = calc_area(r);
	*volume = calc_volume(r);	
}
