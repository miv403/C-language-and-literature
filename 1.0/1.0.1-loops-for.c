// Application: Summing the Even Integers from 2 to 100

#include <stdio.h>

int main(void)
{
    int sum = 0;

    for(int i = 1; i <=100; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    printf("the sum is %d", sum);
    puts("");
}