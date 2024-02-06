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
the form printf("%s","*"); (this causes the asterisks to print side-by-side).
[Hint: The last two patterns require that each line begin with an
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
