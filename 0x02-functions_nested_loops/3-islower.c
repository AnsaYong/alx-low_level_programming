#include "main.c"

/**
 * _islower - checks for lowercase character
 *
 * Return: 1 if character is lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
