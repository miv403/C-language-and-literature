#include <stdio.h>
#include <math.h>

void hypotenuse(double side[][2], size_t * i,  double * hypotenuse);
int main(void) {

    double side[3][2] = {{3.0, 4.0},
                        {5.0, 12.0},
                        {8.0, 15.0}};

    for(size_t i = 0; i < 3; ++i) {

        double hypo;
        hypotenuse(side, &i, &hypo);
        printf("%.1lf%s%.1lf%s%.1lf",
                side[i][0],
                "^2 * ",
                side[i][1],
                "^2 = ", 
                hypo);
        puts("");

    }
}

void hypotenuse(double side[][2], size_t * i,  double * hypotenuse) {

    *hypotenuse = sqrt(pow(side[*i][0], 2) + pow(side[*i][1], 2));
}