// Fichier d'implémentation des fonctions

#include "functions.h"

// Iniatialisation (on insere les valeurs que donnent l’utilisateur de manière à ce que le tableau soit rangé dans l’ordre croissant)
int inializationTab(int* tab)
{
	int endOrNot, lastIndexTab, saisie;

	// Boucle de saisi des valeurs et du rangement dans l'ordre croissant des valeurs dans le tableau
	for (int i = 0; i < 100; i++)
	{
		printf("Veuillez rentrer un nombre/chiffre entier : ");
		scanf("%d", &saisie);

		printf("Voulez-vous continuer la saisie ? (0 = Non et 1 = Oui) : ");
		scanf("%d", &endOrNot);

		// Si l'utilisateur n'a pas saisi 0 ou 1
		while (endOrNot != 0 && endOrNot != 1)
		{
			printf("Veuillez saisir soit la valeur 0 ou 1 au clavier SVP !\n");
			printf("Voulez-vous continuer la saisie ? (0 = Non et 1 = Oui) : ");
			scanf("%d", &endOrNot);
		}

		int j = 0;
		lastIndexTab = i;
		bool insert = false;

		// On met dans l'odre croissant les valeurs dans le tableau
		while (j < lastIndexTab)
		{
			if (saisie < tab[j])
			{
				for (int k = lastIndexTab; k > j; k--)
				{
					tab[k] = tab[k - 1];
				}
				tab[j] = saisie;
				insert = true;
				break;
			}
			j++;
		}

		// Si aucun nombre n'a était insérer et que se n'est pas la fin de la saisie
		if (!insert && endOrNot == 1)
		{
			tab[j] = saisie;
		}

		// Si l'utilisateur à décider d'arrêter la saisie
		if (endOrNot == 0)
		{
			return i;
		}
	}
}

// Recherche (rechercher la valeur donnée par l’utilisateur dans le tableau en utilisant la méthode de recherche par dichotomie)
void reseachPerDichotomie(int* tab, int lastIndex, int* valueResearch)
{
	int end = lastIndex, begin = 0, numFind, middle;
	bool isNumberFind = false;

	printf("Quel chiffre/nombre recherchez-vous ? : ");
	scanf("%d", &numFind);

	valueResearch[2] = numFind;

	// On fait la recherche par dichotomie
	while (!isNumberFind && (begin <= end))
	{
		middle = (begin + end) / 2;

		// Si le numéro rechercher est trouvé à l'index du milieu
		if (tab[middle] == numFind)
		{
			isNumberFind = true;
			valueResearch[0] = 1;
			valueResearch[1] = middle;
			break;
		}
		else if (tab[middle] > numFind) // Si le numéro du milieu du tableau est supérieur à celui  rechercher
		{
			end = middle - 1;
		}
		else // Dans le cas contraire
		{
			begin = middle + 1;
		}
	}

	if (isNumberFind != true) // Si le numéro rechercher n'a pas était trouver
	{
		valueResearch[0] = 0;
		valueResearch[1] = NULL;
	}
}

// Affichage (affiche le tableau et si la valeur donnée par l’utilisateur est présente ou non dans ce dernier et si oui donne son index dans le tableau)
void displayTab(int* tab, int lastIndex, int* valueResearch)
{
	// Affichage du tableau
	printf("Voici les differentes valeur du tableau trier en ordre croissant : ");
	for (int i = 0; i <= lastIndex; i++)
	{
		printf("%d ", tab[i]);
	}

	// Affichage de la valeur et de son index ou non
	if (valueResearch[0] == 1)
	{
		printf("\nCHIFFRE/NOMBRE trouver a la position %d, le nombre etait donc : %d", valueResearch[1] + 1, valueResearch[2]);
	}
	else if (valueResearch[0] == 0)
	{
		printf("\nERREUR : le chiffre/nombre %d rechercher n est pas present dans le tableau", valueResearch[2]);
	}

}