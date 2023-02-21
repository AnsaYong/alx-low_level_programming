#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	int a = 0, lett;

	while (a < 10)
	{
		for (lett = 'a'; lett <= 'z'; lett++)
		{
			_putchar(lett);
		}
		_putchar('\n');
		a++;
	}
}
