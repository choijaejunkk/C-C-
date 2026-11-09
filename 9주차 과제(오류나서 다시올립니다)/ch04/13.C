#include <stdio.h>

int main() {
    int num;

    printf("1. ADD\n");
    printf("2. EDIT\n");
    printf("3. DEL\n");
    printf("Select: ");

    scanf("%d", &num);

    if (num == 1) {
        printf("You selected ADD.\n");
    }
    else if (num == 2) {
        printf("You selected EDIT.\n");
    }
    else if (num == 3) {
        printf("You selected DEL.\n");
    }
    else {
        printf("Wrong choice.\n");
    }

    return 0;
}