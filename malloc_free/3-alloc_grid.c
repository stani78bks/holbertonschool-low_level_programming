#include <stdlib.h>

/**
 * alloc_grid - Crée un tableau 2D d'entiers, initialisé à 0.
 * @width: La largeur du tableau.
 * @height: La hauteur du tableau.
 *
 * Retourne: Un pointeur vers un tableau 2D d'entiers alloué, ou NULL en cas
 * d'échec. Si width ou height est inférieur ou égal à 0, retourne NULL.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* Vérifier si la largeur ou la hauteur sont invalides (<= 0) */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allouer de la mémoire pour les lignes du tableau */
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	/* Allouer de la mémoire pour chaque ligne et initialiser à 0 */
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Si l'allocation échoue, libérer les lignes déjà allouées */
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		/* Initialiser chaque élément de la ligne à 0 */
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}

