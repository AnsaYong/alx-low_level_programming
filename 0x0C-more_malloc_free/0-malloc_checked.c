#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to be allocated
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mem_l = malloc(b);

	if (mem_l == NULL)
		exit(98);

	return (mem_l);
}
