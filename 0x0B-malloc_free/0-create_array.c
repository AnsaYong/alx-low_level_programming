#include <stdlib.h>

/**
 * create_array - creates an array of chars, and inititalizes
 * it with a specific char
 * @size: size of the array which is always positive
 * @c: the first character to initialize the array with
 *
 * Return: a pointer (address) to the created array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
