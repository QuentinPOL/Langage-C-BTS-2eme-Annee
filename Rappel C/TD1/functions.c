#include "Function.h"

// EXO 2 TP 1
int empileTab(int* tab, int *lastIndex)
{
	int temp, endOrNot;
}

int depileTab(int* tab)
{

}

void affiche(int* tab, int lastIndex)
{
	printf("Voici les differentes valeur du tableau : ");
	for (int i = 0; i <= lastIndex; i++)
	{
		printf("%d ", tab[i]);
	}

	printf("\nCHIFFRE/NOMBRE a la derniere position %d du tableau, le nombre etait donc : %d", lastIndex + 1, tab[lastIndex]);
}