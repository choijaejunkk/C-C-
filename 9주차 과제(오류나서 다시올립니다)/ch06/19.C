#include <stdio.h>

int main(void) {
    int n;
    int sum = 0;

    if (scanf("%d", &n) != 1) return 0;

    for (int i = 5; i <= n; i += 5) {
        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}