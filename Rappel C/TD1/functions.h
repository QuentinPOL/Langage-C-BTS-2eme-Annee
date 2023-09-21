#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool empileTab(int* tab, int* indexTab, int* indexTabMax);
int depileTab(int* tab, int* indexTab);
void displayTab(int* tab, int indexMaxTab);
void viderBuffer();