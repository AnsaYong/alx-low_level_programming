#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a dynamically-allocated 2D grid
 * @grid: dynamically allocated 2D grid
 * @height: number of rows in the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
