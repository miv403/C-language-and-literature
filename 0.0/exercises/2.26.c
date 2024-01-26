/*
2.26 (Separating Digits in an Integer) Write a program that inputs one five-digit number, separates the number into its individual digits and displays the digits separated from one another by three spaces each. [Hint: Use combinations of integer division and the remainder operation.] For example, if the user types in 42139, the program should display

4   2   1   3   9

*/

#include <stdio.h>

int main(void)
{
    int input;
    int result;
    puts("enter five-digit integer:");
    scanf("%d", &input);
    int a, b, c, d, e;
    e = input % 10;
    input = input / 10;
    d = input % 10;
    input = input / 10;
    c = input % 10;
    input = input / 10;
    b = input % 10;
    input = input / 10;
    a = input % 10;
    input = input / 10;
    printf("%d   %d   %d   %d   %d\n", a, b, c, d, e);
}