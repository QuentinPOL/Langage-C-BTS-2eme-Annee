// RAPPEL C BTS SN 2EME ANNEE POLLET Quentin

#include <stdio.h>
#include "functions.h"

int main(int agrc, char ** argv)
{
	// Exo 1
	/*
	int* ptr = 5;
	printf("%p", ptr);
	*/

	/// -> EXO 1 =  Cela nous renvoie ERREUR l'adresse du pointeur

	// Exo 2
	/*
	float varfloat = 1.7, *ptrVarFlaot = &varfloat;
	printf("%p\n", ptrVarFlaot);
	printf("%f", *ptrVarFlaot);
	*/

	/// -> EXO 2 =  Cela nous renvoie l'adresse de la variable varfloat grace à la variable pointeur *ptrVarFlaot

	// Exo 3 Programme 1
	/*
	int tabint[15] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
	int* tabptr = tabint;
	int i;

	for (i = 0; i < 15; i++)
	{
		// En affichant que les chiffres impair
		if (i % 2 != 0)
		{
			printf("%d", *(tabptr + i));
			printf("\n");
		}

		// En affichant que les chiffres pair
		if (i % 2 == 0)
		{
			printf("%d", *(tabptr + i));
			printf("\n");
		}
		
	}
	*/

	/// -> Exo 3 Programme 1 =  Il suffit juste de dire que i modulo de deux est différents de 0 ou égal 0 cela va afficher un sur deux (chiffres impair ou pair)

	// Exo 3 Programme 2
	/*
	int tabint[15] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
	int* tabptr = tabint;
	int i;

	for (i = 0; i < 15; i++)
	{
		// En affichant que les chiffres impair
		if (i % 2 != 0)
		{
			printf("%d", *(tabptr));
			printf("\n");
		}
		tabptr++;

		
		
		// En affichant que les chiffres pair
		if (i % 2 == 0)
		{
			printf("%d", *(tabptr));
			printf("\n");
		}
		tabptr++;
		
		
	}
	*/
	/// -> Exo 3 Programme 2 =  Il suffit de faire la même chose qu'au programme sauf qu'il faut mettre tabptr après le if car cette variable et l'indice de la colonne du tableau
	
	// EXO FONCTIONS
	int tab20Entiers[20], valueDepile, indexTab = 0, indexTabMax = 0;
	bool result;
	char chooseNumber = "";

	do
	{
		printf("Bienvenu au menu !\n");
		printf("Saisir un des chiffres suivant :\n\n");

		printf("1 - Empiler une valeur dans la pile !\n");
		printf("2 - Depiler une valeur dans la pile !\n");
		printf("3 - Afficher le contenu de la pile !\n");
		printf("4 - Quitter !\n\n");

		printf("Saisir le chiffre : ");
		scanf("%c", &chooseNumber);

		while (chooseNumber != 49 && chooseNumber != 50 && chooseNumber != 51 && chooseNumber != 52)
		{
			viderBuffer();
			printf("\nIL FAUT SAISIR L'UN DES 4 BONS CHIFFRES SVP ! :\n");

			printf("1 - Empiler une valeur dans la pile !\n");
			printf("2 - Depiler une valeur dans la pile !\n");
			printf("3 - Afficher le contenu de la pile !\n");
			printf("4 - Quitter !\n\n");

			printf("Saisir le chiffre : ");
			scanf("%c", &chooseNumber);
		}

		if (chooseNumber == 49) // Si 1
		{ 
			if (indexTab == 20) // Index trop haut
			{
				printf("Le tableau est deja plein !\n");
			}
			else
			{
				result = empileTab(tab20Entiers, &indexTab, &indexTabMax);

				if (result == true)
				{
					printf("Empilage REUSSI !!!\n\n");
				}
				else
				{
					printf("ERREUR !!!\n\n");
				}
			}
		}
		else if (chooseNumber == 50) // Si 2
		{
			if (indexTab == 0)
			{
				printf("Toutes les valeurs du tableau ont deja etaient depiler ou le tableau est vide !\n\n");
			}
			else
			{
				valueDepile = depileTab(tab20Entiers, &indexTab);
				printf("\nLa derniere valeur depiler est %d a l index %d du de la pile\n\n", valueDepile, indexTab + 1);
			}
		}
		else if (chooseNumber == 51) // Si 3
		{
			if (indexTabMax > 0) // Ce qui veut dire le tableau n'est pas vide
			{
				displayTab(tab20Entiers, indexTabMax);
			}
			else
			{
				printf("Le Tableau est vide !\n\n");
			}
		}

		viderBuffer();
	}	while (chooseNumber != 52); // Tant que diff du chiffre 4
}