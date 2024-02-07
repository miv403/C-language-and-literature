#include <stdio.h>

int main(void) {

    unsigned int counter = 1;

    for(; counter <= 5; ++counter) {
        printf("%u ", counter);
    }
    puts("");
    printf("%u ", counter);
    puts("");
}

