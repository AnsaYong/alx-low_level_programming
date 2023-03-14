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

	l = 0;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	arr = malloc((i + j + 1) * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		arr[k] = s1[k];

	for (; k < i + j; k++)
	{
		if (l < j)
			arr[k] = s2[l];
		l++;
	}

	arr[k] = '\0';

	return (arr);
}
