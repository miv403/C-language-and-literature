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

```C
int a = rand() % 2 + 1;
```

b. 1 ≤ n ≤ 100

```C
int b = rand % 100 + 1;
```

c. 0 ≤ n ≤ 9

```C

int c = rand() % 10;

```

d. 1000 ≤ n ≤ 1112

```C
int d = rand() % 112 + 1000;
```

e. –1 ≤ n ≤ 1

```C
int rand e = rand() % 2 - 1;
```

f. –3 ≤ n ≤ 11

```C
int rand e = rand() % 2 - 1;
```

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

## 5.16 (Exponentiation)

Write a function integerPower(base, exponent) that returns the value of
base<sup>exponent</sup>

For example, `integerPower(3, 4) = 3 * 3 * 3 * 3`. Assume that exponent is a positive,
nonzero integer, and base is an integer. Function integerPower should use a for
statement to control the calculation. Do not use any math library functions.

## 5.17 (Multiples)

Write a function isMultiple that determines for a pair of integers
whether the second integer is a multiple of the first. The function should take two integer arguments and return 1 (true) if the second is a multiple of the first, and 0 (false)
otherwise. Use this function in a program that inputs a series of pairs of integers.

## 5.18 (Even or Odd)

Write a program that inputs a series of integers and passes them
one at a time to function isEven, which uses the remainder operator to determine
whether an integer is even. The function should take an integer argument and return
1 if the integer is even and 0 otherwise.

## 5.19 (Square of Asterisks)

Write a function that displays a solid square of asterisks
whose side is specified in integer parameter side. For example, if side is 4, the function displays:

```text
****
****
****
****
```

## 5.20 (Displaying a Square of Any Character)

Modify the function in Exercise 5.19 to
form the square out of whatever character is contained in char parameter fillCharac-
ter. Thus if side is 5 and fillCharacter is “#”, then this function should print:

```text
#####
#####
#####
#####
#####
```

## 5.21 (Project: Drawing Shapes with Characters)

Use techniques similar to those developed in Exercises 5.19 and 5.20 to produce a program that graphs a wide range of
shapes.

## 5.22 (Separating Digits)

Write program segments to accomplish each of the following:

a. Calculate the int part of the quotient when int a is divided by int b.

b. Calculate the int remainder when int a is divided by int b.

c. Use the program pieces developed in a) and b) to write a function that in-
puts an integer between 1 and 32767 and prints it as a series of digits, with
two spaces between each digit. For example, 4562 should be printed as:

```text
4 5 6 2
```

## 5.26 (Perfect Numbers)

An integer number is said to be a perfect number if its factors,
including 1 (but not the number itself), sum to the number. For example, 6 is a per-
fect number because 6 = 1 + 2 + 3. Write a function isPerfect that determines
whether parameter number is a perfect number. Use this function in a program that
determines and prints all the perfect numbers between 1 and 1000. Print the factors
of each perfect number to confirm that the number is indeed perfect. Challenge the
power of your computer by testing numbers much larger than 1000.

## 5.27 (Prime Numbers)

An integer is said to be prime if it’s divisible by only 1 and itself.
For example, 2, 3, 5 and 7 are prime, but 4, 6, 8 and 9 are not. Write a function that
determines whether a number is prime. Use this function in a program that determines
and prints all the prime numbers between 1 and 10,000. How many of these 10,000
numbers do you really have to test before being sure that you have found all the primes?
Initially you might think that n/2 is the upper limit for which you must test to see
whether a number is prime, but you need go only as high as the square root of n. Re-
write the program, and run it both ways. Estimate the performance improvement.

## 5.28 (Reversing Digits)

Write a function that takes an integer value and returns the
number with its digits reversed. For example, given the number 7631, the function
should return 1367.

## 5.36 (Towers of Hanoi)

Every budding computer scientist must grapple with certain
classic problems, and the Towers of Hanoi (shown in the following diagram) is one
of the most famous of these:
Legend has it that in a temple in the Far East, priests are attempting to move a stack
of disks from one peg to another. The initial stack had 64 disks threaded onto one
peg and arranged from bottom to top by decreasing size. The priests are attempting
to move the stack from this peg to a second peg under the constraints that exactly
one disk is moved at a time and at no time may a larger disk be placed above a
smaller disk. A third peg is available for temporarily holding the disks. Supposedly
the world will end when the priests complete their task, so there’s little incentive for
us to facilitate their efforts.
Let’s assume that the priests are attempting to move the disks from peg 1 to peg
3. We wish to develop an algorithm that will print the precise sequence of disk-to-
disk peg transfers.
If we were to approach this problem with conventional methods, we’d rapidly find
ourselves hopelessly knotted up in managing the disks. Instead, if we attack the prob-
lem with recursion in mind, it immediately becomes tractable. Moving n disks can be
viewed in terms of moving only n – 1 disks (and hence the recursion) as follows:

1. Move n – 1 disks from peg 1 to peg 2, using peg 3 as a temporary holding area.
2. Move the last disk (the largest) from peg 1 to peg 3.
3. Move the n – 1 disks from peg 2 to peg 3, using peg 1 as a temporary holding

area.
The process ends when the last task involves moving n = 1 disk, i.e., the base case.
This is accomplished by trivially moving the disk without the need for a temporary
holding area.
Write a program to solve the Towers of Hanoi problem. Use a recursive function
with four parameters:

1. The number of disks to be moved.
2. The peg on which these disks are initially threaded.
3. The peg to which this stack of disks is to be moved.
4. The peg to be used as a temporary holding area.

Your program should print the precise instructions it will take to move the disks
from the starting peg to the destination peg. For example, to move a stack of three
disks from peg 1 to peg 3, your program should print the following series of moves:

- 1 → 3 (This means move one disk from peg 1 to peg 3.)
- 1 → 2
- 3 → 2
- 1 → 3
- 2 → 1
- 2 → 3
- 1 → 3

<!-- markdownlint-configure-file { 
  "no-inline-html": {
    "allowed_elements": [
  "u",
  "br",
  "sup",
    ]
  }
} -->