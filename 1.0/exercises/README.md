---
date: 2024-01-29T21:33:42
author: miv403
tags:
  - exercises
---

# exercises 3

this folder is all about exercises and their solutions. some questions may have their solutions under it. others are in `*.c` files.

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

1. counter—A counter to count to 10 (i.e., to keep track of how many num-
bers have been input and to determine when all 10 numbers have been pro-
cessed).

2. number—The current number input to the program.

3. largest—The largest number found so far.

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

## 3.27 (Validating User Input)

Modify the program in Figure 3.6 to validate its inputs. For each input,
if the value is other than 1 or 2, keep looping until the user enters
a correct value.

## 3.28 What does the following program print?

```C
#include <stdio.h>
int main(void) {
    int count = 1; // initialize count
    while (count <= 10) { // loop 10 times
        // output line of text
        puts((count % 2) ? "****" : "++++++++");
        ++count; // increment count
    } // end while
} // end function main
```

- **my answer**

```C
/*
the program should print:

****
++++++++
****
++++++++
****
++++++++
****
++++++++
****
++++++++
*/
```

## 3.29 What does the following program print?

```C
#include <stdio.h>
int main(void) {
    
    int row = 10; // initialize row
    
    while (row >= 1) { // loop until row < 1
        int column = 1; // set column to 1 as iteration begins
    
        while (column <= 10) { // loop 10 times
    
            printf("%s", (row % 2) ? "<": ">"); // output
            ++column; // increment column

        } // end inner while
        --row; // decrement row
        puts(""); // begin new output line
    } // end outer while

} // end function main
```

- **my answer**

```C
/*
>>>>>>>>>>
<<<<<<<<<<
>>>>>>>>>>
<<<<<<<<<<
>>>>>>>>>>
<<<<<<<<<<
>>>>>>>>>>
<<<<<<<<<<
>>>>>>>>>>
<<<<<<<<<<
*/
```

## 3.30 (Dangling-Else Problem)

Determine the output for each of the following when x is 9 and y is 11, and when
x is 11 and y is 9. The compiler ignores the indentation in a C program.
Also, the compiler always associates an else with the previous if unless
told to do otherwise by the placement of braces {}.
On first glance, you may not be sure which if an else matches,
so this is referred to as the “dangling-else” problem.
We eliminated the indentation from the following code to make the problem
more challenging. [Hint: Apply indentation conventions you have learned.]

```C
1.
if (x < 10)
if (y > 10)
puts("*****");
else
puts("#####");
puts("$$$$$");
```

- **my answer**

> last `$` statement is not in any other selection statement.
> `*` and `#` statements are in single line `if...else` statment.
> also only selection is being made with `y > 10`
> condition. so the first line does nothing, especially.

```text
>>> x, y = 9, 11

>   *****
>   $$$$$

>>> x, y = 11, 9

>   $$$$$
```

```C
2.
if (x < 10) {
if (y > 10)
puts("*****");
}
else {
puts("#####");
puts("$$$$$");
}
```

- **my answer**

> the second line is making single statement decision. `*` could only be printed `y = 11` case.
> other lines are indicates ordinary `if...else` statements so `x < 10` condition makes decisions.

```text
>>> x, y = 9, 11

>   *****

>>> x, y = 11, 9

>   #####
>   $$$$$
```

## 3.31 (Another Dangling-Else Problem)

Modify the following code to produce the output shown. Use proper indentation techniques.
You may not make any changes other than inserting braces. The compiler ignores
the indentation in a program. We eliminated the indentation from the following code
to make the problem more challenging. [Note: It’s possible that no modification is necessary.]

```C
if (y == 8)
if (x == 5)
puts("@@@@@");
else
puts("#####");
puts("$$$$$");
puts("&&&&&");
```

