/*
Questão de múltipla escolha

Mostre uma questão de múltipla escolha com 5 opções (letras a, b, c, d, e).

Sabendo a resposta certa, receber a opção do usuário;

Informar a letra que o usuário marcou e se a resposta está certa ou errada.

Usar o tipo char para armazenar a variável de teste do switch.

Ela pode ser lida do teclado com scanf e a máscara %c ou com a função getchar() (opcao = getchar()).

Na comparação do case, deve-se colocar o valor a ser comparado entre aspas simples: case ’a’.
*/

#include <stdio.h>

typedef enum {A = 'a', B = 'b', C = 'c', D = 'd', E = 'e'} Alternativa;

typedef enum {false = 0, true = 1} bool;

int main() {
    char respostaQuestao;
    bool acertou = false;
    Alternativa alternativas[] = {A, B, C, D, E};

    int numAlternativas = sizeof(alternativas)/sizeof(alternativas[0]);

    Alternativa gabaritoQuestao = C;

    printf("Questão: Qual é a capital da França?\n\n");
    printf("(a) Londres\n(b) Berlim\n(c) Paris\n(d) Roma\n(e) Madrid\n\n");
    printf("Digite a letra da sua resposta para a questão: ");
    respostaQuestao = getchar();

    printf("\nVocê escolheu a alternativa: %c\n\n", respostaQuestao);

    switch (respostaQuestao) {
        case A:
        case B:
        case C:
        case D:
        case E:
            {
                acertou = respostaQuestao == gabaritoQuestao;
                if (acertou) {
                    printf("Resposta correta.\n");
                } else {
                    printf("Resposta errada.\n");
                }
                break;
            }
        default:
            {
                printf("Alternativa inválida. Por favor, escolha uma opção entre: \n");
                for (int i = 0; i < numAlternativas; i++) {
                    printf("%c\n", alternativas[i]);
                }
            }
    }

    return 0;
}


