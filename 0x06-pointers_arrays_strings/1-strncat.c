#include "main.h"

/**
 * _strncat - concatenates a specific number of bytes from the source string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be concatenated from the source string
 *
 * Return: the updated destination string, dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
