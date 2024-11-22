// Programação descomplicada - Estrutura de dados em C - aula003 - listas: definição

#include <stdio.h>

int main() {
	/*
	Uma estrutura do tipo Lista é uma sequência de elementos do mesmo tipo.
	Seus elementos possuem estrutura interna abstraída, ou seja, sua complexidade é
	arbitrária e não afeta o seu funcionamento.

	Uma lista pode possuir N (N >= 0) elementos.

	Se N = 0, dizemos que a Lista está vazia.

	Aplicações: cadastro de funcionários, itens em estoque, cartas de baralho, etc.

	Em uma Lista podemos realizar as seguintes operações básicas:
		- criar uma lista
		- inserir um elemento na lista
		- excluir um elemento da lista
		- acessar um elemento da lista
		- modificar um elemento da lista
		- destruir uma lista

	As operações dependem do tipo de alocação de memória usada: estática ou dinâmica.

	Alocação estática:
		- O espaço de memória é alocada no momento da compilação.
		- Exige a definição do número máximo de elementos da Lista.
		- Acesso sequencial (elementos consecutivos na memória)

	Alocação dinâmica:
		- O espaço de memória é alocado em tempo de execução.
		- A Lista cresce à medida que novos elementos são armazenados, e diminui à medida que elementos são removidos.
		- Acesso encadeado (cada elemento pode estar em uma área distinta da memória. Para acessar um elemento, é preciso 
		percorrer todos os seus antecessores na Lista.
	*/
	return 0;
}
