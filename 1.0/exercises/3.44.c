#include <stdio.h>

int main(void) {

    unsigned int side1, side2, side3;
    printf("type in the first side: ");
    scanf("%u", &side1);
    printf("type in the second side: ");
    scanf("%u", &side2);
    printf("type in the third side: ");
    scanf("%u", &side3); 

    // a^2 + b^2 = c^2
    if (side1 * side1 + side2 * side2 == side3 * side3) {
        printf("%d%s%d%s%d", side1, ", ", side2, " and ", side3);
        puts(" can represent the sides of a right triangle.");
    }
    else if (side1 * side1 + side3 * side3 == side2 * side2) {
        printf("%d%s%d%s%d", side1, ", ", side2, " and ", side3);
        puts(" can represent the sides of a right triangle.");
    }
    else if (side2 * side2 + side3 * side3 == side1 * side1) {
        printf("%d%s%d%s%d", side1, ", ", side2, " and ", side3);
        puts(" can represent the sides of a right triangle.");
    }
    else {
        printf("%d%s%d%s%d", side1, ", ", side2, " and ", side3);
        puts(" cannot represent the sides of a triangle.");
    }

}