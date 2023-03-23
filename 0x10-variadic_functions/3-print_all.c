#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_char(va_list params);
void print_int(va_list params);
void print_float(va_list params);
void print_string(va_list params);
void print_all(const char * const format, ...);

/**
 * print_char - prints a char.
 * @params: a list of arguments pointing to the
 * character to be printed.
 */
void print_char(va_list params)
{
	printf("%c", va_arg(params, int));
}

/**
 * print_int - prints an integer
 * @params: list of arguments pointing to the
 * integer to be printed.
 */
void print_int(va_list params)
{
	printf("%d", va_arg(params, int));
}

/**
 * print_float - prints a float
 * @params: list of arguments pointing to the
 * float tto be printed.
 */
void print_float(va_list params)
{
	printf("%f", va_arg(params, double));
}

/**
 * print_string - prints a string
 * @params: list of arguments pointing to the
 * string to be printed.
 */
void print_string(va_list params)
{
	char *str = va_arg(params, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - Prints anything, followed by a new line.
 * @format: A string of characters representing the argument types.
 * @...: a variable number of arguments to be printed.
 */

void print_all(const char * const format, ...)
{
	va_list params;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(params, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(params);
			separator = ", ";
		}
		i++;
	}

	printf("\n");
	va_end(params);
}
