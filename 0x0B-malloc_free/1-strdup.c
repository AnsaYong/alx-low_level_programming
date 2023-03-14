#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy of the input string
 * @str: input string which is to be copied and ad returned
 *
 * Return: pointre to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *arr;
	int i, j;

	j = 0;

	if (str == NULL)
		return (NULL);

	while (str[j] != '\0')
		j++;

	arr = malloc((j + 1) * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= j; i++)
	{
		arr[i] = str[i];
	}

	return (arr);
}
