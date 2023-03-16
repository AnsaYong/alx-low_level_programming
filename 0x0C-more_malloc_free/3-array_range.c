#include <stdlib.h>

/**
 * array_range - creattes an array of numbers
 * @min: smallest number in the array
 * @max: largest number in the array
 *
 * Return: pointer to array of numbers
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, sum;

	if (min > max)
		return (NULL);

	i = 0;
	sum = max - min + 1;
	arr = malloc(sum * sizeof(int));

	if (arr == NULL)
		return (NULL);

	while (min <= max)
	{
		arr[i++] = min;
		min++;
	}

	return (arr);
}
