#include <stdio.h>

int main(void) {

    double pi = 3.14159;
    double radius, circumference, area;

    do {
        printf("%s", "type in the radius of the circle (0.00): ");
        scanf("%lf", &radius);
    } while (radius < 0);

    circumference = 2 * pi * radius;
    area = pi * radius * radius;

    printf("%s", "the circumference of the circle is ");
    printf("%.2lf", circumference);
    puts("");
    printf("%s", "the area of the circle is ");
    printf("%.2lf", area);
    puts("");
}