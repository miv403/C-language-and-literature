#include <stdio.h>

int main(void) {

    unsigned int N;
    printf("type in a non-negative integer: ");
    scanf("%u", &N);
    for(unsigned int i = 0; i < 34; ++i){printf("~");}
    puts("");
    printf("A\tA + 2\tA + 4\tA + 6");
    puts("");
    for(unsigned int i = 0; i < 34; ++i){printf("~");}
    puts(""); puts("");
    
    unsigned int C = 0;
    while ( C < N ) {

        C += 3;
        printf("%u\t%u\t%u\t%u", C, 2 + C, 4 + C, 6 + C);
        puts("");
    }
    

}