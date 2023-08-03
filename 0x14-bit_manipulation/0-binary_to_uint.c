#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int numb = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b == '1')
		{
			/* left-shift and bitwise OR with 1 */
			numb = (numb << 1) | 1;
		}
		else if (*b == '0')
		{
			/* left shift only */
			numb = numb << 1;
		}
		else
		{
			/* invalid character in the binary string */
			return (0);
		}
		b++;
	}

	return (numb);
}
