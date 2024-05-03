#include <stdio.h>
#define CARS 3
/*

minimum 2.00($) for up to 3(h)
then additional .5 ($)/(h)

24(h) 10.00($)

no parking time longer than 24(h)

program will take three car and their parking time
then will evaluate total charges in tabular format

program should use `calculateCharges` function to determine
the charges for ecah customer

*/

double calculateCharges(double hours);

int main(void) {

    double carHours[CARS];

    for (unsigned int i  = 0; i < CARS; ++i) {

        printf("The parking hour for car[%d] (0.5): ", i + 1);
        scanf("%lf", &carHours[i]);
    }
    printf("%-7s%-7s%-7s\n","Car","Hours", "Charge");

    double sumCharge = 0, sumHours = 0;
    for (unsigned int i = 0; i < CARS; ++i){

        double charge = calculateCharges(carHours[i]);
        sumCharge += charge;
        sumHours += carHours[i];
        printf("%-7d%-7.2lf%-7.2lf\n", i + 1, carHours[i], charge);
    }
    printf("%-7s%-7.1lf%-7.2lf\n", "TOTAL" , sumHours, sumCharge);

}

double calculateCharges(double hours) {

    int minutes = (double) hours * 60;
    double charge = 0;

    if (minutes == 1440) { // parking time is 24(h)
        return 10;
    }
    else if (minutes >= 3 || minutes < 3 ){

        charge += 2;
        minutes -= 180;
    }
    while (minutes > 0) {
        charge += .5;
        minutes -= 60;
    }
    return charge;
}