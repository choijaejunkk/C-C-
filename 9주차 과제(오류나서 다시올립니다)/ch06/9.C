#include <stdio.h>

int main(void) {
    int num;
    int count = 0;

    for (int i = 0; i < 10; i++) {
        if (scanf("%d", &num) != 1) return 0;
        
        if (num % 2 == 0) {
            count++;
        }
    }

    printf("Even numbers = %d\n", count);

    return 0;
}