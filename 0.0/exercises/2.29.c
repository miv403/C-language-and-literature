/*
2.29 (Sort in Ascending Order) Write a program that inputs three different numbers
from the user. Display the numbers in increasing order. Recall that an if statement’s
body can contain more than one statement. Prove that your script works by running
it on all six possible orderings of the numbers. Does your script work with duplicate
numbers? [This is challenging. In later chapters you’ll do this more conveniently and
with many more numbers.]
*/

#include <stdio.h>
int main(void)
{
    // a b c
    // a c b
    // b a c
    // b c a
    // c a b
    // c b a
    int a, b, c;
    puts("type in three integers");
    scanf("%d%d%d", &a, &b, &c);
    if (a >= b)
    {
        if (a >=c)
        {
            if ( b >= c)
            {
                printf("%d %d %d", c, b, a);
            }
            else if ( c >= b)
            {
                printf("%d %d %d", b, c, a);
                
            }
        }
        else if (c >= a)
        {
            printf("%d %d %d", b, a, c);
        }
    }
    else if (b >= a)
    {
        if (b >= c)
        {
            if (a >= c)
            {
            printf("%d %d %d", c, a, b);
            }
            else if (c >= a)
            {
            printf("%d %d %d", a, c, b);
            }
        }
        else if (c >= b)
        {
            printf("%d %d %d", a, b, c);
        }
    }
    puts("");
}