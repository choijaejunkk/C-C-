#include <stdio.h>

int main(void) {
    int n;
    int score;
    int sum = 0;

    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &score) != 1) return 0;
        sum += score;
    }

    double avg = (double)sum / n;

    printf("avg : %.1f\n", avg);
    if (avg >= 80.0) {
        printf("pass\n");
    } else {
        printf("fail\n");
    }

    return 0;
}