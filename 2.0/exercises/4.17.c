/*
#include <stdio.h>

int main(void) {

    // account number
    // credit limit before recession
    // current balance (i.e. the amount the customer owes.)

    // (new balance = beginning balance + charges – credits)

    int accountNumber = 0;
    double balanceBeginning, balanceFinal, charges, credits, creditLimit;

    while (accountNumber != -1) {

        do {
            printf("Enter account number (-1 to end): ");
            // Account Number Prompt
            scanf("%d", &accountNumber);
        }while( accountNumber < -1);
        if (accountNumber == -1) {
            continue;
        }
        
        printf("Enter beginning balance: ");
        scanf("%lf", &balanceBeginning);
        printf("Enter total charges: ");
        scanf("%lf", &charges);
        printf("Enter total credits: ");
        scanf("%lf", &credits);
        printf("Enter credit limit: ");
        scanf("%lf", &creditLimit);

        balanceFinal = balanceBeginning + charges - credits;

        if (balanceFinal > creditLimit){

            printf("Account: %d", accountNumber);
            puts("");
            printf("Credit limit: %.2lf", creditLimit);
            puts("");
            printf("Balance: %.2lf", balanceFinal);
            puts("");
            printf("Credit Limit Exceeded.");
            puts("");
        }
    }
}
*/