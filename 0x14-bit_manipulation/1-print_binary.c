#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int least_sig_bit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}

	/* check the least significant bit of the number using bitwise AND */
	least_sig_bit = n & 1;

	/* recursivey call the function with right-shifted value */
	print_binary(n >> 1);

	_putchar(least_sig_bit + '0');
}
