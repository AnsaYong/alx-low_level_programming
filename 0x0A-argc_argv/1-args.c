#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: stores the number of arguments passed
 * @argv: stores the arguments passed
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", (argc - 1));

	return (0);
}
