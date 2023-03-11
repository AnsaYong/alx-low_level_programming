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
	int sum = 0;
	int i, j;
	char *num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		num = argv[i];
		j = 0;

		while (num[j])
		{
			if (!isdigit(num[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(num);
	}

	printf("%d\n", sum);

	return (0);
}
