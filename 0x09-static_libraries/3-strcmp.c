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
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
