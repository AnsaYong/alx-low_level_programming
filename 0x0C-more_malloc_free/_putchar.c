#include <unistd.h>

/**
 * _putchar - prints char to stdout
 * &c: char to print
 *
 * Return: 0 on success and -1 if it fails
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
