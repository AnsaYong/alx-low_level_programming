#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks whether a character is upper or lower case
 * @c: character to be checked
 *
 * Return: 1 if c is uppercase and 0 if it is not
 * a letter.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
