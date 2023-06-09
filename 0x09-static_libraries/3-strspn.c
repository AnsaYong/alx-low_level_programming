#include <stdio.h>

/**
 * _strspn - gets the length of a prefix string
 * @s: string to be considered
 * @accept: string whose characters are to be searched
 *
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	for (i = 0; *(accept + i) != '\0'; i++)
	{
		for (j = 0; *(s + j) != 32; j++)
		{
			if (*(s + j) == *(accept + i))
			{
				k++;
			}
		}
	}
	return (k);
}

