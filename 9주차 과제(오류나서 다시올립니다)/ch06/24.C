#include <stdio.h>

int main(void) {
    int rows, cols;

    if (scanf("%d %d", &rows, &cols) != 2) return 0;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }

    return 0;
}