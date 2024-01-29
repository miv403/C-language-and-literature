/*
3.3
Write a single C statement to accomplish each of the following:
a) Multiply the variable product by 2 using the *= operator.
b) Multiply the variable product by 2 using the = and * operators.
c) Test whether the value of the variable count is greater than 10. If it is, print
"Count is greater than 10".
d) Calculate the remainder after quotient is divided by divisor and assign the
result to quotient. Write this statement two different ways.
e) Print the value 123.4567 with two digits of precision. What value is printed?
f) Print the floating-point value 3.14159 with three digits to the right of the
decimal point. What value is printed?
*/

#include <stdio.h>

int main(void) {

    int inputc;
    printf("type in a integer value: ");
    scanf("%d", &inputc);
    printf("*2 = %d\n", inputc *= 2); // a
    inputc = inputc * 2; // b
    if (inputc > 10) { // c
        printf("count is greater than 10");
        puts("");
    } 
    // remainder:  // d
    int inputA, inputB;
    printf("type in two integers: ");
    scanf("%d%d", &inputA, &inputB);
    if (inputA >= inputB) {
        double quotient = (double) inputA / (double) inputB;
        printf("the quotient: %.4f ", quotient);
        puts("");
        int remainder = inputA % inputB;
        printf("the remainder: %d", remainder);
        puts("");
    }
    else { // inputB > inputA

        double quotient = (double) inputB / (double) inputA;
        printf("the quotient: %.4f ", quotient);
        puts("");
        int remainder = inputB % inputA;
        printf("the remainder: %d", remainder);
        puts("");
    }
    double theValue = 123.4567;
    printf("theValue: %.2f", theValue); // e
    puts("");
    double theOtherValue = 3.14159;
    printf("theOtherValue: %.3f", theOtherValue);
    puts("");
}