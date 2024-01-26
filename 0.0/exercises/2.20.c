/*
2.20 (Circle Area, Diameter and Circumference) For a circle of radius 2, display the
diameter, circumference and area. Use the value 3.14159 for π. Use the following for-
mulas (r is the radius): diameter = 2r, circumference = 2πr and area = πr2. Perform each
of these calculations inside the printf statement(s) and use the conversion specifica-
tion %f. This chapter discussed only integer constants and variables. Chapter 3 will
discuss floating-point numbers—that is, values that can have decimal points.
*/

#include <stdio.h>

int main(void)
{
// radius = r
// diameter = 2r
// circumference = 2πr
// area = πrr 
    float r;
    float pi = 3.14159;
    puts("enter diameter:");
    scanf("%f", &r);
    printf("diameter: %f\n", 2 * r);
    printf("circumference: %f\n", 2 * pi * r);
    printf("area: %f\n", pi * r * r);
}
