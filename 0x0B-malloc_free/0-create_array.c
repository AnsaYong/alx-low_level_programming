#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes
 * it with a specific char.
 * @size: size of the array to create.
 * @c: char to initialize tthe array with.
 *
 * Return: pointer to a char array if successful and NULL
 * otherwise.
 */
char *create_array(unsigned int size, char c)
{
	char *array_ptr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	array_ptr = malloc(sizeof(char) * size);

	/* check if malloc was successful or not */
	if (array_ptr == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		*(array_ptr + i) = c;
		i++;
	}
	*(array_ptr + i) = '\0';

	return (array_ptr);
}
