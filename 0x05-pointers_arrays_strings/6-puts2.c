#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string array whose characters will be printed
 */

void puts2(char *str)
{
	int c = 0, i = 0;

	while (str[c] != '\0')
		c++;

	while (i < c)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
