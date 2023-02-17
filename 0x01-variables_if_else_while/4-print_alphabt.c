#include <stdio.h>

/**
 * main - print lowercase alphabet, excluding q and e
 *
 * Return: 0
 *
 */
int main(void)
{
	int al = 'a';

	while (al <= 'z')
	{
		if (al != 'q')
		{
			if (al != 'e')
			{
				putchar(al);
			}
		}
		al++;
	}
	putchar('\n');
	return (0);
}
