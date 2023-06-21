#include <stddef.h>

/**
 * int_index - searches for an integer
 * @array: array of integers to check
 * @size: number of elements in array
 * @cmp: pointer to function to be used to compare values
 *
 * Return: index or -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	while (k < size)
	{
		if (cmp(array[k]) != 0)
			return (k);
		k++;
	}
	return (-1);
}

