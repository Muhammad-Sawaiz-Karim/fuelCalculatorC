#include <stdio.h>
#include <stdlib.h>
#include "calculatorFunctions.h"

int main (void) {
    fuel reqFuel;
    length raceTime;
    time lapTime;
    double fuelRate;
    int mode = 0;
    int raceLaps;
    
    printf("Welcome to the fuel calculator.\n");

    while (mode != 3) {
        printf("1 - Calculate fuel for a fixed time race (time)\n2 - Calculate fuel for a fixed distance race (laps)\n3 - Exit the program.\n");
        scanf("%d", &mode);
        
        switch(mode) {
        
        case 1:

            printf("Please enter the race length (HH:MM).\n");
            scanf("%d:%d", &raceTime.hours, &raceTime.minutes); //reads race length, with hours and minutes separated by a colon.

            printf("Please enter the fuel usage per lap.\n");
            scanf("%lf", &fuelRate); //reads fuel usage per lap.

            printf("Please enter your laptime (MM:SS.mmm)\n");
            scanf("%d:%lf", &lapTime.minutes, &lapTime.seconds); //reads laptime, with minutes and seconds separated by a colon.

            calcFuelTime(raceTime, fuelRate, lapTime, &reqFuel); //calls calcFuel which modifies reqFuel.
            printf("\nYour minimum required fuel is: %.3lf liters.\nYour safe fuel is: %.3lf liters.\n\n", reqFuel.minimumFuel, reqFuel.safeFuel); //prints the total amount of fuel required.
            break;
        
        case 2:

            printf("Please enter the race length in laps.\n");
            scanf("%d", &raceLaps);

            printf("Please enter the fuel usage per lap.\n");
            scanf("%lf", &fuelRate); //reads fuel usage per lap.

            calcFuelLaps(raceLaps, fuelRate, &reqFuel);
            printf("\nYour minimum required fuel is: %.3lf liters.\nYour safe fuel is: %.3lf liters.\n\n", reqFuel.minimumFuel, reqFuel.safeFuel);
            break;

        case 3:
            printf("\nThank you for using my fuel calculator!\n\n");
            break;

        default:
            printf("Please enter a valid mode.\n\n");
        }
    }
    return 0;
}