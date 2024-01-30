#include <stdio.h>

int main(void) {

    unsigned int counter = 1;

    while (counter <= 100) {

        if (counter % 10 == 0) {

            printf("*");
            puts("");

        }
        else {
            printf("*");
        }
        counter++;
    }
}