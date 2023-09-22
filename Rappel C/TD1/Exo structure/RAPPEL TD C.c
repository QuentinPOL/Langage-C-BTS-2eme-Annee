// RAPPEL C BTS SN 2EME ANNEE POLLET Quentin

#include "Functions.h"
#include "hours.h"

int main(int agrc, char ** argv)
{
	// EXO STRUCTURES
	int seconds = 0;
	Hours time1, time2, newTime;

	time1.heures = 5;
	time1.minutes = 73;
	time1.secondes = 3601;

	convertHours(time1, &seconds);
	printf("Temps de l'heure 1 = %d secondes\n\n", seconds);

	convertSecond(&time2, seconds);
	printf("Temps de %d secondes = %d heure(s) %d minute(s) %d seconde(s)\n\n", seconds, time2);

	newTime = additionHours(time1, time2);
	printf("Temps 1 + Temps 2 = %d heure(s) %d minute(s) %d seconde(s)", newTime);
}