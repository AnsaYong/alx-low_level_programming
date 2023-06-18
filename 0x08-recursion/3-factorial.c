#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n: number whose factorial is to be calculated
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));
}
