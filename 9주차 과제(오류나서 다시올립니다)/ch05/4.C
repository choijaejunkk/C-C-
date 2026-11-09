#include <stdio.h>

int main() {
    int n;
    int num = 1;
    int sum = 0;

    scanf("%d", &n);

    while (num <= n) {
        sum += num;
        num++;
    }

    printf("%d\n", sum);

    return 0;
}