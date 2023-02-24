#include "main.h"

/**
 * print_line - prints a line using a number of _
 * @n: number of time - is printed
 *
 * Return: 0
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar ('_');
		}
	}
	_putchar ('\n');
}
