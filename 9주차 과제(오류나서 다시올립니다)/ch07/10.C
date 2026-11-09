#include <stdio.h>

int main(void) {
    int n;
    char ch = 'A';

    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf("%c", ch++);
        }
        printf("\n");
    }

    return 0;
}