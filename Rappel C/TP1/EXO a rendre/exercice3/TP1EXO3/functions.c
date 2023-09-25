#include "functions.h"

// EXO 3 TP 1
int addStudent(student* tabStudent, int* studentPresent) // Exigence fonctionnelle 2
{
	char continueSaisi;

	do
	{
		viderBuffer();

		printf("\nVeuillez saisir le nom de l eleve %d : ", *studentPresent + 1);
		gets_s(tabStudent[*studentPresent].name, 20);

		printf("Veuillez saisir le prenom de l eleve %d : ", *studentPresent + 1);
		gets_s(tabStudent[*studentPresent].firstname, 20);

		printf("Veuillez saisir l adresse de l eleve %d : ", *studentPresent + 1);
		gets_s(tabStudent[*studentPresent].adress, 50);

		printf("Veuillez saisir la classe de l eleve %d : ", *studentPresent + 1);
		gets_s(tabStudent[*studentPresent].classroom, 20);

		(*studentPresent)++; // NE PAS FAIRE *() car tableau de pointeurs sinon 
		printf("\nMaintenant le nombre d eleves enregistrer apres cette saisie est de %d", *studentPresent);

		printf("\nVoulez vous saisir a nouveau un eleve ? (0 = Non et 1 = Oui) : ");
		scanf("%c", &continueSaisi);

	} while (continueSaisi != 48);

	return *studentPresent;
}

void displayStudent(student* tabStudent, int studentPresent) // Exigence fonctionnelle 3
{
	if (studentPresent != 0)
	{
		for (int i = 0; i < studentPresent; i++)
		{
			printf("Eleve numero %d : il s appelle %s %s, il habite a l adresse %s et il est en classe %s", i + 1, tabStudent[i].firstname, tabStudent[i].name, tabStudent[i].adress, tabStudent[i].classroom);
		}
	}
	else if (studentPresent == 0)
	{
		printf("ERREUR: Aucun eleve present !!\n");
	}
}

char* saveStudent(student* tabStudent, char* nameFile, char* pathFile, int studentPresent) // Exigence fonctionnelle 4
{
	char filePath[256]; // Une taille suffisamment grande pour stocker le chemin complet
	snprintf(filePath, sizeof(filePath), "%s%s", pathFile, nameFile);

	FILE* fichierSave = fopen(filePath, "w"); // Utilisation de "w" pour créer ou écraser le fichier existant

	// Si le fichier est nul
	if (fichierSave == NULL)
	{
		printf("Erreur lors de l'ouverture du fichier");
		return 0;
	}

	for (int i = 0; i < studentPresent; i++)
	{
		fprintf(fichierSave, "%s", "Prenom : ");
		fprintf(fichierSave, "%s%s", tabStudent[i].firstname, "\n");

		fprintf(fichierSave, "%s", "Nom : ");
		fprintf(fichierSave, "%s%s", tabStudent[i].name, "\n");

		fprintf(fichierSave, "%s", "Adresse : ");
		fprintf(fichierSave, "%s%s", tabStudent[i].adress, "\n");

		fprintf(fichierSave, "%s", "Classe : ");
		fprintf(fichierSave, "%s%s", tabStudent[i].classroom, "\n\n");
	}

	fclose(fichierSave); // Ferme le fichier après utilisation

	return filePath;
}

int loadStudent(student* tabStudent, char filePath, int studentPresent) // Exigence fonctionnelle 5
{
	FILE* fichierSave = fopen(filePath, "w"); // Utilisation de "w" pour créer ou écraser le fichier existant

	// Si le fichier est nul
	if (fichierSave == NULL)
	{
		printf("Erreur lors de l'ouverture du fichier");
		return 0;
	}

	fclose(fichierSave); // Ferme le fichier après utilisation

	return 1;
}

void viderBuffer()
{
	int c = 0;
	while (c != '\n' && c != EOF)
	{
		c = getchar();
	}
}