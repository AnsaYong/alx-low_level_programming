#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char c_arg;
	int i_arg;
	float f_arg;
	char *s_arg;
	va_list all_args;

	va_start(all_args, format);
	while ((format != NULL) && (format[i] != '\0'))
	{
		if (i > 0)
			printf(", ");
		switch (format[i])
		{
			case 'c':
				c_arg = va_arg(all_args, int);
				printf("%c", c_arg);
				break;
			case 'i':
				i_arg = va_arg(all_args, int);
				printf("%d", i_arg);
				break;
			case 'f':
				f_arg = va_arg(all_args, double);
				printf("%f", f_arg);
				break;
			case 's':
				s_arg = va_arg(all_args, char *);
				if (s_arg != NULL)
					printf("%s", s_arg);
				else
					printf("(nil)");
				break;

			default:
				break;
		}
		i++;
	}
	va_end(all_args);

	printf("\n");
}
