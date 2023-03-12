#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argv: an array containing all the command line arguments
 * @argc: number of command line arguments
 *
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
