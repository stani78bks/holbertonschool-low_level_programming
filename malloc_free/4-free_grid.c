#include <stdlib.h>

/**
 * free_grid - Libère un tableau 2D alloué avec alloc_grid.
 * @grid: Le tableau 2D à libérer.
 * @height: La hauteur du tableau.
 *
 * Retour: Rien.
 */
void free_grid(int **grid, int height)
{
	int i;  /* Déclaration de i avant la boucle */

	if (grid == NULL)
		return;

	/* Libérer chaque ligne */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* Libérer le tableau principal */
	free(grid);
}

