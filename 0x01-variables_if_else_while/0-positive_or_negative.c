#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to variable n
 *	and then decides whether it is positive,
 *	negative, or zero.
 *
 * Return: 0
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else
	{
		if (n < 0)
		{
			printf("%d is negative", n);
		}
		else
		{
			printf("%d is zero", n);
		}
	}
	return (0);
}
