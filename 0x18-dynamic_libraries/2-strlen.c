#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string whose length we have to determine
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int a = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		a++;
	}

	return (a);
}
