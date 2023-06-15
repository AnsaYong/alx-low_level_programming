#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - allocates memory for an array
 * @min: min value in the int array
 * @max: max value in the int array
 *
 * Return: pointer to the allocated memory
 * or NULL if the function fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int i = 0, numbs;

	if (min > max)
		return (NULL);

	numbs = (max - min)	+ 1;
	arr = malloc(sizeof(int) * numbs);
	if (arr == NULL)
		return (NULL);

	while (i < numbs)
	{
		arr[i] = min++;
		i++;
	}
	return (arr);
}
