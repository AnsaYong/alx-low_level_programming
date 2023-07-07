#include "main.h"

/**
 * set_bit - sets the value of a bit in a given number to 1, at a given index
 * @n: address of the number
 * @index: index
 *
 * Return: 1 if successful, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (n == NULL)
		return (-1);

	/* check if indexx is valid */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = ~(1 << index);
	*n = (*n & mask) | (1 << index);

	return (1);
}
