#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: stores the number of arguments passed
 * @argv: stores the arguments passed
 *
 * Return: 0 on success and 1 on failure
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
