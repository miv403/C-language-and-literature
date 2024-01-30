#include <stdio.h>

int main(void) {

    unsigned int counter = 0;
    while (counter <= 1000000000) {
        if (counter % 100000000 == 0){
            printf("%d", counter);
            puts("");
        }
        counter++;
    }
}