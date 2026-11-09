#include <stdio.h>

int main(void) {
    int scores[5][4];

    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            scanf("%d", &scores[i][j]);
            sum += scores[i][j];
        }
        printf("%d %.1f\n", sum, (double)sum / 4.0);
    }

    return 0;
}