---
author: miv403
tags:
  - exercises
---
# exercises 4

## 4.5 Find the error in each of the following

(Note: There may be more than one error.)

- **a.**

  ```C
   For (x = 100, x >= 1, ++x) {
    printf("%d\n", x);
  }
  ```

  - my answer:

    ```C
    for (x = 100, x >= 1, --x) {
    ^ wrong syntax        ^^ infinite loop

    ```

- **b.** The following code should print whether a given integer is odd or even:

  ```C
  switch (value % 2) {
    case 0:
      puts("Even integer");
    case 1:
      puts("Odd integer");
  }
  ```

  - my answer:

    ```C
    switch (value % 2) {
      case 0:
        puts("Even integer");
        break;                <<<< break statements
      case 1:
        puts("Odd integer");
        break;                <<<<
    }
    
    // default state is optional and ofcourse in this case it isn't necesseary at all.
    ```

- **c.** The following code should input an integer and a character and print them. Assume the user types as input 100 A.

  ```C
  scanf("%d", &intVal);
  charVal = getchar();
  printf("Integer: %d\nCharacter: %c\n", intVal, charVal);
  ```

  - my answer:

    ```C
    int intVal;         <<<<< we need to define `intVal` first
    scanf("%d", &intVal);
    int charVal = getchar();
    ^^^^ we should declare its type. it can be a integer since its a character.
    printf("Integer: %d\nCharacter: %c\n", intVal, charVal);
    ```

- **d.**
  
  ```C
  for (x = .000001; x == .0001; x += .000001) {
    printf("%.7f\n", x);
  }
  ```

  - my answer:

    ```C
    // there is one syntax error. the type of the `x` isn't declared but it shouldn't be used floating-point values in any loop since they aren't precise and they could cause a infinite loop.

    // but if the x is declared as a double and the termination condition would be `x <= .0001` instead of `x == .0001`, it will execute and terminate successfully.
    
      for (double x = .000001; x <= .0001; x += .000001) {
          ^^^^^^                ^^
        printf("%.7f\n", x);
      }
    ```

- **e.** The following code should output the odd integers from 999 to 1:

  ```C
  for (x = 999; x >= 1; x += 2) {
    printf("%d\n", x);
  }
  ```

  - **my answer:**

    ```C
    for (x = 999; x >= 1; x -= 1) {
                            ^^ ^ 
    ```

- **f.** The following code should output the even integers from 2 to 100:

  ```C
  counter = 2;
  Do {
    if (counter % 2 == 0) {
    printf("%d\n", counter);
  }
  counter += 2;
  } While (counter < 100);
  ```

  - **my answer:**

    ```C
    counter = 2;
    do {
    ^^ 
    printf("%d\n", counter); //<<<<< we don't need if since
    counter += 2;                  //counter is being incremented with 2
    } while (counter <= 100);
      ^^^^^          ^^      // right termination condition
    ```

- **g.** The following code should sum the integers from 100 to 150 (assume total is initialized to 0):

  ```C
  for (x = 100; x <= 150; ++x); {
    total += x;
  }
  ```

  - **my answer:**

    ```C
    for (x = 100; x <= 150; ++x); {
                                ^ // the statement terminator will cause 
                                 //  to not terminate the other statments.
    ```

## 4.6 State which values of the control variable x are printed by each of the following for statements

- **a.**

  ```C
  for (int x = 2; x <= 13; x += 2) {
  printf("%d\n", x);
  }
  ```

  - **my answer** ✓

    ```console
    > 2
    > 4
    > 6
    > 8
    > 10
    > 12
    $
    ```

- **b.**

  ```C
  for (int x = 5; x <= 22; x += 7) {
    printf("%d\n", x);
  }
  ```

  - **my answer** ✓

    ```console
    > 5
    > 12
    > 19
    $
    ```

- **c.**

  ```C
  for (int x = 3; x <= 15; x += 3) {
    printf("%d\n", x);
  }
  ```

  - **my answer** ✓

    ```console
    > 3
    > 6
    > 9
    > 12
    > 15
    $
    ```

- **d.**

  ```C
  for (int x = 1; x <= 5; x += 7) {
  printf("%d\n", x);
  }
  ```

  - **my answer** ✓

    ```console
    > 1
    $
    ```

- **e.**

  ```C
  for (int x = 12; x >= 2; x -= 3) {
  printf("%d\n", x);
  }
  ```

  - **my answer** ✓

    ```console
    > 12
    > 9
    > 6
    > 3
    $
    ```

## 4.7 Write for statements that print the following sequences of values

