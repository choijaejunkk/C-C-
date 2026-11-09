#include <stdio.h>

int main(void) {
    int pascal[5][5] = {0};

    for (int i = 0; i < 5; i++) {
        pascal[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d", pascal[i][j]);
            if (j < i) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}