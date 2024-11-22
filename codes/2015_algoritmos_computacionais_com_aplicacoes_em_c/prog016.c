/*

Considere o critério de aprovação no IF Sudeste MG. Quando o aluno possui menos de 75% de frequência,
ele está reprovado, independente da nota. Possuindo frequência suficiente, são 3 as possibilidades.

Nota igual ou superior a 60 aprova o aluno.

Nota entre 40 (inclusive) e 59 o coloca em prova final e 

Nota menor que 40 o reprova.

A “dupla reprovação” (frequência menor que 75% e nota menor que 40) é registrada como “reprovação por infrequência”).

Faça o algoritmo que leia nota e frequência e informe o resultado final do aluno.

*/

#include <stdio.h>

int main() {
    float nota, frequencia;

    printf("Nota: ");
    scanf("%f", &nota);
   
    printf("Frequencia: ");
    scanf("%f", &frequencia);


    if (frequencia < 75) {
        if (nota < 40) {
            printf("Reprovado por infrequencia.\n");
        } else {
            printf("Reprovado por frequencia.\n");
        }
    } else {
        if (nota < 40) {
            printf("Reprovado por nota.\n");
        } else if (nota < 60) {
            printf("Prova final.\n");
        } else {
	    printf("Aprovado.\n");
        }
    }

    return 0;
}

