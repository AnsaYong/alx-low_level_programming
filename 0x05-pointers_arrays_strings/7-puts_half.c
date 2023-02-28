#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: required string array
 */

void puts_half(char *str)
{
	int c = 0, i = 0, n;

	while (str[c] != '\0')
		c++;

	if (c % 2 != 0)
	{
		n = (c - 1) / 2;

		for (i = c - n; i < c; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		n = c / 2;

		for (i = c - n; i < c; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
