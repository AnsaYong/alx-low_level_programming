#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @b: string whose length is to be determined
 *
 * Return: the string length, or 0 for an empty string
 */
int _strlen(const char *b)
{
	int len = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		len++;
		b++;
	}
	return (len);
}

/**
 * _expo_bin - calculates 2 to the power of a number
 * @x: power
 *
 * Return: the exponent
 */
unsigned int _expo_bin(unsigned int x)
{
	unsigned int i = 0, _pow = 1;

	while (i < x)
	{
		_pow *= 2;
		i++;
	}
	return (_pow);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to s tring of 0 and 1 chars
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, p, len, uint = 0;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	/* inititalize i to len-1 and decrease in loop to change the power to 0 */
	i = len - 1;
	while (*b != '\0')
	{
		if (*b == 48 || *b == 49)
		{
			p = _expo_bin(i);
			uint += (*b - '0') * p;
		}
		else
			return (0);
		i--;
		b++;
	}
	return (uint);
}
