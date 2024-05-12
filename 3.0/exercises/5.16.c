#include <stdio.h>

integerPower(int base, int exponent);
int main(void) {



}

integerPower(int base, int exponent) {

    if (exponent == 1)
        return base;
    else
        return base * integerPower(base, exponent - 1);

}