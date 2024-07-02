#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLL 36000

void rollTwoDice(int * , int * , const time_t *);
int main(void) {

    int dice1 = 0;
    int dice2 = 0;
    int sum = 0;

    int tally[14] = {0};
    int seed = time(NULL);
    srand(seed);

    for(size_t i = 0; i < ROLL; ++i) {

        dice1 = 1 + (rand() % 6);
        dice2 = 1 + (rand() % 6);

        sum = dice1 + dice2;

        tally[sum] += 1;
    }

    printf("%5s%15s%15s", "Sum", "Frequency", "Percentage");
    puts("");

    for(size_t i = 2; i <= 12; ++i) {

        double percentage = (double)tally[i] / ROLL * 100;

        printf("%5zu%15d%15lf", i, tally[i], percentage);
        puts("");
    }

}

void rollTwoDice(int * dice1, int * dice2, const time_t * seed) {

}