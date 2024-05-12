#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    srand(time(NULL));
    int a = rand() % 2 + 1;
    int b = rand() % 100 + 1;
    int c = rand() % 10;;
    int d = rand() % 113 + 1000;;
    int e = rand() % 3 - 1;
    int f = rand() % 14 - 3;

    printf("%s%d", "a: ", a);
    puts("");
    printf("%s%d", "b: ", b);
    puts("");
    printf("%s%d", "c: ", c);
    puts("");
    printf("%s%d", "d: ", d);
    puts("");
    printf("%s%d", "e: ", e);
    puts("");
    printf("%s%d", "f: ", f);
    puts("");

}