#include "main.h"
#include <stdio.h>

void print_triangle(int size)
{
    int row, spaces, hashes;

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

