#include <stdio.h>

int main(void) {
    
    int x, y, a, b, g, i, j;

    int statement0 = !(x < 5) && !(y >= 7);
    int statement1 = !((x < 5) || (y >= 7));

    if (statement0 == statement1) {printf("OK ✓\n");}

    statement0 = !(a == b) || !(g != 5);
    statement1 = !((a == b) && (g != 5));

    if (statement0 == statement1) {printf("OK ✓\n");}

    statement0 = !((x <= 8) && (y > 4));
    statement1 = !(x <= 8) || (y < 4);

    if (statement0 == statement1) {printf("OK ✓\n");}

    statement0 = !((i > 4) || (j <= 6));
    statement1 = !(i > 4) && !(j <= 6);

    if (statement0 == statement1) {printf("OK ✓\n");}

}