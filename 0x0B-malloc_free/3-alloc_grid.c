#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates a two dimensional array of ints
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to 2D int array, or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int **grid_arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* first create rows which will be pointers to int pointers */
	grid_arr = malloc(height * sizeof(int *));
	if (grid_arr == NULL)
		return (NULL);
	/* then create columns which will be int pointers */
	for (i = 0; i < height; i++)
	{
		grid_arr[i] = malloc(width * sizeof(int));
		if (grid_arr[i] == NULL)
		{
			/* free previously allocated memory */
			for (j = 0; j < i; i++)
				free(grid_arr[j]);
			free(grid_arr);
			return (NULL);
		}
	}

	/* initializing array */
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid_arr[i][j] = 0;

	return (grid_arr);
}
