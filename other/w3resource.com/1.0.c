// https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php

/*
1. Write a C program to print your name, date of birth, and mobile number.
Expected Output:

Name   : Alexandra Abramov  
DOB    : July 14, 1975  
Mobile : 99-9999999999
*/

#include <stdio.h>

int main(void)
{
    printf("%-7s%s", "Name",":");
    printf("%-2s", " ahmet emin kizilkan\n");
    printf("%-7s%s", "DOB",":");
    printf("%-2s", " January 06, 2003\n");
    printf("%-7s%s", "Mobile",":");
    printf("%-2s", " 90-3133133131\n");

}