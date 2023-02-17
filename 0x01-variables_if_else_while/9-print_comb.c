#include <stdio.h>

/**
 * main - prints all possible combination of single digits
 *
 * Return: 0
 *
 */
int main(void)
{
	int k = 0;

	while (k < 10)
	{
		putchar ('0' + k);
		if (k < 9)
		{
			putchar (',');
			putchar (' ');
		}
		k++;
	}
	putchar ('\n');
	return (0);
}
