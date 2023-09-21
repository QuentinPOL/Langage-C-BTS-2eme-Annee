#include "functions.h"

// EXO FONCTIONS

bool empileTab(int* tab, int *indexTab, int *indexTabMax)
{
	srand(time(NULL));

	if (*indexTabMax == 20 || *indexTab < *indexTabMax) // Si le tableau est déjà plein ou que l'index actuelle est plus petit que le max
	{
		tab[*indexTab] = rand() % 101;
		*indexTab= *indexTab + 1; // On va que incrémenter l'index avec qui on depile/empile
		return true;
	}
	else if (*indexTab == *indexTabMax)
	{
		tab[*indexTab] = rand() % 101;
		*indexTab = *indexTab + 1;
		*indexTabMax = *indexTabMax + 1;
		return true;
	}
	else
	{
		return false;
	}
}

int depileTab(int* tab, int* indexTab)
{
	int valueDepile = 0;
	valueDepile = tab[*indexTab-1];
	*indexTab = *indexTab - 1;
	return valueDepile;
}

// Function who display tab
void displayTab(int* tab, int indexMaxTab)
{
	for (int i = 0; i < indexMaxTab; i++)
	{
		printf("Index %d : %d\n", i + 1, tab[i]);
	}
}

// Functions for eliminate data in the buffer
void viderBuffer()
{
	int c = 0;
	while (c != '\n' && c != EOF)
	{
		c = getchar();
	}
}