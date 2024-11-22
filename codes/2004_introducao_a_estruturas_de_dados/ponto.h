#ifndef PONTO_H
#define PONTO_H

typedef struct ponto Ponto;

Ponto* criarPonto(float x, float y);

Ponto* lerPonto();

int verificarPonto(Ponto* p);

void imprimirPonto(Ponto p);

void liberarPonto(Ponto* p);

#endif
// PONTO_H
