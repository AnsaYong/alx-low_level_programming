#include "main.h"

/**
 * _isalpha - Checks whether a character is an alphabet or not
 *
 * @c: character to be checked
 *
 * Return: 1 if character is either an upper- or lowercase
 *	letter and 0 otherwise
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
