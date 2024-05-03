#include <stdio.h>
#include <math.h>

int main (void) {

    double x = fabs(7.5);
    printf("%f\n", x);
    x = floor(7.5);
    printf("%f\n", x);
    x = fabs(0.0);
    printf("%f\n", x);
    x = ceil(0.0);
    printf("%f\n", x);
    x = fabs(-6.4);
    printf("%f\n", x);
    x = ceil(-6.4);
    printf("%f\n", x);
    x = ceil(-fabs(-8 + floor(-5.5)));
    printf("%f\n", x);

}