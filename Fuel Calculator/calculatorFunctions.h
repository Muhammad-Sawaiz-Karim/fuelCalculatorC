typedef struct time_struct {
    int minutes;
    double seconds;
} time; //Definition of the time struct used in calculations involving laptimes.

typedef struct length_struct {
    int hours;
    int minutes;
} length; //Definition of the length struct used in calculations involving race length.

typedef struct fuel_struct {
    double minimumFuel;
    double safeFuel;
} fuel; //Definition of the fuel struct used in calculations involving required fuel amount.

void calcFuelTime(length raceLength, double fuelRate, time lapTime, fuel* reqFuel); //Function header for fuel calculation (time)
void calcFuelLaps(int raceLaps, double fuelRate, fuel* reqFuel); //Function header for fuel calculation (laps)