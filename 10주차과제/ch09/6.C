#include <stdio.h>

int main(void) {
    int arr[100];
    int count = 2;

    arr[0] = 100;
    scanf("%d", &arr[1]);

    while (1) {
        arr[count] = arr[count - 2] - arr[count - 1];
        if (arr[count] < 0) {
            count++;
            break;
        }
        count++;
    }

    for (int i = 0; i < count; i++) {
        printf("%d", arr[i]);
        if (i < count - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}