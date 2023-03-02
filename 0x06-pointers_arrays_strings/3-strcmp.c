#include "main.h"

/**
 * _strcmp - compares two srings
 * @s1: destination string
 * @s2: source string
 *
 * Return: integer indicating the outcome of the comparison
 */

int _strcmp(char *s1, char *s2)
{
	int flag;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			flag = 15;
		}
		else
		{
			flag = 0;
		}
		s1++;
		s2++;
	}

	if (s1 < s2)
		flag *= -1;

	return (flag);
}
