#include <stdio.h>

/**
 * _memset - fills the memory witha constant byte
 * @s: pointer variable pointing to memory location to be altered
 * @b: the constant byte to copy to memory
 * @n: number of bytes to fill
 *
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
