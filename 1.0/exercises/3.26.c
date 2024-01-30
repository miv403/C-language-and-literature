#include <stdio.h>

int main(void) {

    // three variables; counter, number, largest.

    unsigned int counter = 0;
    unsigned int number = 0;
    unsigned int largest = 0;
    unsigned int largest2nd = 0;

    while (counter < 10) {

        printf("type in a non-negative integer: ");
        scanf("%u", &number);

        if (number > largest) {
            largest = number;
        }
        else if (number > largest2nd) {
            largest2nd = number;
        }
        
        printf("counter: %u" , ++counter);
        puts("");

    }
    printf("largest number is %u", largest);
    puts("");
    printf("second largest number is %u", largest2nd);
    puts("");

}