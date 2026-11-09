#include <stdio.h>

int main(void) {
    int arr[100];
    int count = 0;

    for (int i = 0; i < 100; i++) {
        int num;
        if (scanf("%d", &num) != 1 || num == 0) {
            break;
        }
        arr[count++] = num;
    }

    printf("%d\n", count);

    for (int i = 0; i < count; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d", arr[i] * 2);
        } else {
            printf("%d", arr[i] / 2);
        }
        if (i < count - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}