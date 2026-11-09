#include <stdio.h>

int main() {
    int score;
    int sum = 0, count = 0;
    float avg;

    while (1) {
        scanf("%d", &score);

        if (score < 0 || score > 100) {
            break;
        }

        sum += score;
        count++;
    }

    avg = (float)sum / count;

    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);

    return 0;
}