// exercises.md#3.20_(Salary_Calculator)

#include <stdio.h>

int main(void) {

    int workedHours = 0;
    const int straightTime = 40;
    double hourlyRate = 0;
    
    while (workedHours != -1) {

        printf("Enter # of hours worked (-1 to end): ");
        scanf("%d", &workedHours);
        if (workedHours < 0) {
            continue;
        }
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%lf", &hourlyRate);
        if (workedHours > 40) {

            double salary = (double) straightTime * hourlyRate + ((workedHours - 40) * (hourlyRate * 1.5));
            printf("Salary is %.2lf", salary);
            puts("");
        
        }
        else { // workedHours <= 40

            double salary = workedHours * hourlyRate;
            printf("Salary is %.2lf", salary);
            puts("");

        }
    }

}