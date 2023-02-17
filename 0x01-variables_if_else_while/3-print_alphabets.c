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
	int al1 = 'a';
	int al2 = 'A';

	/* Expression */
	/* Write the Character to stdout */
	while (al1 <= 'z')
	{
		putchar(al1);
		al1++;
	}
	
	
	while (al2 <= 'Z')
	{
		putchar(al2);
		al2++;
	}
	putchar('\n');
	return (0);
}
