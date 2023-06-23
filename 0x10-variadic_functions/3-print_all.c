#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0, j, is_arg;
	char c_arg;
	int i_arg;
	float f_arg;
	char *s_arg;
	char args[] = {'c', 'i', 'f', 's'};
	va_list all_args;

	va_start(all_args, format);
	while ((format != NULL) && (format[i] != '\0'))
	{
		j = 0;
		is_arg = 0;
		while (args[j])
		{
			if (format[i] == args[j])
			{
				is_arg = 1;
				break;
			}
			j++;
		}
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
		if ((format[i + 1] != '\0') && (is_arg != 0))
			printf(", ");
		i++;
	}
	va_end(all_args);

	printf("\n");
}
