/*
2.19 (Arithmetic, Largest Value and Smallest Value) Write a program that inputs
three different integers from the keyboard, then displays the sum, the average, the
product, the smallest and the largest of these numbers. Use only the single-selection
form of the if statement you learned in this chapter. The screen dialogue should ap-
pear as follows:

Enter three different integers: 13 27 14
Sum is 54
Average is 18
Product is 4914
Smallest is 13
Largest is 27
*/
#include <stdio.h>

int main(void)
{
    int x, y, z;
    puts("enter three different integers:");
    scanf("%d%d%d", &x, &y, &z);
    printf("sum is %d\n", x + y + z);
    printf("average is %d\n", (x + y + z)/3);
    printf("product is %d\n", x * y * z);

    if (x > y)
    {
        if (x > z && y > z)
        {
            printf("smallest %d\n", z);
            printf("largest %d\n", x);
        }
        if (x > z && z > y)
        {
            printf("smallest %d\n", y);
            printf("largest %d\n", x);
        }
    }
    if (y > x)
    {
        if (y > z && x > z)
        {
            printf("smallest %d\n", z);
            printf("largest %d\n", y);
        }
        if (y > z && z > x)
        {
            printf("smallest %d\n", x);
            printf("largest %d\n", y);

        }
            
    }
    if (z > x)
    {
        if (z > y && x > y)
        {
            printf("smallest %d\n", y);
            printf("largest %d\n", z);

        }
        if (z > y && y > x)
        {
            printf("smallest %d\n", x);
            printf("largest %d\n", z);

        }
    }
}




