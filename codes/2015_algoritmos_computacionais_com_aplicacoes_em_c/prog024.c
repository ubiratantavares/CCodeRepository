/*
Leia um peso na Terra e o número de um planeta.
Imprima o valor deste peso no planeta escolhido.
A relação de planetas é dada na Tabela 3.1,
juntamente com os valores das gravidades relativas à da Terra.

Número	Gravidade relativa	Planeta
1	0.376			Mercúrio
2	0.903			Vênus
3	0.380			Marte
4	2.340			Júpiter
5	1.160			Saturno
6	1.150			Urano
7	1.190			Netuno
Tabela 3.1: Gravidades relativas em outros planetas
*/

#include <stdio.h>
#include <stdlib.h>

typedef enum {MERCURIO = 1, VENUS, MARTE, JUPYTER, SATURNO, URANO, NETUNO} planetas;

int main() {
    float peso = 0.0;
    int planeta = 0;
    float gravidade_relativa[] = {1.0, 0.376, 0.903, 0.380, 2.340, 1.160, 1.150, 1.190};

    printf("Digite o peso do objeto na Terra (em Newtons): ");
    scanf("%f", &peso);

    printf("Escolha o número do planeta:\n");
    printf("1 - Mercúrio\n2 - Vênus\n3 - Marte\n4 - Júpiter\n5 - Saturno\n6 - Urano\n7 - Netuno\n");
    printf("Digite o número do planeta: ");
    scanf("%d", &planeta);

    if (planeta < MERCURIO || planeta > NETUNO) {
        printf("Número de planeta inválido.\n");
    } else {
        peso *= gravidade_relativa[planeta];
        printf("O peso do objeto no planeta escolhido é %.2f N.\n", peso);
    }

    return 0;
}
