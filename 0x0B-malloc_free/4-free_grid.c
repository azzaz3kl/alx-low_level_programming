#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid -  frees a 2 dimensional grid.
 *
 * @grid: 2d grid.
 *
 * @height: height dimension of the grid.
 *
 * Return: nothing.
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
