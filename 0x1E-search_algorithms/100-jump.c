#include <stdio.h>
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump_step = sqrt(size);
	size_t prev = 0;
	size_t start, i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

	/* Jump and compare until an element >= value is found */
	while (array[prev] < value && prev < size)
	{
		prev += jump_step;
		if (array[prev] < value && prev < size)
			printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}

	/* When the interval (start - prev) is found, use linear search */
	start = prev - jump_step;    /* Get start of array interval to search */

	printf("Value found between indexes [%lu] and [%lu]\n", start, prev);

	for (i = start; i <= prev && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
