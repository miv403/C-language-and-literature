#include <stdio.h>

int reverser(int number);
int main(void) {

    printf("to reverse: ");
    int input;
    scanf("%d", &input);
    printf("reversed: %d", reverser(input));
    puts("");

    return 0;
}

int reverser(int number) {

    int reversed = 0;

    while(number > 0) {
        
        reversed = (reversed * 10) + (number % 10);
        number /= 10;
    }
    return reversed;

}