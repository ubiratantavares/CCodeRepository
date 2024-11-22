/* Implemente uma funcao que indique se um ponto(x, y) esta localizado dentro ou fora do retangulo.

O retangulo eh definido por seus vertices inferior esquerdo (x0, y0) e superior direito (x1, y1).

A funcao deve ter como valor de retorno 1, se o ponto estiver dentro do retangulo, e 0, caso contrario, obedecendo ao prototipo:

int dentro_ret(int x0, int y0, int x1, int y1, int x, int y);
*/

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

int main() {

	Ponto* p_inf = criarPonto(0., 0.);
	Ponto* p_sup = criarPonto(5., 6.);
	Retangulo* r = criarRetangulo(*p_inf, *p_sup);
	imprimirRetangulo(r);
	Ponto* p = lerPonto();
    imprimirVerificacao(r, *p);
	liberarPonto(p_inf);
	liberarPonto(p_sup);
	liberarPonto(p);
	liberarRetangulo(r);

	return 0;
}
