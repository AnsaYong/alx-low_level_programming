#include "main.h"

/**
 * is_prime_helper - assists the above function
 * @n: number whose primality is meant to be checked
 * @i: the current divisor being tested
 * is_prime_number - a function which dtermines if a number
 * is prime or not
 * @n: number whose primality is meant to be determined
 *
 * Return: 1 if number is prime and 0 otherwise
 *
 */

int is_prime_helper(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i + 1));
}

int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
