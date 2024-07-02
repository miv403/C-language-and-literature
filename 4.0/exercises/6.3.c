#include <stdio.h>

#define SIZE 10

int main(void) {

    double arr[SIZE] = {0};

    arr[9] = 1.667;
    arr[6] = 3.333;

    printf("%.2f\t%.2f", arr[6], arr[9]);
    puts("");

    for(size_t i = 0; i < SIZE; ++i){

        printf("%f", arr[i]);
        puts("");

    }
}