#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2d grid from above quiestion
 *
 * @**grid: pointer
 * @height: int
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int row;

	for (row = 0; row < height; row++)
	{
		free(grid[row]);
	}
	free(grid);
}
