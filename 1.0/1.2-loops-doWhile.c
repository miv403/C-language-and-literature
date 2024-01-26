//ch4.7

#include <stdio.h>

int main(void) {
    int counter = 1;

    do {
        printf("%d ",counter);
    }while(++counter <= 5);
    puts("");
}

// `++counter` means preincrement.
// firstly counter value will be incremented then it will be compared.
// which this causes to printing 1 2 3 4 5 intead 1 2 3 4 5 6