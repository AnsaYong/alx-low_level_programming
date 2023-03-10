#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of characters/bytes to copy from src
 *
 * Return: the new string, dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int c = 0;

	while (src[c] != '\0')
		c++;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	i = c;

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
