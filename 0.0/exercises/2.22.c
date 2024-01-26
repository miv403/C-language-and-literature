/*
2.22 (Odd or Even) Write a program that reads an integer and determines and dis-
plays whether it’s odd or even. Use the remainder operator. An even number is a multiple of two. Any multiple of two leaves a remainder of zero when divided by 2.
*/

#include <stdio.h>

int main(void)
{
    int x;
    puts("enter an integer:");
    scanf("%d", &x);
    if (x != 0)
    {
        if (x % 2 == 0)
        {
            printf("%d ", x);
            puts("is even.");
        }
        if (x % 2 != 0)
        {
            printf("%d ", x);
            puts("is odd.");
            
        }
    }
    else
    {
        puts("0 is even.");
    }
}
