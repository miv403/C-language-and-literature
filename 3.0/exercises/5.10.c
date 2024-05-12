#include <stdio.h>
#include <math.h>

//int floorA(double x);
void roundIt(double *x);
int main(void) {

/*
    double x;
    printf("%s","input: ");
    scanf("%lf", &x);
    int output = floorA(x);

    printf("%s%d", "output: ", output);
    puts("");
*/

    double x;
    do{
        printf("%s", "type in a float [to exit -1]: ");
        scanf("%lf", &x);
        printf("%.5lf%s", x, " rounds to ");
        roundIt(&x);
        printf("%.1lf", x);
        puts("");
    }while (x != -1);

    return 0;
}

void roundIt(double *x) {

    *x = floor(*x + 0.5);

}

/* 
int floorA(double x) {
    double middle = (ceil(x) + floor(x)) / 2;
    if( x < middle)
        return floor(x);
    else
        return ceil(x);
}
*/
