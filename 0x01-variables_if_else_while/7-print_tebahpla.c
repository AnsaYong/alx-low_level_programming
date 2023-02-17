#include <stdio.h>

/**
 * main - prints the reverse alphabet
 *
 * Return: 0
 *
 */
int main(void)
{
	int al = 'z';

	while (al >= 'a')
	{
		putchar(al);
		al--;
	}
	putchar('\n');

}
