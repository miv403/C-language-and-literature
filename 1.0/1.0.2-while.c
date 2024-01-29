/*
A college offers a course that prepares students for the state licensing exam for real estate brokers.
Last year, 10 of the students who completed this course took the licensing examination.
Naturally, the college wants to know how well its students did on the exam.
You’ve been asked to write a program to summarize the results.
You’ve been given a list of these 10 students.
Next to each name is a 1 if the student passed the exam or a 2 if the student failed.
Your program should analyze the results of the exam as follows:

1. Input each test result (i.e., a 1 or a 2). Display the prompting message
“Enter result” each time the program requests another test result.

2. Count the number of test results of each type.

3. Display a summary of the test results indicating the number of students
who passed and the number who failed.

4. If more than eight students passed the exam, print the message “Bonus to
instructor!”
*/

#include <stdio.h>

int main(void) {

    int passed = 0;
    int failed = 0;
    int student = 1;

    while (student <= 10) {

        printf("enter result: ");
        int result = 0;
        scanf("%d", &result);
        if (result == 1) {
            passed ++;
        }
        else {
            failed++;
        }
        student++;
    }
    printf("passed: %d\n", passed);
    printf("failed: %d\n", failed);
    if (passed > 8) {
        puts("Bonus to instructor!");
    }
}