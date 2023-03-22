#include "function_pointers.h"

/**
 * int_index - checks if a number is 98
 * @array: array containing numbers to be checked
 * @size: size of the array
 * @cmp: helper function to check numbers
 *
 * Return: index of the first element for which the cmp function
 * does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
			return (i);
	}

	return (-1);
}