1. Assuming x = 5 and y = 8, the following output is produced.

    ```text
    @@@@@
    $$$$$
    &&&&&
    ```

    - **my answer**

    ```C
    if (y == 8)
    if (x == 5)
        puts("@@@@@");
    else {
        puts("#####");
    }
    puts("$$$$$");
    puts("&&&&&");
    ```

2. Assuming x = 5 and y = 8, the following output is produced.

    ```text
    @@@@@
    ```

    - **my answer**

    ```C
    if (y == 8) {
        if (x == 5)
            puts("@@@@@");
    }
    else{
        puts("#####");
        puts("$$$$$");
        puts("&&&&&");
    }
    ```

3. Assuming x = 5 and y = 8, the following output is produced.

    ```text
    @@@@@
    &&&&&
    ```

    ```C
        if (y == 8){
        if (x == 5)
            puts("@@@@@");
    }
    else {
        puts("#####");
        puts("$$$$$");
    }
    puts("&&&&&");
    ```

4. Assuming x = 5 and y = 7, the following output is produced.

    ```text
    #####
    $$$$$
    &&&&&
    ```

    ```C
        //x = 5 and y = 7
    if (y == 8){
        if (x == 5)
            puts("@@@@@");
    }
    else{
        puts("#####");
        puts("$$$$$");
        puts("&&&&&");
    }
    ```

## 3.32 (Square of Asterisks)

Write a program that reads in the side of a square and then
prints that square out of asterisks. Your program should work for squares of all side
sizes between 1 and 20. For example, if your program reads a size of 4, it should print

```text
****
****
****
****
```

## 3.33 (Hollow Square of Asterisks)

Modify the program you wrote in the preceding exercise so that it prints a hollow square.
For example, if your program reads a size of 5, it should print

```text
*****
*   *
*   *
*   *
*****
```

## 3.34 (Palindrome Tester)

A palindrome is a number or a text phrase that reads the
same backward as forward. For example, each of the following five-digit integers is a
palindrome: 12321, 55555, 45554 and 11611. Write a program that reads in a five-
digit integer and determines whether or not it’s a palindrome. [Hint: Use the division
and remainder operators to separate the number into its individual digits.]

## 3.35 (Printing the Decimal Equivalent of a Binary Number)

Input a binary integer (5 digits or fewer) containing only 0s and 1s and print its decimal equivalent.
[Hint: Use the remainder and division operators to pick off the “binary” number’s digits one at a
time from right-to-left. Just as in the decimal number system, in which the rightmost
digit has a positional value of 1, and the next digit left has a positional value of 10, then
100, then 1000, and so on, in the binary number system the rightmost digit has a po-
sitional value of 1, the next digit left has a positional value of 2, then 4, then 8, and so
on. Thus the decimal number 234 can be interpreted as 4 * 1 + 3 * 10 + 2 * 100. The
decimal equivalent of binary 1101 is 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 or 1 + 0 + 4 + 8 or 13.]

## 3.36 (How Fast Is Your Computer?)

How can you determine how fast your own com-
puter operates? Write a program with a while loop that counts from 1 to 1,000,000,000,
incrementing by 1 during each iteration of the loop. Every time the count reaches a mul-
tiple of 100,000,000, print that number on the screen. Use your watch to time how long
each 100 million iterations of the loop takes. [Hint: Use the remainder operator to rec-
ognize each time the counter reaches a multiple of 100,000,000.]

## 3.37 (Detecting Multiples of 10)

Write a program that prints 100 asterisks, one at a
time. After every tenth asterisk, print a newline character. [Hint: Count from 1 to
100. Use the % operator to recognize each time the counter reaches a multiple of 10.]

## 3.38 (Counting 7s)

Write a program that reads an integer (5 digits or fewer) and de-
termines and prints how many digits in the integer are 7s.

## 3.39 (Checkerboard Pattern of Asterisks)

Write a program that displays the following checkerboard pattern:

```text
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
```

Your program must use only three output statements, one of each of the following
forms:

```C
printf("%s", "* ");
printf("%s", " ");
puts(""); // outputs a newline
```

