#include <stdio.h>

int main(void) {
    int arr[10];
    int sum_even = 0;
    int sum_odd = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        if ((i + 1) % 2 == 0) {
            sum_even += arr[i];
        } else {
            sum_odd += arr[i];
        }
    }

    printf("sum : %d\n", sum_even);
    printf("avg : %.1f\n", (double)sum_odd / 5.0);

    return 0;
}