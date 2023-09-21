// TP 1 RAPPEL C BTS SN 2EME ANNEE PAR MCG

#include "Functions.h"
#include <conio.h>

int main(int agrc, char ** argv)
{
	/*
	// EXO 1 TP 1
	int aBis = 5, bBis = 4;

	printf("A = %d et B = %d", aBis, bBis);
	exchange(&aBis, &bBis);
	printf("\nA = %d et B = %d", aBis, bBis);
	*/

	/*
	// EXO 2 TP 1
	int tab[100], lastIndex, ElementsResearch[3];

	lastIndex = inializationTab(tab);
	reseachPerDichotomie(tab, lastIndex, ElementsResearch);
	displayTab(tab, lastIndex, ElementsResearch);
	*/

	// EXO 3 TP 1

	student tabOfStudent[100];
	FILE *fichierSave;
	int studentArePresent = 0;
	char chooseNumber, informationFile[2];

	do
	{
		printf("\nBienvenue sur ECOLE DE WISH !\n\n");

		printf("Saisir un des chiffres suivant :\n\n");

		// Exigence fonctionnelle 1
		printf("1 - Ajouter un etudiant\n");
		printf("2 - Afficher les etudiants deja present\n");
		printf("3 - Sauvegarder tout les eleves\n");
		printf("4 - Charger tout les informations des eleves\n");
		printf("5 - Quitter le programme\n");

		printf("\nSaisir le chiffre : ");
		scanf("%c", &chooseNumber);

		while (chooseNumber != 49 && chooseNumber != 50 && chooseNumber != 51 && chooseNumber != 52 && chooseNumber != 53)
		{
			viderBuffer();
			printf("Il faut saisir l'un des 5 bons chiffres !\nSaisir le chiffre : ");
			scanf("%c", &chooseNumber);
		}

		if (chooseNumber == 49) // Si 1
		{
			studentArePresent = addStudent(tabOfStudent, &studentArePresent);
		}
		else if (chooseNumber == 50) // Si 2
		{
			displayStudent(tabOfStudent, studentArePresent);
		}
		else if (chooseNumber == 51) // Si 3
		{
			printf("Veuillez saisir un nom de fichier : ");
			gets_s(informationFile[0], 1000);

			printf("Veuillez saisir un chemin d'acces : ");
			gets_s(informationFile[1], 1000);

			saveStudent(tabOfStudent, informationFile);
		}
		else if (chooseNumber == 52) // Si 4
		{
			// loadStudent(tabOfStudent);
		}

		viderBuffer();
	}	while (chooseNumber != 53); // Diff de 0
	
}