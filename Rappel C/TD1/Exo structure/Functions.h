#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#include "hours.h"

void convertHours(Hours time, int *TimeSeconds);
void convertSecond(Hours * time, int TimeSeconds);
Hours additionHours(Hours time1, Hours time2);