/*
3.17 (Credit-Limit Calculator) Develop a C program that will determine whether a
department-store customer has exceeded the credit limit on a charge account. For
each customer, the following facts are available:

a) Account number
b) Balance at the beginning of the month
c) Total of all items charged by this customer this month
d) Total of all credits applied to this customer's account this month
e) Allowed credit limit

The program should use scanf to input each fact, calculate the new balance (=
beginning balance + charges – credits), and determine whether
the new balance exceeds
the customer's credit limit. For those customers whose credit
limit is exceeded, the program should display
the customer's account number, credit limit, new balance
and the message “Credit limit exceeded.”

Here is a sample input/output dialog:

Enter account number (-1 to end): 100
Enter beginning balance: 5394.78
Enter total charges: 1000.00
Enter total credits: 500.00
Enter credit limit: 5500.00
Account: 100
Credit limit: 5500.00
Balance: 5894.78
Credit Limit Exceeded.

Enter account number (-1 to end): 200
Enter beginning balance: 1000.00
Enter total charges: 123.45
Enter total credits: 321.00
Enter credit limit: 1500.00

Enter account number (-1 to end): 300
Enter beginning balance: 500.00
Enter total charges: 274.73
Enter total credits: 100.00
Enter credit limit: 800.00
Enter account number (-1 to end): -1
*/

#include <stdio.h>



int main(void) {

    int accountNumber = 0;
    double balanceBeginning, balanceFinal, charges, credits, creditLimit = 0;

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
