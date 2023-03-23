#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all- prints anything
 * @format: list of all types of arguments passed to the function
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	
	char c;
	int d;
	float f;
	char *s;
	int i = 0;

	va_list params;
	va_start(params, format);

	c = (char) va_arg(params, int);
	d = va_arg(params, int);
	f = (float) va_arg(params, double);
	s = va_arg(params, char *);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", c);
				break;
			case 'd':
				printf("%d", d);
				break;
			case 'f':
				printf("%f", f);
				break;
			case 's':
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
		}
		i++;
	}

	va_end(params);
	printf("\n");
}
