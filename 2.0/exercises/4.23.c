#include <stdio.h>
#include <math.h>

int main(void) {
    unsigned int principal = 100000; // starting principal penny
    double rate = 0.05; // annual interest rate

    // output table column heads
    printf("%4s%21s\n", "Year", "Amount on deposit");

    // calculate amount on deposit for each of ten years
    for (int year = 1; year <= 10; ++year) {
        
        // calculate new amount for specified year
        double amount = (double) principal * pow(1.0 + rate, year);
        //      a     =         p *    (1+n)^n
        // output one table row
        // every 100 penny = $1
        unsigned int pennies = amount;
        unsigned int dollars = pennies / 100;
        pennies %= 100;
        printf("%4d%5s%u%s%u\n", year,"$", dollars, ".", pennies);
    }
}
