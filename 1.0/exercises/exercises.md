# exercises 3

## 3.17 (Credit-Limit Calculator)

Develop a C program that will determine whether a
department-store customer has exceeded the credit limit on a charge account. For
each customer, the following facts are available:

a. Account number
b. Balance at the beginning of the month
c. Total of all items charged by this customer this month
d. Total of all credits applied to this customer's account this month
e. Allowed credit limit

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

## 3.18 (Sales-Commission Calculator)

One large chemical company pays its sales people on a commission basis.
The salespeople receive $200 per week plus 9% of their gross sales for that week.
For example, a salesperson who sells $5000 worth of chemicals in a week receives
$200 plus 9% of $5000, or a total of $650.
Develop a program that will use scanf to input each salesperson’s gross sales
for last week and calculate and display that salesperson’s earnings.
Process one salesperson's figures at a time.

```text
Here is a sample input/output dialog:
Enter sales in dollars (-1 to end): 5000.00
Salary is: $650.00
Enter sales in dollars (-1 to end): 1234.56
Salary is: $311.11
Enter sales in dollars (-1 to end): -1
```

## 3.19 (Interest Calculator)

The simple interest on a loan is calculated by the formula
`interest = principal * rate * days / 365;`
The preceding formula assumes that rate is the annual interest rate,
so it divides by 365 (days per year). Develop a program that uses
scanf to input principal, rate and days for several loans,
and will calculate and display the simple interest for each loan,
using the preceding formula.

Here is a sample input/output dialog:

```text
Enter loan principal (-1 to end): 1000.00
Enter interest rate: .1
Enter term of the loan in days: 365
The interest charge is $100.00
Enter loan principal (-1 to end): 1000.00
Enter interest rate: .08375
Enter term of the loan in days: 224
The interest charge is $51.40
Enter loan principal (-1 to end): -1
```

## 3.20 (Salary Calculator)

Develop a program that will determine the gross pay
for each of several employees. The company pays “straight time” for
the first 40 hours worked by each employee and pays “time-and-a-half” for
all hours worked in excess of 40 hours. You’re given a list of
the company’s employees, the number of hours each worked last week and
each employee’s hourly rate. Your program should use scanf to
input this information for each employee and determine and
display the employee’s gross pay.

Here is a sample input/output dialog:

```text
Enter # of hours worked (-1 to end): 39
Enter hourly rate of the worker ($00.00): 10.00
Salary is $390.00
Enter # of hours worked (-1 to end): 40
Enter hourly rate of the worker ($00.00): 10.00
Salary is $400.00
Enter # of hours worked (-1 to end): 41
Enter hourly rate of the worker ($00.00): 10.00
Salary is $415.00
Enter # of hours worked (-1 to end): -1
```

## 3.21 (Predecrementing vs. Postdecrementing)

Write a program that demonstrates the difference between predecrementing and
postdecrementing using the decrement
operator --.

## 3.22 (Printing Numbers from a Loop)

Write a program that utilizes looping to print the numbers from 1 to 10 side by side on
the same line with three spaces between numbers.

## 3.23 (Find the Largest Number)

Finding the largest number (i.e., the maximum of a group of numbers) is used frequently
in computer applications. For example, a program that determines the winner of
a sales contest would input the number of units sold by each salesperson.
The salesperson who sells the most units wins the contest. Write a pseudocode program
and then a program that uses scanf to input a series of 10 non-negative numbers and
determines and prints the largest of the numbers. Your program should use three variables:

a. counter—A counter to count to 10 (i.e., to keep track of how many num-
bers have been input and to determine when all 10 numbers have been pro-
cessed).
b. number—The current number input to the program.
c. largest—The largest number found so far.

## 3.24 (Tabular Output)

Write a program that uses looping to print the following table of values.
Use the tab escape sequence, \t, in the printf statement to separate the
columns with tabs.

| N   | 10*N | 100*N | 1000*N |
| --- | ---- | ----- | ------ |
| 1   | 10    | 100     | 1000      |
| 2   | 20    | 200     | 2000      |

## 3.25 (Tabular Output)

Write a program that utilizes looping to produce the follow-
ing table of values:

| A   | A + 2 | A + 4 | A + 6 |
| --- | ----- | ----- | ----- |
| 3   | 5     | 7     | 9     |
| 6   | 8     | 10    | 12    |
| 9   | 11    | 13    | 15    |
| 12  | 14    | 16    | 18    |
| 15  | 17    | 19    | 21    |

## 3.26 (Find the Two Largest Numbers)

Using an approach similar to Exercise 3.23,
find the two largest values of the 10 numbers. You may input each number only once.
