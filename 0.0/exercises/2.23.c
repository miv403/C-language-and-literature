/*
2.23 (Multiples) Write a program that reads two integers and determines and dis-
plays whether the first is a multiple of the second. Use the remainder operator.
*/

#include <stdio.h>

int main(void)
{
    int x, y;
    puts("enter two integers different from zero: ");
    scanf("%d%d", &x, &y);
    if (y % x == 0)
    {
        printf("%d%s%d", x, " is multiple of ", y);
        puts("");
    }
    else
    {
        printf("%d%s%d", x, " is not multiple of ", y);
        puts("");
        
    }
}