#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 *
 * Return: 1 if character is uppercase and 0 if it is not
 *
 */

int _isupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (0);
	}
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
}
