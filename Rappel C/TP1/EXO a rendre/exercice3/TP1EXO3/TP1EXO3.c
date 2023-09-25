// TP 1 RAPPEL C BTS SN 2EME ANNEE PAR MCG

#include "functions.h"

int main(int agrc, char** argv)
{
	// EXO 3 TP 1

	student tabOfStudent[100];
	int studentArePresent = 0;
	char chooseNumber, nameFile[50], pathFile[150], pathNameFile =  NULL;

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
			viderBuffer();
		}
		else if (chooseNumber == 50) // Si 2
		{
			displayStudent(tabOfStudent, studentArePresent);
			viderBuffer();
		}
		else if (chooseNumber == 51) // Si 3
		{
			viderBuffer();
			printf("Veuillez saisir un nom de fichier : ");
			fgets(nameFile, sizeof(nameFile), stdin);
			nameFile[strcspn(nameFile, "\n")] = '\0'; // Supprimer le caractère de retour ligne


			printf("Veuillez saisir un chemin d'acces : ");
			fgets(pathFile, sizeof(pathFile), stdin);
			pathFile[strcspn(pathFile, "\n")] = '\0'; // Supprimer le caractère de retour ligne
			pathNameFile = saveStudent(tabOfStudent, nameFile, pathFile, studentArePresent);
		}
		else if (chooseNumber == 52) // Si 4
		{
			loadStudent(tabOfStudent, pathNameFile, studentArePresent);
			viderBuffer();
		}

	} while (chooseNumber != 53); // Diff de 0

}