#include <stdio.h>
/**
 * print_array - prints the elements of an array within a given range
 * @array: a pointer to the first element of the array
 * @start: the starting index of the range to print
 * @end: the ending index of the range to print
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located, or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid;
	size_t start = 0;
	size_t end = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (start <= end)
	{
		mid = (start + end) / 2;

		/* Print current comparison */
		print_array(array, start, end);

		/* Comparison */
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			end = mid - 1;
		else
			start = mid + 1;
	}

	return (-1);
}
