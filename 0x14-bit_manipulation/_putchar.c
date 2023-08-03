#include <unistd.h>

/**
 * _putchar - writes char to stdout
 * @c: char to write
 *
 * Return: 1 on success or 0 on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
