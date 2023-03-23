#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: atleast one parameter which has to be provided
 *
 * Return: the sum of all input numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list params;		/* declaring pointer variable of type va_list */

	if (n == 0)
		return (0);

	va_start(params, n);	/* second, call va_start with these 2 args */

	/* iterate through each unnamed argument */
	for (i = 0; i < n; i++)
	{
		sum += va_arg(params, unsigned int);
	}

	va_end(params);		/* done with the argument pointer variable */
	return (sum);
}
