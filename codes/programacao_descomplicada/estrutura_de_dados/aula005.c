/* Programação descomplicada - Estrutura de dados - aula005 - implementando lista estática

Implementando uma lista sequencial estática.

    -criar o arquivo "lista_estatica.h" que define:
        - os protótipos das funções
	- o tipo de dados armazenado na lista
	- o ponteiro "lista"
	- o tamanho do vetor usado na lista

    - criar o arquivo "lista_estatica.c" que define:
	- o tipo de dados "lista".
	- as implementações das funções.
*/

#include <stdio.h>
#include "lista_estatica.h"

int main() {
    // criando uma lista
    Lista* lista = criar_lista();

    // verificando se a lista está vazia
    if (esta_vazia_lista(lista)) {
        printf("A lista está vazia.\n");
    } else {
        printf("A lista não está vazia.\n");
    }

    // verificando se a lista está cheia
    if (esta_cheia_lista(lista)) {
        printf("A lista está cheia.\n");
    } else {
        printf("A lista não está cheia.\n");
    }

    // liberando a lista
    liberar_lista(lista);

    return 0;
}
