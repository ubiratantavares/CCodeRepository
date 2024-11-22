#include <stdio.h>

int main() {
    int x = 2, y = 20;

    for (int i = 1; i < 10; i++, x *= 2, y -= 1) {
        printf("i = %d \t x = %d \t y = %d \n", i, x, y);
    }

    return 0;
}
