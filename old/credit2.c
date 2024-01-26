#include <stdio.h>
#include <cs50.h>

int get_credit_num(void);
int howManyDigits(long number);


int main(void){
    long number = get_credit_num();
    int digits = howManyDigits(number);
    printf("%i\n",digits);

}

/*
1000000000000        10^12 <-> 13 digits
10000000000000       10^13 <-> 14 digits
100000000000000      10^14 <-> 15 digits
1000000000000000     10^15 <-> 16 digits
10000000000000000    10^16 <-> 17 digits
100000000000000000   10^17 <-> 18 digits */

string card_type;

int howManyDigits (long number){
    int digits;
    if (number >= 1000000000000 && number < 100000000000000){ //10^13>= AND <10^15
        // check for 13-14 digits
        if(number < 10000000000000){ //10^14<
            digits = 13;
        }
        else{
            digits = 14;
        }
    }
    else{ //10^17> AND 10^15<=
        if (number < 1000000000000000) //10^16<
            digits = 15;
        else{
            digits = 16;
        }
    }
    return digits;
    }


int get_credit_num(void){
    long n;
    do{
        n = get_long("Number: ");
    }
    while (n < 0);
    return n;
}

