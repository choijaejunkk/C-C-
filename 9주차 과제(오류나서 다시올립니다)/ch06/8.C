#include <stdio.h>

int main(void) {
    int n;
    int sum = 0;

    if (scanf("%d", &n) != 1) return 0;

    for (int i = n; i <= 100; i++) {
        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}