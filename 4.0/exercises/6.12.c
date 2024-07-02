#include <stdio.h>

int main(void) {

    int counts[10] = {0};

    int bonus[15] = {0,1,2,3,4,5,6,7,8,9};
    for(size_t i = 0; i < 15; ++i) {
        bonus[i] += 1;
    }

    double monthlyTemperatures[12] = {0};

    for(size_t i = 0; i < 12; ++i) {
        printf("%zu%s", i, ": ");
        scanf("%lf", &monthlyTemperatures[i]);
    }

    int bestScores[5] = {31,31,31};

    for(size_t i = 1; i < 6; ++i) {

        printf("%5zu", i);
    }
    puts("");
    for(size_t i = 0; i < 5; ++i) {

        printf("%5d", bestScores[i]);
    }
    puts("");

}