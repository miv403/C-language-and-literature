/*
2.16 (Arithmetic) Write a program that reads two integers from the user then displays their sum, product, difference, quotient and remainder.
*/

#include <stdio.h>

int main(void)
{
    int x, y, sum;
    puts("enter two integers:");
    scanf("%d%d", &x, &y);
    printf("%d + %d =  %d\n", x, y, x + y);
    printf("%d * %d =  %d\n", x, y, x * y);
    printf("%d - %d =  %d\n", x, y, x - y);
    if (y != 0)
    {
        printf("%d / %d =  %d\n", x, y, x / y);
        printf("%d mod %d =  %d\n", x, y, x % y);
    }
    else
    {
        puts("second integer is zero. cannot evaluate the division results.");
    }
}    