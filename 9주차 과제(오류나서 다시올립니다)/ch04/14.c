#include <stdio.h>

int main() {
    char grade;

    scanf("%c", &grade);

    if (grade == 'A') {
        printf("Excellent\n");
    }
    else if (grade == 'B') {
        printf("Good\n");
    }
    else if (grade == 'C') {
        printf("Usually\n");
    }
    else {
        printf("error\n");
    }

    return 0;
}