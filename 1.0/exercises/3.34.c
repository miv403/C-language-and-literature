#include <stdio.h>
#include <math.h>

//gcc -lm 3.34.c

int kuvvet(int base, int exp);
int _digitl(int input , int N);
int _digitr(int input, int N);
// int digitCounter(int input);

int main(void) {

    int input = 0;
    const double ten = 10.0;
    do {
        printf("%s", "type in a five-digit positive integer: ");
        scanf("%d", &input);
    } while ( input < 10000 || input > 99999);

    // the integer should be always have five-digit.
    int flag = 1; // 1 means palindrome 0 means not palindrome
    int digitr; // ____*  <<<
    int digitl; // *____  >>>
        // these are digit pairs.

    for (int i = 1; i < 5; i++) {
        // we don't need to iterate 5 times since the middle digit will always equal itself.

        digitr = _digitr(input, i);
        digitl = _digitl(input, (5 - i));
            // these two functions finds digit pairs.

        if (digitl != digitr){ //comparing all digits constantly
            flag = 0; 
        }
    }
    if (flag){ // flag = 1 means the input is palindrome.
        printf("%d", input);
        puts(" is a palindrome.");
    }
    else {
        printf("%d", input);
        puts(" is not a palindrome.");
    }
}

int kuvvet(int taban, int kuvvet) {

    int output = 1;
    while (kuvvet > 0) {
        output *= taban;
        kuvvet--;
    }
    return output;
}

int _digitl(int input, int N) {

    int output = input;
    while (N > 0){

        output /= 10;
        N--;
    }
    output %= 10;
    return output;

}

int _digitr(int input, int N){
    int output = input;
    if (N == 1){
        output = output % kuvvet(10, N);
    }
    else{
        output = ((output % kuvvet(10, N)) - (output % kuvvet(10,N - 1))) / kuvvet(10,N - 1);
    }
    return output;
}

/*
int digitCounter(int input) {

    int counter = 0;

    while (input > 0){
        input /= 10;
        counter++;
    }
    return counter;

}
*/