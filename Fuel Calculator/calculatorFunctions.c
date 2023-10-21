#include "calculatorFunctions.h"
#include <stdio.h>

void calcFuelTime(length raceLength, double fuelRate, time lapTime, fuel* reqFuel) { //function body for calculating required fuel and modifying the value of reqFuel in main.
    double totalRaceTime;
    double totalLapTime;

    totalRaceTime = (raceLength.hours * 3600) + (raceLength.minutes * 60);
    totalLapTime = (lapTime.minutes * 60) + (lapTime.seconds);

    reqFuel->minimumFuel = fuelRate * ((totalRaceTime / totalLapTime) + 1);
    reqFuel->safeFuel = fuelRate * ((totalRaceTime / totalLapTime) + 3.5);
     
}

void calcFuelLaps(int raceLaps, double fuelRate, fuel* reqFuel) {
    reqFuel->minimumFuel = fuelRate * (raceLaps + 1);
    reqFuel->safeFuel = fuelRate * (raceLaps + 3.5);
}