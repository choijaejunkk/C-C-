#include <stdio.h>

int main(void) {
    int score;
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        if (scanf("%d", &score) != 1) return 0;
        sum += score;
    }

    double avg = (double)sum / 5;

    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);

    return 0;
}