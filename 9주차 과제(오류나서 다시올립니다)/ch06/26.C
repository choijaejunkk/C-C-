#include <stdio.h>

int main(void) {
    int a, b;

    if (scanf("%d %d", &a, &b) != 2) return 0;

    int step = (a <= b) ? 1 : -1;

    for (int i = 1; i <= 9; i++) {
        int dan = a;
        while (1) {
            printf("%d * %d = %2d", dan, i, dan * i);

            if (dan == b) {
                printf("\n");
                break;
            } else {
                printf("   ");
            }
            dan += step;
        }
    }

    return 0;
}