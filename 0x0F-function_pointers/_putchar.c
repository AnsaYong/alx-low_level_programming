#include <unistd.h>

/**
 * _putchar - writes char to stdout
 * @c: char to be written
 *
 * Return: 0 for success or -1 for failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
