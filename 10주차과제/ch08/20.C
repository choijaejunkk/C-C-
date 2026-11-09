#include <stdio.h>

int main(void) {
    int num;
    int count = 0;
    int sum = 0;

    for (int i = 0; i < 100; i++) {
        if (scanf("%d", &num) != 1 || num == 0) {
            break;
        }
        if (num % 5 == 0) {
            count++;
            sum += num;
        }
    }

    printf("Multiples of 5 : %d\n", count);
    printf("sum : %d\n", sum);
    if (count > 0) {
        printf("avg : %.1f\n", (double)sum / count);
    } else {
        printf("avg : 0.0\n");
    }

    return 0;
}