#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit
 * @c: input to be checked
 *
 * Return: 1 if input is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
