#include <stdio.h>

int main(void) {
    int n;
    int num = 1;
    char ch = 'A';

    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf("%d ", num++);
        }
        for (int j = 0; j <= i; j++) {
            printf("%c", ch++);
            if (j < i) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}