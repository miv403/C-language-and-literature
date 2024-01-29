/*
Set total to zero
Set grade counter to one
While grade counter is less than or equal to ten
    Input the next grade
    Add the grade into the total
    Add one to the grade counter

Set the class average to the total divided by ten
Print the class average

fig03_02.c
Class average program with counter-controlled iteration.

*/

#include <stdio.h>

int main(void) {

    int total = 0;
    int counter = 1;

    while (counter <= 10) {


        printf("type in a grade: ");
        int grade = 0;
        scanf("%d", &grade);
        total += grade;
        counter++;

    }
    int average = total / 10;
    printf("average grade is %d", average);
    puts("");
    counter = 0; while (counter < 10) {printf("~"); counter++;}
    puts("");

/*

// scanf'in dönütü ile döngüyü denetleme

    total, counter = 0;
    int check = 1;
    while (check != EOF) {

        printf("type in a grade: ");
        int grade = 0;
        check = scanf("%d", &grade);
        total += grade;
        counter++;
    }
    
    int average = total / 10;
    printf("average grade is %d", average);
    puts("");
    counter = 0; while (counter < 10) {printf("~"); counter++;}
    puts("");
*/

}

