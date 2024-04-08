#include <stdio.h>

int maximum(int x, int y, int z);
// int maximum(int x, int y, int z);
// it could be this too.

int main(void) {

    int number0 = 0, number1 = 0, number2 = 0;

    printf("%s", "type in three integer values: ");

    scanf("%d%d%d", &number0, &number1, &number2);

    int max = maximum(number0, number1, number2);

    printf("%s%d", "the max int is ", max);
    puts("");

    return 0;
}

int maximum(int x, int y, int z) {

    int max = x;

    if (y > max) {

        max = y;
    }
    if (z > max) {

        max = z;
    }

    return max;

}