#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *s;
	va_list string_params;

	va_start(string_params, n);

	while (i < n)
	{
		s = va_arg(string_params, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if ((i < n - 1) && (separator != NULL))
			printf("%s", separator);
		else if (separator == NULL)
			return;
		i++;
	}
	printf("\n");
	va_end(string_params);
}
