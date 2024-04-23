#include <stdio.h>
#include <stdlib.h>

// Shifted, scaled random integers produced by 1 + rand() % 6.

int main(void) {

    int value = rand();

    for (int i = 1; i <= 10; ++i) {
        printf("%d ", 1 + (rand() % 6)); // display random die value
    }

    puts("");

    // using modular operator for produce integers between 0 to 5
    // is called scaling and the number 6 is called scaling factor.
    // adding 1 is called shifting.
}