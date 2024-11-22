/*
Adivinhar um número
Gere um número aleatório de 0 a 9.
Receba um palpite via teclado.
Informe se o palpite é certo ou errado.

Dicas:

• A linha srand (time(NULL)); faz com que o número gerado varie a cada execução do programa.
• A linha numeroGerado = rand(); gera um número aleatório (função rand()) e atribui este valor à variável numeroGerado.
• O operador % é chamado operador módulo ou resto da divisão. Assim, x = y % 10; atribui à variável x o resto da divisão de y por 10. Ou seja, se y = 23, x receberá o valor 3.
• O número gerado com a função rand() é grande. Se aplicarmos o operador módulo deste número grande por 10, por exemplo, teremos sempre o resto da divisão por 10, o que será um número de zero a 9.
• Teste de igualdade em C é feito com == e não apenas com um =.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int bool;

#define true 1
#define false 0

int main() {
    int numeroPalpite, numeroGerado, tentativas = 0;
    bool acertou = false;

    srand(time(NULL));

    while (!acertou)  {

        printf("Digite um palpite para o número gerado: ");
        scanf("%d", &numeroPalpite);

        numeroGerado = rand() % 10;

        acertou = numeroPalpite == numeroGerado;

        tentativas++;

        printf("%d\n", numeroPalpite);
        printf("%d\n", numeroGerado);

        if (acertou) {
          printf("Parabéns. Você advinhou o número gerado após %d tentativa(s).\n", tentativas);
        } else {
          printf("Lamento. Você não advinhou o número gerado. Tente novamente!\n");
    	}
    }

    return 0;
}
