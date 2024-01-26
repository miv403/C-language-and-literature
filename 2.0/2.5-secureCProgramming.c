// ch4.12

#include <stdio.h>

// checking scanf's succesfull inputs with assigning its return value to a int variable.

int main(void){

    int number1, number2;
    int check = 2;
    puts("type in number1 & number2 respectively");
    check = scanf("%d%d", &number1, &number2);
    printf("check: %d\nnumber1: %d\nnumber2: %d\n", check, number1, number2);
}