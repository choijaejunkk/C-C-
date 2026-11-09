#include <stdio.h>

int main(void) {
    int total_all = 0;

    for (int i = 0; i < 4; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int sum = a + b + c;
        printf("%d\n", sum);
        total_all += sum;
    }

    printf("%d\n", total_all);

    return 0;
}