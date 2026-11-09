#include <stdio.h>

int main(void) {
    int arr[100];
    int count = 0;
    int max, min;

    for (int i = 0; i < 100; i++) {
        int num;
        if (scanf("%d", &num) != 1 || num == 0) {
            break;
        }
        arr[count++] = num;
    }

    if (count == 0) return 0;

    max = arr[0];
    min = arr[0];

    for (int i = 1; i < count; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("%d\n", max + min);

    return 0;
}