#include <stdio.h>

/**
 * main - prints the name of a program
 * @argc: stores the number of arguments passed to the function
 * @argv: stores the arguments passe to the function
 *
 * Return: 0 on success and 1 on failure
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
