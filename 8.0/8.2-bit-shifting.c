//
// Created by miv403 on 26/07/24.
//

// i have demonstrated bitwise shift operator.

#include <stdio.h>
void displayBits(unsigned int value);

int main(void) {

    unsigned int x = 1;
    for(int i = 0; i < 64; i++) {
       displayBits(x);
       x <<= 1;
    }
}

void displayBits(unsigned int value) {
    // define displayMask and left shift 31 bits
    unsigned int displayMask = 1 << 31;
    printf("%10u = ", value);
    // loop through bits
    for (unsigned int c = 1; c <= 32; ++c) {
        putchar(value & displayMask ? '1' : '0');
        value <<= 1; // shift value left by 1
        if (c % 8 == 0) { // output space after 8 bits
            putchar(' ');
        }
    }
    putchar('\n');
}