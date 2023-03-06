#include <stdio.h>

/**
 * _memcpy - copies a specified number of bytes from the memory area
 * @dest: destination pointer variable to which memory is copied
 * @src: variable pointing to the source location from which to copy
 * @n: number of bytes to copy
 *
 * Return: a pointer to the overwritten memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
