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
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return 0;
	}
	else if (s1[i] < s2[i])
	{
		return -15;
	}
	else
	{
		return 15;
	}
}
