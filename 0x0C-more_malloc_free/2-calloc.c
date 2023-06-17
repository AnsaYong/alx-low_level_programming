#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element in the array
 *
 * Return: pointer to the allocated memory
 * or NULL if the function fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *allocated_mem;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	allocated_mem = malloc(size * nmemb);
	if (allocated_mem == NULL)
		return (NULL);

	/* numb_mem = allocated_mem;  */ /* void pointer cannot be initialized */
	while (i < nmemb)
	{
		allocated_mem[i] = 0;
		i++;
	}
	return (allocated_mem);
}
