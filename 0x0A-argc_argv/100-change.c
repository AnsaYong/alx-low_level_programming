#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints its name
 * @argc: number of command line arguments
 * @argv: an array containing the command line arguments
 *
 * Return: o
 */

int main(int argc, char *argv[])
{
	int coins = 0;
	int rem = 0;
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	coins = n / 25;
	rem = n % 25;

	if (rem == 0)
	{
		return (coins);
	}
	else
	{
		coins += rem / 10;
		rem = rem / 10;
	}
	if (rem == 0)
	{
		return (coins);
	}
	else
	{
		coins += rem / 5;
		rem = rem / 5;
	}
	if (rem == 0)
	{
		return (coins);
	}
        else
	{
		coins += rem / 2;
		rem = rem / 2;
	}
	if (rem == 0)
        {
	        return (coins);
	}
        else
	{
	        coins += rem / 1;
                rem = rem / 1;
		return (coins);
	}
}
