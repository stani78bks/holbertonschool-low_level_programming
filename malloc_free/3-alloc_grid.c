#include <stdlib.h>

/**
 * alloc_grid - Creates a 2D grid of integers.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: A pointer to the 2D grid, or NULL if allocation fails or if
 * width or height is 0 or negative.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* If width or height is less than or equal to 0, return NULL */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for the array of pointers (height number of rows) */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	/* Allocate memory for each row and initialize to 0 */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Free previously allocated memory if allocation fails */
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		/* Initialize each element to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}

