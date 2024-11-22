/* Programação descomplicada - Estrutura de Dados em C - aula009 - consulta na lista estatica

Existem 2 maneiras de consultar um elemento de uma lista: pela posicao (acesso direto) ou pelo conteudo (necessidade de busca)

*/

#include <stdio.h>
#include "lista_estatica.h"

int main() {

    // consulta um elemento pela posicao na lista
	int x = consulta_posicao_lista(li, posicao, &dados_aluno);

    // consulta um elemento pela informacao na lista
    int x = consulta_informacao_lista(li, posicao, &dados_aluno);
    		
    return 0;
}

