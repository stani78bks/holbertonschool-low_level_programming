#include "main.h"

/**
 * print_chessboard - Affiche un échiquier de 8x8 caractères.
 * @a: Tableau 2D contenant les pièces de l'échiquier.
 */
void print_chessboard(char (*a)[8])
{
    int i, j;

    for (i = 0; i < 8; i++) /* Boucle à travers les lignes */
    {
        for (j = 0; j < 8; j++) /* Boucle à travers les colonnes */
        {
            _putchar(a[i][j]); /* Affiche le caractère */
        }
        _putchar('\n'); /* Nouvelle ligne après chaque ligne de l'échiquier */
    }
}
