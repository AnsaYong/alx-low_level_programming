#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0
 *
 */
int main(void)
{
	/* Declaration and assignment */
	/* Get the character to be written */
	int al = 'a';

	/* Expression */
	/* Write the Character to stdout */
	while (al <= 'z')
	{
		putchar(al);
		al++;
	}
	putchar('\n');
	return (0);
}
