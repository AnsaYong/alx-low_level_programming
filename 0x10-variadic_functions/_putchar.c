#include <unistd.h>

/**
 * _putchar - writes char to stdout
 * &c: char to write
 *
 * Return: 0 or -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
