#include <stdio.h>

int main(void) {
    int n;
    int num = 1;

    if (scanf("%d", &n) != 1) return 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d", num++);
            if (j < i - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}