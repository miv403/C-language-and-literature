#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    srand(time(NULL));
    int a = (rand() % 5 + 1) * 2; 
    int b = (rand() % 5 + 1) * 2 + 1;
    int c = ((rand() % 5 + 1) * 2 + 1) * 2;

    printf("%s%d", "a: ", a);
    puts("");
    printf("%s%d", "b: ", b);
    puts("");
    printf("%s%d", "c: ", c);
    puts("");

}