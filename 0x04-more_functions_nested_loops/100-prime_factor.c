#include <stdio.h>

/**
 * main - finds the largest prime factor of 612852475143.
 *
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	long number = 612852475143;
	long factor = 2;

	while (factor * factor <= number)
	{
		if (number % factor == 0)
		{
			number /= factor;
		}
		else
		{
			factor += 1;
		}
	}
	
	printf("%ld\n", number);
	
	return (0);
}

