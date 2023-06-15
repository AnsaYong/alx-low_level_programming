#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory with size as parameter
 * @n: size of memory to be reserved
 *
 * Return: pointer to the reserved memory
 */
void *malloc_checked(unsigned int b)
{
	/* no datatype needs to be specified hence void */
	/* also, based on function defn the return type is void pointer */
	void *reserved_mem;

	reserved_mem = malloc(b);
	if (reserved_mem == NULL)
		exit (98);

	return (reserved_mem);
}
