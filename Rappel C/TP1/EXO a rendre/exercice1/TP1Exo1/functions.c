#include "Functions.h" // Inclusion du  fichier de prototype des fonctions

// Fonctions EXO 1 TP 1
void exchange(int* a, int* b)
{
	// Cette fonctions va échanger les valeurs de deux variables grâce aux pointeurs
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}