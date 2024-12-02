// programa com interrupção com break

#include <stdio.h>

int main() {
	int i;
	for (i = 0; i < 10; i++) {
		if (i == 5)
			break;
		printf("%d", i);
	}
	printf("fim\n");
	return 0;
}
