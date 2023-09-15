// RappelC.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
// RAPPEL C BTS SN 2EME ANNEE POLLET Quentin

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

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
	printf("%p", ptrVarFlaot);
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
}
