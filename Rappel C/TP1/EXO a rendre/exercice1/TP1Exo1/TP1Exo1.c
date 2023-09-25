// TP1 EXO 1 MAI
#include "functions.h"

// Fonction main qui regroupe les fonctions/variables
int main(int agrc, char ** argv)
{
	// EXO 1 TP 1
	int aBis = 5, bBis = 4;
	printf("A = %d et B = %d", aBis, bBis);

	// Fonctions d'échange des valeurs 
	exchange(&aBis, &bBis);

	printf("\nA = %d et B = %d", aBis, bBis);
}