- **a.** `1, 2, 3, 4, 5, 6, 7`

  ```C
  for (int x = 1; x <= 7; ++x) {
    printf("%d, ", x);
  } 
  puts("");
  ```

- **b.** `3, 8, 13, 18, 23`

  ```C
  for (int i = 3; i <=23; i += 5) {
    printf("%d, " x);
  }
  puts("");
  ```

- **c.** `20, 14, 8, 2, –4, –10`

  ```C
  for (int j = 20; j >= -10; j -= 6)
  ```

- **d.** `19, 27, 35, 43, 51`

  ```C
  for (int k = 19; k <= 51; k += 8)
  ```

## 4.9 (Sum a Sequence of Integers)

Write a program that sums a sequence of integers.
Assume that the first integer read with scanf specifies the number of
values remaining
to be entered. Your program should read only one value each time scanf
executes.
A typical input sequence might be

```console
> 5 100 200 300 400 500
```

where the `5` indicates that the next five values are to be summed.

## 4.10 (Average a Sequence of Integers)

Write a program that calculates and prints the average of several
integers. Assume the last value read with scanf is the sentinel 9999.
A typical input sequence might be

```console
> 10 8 11 7 9 9999
```

indicating that the average of all the values preceding 9999 is to be calculated.

## 4.11 (Find the Smallest)

Write a program that finds the smallest of several integers.
Assume that the first value read specifies the number of values remaining.

## 4.12 (Calculating the Sum of Even Integers)

Write a program that calculates and
prints the sum of the even integers from 2 to 30.

## 4.13 (Calculating the Product of Odd Integers)

Write a program that calculates and
prints the product of the odd integers from 1 to 15.

## 4.14 (Factorials)

The factorial function is used frequently in probability problems.
The factorial of a positive integer n (written n! and pronounced “n factorial”) is equal
to the product of the positive integers from 1 to n. Write a program that evaluates the
factorials of the integers from 1 to 5. Print the results in tabular format.
What difficulty might prevent you from calculating the factorial of 20?

## 4.15 (Modified Compound-Interest Program)

Modify the compound-interest program of Section 4.5
to repeat its steps for interest rates of 5%, 6%, 7%, 8%, 9%, and
10%. Use a for loop to vary the interest rate.

## 4.16 (Triangle-Printing Program)

Write a program that prints the following patterns separately,
one below the other. Use for loops to generate the patterns.
All asterisks (*) should be printed by a single printf statement of
the form `printf("%s","\*");` (this causes the asterisks to print side-by-side).
[*Hint:* The last two patterns require that each line begin with an
appropriate number of blanks.]

```text
(A)           (B)          (C)        (D)
*             **********   **********           *
**            *********     *********          **
***           ********       ********         ***
****          *******         *******        ****
*****         ******           ******       *****
******        *****             *****      ******
*******       ****               ****     *******
********      ***                 ***    ********
*********     **                   **   *********
**********    *                     *  **********
```

## 4.17 (Calculating Credit Limits)

Collecting money becomes increasingly difficult during periods of recession, so companies may tighten their credit limits to prevent their accounts receivable (money owed to them) from becoming too large. In response to a prolonged recession, one company has cut its customers’ credit limits in half. Thus, if a particular customer had a credit limit of $2000, it’s now $1000. If a customer had a credit limit of $5000, it’s now $2500. Write a program that analyzes the credit status of three customers of this company. For each customer you’re given:

1. The customer’s account number.
2. The customer’s credit limit before the recession.
3. The customer’s current balance (i.e., the amount the customer owes).

Your program should calculate and print the new credit limit for
each customer and determine (and print) which customers have
balances that exceed their new credit limits.

## 4.18 (Bar-Chart Printing Program)

One interesting application of computers is
drawing graphs and bar charts. Write a program that reads five numbers (each be-
tween 1 and 30). For each number read, your program should print a line containing
that number of adjacent asterisks. For example, if your program reads the number
seven, it should print `*******`.

## 4.19 (Calculating Sales)

An online retailer sells five different products whose retail
prices are shown in the following table:

| Product Number | Retail Price |
| -------------- | ------------ |
| 1              | $2.98        |
| 2              | $4.50        |
| 3              | $9.98        |
| 4              | $4.49        |
| 5              | $6.87        |

Write a program that reads a series of pairs of numbers as follows:

1. Product number.
2. Quantity sold for one day.

Your program should use a switch statement to help determine the retail price for
each product. Your program should calculate and display the total retail value of all
products sold last week.

## 4.21

Rewrite the program of *Fig. 4.2* to define and initialize the variable counter be-
fore the for statement, then output the value of counter after the loop terminates.

