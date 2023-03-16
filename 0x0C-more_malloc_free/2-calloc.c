#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of members in the array
 * @size: size of each member in the array
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem_arr;
	unsigned int i, n;

	i = 0;
	n = size * nmemb;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem_arr = malloc(n);

	if (mem_arr == NULL)
		return (NULL);

	while (i < nmemb)
	{
		((char *)mem_arr)[i] = 0;
		i++
	}

	return (mem_arr);
}
