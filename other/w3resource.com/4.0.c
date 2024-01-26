/*
4. Write a C program to print the following characters in reverse.
Test Characters: 'X', 'M', 'L'
Expected Output:
The reverse of XML is LMX
*/

#include <stdio.h>

int main(void)
{
    char char0 ='A';
    char char1 ='B';
    char char2 ='C';

    printf("The reverse of %c%c%c is %c%c%c\n", char0, char1, char2, char2, char1, char0);

}