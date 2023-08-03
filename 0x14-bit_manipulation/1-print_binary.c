#include "main.h"

/**
 * print_binary - prints the binary of a number to screen
 * @n: number
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		/* right shift n by 1 to get the next bits */
		print_binary(n >> 1);
	}
	/* print the least significant bit */
	_putchar((n & 1) ? '1' : '0');
}
