#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns pointer to 2d array of int
 *
 * @width: int
 * @height: int
 *
 * Return: pointer or null
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int row;
	int column;

	if (width < 1 || height < 1 || width + height < 2)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(*grid));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(width * sizeof(**grid));

		if (grid[row] == NULL)
		{
			for (row--; row >= 0; row--)
				free(grid[row]);
			free(grid);
			return (NULL);
		}
		for (column = 0;column < width; column++)
		{
			grid[row][column] = 0;
		}
	}
	return (grid);
}
