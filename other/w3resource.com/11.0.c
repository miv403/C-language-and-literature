/*
11. Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.
Test Data :
Weight - Item1: 15
No. of item1: 5
Weight - Item2: 25
No. of item2: 4
Expected Output:
Average Value = 19.444444
*/

#include <stdio.h>

int main(void)
{
    double weight0, weight1, no0, no1, average;
    printf("Weight - Item1: ");
    scanf("%lf", &weight0);
    printf("No. of item1: ");
    scanf("%lf", &no0);
    printf("Weight - Item2: ");
    scanf("%lf", &weight1);
    printf("No. of item2: ");
    scanf("%lf", &no1);
    average = ((weight0 * no0) + (weight1 * no1)) / (no0 + no1);
    printf("%s%lf", "Average Value = ", average);
    puts("");
}