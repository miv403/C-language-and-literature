# section 5 exercises

## 6.1

## 6.3

**Follow the instructions below regarding an array called fractions.**

- a. Define a symbolic constant SIZE with the replacement text 10.
- b. Define a double array with SIZE elements and initialize the elements to 0.
- c. Refer to array element 4.
- d. Assign the value 1.667 to array element nine.
- e. Assign the value 3.333 to the seventh element of the array.
- f. Print array elements 6 and 9 with two digits of precision to the right of the decimal point, and show the output that’s displayed on the screen.
- g. Print all the elements of an array using a for iteration statement. Use the variable x as the loop’s control variable. Show the output.

## 6.10 (Sales Commissions) ✕

Use a one-dimensional array to solve the following
problem. A company pays its salespeople on a commission
basis. The salespeople receive $200 per week plus 9% of
their gross sales for that week. For example, a salesperson
who grosses $3000 in sales in a week receives $200 plus 9%
of $3000 for a total of $470. Write a C program (using an
array of counters) that determines how many
salespeople earned salaries in each of the following
ranges—assume that each sales-person’s salary is truncated
to an integer amount:

1. $200–299
2. $300–399
3. $400–499
4. $500–599
5. $600–699
6. $700–799
7. $800–899
8. $900–999
9. $1000 and over

## 6.11 (Bubble Sort) ✕

The bubble sort presented in Fig. 6.12 is inefficient for large arrays. Make the following modifications to improve its performance:

1. After the first pass, the largest number is guaranteed to be in the highest-
numbered array element; after the second pass, the two highest numbers are
“in place,” and so on. Instead of making nine comparisons on every pass,
modify the bubble sort to make eight comparisons on the second pass, seven
on the third pass and so on.
2. The data in the array may already be in the proper or near-proper order, so
why make nine passes if fewer will suffice? Modify the sort to check at the
end of each pass whether any swaps have been made. If there were none,
then the data must already be in the proper order, so the sort should termi-
nate. If swaps have been made, then at least one more pass is needed.

## 6.12

Write loops that perform each of the following one-dimensional array operations:

- a. Initialize the 10 elements of integer array `counts` to *zeros*.
- b. Add 1 to each of the 15 elements of integer array `bonus`.
- c. Read the 12 values of `float` array `monthlyTemperatures` from the keyboard.
- d. Print the five values of integer array `bestScores` in column format.

## 6.15 (Duplicate Elimination)

Use a one-dimensional array to solve the following
problem. Read 20 numbers, each of which is between 10 and 100, inclusive. As each
number is read, print it only if it’s not a duplicate of a number already read. Provide
for the “worst case” in which all 20 numbers are different. Use the smallest possible
array to solve this problem.

## 6.17

**What does the following program do?**

```C
// ex06_17.c
// What does this program do?
#include <stdio.h>
#define SIZE 10
int whatIsThis(const int b[], size_t p); // function prototype
int main(void)
{
    // initialize array a
    int a[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x = whatIsThis(a, SIZE);
    printf("Result is %d\n", x);
}
// what does this function do?
int whatIsThis(const int b[], size_t p)
{
    if (1 == p)
    { // base case
        return b[0];
    }
    else
    { // recursion step
        return b[p - 1] + whatIsThis(b, p - 1);
    }
}
```

**answer:** it sums elements of the array.

## 6.18

**What does the following program do?**

```C
// ex06_18.c
// What does this program do?
#include <stdio.h>
#define SIZE 10
// function prototype
void someFunction(const int b[], size_t start, size_t size);
// function main begins program execution
int main(void)
{
    int a[SIZE] = {8, 3, 1, 2, 6, 0, 9, 7, 4, 5}; // initialize a
    puts("Answer is:");
    someFunction(a, 0, SIZE);
    puts("");
}
// What does this function do?
void someFunction(const int b[], size_t start, size_t size)
{
    if (start < size)
    {
        someFunction(b, start + 1, size);
        printf("%d ", b[start]);
    }
}
```

**answer:** it prints elements of the array from the end to the beginning.

## 6.19 (Dice Rolling)

Write a program that simulates rolling two dice. The program
should use rand twice to roll the first and second die, respectively, then calculate their
sum. Because each die can have an integer value from 1 to 6, the sum of the values will
vary from 2 to 12, with 7 being the most frequent sum and 2 and 12 the least frequent
sums. The following diagram shows the 36 possible combinations of the two dice:

|       | 1 | 2 | 3 | 4 | 5 | 6 |
| ----- | - | - | - | - | - | - |
| **1** | 2 | 3 | 4 | 5 | 6 | 7 |
| **2** | 3 | 4 | 5 | 6 | 7 | 8 |
| **3** | 4 | 5 | 6 | 7 | 8 | 9 |
| **4** | 5 | 6 | 7 | 8 | 9 | 10 |
| **5** | 6 | 7 | 8 | 9 | 10 | 11 |
| **6** | 7 | 8 | 9 | 10 | 11 | 12 |

Your program should roll the two dice 36,000 times. Use a one-dimensional array to
tally the numbers of times each possible sum appears. Print the results in tabular for-
mat. Also, determine whether the totals are reasonable—for example, there are six
ways to roll a 7, so approximately one-sixth of all the rolls should be 7.

## 6.28 (Duplicate Elimination)

In Chapter 12, we explore the high-speed binary search tree data
structure. One feature of a binary search tree is that duplicate values
are discarded when insertions are made into the tree. This is referred
to as duplicate elimination. Write a program that produces 20 random
numbers between 1 and 20. The program should store all nonduplicate
values in an array. Use the smallest possible array to accomplish this
task.

## 6.31 (Palindromes)

A palindrome is a string that’s spelled the same way forward and
backward. Some examples of palindromes are: “radar,” “able was i ere i
saw elba,” and, if you ignore blanks, “a man a plan a canal panama.”
Write a recursive function testPalindrome that returns 1 if the string
stored in the array is a palindrome and 0 otherwise. The function should
ignore spaces and punctuation in the string.

## 6.32 (Linear Search)

Modify the program of Fig. 6.14 to use a recursive linearSearch function
to perform the linear search of the array. The function should receive
an integer array, the size of the array and the search key as arguments.
If the search key is found, return the array subscript; otherwise,
return –1.

## 6.35 (Print an Array)

Write a recursive function printArray that takes an array and
the size of the array as arguments, prints the array, and returns
nothing. The function should stop processing and return when it receives
an array of size zero.
