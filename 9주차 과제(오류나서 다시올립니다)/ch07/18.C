#include <stdio.h>

int main(void) {
    int n;
    int num = 1;

    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf("  ");
        }
        for (int j = 0; j < n - i; j++) {
            printf("%d", num++);
            if (j < n - i - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}