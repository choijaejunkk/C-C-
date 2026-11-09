#include <stdio.h>

int main(void) {
    int a, b;

    if (scanf("%d %d", &a, &b) != 2) return 0;

    int start = (a < b) ? a : b;
    int end = (a > b) ? a : b;

    int sum = 0;
    int count = 0;

    for (int i = start; i <= end; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
            count++;
        }
    }

    double avg = (count > 0) ? (double)sum / count : 0.0;

    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);

    return 0;
}