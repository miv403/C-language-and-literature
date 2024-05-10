# exercises

## 5.1

1. functions
2. function call
3. local variable
4. return
5. void
6. scope
7. return
8. prototype
9. rand()
10. srand()
11. auto, register, extern, static
12. auto
13. global
14. static
15. file, block, function, function-prototype
16. recursive
17. base

## 5.2 Consider the following program

```C
#include <stdio.h>
int cube(int y);
int main(void) {
    for (int x = 1; x <= 10; ++x) {
        printf("%d\n", cube(x));
    }
}
int cube(int y) {
    return y * y * y;
}
```

State the scope (function scope, file scope, block scope or function-prototype scope)
of each of the following elements:

**a.** The variable x in main. // block scope

**b.** The variable y in cube. // block scope

**c.** The function cube. // file scope

**d.** The function main. // file scope

**e.** The function prototype for cube. // file scope

**f.** The identifier y in the function prototype for cube. // function-prototype scope

## 5.3

Write a program that tests whether the examples of the math library function
calls shown in the table of Section 5.3 actually produce the indicated results.

## 5.8 math functions

Show the value of x after each of the following statements is performed:
a. `x = fabs(7.5);`

> `fabs()` func evaluates absolute value of input
>
> x = 7.5

b. `x = floor(7.5);`

> `floor()` func rounds the input to largest integer smaller than x
>
> x = 7

c. `x = fabs(0.0);`

> x = 0

d. `x = ceil(0.0);`

> `ceil()` func rounds the input to smallest integer larger than x
>
> x = 0

e. `x = fabs(-6.4);`

> x = 6.4

f. `x = ceil(-6.4);`

> x = -6

g. `x = ceil(-fabs(-8 + floor(-5.5)));`

> x = -14

## 5.9 (Parking Charges)

A parking garage charges a $2.00 minimum fee to park for up
to three hours and an additional $0.50 per hour for each hour *or part thereof* over three
hours. The maximum charge for any given 24-hour period is $10.00. Assume
that no car parks for longer than 24 hours at a time. Write a program that
calculates and prints the parking charges for each of three customers who
parked their cars in this garage yesterday. You should enter the hours
parked for each customer. Your program should print the results in a
tabular format, and should calculate and print the total of yesterday's
receipts. The program should use the function `calculateCharges` to determine
the charge for each customer. Your outputs should appear in the following
format:

```terminal
Car     Hours   Charge
1       1.5     2.00
2       4.0     2.50
3       24.0    10.00
TOTAL   29.5    14.50
```

## 5.10 (Rounding Numbers)

An application of function floor is rounding a value to the nearest integer. The statement

```C
y = floor(x + .5);
```

rounds x to the nearest integer and assigns the result to y. Write a program that reads
several numbers and rounds each of these numbers to the nearest integer. For each
number processed, print both the original number and the rounded number.

## 5.11 (Rounding Numbers)

Function floor may be used to round a number to a specific
decimal place. The statement

```C
y = floor(x * 10 + .5) / 10;,
```

rounds x to the tenths position (the first position to the right of the decimal point).
The statement

```C
y = floor(x * 100 + .5) / 100;
```

rounds x to the hundredths position (the second position to the right of the decimal
point). Write a program that defines functions to round a number x in various ways:

a. roundToInteger(number)

b. roundToTenths(number)

c. roundToHundreths(number)

d. roundToThousandths(number)

For each value the program inputs, display the original value, the number rounded to
the nearest integer, the number rounded to the nearest tenth, the number rounded to
the nearest hundredth, and the number rounded to the nearest thousandth.

## 5.12 Answer each of the following questions

a. What does it mean to choose numbers “at random”?

b. Why is the rand function useful for simulating games of chance?

c. Why would you randomize a program by using srand? Under what circumstances is it desirable not to randomize?

d. Why is it often necessary to scale and/or shift the values produced by rand?

## 5.13

Write statements that assign random integers to the variable n in the following
ranges:

a. 1 ≤ n ≤ 2

b. 1 ≤ n ≤ 100

c. 0 ≤ n ≤ 9

d. 1000 ≤ n ≤ 1112

e. –1 ≤ n ≤ 1

f. –3 ≤ n ≤ 11

## 5.14

For each of the following sets of integers, write a single statement that will print
a number at random from the set:

a. 2, 4, 6, 8, 10.

b. 3, 5, 7, 9, 11.

c. 6, 10, 14, 18, 22.

## 5.15 (Hypotenuse Calculations)

Define a function called hypotenuse that calculates
a right triangle’s hypotenuse, based on the values of the other two sides. The function
should take two double arguments and return the hypotenuse as a double. Test your
program with the side values specified in the following table:

| Side 1 | Side 2 |
| ------ | ------ |
| 3.0    | 4.0    |
| 5.0    | 12.0   |
| 8.0    | 15.0   |
