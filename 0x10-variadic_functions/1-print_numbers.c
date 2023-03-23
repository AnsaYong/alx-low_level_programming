#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: the last required parameter, representing the number
 * of integers passed to the function
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list params;

	va_start(params, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", (va_arg(params, int)));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

	}

	printf("\n");

	va_end(params);
}
