#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains the copy of a string given as
 * a parameter
 * @str: the string to be duplicated.
 *
 * Return: char pointer to copied string or NULL if it fails..
 */
char *_strdup(char *str)
{
	int len, i = 0;
	char *dup_str;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	dup_str = malloc(len + 1);
	if (dup_str == NULL)
		return (NULL);

	while (i < len)
	{
		dup_str[i] = str[i];
		i++;
	}
	dup_str[i] = '\0';

	return (dup_str);
}
