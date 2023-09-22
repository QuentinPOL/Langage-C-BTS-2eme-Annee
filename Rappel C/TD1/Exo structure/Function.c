#include "Functions.h"
#include "hours.h"

void convertHours(Hours time, int * TimeSeconds)
{
	*TimeSeconds += time.heures * 3600;
	*TimeSeconds += time.minutes * 60;
	*TimeSeconds += time.secondes;
}

void convertSecond(Hours * time, int TimeSeconds)
{
	time->heures = TimeSeconds / 3600;
	TimeSeconds %= 3600;

	time->minutes = TimeSeconds / 60;
	TimeSeconds %= 60;

	time->secondes = TimeSeconds;
}

Hours additionHours(Hours time1, Hours time2)
{
	Hours newTime;
	int resttime = 0;

	newTime.heures = time1.heures + time2.heures;

	newTime.minutes = time1.minutes + time2.minutes + resttime;
	if (newTime.minutes >= 60)
	{
		resttime = newTime.minutes / 60;
		newTime.minutes %= 60;
		newTime.heures += resttime;
	}

	newTime.secondes = time1.secondes + time2.secondes + resttime;
	if (newTime.secondes >= 60)
	{
		resttime = newTime.secondes / 60;
		newTime.secondes %= 60;
		newTime.minutes += resttime;

		if (newTime.minutes >= 60)
		{
			resttime = newTime.minutes / 60;
			newTime.minutes %= 60;
			newTime.heures += resttime;
		}
	}

	return newTime;
}