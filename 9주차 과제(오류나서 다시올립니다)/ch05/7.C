#include <stdio.h>

int main() {
    int num;
    int cnt = 0;
    int sum = 0;
    float avg;

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        sum += num;
        cnt++;
    }

    avg = (float)sum / cnt;

    printf("cnt = %d\n", cnt);
    printf("sum = %d\n", sum);
    printf("avg = %.2f\n", avg);

    return 0;
}