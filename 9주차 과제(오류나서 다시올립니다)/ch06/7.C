#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    // 자연수를 입력받습니다.
    scanf("%d", &n);

    // 1부터 n까지의 합을 구합니다.
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // 결과를 출력합니다.
    printf("%d\n", sum);

    return 0;
}