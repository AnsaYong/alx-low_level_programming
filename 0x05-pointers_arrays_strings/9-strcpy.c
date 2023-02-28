#include <stdio.h>

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: new array to fill
 * @src: array whose elements we are copying
 *
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		dest[i] = src[i];
		/* *(dest + i) = *(src + i); */
		if (src[i] == '\0')
			break;
	}
	return (dest);
}
