#include <stdio.h>

int main(void) {
    int arr[10];
    int sum_odd = 0;
    int sum_even = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        if ((i + 1) % 2 != 0) {
            sum_odd += arr[i];
        } else {
            sum_even += arr[i];
        }
    }

    printf("odd : %d\n", sum_odd);
    printf("even : %d\n", sum_even);

    return 0;
}