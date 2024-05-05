#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7
#define ROLL_C 60000000
int main(void) {

    int freq[SIZE] = {0};

    srand(time(NULL));

    for(unsigned int i  = 0; i < ROLL_C; ++i) {

        size_t face = rand() % 6 + 1;
        ++freq[face];
    }
    printf("%s\t%-10s\n", "Face", "Frequency");
    for(size_t i = 1; i < SIZE; ++i) {

        printf("%4zu\t%10d\n", i, freq[i]);
    }
}