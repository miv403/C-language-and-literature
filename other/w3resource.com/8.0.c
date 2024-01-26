/*
Write a C program to convert specified days into years, weeks and days.
Note: Ignore leap year.

Test Data :
Number of days : 1329
Expected Output :
Years: 3
Weeks: 33
Days: 3 
*/

#include <stdio.h>

int main(void)
{
    int daysIn;
    int years = 0;
    int weeks = 0;
    int days = 0 ;
    puts("Number of days : ");
    scanf("%d", &daysIn);
    while ( daysIn >= 360)
    {
       // evaluation for years
       daysIn -= 360;
       years++; 
    }
    while ( daysIn >= 7)
    {
        // evaluation for weeks
        daysIn -= 7;
        weeks++;
    }
    // the remain daysIn is days
    days = daysIn;
    printf("%s%d", "Years: ", years);
    puts("");
    printf("%s%d", "Weeks: ", weeks);
    puts("");
    printf("%s%d", "Days: ", days);
    puts("");

}