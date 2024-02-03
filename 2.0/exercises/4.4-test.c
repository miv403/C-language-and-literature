#include <stdio.h>

int main(void){

    for (double y = .1; y <= 1.0; y += .1) {
        printf("%.55f\n", y);
    }
    int n = 0;
    while (n < 10) {
        printf("%d ", ++n);
    }
}
