#include <stdio.h>

int main(void) {

    // three variables; counter, number, largest.

    unsigned int counter = 0;
    unsigned int number = 0;
    unsigned int largest = 0;

    while (counter < 10) {

        printf("type in a non-negative integer: ");
        scanf("%u", &number);

        if (number > largest) {
            largest = number;
        }
        
        printf("counter: %u" , ++counter);
        puts("");

    }
    printf("the largest number is %u", largest);
    puts("");


}
