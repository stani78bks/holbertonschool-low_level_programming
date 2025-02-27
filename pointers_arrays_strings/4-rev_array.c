#include "main.h"

/**
 * reverse_array - Inverse le contenu d'un tableau d'entiers.
 * @a: Le tableau d'entiers.
 * @n: Le nombre d'éléments dans le tableau.
 *
 * Return: Rien, la fonction modifie directement le tableau.
 */
void reverse_array(int *a, int n)
{
    int temp, i, j;

    /* On commence par les extrémités du tableau et on les inverse */
    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}
