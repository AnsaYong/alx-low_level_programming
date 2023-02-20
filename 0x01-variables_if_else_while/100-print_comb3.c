#include <stdio.h>

/**
 * main - prints all possible different combinations of 
 * 	two numbers
 *
 * Return: 0
 *
 */

int main(void)
{
	int m = 0;
	int n;

	while (m < 10)
	{
		n = m + 1;
		while (n < 10)
		{
			putchar('0' + m);
			putchar('0' + n);
			if (m < 8)
			{
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		m++;
	}
	putchar('\n');
	return (0);
}
