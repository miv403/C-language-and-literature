#include <stdio.h>

int main(void) {

    unsigned int input, original;
    do {
        printf("%s", "type in a maximum five-digit non-negative integer: ");
        scanf("%u", &input);
    } while (input > 99999);

    original = input;

    unsigned int counter = 0;
    while (input > 0) {

        unsigned int lastDigit = input % 10;
        if (lastDigit == 7){
            counter++;
        }
        input /= 10;
    }

    printf("%d%s", counter, " seven in ");
    printf("%d", original);
    puts("");

}