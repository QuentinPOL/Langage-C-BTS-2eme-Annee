#pragma once

// Fichier des prototypes des fonctions

// Inclusion des différents librairie et cause d'erreur
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// EXO 2 TP 1
int inializationTab(int* tab);
void reseachPerDichotomie(int* tab, int lastIndex, int* valueResearch);
void displayTab(int* tab, int lastIndex, int* valueResearch);