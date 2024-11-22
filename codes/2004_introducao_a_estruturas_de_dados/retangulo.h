#ifndef RETANGULO_H
#define RETANGULO_H

typedef struct ponto Ponto;

typedef struct retangulo Retangulo;

Retangulo* criarRetangulo(Ponto p_inf, Ponto p_sup);

int verificarRetangulo(Retangulo* r);

int pontoDentroRetangulo(Retangulo* r, Ponto p);

float calcularComprimentoRetangulo(Retangulo* r);

float calcularLarguraRetangulo(Retangulo* r);

float calcularPerimetroRetangulo(Retangulo* r);

float calcularAreaRetangulo(Retangulo* r);

void imprimirRetangulo(Retangulo* r);

void imprimirVerificacao(Retangulo* r, Ponto p);

void liberarRetangulo(Retangulo* r);

#endif 
// RETANGULO_H
