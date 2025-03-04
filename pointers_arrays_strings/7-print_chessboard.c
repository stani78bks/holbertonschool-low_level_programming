#include "main.h"

/**
 * print_chessboard - Affiche un échiquier 8x8.
 * @a: Tableau 2D contenant l'échiquier.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]); /* Affiche chaque caractère */
		}
		_putchar('\n'); /* Passe à la ligne après chaque ligne de l'échiquier */
	}
}

