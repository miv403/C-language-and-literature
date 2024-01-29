#include <stdio.h>

// fig03_04.c
// Class-average program for an Arbitrary Number of Grade swith sentinel-controlled iteration.
/*
Initialize total to zero
Initialize counter to zero
Input the first grade (possibly the sentinel)

While the user has not as yet entered the sentinel
    Add this grade into the running total
    Add one to the grade counter
    Input the next grade (possibly the sentinel)

If the counter is not equal to zero
    Set the average to the total divided by the counter
    Print the average
else
    Print “No grades were entered”    
*/

int main(void) {

    int total, counter, grade = 0;
    printf("type in grade or to quit type `-1`: ");
    scanf("%d", &grade);
    while (grade != -1) {
        total += grade;
        counter++;
        printf("type in grade or to quit type `-1`: ");
        scanf("%d", &grade);
    }

    if (counter > 0) {
        double average = (double) total / counter;
        printf("average grade is %.2f", average);
        puts("");
    }
    else {printf("No grades were entered");puts("");}
}