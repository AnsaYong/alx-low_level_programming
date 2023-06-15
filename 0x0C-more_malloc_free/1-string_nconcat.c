#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to use from second string
 *
 * Return: pointer to newly allocated memory on success
 * or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int size, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
		size = strlen(s1) + strlen(s2);
	size = strlen(s1) + n;
	concatenated = malloc(sizeof(char) * (size + 1));
	if (concatenated == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concatenated[i] = s1[i];
	if (n >= strlen(s2))
	{
		for (j = 0; j < strlen(s2); j++)
			concatenated[i++] = s2[j];
	}
	else
	{
		for (j = 0; j < n; j++)
			concatenated[i++] = s2[j];
	}
	concatenated[i] = '\0';

	return (concatenated);
}
