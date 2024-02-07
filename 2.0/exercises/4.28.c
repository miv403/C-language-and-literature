#include <stdio.h>


int salaryPrompt(void);

int main (void) {

    // fixed salary for 40 hours
    // overtime: 1.5 * salary
    // weeklySalary = hours * salary + (hours - 40) * 1.5 * salary

    // managers > 1           fixed-salary
    // hourly workers > 2     hourly(up to 40) + 1.5(after 40)
    // comission workes > 3   (250 + grossSales * 0.057)
    // piece-workers > 4      piece * amountX

    double salary;
    double payment;
    unsigned int paycode;
    
    printf("%s", "type in the paycode (to exit 0): ");
    scanf("%u", &paycode);

    while (paycode != 0) {
        switch (paycode) {
        
            case 1:      // managers > 1 fixed-salary
                salary = salaryPrompt();
                printf("%s%.2lf", "manager payment: $" , salary);
                break;
            case 2:      // hourly workers > 2     hourly(up to 40) + 1.5(after 40)
                unsigned int workedHours;
                salary = salaryPrompt();
                printf("%s", "how many hours worked: ");
                scanf("%u", &workedHours);
                if (workedHours > 40) {
                    payment = 40 * salary + (workedHours - 40) * 1.5 * salary;
                    printf("%s%.2lf", "hourly worker payment: ", payment);
                }
                else {
                    double payment = 40 * salary;
                    printf("%s%.2lf", "hourly worker payment: ", payment);
                }
                break;
            case 3:      // commission workes > 3   (250 + grossSales * 0.057)
                double grossSales;
                printf("%s", "sales amount: ");
                scanf("%lf", &grossSales);
                payment = 250 + grossSales * 0.057;
                printf("%s%.2lf", "commission worker payment: " , payment);
                break;
            case 4:      // piece-workers > 4      piece * amountX
                unsigned int numberPiece;
                double pricePiece;
                printf("price of sold piece: ");
                scanf("%lf", &pricePiece);
                printf("number of sold pieces: ");
                scanf("%u", &numberPiece);
                payment = pricePiece * numberPiece;
                printf("%s%.2lf", "commission worker payment: " , payment);
                break;
            default:
                printf("it should be between 1-4!");
                break;
        }
        puts("");
        printf("%s", "type in the paycode (to exit 0): ");
        scanf("%u", &paycode);
    }
}

int salaryPrompt(void) {
    double output;
    printf("%s", "salary: ");
    scanf("%lf", &output);
    return output;
}