/*

Programa que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor  e o percentual de impostos.
Calcule e mostre:
- o valor correspondente ao lucro do distribuidor;
- o valor correspondente aos impostos;
- o preço final do veículo.

Regra: o custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro 
do distribuidor e dos impostos aplicados ao preço de fábrica.

*/

#include <stdio.h>

int main() {
	float preco_fabrica, percentual_lucro, percentual_impostos, valor_lucro, valor_impostos, preco_final;
	
	preco_fabrica = 20000.0;
	percentual_lucro = 0.5;
	percentual_impostos = 0.2;
	valor_lucro = percentual_lucro * preco_fabrica;
	valor_impostos = percentual_impostos * preco_fabrica;
	preco_final = preco_fabrica + valor_lucro + valor_impostos;
	printf("Lucro do distribuidor = %6.2f\n", valor_lucro);
	printf("Valor dos impostos =  %6.2f\n", valor_impostos);
	printf("Preço final do veículo = %6.2f\n", preco_final);

}

