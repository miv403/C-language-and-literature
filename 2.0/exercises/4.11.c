#include <stdio.h>
#include <limits.h>

int main(void) {

    int number;
    int min = INT_MAX;
    unsigned int counter;

    printf("type in the count of integers to be compared: ");
    scanf("%u", &counter);

    for ( int i = 1; i <= counter; ++i) {

        printf("%u%s", i, ". type in a integer (-1 to exit): ");
        scanf("%d", &number);
        if ( number < min) {
            min = number;
        }
    }
    printf("%s%d", "min: ", min);
    puts("");
}