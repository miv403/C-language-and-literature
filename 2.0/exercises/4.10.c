#include <stdio.h>

int main(void) {

    int counter = -1;
    int total = 0;
    int number = 0;

    while (number != 9999) {

        ++counter;
        printf("%u%s", counter + 1, ". type in a integer (to exit 9999): ");
        total += number;
        scanf("%d", &number);
    }

    double average = (double) total / counter;
    printf("%s%.4lf", "average: ", average);
    puts("");
}