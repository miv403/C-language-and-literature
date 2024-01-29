// exercises.md#3.18

// weekly constant income: $200
// bonus: sales * %9

#include <stdio.h>

int main(void) {

    const int weeklyIn = 200;
    const double bonusRate = 0.09;
    double sales = 0;
    while (sales != -1) {

        printf("Enter sales in dollar (-1 to end): ");
        scanf("%lf", &sales);
        if (sales < 0){
            continue;
        }
        double salary = weeklyIn + (sales * bonusRate);
        printf("Salary is: $%.2lf", salary);
        puts("");
    }
}