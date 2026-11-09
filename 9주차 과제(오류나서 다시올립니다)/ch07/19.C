#include <stdio.h>

int main(void) {
    int n;

    if (scanf("%d", &n) != 1) return 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("#");
            if (j < i - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < 2 * i; j++) {
            printf(" ");
        }
        for (int j = 0; j < n - i; j++) {
            printf("#");
            if (j < n - i - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}