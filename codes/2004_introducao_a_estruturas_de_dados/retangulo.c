#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"
#include "retangulo.h"

struct ponto {
	float x;
	float y;
};

struct retangulo {
	Ponto p_inf;
	Ponto p_sup;
};

Retangulo* criarRetangulo(Ponto p_inf, Ponto p_sup) {
	Retangulo* r = (Retangulo*) malloc(sizeof(Retangulo));
	if (!verificarRetangulo(r)) {
		return NULL;
	}
	r->p_inf = p_inf;
	r->p_sup = p_sup;
	return r;
}

int verificarRetangulo(Retangulo* r) {
	if (r != NULL) {
		return 1;
	} else {
		printf("\nFalha na alocação de memória.\n");
		return 0;
	}
}

int pontoDentroRetangulo(Retangulo* r, Ponto p) {
	return (p.x >= r->p_inf.x && p.x <= r->p_sup.x && p.y >= r->p_inf.y && p.y <= r->p_sup.y);
}

float calcularComprimentoRetangulo(Retangulo* r) {
	return (r->p_sup.x - r->p_inf.x);
}

float calcularLarguraRetangulo(Retangulo* r) {
	return (r->p_sup.y - r->p_inf.y);
}

float calcularPerimetroRetangulo(Retangulo* r) {
	return 2 * (calcularComprimentoRetangulo(r) + calcularLarguraRetangulo(r));
}

float calcularAreaRetangulo(Retangulo* r) {
	return calcularComprimentoRetangulo(r) * calcularLarguraRetangulo(r);
}

void imprimirRetangulo(Retangulo* r) {
	printf("Retângulo\n");
	printf("\tVértice inferior esquerdo: ");
	imprimirPonto(r->p_inf);
	printf("\tVértice superior direito: ");
	imprimirPonto(r->p_sup);
	printf("\tComprimento do retângulo: %.2f\n", calcularComprimentoRetangulo(r));
	printf("\tLargura do retângulo: %.2f\n", calcularLarguraRetangulo(r));
	printf("\tPerímetro do retângulo: %.2f\n", calcularPerimetroRetangulo(r));
	printf("\tÁrea do retângulo: %.2f\n", calcularAreaRetangulo(r));
}

void imprimirVerificacao(Retangulo* r, Ponto p) {
	if (pontoDentroRetangulo(r, p)) {
		printf("\nO ponto lido está dentro do retângulo.\n");
	} else {
		printf("\nO ponto lido não está dentro do retângulo.\n");
	}	
}

void liberarRetangulo(Retangulo* r) {
	free(r);
}
