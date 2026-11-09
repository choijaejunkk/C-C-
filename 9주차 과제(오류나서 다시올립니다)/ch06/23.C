#include <stdio.h>

int main(void) {
    int n;

    if (scanf("%d", &n) != 1) return 0;

    for (int i = 1; i <= 10; i++) {
        printf("%d ", n * i);
    }
    printf("\n");

    return 0;
}