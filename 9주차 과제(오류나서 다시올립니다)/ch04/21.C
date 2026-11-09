#include <stdio.h>

int main() {
    int year;

    scanf("%d", &year);

    if (year % 400 == 0)
        printf("leap year\n");
    else if (year % 100 == 0)
        printf("common year\n");
    else if (year % 4 == 0)
        printf("leap year\n");
    else
        printf("common year\n");

    return 0;
}