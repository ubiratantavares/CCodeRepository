// Programação descomplicada - Estrutura de dados - aula002 - modularização e TAD

#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

int main() {
	/*
	A convenção em linguagem C é preparar dois arquivos para implementar um TAD.

	Arquivo ".h": protótipos das funções, tipos de ponteiro e dados globalmente acessível.

	Arquivo ".c": declaração do tipo de dados e implementação das suas funções.

	Assim, separamos o conceito (definição do tipo) de sua implementação.

	Exemplo de TAD: ponto definido por suas coordenadas x e y.

	primeiro passo: definir o arquivo ".h"
		- protótipos das funções
		- tipos de ponteiro
		- dados globalmente acessíveis

	criação dos arquivos ponto.h e ponto.c

	*/

	float d;
	Ponto *p, *q;

	p = criar(10, 21);
	q = criar(7, 25);

	d = calcular_distancia_euclidiana(p, q);

	printf("Distância entre os ponto p e q: %.2f\n", d);

	liberar(p);
	liberar(q);

	return 0;
}
