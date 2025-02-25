#include "main.h"
#include <unistd.h>

/**
 * print_char - Écrit un caractère sur la sortie standard
 * @c: Caractère à afficher
 */
void print_char(char c)
{
    write(1, &c, 1);
}

/**
 * print_triangle - Affiche un triangle avec des '#' et remplace les espaces par '.'
 * @size: Taille du triangle
 */
void print_triangle(int size)
{
    int row, spaces, hashes;

    if (size <= 0)
    {
        print_char('\n'); /* Affiche une ligne vide */
        return;
    }

    for (row = 1; row <= size; row++)
    {
        /* Afficher les espaces sous forme de points */
        for (spaces = 1; spaces <= size - row; spaces++)
        {
            print_char('.');
        }

        /* Afficher les dièses */
        for (hashes = 1; hashes <= row; hashes++)
        {
            print_char('#');
        }

        /* Afficher le caractère '$' en fin de ligne */
        print_char('$');
        print_char('\n');
    }
}

