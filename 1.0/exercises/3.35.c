#include <stdio.h>

int kuvvet(int taban, int kuvvet);
int main(void) {

    int binary, n, decimal = 0, lastDigit;
    do {
        printf("type in a maximum five-digit binary number: ");
        scanf("%d", &n);
    } while (n < 0 || n > 11111);

    binary = n;
    int counter = 0;
    while (binary != 0 ){
        lastDigit = binary % 10;
        decimal += lastDigit * kuvvet(2, counter);
        binary /= 10;
        counter++;
    }
    printf("%d", decimal);
    printf("%s%d", " is the decimal equivalent of ", n);
    puts("");
}

int kuvvet(int taban, int kuvvet) {

    int output = 1;
    while (kuvvet > 0) {
        output *= taban;
        kuvvet--;
    }
    return output;
}