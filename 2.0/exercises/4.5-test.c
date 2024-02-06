#include <stdio.h>

int main(void) {
    for (double x = .000001; x <= .0001; x += .000001) {
        printf("%.27f\n", x);
    }
}