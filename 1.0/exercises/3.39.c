#include <stdio.h>

/*
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
*/
int main(void) {

    unsigned int N;
    printf("N: ");
    scanf("%u", &N);
    //should begin with blank char when row is odd.
    //should begin with * when row is even.
    
    for(unsigned int row = 1; row < N; row++) {

        if (row % 2 == 0) {
            printf("%s", " ");
        }
        for(unsigned int column = 1; column < N; column++) {
            
            printf("%s", "* ");

        }
        puts("");
    }
    
}