#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size,, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: pointer to newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_mem;
	unsigned int min_size;
	unsigned char *old_mem;
	unsigned char *new_mem_byte;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_mem = malloc(new_size);
	if (new_mem == NULL)
		return (NULL);

	min_size = old_size < new_size ? old_size : new_size;
	old_mem = ptr;
	new_mem_byte = new_mem;
	while (i < min_size)
	{
		new_mem_byte[i] = old_mem[i];
		i++;
	}

	free(ptr);

	return (new_mem);
}
