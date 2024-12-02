// programa com interrupção com continue (versao 1)

#include <stdio.h>

int main() {
	int i;
	for (i = 0; i < 10; i++) {
		if (i == 5)
			continue;
		printf("%d", i);
	}
	printf("fim\n");
	return 0;
}
