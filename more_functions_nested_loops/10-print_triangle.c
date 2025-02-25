#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Affiche un triangle avec des '#' et remplace les espaces par '.'
 * @size: Taille du triangle
 */
void print_triangle(int size)
{
    int row, spaces, hashes;

    if (size <= 0)
    {
        putchar('\n'); /* Ajoute une ligne vide comme attendu */
        return;
    }

    for (row = 1; row <= size; row++)
    {
        /* Afficher les espaces sous forme de points */
        for (spaces = 1; spaces <= size - row; spaces++)
        {
            putchar('.');
        }

        /* Afficher les dièses */
        for (hashes = 1; hashes <= row; hashes++)
        {
            putchar('#');
        }

        /* Afficher le caractère '$' en fin de ligne */
        putchar('$');
        putchar('\n');
    }
}

