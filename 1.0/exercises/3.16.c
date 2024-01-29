/*
3.16 (Gas Mileage) Drivers are concerned
with the mileage obtained by their automobiles.
One driver has kept track of several tankfuls of gasoline
by recording miles driven and gallons used for each tankful.
Develop a program that uses scanf to input the miles driven
and gallons used for each tankful.
The program should calculate and
display the miles per gallon obtained for each tankful.
After processing all input information,
the program should calculate and print
the combined miles per gallon obtained for all tankfuls.

Here is a sample input/output dialog:

Enter the gallons used (-1 to end): 12.8
Enter the miles driven: 287
The miles/gallon for this tank was 22.421875
Enter the gallons used (-1 to end): 10.3
Enter the miles driven: 200
The miles/gallon for this tank was 19.417475
Enter the gallons used (-1 to end): 5
Enter the miles driven: 120
The miles/gallon for this tank was 24.000000
Enter the gallons used (-1 to end): -1
The overall average miles/gallon was 21.601423
*/

#include <stdio.h>

// scanf input for gallons used and miles driven
// use a float division to calculate miles per gallon.

int main(void) {

    double gallons, miles, sumMiles, sumGallons = 0;
    double milesPerGallon = 0;
    printf("type in the gallons used (-1 to end): ");
    scanf("%lf", &gallons);
    sumGallons += gallons;
    printf("type in the miles driven: ");
    scanf("%lf", &miles);
    sumMiles += miles;
    milesPerGallon = miles / (double) gallons;
    printf("miles/gallon: %.5f", milesPerGallon);
    puts("");
    
    while (gallons != -1) {

        // gallons, miles = 0;
        printf("type in the gallons used (-1 to end): ");
        scanf("%lf", &gallons);
        if (gallons == -1) { continue;}
        sumGallons += gallons;
        printf("type in the miles driven: ");
        scanf("%lf", &miles);
        sumMiles += miles;
        milesPerGallon = (double) miles / (double) gallons;
        printf("miles/gallon: %.5lf", milesPerGallon);
        puts("");
    }
    double average = sumMiles / sumGallons;
    printf("The overall average miles/gallon was %.5lf", average);
    puts("");

}