#include <stdio.h>
#include <math.h>

void printOutput(int *a);
int main(void) {

    int output;
    int * pOutput = &output;

    output = sqrt(900.0);
    printf("sqrt(900.0): ");
    printOutput(pOutput);

    output = sqrt(9.0);
    printf("sqrt(9.0): ");
    printOutput(pOutput);

    output = cbrt(27.0);
    printf("sqrt(27.0): ");
    printOutput(pOutput);

    output = cbrt(27.0);
    printf("sqrt(27.0): ");
    printOutput(pOutput);

    output = cbrt(-8.0);
    printf("sqrt(-8.0): ");
    printOutput(pOutput);

    output = exp(1.0);
    printf("sqrt(-8.0): ");
    printOutput(pOutput);

    output = exp(2.0);
    printf("sqrt(-8.0): ");
    printOutput(pOutput);

    output = log(2.718282);
    printf("sqrt(-8.0): ");
    printOutput(pOutput);

    output = cbrt(-8.0);
    printf("sqrt(-8.0): ");
    printOutput(pOutput);

    output = cbrt(-8.0);
    printf("sqrt(-8.0): ");
    printOutput(pOutput);

    output = cbrt(-8.0);
    printf("sqrt(-8.0): ");
    printOutput(pOutput);

    output = cbrt(-8.0);
    printf("sqrt(-8.0): ");
    printOutput(pOutput);

    output = cbrt(-8.0);
    printf("sqrt(-8.0): ");
    printOutput(pOutput);

    output = cbrt(-8.0);
    printf("sqrt(-8.0): ");
    printOutput(pOutput);

    output = cbrt(-8.0);
    printf("sqrt(-8.0): ");
    printOutput(pOutput);

    output = cbrt(-8.0);
    printf("sqrt(-8.0): ");
    printOutput(pOutput);

    output = cbrt(-8.0);
    printf("sqrt(-8.0): ");
    printOutput(pOutput);

    output = cbrt(-8.0);
    printf("sqrt(-8.0): ");
    printOutput(pOutput);

    output = cbrt(-8.0);
    printf("sqrt(-8.0): ");
    printOutput(pOutput);

    output = cbrt(-8.0);
    printf("sqrt(-8.0): ");
    printOutput(pOutput);

}


void printOutput(int *a) {

    printf("%d\n", *a);

}
