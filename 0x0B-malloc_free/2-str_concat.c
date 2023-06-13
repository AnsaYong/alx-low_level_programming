#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: char pointer to concatenated string or NULL if it fails.
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i = 0, j = 0;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	concatenated = malloc((len1 + len2 + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	while (i < len1)
	{
		concatenated[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		concatenated[i++] = s2[j];
		j++;
	}
	concatenated[i] = '\0';

	return (concatenated);
}
