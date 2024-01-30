#include <stdio.h>

int main(void) {

    unsigned int N;
    printf("type in a non-negative integer: ");
    scanf("%u", &N);
    for(unsigned int i = 0; i < 34; ++i){printf("~");}
    puts("");
    printf("N\t10*N\t100*N\t1000*N");
    puts("");
    for(unsigned int i = 0; i < 34; ++i){printf("~");}
    puts(""); puts("");
    
    unsigned int C = 0;
    while ( C < N ) {

        ++C;
        printf("%u\t%u\t%u\t%u", C, 10*C, 100*C, 1000*C);
        puts("");
    }
    

}