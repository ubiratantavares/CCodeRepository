// programa com interrupção com continue (versao 2 - incorreto)

#include <stdio.h>

int main() {
	int i = 0;
	while (i < 10) {
		if (i == 5)
			continue;
		printf("%d", i);
		i++;
	}
	printf("fim\n");
	return 0;
}
