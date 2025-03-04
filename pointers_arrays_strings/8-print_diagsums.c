#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Affiche la somme des diagonales d'une matrice carrée.
 * @a: Pointeur vers la première case du tableau.
 * @size: Taille de la matrice (nombre de lignes/colonnes).
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];         /* Diagonale principale */
		sum2 += a[i * size + (size - 1 - i)]; /* Diagonale secondaire */
	}

	printf("%d, %d\n", sum1, sum2);
}

