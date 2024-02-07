#include <stdio.h>
#include <math.h>

int binaryConverter(unsigned int decimal);

int main(void) {

    printf("%-12s%-12s%-12s%-12s", "Decimal", "Binary", "Hexadecimal", "Octal");
    puts("");
    for (unsigned int i = 1; i <= 256; ++i) {

        printf("%-12u", i); // decimal
        printf("%-12u", binaryConverter(i));
        printf("%-12X", i); //hexadecimal
        printf("%-12o", i); // octal
        puts("");
    }
    puts("");
}

int binaryConverter(unsigned int decimal) {

    unsigned int B_Number = 0; 
    int cnt = 0; 
    while (decimal != 0) { 
        int rem = decimal % 2; 
        unsigned int c = pow(10, cnt); 
        B_Number += rem * c; 
        decimal /= 2; 
        // Count used to store exponent value 
        cnt++; 
    } 
    return B_Number; 
}  