#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a new memory location that has 2 strings
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i = 0;
	int j = 0;
	int k, l;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	arr = malloc((i + j + 1) * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		arr[k] = s1[k];

	for (l = 0; k < i + j, l < j; k++, l++)
		arr[k] = s2[l];

	arr[k] = '\0';

	return (arr);
}
