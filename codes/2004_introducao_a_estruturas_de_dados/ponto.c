#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

struct ponto {
    float x;
    float y;
};

Ponto* criarPonto(float x, float y) {
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));

    if (!verificarPonto(p)) {
	    return NULL; // retorna NULL, se a alocação falhar
    }

   	p->x = x;
 	p->y = y;
 	
    return p;
}

Ponto* lerPonto() {
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));
    if (!verificarPonto(p)) {
	    return NULL; // retorna NULL, se a alocação falhar
    }
  
    float x, y;

   	printf("\nDigite as coordenadas x e y do ponto: ");

  	scanf("%f %f", &x, &y);

  	p->x = x;
   	p->y = y;
   	
    return p;
}

int verificarPonto(Ponto* p) {
	if (p != NULL) {
		return 1;
	} else {
		printf("\nFalha na alocação de memória.");
        return 0;
	}
	
}

void imprimirPonto(Ponto p) {
	printf("Ponto(%.2f, %.2f)\n", p.x, p.y);
}

void liberarPonto(Ponto* p) {
	free(p);
}
