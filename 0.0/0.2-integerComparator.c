// ch2.6

#include <stdio.h>

int main(void){

    // firstly we should get the integers from the users
    int integer0;
    int integer1;
    printf("integer1: ");
    scanf("%d", &integer0);
    printf("integer2: ");
    scanf("%d", &integer1);


    // then we should make decisions with if statements to compare the integers.
    printf("they satisfy:\n");
    if (integer0 == integer1){
        printf("%d is equal to %d\n", integer0, integer1);

    }
    if (integer0 != integer1){
        printf("%d is not equal to %d\n", integer0, integer1);

    }
    if (integer0 < integer1){
        printf("%d is less than %d\n", integer0, integer1);

    }
    if (integer0 > integer1){
        printf("%d is greater than %d\n", integer0, integer1);

    }
    if (integer0 <= integer1){
        printf("%d is less than or equal to %d\n", integer0, integer1);

    }
    if (integer0 >= integer1){
        printf("%d is greater than or equal to %d\n", integer0, integer1);

    }
 
}