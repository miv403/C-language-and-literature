#include <stdio.h>

int main(void){

    unsigned int c = 1;
    while (c <= 10) {

        printf("%u", c);
        printf("   ");
        ++c;

    }
    
    puts("");
    
}