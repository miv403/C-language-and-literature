#include <stdio.h>

int perfectCheck(const unsigned int *number);

int main(void) {

    for(unsigned int i = 2; i <= 100000000; ++i) {
        if (perfectCheck(&i)) {
            printf("%d%s", i, " is perfect.");
            puts("");
        }
    }

    return 0;
}


int perfectCheck(const unsigned int *number) {

    unsigned int isPerfect = 1;

    for(unsigned int i = 2; i <= (*number / 2); ++i){
        if(*number % i == 0) {
            isPerfect += i;
        }
    }
    if (isPerfect == *number)
        return 1;
    else
        return 0;
}