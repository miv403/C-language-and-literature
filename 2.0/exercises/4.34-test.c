#include <stdio.h>

int main(void) {

    int input;
    do {
        printf("%s", "input: ");
        scanf("%d", &input);
    } while(input >= 5);

    input = 0;
    while (input >= 5) {

        printf("%s", "input: ");
        scanf("%d", &input);
    }
}