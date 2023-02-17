#include <stdio.h>

/**
 * main - prints numbers of base 16
 *
 * Return: 0
 *
 */
int main(void)
{
	int n = 0;
	int lt = 'a';

	for (n = 0; n < 10; n++)
	{
		putchar ('0' + n);
	}
	for (lt = 'a'; lt <= 'f'; lt++)
	{
		putchar (lt);
	}
	putchar ('\n');
	return (0);
}
