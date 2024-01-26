/*
2.18 (Comparing Integers) Write a program that reads two integers from the user
then displays the larger number followed by the words “is larger.” If the numbers
are equal, display the message “These numbers are equal.” Use only the single-selec-
tion form of the if statement you learned in this chapter.
*/

#include <stdio.h>

int main(void)
{
    int x, y;
    puts("enter two integers:");
    scanf("%d%d", &x, &y);
    if (x > y)
    {
        printf("%d is larger.\n", x);
    }
    if (x < y)
    {
        printf("%d is larger.\n", y);
    }
    if (x == y)
    {
        puts("these numbers are equal.");
    }
}