- **fig 4.2**

  ```C
  // fig04_02.c
  // Counter-controlled iteration with the for statement.
  #include <stdio.h>
  int main(void) {
    // initialization, iteration condition, and increment
    // are all included in the for statement header.
    for (int counter = 1; counter <= 5; ++counter) {
      printf("%d ", counter);
    }
    puts(""); // outputs a newline
  }
  ```

- **new output:**

  ```console
  $ ./a.out 
  1 2 3 4 5 
  6
  ```

## 4.22 (Average Grade)

Modify the program of *Fig. 4.5* so that it calculates the average
grade for the class.

## 4.23 (Calculating the Compound Interest with Integers)

Modify the program of *Fig. 4.4* so that it uses only integers to calculate the compound interest.
[Hint: Treat all monetary amounts as integral numbers of pennies.
Then “break” the result into its
dollar portion and cents portion by using the division and remainder
operations, respectively. Insert a period.]

## 4.24

Assume `i = 1`, `j = 2`, `k = 3` and `m = 2`. What does each statement print?

1. `printf("%d", i == 1);`

    ```console
      > 1
    ```

2. `printf("%d", j == 3);`

    ```console
      > 0
    ```

3. `printf("%d", i >= 1 && j < 4);`

    ```console
      > 1
    ```

4. `printf("%d", m <= 99 && k < m);`

    ```console
      > 0
    ```

5. `printf("%d", j >= i || k == m);`

    ```console
      > 1
    ```

6. `printf("%d", k + m < j || 3 - j >= k);`

    ```console
      > 0
    ```

7. `printf("%d", !m);`

    ```console
      > 0
    ```

8. `printf("%d", !(j - m));`

    ```console
      > 1
    ```

9. `printf("%d", !(k > m));`

    ```console
      > 0
    ```

10. `printf("%d", !(j > k));`

    ```console
      > 1
    ```

## 4.25 (Table of Decimal, Binary, Octal and Hexadecimal Equivalents)

Write a program that prints a table of the binary,
octal and hexadecimal equivalents of the decimal numbers 1—256.
If you’re not familiar with these number systems, read online
Appendix E before you attempt this exercise.
[*Note:* You can display an integer as an octal or hexadecimal value
with the conversion specifications %o and %X, respectively.]

## 4.26 (Calculating the Value of π)

Calculate the value of π from the infinite series

$$
\pi = 4 - \frac{4}{3} + \frac{4}{5} - \frac{4}{7} + \frac{4}{9} - \frac{4}{11} + \dots
$$

Print a table that shows the value of π approximated by one term of this series, by
two terms, by three terms, and so on. How many terms of this series do you have to
use before you first get 3.14? 3.141? 3.1415? 3.14159?

## 4.27 (Pythagorean Triples)

A right triangle can have sides that are all integers. The
set of three integer values for a right triangle’s sides is a Pythagorean triple. These three
sides must satisfy the relationship that the sum of the sides’ squares is equal to the hy-
potenuse’s square. Find all Pythagorean triples for side1, side2, and the hypotenuse, all
no larger than 500. Use a triple-nested for loop that tries all possibilities. This is an
example of *“brute-force”* computing. It’s not aesthetically pleasing to many people.
But there are many reasons why this technique is important. First, with computing
power increasing at such a phenomenal pace, solutions that would have taken years or
even centuries of computer time to produce with the technology of just a few years ago
can now be produced in hours, minutes, seconds or even less. Second, there are large
numbers of interesting problems for which there’s no known algorithmic approach
other than sheer brute force. We investigate many problem-solving methodologies in
this book. We’ll consider brute-force approaches to various interesting problems.

## 4.28 (Calculating Weekly Pay)

A company pays its employees as managers
(who receive a fixed weekly salary), hourly workers
(who receive a fixed hourly wage for up to the first 40 hours they work and
“time-and-a-half” for overtime hours worked), commission workers
(who receive $250 plus 5.7% of their gross weekly sales),
or piece-workers (who receive a fixed amount of money for each of the items
they produce—eachpieceworker in this company works on only one type of item).
Write a program to compute each employee’s weekly pay. You do not
know the number of employees in advance.

Each type of employee has a pay code: Managers have paycode 1, hourly
workers have code 2, commission workers have code 3 and pieceworkers have code 4.
Use a `switch` to compute each employee’s pay based on the paycode. Within the
switch, prompt the user to enter the appropriate facts your program needs to calculate each employee’s pay based on that employee’s paycode.

[*Note:* You can input values of
type `double` using the conversion specification `%lf` with `scanf`.]
