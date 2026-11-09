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

    for (int i = count - 1; i >= 0; i--) {
        printf("%d", arr[i]);
        if (i > 0) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}