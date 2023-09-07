// TP 1 RAPPEL C BTS SN 2EME ANNEE PAR MCG

#include "functions.h"
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
    printf("Bienvenue sur ECOLE DE WISH !\n\n");

    printf("Appuyez sur une des touches suivantes :\n\n");

    printf("1 - Ajouter un etudiant\n");
    printf("2 - Afficher les etudiants deja present\n");
    printf("3 - Sauvegarder tout les eleves\n");
    printf("4 - Charger tout les informations des eleve\n");
    printf("5 - Quitter le programme\n");

    student tabOfStudent[100];
    int studentArePresent = 0;
    char chooseNumber;

    scanf("%c", &chooseNumber);

    while (chooseNumber != 49 && chooseNumber != 50 && chooseNumber != 51 && chooseNumber != 52 && chooseNumber != 53)
    {
        viderBuffer();
        printf("Il faut appuyer sur l'une des 5 bonnes touches !\n");
        scanf("%c", &chooseNumber);
    }

    if (chooseNumber == 49) // Si 1
    {
        addStudent(tabOfStudent, &studentArePresent);
    }
    else if (chooseNumber == 50) // Si 2
    {
        // displayStudent(tabOfStudent, studentArePresent);
    }
    else if (chooseNumber == 51) // Si 3
    {
        // saveStudent(tabOfStudent);
    }
    else if (chooseNumber == 52) // Si 4
    {
        // saveStudent(tabOfStudent);
    }
    else if (chooseNumber == 53) // Si 5
    {
        EXIT_SUCCESS;
    }
}