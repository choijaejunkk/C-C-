#include <stdio.h>

int main() {
    int num;

    while (1) {
        printf("1. Input\n");
        printf("2. Output\n");
        printf("3. Delete\n");
        printf("4. Finish\n");
        printf("Enter number: \n");

        scanf("%d", &num);

        switch (num) {
            case 1:
                printf("You selected Input.\n\n");
                break;

            case 2:
                printf("You selected Output.\n\n");
                break;

            case 3:
                printf("You selected Delete.\n\n");
                break;

            case 4:
                printf("You selected Finish.\n");
                return 0;

            default:
                printf("Wrong input.\n\n");
        }
    }

    return 0;
}