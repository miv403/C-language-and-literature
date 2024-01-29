// exercises.md#3.19_(Interest_Calculator)

#include <stdio.h>

int main(void) {

    double principal, rate = 0;
    unsigned int days;
    const int aYear = 365;

    while (principal != -1) {
        
        printf("Enter loan principal (-1 to end): ");
        scanf("%lf", &principal);
        if (principal < 0) {
            continue;
        }
        printf("Enter interest rate: ");
        scanf("%lf", &rate);
        printf("Enter term of the loan in days: ");
        scanf("%u", &days);
        double interest = principal * rate * days / aYear;
        printf("The interest charge is $%.2lf", interest);
        puts("");

    }
}