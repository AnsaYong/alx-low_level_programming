#include <stdio.h>

/**
 * main - prints single digit numbers of base 10 using putchar
 *
 * Return: 0
 *
 */
int main(void)
{
	int n = 0;
	
	for (n = 0; n < 10; n++)
	{
		putchar ('0' + n);
	}
	putchar ('\n');
	return (0);
}
