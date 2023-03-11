#include <stdio.h>

/**
 * main - prints its name
 * @argc: number of command line arguments
 * @argv: an array containing the command line arguments
 *
 * Return: o
 */

int main(int argc, char *argv[])
{
	int pdt;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	pdt = argv[1] * argv[2];
	printf("%d\n", pdt);

	return (0);
}
