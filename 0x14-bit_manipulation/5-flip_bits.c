#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int output;
	unsigned int number = 0;

	output = n ^ m;

	while (output != 0)
	{
		if (output & 1)
		{
			number++;
		}
		output >>= 1;
	}
	return (number);
}
