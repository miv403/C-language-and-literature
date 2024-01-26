/*
2.27 (Table of Squares and Cubes) Using only the techniques you learned in this
chapter, write a program that calculates the squares and cubes of the numbers from 0 to 10 and uses tabs to display the following table of values
number  square  cube
0       0       0
1       1       1
2       4       8
10      100     1000
*/

#include <stdio.h>

int main(void)
{
    int i = 0;
    puts("number  square  cube");
    while (i < 11)
    {
       printf("%d\t", i);
       printf("%d\t", i * i);
       printf("%d\n", i * i * i);
       i++;
    }

}
