#include <stdio.h>

/**
 * _strstr - loctaes a substrng
 * @haystack: string to be searched
 * @needle: string to search for
 *
 * Return: a pointer o the begining of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; *(haystack + 1) != '\0'; i++)
	{
		for (j = 0; *(needle + j); j++)
		{
			if (*(haystack + i + j) != *(needle + j))
			{
				break;
			}
		}
		if (*(needle + j) == '\0')
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
