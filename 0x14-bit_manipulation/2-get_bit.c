#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int most_sig_bit, idx_range;

	idx_range = (sizeof(unsigned long int) * 8) - 1;

	if (index > idx_range)
	{
		/* index is out of range */
		return (-1);
	}

	most_sig_bit = 1UL << index;

	return ((n & most_sig_bit) ? 1 : 0);
}
