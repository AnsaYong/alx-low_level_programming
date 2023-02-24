#include <stdio.h>

/**
 * main - finds the largest prime factor of 612852475143.
 *
 * Return: 0
 */

#include <stdio.h>

int main(voi)
{
	long long number = 612852475143;
	long long factor = 2;

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
	
	printf("%lld\n", number);
	
	return (0);
}

