// Programação descomplicada - Estrutura de Dados em C - Aula 01 - TAD (Tipo Abstrato de Dado)

#include <stdio.h>
#include <stdlib.h>

int main() {
	/*
	Tipo de dado: define o conjunto de valores (domínio) que uma variável pode assumir. Exemplo: int (-2, -1, 0, 1, 2, ...).

	Estrutura de dados: trata-se de um relacionamento lógico entre tipos de dados.

	Tipos abstratos de dados (TAD):
		- Incluem as operações para a manipulação dos dados:
			- criação da estrutura;
			- inclusão de um elemento;
			- remoção de um elemento;
			- acesso a um elemento;
			- atualização de um elemento;
			- etc.

		- Vantagens:
			- encapsulamento e segurança: usuário não tem acesso direto aos dados.
			- flexibilidaed e reutilização: podemos alterar o TAD sem alterar as aplicações que a utilizam.

		- Exemplo: arquivos em C (FILE* f). Os dados de f somente podem ser acessados pelas funções de manipulação do tipo, tais como, fopen(), fclose(), fputc(), fgetc(), feof(), etc.

	*/
	system("pause");
	return 0;
}
