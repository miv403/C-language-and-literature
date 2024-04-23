// fig05_06.c
// Randomizing the die-rolling program.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    // WE CAN TAKE A SEED FROM USER

//*******************************************//
    printf("%s", "Enter seed: ");

    int seed = 0; // number used to seed the random-number generator
    scanf("%d", &seed);
//*******************************************//

    // OR

    // WE CAN USE THE UNIX TIME AS A SEED

//*******************************************//
    int seed = time(NULL);
//*******************************************//

    srand(seed); // seed the random-number generator

    for (int i = 1; i <= 10; ++i) {
        printf("%d ", 1 + (rand() % 6)); // display random die value
    }

    puts("");
}
