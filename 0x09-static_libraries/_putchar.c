#include <unistd.h>

/**
 * _putchar - prints char c to stdout
 * @c: char to print to screen
 *
 * Return: 0 on succes and -1 on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
