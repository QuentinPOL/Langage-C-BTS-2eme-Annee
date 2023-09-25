// TP1 EXO 2 MAIN

#include "functions.h"

// Fonction main qui regroupe les fonctions/variables
int main(int argc, char ** argv)
{
	// EXO 2 TP 1
	int tab[100], lastIndex, ElementsResearch[3];

	// Fonction pour inialiser/recherche/affichage
	lastIndex = inializationTab(tab);
	reseachPerDichotomie(tab, lastIndex, ElementsResearch);
	displayTab(tab, lastIndex, ElementsResearch);
}