/* 
Implemente uma função para testar se um número inteiro é primo ou não.
Essa função deve obedecer ao protótipo a seguir e ter como valor de retorno 1 se n for primo e 0 caso contrário.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ler(char* mensagem);
int contarTotalDivisores(int numero);
int ehPrimo(int numero);
void imprimir(int numero, int valor);

int main() {
	int numero = ler("Informe o número inteiro: ");
	int total = contarTotalDivisores(numero);
	int valor = ehPrimo(total);
	imprimir(numero, valor);

	for (int i = 1; i <= 100; i++) {
		total = contarTotalDivisores(i);
		valor = ehPrimo(total);
		imprimir(i, valor);		
	}
	return 0;
}

int ler(char* mensagem) {
	int numero;
	printf("%s", mensagem);
	scanf("%d", &numero);
	return numero;
}

int contarTotalDivisores(int numero) {
	int total = 0;
	for (int i = 1; i <= numero; i++) {
		if (numero % i == 0) {
			total++;
		}
	}
	return total;	
}

int ehPrimo(int total) {
	if (total == 2) {
		return 1;
	} else {
		return 0;
	}
}

void imprimir(int numero, int valor) {
	if (valor == 1) {
		printf("O número %d é primo.\n", numero);
	} else {
		printf("O número %d não é primo.\n", numero);		
	}
}
