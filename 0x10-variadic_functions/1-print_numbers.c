#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int r;
	va_list numbs;

	if (n == 0)
		return;

	va_start(numbs, n);

	while (i < n)
	{
		r = va_arg(numbs, int);
		printf("%d", r);
		if ((i < n - 1) && (separator != NULL))
			printf("%s", separator);
		else if (separator == NULL)
			return;
		i++;
	}
	printf("\n");

	va_end(numbs);
}
