/*
5. Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
Expected Output:
Perimeter of the rectangle = 24 inches
Area of the rectangle = 35 square inches
*/

#include <stdio.h>

int main(void)
{
   int height = 7;
   int width = 5;
   int perimeter = 2*(height+width);
   int area = 7 * 5;
   printf("Perimeter of rectangle = %d inches\n", perimeter);
   printf("Area of rectangle = %d square inches\n", area);
}