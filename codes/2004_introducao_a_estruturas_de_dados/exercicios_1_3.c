/*
Implemente uma função que retorne o n-ésimo termo da série de fibonacci.
A série de fibonacci é dada por: 1 1 2 3 5 8 13 21 ..., isto é,
os dois primeiros termos são iguais a 1 e cada termo seguinte  é a soma dos dois termos anteriores.
Essa função deve obedecer ao protótipo: int fibonacci(int n);
*/

#include <stdio.h>

int ler(char* mensagem);
int fibonacci(int n);
void imprimir(int termo);

int main() {
	int numero = ler("Informe a quantidade de termos da série de fibonacci: ");
	for (int i = 1; i <= numero; i++) {
		int termo = fibonacci(i);
		imprimir(termo);
	}
	printf("\n");
	return 0;
}

int ler(char* mensagem) {
	int numero;
	printf("%s", mensagem);
	scanf("%d", &numero);
	return numero;
}

int fibonacci(int n) {
	int t1 = 1;
	int t2 = 1;
	int t3;
	if (n == 1 || n == 2) {
		return t1;
	} 
	for (int i = 3; i <= n; i++) {
		t3 = t1 + t2;
		t1 = t2;
		t2 = t3;
	}
	return t3;	
}

void imprimir(int termo) {
	printf("%d\t", termo);
}
