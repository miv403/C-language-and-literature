
#include <stdio.h>

int main(void) {

    // read five numbers which between 1&30
    // after reading a one number print the line

    unsigned int number;

    for (unsigned int i = 1; i <= 5; ++i) {

        do {
            printf("%u%s", i, ". type in a integer (1-30): ");
            scanf("%u", &number);
        }while (number > 30 || number < 1);

        for (unsigned int i = 0; i < number; ++i) {
            printf("%s", "*");
        }
        puts("");
    }
}