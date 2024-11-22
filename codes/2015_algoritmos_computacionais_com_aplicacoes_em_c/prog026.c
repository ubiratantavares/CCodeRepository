/*

Calculadora simples

- Leia dois números

- Leia a operação desejada (+ - * /)

- Fazer a operação pedida

- Mostrar o resultado da operação.

A operação escolhida deve ser armazenada em uma variável do tipo char.

*/

#include <stdio.h>

typedef enum {SUM, SUB, MUL, DIV} Operacao;

// função que retorna o caractere de operação correspondente ao enum
char getOperador(Operacao oper) {
    switch (oper) {
        case SUM: return '+';
        case SUB: return '-';
        case MUL: return '*';
        case DIV: return '/';
        default: return '\0';
    }
}

// função que retorna o enum correspondente ao caractere de operação
Operacao getOperacao(char oper) {
    switch (oper) {
        case '+': return SUM;
        case '-': return SUB;
        case '*': return MUL;
        case '/': return DIV;
        default: return -1;
    }
}


int main() {
    float a, b, resultado;
    char operador;

    printf("Digite o primeiro operando: ");
    scanf("%f", &a);

    printf("Digite o segundo operando: ");
    scanf("%f", &b);

    printf("Opções de operação para os operandos: +, -, *, /\n");
    printf("\nDigite o caracter da opção de operação entre os operandos: ");
    scanf(" %c", &operador);

    Operacao operacao = getOperacao(operador);

    if (operacao == -1) {
        printf("Operador inválido.\n");
        return 1;
    }

    switch (operacao) {
        case SUM:
            resultado = a + b;
            break;
        case SUB:
            resultado= a - b;
            break;
        case MUL:
            resultado = a * b;
            break;
        case DIV:
            if (b != 0) {
                resultado = a / b;
            } else {
                printf("Erro: divisão por zero.\n");
                return 1;
            }
    }

    printf("Resultado da operação: %.2f\n", resultado);

    return 0;
}

