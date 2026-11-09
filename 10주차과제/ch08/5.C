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

    for (int i = 1; i < count; i += 2) {
        printf("%d", arr[i]);
        if (i + 2 < count) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}