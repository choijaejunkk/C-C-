#include <stdio.h>

int main(void) {
    int a, b;
    
    if (scanf("%d %d", &a, &b) != 2) return 0;

    int start = (a < b) ? a : b;
    int end = (a > b) ? a : b;

    for (int i = start; i <= end; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}