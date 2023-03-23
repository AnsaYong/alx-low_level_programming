#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between numbers
 * @n: the last required parameter, representing the number
 * of strings passed to the function
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list params;

	va_start(params, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", (va_arg(params, char *)));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(params);
}
