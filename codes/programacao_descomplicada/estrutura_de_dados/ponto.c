#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h" // inclui os protótipos

// definição do tipo de dados ponto
struct ponto {
	float x;
	float y;
};

// cria um novo ponto 
Ponto* criar(float x, float y) {
	Ponto* p = (Ponto*) malloc(sizeof(Ponto));
	if (p != NULL) {
		p -> x = x;
		p -> y = y;
	}
	return p;
}

// libera um ponto
void liberar(Ponto* p) {
	free(p);
}

// acessa os valores das coordenadas do ponto
void acessar(Ponto* p, float* x, float* y) {
	*x = p -> x;
	*y = p -> y;
}

// atribue valores as coordenadas do ponto
void atribuir(Ponto* p, float x, float y) {
	p -> x = x;
	p -> y = y;
}

// calcula a distância entre dois pontos
float calcular_distancia_euclidiana(Ponto* p1, Ponto* p2) {
	float dx = p1 -> x - p2 -> x;
	float dy = p1 -> y - p2 -> y;
	return sqrt(dx * dx + dy * dy);
}

