#include <stdarg.h>

/**
 * sum_them_all - adds all its parameters
 * @n: number of integers passed
 *
 * Return: sum of ints
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, p;
	unsigned int i = 0;
	va_list int_params;

	if (n == 0)
		return (0);

	va_start(int_params, n);

	while (i < n)
	{
		p = va_arg(int_params, int);
		sum += p;
		i++;
	}

	va_end(int_params);

	return (sum);
}
