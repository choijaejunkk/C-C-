#include <stdio.h>

int main() {
    int n;

    // 2 이상 50 이하의 정수를 입력받습니다.
    scanf("%d", &n);

    // 2부터 시작하여 n 이하까지 2씩 증가시키며 짝수를 출력합니다.
    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }

    return 0;
}