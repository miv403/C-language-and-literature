/*
6. Write a C program to compute the perimeter and area of a circle with a given radius.
Expected Output:
Perimeter of the Circle = 37.680000 inches
Area of the Circle = 113.040001 square inches
*/

#include <stdio.h>

int main (void)
{
    float radius;
    float perimeter;
    float area;
    const float pi = 3.14;
    
    scanf("%f", &radius);
    perimeter = 2*pi*radius;
    area = pi*radius*radius;
    printf("Perimeter of the Circle = %.4f inches\nArea of the circle = %.4f square inches\n", perimeter, area);
}