#include "functions.h"

// EXO 1 TP 1
void exchange(int* a, int* b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

// EXO 2 TP 1
int inializationTab(int* tab)
{
    int temp, endOrNot, lastIndexTab;

    for (int i = 0; i < 100; i++)
    {
        printf("Veuillez rentrer un nombre/chiffre entier : ");
        scanf("%d", &tab[i]);

        printf("Voulez-vous continuer la saisie ? (0 = Non et 1 = Oui) : ");
        scanf("%d", &endOrNot);

        while (endOrNot != 0 && endOrNot != 1)
        {
            printf("Veuillez saisir soit la valeur 0 ou 1 au clavier SVP !\n");
            printf("Voulez-vous continuer la saisie ? (0 = Non et 1 = Oui) : ");
            scanf("%d", &endOrNot);

        }

        if (endOrNot == 0)
        {
            lastIndexTab = i;

            // Tri du tableau par ordre croissant (tri � bulles)
            for (int k = 0; k < lastIndexTab; k++)
            {
                for (int j = 0; j < lastIndexTab - k; j++)
                {
                    if (tab[j] > tab[j + 1])
                    {
                        temp = tab[j];
                        tab[j] = tab[j + 1];
                        tab[j + 1] = temp;
                    }
                }
            }

            return lastIndexTab;
        }
        else if (endOrNot == 1)
        {
            endOrNot = NULL;
        }
    }
}

void reseachPerDichotomie(int* tab, int lastIndex, int* valueResearch)
{
    int end = lastIndex, begin = 0, numFind, middle;
    bool isNumberFind = false;

    printf("Quel chiffre/nombre recherchez-vous ? : ");
    scanf("%d", &numFind);

    valueResearch[2] = numFind;

    while (!isNumberFind && (begin <= end))
    {
        middle = (begin + end) / 2;

        if (tab[middle] == numFind)
        {
            isNumberFind = true;
            valueResearch[0] = 1;
            valueResearch[1] = middle;
            break;
        }
        else if (tab[middle] > numFind)
        {
            end = middle - 1;
        }
        else
        {
            begin = middle + 1;
        }
    }

    if (isNumberFind != true)
    {
        valueResearch[0] = 0;
        valueResearch[1] = NULL;
    }
}

void displayTab(int* tab, int lastIndex, int* valueResearch)
{
    printf("Voici les differentes valeur du tableau trier en ordre croissant : ");
    for (int i = 0; i <= lastIndex; i++)
    {
        printf("%d ", tab[i]);
    }

    if (valueResearch[0] == 1)
    {
        printf("\nCHIFFRE/NOMBRE trouver a la position %d, le nombre etait donc : %d", valueResearch[1] + 1, valueResearch[2]);
    }
    else if (valueResearch[0] == 0)
    {
        printf("\nERREUR : le chiffre/nombre %d rechercher n est pas present dans le tableau", valueResearch[2]);
    }

}


// EXO 3 TP 1
int addStudent(student* tabStudent, int studentPresent)
{
    return 0;
}

void displayStudent(student* tabStudent, int studentPresent)
{
    for (int i = 0; i < studentPresent; i++)
    {
        printf("Eleve numero %d : s appelle %s %s, habite a l adresse %s et il en classe %s", i+1, tabStudent[i].firstname, tabStudent[i].name, tabStudent[i].adress, tabStudent[i].classroom);
    }
}