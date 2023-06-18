#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string using recursion
 * @s: pointer to string to print
 */
void _puts_recursion(char *s)
{
	/* print first character in the string */
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
