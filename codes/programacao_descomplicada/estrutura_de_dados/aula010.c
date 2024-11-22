/* Programação descomplicada - Estrutura de Dados em C - aula006 - informações da lista estática
Algumas informações básicas sobre a lista:

    - tamanho
    - está vazia?
    - está cheia?
*/

#include <stdio.h>
#include "lista_estatica.h"

int main() {
    // criando uma lista
    Lista* lista = criar_lista();

    // verificando o tamanho da lista
    int tam = tamanho_lista(lista);

    printf("Tamanho da lista: %d\n", tam);

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

