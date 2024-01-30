#include <stdio.h>

int main(void) {

    int two = 2;
    int a = 1;
    while (a){
        printf("%d ", two);
        two *= 2;
        if (two > 1000000){
            break;
        }
    }
}