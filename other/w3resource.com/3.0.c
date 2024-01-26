//3. Write a C program to print a block F using the hash (#), where the F has a height of six characters and width of five and four characters. And also print a very large 'C'. 
/*
######
#
#
#####
#
#
#

    ######
  ##      ##
 #
 #
 #
 #
 #
  ##      ##
    ######
*/

#include <stdio.h>

int newLineHash(int n);
int sameLineHash(int n);

int main(void)
{
    sameLineHash(6);
    newLineHash(2);
    sameLineHash(5);
    newLineHash(3);

    printf("%-4s", "\n ");
    sameLineHash(6);
    printf("%s", "\n ");
    sameLineHash(2);
    printf("%-6s", " ");
    sameLineHash(2);
    newLineHash(5);
    printf("%s", " ");
    sameLineHash(2);
    printf("%-6s", " ");
    sameLineHash(2);
    printf("%-4s", "\n ");
    sameLineHash(6);
    puts(""); 

}

int newLineHash(int n)
{
    int i = 0;
    puts("");
    while (i < n)
    {
        puts("#");
        i++;
    }
}
int sameLineHash(int n)
{
    int i = 0;
    while (i < n)
    {
        printf("%s", "#");
        i++;
    }
}