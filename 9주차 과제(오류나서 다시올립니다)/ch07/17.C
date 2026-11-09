#include <stdio.h>

int main(void) {
    int n;
    char ch = 'A';
    int num = 0;

    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf("%c", ch++);
            if (j < n - i - 1 || i > 0) {
                printf(" ");
            }
        }
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