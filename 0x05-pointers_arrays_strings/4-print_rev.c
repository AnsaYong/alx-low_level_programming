#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string array to be printed
 */

void print_rev(char *s)
{
	int i = 0;
	int c;

	while (s[i] != '\0')
	{
		i++;
	}

	for (c = i - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
