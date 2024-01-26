// ch4.8

#include <stdio.h>

int main(void){

    int x = 1;

    for (; x < 10; ++x){
        if (x == 5) {
            break;
        }
        printf("%d ", x);
    }
    printf("\nthe loop is ended and x is equal to %d\n", x);

    x = 1;
       // loop 10 times
    for (int x = 1; x <= 10; ++x) {
        // if x is 5, continue with next iteration of loop
        if (x == 5) {
            continue; // skip remaining code in loop body
        }
        printf("%d ", x);
    }
    puts("\nUsed continue to skip printing the value 5");
} 
