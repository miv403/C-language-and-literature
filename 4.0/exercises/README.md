# section 5 exercises

## 6.1

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

## 6.15 (Duplicate Elimination)

Use a one-dimensional array to solve the following
problem. Read 20 numbers, each of which is between 10 and 100, inclusive. As each
number is read, print it only if it’s not a duplicate of a number already read. Provide
for the “worst case” in which all 20 numbers are different. Use the smallest possible
array to solve this problem.
