#include <stdio.h>

/**
 * print_triangle - Fonction qui imprime un triangle de taille n.
 * @n: La taille du triangle (le nombre de lignes).
 * 
 * Cette fonction imprime un triangle composé de caractères '#' alignés à droite.
 * Si n est 0 ou négatif, la fonction ne fait rien et imprime uniquement un retour à la ligne.
 */
void print_triangle(int n)
{
    int i, j;

    if (n <= 0)
    {
        printf("\n");
        return;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");  /* Imprimer les espaces avant les #. */
        }
        for (j = 1; j <= i; j++)
        {
            printf("#");  /* Imprimer les # pour chaque ligne du triangle. */
        }
        printf("\n");  /* Passer à la ligne suivante après chaque ligne du triangle. */
    }
}

