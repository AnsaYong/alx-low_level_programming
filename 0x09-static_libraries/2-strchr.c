#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: charcter to be found
 *
 * Return: pointer to the first occurence of the charcter or null if not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