## 3.40 (Multiples of 2 with an Infinite Loop)

Write a program that keeps printing the
multiples of the integer 2, namely 2, 4, 8, 16, 32, 64, and so on. Your loop should
not terminate (i.e., you should create an infinite loop). What happens when you run
this program?

## 3.41 (Diameter, Circumference and Area of a Circle)

Write a program that reads the
radius of a circle (as a double value) and computes and prints the diameter, the cir-
cumference and the area. Use the value 3.14159 for π.

## 3.42 What’s wrong with the following statement?

Rewrite it to accomplish what the
programmer was probably trying to do.

`printf("%d", ++(x + y));`

- **my answer**

    ```C
    int sum = x + y;
    printf("%d", ++sum;);
    ```

## 3.43 (Sides of a Triangle)

Write a program that reads three nonzero integer values
and determines and prints whether they could represent the sides of a triangle.

## 3.44 (Sides of a Right Triangle)

Write a program that reads three nonzero integers
and determines and prints whether they could be the sides of a right triangle.

## 3.45 (Factorial)

The factorial of a non-negative integer n is written n! (pronounced
“n factorial”) and is defined as follows:

n! = n · (n - 1) · (n - 2) · … · 1 (for values of n greater than or equal to 1)
and
n! = 1 (for n = 0).

For example, 5! = 5 · 4 · 3 · 2 · 1, which is 120.

1. Write a program that reads a non-negative integer and computes and prints
its factorial.

2. Write a program that estimates the value of the mathematical constant e by
using the formula:

    $$
    \mathcal{e} = 1 + \frac{1}{1!} + \frac{1}{2!} + \frac{1}{3!} + ...
    $$

3. Write a program that computes the value of ex by using the formula

    $$
    \mathbb{e^x} = 1 + \frac{x}{1!} + \frac{x^2}{2!} + \frac{x^3}{3!} + ...
    $$

## 3.46 (World Population Growth)

World population has grown considerably over
the centuries. Continued growth could eventually challenge the limits of breathable
air, drinkable water, arable land and other limited resources. There’s evidence that
growth has been slowing in recent years, and that world population could peak some
time this century, then start to decline.

For this exercise, research world population growth issues. This is a controversial
topic, so be sure to investigate various viewpoints. Get estimates for the current
world population and its growth rate. Write a program that calculates world popula-
tion growth each year for the next 100 years, using the simplifying assumption that the
current growth rate will stay constant. Print the results in a table. The first column
should display the year from 1 to 100. The second column should display the antic-
ipated world population at the end of that year. The third column should display the
numerical increase in the world population that would occur that year. Using your
results, determine the years in which the population would become double and
eventually quadruple what it is today.

## 3.47 (Enforcing Privacy with Cryptography)

The explosive growth of Internet communications and data storage on
Internet-connected computers has greatly increased privacy concerns.
The field of cryptography is concerned with coding data to make it
difficult (and hopefully—with the most advanced schemes—impossible) for unau-
thorized users to read. In this exercise, you’ll investigate a simple scheme for encrypt
ing and decrypting data. A company that wants to send data over the Internet has
asked you to write a program that will encrypt it so that it may be transmitted more
securely. All the data is transmitted as four-digit integers. Your application should
read a four-digit integer entered by the user and encrypt it as follows: Replace each
digit with the result of adding 7 to the digit and getting the remainder after dividing
the new value by 10. Then swap the first digit with the third, and swap the second
digit with the fourth. Then print the encrypted integer. Write a separate application
that inputs an encrypted four-digit integer and decrypts it (by reversing the encryption
scheme) to form the original number. [Optional reading project: In industrial-strength
applications, you’ll want to use much stronger encryption techniques than presented
in this exercise. Research “public-key cryptography” in general and the PGP (Pretty
Good Privacy) specific public-key scheme. You may also want to investigate the RSA
scheme, which is widely used in industrial-strength applications.]
