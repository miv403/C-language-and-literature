//Application: Compound-Interest Calculations
// bileşik-faiz

// a = p(1 + r)^n
// p is the original amount invested (i.e., the principal, $1000.00 here),
// r is the annual interest rate (for example, .05 for 5%),
// n is the number of years, which is 10 here, and
// a is the amount on deposit at the end of the nth year.

// COMPILATION: gcc -lm 1.0.2-loops.c 

// fig04_04.c
// Calculating compound interest.

#include <stdio.h>
#include <math.h>
int main(void) {
    double principal = 1000.0; // starting principal (ana para)
    double rate = 0.05; // annual interest rate

    // output table column heads
    printf("%4s%21s\n", "Year", "Amount on deposit");

    // calculate amount on deposit for each of ten years
    for (int year = 1; year <= 10; ++year) {
        
        // calculate new amount for specified year
        double amount = principal * pow(1.0 + rate, year);
        //      a     =         p *    (1+n)^n
        // output one table row
        printf("%4d%21.2f\n", year, amount);

// FORMATTING FLOATS

//      %21.2f
//       21: use 21 characters; .2 use 2 digits after floating point
    }
}


// further reading: data types: https://en.cppreference.com/w/c/language/arithmetic_types