#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string
 * @n: number of bytes to consider from the second string
 *
 * Return: a pointer to the new memory location
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *store;
	unsigned int i, j, k, l;

	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	while (s1[i] != '\0')	/* len of s1 */
		i++;
	while (s2[j] != '\0')	/* len of s2 */
		j++;

	store = malloc(sizeof(char) * i + n + 1);
	if (store == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		store[k] = s1[k];
	if (n < j)
	{
		for (l = 0; l < n; l++)
		{
			store[k++] = s2[l];
			store[i + n + 1] = '\0';
		}
	}
	else
	{
		for (l = 0; l < j; l++)
		{
			store[k++] = s2[l];
			store[i + j] = '\0';
		}
	}
	return (store);
}
