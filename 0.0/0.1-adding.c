// c2.3
#include <stdio.h>

int main(void){

    int integer0;
    int integer1;
    int sum;
    printf("type integer0: ");
    scanf("%d", &integer0);
    printf("type integer1: ");
    scanf("%d", &integer1);
    sum = integer0 + integer1;
    printf("the sum is %d\n", sum);
    //printf("the sum is %d\n", integer0 + integer1); // the operation can be made in single line.
}

/*
% : conversion specifier
& : address operator

we could use:
        int sum = integer0 + integer1;
    OR
        printf("sum is %d", integer0 + integer1)

*/