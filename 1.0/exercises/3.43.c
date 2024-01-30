#include <stdio.h>

int main(void) {

    unsigned int side1, side2, side3;
    printf("type in the first side: ");
    scanf("%u", &side1);
    printf("type in the second side: ");
    scanf("%u", &side2);
    printf("type in the third side: ");
    scanf("%u", &side3);

    // a,b,c => |a-b| < c < a+b
    if (side1 >= side2) {

        if (side3 > side1 - side2 && side3 < side1 + side2){
            printf("%d%s%d%s%d", side1, ", ", side2, " and ", side3);
            puts(" can represent the sides of a triangle.");
        }
        else {
                printf("%d%s%d%s%d", side1, ", ", side2, " and ", side3);
                puts(" cannot represent the sides of a triangle.");
        }
    }
    else if (side2 > side1){

        if (side3 > side2 - side1 && side3 < side1 + side2){
            printf("%d%s%d%s%d", side1, ", ", side2, " and ", side3);
            puts(" can represent the sides of a triangle.");
        }
        else {
                printf("%d%s%d%s%d", side1, ", ", side2, " and ", side3);
                puts(" cannot represent the sides of a triangle.");
        }
    }
}