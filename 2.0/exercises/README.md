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
