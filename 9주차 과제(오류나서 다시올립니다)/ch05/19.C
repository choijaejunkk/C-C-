#include <stdio.h>

int main() {
    float width, height, area;
    char answer;

    do {
        scanf("%f %f", &width, &height);

        area = width * height / 2;

        printf("Triangle area = %.1f\n", area);
        printf("Continue? ");

        scanf(" %c", &answer);

    } while (answer == 'Y' || answer == 'y');

    return 0;
}